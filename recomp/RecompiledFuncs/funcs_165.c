#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8022C15C_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C15C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022C160: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022C164: jal         0x8004F418
    // 0x8022C168: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x8022C168: nop

    after_0:
    // 0x8022C16C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022C170: jr          $ra
    // 0x8022C174: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022C174: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B650_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B650: jr          $ra
    // 0x8022B654: nop

    TRACE_RETURN()
    return;
    // 0x8022B654: nop

    // 0x8022B658: nop

    // 0x8022B65C: nop

;}
RECOMP_FUNC void func_8022AA5C_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AA5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022AA60: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022AA64: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022AA68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022AA6C: lbu         $v0, 0x363($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X363);
    // 0x8022AA70: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022AA74: beq         $v0, $zero, L_8022AB48
    if (ctx->r2 == 0) {
        // 0x8022AA78: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_8022AB48;
    }
    // 0x8022AA78: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022AA7C: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022AA80: jal         0x8004DA90
    // 0x8022AA84: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8022AA84: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x8022AA88: lbu         $v0, 0x367($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X367);
    // 0x8022AA8C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022AA90: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8022AA94: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022AA98: lhu         $v1, -0x65E4($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X65E4);
    // 0x8022AA9C: lbu         $v0, 0x367($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X367);
    // 0x8022AAA0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022AAA4: sh          $v1, 0x30C($s0)
    MEM_H(0X30C, ctx->r16) = ctx->r3;
    // 0x8022AAA8: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8022AAAC: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8022AAB0: lhu         $a0, -0x65E2($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X65E2);
    // 0x8022AAB4: lbu         $v0, 0x363($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X363);
    // 0x8022AAB8: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x8022AABC: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x8022AAC0: sh          $v1, 0x30E($s0)
    MEM_H(0X30E, ctx->r16) = ctx->r3;
    // 0x8022AAC4: beq         $v0, $zero, L_8022AAE8
    if (ctx->r2 == 0) {
        // 0x8022AAC8: sh          $a0, 0x310($s0)
        MEM_H(0X310, ctx->r16) = ctx->r4;
            goto L_8022AAE8;
    }
    // 0x8022AAC8: sh          $a0, 0x310($s0)
    MEM_H(0X310, ctx->r16) = ctx->r4;
    // 0x8022AACC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022AAD0: jal         0x8004DE68
    // 0x8022AAD4: addiu       $a1, $s0, 0x30C
    ctx->r5 = ADD32(ctx->r16, 0X30C);
    func_8004DE68_29268(rdram, ctx);
        goto after_1;
    // 0x8022AAD4: addiu       $a1, $s0, 0x30C
    ctx->r5 = ADD32(ctx->r16, 0X30C);
    after_1:
    // 0x8022AAD8: lbu         $v1, 0x363($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X363);
    // 0x8022AADC: sw          $v0, 0x344($s0)
    MEM_W(0X344, ctx->r16) = ctx->r2;
    // 0x8022AAE0: andi        $v1, $v1, 0xF7
    ctx->r3 = ctx->r3 & 0XF7;
    // 0x8022AAE4: sb          $v1, 0x363($s0)
    MEM_B(0X363, ctx->r16) = ctx->r3;
L_8022AAE8:
    // 0x8022AAE8: lw          $v0, 0x344($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X344);
    // 0x8022AAEC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022AAF0: addiu       $a1, $s0, 0x30C
    ctx->r5 = ADD32(ctx->r16, 0X30C);
    // 0x8022AAF4: jal         0x8004DE68
    // 0x8022AAF8: sw          $v0, 0x348($s0)
    MEM_W(0X348, ctx->r16) = ctx->r2;
    func_8004DE68_29268(rdram, ctx);
        goto after_2;
    // 0x8022AAF8: sw          $v0, 0x348($s0)
    MEM_W(0X348, ctx->r16) = ctx->r2;
    after_2:
    // 0x8022AAFC: lw          $v1, 0x348($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X348);
    // 0x8022AB00: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8022AB04: bgez        $v1, L_8022AB48
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8022AB08: sw          $v0, 0x344($s0)
        MEM_W(0X344, ctx->r16) = ctx->r2;
            goto L_8022AB48;
    }
    // 0x8022AB08: sw          $v0, 0x344($s0)
    MEM_W(0X344, ctx->r16) = ctx->r2;
    // 0x8022AB0C: lbu         $v0, 0x367($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X367);
    // 0x8022AB10: lbu         $v1, 0x367($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X367);
    // 0x8022AB14: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022AB18: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022AB1C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022AB20: lhu         $v0, -0x65E4($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X65E4);
    // 0x8022AB24: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022AB28: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x8022AB2C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022AB30: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022AB34: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8022AB38: lhu         $v1, -0x65E2($at)
    ctx->r3 = MEM_HU(ctx->r1, -0X65E2);
    // 0x8022AB3C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022AB40: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022AB44: sh          $v1, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r3;
L_8022AB48:
    // 0x8022AB48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022AB4C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022AB50: jr          $ra
    // 0x8022AB54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022AB54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022C184_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C184: lhu         $v0, 0x35E($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X35E);
    // 0x8022C188: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022C18C: sh          $v0, 0x35E($a0)
    MEM_H(0X35E, ctx->r4) = ctx->r2;
    // 0x8022C190: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x8022C194: bne         $v0, $zero, L_8022C1A0
    if (ctx->r2 != 0) {
        // 0x8022C198: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022C1A0;
    }
    // 0x8022C198: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C19C: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
L_8022C1A0:
    // 0x8022C1A0: jr          $ra
    // 0x8022C1A4: nop

    TRACE_RETURN()
    return;
    // 0x8022C1A4: nop

;}
RECOMP_FUNC void func_802259B0_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802259B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802259B4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802259B8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x802259BC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802259C0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802259C4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802259C8: lw          $v0, -0x6944($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6944);
    // 0x802259CC: jalr        $v0
    // 0x802259D0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802259D0: nop

    after_0:
    // 0x802259D4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802259D8: jr          $ra
    // 0x802259DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802259DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226198_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226198: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022619C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802261A0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802261A4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802261A8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802261AC: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x802261B0: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x802261B4: jal         0x8004FA7C
    // 0x802261B8: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x802261B8: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_0:
    // 0x802261BC: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x802261C0: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x802261C4: bne         $v0, $zero, L_802261E8
    if (ctx->r2 != 0) {
        // 0x802261C8: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_802261E8;
    }
    // 0x802261C8: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x802261CC: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x802261D0: jal         0x80227F28
    // 0x802261D4: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    func_80227F28_ovl27(rdram, ctx);
        goto after_1;
    // 0x802261D4: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    after_1:
    // 0x802261D8: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802261DC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802261E0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802261E4: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_802261E8:
    // 0x802261E8: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x802261EC: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x802261F0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x802261F4: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x802261F8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802261FC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80226200: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226204: jr          $ra
    // 0x80226208: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80226208: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80226F88_ovl27(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x80226F98: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80226F9C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80226FA0: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80226FA4: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80226FA8: jal         0x80227F38
    // 0x80226FAC: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    func_80227F38_ovl27(rdram, ctx);
        goto after_0;
    // 0x80226FAC: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    after_0:
    // 0x80226FB0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80226FB4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226FB8: sh          $v0, 0x366($s0)
    MEM_H(0X366, ctx->r16) = ctx->r2;
    // 0x80226FBC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80226FC0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80226FC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226FC8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226FCC: jr          $ra
    // 0x80226FD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226FD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802367DC_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802367DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802367E0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802367E4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802367E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802367EC: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802367F0: beq         $v1, $zero, L_80236808
    if (ctx->r3 == 0) {
        // 0x802367F4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80236808;
    }
    // 0x802367F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802367F8: beq         $v1, $v0, L_80236824
    if (ctx->r3 == ctx->r2) {
        // 0x802367FC: nop
    
            goto L_80236824;
    }
    // 0x802367FC: nop

    // 0x80236800: j           L_8023682C
    // 0x80236804: nop

        goto L_8023682C;
    // 0x80236804: nop

L_80236808:
    // 0x80236808: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023680C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x80236810: jal         0x80050294
    // 0x80236814: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80236814: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80236818: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023681C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80236820: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80236824:
    // 0x80236824: jal         0x8005044C
    // 0x80236828: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x80236828: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_8023682C:
    // 0x8023682C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80236830: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80236834: jr          $ra
    // 0x80236838: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80236838: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022F180_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F180: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F184: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022F188: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8022F18C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022F190: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022F194: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022F198: lw          $v0, -0x5F00($at)
    ctx->r2 = MEM_W(ctx->r1, -0X5F00);
    // 0x8022F19C: jalr        $v0
    // 0x8022F1A0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022F1A0: nop

    after_0:
    // 0x8022F1A4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022F1A8: jr          $ra
    // 0x8022F1AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F1AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802256B8_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802256B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802256BC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802256C0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802256C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802256C8: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x802256CC: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x802256D0: beq         $v0, $zero, L_802257D0
    if (ctx->r2 == 0) {
        // 0x802256D4: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_802257D0;
    }
    // 0x802256D4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802256D8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802256DC: addu        $at, $at, $v0
    gpr jr_addend_802256E4 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802256E0: lw          $v0, -0x3CF0($at)
    ctx->r2 = ADD32(ctx->r1, -0X3CF0);
    // 0x802256E4: jr          $v0
    // 0x802256E8: nop

    switch (jr_addend_802256E4 >> 2) {
        case 0: goto L_802256EC; break;
        case 1: goto L_80225730; break;
        case 2: goto L_80225760; break;
        case 3: goto L_80225784; break;
        case 4: goto L_802257C8; break;
        default: switch_error(__func__, 0x802256E4, 0x8023C310);
    }
    // 0x802256E8: nop

L_802256EC:
    // 0x802256EC: jal         0x8006033C
    // 0x802256F0: addiu       $a0, $zero, 0x52
    ctx->r4 = ADD32(0, 0X52);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x802256F0: addiu       $a0, $zero, 0x52
    ctx->r4 = ADD32(0, 0X52);
    after_0:
    // 0x802256F4: bne         $v0, $zero, L_802257CC
    if (ctx->r2 != 0) {
        // 0x802256F8: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_802257CC;
    }
    // 0x802256F8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802256FC: jal         0x8006033C
    // 0x80225700: addiu       $a0, $zero, 0x34
    ctx->r4 = ADD32(0, 0X34);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x80225700: addiu       $a0, $zero, 0x34
    ctx->r4 = ADD32(0, 0X34);
    after_1:
    // 0x80225704: beq         $v0, $zero, L_802257D0
    if (ctx->r2 == 0) {
        // 0x80225708: nop
    
            goto L_802257D0;
    }
    // 0x80225708: nop

    // 0x8022570C: jal         0x80060918
    // 0x80225710: nop

    func_80060918_3BD18(rdram, ctx);
        goto after_2;
    // 0x80225710: nop

    after_2:
    // 0x80225714: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80225718: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022571C: jal         0x80060DA0
    // 0x80225720: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80060DA0_3C1A0(rdram, ctx);
        goto after_3;
    // 0x80225720: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x80225724: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225728: j           L_802257CC
    // 0x8022572C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_802257CC;
    // 0x8022572C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80225730:
    // 0x80225730: jal         0x8006033C
    // 0x80225734: addiu       $a0, $zero, 0x52
    ctx->r4 = ADD32(0, 0X52);
    func_8006033C_3B73C(rdram, ctx);
        goto after_4;
    // 0x80225734: addiu       $a0, $zero, 0x52
    ctx->r4 = ADD32(0, 0X52);
    after_4:
    // 0x80225738: beq         $v0, $zero, L_802257D0
    if (ctx->r2 == 0) {
        // 0x8022573C: nop
    
            goto L_802257D0;
    }
    // 0x8022573C: nop

    // 0x80225740: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80225744: addiu       $v0, $v0, 0x4A6D
    ctx->r2 = ADD32(ctx->r2, 0X4A6D);
    // 0x80225748: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x8022574C: ori         $v1, $v1, 0x40
    ctx->r3 = ctx->r3 | 0X40;
    // 0x80225750: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
    // 0x80225754: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225758: j           L_802257CC
    // 0x8022575C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_802257CC;
    // 0x8022575C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80225760:
    // 0x80225760: jal         0x80036B58
    // 0x80225764: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_80036B58_11F58(rdram, ctx);
        goto after_5;
    // 0x80225764: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_5:
    // 0x80225768: jal         0x80036E48
    // 0x8022576C: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    func_80036E48_12248(rdram, ctx);
        goto after_6;
    // 0x8022576C: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    after_6:
    // 0x80225770: jal         0x80061724
    // 0x80225774: nop

    func_80061724_3CB24(rdram, ctx);
        goto after_7;
    // 0x80225774: nop

    after_7:
    // 0x80225778: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022577C: j           L_802257CC
    // 0x80225780: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_802257CC;
    // 0x80225780: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80225784:
    // 0x80225784: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80225788: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8022578C: bne         $v0, $zero, L_802257D0
    if (ctx->r2 != 0) {
        // 0x80225790: nop
    
            goto L_802257D0;
    }
    // 0x80225790: nop

    // 0x80225794: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80225798: lbu         $v0, -0x7388($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7388);
    // 0x8022579C: bne         $v0, $zero, L_802257D0
    if (ctx->r2 != 0) {
        // 0x802257A0: nop
    
            goto L_802257D0;
    }
    // 0x802257A0: nop

    // 0x802257A4: jal         0x80060690
    // 0x802257A8: addiu       $a0, $zero, 0x42
    ctx->r4 = ADD32(0, 0X42);
    func_80060690_3BA90(rdram, ctx);
        goto after_8;
    // 0x802257A8: addiu       $a0, $zero, 0x42
    ctx->r4 = ADD32(0, 0X42);
    after_8:
    // 0x802257AC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802257B0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802257B4: jal         0x80060DA0
    // 0x802257B8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80060DA0_3C1A0(rdram, ctx);
        goto after_9;
    // 0x802257B8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_9:
    // 0x802257BC: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802257C0: j           L_802257CC
    // 0x802257C4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_802257CC;
    // 0x802257C4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_802257C8:
    // 0x802257C8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_802257CC:
    // 0x802257CC: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_802257D0:
    // 0x802257D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802257D4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802257D8: jr          $ra
    // 0x802257DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802257DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B6F8_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B6F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B6FC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B700: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B704: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022B708: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022B70C: bne         $v0, $zero, L_8022B798
    if (ctx->r2 != 0) {
        // 0x8022B710: addiu       $a1, $s0, 0x3
        ctx->r5 = ADD32(ctx->r16, 0X3);
            goto L_8022B798;
    }
    // 0x8022B710: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    // 0x8022B714: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8022B718: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022B71C: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022B720: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022B724: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022B728: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022B72C: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022B730: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x8022B734: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022B738: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022B73C: jal         0x8004D5D4
    // 0x8022B740: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022B740: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x8022B744: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B748: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x8022B74C: jal         0x80050294
    // 0x8022B750: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x8022B750: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x8022B754: jal         0x800504EC
    // 0x8022B758: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800504EC_2B8EC(rdram, ctx);
        goto after_2;
    // 0x8022B758: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022B75C: jal         0x8005129C
    // 0x8022B760: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005129C_2C69C(rdram, ctx);
        goto after_3;
    // 0x8022B760: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022B764: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022B768: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022B76C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022B770: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022B774: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x8022B778: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8022B77C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022B780: lbu         $v1, -0x3A48($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3A48);
    // 0x8022B784: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022B788: bne         $v1, $v0, L_8022B798
    if (ctx->r3 != ctx->r2) {
        // 0x8022B78C: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8022B798;
    }
    // 0x8022B78C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022B790: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022B794: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_8022B798:
    // 0x8022B798: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022B79C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B7A0: jr          $ra
    // 0x8022B7A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B7A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226330_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226330: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226334: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226338: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022633C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226340: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x80226344: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80226348: jal         0x8004FA7C
    // 0x8022634C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x8022634C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_0:
    // 0x80226350: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80226354: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80226358: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022635C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226360: bne         $v0, $zero, L_802263C4
    if (ctx->r2 != 0) {
        // 0x80226364: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_802263C4;
    }
    // 0x80226364: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80226368: lh          $v1, 0x35C($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X35C);
    // 0x8022636C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226370: beq         $v1, $zero, L_802263B4
    if (ctx->r3 == 0) {
        // 0x80226374: sb          $v0, 0xA($s0)
        MEM_B(0XA, ctx->r16) = ctx->r2;
            goto L_802263B4;
    }
    // 0x80226374: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80226378: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022637C: addiu       $a1, $s0, 0x354
    ctx->r5 = ADD32(ctx->r16, 0X354);
    // 0x80226380: jal         0x8009A3B4
    // 0x80226384: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80226384: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80226388: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x8022638C: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x80226390: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x80226394: lhu         $a1, 0x352($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X352);
    // 0x80226398: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022639C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x802263A0: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x802263A4: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x802263A8: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x802263AC: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x802263B0: sh          $a1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r5;
L_802263B4:
    // 0x802263B4: lhu         $v1, 0x35C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X35C);
    // 0x802263B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802263BC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x802263C0: sh          $v0, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = ctx->r2;
L_802263C4:
    // 0x802263C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802263C8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802263CC: jr          $ra
    // 0x802263D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802263D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023548C_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023548C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80235490: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80235494: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80235498: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023549C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802354A0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802354A4: bne         $v0, $zero, L_8023552C
    if (ctx->r2 != 0) {
        // 0x802354A8: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_8023552C;
    }
    // 0x802354A8: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x802354AC: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x802354B0: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    // 0x802354B4: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x802354B8: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x802354BC: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x802354C0: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x802354C4: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x802354C8: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x802354CC: sh          $zero, 0x56($s0)
    MEM_H(0X56, ctx->r16) = 0;
    // 0x802354D0: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x802354D4: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x802354D8: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x802354DC: jal         0x8004D5D4
    // 0x802354E0: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x802354E0: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x802354E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802354E8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802354EC: jal         0x80050294
    // 0x802354F0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x802354F0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x802354F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802354F8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802354FC: jal         0x80235CD8
    // 0x80235500: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80235CD8_ovl27(rdram, ctx);
        goto after_2;
    // 0x80235500: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x80235504: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x80235508: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8023550C: lbu         $a0, 0xA($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA);
    // 0x80235510: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x80235514: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80235518: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8023551C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80235520: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x80235524: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    // 0x80235528: sb          $a0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r4;
L_8023552C:
    // 0x8023552C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80235530: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80235534: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80235538: jr          $ra
    // 0x8023553C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023553C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022E634_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E634: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8022E638: lh          $v1, 0x49C4($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X49C4);
    // 0x8022E63C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022E640: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022E644: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E648: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8022E64C: lh          $v0, 0x14($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X14);
    // 0x8022E650: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022E654: lh          $a0, 0x49C6($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X49C6);
    // 0x8022E658: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8022E65C: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x8022E660: lh          $v0, 0x16($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X16);
    // 0x8022E664: subu        $a2, $a0, $v0
    ctx->r6 = SUB32(ctx->r4, ctx->r2);
    // 0x8022E668: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022E66C: lh          $a0, 0x49C8($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X49C8);
    // 0x8022E670: addiu       $v1, $v1, 0x687E
    ctx->r3 = ADD32(ctx->r3, 0X687E);
    // 0x8022E674: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x8022E678: lh          $v0, 0x18($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X18);
    // 0x8022E67C: ori         $a1, $zero, 0xD0FC
    ctx->r5 = 0 | 0XD0FC;
    // 0x8022E680: sltu        $v1, $a1, $v1
    ctx->r3 = ctx->r5 < ctx->r3 ? 1 : 0;
    // 0x8022E684: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x8022E688: bne         $v1, $zero, L_8022E6AC
    if (ctx->r3 != 0) {
        // 0x8022E68C: sw          $a0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r4;
            goto L_8022E6AC;
    }
    // 0x8022E68C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8022E690: addiu       $v0, $a2, 0x687E
    ctx->r2 = ADD32(ctx->r6, 0X687E);
    // 0x8022E694: sltu        $v0, $a1, $v0
    ctx->r2 = ctx->r5 < ctx->r2 ? 1 : 0;
    // 0x8022E698: bne         $v0, $zero, L_8022E6AC
    if (ctx->r2 != 0) {
        // 0x8022E69C: addiu       $v0, $a0, 0x687E
        ctx->r2 = ADD32(ctx->r4, 0X687E);
            goto L_8022E6AC;
    }
    // 0x8022E69C: addiu       $v0, $a0, 0x687E
    ctx->r2 = ADD32(ctx->r4, 0X687E);
    // 0x8022E6A0: sltu        $v0, $a1, $v0
    ctx->r2 = ctx->r5 < ctx->r2 ? 1 : 0;
    // 0x8022E6A4: beq         $v0, $zero, L_8022E6D4
    if (ctx->r2 == 0) {
        // 0x8022E6A8: addiu       $a0, $sp, 0x18
        ctx->r4 = ADD32(ctx->r29, 0X18);
            goto L_8022E6D4;
    }
    // 0x8022E6A8: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
L_8022E6AC:
    // 0x8022E6AC: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x8022E6B0: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x8022E6B4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8022E6B8: sra         $v0, $v0, 2
    ctx->r2 = S32(SIGNED(ctx->r2) >> 2);
    // 0x8022E6BC: sra         $v1, $v1, 2
    ctx->r3 = S32(SIGNED(ctx->r3) >> 2);
    // 0x8022E6C0: sra         $a0, $a0, 2
    ctx->r4 = S32(SIGNED(ctx->r4) >> 2);
    // 0x8022E6C4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8022E6C8: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x8022E6CC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8022E6D0: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
L_8022E6D4:
    // 0x8022E6D4: jal         0x80032308
    // 0x8022E6D8: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_80032308_D708(rdram, ctx);
        goto after_0;
    // 0x8022E6D8: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_0:
    // 0x8022E6DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E6E0: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8022E6E4: jal         0x8009A3B4
    // 0x8022E6E8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022E6E8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x8022E6EC: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x8022E6F0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8022E6F4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022E6F8: jr          $ra
    // 0x8022E6FC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022E6FC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80233B28_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233B28: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80233B2C: bne         $v0, $zero, L_80233B78
    if (ctx->r2 != 0) {
        // 0x80233B30: nop
    
            goto L_80233B78;
    }
    // 0x80233B30: nop

    // 0x80233B34: lw          $v1, 0x2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X2C);
    // 0x80233B38: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80233B3C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80233B40: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80233B44: lw          $v1, 0x30($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X30);
    // 0x80233B48: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80233B4C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80233B50: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80233B54: lw          $v0, 0x2C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2C);
    // 0x80233B58: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80233B5C: sb          $v1, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r3;
    // 0x80233B60: lw          $v0, 0x2C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2C);
    // 0x80233B64: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
    // 0x80233B68: lw          $v0, 0x30($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X30);
    // 0x80233B6C: sb          $v1, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r3;
    // 0x80233B70: lw          $v0, 0x30($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X30);
    // 0x80233B74: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
L_80233B78:
    // 0x80233B78: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80233B7C: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80233B80: bne         $v1, $v0, L_80233B98
    if (ctx->r3 != ctx->r2) {
        // 0x80233B84: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_80233B98;
    }
    // 0x80233B84: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x80233B88: lw          $v0, 0x2C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2C);
    // 0x80233B8C: sb          $v1, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r3;
    // 0x80233B90: lw          $v0, 0x2C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2C);
    // 0x80233B94: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
L_80233B98:
    // 0x80233B98: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80233B9C: lhu         $v0, -0x730C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X730C);
    // 0x80233BA0: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80233BA4: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80233BA8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80233BAC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80233BB0: lh          $v0, -0x5270($at)
    ctx->r2 = MEM_H(ctx->r1, -0X5270);
    // 0x80233BB4: sll         $v0, $v0, 17
    ctx->r2 = S32(ctx->r2 << 17);
    // 0x80233BB8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80233BBC: jr          $ra
    // 0x80233BC0: sw          $v0, 0xA74($at)
    MEM_W(0XA74, ctx->r1) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80233BC0: sw          $v0, 0xA74($at)
    MEM_W(0XA74, ctx->r1) = ctx->r2;
;}
RECOMP_FUNC void func_80230B18_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230B18: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80230B1C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80230B20: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x80230B24: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80230B28: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x80230B2C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80230B30: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x80230B34: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80230B38: addiu       $s4, $zero, 0x10
    ctx->r20 = ADD32(0, 0X10);
    // 0x80230B3C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80230B40: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
L_80230B44:
    // 0x80230B44: jal         0x8004EEAC
    // 0x80230B48: nop

    func_8004EEAC_2A2AC(rdram, ctx);
        goto after_0;
    // 0x80230B48: nop

    after_0:
    // 0x80230B4C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80230B50: beq         $s0, $zero, L_80230BA8
    if (ctx->r16 == 0) {
        // 0x80230B54: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80230BA8;
    }
    // 0x80230B54: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80230B58: addiu       $a1, $s3, 0x38
    ctx->r5 = ADD32(ctx->r19, 0X38);
    // 0x80230B5C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80230B60: sb          $s2, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r18;
    // 0x80230B64: sb          $s4, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r20;
    // 0x80230B68: jal         0x8009A3B4
    // 0x80230B6C: sb          $s2, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r18;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80230B6C: sb          $s2, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r18;
    after_1:
    // 0x80230B70: lh          $a0, 0x14($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X14);
    // 0x80230B74: lh          $a1, 0x16($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X16);
    // 0x80230B78: lh          $a2, 0x18($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X18);
    // 0x80230B7C: andi        $v1, $s1, 0xFF
    ctx->r3 = ctx->r17 & 0XFF;
    // 0x80230B80: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80230B84: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80230B88: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x80230B8C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80230B90: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80230B94: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x80230B98: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x80230B9C: sw          $a0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r4;
    // 0x80230BA0: sw          $a1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r5;
    // 0x80230BA4: sw          $a2, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r6;
L_80230BA8:
    // 0x80230BA8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80230BAC: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
    // 0x80230BB0: sltiu       $v0, $v0, 0x3
    ctx->r2 = ctx->r2 < 0X3 ? 1 : 0;
    // 0x80230BB4: bne         $v0, $zero, L_80230B44
    if (ctx->r2 != 0) {
        // 0x80230BB8: nop
    
            goto L_80230B44;
    }
    // 0x80230BB8: nop

    // 0x80230BBC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80230BC0: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80230BC4: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80230BC8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80230BCC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80230BD0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80230BD4: jr          $ra
    // 0x80230BD8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80230BD8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80230BDC: nop

;}
RECOMP_FUNC void func_80234800_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234800: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80234804: bne         $v0, $zero, L_80234844
    if (ctx->r2 != 0) {
        // 0x80234808: addiu       $v0, $zero, 0xC
        ctx->r2 = ADD32(0, 0XC);
            goto L_80234844;
    }
    // 0x80234808: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8023480C: lw          $a1, 0x28($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X28);
    // 0x80234810: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x80234814: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
    // 0x80234818: lw          $a1, 0x2C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X2C);
    // 0x8023481C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80234820: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x80234824: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
    // 0x80234828: lw          $a1, 0x30($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X30);
    // 0x8023482C: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x80234830: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80234834: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x80234838: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
    // 0x8023483C: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80234840: sb          $v1, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r3;
L_80234844:
    // 0x80234844: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80234848: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8023484C: bne         $v1, $v0, L_80234870
    if (ctx->r3 != ctx->r2) {
        // 0x80234850: addiu       $v0, $zero, 0x50
        ctx->r2 = ADD32(0, 0X50);
            goto L_80234870;
    }
    // 0x80234850: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x80234854: lw          $a1, 0x28($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X28);
    // 0x80234858: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x8023485C: sb          $v0, 0x10C($a1)
    MEM_B(0X10C, ctx->r5) = ctx->r2;
    // 0x80234860: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
    // 0x80234864: sb          $v0, 0x118($a1)
    MEM_B(0X118, ctx->r5) = ctx->r2;
    // 0x80234868: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x8023486C: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
L_80234870:
    // 0x80234870: bne         $v1, $v0, L_80234884
    if (ctx->r3 != ctx->r2) {
        // 0x80234874: addiu       $v0, $zero, 0xD
        ctx->r2 = ADD32(0, 0XD);
            goto L_80234884;
    }
    // 0x80234874: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x80234878: lw          $a1, 0x28($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X28);
    // 0x8023487C: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x80234880: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
L_80234884:
    // 0x80234884: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80234888: addiu       $v0, $zero, 0x55
    ctx->r2 = ADD32(0, 0X55);
    // 0x8023488C: bne         $v1, $v0, L_802348B8
    if (ctx->r3 != ctx->r2) {
        // 0x80234890: addiu       $v0, $zero, 0x58
        ctx->r2 = ADD32(0, 0X58);
            goto L_802348B8;
    }
    // 0x80234890: addiu       $v0, $zero, 0x58
    ctx->r2 = ADD32(0, 0X58);
    // 0x80234894: lw          $a1, 0x2C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X2C);
    // 0x80234898: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8023489C: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x802348A0: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
    // 0x802348A4: lw          $a1, 0x30($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X30);
    // 0x802348A8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802348AC: sb          $v0, 0xA($a1)
    MEM_B(0XA, ctx->r5) = ctx->r2;
    // 0x802348B0: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x802348B4: addiu       $v0, $zero, 0x58
    ctx->r2 = ADD32(0, 0X58);
L_802348B8:
    // 0x802348B8: bne         $v1, $v0, L_802348D0
    if (ctx->r3 != ctx->r2) {
        // 0x802348BC: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_802348D0;
    }
    // 0x802348BC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802348C0: lw          $a1, 0x28($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X28);
    // 0x802348C4: sb          $v0, 0x10C($a1)
    MEM_B(0X10C, ctx->r5) = ctx->r2;
    // 0x802348C8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x802348CC: sb          $v0, 0x118($a1)
    MEM_B(0X118, ctx->r5) = ctx->r2;
L_802348D0:
    // 0x802348D0: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x802348D4: addiu       $v0, $zero, 0x62
    ctx->r2 = ADD32(0, 0X62);
    // 0x802348D8: bne         $v1, $v0, L_802348F8
    if (ctx->r3 != ctx->r2) {
        // 0x802348DC: addiu       $v0, $zero, 0x6D
        ctx->r2 = ADD32(0, 0X6D);
            goto L_802348F8;
    }
    // 0x802348DC: addiu       $v0, $zero, 0x6D
    ctx->r2 = ADD32(0, 0X6D);
    // 0x802348E0: lw          $a1, 0x2C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X2C);
    // 0x802348E4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802348E8: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x802348EC: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
    // 0x802348F0: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x802348F4: addiu       $v0, $zero, 0x6D
    ctx->r2 = ADD32(0, 0X6D);
L_802348F8:
    // 0x802348F8: bne         $v1, $v0, L_8023490C
    if (ctx->r3 != ctx->r2) {
        // 0x802348FC: addiu       $v0, $zero, 0xE
        ctx->r2 = ADD32(0, 0XE);
            goto L_8023490C;
    }
    // 0x802348FC: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x80234900: lw          $a1, 0x28($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X28);
    // 0x80234904: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x80234908: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
L_8023490C:
    // 0x8023490C: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80234910: addiu       $v0, $zero, 0x82
    ctx->r2 = ADD32(0, 0X82);
    // 0x80234914: bne         $v1, $v0, L_80234934
    if (ctx->r3 != ctx->r2) {
        // 0x80234918: addiu       $v0, $zero, 0x98
        ctx->r2 = ADD32(0, 0X98);
            goto L_80234934;
    }
    // 0x80234918: addiu       $v0, $zero, 0x98
    ctx->r2 = ADD32(0, 0X98);
    // 0x8023491C: lw          $a1, 0x2C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X2C);
    // 0x80234920: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80234924: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x80234928: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
    // 0x8023492C: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80234930: addiu       $v0, $zero, 0x98
    ctx->r2 = ADD32(0, 0X98);
L_80234934:
    // 0x80234934: bne         $v1, $v0, L_80234948
    if (ctx->r3 != ctx->r2) {
        // 0x80234938: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80234948;
    }
    // 0x80234938: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023493C: lw          $a1, 0x30($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X30);
    // 0x80234940: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x80234944: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
L_80234948:
    // 0x80234948: jr          $ra
    // 0x8023494C: nop

    TRACE_RETURN()
    return;
    // 0x8023494C: nop

;}
RECOMP_FUNC void func_8022F408_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F408: jr          $ra
    // 0x8022F40C: nop

    TRACE_RETURN()
    return;
    // 0x8022F40C: nop

;}
RECOMP_FUNC void func_80226CD8_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226CD8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80226CDC: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80226CE0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226CE4: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80226CE8: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    // 0x80226CEC: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80226CF0: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x80226CF4: jal         0x80227FC4
    // 0x80226CF8: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    func_80227FC4_ovl27(rdram, ctx);
        goto after_0;
    // 0x80226CF8: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    after_0:
    // 0x80226CFC: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80226D00: beq         $v0, $zero, L_80226D30
    if (ctx->r2 == 0) {
        // 0x80226D04: addiu       $v0, $zero, 0x2A
        ctx->r2 = ADD32(0, 0X2A);
            goto L_80226D30;
    }
    // 0x80226D04: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x80226D08: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x80226D0C: bne         $v1, $v0, L_80226E58
    if (ctx->r3 != ctx->r2) {
        // 0x80226D10: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80226E58;
    }
    // 0x80226D10: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226D14: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80226D18: lbu         $a0, 0xAC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XAC);
    // 0x80226D1C: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x80226D20: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x80226D24: sh          $v0, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r2;
    // 0x80226D28: j           L_80226E5C
    // 0x80226D2C: sh          $a0, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r4;
        goto L_80226E5C;
    // 0x80226D2C: sh          $a0, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r4;
L_80226D30:
    // 0x80226D30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226D34: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80226D38: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80226D3C: jal         0x8004DA90
    // 0x80226D40: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x80226D40: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x80226D44: lh          $a3, 0x354($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X354);
    // 0x80226D48: lh          $a2, 0x35C($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X35C);
    // 0x80226D4C: lh          $a1, 0x14($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X14);
    // 0x80226D50: addu        $a0, $a3, $zero
    ctx->r4 = ADD32(ctx->r7, 0);
    // 0x80226D54: addu        $v0, $a3, $a2
    ctx->r2 = ADD32(ctx->r7, ctx->r6);
    // 0x80226D58: slt         $v0, $v0, $a1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80226D5C: beq         $v0, $zero, L_80226D6C
    if (ctx->r2 == 0) {
        // 0x80226D60: addu        $v1, $a2, $zero
        ctx->r3 = ADD32(ctx->r6, 0);
            goto L_80226D6C;
    }
    // 0x80226D60: addu        $v1, $a2, $zero
    ctx->r3 = ADD32(ctx->r6, 0);
    // 0x80226D64: j           L_80226D7C
    // 0x80226D68: addu        $v0, $a0, $v1
    ctx->r2 = ADD32(ctx->r4, ctx->r3);
        goto L_80226D7C;
    // 0x80226D68: addu        $v0, $a0, $v1
    ctx->r2 = ADD32(ctx->r4, ctx->r3);
L_80226D6C:
    // 0x80226D6C: subu        $v0, $a3, $a2
    ctx->r2 = SUB32(ctx->r7, ctx->r6);
    // 0x80226D70: slt         $v0, $a1, $v0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80226D74: beq         $v0, $zero, L_80226DAC
    if (ctx->r2 == 0) {
        // 0x80226D78: subu        $v0, $a0, $v1
        ctx->r2 = SUB32(ctx->r4, ctx->r3);
            goto L_80226DAC;
    }
    // 0x80226D78: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
L_80226D7C:
    // 0x80226D7C: lhu         $a0, 0x56($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X56);
    // 0x80226D80: lhu         $v1, 0x350($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X350);
    // 0x80226D84: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x80226D88: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80226D8C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80226D90: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80226D94: sh          $v0, 0x366($s0)
    MEM_H(0X366, ctx->r16) = ctx->r2;
    // 0x80226D98: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x80226D9C: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80226DA0: addiu       $v1, $v1, 0xA
    ctx->r3 = ADD32(ctx->r3, 0XA);
    // 0x80226DA4: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x80226DA8: sh          $v1, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r3;
L_80226DAC:
    // 0x80226DAC: lh          $a3, 0x10($s1)
    ctx->r7 = MEM_H(ctx->r17, 0X10);
    // 0x80226DB0: lh          $a2, 0x16($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X16);
    // 0x80226DB4: lh          $v1, 0x18($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X18);
    // 0x80226DB8: addu        $a1, $a3, $zero
    ctx->r5 = ADD32(ctx->r7, 0);
    // 0x80226DBC: addu        $v0, $a3, $a2
    ctx->r2 = ADD32(ctx->r7, ctx->r6);
    // 0x80226DC0: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80226DC4: beq         $v0, $zero, L_80226DD8
    if (ctx->r2 == 0) {
        // 0x80226DC8: addu        $a0, $a2, $zero
        ctx->r4 = ADD32(ctx->r6, 0);
            goto L_80226DD8;
    }
    // 0x80226DC8: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    // 0x80226DCC: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80226DD0: j           L_80226DEC
    // 0x80226DD4: addu        $v0, $a1, $a0
    ctx->r2 = ADD32(ctx->r5, ctx->r4);
        goto L_80226DEC;
    // 0x80226DD4: addu        $v0, $a1, $a0
    ctx->r2 = ADD32(ctx->r5, ctx->r4);
L_80226DD8:
    // 0x80226DD8: subu        $v0, $a3, $a2
    ctx->r2 = SUB32(ctx->r7, ctx->r6);
    // 0x80226DDC: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80226DE0: beq         $v0, $zero, L_80226E1C
    if (ctx->r2 == 0) {
        // 0x80226DE4: subu        $v0, $a1, $a0
        ctx->r2 = SUB32(ctx->r5, ctx->r4);
            goto L_80226E1C;
    }
    // 0x80226DE4: subu        $v0, $a1, $a0
    ctx->r2 = SUB32(ctx->r5, ctx->r4);
    // 0x80226DE8: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
L_80226DEC:
    // 0x80226DEC: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x80226DF0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80226DF4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80226DF8: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80226DFC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80226E00: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80226E04: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x80226E08: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x80226E0C: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80226E10: sh          $v1, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r3;
    // 0x80226E14: addiu       $v0, $v0, 0xA
    ctx->r2 = ADD32(ctx->r2, 0XA);
    // 0x80226E18: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
L_80226E1C:
    // 0x80226E1C: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x80226E20: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x80226E24: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x80226E28: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226E2C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80226E30: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80226E34: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80226E38: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80226E3C: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x80226E40: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x80226E44: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80226E48: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    // 0x80226E4C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226E50: bne         $v0, $zero, L_80226E5C
    if (ctx->r2 != 0) {
        // 0x80226E54: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80226E5C;
    }
    // 0x80226E54: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80226E58:
    // 0x80226E58: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80226E5C:
    // 0x80226E5C: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x80226E60: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80226E64: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80226E68: jr          $ra
    // 0x80226E6C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80226E6C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80225D98_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225D98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225D9C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225DA0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225DA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225DA8: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x80225DAC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80225DB0: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x80225DB4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80225DB8: bne         $v0, $zero, L_80225DEC
    if (ctx->r2 != 0) {
        // 0x80225DBC: addiu       $v0, $zero, 0x49
        ctx->r2 = ADD32(0, 0X49);
            goto L_80225DEC;
    }
    // 0x80225DBC: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x80225DC0: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x80225DC4: bne         $v1, $v0, L_80225DD0
    if (ctx->r3 != ctx->r2) {
        // 0x80225DC8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80225DD0;
    }
    // 0x80225DC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225DCC: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
L_80225DD0:
    // 0x80225DD0: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x80225DD4: jal         0x80227E90
    // 0x80225DD8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_80227E90_ovl27(rdram, ctx);
        goto after_0;
    // 0x80225DD8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_0:
    // 0x80225DDC: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80225DE0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80225DE4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80225DE8: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_80225DEC:
    // 0x80225DEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225DF0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225DF4: jr          $ra
    // 0x80225DF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225DF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022F610_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F610: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F614: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F618: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022F61C: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x8022F620: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022F624: jal         0x80230024
    // 0x8022F628: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_80230024_ovl27(rdram, ctx);
        goto after_0;
    // 0x8022F628: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x8022F62C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022F630: beq         $v0, $zero, L_8022F67C
    if (ctx->r2 == 0) {
        // 0x8022F634: nop
    
            goto L_8022F67C;
    }
    // 0x8022F634: nop

    // 0x8022F638: jal         0x80230070
    // 0x8022F63C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80230070_ovl27(rdram, ctx);
        goto after_1;
    // 0x8022F63C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022F640: beq         $v0, $zero, L_8022F654
    if (ctx->r2 == 0) {
        // 0x8022F644: nop
    
            goto L_8022F654;
    }
    // 0x8022F644: nop

    // 0x8022F648: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022F64C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022F650: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022F654:
    // 0x8022F654: lw          $v0, 0x4C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4C);
    // 0x8022F658: lui         $v1, 0x2000
    ctx->r3 = S32(0X2000 << 16);
    // 0x8022F65C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022F660: beq         $v0, $zero, L_8022F67C
    if (ctx->r2 == 0) {
        // 0x8022F664: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022F67C;
    }
    // 0x8022F664: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022F668: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022F66C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022F670: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022F674: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022F678: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
L_8022F67C:
    // 0x8022F67C: lw          $v0, 0x4C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4C);
    // 0x8022F680: bgez        $v0, L_8022F6AC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022F684: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022F6AC;
    }
    // 0x8022F684: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022F688: lbu         $v1, 0xC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XC);
    // 0x8022F68C: lbu         $a0, 0x8($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X8);
    // 0x8022F690: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022F694: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x8022F698: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022F69C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8022F6A0: ori         $v1, $v1, 0x8
    ctx->r3 = ctx->r3 | 0X8;
    // 0x8022F6A4: sb          $v1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r3;
    // 0x8022F6A8: sb          $a0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r4;
L_8022F6AC:
    // 0x8022F6AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022F6B0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F6B4: jr          $ra
    // 0x8022F6B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F6B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227380_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227380: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80227384: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227388: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022738C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80227390: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80227394: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80227398: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022739C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x802273A0: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x802273A4: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x802273A8: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x802273AC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802273B0: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
    // 0x802273B4: sh          $v1, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r3;
    // 0x802273B8: jal         0x80227F28
    // 0x802273BC: sb          $a1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r5;
    func_80227F28_ovl27(rdram, ctx);
        goto after_0;
    // 0x802273BC: sb          $a1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r5;
    after_0:
    // 0x802273C0: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x802273C4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802273C8: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802273CC: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x802273D0: addiu       $s2, $s2, 0x49C4
    ctx->r18 = ADD32(ctx->r18, 0X49C4);
    // 0x802273D4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802273D8: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x802273DC: jal         0x8004F820
    // 0x802273E0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x802273E0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_1:
    // 0x802273E4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802273E8: bgez        $v0, L_80227418
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802273EC: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_80227418;
    }
    // 0x802273EC: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x802273F0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802273F4: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802273F8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802273FC: jal         0x8004F820
    // 0x80227400: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x80227400: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x80227404: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227408: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022740C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80227410: j           L_80227434
    // 0x80227414: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_80227434;
    // 0x80227414: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_80227418:
    // 0x80227418: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022741C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80227420: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80227424: jal         0x8004F820
    // 0x80227428: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x80227428: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_3:
    // 0x8022742C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227430: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_80227434:
    // 0x80227434: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80227438: sh          $v0, 0x6($s3)
    MEM_H(0X6, ctx->r19) = ctx->r2;
    // 0x8022743C: lbu         $a3, 0xC($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XC);
    // 0x80227440: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80227444: jal         0x800610AC
    // 0x80227448: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_4;
    // 0x80227448: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x8022744C: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80227450: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80227454: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80227458: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022745C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227460: jr          $ra
    // 0x80227464: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80227464: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80234F18_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234F18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80234F1C: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80234F20: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80234F24: lw          $v0, 0x10($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X10);
    // 0x80234F28: bne         $v0, $zero, L_80234F80
    if (ctx->r2 != 0) {
        // 0x80234F2C: addiu       $v1, $zero, -0x1
        ctx->r3 = ADD32(0, -0X1);
            goto L_80234F80;
    }
    // 0x80234F2C: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x80234F30: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80234F34: lw          $v0, -0x4A3C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4A3C);
    // 0x80234F38: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80234F3C: lw          $a0, -0x4944($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4944);
    // 0x80234F40: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234F44: sb          $zero, -0x3762($at)
    MEM_B(-0X3762, ctx->r1) = 0;
    // 0x80234F48: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234F4C: sb          $zero, -0x3764($at)
    MEM_B(-0X3764, ctx->r1) = 0;
    // 0x80234F50: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234F54: sb          $v1, -0x3763($at)
    MEM_B(-0X3763, ctx->r1) = ctx->r3;
    // 0x80234F58: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234F5C: sb          $zero, -0x375F($at)
    MEM_B(-0X375F, ctx->r1) = 0;
    // 0x80234F60: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234F64: sb          $zero, -0x3761($at)
    MEM_B(-0X3761, ctx->r1) = 0;
    // 0x80234F68: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234F6C: sb          $v1, -0x3760($at)
    MEM_B(-0X3760, ctx->r1) = ctx->r3;
    // 0x80234F70: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234F74: sw          $v0, -0x376C($at)
    MEM_W(-0X376C, ctx->r1) = ctx->r2;
    // 0x80234F78: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234F7C: sw          $a0, -0x3768($at)
    MEM_W(-0X3768, ctx->r1) = ctx->r4;
L_80234F80:
    // 0x80234F80: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x80234F84: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x80234F88: bne         $v1, $v0, L_80234FE0
    if (ctx->r3 != ctx->r2) {
        // 0x80234F8C: addiu       $v1, $zero, -0x1
        ctx->r3 = ADD32(0, -0X1);
            goto L_80234FE0;
    }
    // 0x80234F8C: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x80234F90: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80234F94: lw          $v0, -0x4A3C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4A3C);
    // 0x80234F98: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80234F9C: lw          $a0, -0x4944($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4944);
    // 0x80234FA0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234FA4: sb          $zero, -0x3762($at)
    MEM_B(-0X3762, ctx->r1) = 0;
    // 0x80234FA8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234FAC: sb          $zero, -0x3764($at)
    MEM_B(-0X3764, ctx->r1) = 0;
    // 0x80234FB0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234FB4: sb          $v1, -0x3763($at)
    MEM_B(-0X3763, ctx->r1) = ctx->r3;
    // 0x80234FB8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234FBC: sb          $zero, -0x375F($at)
    MEM_B(-0X375F, ctx->r1) = 0;
    // 0x80234FC0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234FC4: sb          $zero, -0x3761($at)
    MEM_B(-0X3761, ctx->r1) = 0;
    // 0x80234FC8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234FCC: sb          $v1, -0x3760($at)
    MEM_B(-0X3760, ctx->r1) = ctx->r3;
    // 0x80234FD0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234FD4: sw          $v0, -0x376C($at)
    MEM_W(-0X376C, ctx->r1) = ctx->r2;
    // 0x80234FD8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234FDC: sw          $a0, -0x3768($at)
    MEM_W(-0X3768, ctx->r1) = ctx->r4;
L_80234FE0:
    // 0x80234FE0: jal         0x80234340
    // 0x80234FE4: nop

    func_80234340_ovl27(rdram, ctx);
        goto after_0;
    // 0x80234FE4: nop

    after_0:
    // 0x80234FE8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80234FEC: jr          $ra
    // 0x80234FF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80234FF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80234148_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234148: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8023414C: lb          $v0, -0x377E($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X377E);
    // 0x80234150: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80234154: lw          $v1, -0x3778($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3778);
    // 0x80234158: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x8023415C: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x80234160: addiu       $a1, $a1, -0x3780
    ctx->r5 = ADD32(ctx->r5, -0X3780);
    // 0x80234164: addu        $v1, $v0, $v1
    ctx->r3 = ADD32(ctx->r2, ctx->r3);
    // 0x80234168: lb          $a0, 0x1($v1)
    ctx->r4 = MEM_B(ctx->r3, 0X1);
    // 0x8023416C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80234170: addiu       $v0, $zero, 0x7E
    ctx->r2 = ADD32(0, 0X7E);
    // 0x80234174: beq         $a0, $v0, L_8023419C
    if (ctx->r4 == ctx->r2) {
        // 0x80234178: addiu       $sp, $sp, -0x10
        ctx->r29 = ADD32(ctx->r29, -0X10);
            goto L_8023419C;
    }
    // 0x80234178: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8023417C: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x80234180: bne         $a0, $v0, L_80234194
    if (ctx->r4 != ctx->r2) {
        // 0x80234184: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_80234194;
    }
    // 0x80234184: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x80234188: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023418C: j           L_8023419C
    // 0x80234190: sb          $zero, -0x377E($at)
    MEM_B(-0X377E, ctx->r1) = 0;
        goto L_8023419C;
    // 0x80234190: sb          $zero, -0x377E($at)
    MEM_B(-0X377E, ctx->r1) = 0;
L_80234194:
    // 0x80234194: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234198: sb          $v0, -0x377E($at)
    MEM_B(-0X377E, ctx->r1) = ctx->r2;
L_8023419C:
    // 0x8023419C: lb          $v1, 0x2($a1)
    ctx->r3 = MEM_B(ctx->r5, 0X2);
    // 0x802341A0: lw          $v0, 0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X8);
    // 0x802341A4: lb          $a0, 0x5($a1)
    ctx->r4 = MEM_B(ctx->r5, 0X5);
    // 0x802341A8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802341AC: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x802341B0: lw          $v0, 0xC($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XC);
    // 0x802341B4: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x802341B8: sb          $v1, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r3;
    // 0x802341BC: sb          $v1, 0x1($a1)
    MEM_B(0X1, ctx->r5) = ctx->r3;
    // 0x802341C0: lb          $v1, 0x1($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X1);
    // 0x802341C4: addiu       $v0, $zero, 0x7E
    ctx->r2 = ADD32(0, 0X7E);
    // 0x802341C8: beq         $v1, $v0, L_802341E4
    if (ctx->r3 == ctx->r2) {
        // 0x802341CC: addiu       $v0, $zero, 0x7F
        ctx->r2 = ADD32(0, 0X7F);
            goto L_802341E4;
    }
    // 0x802341CC: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x802341D0: bne         $v1, $v0, L_802341E0
    if (ctx->r3 != ctx->r2) {
        // 0x802341D4: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_802341E0;
    }
    // 0x802341D4: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x802341D8: j           L_802341E4
    // 0x802341DC: sb          $zero, 0x5($a1)
    MEM_B(0X5, ctx->r5) = 0;
        goto L_802341E4;
    // 0x802341DC: sb          $zero, 0x5($a1)
    MEM_B(0X5, ctx->r5) = 0;
L_802341E0:
    // 0x802341E0: sb          $v0, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r2;
L_802341E4:
    // 0x802341E4: lb          $v1, 0x5($a1)
    ctx->r3 = MEM_B(ctx->r5, 0X5);
    // 0x802341E8: lw          $v0, 0xC($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XC);
    // 0x802341EC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802341F0: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x802341F4: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x802341F8: sb          $v0, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r2;
    // 0x802341FC: sb          $v0, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r2;
    // 0x80234200: sb          $v1, 0x168($a2)
    MEM_B(0X168, ctx->r6) = ctx->r3;
    // 0x80234204: lbu         $v0, 0x3($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X3);
    // 0x80234208: sb          $v0, 0x169($a2)
    MEM_B(0X169, ctx->r6) = ctx->r2;
    // 0x8023420C: jr          $ra
    // 0x80234210: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    TRACE_RETURN()
    return;
    // 0x80234210: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_8022C6F0_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C6F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022C6F4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C6F8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C6FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022C700: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022C704: sltiu       $v0, $v1, 0x1B
    ctx->r2 = ctx->r3 < 0X1B ? 1 : 0;
    // 0x8022C708: beq         $v0, $zero, L_8022C800
    if (ctx->r2 == 0) {
        // 0x8022C70C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8022C800;
    }
    // 0x8022C70C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022C710: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022C714: addu        $at, $at, $v0
    gpr jr_addend_8022C71C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022C718: lw          $v0, -0x3A80($at)
    ctx->r2 = ADD32(ctx->r1, -0X3A80);
    // 0x8022C71C: jr          $v0
    // 0x8022C720: nop

    switch (jr_addend_8022C71C >> 2) {
        case 0: goto L_8022C724; break;
        case 1: goto L_8022C800; break;
        case 2: goto L_8022C800; break;
        case 3: goto L_8022C800; break;
        case 4: goto L_8022C800; break;
        case 5: goto L_8022C800; break;
        case 6: goto L_8022C800; break;
        case 7: goto L_8022C740; break;
        case 8: goto L_8022C75C; break;
        case 9: goto L_8022C800; break;
        case 10: goto L_8022C800; break;
        case 11: goto L_8022C800; break;
        case 12: goto L_8022C768; break;
        case 13: goto L_8022C774; break;
        case 14: goto L_8022C800; break;
        case 15: goto L_8022C780; break;
        case 16: goto L_8022C800; break;
        case 17: goto L_8022C800; break;
        case 18: goto L_8022C800; break;
        case 19: goto L_8022C800; break;
        case 20: goto L_8022C800; break;
        case 21: goto L_8022C800; break;
        case 22: goto L_8022C800; break;
        case 23: goto L_8022C800; break;
        case 24: goto L_8022C800; break;
        case 25: goto L_8022C800; break;
        case 26: goto L_8022C7C4; break;
        default: switch_error(__func__, 0x8022C71C, 0x8023C580);
    }
    // 0x8022C720: nop

L_8022C724:
    // 0x8022C724: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C728: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8022C72C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022C730: addiu       $v0, $zero, 0x1E0
    ctx->r2 = ADD32(0, 0X1E0);
    // 0x8022C734: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022C738: j           L_8022C7D0
    // 0x8022C73C: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
        goto L_8022C7D0;
    // 0x8022C73C: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
L_8022C740:
    // 0x8022C740: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022C744: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022C748: addiu       $v0, $zero, 0x1E0
    ctx->r2 = ADD32(0, 0X1E0);
    // 0x8022C74C: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022C750: addiu       $v0, $zero, -0x120
    ctx->r2 = ADD32(0, -0X120);
    // 0x8022C754: j           L_8022C800
    // 0x8022C758: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
        goto L_8022C800;
    // 0x8022C758: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
L_8022C75C:
    // 0x8022C75C: addiu       $v0, $zero, -0x40
    ctx->r2 = ADD32(0, -0X40);
    // 0x8022C760: j           L_8022C800
    // 0x8022C764: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
        goto L_8022C800;
    // 0x8022C764: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
L_8022C768:
    // 0x8022C768: addiu       $v0, $zero, -0xC0
    ctx->r2 = ADD32(0, -0XC0);
    // 0x8022C76C: j           L_8022C800
    // 0x8022C770: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
        goto L_8022C800;
    // 0x8022C770: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
L_8022C774:
    // 0x8022C774: addiu       $v0, $zero, 0x170
    ctx->r2 = ADD32(0, 0X170);
    // 0x8022C778: j           L_8022C800
    // 0x8022C77C: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
        goto L_8022C800;
    // 0x8022C77C: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
L_8022C780:
    // 0x8022C780: lh          $v1, 0x14($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X14);
    // 0x8022C784: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022C788: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022C78C: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x8022C790: lh          $a1, 0x18($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X18);
    // 0x8022C794: addiu       $v0, $zero, 0xB0
    ctx->r2 = ADD32(0, 0XB0);
    // 0x8022C798: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022C79C: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x8022C7A0: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8022C7A4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022C7A8: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022C7AC: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022C7B0: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8022C7B4: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
    // 0x8022C7B8: sw          $a0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r4;
    // 0x8022C7BC: j           L_8022C800
    // 0x8022C7C0: sw          $a1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r5;
        goto L_8022C800;
    // 0x8022C7C0: sw          $a1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r5;
L_8022C7C4:
    // 0x8022C7C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C7C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C7CC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022C7D0:
    // 0x8022C7D0: jal         0x8003E934
    // 0x8022C7D4: nop

    func_8003E934_19D34(rdram, ctx);
        goto after_0;
    // 0x8022C7D4: nop

    after_0:
    // 0x8022C7D8: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022C7DC: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x8022C7E0: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x8022C7E4: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x8022C7E8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C7EC: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022C7F0: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022C7F4: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8022C7F8: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x8022C7FC: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
L_8022C800:
    // 0x8022C800: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022C804: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022C808: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x8022C80C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C810: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022C814: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022C818: jal         0x8004DA90
    // 0x8022C81C: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x8022C81C: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    after_1:
    // 0x8022C820: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022C824: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C828: jr          $ra
    // 0x8022C82C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022C82C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80232B40_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232B40: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80232B44: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80232B48: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80232B4C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80232B50: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232B54: lbu         $v1, 0x5($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X5);
    // 0x80232B58: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80232B5C: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x80232B60: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80232B64: beq         $v1, $v0, L_80232C08
    if (ctx->r3 == ctx->r2) {
        // 0x80232B68: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80232C08;
    }
    // 0x80232B68: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80232B6C: beql        $v0, $zero, L_80232B84
    if (ctx->r2 == 0) {
        // 0x80232B70: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80232B84;
    }
    goto skip_0;
    // 0x80232B70: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80232B74: beq         $v1, $zero, L_80232B9C
    if (ctx->r3 == 0) {
        // 0x80232B78: addiu       $a0, $zero, 0x7E
        ctx->r4 = ADD32(0, 0X7E);
            goto L_80232B9C;
    }
    // 0x80232B78: addiu       $a0, $zero, 0x7E
    ctx->r4 = ADD32(0, 0X7E);
    // 0x80232B7C: j           L_80232D40
    // 0x80232B80: nop

        goto L_80232D40;
    // 0x80232B80: nop

L_80232B84:
    // 0x80232B84: beq         $v1, $v0, L_80232CC0
    if (ctx->r3 == ctx->r2) {
        // 0x80232B88: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80232CC0;
    }
    // 0x80232B88: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80232B8C: beq         $v1, $v0, L_80232CE8
    if (ctx->r3 == ctx->r2) {
        // 0x80232B90: nop
    
            goto L_80232CE8;
    }
    // 0x80232B90: nop

    // 0x80232B94: j           L_80232D40
    // 0x80232B98: nop

        goto L_80232D40;
    // 0x80232B98: nop

L_80232B9C:
    // 0x80232B9C: jal         0x8004CB2C
    // 0x80232BA0: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_0;
    // 0x80232BA0: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_0:
    // 0x80232BA4: jal         0x8002A488
    // 0x80232BA8: nop

    func_8002A488_5888(rdram, ctx);
        goto after_1;
    // 0x80232BA8: nop

    after_1:
    // 0x80232BAC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80232BB0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80232BB4: jal         0x8005F6B4
    // 0x80232BB8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_2;
    // 0x80232BB8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x80232BBC: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x80232BC0: addiu       $s0, $s0, -0x5BBC
    ctx->r16 = ADD32(ctx->r16, -0X5BBC);
    // 0x80232BC4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232BC8: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80232BCC: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x80232BD0: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80232BD4: addiu       $v0, $v0, -0x5B94
    ctx->r2 = ADD32(ctx->r2, -0X5B94);
    // 0x80232BD8: sw          $zero, 0xC($s1)
    MEM_W(0XC, ctx->r17) = 0;
    // 0x80232BDC: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
    // 0x80232BE0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80232BE4: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x80232BE8: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80232BEC: addiu       $v0, $v0, -0x5360
    ctx->r2 = ADD32(ctx->r2, -0X5360);
    // 0x80232BF0: jal         0x8005FA7C
    // 0x80232BF4: sw          $v0, 0xA4($s1)
    MEM_W(0XA4, ctx->r17) = ctx->r2;
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_3;
    // 0x80232BF4: sw          $v0, 0xA4($s1)
    MEM_W(0XA4, ctx->r17) = ctx->r2;
    after_3:
    // 0x80232BF8: jal         0x8005FA7C
    // 0x80232BFC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_4;
    // 0x80232BFC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_4:
    // 0x80232C00: j           L_80232CD8
    // 0x80232C04: nop

        goto L_80232CD8;
    // 0x80232C04: nop

L_80232C08:
    // 0x80232C08: jal         0x8006FF84
    // 0x80232C0C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_5;
    // 0x80232C0C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80232C10: beq         $v0, $zero, L_80232D40
    if (ctx->r2 == 0) {
        // 0x80232C14: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80232D40;
    }
    // 0x80232C14: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80232C18: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80232C1C: lbu         $v1, 0x4A6D($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X4A6D);
    // 0x80232C20: lbu         $a1, 0x0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X0);
    // 0x80232C24: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80232C28: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80232C2C: sb          $v0, 0x49B8($at)
    MEM_B(0X49B8, ctx->r1) = ctx->r2;
    // 0x80232C30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80232C34: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80232C38: sb          $v0, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = ctx->r2;
    // 0x80232C3C: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80232C40: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80232C44: sb          $zero, 0x4A26($at)
    MEM_B(0X4A26, ctx->r1) = 0;
    // 0x80232C48: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80232C4C: sb          $zero, 0x4A24($at)
    MEM_B(0X4A24, ctx->r1) = 0;
    // 0x80232C50: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80232C54: sh          $zero, 0x4DE8($at)
    MEM_H(0X4DE8, ctx->r1) = 0;
    // 0x80232C58: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80232C5C: sh          $zero, 0x4DEA($at)
    MEM_H(0X4DEA, ctx->r1) = 0;
    // 0x80232C60: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80232C64: sh          $zero, 0x4DEC($at)
    MEM_H(0X4DEC, ctx->r1) = 0;
    // 0x80232C68: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80232C6C: sw          $zero, 0x4DD8($at)
    MEM_W(0X4DD8, ctx->r1) = 0;
    // 0x80232C70: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80232C74: sw          $zero, 0x4DDC($at)
    MEM_W(0X4DDC, ctx->r1) = 0;
    // 0x80232C78: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80232C7C: sw          $zero, 0x4DE0($at)
    MEM_W(0X4DE0, ctx->r1) = 0;
    // 0x80232C80: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80232C84: sh          $zero, 0x4DF0($at)
    MEM_H(0X4DF0, ctx->r1) = 0;
    // 0x80232C88: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80232C8C: sh          $zero, 0x4DF2($at)
    MEM_H(0X4DF2, ctx->r1) = 0;
    // 0x80232C90: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80232C94: sh          $zero, 0x4DF4($at)
    MEM_H(0X4DF4, ctx->r1) = 0;
    // 0x80232C98: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80232C9C: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
    // 0x80232CA0: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
    // 0x80232CA4: andi        $a1, $a1, 0xFD
    ctx->r5 = ctx->r5 & 0XFD;
    // 0x80232CA8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80232CAC: sb          $v1, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r3;
    // 0x80232CB0: jal         0x802340E8
    // 0x80232CB4: sb          $a1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r5;
    func_802340E8_ovl27(rdram, ctx);
        goto after_6;
    // 0x80232CB4: sb          $a1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r5;
    after_6:
    // 0x80232CB8: j           L_80232CD8
    // 0x80232CBC: nop

        goto L_80232CD8;
    // 0x80232CBC: nop

L_80232CC0:
    // 0x80232CC0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80232CC4: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80232CC8: bne         $v0, $zero, L_80232D40
    if (ctx->r2 != 0) {
        // 0x80232CCC: lui         $a0, 0x100
        ctx->r4 = S32(0X100 << 16);
            goto L_80232D40;
    }
    // 0x80232CCC: lui         $a0, 0x100
    ctx->r4 = S32(0X100 << 16);
    // 0x80232CD0: jal         0x80036B1C
    // 0x80232CD4: ori         $a0, $a0, 0x3D01
    ctx->r4 = ctx->r4 | 0X3D01;
    func_80036B1C_11F1C(rdram, ctx);
        goto after_7;
    // 0x80232CD4: ori         $a0, $a0, 0x3D01
    ctx->r4 = ctx->r4 | 0X3D01;
    after_7:
L_80232CD8:
    // 0x80232CD8: lbu         $v0, 0x5($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X5);
    // 0x80232CDC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232CE0: j           L_80232D40
    // 0x80232CE4: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
        goto L_80232D40;
    // 0x80232CE4: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
L_80232CE8:
    // 0x80232CE8: jal         0x80036B7C
    // 0x80232CEC: nop

    func_80036B7C_11F7C(rdram, ctx);
        goto after_8;
    // 0x80232CEC: nop

    after_8:
    // 0x80232CF0: beq         $v0, $zero, L_80232D40
    if (ctx->r2 == 0) {
        // 0x80232CF4: nop
    
            goto L_80232D40;
    }
    // 0x80232CF4: nop

    // 0x80232CF8: jal         0x80060170
    // 0x80232CFC: nop

    func_80060170_3B570(rdram, ctx);
        goto after_9;
    // 0x80232CFC: nop

    after_9:
    // 0x80232D00: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80232D04: addiu       $v0, $v0, -0x5B44
    ctx->r2 = ADD32(ctx->r2, -0X5B44);
    // 0x80232D08: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80232D0C: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x80232D10: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x80232D14: lbu         $a0, 0x4($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X4);
    // 0x80232D18: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80232D1C: addiu       $v0, $v0, -0x5350
    ctx->r2 = ADD32(ctx->r2, -0X5350);
    // 0x80232D20: sw          $v0, 0xA4($s1)
    MEM_W(0XA4, ctx->r17) = ctx->r2;
    // 0x80232D24: sb          $zero, 0x5($s1)
    MEM_B(0X5, ctx->r17) = 0;
    // 0x80232D28: sb          $zero, 0x6($s1)
    MEM_B(0X6, ctx->r17) = 0;
    // 0x80232D2C: sb          $zero, 0x7($s1)
    MEM_B(0X7, ctx->r17) = 0;
    // 0x80232D30: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80232D34: andi        $v1, $v1, 0x3
    ctx->r3 = ctx->r3 & 0X3;
    // 0x80232D38: sb          $v1, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r3;
    // 0x80232D3C: sb          $a0, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r4;
L_80232D40:
    // 0x80232D40: jal         0x8006072C
    // 0x80232D44: nop

    func_8006072C_3BB2C(rdram, ctx);
        goto after_10;
    // 0x80232D44: nop

    after_10:
    // 0x80232D48: beq         $v0, $zero, L_80232D5C
    if (ctx->r2 == 0) {
        // 0x80232D4C: nop
    
            goto L_80232D5C;
    }
    // 0x80232D4C: nop

    // 0x80232D50: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80232D54: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80232D58: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_80232D5C:
    // 0x80232D5C: jal         0x8005FB90
    // 0x80232D60: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_11;
    // 0x80232D60: nop

    after_11:
    // 0x80232D64: jal         0x80060018
    // 0x80232D68: nop

    func_80060018_3B418(rdram, ctx);
        goto after_12;
    // 0x80232D68: nop

    after_12:
    // 0x80232D6C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80232D70: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80232D74: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232D78: jr          $ra
    // 0x80232D7C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80232D7C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022B8A0_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B8A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B8A4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B8A8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B8AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022B8B0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022B8B4: bne         $v0, $zero, L_8022B8DC
    if (ctx->r2 != 0) {
        // 0x8022B8B8: addiu       $a1, $zero, 0x9
        ctx->r5 = ADD32(0, 0X9);
            goto L_8022B8DC;
    }
    // 0x8022B8B8: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x8022B8BC: jal         0x80050294
    // 0x8022B8C0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8022B8C0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8022B8C4: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022B8C8: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022B8CC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022B8D0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022B8D4: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x8022B8D8: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_8022B8DC:
    // 0x8022B8DC: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022B8E0: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x8022B8E4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022B8E8: beql        $v1, $v0, L_8022B8F0
    if (ctx->r3 == ctx->r2) {
        // 0x8022B8EC: sb          $zero, 0xD($s0)
        MEM_B(0XD, ctx->r16) = 0;
            goto L_8022B8F0;
    }
    goto skip_0;
    // 0x8022B8EC: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    skip_0:
L_8022B8F0:
    // 0x8022B8F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022B8F4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B8F8: jr          $ra
    // 0x8022B8FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B8FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80235B7C_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235B7C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80235B80: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x80235B84: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80235B88: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80235B8C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80235B90: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80235B94: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x80235B98: addiu       $v0, $zero, 0xAA
    ctx->r2 = ADD32(0, 0XAA);
    // 0x80235B9C: beq         $v1, $v0, L_80235C00
    if (ctx->r3 == ctx->r2) {
        // 0x80235BA0: sw          $ra, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r31;
            goto L_80235C00;
    }
    // 0x80235BA0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80235BA4: slti        $v0, $v1, 0xAB
    ctx->r2 = SIGNED(ctx->r3) < 0XAB ? 1 : 0;
    // 0x80235BA8: beq         $v0, $zero, L_80235BC0
    if (ctx->r2 == 0) {
        // 0x80235BAC: addiu       $v0, $zero, 0x9B
        ctx->r2 = ADD32(0, 0X9B);
            goto L_80235BC0;
    }
    // 0x80235BAC: addiu       $v0, $zero, 0x9B
    ctx->r2 = ADD32(0, 0X9B);
    // 0x80235BB0: beq         $v1, $v0, L_80235BD4
    if (ctx->r3 == ctx->r2) {
        // 0x80235BB4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80235BD4;
    }
    // 0x80235BB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235BB8: j           L_80235C20
    // 0x80235BBC: nop

        goto L_80235C20;
    // 0x80235BBC: nop

L_80235BC0:
    // 0x80235BC0: addiu       $v0, $zero, 0xC8
    ctx->r2 = ADD32(0, 0XC8);
    // 0x80235BC4: beq         $v1, $v0, L_80235C10
    if (ctx->r3 == ctx->r2) {
        // 0x80235BC8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80235C10;
    }
    // 0x80235BC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235BCC: j           L_80235C20
    // 0x80235BD0: nop

        goto L_80235C20;
    // 0x80235BD0: nop

L_80235BD4:
    // 0x80235BD4: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x80235BD8: jal         0x80050294
    // 0x80235BDC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80235BDC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80235BE0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235BE4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80235BE8: addiu       $a2, $zero, 0x1B
    ctx->r6 = ADD32(0, 0X1B);
    // 0x80235BEC: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x80235BF0: jal         0x80235CD8
    // 0x80235BF4: sb          $v0, 0x114($s0)
    MEM_B(0X114, ctx->r16) = ctx->r2;
    func_80235CD8_ovl27(rdram, ctx);
        goto after_1;
    // 0x80235BF4: sb          $v0, 0x114($s0)
    MEM_B(0X114, ctx->r16) = ctx->r2;
    after_1:
    // 0x80235BF8: j           L_80235C20
    // 0x80235BFC: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
        goto L_80235C20;
    // 0x80235BFC: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
L_80235C00:
    // 0x80235C00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235C04: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80235C08: j           L_80235C18
    // 0x80235C0C: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
        goto L_80235C18;
    // 0x80235C0C: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
L_80235C10:
    // 0x80235C10: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80235C14: addiu       $a2, $zero, 0x1D
    ctx->r6 = ADD32(0, 0X1D);
L_80235C18:
    // 0x80235C18: jal         0x80235CD8
    // 0x80235C1C: nop

    func_80235CD8_ovl27(rdram, ctx);
        goto after_2;
    // 0x80235C1C: nop

    after_2:
L_80235C20:
    // 0x80235C20: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80235C24: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80235C28: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80235C2C: jr          $ra
    // 0x80235C30: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80235C30: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80228BFC_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228BFC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80228C00: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80228C04: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80228C08: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80228C0C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80228C10: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80228C14: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80228C18: lbu         $a0, 0xC($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0XC);
    // 0x80228C1C: jal         0x80053ED8
    // 0x80228C20: addiu       $s1, $s2, 0x324
    ctx->r17 = ADD32(ctx->r18, 0X324);
    func_80053ED8_2F2D8(rdram, ctx);
        goto after_0;
    // 0x80228C20: addiu       $s1, $s2, 0x324
    ctx->r17 = ADD32(ctx->r18, 0X324);
    after_0:
    // 0x80228C24: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80228C28: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x80228C2C: addiu       $a1, $s3, 0x14
    ctx->r5 = ADD32(ctx->r19, 0X14);
    // 0x80228C30: jal         0x8009A3B4
    // 0x80228C34: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80228C34: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80228C38: addiu       $s0, $s2, 0x314
    ctx->r16 = ADD32(ctx->r18, 0X314);
    // 0x80228C3C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228C40: addiu       $a1, $s3, 0x1C
    ctx->r5 = ADD32(ctx->r19, 0X1C);
    // 0x80228C44: jal         0x8009A3B4
    // 0x80228C48: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80228C48: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x80228C4C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80228C50: lh          $a2, 0x56($s3)
    ctx->r6 = MEM_H(ctx->r19, 0X56);
    // 0x80228C54: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80228C58: addiu       $a3, $zero, 0xC00
    ctx->r7 = ADD32(0, 0XC00);
    // 0x80228C5C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80228C60: jal         0x8004DBA0
    // 0x80228C64: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_3;
    // 0x80228C64: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_3:
    // 0x80228C68: addiu       $a0, $s2, 0x14
    ctx->r4 = ADD32(ctx->r18, 0X14);
    // 0x80228C6C: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x80228C70: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80228C74: jal         0x8004F820
    // 0x80228C78: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_8004F820_2AC20(rdram, ctx);
        goto after_4;
    // 0x80228C78: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_4:
    // 0x80228C7C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80228C80: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x80228C84: bne         $v0, $zero, L_80228CB4
    if (ctx->r2 != 0) {
        // 0x80228C88: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80228CB4;
    }
    // 0x80228C88: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80228C8C: lbu         $v1, 0x9($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X9);
    // 0x80228C90: beq         $v1, $v0, L_80228CB4
    if (ctx->r3 == ctx->r2) {
        // 0x80228C94: nop
    
            goto L_80228CB4;
    }
    // 0x80228C94: nop

    // 0x80228C98: lbu         $v0, 0x34D($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X34D);
    // 0x80228C9C: sb          $zero, 0x349($s2)
    MEM_B(0X349, ctx->r18) = 0;
    // 0x80228CA0: sb          $zero, 0xD($s2)
    MEM_B(0XD, ctx->r18) = 0;
    // 0x80228CA4: sb          $zero, 0xA($s2)
    MEM_B(0XA, ctx->r18) = 0;
    // 0x80228CA8: andi        $v0, $v0, 0xF7
    ctx->r2 = ctx->r2 & 0XF7;
    // 0x80228CAC: j           L_80228CC4
    // 0x80228CB0: sb          $v0, 0x34D($s2)
    MEM_B(0X34D, ctx->r18) = ctx->r2;
        goto L_80228CC4;
    // 0x80228CB0: sb          $v0, 0x34D($s2)
    MEM_B(0X34D, ctx->r18) = ctx->r2;
L_80228CB4:
    // 0x80228CB4: lhu         $v0, 0x56($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X56);
    // 0x80228CB8: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80228CBC: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80228CC0: sh          $v0, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r2;
L_80228CC4:
    // 0x80228CC4: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80228CC8: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80228CCC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80228CD0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80228CD4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80228CD8: jr          $ra
    // 0x80228CDC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80228CDC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80233F98_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233F98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80233F9C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80233FA0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80233FA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80233FA8: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x80233FAC: bne         $v0, $zero, L_80233FC8
    if (ctx->r2 != 0) {
        // 0x80233FB0: nop
    
            goto L_80233FC8;
    }
    // 0x80233FB0: nop

    // 0x80233FB4: addiu       $a0, $zero, 0x60
    ctx->r4 = ADD32(0, 0X60);
    // 0x80233FB8: jal         0x8004CB2C
    // 0x80233FBC: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_0;
    // 0x80233FBC: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_0:
    // 0x80233FC0: jal         0x802342A4
    // 0x80233FC4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_802342A4_ovl27(rdram, ctx);
        goto after_1;
    // 0x80233FC4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_1:
L_80233FC8:
    // 0x80233FC8: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x80233FCC: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
    // 0x80233FD0: bne         $v1, $v0, L_80233FE4
    if (ctx->r3 != ctx->r2) {
        // 0x80233FD4: nop
    
            goto L_80233FE4;
    }
    // 0x80233FD4: nop

    // 0x80233FD8: sb          $zero, 0x6($s0)
    MEM_B(0X6, ctx->r16) = 0;
    // 0x80233FDC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80233FE0: sw          $zero, 0xA74($at)
    MEM_W(0XA74, ctx->r1) = 0;
L_80233FE4:
    // 0x80233FE4: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x80233FE8: beq         $v0, $zero, L_80234018
    if (ctx->r2 == 0) {
        // 0x80233FEC: nop
    
            goto L_80234018;
    }
    // 0x80233FEC: nop

    // 0x80233FF0: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80233FF4: lhu         $v0, -0x730C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X730C);
    // 0x80233FF8: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80233FFC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80234000: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234004: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80234008: lh          $v0, -0x5270($at)
    ctx->r2 = MEM_H(ctx->r1, -0X5270);
    // 0x8023400C: sll         $v0, $v0, 15
    ctx->r2 = S32(ctx->r2 << 15);
    // 0x80234010: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80234014: sw          $v0, 0xA74($at)
    MEM_W(0XA74, ctx->r1) = ctx->r2;
L_80234018:
    // 0x80234018: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023401C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80234020: jr          $ra
    // 0x80234024: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80234024: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022F4D0_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F4D0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022F4D4: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022F4D8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022F4DC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8022F4E0: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8022F4E4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022F4E8: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8022F4EC: addiu       $s2, $s1, 0x3
    ctx->r18 = ADD32(ctx->r17, 0X3);
    // 0x8022F4F0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022F4F4: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x8022F4F8: jal         0x8004D5D4
    // 0x8022F4FC: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022F4FC: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    after_0:
    // 0x8022F500: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x8022F504: jal         0x8002C654
    // 0x8022F508: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_1;
    // 0x8022F508: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022F50C: lbu         $a0, 0x3($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X3);
    // 0x8022F510: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022F514: andi        $a0, $a0, 0x3
    ctx->r4 = ctx->r4 & 0X3;
    // 0x8022F518: jal         0x800319B4
    // 0x8022F51C: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    func_800319B4_CDB4(rdram, ctx);
        goto after_2;
    // 0x8022F51C: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    after_2:
    // 0x8022F520: lbu         $v1, 0x8($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X8);
    // 0x8022F524: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8022F528: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x8022F52C: sw          $v0, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->r2;
    // 0x8022F530: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022F534: addiu       $v0, $v0, -0x5EB4
    ctx->r2 = ADD32(ctx->r2, -0X5EB4);
    // 0x8022F538: sw          $v0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r2;
    // 0x8022F53C: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x8022F540: sw          $zero, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = 0;
    // 0x8022F544: sw          $zero, 0x50($s1)
    MEM_W(0X50, ctx->r17) = 0;
    // 0x8022F548: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
    // 0x8022F54C: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    // 0x8022F550: sb          $zero, 0xC($s1)
    MEM_B(0XC, ctx->r17) = 0;
    // 0x8022F554: sb          $v0, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r2;
    // 0x8022F558: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022F55C: sb          $v1, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r3;
    // 0x8022F560: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8022F564: lw          $v0, -0x3BC8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3BC8);
    // 0x8022F568: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x8022F56C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022F570: lui         $v1, 0x501
    ctx->r3 = S32(0X501 << 16);
    // 0x8022F574: bne         $v0, $v1, L_8022F5F8
    if (ctx->r2 != ctx->r3) {
        // 0x8022F578: nop
    
            goto L_8022F5F8;
    }
    // 0x8022F578: nop

    // 0x8022F57C: lb          $v0, 0xD($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XD);
    // 0x8022F580: sll         $s0, $v0, 2
    ctx->r16 = S32(ctx->r2 << 2);
    // 0x8022F584: jal         0x8006033C
    // 0x8022F588: addiu       $a0, $s0, 0x681
    ctx->r4 = ADD32(ctx->r16, 0X681);
    func_8006033C_3B73C(rdram, ctx);
        goto after_3;
    // 0x8022F588: addiu       $a0, $s0, 0x681
    ctx->r4 = ADD32(ctx->r16, 0X681);
    after_3:
    // 0x8022F58C: beq         $v0, $zero, L_8022F5A4
    if (ctx->r2 == 0) {
        // 0x8022F590: nop
    
            goto L_8022F5A4;
    }
    // 0x8022F590: nop

    // 0x8022F594: jal         0x8004F684
    // 0x8022F598: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F684_2AA84(rdram, ctx);
        goto after_4;
    // 0x8022F598: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x8022F59C: j           L_8022F5F8
    // 0x8022F5A0: nop

        goto L_8022F5F8;
    // 0x8022F5A0: nop

L_8022F5A4:
    // 0x8022F5A4: jal         0x8006033C
    // 0x8022F5A8: addiu       $a0, $s0, 0x682
    ctx->r4 = ADD32(ctx->r16, 0X682);
    func_8006033C_3B73C(rdram, ctx);
        goto after_5;
    // 0x8022F5A8: addiu       $a0, $s0, 0x682
    ctx->r4 = ADD32(ctx->r16, 0X682);
    after_5:
    // 0x8022F5AC: beq         $v0, $zero, L_8022F5DC
    if (ctx->r2 == 0) {
        // 0x8022F5B0: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022F5DC;
    }
    // 0x8022F5B0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022F5B4: lbu         $v0, 0xC($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XC);
    // 0x8022F5B8: lbu         $v1, 0x3($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X3);
    // 0x8022F5BC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022F5C0: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022F5C4: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8022F5C8: sb          $v0, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r2;
    // 0x8022F5CC: jal         0x8004D5D4
    // 0x8022F5D0: sb          $v1, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_6;
    // 0x8022F5D0: sb          $v1, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r3;
    after_6:
    // 0x8022F5D4: j           L_8022F5F8
    // 0x8022F5D8: nop

        goto L_8022F5F8;
    // 0x8022F5D8: nop

L_8022F5DC:
    // 0x8022F5DC: jal         0x8006033C
    // 0x8022F5E0: addiu       $a0, $s0, 0x683
    ctx->r4 = ADD32(ctx->r16, 0X683);
    func_8006033C_3B73C(rdram, ctx);
        goto after_7;
    // 0x8022F5E0: addiu       $a0, $s0, 0x683
    ctx->r4 = ADD32(ctx->r16, 0X683);
    after_7:
    // 0x8022F5E4: beq         $v0, $zero, L_8022F5F8
    if (ctx->r2 == 0) {
        // 0x8022F5E8: nop
    
            goto L_8022F5F8;
    }
    // 0x8022F5E8: nop

    // 0x8022F5EC: lbu         $v0, 0xC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XC);
    // 0x8022F5F0: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022F5F4: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
L_8022F5F8:
    // 0x8022F5F8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8022F5FC: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8022F600: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022F604: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022F608: jr          $ra
    // 0x8022F60C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022F60C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_802254D0_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802254D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802254D4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802254D8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802254DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802254E0: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802254E4: bne         $v0, $zero, L_80225510
    if (ctx->r2 != 0) {
        // 0x802254E8: nop
    
            goto L_80225510;
    }
    // 0x802254E8: nop

    // 0x802254EC: jal         0x8006033C
    // 0x802254F0: addiu       $a0, $zero, 0x34
    ctx->r4 = ADD32(0, 0X34);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x802254F0: addiu       $a0, $zero, 0x34
    ctx->r4 = ADD32(0, 0X34);
    after_0:
    // 0x802254F4: beq         $v0, $zero, L_80225510
    if (ctx->r2 == 0) {
        // 0x802254F8: nop
    
            goto L_80225510;
    }
    // 0x802254F8: nop

    // 0x802254FC: jal         0x80060690
    // 0x80225500: addiu       $a0, $zero, 0x41
    ctx->r4 = ADD32(0, 0X41);
    func_80060690_3BA90(rdram, ctx);
        goto after_1;
    // 0x80225500: addiu       $a0, $zero, 0x41
    ctx->r4 = ADD32(0, 0X41);
    after_1:
    // 0x80225504: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225508: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022550C: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225510:
    // 0x80225510: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225514: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225518: jr          $ra
    // 0x8022551C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022551C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B460_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B460: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022B464: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022B468: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B46C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022B470: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x8022B474: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022B478: beql        $v1, $v0, L_8022B4C0
    if (ctx->r3 == ctx->r2) {
        // 0x8022B47C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022B4C0;
    }
    goto skip_0;
    // 0x8022B47C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    skip_0:
    // 0x8022B480: lbu         $v0, 0xA6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA6);
    // 0x8022B484: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022B488: beq         $v0, $zero, L_8022B494
    if (ctx->r2 == 0) {
        // 0x8022B48C: addiu       $v0, $zero, 0x6C
        ctx->r2 = ADD32(0, 0X6C);
            goto L_8022B494;
    }
    // 0x8022B48C: addiu       $v0, $zero, 0x6C
    ctx->r2 = ADD32(0, 0X6C);
    // 0x8022B490: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
L_8022B494:
    // 0x8022B494: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022B498: lh          $a3, 0x44($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X44);
    // 0x8022B49C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022B4A0: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022B4A4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8022B4A8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8022B4AC: addiu       $a2, $a2, 0x800
    ctx->r6 = ADD32(ctx->r6, 0X800);
    // 0x8022B4B0: jal         0x8004DBA0
    // 0x8022B4B4: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_0;
    // 0x8022B4B4: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_0:
    // 0x8022B4B8: j           L_8022B4D8
    // 0x8022B4BC: nop

        goto L_8022B4D8;
    // 0x8022B4BC: nop

L_8022B4C0:
    // 0x8022B4C0: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022B4C4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022B4C8: jal         0x8004A0DC
    // 0x8022B4CC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    func_8004A0DC_254DC(rdram, ctx);
        goto after_1;
    // 0x8022B4CC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022B4D0: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x8022B4D4: sh          $v0, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r2;
L_8022B4D8:
    // 0x8022B4D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022B4DC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022B4E0: jr          $ra
    // 0x8022B4E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022B4E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80236770_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236770: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80236774: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80236778: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023677C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80236780: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80236784: beq         $v1, $zero, L_8023679C
    if (ctx->r3 == 0) {
        // 0x80236788: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023679C;
    }
    // 0x80236788: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023678C: beq         $v1, $v0, L_802367B8
    if (ctx->r3 == ctx->r2) {
        // 0x80236790: nop
    
            goto L_802367B8;
    }
    // 0x80236790: nop

    // 0x80236794: j           L_802367CC
    // 0x80236798: nop

        goto L_802367CC;
    // 0x80236798: nop

L_8023679C:
    // 0x8023679C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802367A0: addiu       $v0, $zero, -0x4B0
    ctx->r2 = ADD32(0, -0X4B0);
    // 0x802367A4: jal         0x8005044C
    // 0x802367A8: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    func_8005044C_2B84C(rdram, ctx);
        goto after_0;
    // 0x802367A8: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    after_0:
    // 0x802367AC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802367B0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802367B4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802367B8:
    // 0x802367B8: jal         0x8005044C
    // 0x802367BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x802367BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802367C0: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x802367C4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802367C8: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
L_802367CC:
    // 0x802367CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802367D0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802367D4: jr          $ra
    // 0x802367D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802367D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80235318_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235318: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x8023531C: bne         $v0, $zero, L_80235350
    if (ctx->r2 != 0) {
        // 0x80235320: addiu       $v0, $zero, 0x12
        ctx->r2 = ADD32(0, 0X12);
            goto L_80235350;
    }
    // 0x80235320: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x80235324: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x80235328: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x8023532C: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x80235330: lw          $v1, 0x2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X2C);
    // 0x80235334: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x80235338: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x8023533C: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x80235340: lw          $v1, 0x30($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X30);
    // 0x80235344: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80235348: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x8023534C: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
L_80235350:
    // 0x80235350: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80235354: addiu       $v0, $zero, 0xA0
    ctx->r2 = ADD32(0, 0XA0);
    // 0x80235358: bne         $v1, $v0, L_80235380
    if (ctx->r3 != ctx->r2) {
        // 0x8023535C: addiu       $v0, $zero, 0xB9
        ctx->r2 = ADD32(0, 0XB9);
            goto L_80235380;
    }
    // 0x8023535C: addiu       $v0, $zero, 0xB9
    ctx->r2 = ADD32(0, 0XB9);
    // 0x80235360: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x80235364: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80235368: sb          $v0, 0xA($v1)
    MEM_B(0XA, ctx->r3) = ctx->r2;
    // 0x8023536C: lw          $v1, 0x2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X2C);
    // 0x80235370: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80235374: sb          $v0, 0xA($v1)
    MEM_B(0XA, ctx->r3) = ctx->r2;
    // 0x80235378: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x8023537C: addiu       $v0, $zero, 0xB9
    ctx->r2 = ADD32(0, 0XB9);
L_80235380:
    // 0x80235380: bne         $v1, $v0, L_8023539C
    if (ctx->r3 != ctx->r2) {
        // 0x80235384: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023539C;
    }
    // 0x80235384: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80235388: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x8023538C: sb          $v0, 0xA($v1)
    MEM_B(0XA, ctx->r3) = ctx->r2;
    // 0x80235390: lw          $v1, 0x2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X2C);
    // 0x80235394: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80235398: sb          $v0, 0xA($v1)
    MEM_B(0XA, ctx->r3) = ctx->r2;
L_8023539C:
    // 0x8023539C: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x802353A0: addiu       $v0, $zero, 0xC8
    ctx->r2 = ADD32(0, 0XC8);
    // 0x802353A4: bne         $v1, $v0, L_802353C0
    if (ctx->r3 != ctx->r2) {
        // 0x802353A8: addiu       $v0, $zero, 0xE6
        ctx->r2 = ADD32(0, 0XE6);
            goto L_802353C0;
    }
    // 0x802353A8: addiu       $v0, $zero, 0xE6
    ctx->r2 = ADD32(0, 0XE6);
    // 0x802353AC: lw          $v1, 0x30($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X30);
    // 0x802353B0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802353B4: sb          $v0, 0xA($v1)
    MEM_B(0XA, ctx->r3) = ctx->r2;
    // 0x802353B8: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x802353BC: addiu       $v0, $zero, 0xE6
    ctx->r2 = ADD32(0, 0XE6);
L_802353C0:
    // 0x802353C0: bne         $v1, $v0, L_802353D4
    if (ctx->r3 != ctx->r2) {
        // 0x802353C4: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_802353D4;
    }
    // 0x802353C4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802353C8: lw          $v1, 0x30($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X30);
    // 0x802353CC: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x802353D0: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
L_802353D4:
    // 0x802353D4: jr          $ra
    // 0x802353D8: nop

    TRACE_RETURN()
    return;
    // 0x802353D8: nop

    // 0x802353DC: nop

;}
RECOMP_FUNC void func_80232398_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232398: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8023239C: lhu         $v0, -0x730C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X730C);
    // 0x802323A0: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802323A4: beq         $v0, $zero, L_802323B8
    if (ctx->r2 == 0) {
        // 0x802323A8: nop
    
            goto L_802323B8;
    }
    // 0x802323A8: nop

    // 0x802323AC: lbu         $v0, 0xE($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XE);
    // 0x802323B0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802323B4: sb          $v0, 0xE($a0)
    MEM_B(0XE, ctx->r4) = ctx->r2;
L_802323B8:
    // 0x802323B8: lb          $v0, 0xC($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XC);
    // 0x802323BC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x802323C0: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x802323C4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802323C8: lbu         $v1, -0x5DB0($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X5DB0);
    // 0x802323CC: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x802323D0: lbu         $v0, -0x3A48($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3A48);
    // 0x802323D4: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x802323D8: bne         $v0, $zero, L_802323E4
    if (ctx->r2 != 0) {
        // 0x802323DC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802323E4;
    }
    // 0x802323DC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802323E0: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
L_802323E4:
    // 0x802323E4: jr          $ra
    // 0x802323E8: nop

    TRACE_RETURN()
    return;
    // 0x802323E8: nop

;}
RECOMP_FUNC void func_80232B10_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232B10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80232B14: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80232B18: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x80232B1C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80232B20: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80232B24: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80232B28: lw          $v0, -0x5BF0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X5BF0);
    // 0x80232B2C: jalr        $v0
    // 0x80232B30: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80232B30: nop

    after_0:
    // 0x80232B34: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80232B38: jr          $ra
    // 0x80232B3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80232B3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023689C_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023689C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802368A0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802368A4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802368A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802368AC: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802368B0: beq         $v1, $zero, L_802368C8
    if (ctx->r3 == 0) {
        // 0x802368B4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802368C8;
    }
    // 0x802368B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802368B8: beq         $v1, $v0, L_802368E4
    if (ctx->r3 == ctx->r2) {
        // 0x802368BC: nop
    
            goto L_802368E4;
    }
    // 0x802368BC: nop

    // 0x802368C0: j           L_802368EC
    // 0x802368C4: nop

        goto L_802368EC;
    // 0x802368C4: nop

L_802368C8:
    // 0x802368C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802368CC: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802368D0: jal         0x80050294
    // 0x802368D4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x802368D4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x802368D8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802368DC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802368E0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802368E4:
    // 0x802368E4: jal         0x8005044C
    // 0x802368E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x802368E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_802368EC:
    // 0x802368EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802368F0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802368F4: jr          $ra
    // 0x802368F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802368F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022F288_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F288: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022F28C: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8022F290: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022F294: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x8022F298: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022F29C: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x8022F2A0: beq         $v0, $zero, L_8022F2F4
    if (ctx->r2 == 0) {
        // 0x8022F2A4: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_8022F2F4;
    }
    // 0x8022F2A4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022F2A8: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x8022F2AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F2B0: jal         0x8002C678
    // 0x8022F2B4: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    func_8002C678_7A78(rdram, ctx);
        goto after_0;
    // 0x8022F2B4: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    after_0:
    // 0x8022F2B8: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x8022F2BC: lui         $v1, 0x2AAA
    ctx->r3 = S32(0X2AAA << 16);
    // 0x8022F2C0: ori         $v1, $v1, 0xAAAB
    ctx->r3 = ctx->r3 | 0XAAAB;
    // 0x8022F2C4: sll         $v0, $v0, 12
    ctx->r2 = S32(ctx->r2 << 12);
    // 0x8022F2C8: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022F2CC: lb          $a0, 0xC($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XC);
    // 0x8022F2D0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022F2D4: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    // 0x8022F2D8: mfhi        $a2
    ctx->r6 = hi;
    // 0x8022F2DC: sra         $v0, $a2, 2
    ctx->r2 = S32(SIGNED(ctx->r6) >> 2);
    // 0x8022F2E0: nop

    // 0x8022F2E4: jal         0x800319B4
    // 0x8022F2E8: sh          $v0, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r2;
    func_800319B4_CDB4(rdram, ctx);
        goto after_1;
    // 0x8022F2E8: sh          $v0, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r2;
    after_1:
    // 0x8022F2EC: j           L_8022F300
    // 0x8022F2F0: nop

        goto L_8022F300;
    // 0x8022F2F0: nop

L_8022F2F4:
    // 0x8022F2F4: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x8022F2F8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022F2FC: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_8022F300:
    // 0x8022F300: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8022F304: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022F308: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022F30C: jr          $ra
    // 0x8022F310: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022F310: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80234340_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234340: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80234344: lb          $v0, -0x3762($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3762);
    // 0x80234348: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8023434C: lw          $v1, -0x376C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X376C);
    // 0x80234350: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x80234354: addiu       $a2, $a2, 0x49B0
    ctx->r6 = ADD32(ctx->r6, 0X49B0);
    // 0x80234358: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x8023435C: addiu       $a1, $a1, -0x3770
    ctx->r5 = ADD32(ctx->r5, -0X3770);
    // 0x80234360: addu        $v1, $v0, $v1
    ctx->r3 = ADD32(ctx->r2, ctx->r3);
    // 0x80234364: lb          $a0, 0x1($v1)
    ctx->r4 = MEM_B(ctx->r3, 0X1);
    // 0x80234368: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023436C: addiu       $v0, $zero, 0x7E
    ctx->r2 = ADD32(0, 0X7E);
    // 0x80234370: beq         $a0, $v0, L_80234398
    if (ctx->r4 == ctx->r2) {
        // 0x80234374: addiu       $sp, $sp, -0x10
        ctx->r29 = ADD32(ctx->r29, -0X10);
            goto L_80234398;
    }
    // 0x80234374: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x80234378: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x8023437C: bne         $a0, $v0, L_80234390
    if (ctx->r4 != ctx->r2) {
        // 0x80234380: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_80234390;
    }
    // 0x80234380: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x80234384: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234388: j           L_80234398
    // 0x8023438C: sb          $zero, -0x3762($at)
    MEM_B(-0X3762, ctx->r1) = 0;
        goto L_80234398;
    // 0x8023438C: sb          $zero, -0x3762($at)
    MEM_B(-0X3762, ctx->r1) = 0;
L_80234390:
    // 0x80234390: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234394: sb          $v0, -0x3762($at)
    MEM_B(-0X3762, ctx->r1) = ctx->r2;
L_80234398:
    // 0x80234398: lb          $v1, 0xE($a1)
    ctx->r3 = MEM_B(ctx->r5, 0XE);
    // 0x8023439C: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x802343A0: lb          $a0, 0x11($a1)
    ctx->r4 = MEM_B(ctx->r5, 0X11);
    // 0x802343A4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802343A8: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x802343AC: lw          $v0, 0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X8);
    // 0x802343B0: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x802343B4: sb          $v1, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r3;
    // 0x802343B8: sb          $v1, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r3;
    // 0x802343BC: lb          $v1, 0x1($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X1);
    // 0x802343C0: addiu       $v0, $zero, 0x7E
    ctx->r2 = ADD32(0, 0X7E);
    // 0x802343C4: beq         $v1, $v0, L_802343E0
    if (ctx->r3 == ctx->r2) {
        // 0x802343C8: addiu       $v0, $zero, 0x7F
        ctx->r2 = ADD32(0, 0X7F);
            goto L_802343E0;
    }
    // 0x802343C8: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x802343CC: bne         $v1, $v0, L_802343DC
    if (ctx->r3 != ctx->r2) {
        // 0x802343D0: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_802343DC;
    }
    // 0x802343D0: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x802343D4: j           L_802343E0
    // 0x802343D8: sb          $zero, 0x11($a1)
    MEM_B(0X11, ctx->r5) = 0;
        goto L_802343E0;
    // 0x802343D8: sb          $zero, 0x11($a1)
    MEM_B(0X11, ctx->r5) = 0;
L_802343DC:
    // 0x802343DC: sb          $v0, 0x11($a1)
    MEM_B(0X11, ctx->r5) = ctx->r2;
L_802343E0:
    // 0x802343E0: lb          $v1, 0x11($a1)
    ctx->r3 = MEM_B(ctx->r5, 0X11);
    // 0x802343E4: lw          $v0, 0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X8);
    // 0x802343E8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802343EC: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x802343F0: lbu         $v0, 0xC($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XC);
    // 0x802343F4: sb          $a0, 0xF($a1)
    MEM_B(0XF, ctx->r5) = ctx->r4;
    // 0x802343F8: lbu         $v1, 0xF($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0XF);
    // 0x802343FC: sb          $v0, 0x168($a2)
    MEM_B(0X168, ctx->r6) = ctx->r2;
    // 0x80234400: sb          $a0, 0x10($a1)
    MEM_B(0X10, ctx->r5) = ctx->r4;
    // 0x80234404: sb          $v1, 0x169($a2)
    MEM_B(0X169, ctx->r6) = ctx->r3;
    // 0x80234408: jr          $ra
    // 0x8023440C: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    TRACE_RETURN()
    return;
    // 0x8023440C: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_80225380_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225380: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225384: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225388: jal         0x80060798
    // 0x8022538C: nop

    func_80060798_3BB98(rdram, ctx);
        goto after_0;
    // 0x8022538C: nop

    after_0:
    // 0x80225390: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x80225394: lb          $a1, -0x3BC6($a1)
    ctx->r5 = MEM_B(ctx->r5, -0X3BC6);
    // 0x80225398: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022539C: addiu       $v0, $v0, -0x6F08
    ctx->r2 = ADD32(ctx->r2, -0X6F08);
    // 0x802253A0: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x802253A4: addiu       $a0, $a0, -0x6F10
    ctx->r4 = ADD32(ctx->r4, -0X6F10);
    // 0x802253A8: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x802253AC: jal         0x8006100C
    // 0x802253B0: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    func_8006100C_3C40C(rdram, ctx);
        goto after_1;
    // 0x802253B0: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    after_1:
    // 0x802253B4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x802253B8: sw          $zero, -0x359C($at)
    MEM_W(-0X359C, ctx->r1) = 0;
    // 0x802253BC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802253C0: jr          $ra
    // 0x802253C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802253C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E050_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E050: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022E054: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x8022E058: addiu       $v0, $zero, 0x83
    ctx->r2 = ADD32(0, 0X83);
    // 0x8022E05C: sb          $v0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r2;
    // 0x8022E060: sb          $zero, 0x3($a1)
    MEM_B(0X3, ctx->r5) = 0;
    // 0x8022E064: lhu         $v1, 0x14($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X14);
    // 0x8022E068: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022E06C: sh          $v0, 0x1E($a1)
    MEM_H(0X1E, ctx->r5) = ctx->r2;
    // 0x8022E070: sh          $v1, 0x1C($a1)
    MEM_H(0X1C, ctx->r5) = ctx->r3;
    // 0x8022E074: lhu         $v0, 0x18($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X18);
    // 0x8022E078: jr          $ra
    // 0x8022E07C: sh          $v0, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x8022E07C: sh          $v0, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_80236F38_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236F38: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80236F3C: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x80236F40: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80236F44: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80236F48: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80236F4C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80236F50: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x80236F54: addiu       $v0, $zero, 0x168
    ctx->r2 = ADD32(0, 0X168);
    // 0x80236F58: beq         $v1, $v0, L_80237060
    if (ctx->r3 == ctx->r2) {
        // 0x80236F5C: sw          $ra, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r31;
            goto L_80237060;
    }
    // 0x80236F5C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80236F60: slti        $v0, $v1, 0x169
    ctx->r2 = SIGNED(ctx->r3) < 0X169 ? 1 : 0;
    // 0x80236F64: beq         $v0, $zero, L_80236FA0
    if (ctx->r2 == 0) {
        // 0x80236F68: addiu       $v0, $zero, 0xEB
        ctx->r2 = ADD32(0, 0XEB);
            goto L_80236FA0;
    }
    // 0x80236F68: addiu       $v0, $zero, 0xEB
    ctx->r2 = ADD32(0, 0XEB);
    // 0x80236F6C: beq         $v1, $v0, L_80237004
    if (ctx->r3 == ctx->r2) {
        // 0x80236F70: slti        $v0, $v1, 0xEC
        ctx->r2 = SIGNED(ctx->r3) < 0XEC ? 1 : 0;
            goto L_80237004;
    }
    // 0x80236F70: slti        $v0, $v1, 0xEC
    ctx->r2 = SIGNED(ctx->r3) < 0XEC ? 1 : 0;
    // 0x80236F74: beq         $v0, $zero, L_80236F8C
    if (ctx->r2 == 0) {
        // 0x80236F78: addiu       $v0, $zero, 0xBA
        ctx->r2 = ADD32(0, 0XBA);
            goto L_80236F8C;
    }
    // 0x80236F78: addiu       $v0, $zero, 0xBA
    ctx->r2 = ADD32(0, 0XBA);
    // 0x80236F7C: beq         $v1, $v0, L_80236FE0
    if (ctx->r3 == ctx->r2) {
        // 0x80236F80: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80236FE0;
    }
    // 0x80236F80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236F84: j           L_80237084
    // 0x80236F88: nop

        goto L_80237084;
    // 0x80236F88: nop

L_80236F8C:
    // 0x80236F8C: addiu       $v0, $zero, 0x104
    ctx->r2 = ADD32(0, 0X104);
    // 0x80236F90: beq         $v1, $v0, L_8023701C
    if (ctx->r3 == ctx->r2) {
        // 0x80236F94: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023701C;
    }
    // 0x80236F94: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236F98: j           L_80237084
    // 0x80236F9C: nop

        goto L_80237084;
    // 0x80236F9C: nop

L_80236FA0:
    // 0x80236FA0: addiu       $v0, $zero, 0x1F4
    ctx->r2 = ADD32(0, 0X1F4);
    // 0x80236FA4: beq         $v1, $v0, L_80237054
    if (ctx->r3 == ctx->r2) {
        // 0x80236FA8: slti        $v0, $v1, 0x1F5
        ctx->r2 = SIGNED(ctx->r3) < 0X1F5 ? 1 : 0;
            goto L_80237054;
    }
    // 0x80236FA8: slti        $v0, $v1, 0x1F5
    ctx->r2 = SIGNED(ctx->r3) < 0X1F5 ? 1 : 0;
    // 0x80236FAC: beq         $v0, $zero, L_80236FC4
    if (ctx->r2 == 0) {
        // 0x80236FB0: addiu       $v0, $zero, 0x17C
        ctx->r2 = ADD32(0, 0X17C);
            goto L_80236FC4;
    }
    // 0x80236FB0: addiu       $v0, $zero, 0x17C
    ctx->r2 = ADD32(0, 0X17C);
    // 0x80236FB4: beq         $v1, $v0, L_80237040
    if (ctx->r3 == ctx->r2) {
        // 0x80236FB8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80237040;
    }
    // 0x80236FB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236FBC: j           L_80237084
    // 0x80236FC0: nop

        goto L_80237084;
    // 0x80236FC0: nop

L_80236FC4:
    // 0x80236FC4: addiu       $v0, $zero, 0x214
    ctx->r2 = ADD32(0, 0X214);
    // 0x80236FC8: beq         $v1, $v0, L_80237060
    if (ctx->r3 == ctx->r2) {
        // 0x80236FCC: addiu       $v0, $zero, 0x258
        ctx->r2 = ADD32(0, 0X258);
            goto L_80237060;
    }
    // 0x80236FCC: addiu       $v0, $zero, 0x258
    ctx->r2 = ADD32(0, 0X258);
    // 0x80236FD0: beq         $v1, $v0, L_80237078
    if (ctx->r3 == ctx->r2) {
        // 0x80236FD4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80237078;
    }
    // 0x80236FD4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236FD8: j           L_80237084
    // 0x80236FDC: nop

        goto L_80237084;
    // 0x80236FDC: nop

L_80236FE0:
    // 0x80236FE0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80236FE4: jal         0x80050294
    // 0x80236FE8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80236FE8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80236FEC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236FF0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80236FF4: jal         0x80237098
    // 0x80236FF8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80237098_ovl27(rdram, ctx);
        goto after_1;
    // 0x80236FF8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_1:
    // 0x80236FFC: j           L_80237084
    // 0x80237000: nop

        goto L_80237084;
    // 0x80237000: nop

L_80237004:
    // 0x80237004: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237008: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023700C: jal         0x80237098
    // 0x80237010: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    func_80237098_ovl27(rdram, ctx);
        goto after_2;
    // 0x80237010: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_2:
    // 0x80237014: j           L_80237084
    // 0x80237018: nop

        goto L_80237084;
    // 0x80237018: nop

L_8023701C:
    // 0x8023701C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80237020: jal         0x80050294
    // 0x80237024: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x80237024: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x80237028: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023702C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80237030: jal         0x80237098
    // 0x80237034: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_80237098_ovl27(rdram, ctx);
        goto after_4;
    // 0x80237034: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_4:
    // 0x80237038: j           L_80237084
    // 0x8023703C: nop

        goto L_80237084;
    // 0x8023703C: nop

L_80237040:
    // 0x80237040: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80237044: jal         0x80237098
    // 0x80237048: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    func_80237098_ovl27(rdram, ctx);
        goto after_5;
    // 0x80237048: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    after_5:
    // 0x8023704C: j           L_80237084
    // 0x80237050: nop

        goto L_80237084;
    // 0x80237050: nop

L_80237054:
    // 0x80237054: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237058: j           L_8023707C
    // 0x8023705C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
        goto L_8023707C;
    // 0x8023705C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
L_80237060:
    // 0x80237060: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237064: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80237068: jal         0x80237098
    // 0x8023706C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_80237098_ovl27(rdram, ctx);
        goto after_6;
    // 0x8023706C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x80237070: j           L_80237084
    // 0x80237074: nop

        goto L_80237084;
    // 0x80237074: nop

L_80237078:
    // 0x80237078: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
L_8023707C:
    // 0x8023707C: jal         0x80050294
    // 0x80237080: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_7;
    // 0x80237080: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_7:
L_80237084:
    // 0x80237084: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80237088: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023708C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80237090: jr          $ra
    // 0x80237094: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80237094: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802323EC_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802323EC: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x802323F0: lhu         $v0, -0x730C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X730C);
    // 0x802323F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802323F8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802323FC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232400: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80232404: beq         $v0, $zero, L_80232418
    if (ctx->r2 == 0) {
        // 0x80232408: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80232418;
    }
    // 0x80232408: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023240C: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x80232410: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232414: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
L_80232418:
    // 0x80232418: jal         0x8023245C
    // 0x8023241C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8023245C_ovl27(rdram, ctx);
        goto after_0;
    // 0x8023241C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80232420: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x80232424: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80232428: lbu         $v1, -0x3A48($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3A48);
    // 0x8023242C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80232430: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80232434: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80232438: lbu         $v0, -0x5DAF($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X5DAF);
    // 0x8023243C: bne         $v1, $v0, L_8023244C
    if (ctx->r3 != ctx->r2) {
        // 0x80232440: nop
    
            goto L_8023244C;
    }
    // 0x80232440: nop

    // 0x80232444: jal         0x8004F5C4
    // 0x80232448: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_1;
    // 0x80232448: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_8023244C:
    // 0x8023244C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80232450: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232454: jr          $ra
    // 0x80232458: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80232458: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226124_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226124: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226128: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022612C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226130: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226134: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x80226138: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022613C: jal         0x8004FA7C
    // 0x80226140: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x80226140: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_0:
    // 0x80226144: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x80226148: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x8022614C: bne         $v0, $zero, L_80226178
    if (ctx->r2 != 0) {
        // 0x80226150: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80226178;
    }
    // 0x80226150: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226154: lhu         $a0, 0x35C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X35C);
    // 0x80226158: lhu         $v1, 0x366($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X366);
    // 0x8022615C: lhu         $a1, 0x35E($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X35E);
    // 0x80226160: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80226164: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226168: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8022616C: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x80226170: sh          $v0, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = ctx->r2;
    // 0x80226174: sh          $v1, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r3;
L_80226178:
    // 0x80226178: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022617C: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80226180: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80226184: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80226188: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022618C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226190: jr          $ra
    // 0x80226194: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226194: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80235714_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235714: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80235718: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8023571C: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x80235720: addiu       $a1, $a0, 0x4E0
    ctx->r5 = ADD32(ctx->r4, 0X4E0);
    // 0x80235724: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x80235728: beq         $v1, $v0, L_80235770
    if (ctx->r3 == ctx->r2) {
        // 0x8023572C: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_80235770;
    }
    // 0x8023572C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80235730: slti        $v0, $v1, 0x29
    ctx->r2 = SIGNED(ctx->r3) < 0X29 ? 1 : 0;
    // 0x80235734: beq         $v0, $zero, L_80235754
    if (ctx->r2 == 0) {
        // 0x80235738: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80235754;
    }
    // 0x80235738: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8023573C: beq         $v1, $v0, L_80235770
    if (ctx->r3 == ctx->r2) {
        // 0x80235740: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_80235770;
    }
    // 0x80235740: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x80235744: beq         $v1, $v0, L_8023577C
    if (ctx->r3 == ctx->r2) {
        // 0x80235748: addiu       $a2, $zero, 0xC
        ctx->r6 = ADD32(0, 0XC);
            goto L_8023577C;
    }
    // 0x80235748: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x8023574C: j           L_80235784
    // 0x80235750: nop

        goto L_80235784;
    // 0x80235750: nop

L_80235754:
    // 0x80235754: addiu       $v0, $zero, 0x5A
    ctx->r2 = ADD32(0, 0X5A);
    // 0x80235758: beq         $v1, $v0, L_80235778
    if (ctx->r3 == ctx->r2) {
        // 0x8023575C: addiu       $v0, $zero, 0x69
        ctx->r2 = ADD32(0, 0X69);
            goto L_80235778;
    }
    // 0x8023575C: addiu       $v0, $zero, 0x69
    ctx->r2 = ADD32(0, 0X69);
    // 0x80235760: beq         $v1, $v0, L_8023577C
    if (ctx->r3 == ctx->r2) {
        // 0x80235764: addiu       $a2, $zero, 0xE
        ctx->r6 = ADD32(0, 0XE);
            goto L_8023577C;
    }
    // 0x80235764: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    // 0x80235768: j           L_80235784
    // 0x8023576C: nop

        goto L_80235784;
    // 0x8023576C: nop

L_80235770:
    // 0x80235770: j           L_8023577C
    // 0x80235774: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
        goto L_8023577C;
    // 0x80235774: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
L_80235778:
    // 0x80235778: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
L_8023577C:
    // 0x8023577C: jal         0x80235CD8
    // 0x80235780: nop

    func_80235CD8_ovl27(rdram, ctx);
        goto after_0;
    // 0x80235780: nop

    after_0:
L_80235784:
    // 0x80235784: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80235788: jr          $ra
    // 0x8023578C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023578C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022CE54_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CE54: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8022CE58: lhu         $v1, 0x0($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X0);
    // 0x8022CE5C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8022CE60: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8022CE64: lhu         $a1, 0x8($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X8);
    // 0x8022CE68: lw          $a0, 0x10($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X10);
    // 0x8022CE6C: lw          $a2, 0x14($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X14);
    // 0x8022CE70: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022CE74: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x8022CE78: addu        $v1, $a0, $v1
    ctx->r3 = ADD32(ctx->r4, ctx->r3);
    // 0x8022CE7C: andi        $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 & 0XFFFF;
    // 0x8022CE80: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022CE84: sra         $a0, $a0, 15
    ctx->r4 = S32(SIGNED(ctx->r4) >> 15);
    // 0x8022CE88: slt         $v1, $v1, $a0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8022CE8C: beq         $v1, $zero, L_8022CEB4
    if (ctx->r3 == 0) {
        // 0x8022CE90: sw          $a3, 0xC($sp)
        MEM_W(0XC, ctx->r29) = ctx->r7;
            goto L_8022CEB4;
    }
    // 0x8022CE90: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x8022CE94: lhu         $v0, 0x4($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X4);
    // 0x8022CE98: lhu         $v1, 0xC($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0XC);
    // 0x8022CE9C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022CEA0: addu        $v0, $a2, $v0
    ctx->r2 = ADD32(ctx->r6, ctx->r2);
    // 0x8022CEA4: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x8022CEA8: sll         $v1, $a2, 16
    ctx->r3 = S32(ctx->r6 << 16);
    // 0x8022CEAC: sra         $v1, $v1, 15
    ctx->r3 = S32(SIGNED(ctx->r3) >> 15);
    // 0x8022CEB0: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
L_8022CEB4:
    // 0x8022CEB4: jr          $ra
    // 0x8022CEB8: nop

    TRACE_RETURN()
    return;
    // 0x8022CEB8: nop

;}
RECOMP_FUNC void func_8023048C_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023048C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80230490: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80230494: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80230498: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8023049C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x802304A0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x802304A4: lbu         $s1, 0xA($s0)
    ctx->r17 = MEM_BU(ctx->r16, 0XA);
    // 0x802304A8: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x802304AC: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x802304B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802304B4: beq         $s1, $v0, L_8023051C
    if (ctx->r17 == ctx->r2) {
        // 0x802304B8: slti        $v0, $s1, 0x2
        ctx->r2 = SIGNED(ctx->r17) < 0X2 ? 1 : 0;
            goto L_8023051C;
    }
    // 0x802304B8: slti        $v0, $s1, 0x2
    ctx->r2 = SIGNED(ctx->r17) < 0X2 ? 1 : 0;
    // 0x802304BC: beql        $v0, $zero, L_802304D4
    if (ctx->r2 == 0) {
        // 0x802304C0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802304D4;
    }
    goto skip_0;
    // 0x802304C0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x802304C4: beq         $s1, $zero, L_802304E4
    if (ctx->r17 == 0) {
        // 0x802304C8: nop
    
            goto L_802304E4;
    }
    // 0x802304C8: nop

    // 0x802304CC: j           L_80230644
    // 0x802304D0: nop

        goto L_80230644;
    // 0x802304D0: nop

L_802304D4:
    // 0x802304D4: beq         $s1, $v0, L_8023060C
    if (ctx->r17 == ctx->r2) {
        // 0x802304D8: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_8023060C;
    }
    // 0x802304D8: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x802304DC: j           L_80230644
    // 0x802304E0: nop

        goto L_80230644;
    // 0x802304E0: nop

L_802304E4:
    // 0x802304E4: jal         0x8006FF84
    // 0x802304E8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x802304E8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_0:
    // 0x802304EC: beq         $v0, $zero, L_80230644
    if (ctx->r2 == 0) {
        // 0x802304F0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80230644;
    }
    // 0x802304F0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802304F4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802304F8: sb          $v0, 0x49B8($at)
    MEM_B(0X49B8, ctx->r1) = ctx->r2;
    // 0x802304FC: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80230500: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80230504: sb          $zero, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = 0;
    // 0x80230508: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023050C: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
    // 0x80230510: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80230514: j           L_802305FC
    // 0x80230518: sw          $zero, 0x49BC($at)
    MEM_W(0X49BC, ctx->r1) = 0;
        goto L_802305FC;
    // 0x80230518: sw          $zero, 0x49BC($at)
    MEM_W(0X49BC, ctx->r1) = 0;
L_8023051C:
    // 0x8023051C: jal         0x80230A94
    // 0x80230520: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80230A94_ovl27(rdram, ctx);
        goto after_1;
    // 0x80230520: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80230524: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80230528: beql        $v0, $zero, L_802305EC
    if (ctx->r2 == 0) {
        // 0x8023052C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_802305EC;
    }
    goto skip_1;
    // 0x8023052C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    skip_1:
    // 0x80230530: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x80230534: bne         $v0, $zero, L_80230558
    if (ctx->r2 != 0) {
        // 0x80230538: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_80230558;
    }
    // 0x80230538: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8023053C: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x80230540: lb          $a3, 0xE($s0)
    ctx->r7 = MEM_B(ctx->r16, 0XE);
    // 0x80230544: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80230548: jal         0x800610AC
    // 0x8023054C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_2;
    // 0x8023054C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x80230550: j           L_802305FC
    // 0x80230554: nop

        goto L_802305FC;
    // 0x80230554: nop

L_80230558:
    // 0x80230558: beq         $v0, $s1, L_802305FC
    if (ctx->r2 == ctx->r17) {
        // 0x8023055C: andi        $v0, $v0, 0x80
        ctx->r2 = ctx->r2 & 0X80;
            goto L_802305FC;
    }
    // 0x8023055C: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x80230560: beq         $v0, $zero, L_802305AC
    if (ctx->r2 == 0) {
        // 0x80230564: andi        $v0, $a0, 0x7F
        ctx->r2 = ctx->r4 & 0X7F;
            goto L_802305AC;
    }
    // 0x80230564: andi        $v0, $a0, 0x7F
    ctx->r2 = ctx->r4 & 0X7F;
    // 0x80230568: lbu         $v1, 0xE($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XE);
    // 0x8023056C: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80230570: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80230574: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x80230578: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023057C: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x80230580: lui         $v0, 0xCCCC
    ctx->r2 = S32(0XCCCC << 16);
    // 0x80230584: ori         $v0, $v0, 0xCCCD
    ctx->r2 = ctx->r2 | 0XCCCD;
    // 0x80230588: multu       $v1, $v0
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023058C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80230590: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80230594: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80230598: mfhi        $t0
    ctx->r8 = hi;
    // 0x8023059C: nop

    // 0x802305A0: nop

    // 0x802305A4: j           L_802305CC
    // 0x802305A8: srl         $a2, $t0, 3
    ctx->r6 = S32(U32(ctx->r8) >> 3);
        goto L_802305CC;
    // 0x802305A8: srl         $a2, $t0, 3
    ctx->r6 = S32(U32(ctx->r8) >> 3);
L_802305AC:
    // 0x802305AC: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x802305B0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802305B4: beq         $v1, $v0, L_802305E8
    if (ctx->r3 == ctx->r2) {
        // 0x802305B8: addu        $a2, $v1, $zero
        ctx->r6 = ADD32(ctx->r3, 0);
            goto L_802305E8;
    }
    // 0x802305B8: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    // 0x802305BC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802305C0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802305C4: andi        $a2, $a2, 0xFF
    ctx->r6 = ctx->r6 & 0XFF;
    // 0x802305C8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
L_802305CC:
    // 0x802305CC: jal         0x80069754
    // 0x802305D0: nop

    func_80069754_44B54(rdram, ctx);
        goto after_3;
    // 0x802305D0: nop

    after_3:
    // 0x802305D4: lb          $a0, 0xC($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XC);
    // 0x802305D8: jal         0x8006036C
    // 0x802305DC: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    func_8006036C_3B76C(rdram, ctx);
        goto after_4;
    // 0x802305DC: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    after_4:
    // 0x802305E0: j           L_802305FC
    // 0x802305E4: nop

        goto L_802305FC;
    // 0x802305E4: nop

L_802305E8:
    // 0x802305E8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_802305EC:
    // 0x802305EC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802305F0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802305F4: jal         0x80069754
    // 0x802305F8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80069754_44B54(rdram, ctx);
        goto after_5;
    // 0x802305F8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_5:
L_802305FC:
    // 0x802305FC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80230600: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230604: j           L_80230644
    // 0x80230608: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_80230644;
    // 0x80230608: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8023060C:
    // 0x8023060C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80230610: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80230614: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80230618: bne         $v0, $zero, L_80230644
    if (ctx->r2 != 0) {
        // 0x8023061C: nop
    
            goto L_80230644;
    }
    // 0x8023061C: nop

    // 0x80230620: jal         0x80070050
    // 0x80230624: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_80070050_4B450(rdram, ctx);
        goto after_6;
    // 0x80230624: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_6:
    // 0x80230628: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x8023062C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80230630: sw          $zero, 0x4B34($at)
    MEM_W(0X4B34, ctx->r1) = 0;
    // 0x80230634: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80230638: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x8023063C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80230640: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_80230644:
    // 0x80230644: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80230648: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8023064C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80230650: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80230654: jr          $ra
    // 0x80230658: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80230658: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_802368FC_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802368FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80236900: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80236904: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80236908: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023690C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80236910: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80236914: beq         $v1, $v0, L_8023697C
    if (ctx->r3 == ctx->r2) {
        // 0x80236918: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8023697C;
    }
    // 0x80236918: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8023691C: beql        $v0, $zero, L_80236934
    if (ctx->r2 == 0) {
        // 0x80236920: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80236934;
    }
    goto skip_0;
    // 0x80236920: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80236924: beq         $v1, $zero, L_8023694C
    if (ctx->r3 == 0) {
        // 0x80236928: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023694C;
    }
    // 0x80236928: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023692C: j           L_802369B8
    // 0x80236930: nop

        goto L_802369B8;
    // 0x80236930: nop

L_80236934:
    // 0x80236934: beq         $v1, $v0, L_80236998
    if (ctx->r3 == ctx->r2) {
        // 0x80236938: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80236998;
    }
    // 0x80236938: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023693C: beq         $v1, $v0, L_802369B0
    if (ctx->r3 == ctx->r2) {
        // 0x80236940: nop
    
            goto L_802369B0;
    }
    // 0x80236940: nop

    // 0x80236944: j           L_802369B8
    // 0x80236948: nop

        goto L_802369B8;
    // 0x80236948: nop

L_8023694C:
    // 0x8023694C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x80236950: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80236954: addiu       $v0, $zero, -0xA5A
    ctx->r2 = ADD32(0, -0XA5A);
    // 0x80236958: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x8023695C: addiu       $v0, $zero, 0x4FC
    ctx->r2 = ADD32(0, 0X4FC);
    // 0x80236960: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80236964: addiu       $v0, $zero, 0x15E
    ctx->r2 = ADD32(0, 0X15E);
    // 0x80236968: jal         0x80050294
    // 0x8023696C: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8023696C: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    after_0:
    // 0x80236970: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80236974: j           L_802369B8
    // 0x80236978: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_802369B8;
    // 0x80236978: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8023697C:
    // 0x8023697C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236980: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x80236984: jal         0x80050294
    // 0x80236988: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x80236988: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x8023698C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80236990: j           L_802369B8
    // 0x80236994: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_802369B8;
    // 0x80236994: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80236998:
    // 0x80236998: jal         0x80051770
    // 0x8023699C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80051770_2CB70(rdram, ctx);
        goto after_2;
    // 0x8023699C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x802369A0: jal         0x80051248
    // 0x802369A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80051248_2C648(rdram, ctx);
        goto after_3;
    // 0x802369A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x802369A8: j           L_802369B8
    // 0x802369AC: nop

        goto L_802369B8;
    // 0x802369AC: nop

L_802369B0:
    // 0x802369B0: jal         0x8005044C
    // 0x802369B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_4;
    // 0x802369B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
L_802369B8:
    // 0x802369B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802369BC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802369C0: jr          $ra
    // 0x802369C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802369C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802369C8: nop

    // 0x802369CC: nop

;}
RECOMP_FUNC void func_8022ABD4_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022ABD4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022ABD8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022ABDC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022ABE0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022ABE4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022ABE8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022ABEC: lbu         $v0, 0x363($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X363);
    // 0x8022ABF0: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x8022ABF4: beq         $v0, $zero, L_8022ADBC
    if (ctx->r2 == 0) {
        // 0x8022ABF8: addiu       $s1, $s0, 0x2E8
        ctx->r17 = ADD32(ctx->r16, 0X2E8);
            goto L_8022ADBC;
    }
    // 0x8022ABF8: addiu       $s1, $s0, 0x2E8
    ctx->r17 = ADD32(ctx->r16, 0X2E8);
    // 0x8022ABFC: lbu         $v0, 0x367($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X367);
    // 0x8022AC00: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022AC04: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022AC08: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8022AC0C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022AC10: lhu         $v1, -0x65E4($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X65E4);
    // 0x8022AC14: lbu         $v0, 0x367($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X367);
    // 0x8022AC18: lbu         $a3, 0x368($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X368);
    // 0x8022AC1C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022AC20: sh          $v1, 0x30C($s0)
    MEM_H(0X30C, ctx->r16) = ctx->r3;
    // 0x8022AC24: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8022AC28: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022AC2C: lhu         $v1, -0x65E2($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X65E2);
    // 0x8022AC30: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x8022AC34: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022AC38: addiu       $a1, $s0, 0x30C
    ctx->r5 = ADD32(ctx->r16, 0X30C);
    // 0x8022AC3C: sh          $v0, 0x30E($s0)
    MEM_H(0X30E, ctx->r16) = ctx->r2;
    // 0x8022AC40: jal         0x8004F820
    // 0x8022AC44: sh          $v1, 0x310($s0)
    MEM_H(0X310, ctx->r16) = ctx->r3;
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022AC44: sh          $v1, 0x310($s0)
    MEM_H(0X310, ctx->r16) = ctx->r3;
    after_0:
    // 0x8022AC48: lbu         $v1, 0x363($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X363);
    // 0x8022AC4C: andi        $v1, $v1, 0x10
    ctx->r3 = ctx->r3 & 0X10;
    // 0x8022AC50: bne         $v1, $zero, L_8022AC68
    if (ctx->r3 != 0) {
        // 0x8022AC54: addu        $s2, $v0, $zero
        ctx->r18 = ADD32(ctx->r2, 0);
            goto L_8022AC68;
    }
    // 0x8022AC54: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x8022AC58: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022AC5C: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x8022AC60: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022AC64: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8022AC68:
    // 0x8022AC68: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
    // 0x8022AC6C: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022AC70: beq         $a0, $zero, L_8022ACAC
    if (ctx->r4 == 0) {
        // 0x8022AC74: nop
    
            goto L_8022ACAC;
    }
    // 0x8022AC74: nop

    // 0x8022AC78: lbu         $v1, 0xAC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022AC7C: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x8022AC80: beq         $v1, $v0, L_8022ACAC
    if (ctx->r3 == ctx->r2) {
        // 0x8022AC84: nop
    
            goto L_8022ACAC;
    }
    // 0x8022AC84: nop

    // 0x8022AC88: bgtz        $a0, L_8022AC94
    if (SIGNED(ctx->r4) > 0) {
        // 0x8022AC8C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022AC94;
    }
    // 0x8022AC8C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022AC90: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_8022AC94:
    // 0x8022AC94: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022AC98: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x8022AC9C: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022ACA0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022ACA4: jal         0x800502EC
    // 0x8022ACA8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800502EC_2B6EC(rdram, ctx);
        goto after_1;
    // 0x8022ACA8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
L_8022ACAC:
    // 0x8022ACAC: lbu         $v0, 0xA6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA6);
    // 0x8022ACB0: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x8022ACB4: beq         $v0, $zero, L_8022ACCC
    if (ctx->r2 == 0) {
        // 0x8022ACB8: nop
    
            goto L_8022ACCC;
    }
    // 0x8022ACB8: nop

    // 0x8022ACBC: jal         0x80053ED8
    // 0x8022ACC0: lbu         $a0, 0xC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XC);
    func_80053ED8_2F2D8(rdram, ctx);
        goto after_2;
    // 0x8022ACC0: lbu         $a0, 0xC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XC);
    after_2:
    // 0x8022ACC4: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x8022ACC8: sb          $v1, 0xD($v0)
    MEM_B(0XD, ctx->r2) = ctx->r3;
L_8022ACCC:
    // 0x8022ACCC: lbu         $v0, 0x81($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X81);
    // 0x8022ACD0: lui         $a1, 0xCCCC
    ctx->r5 = S32(0XCCCC << 16);
    // 0x8022ACD4: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x8022ACD8: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8022ACDC: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x8022ACE0: multu       $v1, $a1
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022ACE4: sb          $v0, 0x81($s1)
    MEM_B(0X81, ctx->r17) = ctx->r2;
    // 0x8022ACE8: lbu         $a0, 0x81($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X81);
    // 0x8022ACEC: mfhi        $t1
    ctx->r9 = hi;
    // 0x8022ACF0: nop

    // 0x8022ACF4: nop

    // 0x8022ACF8: multu       $a0, $a1
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022ACFC: srl         $v0, $t1, 3
    ctx->r2 = S32(U32(ctx->r9) >> 3);
    // 0x8022AD00: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
    // 0x8022AD04: sb          $v0, 0x80($s1)
    MEM_B(0X80, ctx->r17) = ctx->r2;
    // 0x8022AD08: mfhi        $v1
    ctx->r3 = hi;
    // 0x8022AD0C: srl         $v1, $v1, 3
    ctx->r3 = S32(U32(ctx->r3) >> 3);
    // 0x8022AD10: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022AD14: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022AD18: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022AD1C: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x8022AD20: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
    // 0x8022AD24: bne         $v0, $zero, L_8022AD58
    if (ctx->r2 != 0) {
        // 0x8022AD28: sb          $a0, 0x81($s1)
        MEM_B(0X81, ctx->r17) = ctx->r4;
            goto L_8022AD58;
    }
    // 0x8022AD28: sb          $a0, 0x81($s1)
    MEM_B(0X81, ctx->r17) = ctx->r4;
    // 0x8022AD2C: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x8022AD30: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022AD34: bne         $v1, $v0, L_8022ADBC
    if (ctx->r3 != ctx->r2) {
        // 0x8022AD38: nop
    
            goto L_8022ADBC;
    }
    // 0x8022AD38: nop

    // 0x8022AD3C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022AD40: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022AD44: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022AD48: lbu         $v0, 0x7B($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X7B);
    // 0x8022AD4C: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
    // 0x8022AD50: j           L_8022ADB8
    // 0x8022AD54: andi        $v0, $v0, 0xEF
    ctx->r2 = ctx->r2 & 0XEF;
        goto L_8022ADB8;
    // 0x8022AD54: andi        $v0, $v0, 0xEF
    ctx->r2 = ctx->r2 & 0XEF;
L_8022AD58:
    // 0x8022AD58: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x8022AD5C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022AD60: bne         $v1, $v0, L_8022AD94
    if (ctx->r3 != ctx->r2) {
        // 0x8022AD64: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022AD94;
    }
    // 0x8022AD64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022AD68: lbu         $v0, 0x7B($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X7B);
    // 0x8022AD6C: andi        $v0, $v0, 0xEF
    ctx->r2 = ctx->r2 & 0XEF;
    // 0x8022AD70: sb          $v0, 0x7B($s1)
    MEM_B(0X7B, ctx->r17) = ctx->r2;
    // 0x8022AD74: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022AD78: jal         0x800502EC
    // 0x8022AD7C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800502EC_2B6EC(rdram, ctx);
        goto after_3;
    // 0x8022AD7C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x8022AD80: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8022AD84: sb          $v0, 0x80($s1)
    MEM_B(0X80, ctx->r17) = ctx->r2;
    // 0x8022AD88: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022AD8C: j           L_8022ADBC
    // 0x8022AD90: sb          $v0, 0x81($s1)
    MEM_B(0X81, ctx->r17) = ctx->r2;
        goto L_8022ADBC;
    // 0x8022AD90: sb          $v0, 0x81($s1)
    MEM_B(0X81, ctx->r17) = ctx->r2;
L_8022AD94:
    // 0x8022AD94: lbu         $v0, 0xA6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA6);
    // 0x8022AD98: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x8022AD9C: beq         $v0, $zero, L_8022ADBC
    if (ctx->r2 == 0) {
        // 0x8022ADA0: addiu       $v1, $zero, 0xC
        ctx->r3 = ADD32(0, 0XC);
            goto L_8022ADBC;
    }
    // 0x8022ADA0: addiu       $v1, $zero, 0xC
    ctx->r3 = ADD32(0, 0XC);
    // 0x8022ADA4: lbu         $v0, 0x7B($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X7B);
    // 0x8022ADA8: sb          $v1, 0x80($s1)
    MEM_B(0X80, ctx->r17) = ctx->r3;
    // 0x8022ADAC: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x8022ADB0: sb          $v1, 0x81($s1)
    MEM_B(0X81, ctx->r17) = ctx->r3;
    // 0x8022ADB4: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
L_8022ADB8:
    // 0x8022ADB8: sb          $v0, 0x7B($s1)
    MEM_B(0X7B, ctx->r17) = ctx->r2;
L_8022ADBC:
    // 0x8022ADBC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022ADC0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022ADC4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022ADC8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022ADCC: jr          $ra
    // 0x8022ADD0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022ADD0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
