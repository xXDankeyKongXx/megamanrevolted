#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80225E7C_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225E7C: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80225E80: bne         $v0, $zero, L_80225EE8
    if (ctx->r2 != 0) {
        // 0x80225E84: nop
    
            goto L_80225EE8;
    }
    // 0x80225E84: nop

    // 0x80225E88: lw          $v1, 0x34($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X34);
    // 0x80225E8C: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80225E90: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80225E94: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80225E98: lw          $v1, 0x38($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X38);
    // 0x80225E9C: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80225EA0: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80225EA4: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80225EA8: lw          $v1, 0x3C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X3C);
    // 0x80225EAC: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80225EB0: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80225EB4: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80225EB8: lw          $v1, 0x40($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X40);
    // 0x80225EBC: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80225EC0: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80225EC4: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80225EC8: lw          $v1, 0x48($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X48);
    // 0x80225ECC: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80225ED0: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80225ED4: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80225ED8: lw          $v1, 0x4C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X4C);
    // 0x80225EDC: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80225EE0: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80225EE4: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
L_80225EE8:
    // 0x80225EE8: jr          $ra
    // 0x80225EEC: nop

    TRACE_RETURN()
    return;
    // 0x80225EEC: nop

;}
RECOMP_FUNC void func_8022633C_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022633C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226340: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226344: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226348: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022634C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80226350: bnel        $v0, $zero, L_80226398
    if (ctx->r2 != 0) {
        // 0x80226354: addiu       $a0, $s0, 0x1C
        ctx->r4 = ADD32(ctx->r16, 0X1C);
            goto L_80226398;
    }
    goto skip_0;
    // 0x80226354: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    skip_0:
    // 0x80226358: jal         0x8004D5D4
    // 0x8022635C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022635C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x80226360: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226364: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80226368: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022636C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80226370: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80226374: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80226378: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022637C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80226380: jal         0x80050294
    // 0x80226384: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x80226384: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    after_1:
    // 0x80226388: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022638C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226390: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80226394: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
L_80226398:
    // 0x80226398: jal         0x8004DD04
    // 0x8022639C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_2;
    // 0x8022639C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_2:
    // 0x802263A0: jal         0x8005044C
    // 0x802263A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_3;
    // 0x802263A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x802263A8: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x802263AC: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x802263B0: beq         $v0, $zero, L_802263C8
    if (ctx->r2 == 0) {
        // 0x802263B4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802263C8;
    }
    // 0x802263B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802263B8: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    // 0x802263BC: addiu       $a2, $zero, 0x2AB
    ctx->r6 = ADD32(0, 0X2AB);
    // 0x802263C0: jal         0x8003B564
    // 0x802263C4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_4;
    // 0x802263C4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_4:
L_802263C8:
    // 0x802263C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802263CC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802263D0: jr          $ra
    // 0x802263D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802263D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227348_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227348: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022734C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227350: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227354: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227358: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022735C: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x80227360: beq         $v0, $zero, L_802273E0
    if (ctx->r2 == 0) {
        // 0x80227364: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_802273E0;
    }
    // 0x80227364: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80227368: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022736C: addu        $at, $at, $v0
    gpr jr_addend_80227374 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227370: lw          $v0, -0x5630($at)
    ctx->r2 = ADD32(ctx->r1, -0X5630);
    // 0x80227374: jr          $v0
    // 0x80227378: nop

    switch (jr_addend_80227374 >> 2) {
        case 0: goto L_8022737C; break;
        case 1: goto L_80227398; break;
        case 2: goto L_802273E0; break;
        case 3: goto L_802273B4; break;
        case 4: goto L_802273E0; break;
        default: switch_error(__func__, 0x80227374, 0x8022A9D0);
    }
    // 0x80227378: nop

L_8022737C:
    // 0x8022737C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227380: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x80227384: jal         0x80050294
    // 0x80227388: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80227388: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8022738C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80227390: j           L_802273D8
    // 0x80227394: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
        goto L_802273D8;
    // 0x80227394: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
L_80227398:
    // 0x80227398: lw          $v0, 0x98($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X98);
    // 0x8022739C: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x802273A0: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x802273A4: bne         $v1, $v0, L_802273E0
    if (ctx->r3 != ctx->r2) {
        // 0x802273A8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802273E0;
    }
    // 0x802273A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802273AC: j           L_802273CC
    // 0x802273B0: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
        goto L_802273CC;
    // 0x802273B0: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
L_802273B4:
    // 0x802273B4: lw          $v0, 0x98($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X98);
    // 0x802273B8: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x802273BC: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x802273C0: bne         $v1, $v0, L_802273E0
    if (ctx->r3 != ctx->r2) {
        // 0x802273C4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802273E0;
    }
    // 0x802273C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802273C8: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
L_802273CC:
    // 0x802273CC: jal         0x80050294
    // 0x802273D0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x802273D0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x802273D4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
L_802273D8:
    // 0x802273D8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802273DC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802273E0:
    // 0x802273E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802273E4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802273E8: jr          $ra
    // 0x802273EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802273EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227AD0_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227AD0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227AD4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80227AD8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80227ADC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227AE0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227AE4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227AE8: lw          $v0, -0x5A3C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X5A3C);
    // 0x80227AEC: jalr        $v0
    // 0x80227AF0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80227AF0: nop

    after_0:
    // 0x80227AF4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80227AF8: jr          $ra
    // 0x80227AFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227AFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227F10_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227F10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227F14: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227F18: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227F1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227F20: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80227F24: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227F28: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227F2C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227F30: lw          $v0, -0x5878($at)
    ctx->r2 = MEM_W(ctx->r1, -0X5878);
    // 0x80227F34: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80227F38: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x80227F3C: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80227F40: lbu         $v0, 0x2($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X2);
    // 0x80227F44: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x80227F48: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x80227F4C: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x80227F50: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80227F54: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x80227F58: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x80227F5C: lbu         $v0, 0x1($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X1);
    // 0x80227F60: jal         0x802283B4
    // 0x80227F64: sh          $v0, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r2;
    func_802283B4_ovl32(rdram, ctx);
        goto after_0;
    // 0x80227F64: sh          $v0, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r2;
    after_0:
    // 0x80227F68: beq         $v0, $zero, L_80227F7C
    if (ctx->r2 == 0) {
        // 0x80227F6C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80227F7C;
    }
    // 0x80227F6C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227F70: jal         0x8004F62C
    // 0x80227F74: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F62C_2AA2C(rdram, ctx);
        goto after_1;
    // 0x80227F74: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80227F78: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80227F7C:
    // 0x80227F7C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80227F80: jal         0x80227FFC
    // 0x80227F84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80227FFC_ovl32(rdram, ctx);
        goto after_2;
    // 0x80227F84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80227F88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227F8C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227F90: jr          $ra
    // 0x80227F94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227F94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226720_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226720: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226724: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226728: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022672C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226730: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80226734: bne         $v0, $zero, L_80226768
    if (ctx->r2 != 0) {
        // 0x80226738: nop
    
            goto L_80226768;
    }
    // 0x80226738: nop

    // 0x8022673C: jal         0x8004D5D4
    // 0x80226740: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80226740: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x80226744: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80226748: addiu       $v1, $zero, 0x200
    ctx->r3 = ADD32(0, 0X200);
    // 0x8022674C: sh          $v1, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r3;
    // 0x80226750: sh          $v1, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r3;
    // 0x80226754: sh          $v1, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r3;
    // 0x80226758: addiu       $v1, $zero, 0x4210
    ctx->r3 = ADD32(0, 0X4210);
    // 0x8022675C: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x80226760: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226764: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80226768:
    // 0x80226768: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022676C: bne         $v0, $zero, L_8022678C
    if (ctx->r2 != 0) {
        // 0x80226770: nop
    
            goto L_8022678C;
    }
    // 0x80226770: nop

    // 0x80226774: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80226778: bnel        $v0, $zero, L_802267B8
    if (ctx->r2 != 0) {
        // 0x8022677C: addiu       $a0, $s0, 0x1C
        ctx->r4 = ADD32(ctx->r16, 0X1C);
            goto L_802267B8;
    }
    goto skip_0;
    // 0x8022677C: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    skip_0:
    // 0x80226780: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226784: j           L_802267A0
    // 0x80226788: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
        goto L_802267A0;
    // 0x80226788: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_8022678C:
    // 0x8022678C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80226790: bnel        $v0, $zero, L_802267B8
    if (ctx->r2 != 0) {
        // 0x80226794: addiu       $a0, $s0, 0x1C
        ctx->r4 = ADD32(ctx->r16, 0X1C);
            goto L_802267B8;
    }
    goto skip_1;
    // 0x80226794: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    skip_1:
    // 0x80226798: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022679C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_802267A0:
    // 0x802267A0: jal         0x80050294
    // 0x802267A4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x802267A4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x802267A8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802267AC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802267B0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802267B4: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
L_802267B8:
    // 0x802267B8: jal         0x8004DD04
    // 0x802267BC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_2;
    // 0x802267BC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_2:
    // 0x802267C0: jal         0x8005044C
    // 0x802267C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_3;
    // 0x802267C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x802267C8: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x802267CC: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x802267D0: beq         $v0, $zero, L_802267E8
    if (ctx->r2 == 0) {
        // 0x802267D4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802267E8;
    }
    // 0x802267D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802267D8: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    // 0x802267DC: addiu       $a2, $zero, 0x2AB
    ctx->r6 = ADD32(0, 0X2AB);
    // 0x802267E0: jal         0x8003B564
    // 0x802267E4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_4;
    // 0x802267E4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_4:
L_802267E8:
    // 0x802267E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802267EC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802267F0: jr          $ra
    // 0x802267F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802267F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227280_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227280: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227284: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227288: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022728C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227290: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80227294: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x80227298: beq         $v0, $zero, L_80227338
    if (ctx->r2 == 0) {
        // 0x8022729C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80227338;
    }
    // 0x8022729C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802272A0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802272A4: addu        $at, $at, $v0
    gpr jr_addend_802272AC = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802272A8: lw          $v0, -0x5648($at)
    ctx->r2 = ADD32(ctx->r1, -0X5648);
    // 0x802272AC: jr          $v0
    // 0x802272B0: nop

    switch (jr_addend_802272AC >> 2) {
        case 0: goto L_802272B4; break;
        case 1: goto L_802272D0; break;
        case 2: goto L_80227338; break;
        case 3: goto L_802272F0; break;
        case 4: goto L_80227304; break;
        case 5: goto L_80227338; break;
        default: switch_error(__func__, 0x802272AC, 0x8022A9B8);
    }
    // 0x802272B0: nop

L_802272B4:
    // 0x802272B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802272B8: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x802272BC: jal         0x80050294
    // 0x802272C0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x802272C0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x802272C4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802272C8: j           L_80227330
    // 0x802272CC: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
        goto L_80227330;
    // 0x802272CC: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
L_802272D0:
    // 0x802272D0: lw          $v0, 0x98($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X98);
    // 0x802272D4: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x802272D8: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x802272DC: bne         $v1, $v0, L_80227338
    if (ctx->r3 != ctx->r2) {
        // 0x802272E0: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_80227338;
    }
    // 0x802272E0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802272E4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802272E8: j           L_80227330
    // 0x802272EC: sb          $v1, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r3;
        goto L_80227330;
    // 0x802272EC: sb          $v1, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r3;
L_802272F0:
    // 0x802272F0: lw          $v0, 0x98($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X98);
    // 0x802272F4: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x802272F8: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x802272FC: j           L_80227324
    // 0x80227300: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
        goto L_80227324;
    // 0x80227300: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
L_80227304:
    // 0x80227304: lui         $v1, 0x2
    ctx->r3 = S32(0X2 << 16);
    // 0x80227308: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x8022730C: lw          $a0, 0x98($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X98);
    // 0x80227310: ori         $v1, $v1, 0x8000
    ctx->r3 = ctx->r3 | 0X8000;
    // 0x80227314: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80227318: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8022731C: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x80227320: addiu       $v0, $zero, 0x3D
    ctx->r2 = ADD32(0, 0X3D);
L_80227324:
    // 0x80227324: bne         $v1, $v0, L_80227338
    if (ctx->r3 != ctx->r2) {
        // 0x80227328: nop
    
            goto L_80227338;
    }
    // 0x80227328: nop

    // 0x8022732C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
L_80227330:
    // 0x80227330: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227334: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80227338:
    // 0x80227338: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022733C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227340: jr          $ra
    // 0x80227344: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227344: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226D18_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226D18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226D1C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80226D20: jal         0x8004F418
    // 0x80226D24: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x80226D24: nop

    after_0:
    // 0x80226D28: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80226D2C: jr          $ra
    // 0x80226D30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226D30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80226D34: nop

    // 0x80226D38: nop

    // 0x80226D3C: nop

;}
RECOMP_FUNC void func_802263D8_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802263D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802263DC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802263E0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802263E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802263E8: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802263EC: bnel        $v0, $zero, L_80226434
    if (ctx->r2 != 0) {
        // 0x802263F0: addiu       $a0, $s0, 0x1C
        ctx->r4 = ADD32(ctx->r16, 0X1C);
            goto L_80226434;
    }
    goto skip_0;
    // 0x802263F0: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    skip_0:
    // 0x802263F4: jal         0x8004D5D4
    // 0x802263F8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x802263F8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x802263FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226400: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80226404: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80226408: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022640C: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80226410: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80226414: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80226418: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022641C: jal         0x80050294
    // 0x80226420: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x80226420: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    after_1:
    // 0x80226424: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80226428: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022642C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80226430: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
L_80226434:
    // 0x80226434: jal         0x8004DD04
    // 0x80226438: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_2;
    // 0x80226438: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_2:
    // 0x8022643C: jal         0x8005044C
    // 0x80226440: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_3;
    // 0x80226440: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80226444: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80226448: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022644C: beq         $v0, $zero, L_80226464
    if (ctx->r2 == 0) {
        // 0x80226450: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80226464;
    }
    // 0x80226450: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226454: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    // 0x80226458: addiu       $a2, $zero, 0x2AB
    ctx->r6 = ADD32(0, 0X2AB);
    // 0x8022645C: jal         0x8003B564
    // 0x80226460: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_4;
    // 0x80226460: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_4:
L_80226464:
    // 0x80226464: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226468: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022646C: jr          $ra
    // 0x80226470: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226470: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226880_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226880: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80226884: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80226888: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022688C: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80226890: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80226894: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x80226898: bne         $v0, $zero, L_802268C8
    if (ctx->r2 != 0) {
        // 0x8022689C: addiu       $a1, $s1, 0x3
        ctx->r5 = ADD32(ctx->r17, 0X3);
            goto L_802268C8;
    }
    // 0x8022689C: addiu       $a1, $s1, 0x3
    ctx->r5 = ADD32(ctx->r17, 0X3);
    // 0x802268A0: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x802268A4: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x802268A8: jal         0x8004D5D4
    // 0x802268AC: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x802268AC: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    after_0:
    // 0x802268B0: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x802268B4: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x802268B8: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x802268BC: sw          $v1, 0xB4($s1)
    MEM_W(0XB4, ctx->r17) = ctx->r3;
    // 0x802268C0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802268C4: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_802268C8:
    // 0x802268C8: lhu         $v0, 0xE0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XE0);
    // 0x802268CC: lhu         $v1, 0xE4($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0XE4);
    // 0x802268D0: lh          $a0, 0xE2($s1)
    ctx->r4 = MEM_H(ctx->r17, 0XE2);
    // 0x802268D4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802268D8: jal         0x800324B4
    // 0x802268DC: sh          $v0, 0xE0($s1)
    MEM_H(0XE0, ctx->r17) = ctx->r2;
    func_800324B4_D8B4(rdram, ctx);
        goto after_1;
    // 0x802268DC: sh          $v0, 0xE0($s1)
    MEM_H(0XE0, ctx->r17) = ctx->r2;
    after_1:
    // 0x802268E0: lh          $v1, 0xE0($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XE0);
    // 0x802268E4: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802268E8: mflo        $v1
    ctx->r3 = lo;
    // 0x802268EC: lw          $v0, 0xD0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XD0);
    // 0x802268F0: lh          $a0, 0xE2($s1)
    ctx->r4 = MEM_H(ctx->r17, 0XE2);
    // 0x802268F4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802268F8: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x802268FC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80226900: jal         0x80032498
    // 0x80226904: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    func_80032498_D898(rdram, ctx);
        goto after_2;
    // 0x80226904: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    after_2:
    // 0x80226908: lh          $a0, 0xE0($s1)
    ctx->r4 = MEM_H(ctx->r17, 0XE0);
    // 0x8022690C: mult        $a0, $v0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80226910: mflo        $a0
    ctx->r4 = lo;
    // 0x80226914: lw          $v1, 0xD8($s1)
    ctx->r3 = MEM_W(ctx->r17, 0XD8);
    // 0x80226918: lw          $v0, 0xD4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XD4);
    // 0x8022691C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80226920: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226924: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x80226928: lhu         $v0, 0x1C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X1C);
    // 0x8022692C: sll         $a0, $a0, 4
    ctx->r4 = S32(ctx->r4 << 4);
    // 0x80226930: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80226934: sw          $v1, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r3;
    // 0x80226938: lhu         $a1, 0x24($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X24);
    // 0x8022693C: lhu         $v1, 0x20($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X20);
    // 0x80226940: addiu       $s0, $s1, 0x8C
    ctx->r16 = ADD32(ctx->r17, 0X8C);
    // 0x80226944: sh          $v0, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r2;
    // 0x80226948: sh          $v0, 0xAC($s1)
    MEM_H(0XAC, ctx->r17) = ctx->r2;
    // 0x8022694C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226950: sh          $v1, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r3;
    // 0x80226954: sh          $v1, 0xAE($s1)
    MEM_H(0XAE, ctx->r17) = ctx->r3;
    // 0x80226958: sh          $a1, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r5;
    // 0x8022695C: jal         0x8002C654
    // 0x80226960: sh          $a1, 0xB0($s1)
    MEM_H(0XB0, ctx->r17) = ctx->r5;
    func_8002C654_7A54(rdram, ctx);
        goto after_3;
    // 0x80226960: sh          $a1, 0xB0($s1)
    MEM_H(0XB0, ctx->r17) = ctx->r5;
    after_3:
    // 0x80226964: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226968: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8022696C: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x80226970: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80226974: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80226978: jal         0x80031DA8
    // 0x8022697C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_4;
    // 0x8022697C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_4:
    // 0x80226980: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80226984: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80226988: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022698C: jr          $ra
    // 0x80226990: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80226990: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80226994: nop

    // 0x80226998: nop

    // 0x8022699C: nop

;}
RECOMP_FUNC void func_80225544_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225544: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80225548: lw          $v0, 0x10($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X10);
    // 0x8022554C: bne         $v0, $zero, L_802256A8
    if (ctx->r2 != 0) {
        // 0x80225550: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_802256A8;
    }
    // 0x80225550: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80225554: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225558: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x8022555C: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x80225560: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225564: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x80225568: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022556C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225570: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x80225574: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225578: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022557C: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x80225580: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225584: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x80225588: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022558C: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x80225590: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225594: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x80225598: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022559C: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x802255A0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802255A4: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x802255A8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802255AC: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x802255B0: lw          $v1, 0x34($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X34);
    // 0x802255B4: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x802255B8: addiu       $a0, $zero, -0x3
    ctx->r4 = ADD32(0, -0X3);
    // 0x802255BC: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x802255C0: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x802255C4: lw          $v1, 0x38($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X38);
    // 0x802255C8: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x802255CC: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x802255D0: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x802255D4: lw          $v1, 0x3C($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X3C);
    // 0x802255D8: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x802255DC: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x802255E0: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x802255E4: lw          $v1, 0x40($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X40);
    // 0x802255E8: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x802255EC: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x802255F0: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x802255F4: lw          $v1, 0x48($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X48);
    // 0x802255F8: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x802255FC: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x80225600: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80225604: lw          $v1, 0x4C($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X4C);
    // 0x80225608: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8022560C: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x80225610: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80225614: lw          $v1, 0x44($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X44);
    // 0x80225618: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8022561C: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x80225620: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80225624: lw          $v1, 0x50($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X50);
    // 0x80225628: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8022562C: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x80225630: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80225634: lw          $v1, 0x24($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X24);
    // 0x80225638: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8022563C: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x80225640: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80225644: lw          $a0, 0x28($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X28);
    // 0x80225648: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x8022564C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80225650: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x80225654: lui         $v0, 0xFFA1
    ctx->r2 = S32(0XFFA1 << 16);
    // 0x80225658: sw          $v0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r2;
    // 0x8022565C: lui         $v0, 0xFFA4
    ctx->r2 = S32(0XFFA4 << 16);
    // 0x80225660: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    // 0x80225664: sw          $v0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r2;
    // 0x80225668: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022566C: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
    // 0x80225670: lw          $a0, 0x2C($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X2C);
    // 0x80225674: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x80225678: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022567C: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x80225680: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    // 0x80225684: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80225688: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
    // 0x8022568C: lw          $v1, 0x30($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X30);
    // 0x80225690: lbu         $a0, 0x0($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X0);
    // 0x80225694: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80225698: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x8022569C: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x802256A0: ori         $a0, $a0, 0x2
    ctx->r4 = ctx->r4 | 0X2;
    // 0x802256A4: sb          $a0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r4;
L_802256A8:
    // 0x802256A8: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x802256AC: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x802256B0: bne         $v1, $v0, L_802256C0
    if (ctx->r3 != ctx->r2) {
        // 0x802256B4: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802256C0;
    }
    // 0x802256B4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802256B8: lw          $a0, 0x28($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X28);
    // 0x802256BC: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_802256C0:
    // 0x802256C0: jr          $ra
    // 0x802256C4: nop

    TRACE_RETURN()
    return;
    // 0x802256C4: nop

;}
RECOMP_FUNC void func_80226C88_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226C88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226C8C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226C90: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226C94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226C98: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80226C9C: bne         $v0, $zero, L_80226CB8
    if (ctx->r2 != 0) {
        // 0x80226CA0: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_80226CB8;
    }
    // 0x80226CA0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80226CA4: jal         0x80050294
    // 0x80226CA8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80226CA8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80226CAC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80226CB0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226CB4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80226CB8:
    // 0x80226CB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226CBC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226CC0: jr          $ra
    // 0x80226CC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226CC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225150_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225150: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225154: addiu       $v0, $v0, -0x7550
    ctx->r2 = ADD32(ctx->r2, -0X7550);
    // 0x80225158: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022515C: sw          $v0, 0x4020($at)
    MEM_W(0X4020, ctx->r1) = ctx->r2;
    // 0x80225160: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225164: addiu       $v0, $v0, -0x73DC
    ctx->r2 = ADD32(ctx->r2, -0X73DC);
    // 0x80225168: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8022516C: sw          $v0, -0x22A0($at)
    MEM_W(-0X22A0, ctx->r1) = ctx->r2;
    // 0x80225170: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225174: addiu       $v0, $v0, -0x73C0
    ctx->r2 = ADD32(ctx->r2, -0X73C0);
    // 0x80225178: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x8022517C: sw          $v0, -0x26A8($at)
    MEM_W(-0X26A8, ctx->r1) = ctx->r2;
    // 0x80225180: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225184: addiu       $v0, $v0, -0x72DC
    ctx->r2 = ADD32(ctx->r2, -0X72DC);
    // 0x80225188: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8022518C: sw          $v0, -0xBD8($at)
    MEM_W(-0XBD8, ctx->r1) = ctx->r2;
    // 0x80225190: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225194: addiu       $v0, $v0, -0x7250
    ctx->r2 = ADD32(ctx->r2, -0X7250);
    // 0x80225198: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8022519C: sw          $v0, 0xC68($at)
    MEM_W(0XC68, ctx->r1) = ctx->r2;
    // 0x802251A0: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802251A4: addiu       $v0, $v0, -0x7234
    ctx->r2 = ADD32(ctx->r2, -0X7234);
    // 0x802251A8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x802251AC: sw          $v0, -0x2344($at)
    MEM_W(-0X2344, ctx->r1) = ctx->r2;
    // 0x802251B0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802251B4: jr          $ra
    // 0x802251B8: sb          $zero, 0x4B20($at)
    MEM_B(0X4B20, ctx->r1) = 0;
    TRACE_RETURN()
    return;
    // 0x802251B8: sb          $zero, 0x4B20($at)
    MEM_B(0X4B20, ctx->r1) = 0;
;}
RECOMP_FUNC void func_80258B34_ovl33(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80258B34: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80258B38: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80258B3C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80258B40: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80258B44: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80258B48: jal         0x8004F144
    // 0x80258B4C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80258B4C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    after_0:
    // 0x80258B50: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80258B54: beq         $a0, $zero, L_80258C00
    if (ctx->r4 == 0) {
        // 0x80258B58: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80258C00;
    }
    // 0x80258B58: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80258B5C: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x80258B60: addiu       $v0, $zero, 0x85
    ctx->r2 = ADD32(0, 0X85);
    // 0x80258B64: sb          $v0, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r2;
    // 0x80258B68: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x80258B6C: sh          $v0, 0x1C($a0)
    MEM_H(0X1C, ctx->r4) = ctx->r2;
    // 0x80258B70: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x80258B74: sh          $v0, 0x1E($a0)
    MEM_H(0X1E, ctx->r4) = ctx->r2;
    // 0x80258B78: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x80258B7C: sh          $v0, 0x20($a0)
    MEM_H(0X20, ctx->r4) = ctx->r2;
    // 0x80258B80: lhu         $v0, 0x44($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X44);
    // 0x80258B84: sh          $v0, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r2;
    // 0x80258B88: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x80258B8C: sh          $v0, 0x32($a0)
    MEM_H(0X32, ctx->r4) = ctx->r2;
    // 0x80258B90: lhu         $v0, 0x48($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X48);
    // 0x80258B94: sh          $v0, 0x34($a0)
    MEM_H(0X34, ctx->r4) = ctx->r2;
    // 0x80258B98: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80258B9C: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80258BA0: bne         $v1, $v0, L_80258BB8
    if (ctx->r3 != ctx->r2) {
        // 0x80258BA4: addiu       $v0, $zero, 0x41
        ctx->r2 = ADD32(0, 0X41);
            goto L_80258BB8;
    }
    // 0x80258BA4: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x80258BA8: lh          $v0, 0x64($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X64);
    // 0x80258BAC: addiu       $v1, $s1, 0x10
    ctx->r3 = ADD32(ctx->r17, 0X10);
    // 0x80258BB0: j           L_80258BF4
    // 0x80258BB4: sb          $v1, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r3;
        goto L_80258BF4;
    // 0x80258BB4: sb          $v1, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r3;
L_80258BB8:
    // 0x80258BB8: bnel        $v1, $v0, L_80258BD4
    if (ctx->r3 != ctx->r2) {
        // 0x80258BBC: addiu       $v0, $zero, 0x42
        ctx->r2 = ADD32(0, 0X42);
            goto L_80258BD4;
    }
    goto skip_0;
    // 0x80258BBC: addiu       $v0, $zero, 0x42
    ctx->r2 = ADD32(0, 0X42);
    skip_0:
    // 0x80258BC0: lh          $v0, 0x64($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X64);
    // 0x80258BC4: addiu       $v1, $s1, 0x10
    ctx->r3 = ADD32(ctx->r17, 0X10);
    // 0x80258BC8: sb          $v1, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r3;
    // 0x80258BCC: j           L_80258BF8
    // 0x80258BD0: addiu       $v0, $v0, -0x400
    ctx->r2 = ADD32(ctx->r2, -0X400);
        goto L_80258BF8;
    // 0x80258BD0: addiu       $v0, $v0, -0x400
    ctx->r2 = ADD32(ctx->r2, -0X400);
L_80258BD4:
    // 0x80258BD4: bne         $v1, $v0, L_80258BEC
    if (ctx->r3 != ctx->r2) {
        // 0x80258BD8: ori         $v0, $zero, 0xFFFF
        ctx->r2 = 0 | 0XFFFF;
            goto L_80258BEC;
    }
    // 0x80258BD8: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    // 0x80258BDC: sw          $v0, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->r2;
    // 0x80258BE0: addiu       $v0, $s1, 0x10
    ctx->r2 = ADD32(ctx->r17, 0X10);
    // 0x80258BE4: j           L_80258C00
    // 0x80258BE8: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
        goto L_80258C00;
    // 0x80258BE8: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
L_80258BEC:
    // 0x80258BEC: lh          $v0, 0x64($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X64);
    // 0x80258BF0: sb          $s1, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r17;
L_80258BF4:
    // 0x80258BF4: addiu       $v0, $v0, 0x400
    ctx->r2 = ADD32(ctx->r2, 0X400);
L_80258BF8:
    // 0x80258BF8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80258BFC: sw          $v0, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->r2;
L_80258C00:
    // 0x80258C00: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80258C04: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80258C08: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80258C0C: jr          $ra
    // 0x80258C10: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80258C10: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80258C14: nop

    // 0x80258C18: nop

    // 0x80258C1C: nop

;}
RECOMP_FUNC void func_802588C0_ovl33(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802588C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802588C4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802588C8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802588CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802588D0: jal         0x80071110
    // 0x802588D4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_80071110_4C510(rdram, ctx);
        goto after_0;
    // 0x802588D4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x802588D8: bne         $v0, $zero, L_802588EC
    if (ctx->r2 != 0) {
        // 0x802588DC: nop
    
            goto L_802588EC;
    }
    // 0x802588DC: nop

    // 0x802588E0: lh          $v0, 0x7C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X7C);
    // 0x802588E4: beq         $v0, $zero, L_80258928
    if (ctx->r2 == 0) {
        // 0x802588E8: addiu       $a0, $s0, 0x34
        ctx->r4 = ADD32(ctx->r16, 0X34);
            goto L_80258928;
    }
    // 0x802588E8: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
L_802588EC:
    // 0x802588EC: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x802588F0: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x802588F4: beq         $v0, $zero, L_8025890C
    if (ctx->r2 == 0) {
        // 0x802588F8: nop
    
            goto L_8025890C;
    }
    // 0x802588F8: nop

    // 0x802588FC: jal         0x8004F4F8
    // 0x80258900: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_1;
    // 0x80258900: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80258904: j           L_80258918
    // 0x80258908: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_80258918;
    // 0x80258908: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8025890C:
    // 0x8025890C: jal         0x8004F568
    // 0x80258910: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F568_2A968(rdram, ctx);
        goto after_2;
    // 0x80258910: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80258914: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80258918:
    // 0x80258918: jal         0x80258B34
    // 0x8025891C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80258B34_ovl33(rdram, ctx);
        goto after_3;
    // 0x8025891C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x80258920: j           L_802589F0
    // 0x80258924: nop

        goto L_802589F0;
    // 0x80258924: nop

L_80258928:
    // 0x80258928: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8025892C: jal         0x8009A3B4
    // 0x80258930: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x80258930: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_4:
    // 0x80258934: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80258938: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8025893C: jal         0x8009A3B4
    // 0x80258940: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x80258940: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x80258944: lbu         $v1, 0xB($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XB);
    // 0x80258948: addiu       $v0, $v1, 0xFF
    ctx->r2 = ADD32(ctx->r3, 0XFF);
    // 0x8025894C: beq         $v1, $zero, L_802589B8
    if (ctx->r3 == 0) {
        // 0x80258950: sb          $v0, 0xB($s0)
        MEM_B(0XB, ctx->r16) = ctx->r2;
            goto L_802589B8;
    }
    // 0x80258950: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x80258954: lh          $v0, 0x44($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X44);
    // 0x80258958: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x8025895C: lh          $a0, 0x48($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X48);
    // 0x80258960: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    // 0x80258964: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80258968: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8025896C: lh          $v0, 0x46($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X46);
    // 0x80258970: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
    // 0x80258974: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x80258978: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x8025897C: addu        $a1, $a1, $a0
    ctx->r5 = ADD32(ctx->r5, ctx->r4);
    // 0x80258980: sw          $a1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r5;
    // 0x80258984: lhu         $a0, 0x24($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X24);
    // 0x80258988: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8025898C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80258990: lhu         $v0, 0x1C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1C);
    // 0x80258994: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80258998: lhu         $v1, 0x20($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X20);
    // 0x8025899C: sh          $a0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r4;
    // 0x802589A0: sh          $a0, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r4;
    // 0x802589A4: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x802589A8: sh          $v0, 0xAC($s0)
    MEM_H(0XAC, ctx->r16) = ctx->r2;
    // 0x802589AC: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
    // 0x802589B0: j           L_802589E8
    // 0x802589B4: sh          $v1, 0xAE($s0)
    MEM_H(0XAE, ctx->r16) = ctx->r3;
        goto L_802589E8;
    // 0x802589B4: sh          $v1, 0xAE($s0)
    MEM_H(0XAE, ctx->r16) = ctx->r3;
L_802589B8:
    // 0x802589B8: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x802589BC: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x802589C0: beq         $v0, $zero, L_802589D8
    if (ctx->r2 == 0) {
        // 0x802589C4: nop
    
            goto L_802589D8;
    }
    // 0x802589C4: nop

    // 0x802589C8: jal         0x8004F4F8
    // 0x802589CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_6;
    // 0x802589CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x802589D0: j           L_802589F0
    // 0x802589D4: nop

        goto L_802589F0;
    // 0x802589D4: nop

L_802589D8:
    // 0x802589D8: jal         0x8004F568
    // 0x802589DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F568_2A968(rdram, ctx);
        goto after_7;
    // 0x802589DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x802589E0: j           L_802589F0
    // 0x802589E4: nop

        goto L_802589F0;
    // 0x802589E4: nop

L_802589E8:
    // 0x802589E8: jal         0x80258A00
    // 0x802589EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80258A00_ovl33(rdram, ctx);
        goto after_8;
    // 0x802589EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
L_802589F0:
    // 0x802589F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802589F4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802589F8: jr          $ra
    // 0x802589FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802589FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80258504_ovl33(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80258504: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80258508: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8025850C: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80258510: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80258514: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80258518: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8025851C: lbu         $v1, 0x0($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X0);
    // 0x80258520: lbu         $a0, 0x6($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X6);
    // 0x80258524: lbu         $a1, 0x3($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X3);
    // 0x80258528: lui         $v0, 0x8026
    ctx->r2 = S32(0X8026 << 16);
    // 0x8025852C: addiu       $v0, $v0, -0x73E0
    ctx->r2 = ADD32(ctx->r2, -0X73E0);
    // 0x80258530: sw          $zero, 0xC8($s2)
    MEM_W(0XC8, ctx->r18) = 0;
    // 0x80258534: sw          $zero, 0xCC($s2)
    MEM_W(0XCC, ctx->r18) = 0;
    // 0x80258538: sw          $v0, 0x78($s2)
    MEM_W(0X78, ctx->r18) = ctx->r2;
    // 0x8025853C: ori         $v1, $v1, 0x6
    ctx->r3 = ctx->r3 | 0X6;
    // 0x80258540: ori         $a0, $a0, 0x20
    ctx->r4 = ctx->r4 | 0X20;
    // 0x80258544: andi        $a1, $a1, 0x40
    ctx->r5 = ctx->r5 & 0X40;
    // 0x80258548: sb          $v1, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r3;
    // 0x8025854C: beq         $a1, $zero, L_80258560
    if (ctx->r5 == 0) {
        // 0x80258550: sb          $a0, 0x6($s2)
        MEM_B(0X6, ctx->r18) = ctx->r4;
            goto L_80258560;
    }
    // 0x80258550: sb          $a0, 0x6($s2)
    MEM_B(0X6, ctx->r18) = ctx->r4;
    // 0x80258554: lhu         $v0, 0x66($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X66);
    // 0x80258558: j           L_80258578
    // 0x8025855C: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
        goto L_80258578;
    // 0x8025855C: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
L_80258560:
    // 0x80258560: lb          $a0, 0xD($s2)
    ctx->r4 = MEM_B(ctx->r18, 0XD);
    // 0x80258564: jal         0x800530E8
    // 0x80258568: nop

    func_800530E8_2E4E8(rdram, ctx);
        goto after_0;
    // 0x80258568: nop

    after_0:
    // 0x8025856C: jal         0x80034B34
    // 0x80258570: nop

    func_80034B34_FF34(rdram, ctx);
        goto after_1;
    // 0x80258570: nop

    after_1:
    // 0x80258574: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
L_80258578:
    // 0x80258578: lhu         $v0, 0x64($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X64);
    // 0x8025857C: sh          $zero, 0x14($sp)
    MEM_H(0X14, ctx->r29) = 0;
    // 0x80258580: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80258584: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x80258588: lbu         $v0, 0x3($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X3);
    // 0x8025858C: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x80258590: beql        $v0, $zero, L_802585CC
    if (ctx->r2 == 0) {
        // 0x80258594: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802585CC;
    }
    goto skip_0;
    // 0x80258594: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
    // 0x80258598: jal         0x800A3450
    // 0x8025859C: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x8025859C: nop

    after_2:
    // 0x802585A0: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x802585A4: lhu         $v1, 0x10($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X10);
    // 0x802585A8: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x802585AC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x802585B0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802585B4: jal         0x800A3450
    // 0x802585B8: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x802585B8: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    after_3:
    // 0x802585BC: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x802585C0: lhu         $v1, 0x12($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X12);
    // 0x802585C4: j           L_80258688
    // 0x802585C8: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
        goto L_80258688;
    // 0x802585C8: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
L_802585CC:
    // 0x802585CC: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x802585D0: lb          $v1, 0x4EB8($v1)
    ctx->r3 = MEM_B(ctx->r3, 0X4EB8);
    // 0x802585D4: beq         $v1, $v0, L_80258624
    if (ctx->r3 == ctx->r2) {
        // 0x802585D8: nop
    
            goto L_80258624;
    }
    // 0x802585D8: nop

    // 0x802585DC: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x802585E0: beq         $v0, $zero, L_80258658
    if (ctx->r2 == 0) {
        // 0x802585E4: nop
    
            goto L_80258658;
    }
    // 0x802585E4: nop

    // 0x802585E8: bne         $v1, $zero, L_80258658
    if (ctx->r3 != 0) {
        // 0x802585EC: nop
    
            goto L_80258658;
    }
    // 0x802585EC: nop

    // 0x802585F0: jal         0x800A3450
    // 0x802585F4: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_4;
    // 0x802585F4: nop

    after_4:
    // 0x802585F8: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x802585FC: lhu         $v1, 0x10($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X10);
    // 0x80258600: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
    // 0x80258604: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80258608: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8025860C: jal         0x800A3450
    // 0x80258610: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_5;
    // 0x80258610: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    after_5:
    // 0x80258614: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80258618: lhu         $v1, 0x12($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X12);
    // 0x8025861C: j           L_80258688
    // 0x80258620: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
        goto L_80258688;
    // 0x80258620: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
L_80258624:
    // 0x80258624: jal         0x800A3450
    // 0x80258628: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_6;
    // 0x80258628: nop

    after_6:
    // 0x8025862C: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80258630: lhu         $v1, 0x10($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X10);
    // 0x80258634: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x80258638: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8025863C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80258640: jal         0x800A3450
    // 0x80258644: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_7;
    // 0x80258644: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    after_7:
    // 0x80258648: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8025864C: lhu         $v1, 0x12($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X12);
    // 0x80258650: j           L_80258688
    // 0x80258654: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
        goto L_80258688;
    // 0x80258654: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
L_80258658:
    // 0x80258658: jal         0x800A3450
    // 0x8025865C: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_8;
    // 0x8025865C: nop

    after_8:
    // 0x80258660: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80258664: lhu         $v1, 0x10($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X10);
    // 0x80258668: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
    // 0x8025866C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80258670: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80258674: jal         0x800A3450
    // 0x80258678: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_9;
    // 0x80258678: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    after_9:
    // 0x8025867C: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80258680: lhu         $v1, 0x12($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X12);
    // 0x80258684: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
L_80258688:
    // 0x80258688: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8025868C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80258690: sh          $v1, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r3;
    // 0x80258694: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80258698: addiu       $s0, $s2, 0x8C
    ctx->r16 = ADD32(ctx->r18, 0X8C);
    // 0x8025869C: jal         0x80031600
    // 0x802586A0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80031600_CA00(rdram, ctx);
        goto after_10;
    // 0x802586A0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_10:
    // 0x802586A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802586A8: addiu       $s1, $sp, 0x18
    ctx->r17 = ADD32(ctx->r29, 0X18);
    // 0x802586AC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802586B0: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x802586B4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x802586B8: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x802586BC: jal         0x80031DA8
    // 0x802586C0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_11;
    // 0x802586C0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_11:
    // 0x802586C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802586C8: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x802586CC: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x802586D0: addiu       $v0, $zero, -0x1000
    ctx->r2 = ADD32(0, -0X1000);
    // 0x802586D4: sh          $zero, 0x10($sp)
    MEM_H(0X10, ctx->r29) = 0;
    // 0x802586D8: sh          $zero, 0x12($sp)
    MEM_H(0X12, ctx->r29) = 0;
    // 0x802586DC: jal         0x800308E8
    // 0x802586E0: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    func_800308E8_BCE8(rdram, ctx);
        goto after_12;
    // 0x802586E0: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    after_12:
    // 0x802586E4: lbu         $v0, 0x3($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X3);
    // 0x802586E8: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x802586EC: bne         $v0, $zero, L_80258744
    if (ctx->r2 != 0) {
        // 0x802586F0: nop
    
            goto L_80258744;
    }
    // 0x802586F0: nop

    // 0x802586F4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802586F8: lb          $v0, 0x4EB7($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X4EB7);
    // 0x802586FC: slti        $v0, $v0, 0x3
    ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x80258700: bne         $v0, $zero, L_80258744
    if (ctx->r2 != 0) {
        // 0x80258704: nop
    
            goto L_80258744;
    }
    // 0x80258704: nop

    // 0x80258708: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x8025870C: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
    // 0x80258710: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80258714: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
    // 0x80258718: sh          $v0, 0x44($s2)
    MEM_H(0X44, ctx->r18) = ctx->r2;
    // 0x8025871C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80258720: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
    // 0x80258724: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80258728: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
    // 0x8025872C: sh          $v0, 0x46($s2)
    MEM_H(0X46, ctx->r18) = ctx->r2;
    // 0x80258730: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x80258734: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
    // 0x80258738: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8025873C: j           L_80258794
    // 0x80258740: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
        goto L_80258794;
    // 0x80258740: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
L_80258744:
    // 0x80258744: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x80258748: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8025874C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80258750: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80258754: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80258758: srl         $v0, $v0, 2
    ctx->r2 = S32(U32(ctx->r2) >> 2);
    // 0x8025875C: sh          $v0, 0x44($s2)
    MEM_H(0X44, ctx->r18) = ctx->r2;
    // 0x80258760: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80258764: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80258768: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8025876C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80258770: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80258774: srl         $v0, $v0, 2
    ctx->r2 = S32(U32(ctx->r2) >> 2);
    // 0x80258778: sh          $v0, 0x46($s2)
    MEM_H(0X46, ctx->r18) = ctx->r2;
    // 0x8025877C: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x80258780: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80258784: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80258788: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8025878C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80258790: srl         $v0, $v0, 2
    ctx->r2 = S32(U32(ctx->r2) >> 2);
L_80258794:
    // 0x80258794: sh          $v0, 0x48($s2)
    MEM_H(0X48, ctx->r18) = ctx->r2;
    // 0x80258798: lbu         $v0, 0x3($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X3);
    // 0x8025879C: sh          $zero, 0x4C($s2)
    MEM_H(0X4C, ctx->r18) = 0;
    // 0x802587A0: sh          $zero, 0x4E($s2)
    MEM_H(0X4E, ctx->r18) = 0;
    // 0x802587A4: sh          $zero, 0x50($s2)
    MEM_H(0X50, ctx->r18) = 0;
    // 0x802587A8: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x802587AC: beq         $v0, $zero, L_80258808
    if (ctx->r2 == 0) {
        // 0x802587B0: sh          $zero, 0x7C($s2)
        MEM_H(0X7C, ctx->r18) = 0;
            goto L_80258808;
    }
    // 0x802587B0: sh          $zero, 0x7C($s2)
    MEM_H(0X7C, ctx->r18) = 0;
    // 0x802587B4: lh          $v1, 0x44($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X44);
    // 0x802587B8: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x802587BC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x802587C0: lw          $v1, 0x1C($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X1C);
    // 0x802587C4: lh          $a0, 0x46($s2)
    ctx->r4 = MEM_H(ctx->r18, 0X46);
    // 0x802587C8: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
    // 0x802587CC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802587D0: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
    // 0x802587D4: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x802587D8: sw          $v1, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->r3;
    // 0x802587DC: lw          $v1, 0x20($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X20);
    // 0x802587E0: lh          $a0, 0x48($s2)
    ctx->r4 = MEM_H(ctx->r18, 0X48);
    // 0x802587E4: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
    // 0x802587E8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802587EC: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
    // 0x802587F0: sw          $v1, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->r3;
    // 0x802587F4: lw          $v1, 0x24($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X24);
    // 0x802587F8: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x802587FC: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
    // 0x80258800: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80258804: sw          $v1, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->r3;
L_80258808:
    // 0x80258808: addiu       $a0, $s2, 0x34
    ctx->r4 = ADD32(ctx->r18, 0X34);
    // 0x8025880C: lhu         $v0, 0x1C($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X1C);
    // 0x80258810: lhu         $v1, 0x20($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X20);
    // 0x80258814: lhu         $a3, 0x24($s2)
    ctx->r7 = MEM_HU(ctx->r18, 0X24);
    // 0x80258818: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    // 0x8025881C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80258820: sh          $v0, 0x14($s2)
    MEM_H(0X14, ctx->r18) = ctx->r2;
    // 0x80258824: sh          $v0, 0xAC($s2)
    MEM_H(0XAC, ctx->r18) = ctx->r2;
    // 0x80258828: sh          $v1, 0x16($s2)
    MEM_H(0X16, ctx->r18) = ctx->r3;
    // 0x8025882C: sh          $v1, 0xAE($s2)
    MEM_H(0XAE, ctx->r18) = ctx->r3;
    // 0x80258830: sh          $a3, 0x18($s2)
    MEM_H(0X18, ctx->r18) = ctx->r7;
    // 0x80258834: jal         0x8009A3B4
    // 0x80258838: sh          $a3, 0xB0($s2)
    MEM_H(0XB0, ctx->r18) = ctx->r7;
    memcpy_recomp(rdram, ctx);
        goto after_13;
    // 0x80258838: sh          $a3, 0xB0($s2)
    MEM_H(0XB0, ctx->r18) = ctx->r7;
    after_13:
    // 0x8025883C: addiu       $a0, $s2, 0x2C
    ctx->r4 = ADD32(ctx->r18, 0X2C);
    // 0x80258840: addiu       $s0, $s2, 0x14
    ctx->r16 = ADD32(ctx->r18, 0X14);
    // 0x80258844: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80258848: jal         0x8009A3B4
    // 0x8025884C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_14;
    // 0x8025884C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_14:
    // 0x80258850: lui         $v0, 0x280
    ctx->r2 = S32(0X280 << 16);
    // 0x80258854: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x80258858: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8025885C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80258860: jal         0x8004D5D4
    // 0x80258864: sw          $v0, 0xB4($s2)
    MEM_W(0XB4, ctx->r18) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_15;
    // 0x80258864: sw          $v0, 0xB4($s2)
    MEM_W(0XB4, ctx->r18) = ctx->r2;
    after_15:
    // 0x80258868: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8025886C: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x80258870: jal         0x800710B8
    // 0x80258874: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800710B8_4C4B8(rdram, ctx);
        goto after_16;
    // 0x80258874: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_16:
    // 0x80258878: lbu         $v1, 0x8($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X8);
    // 0x8025887C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80258880: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80258884: sb          $v0, 0xB($s2)
    MEM_B(0XB, ctx->r18) = ctx->r2;
    // 0x80258888: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8025888C: jal         0x80258B34
    // 0x80258890: sb          $v1, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r3;
    func_80258B34_ovl33(rdram, ctx);
        goto after_17;
    // 0x80258890: sb          $v1, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r3;
    after_17:
    // 0x80258894: jal         0x80258A00
    // 0x80258898: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_80258A00_ovl33(rdram, ctx);
        goto after_18;
    // 0x80258898: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_18:
    // 0x8025889C: addiu       $a0, $zero, 0x120
    ctx->r4 = ADD32(0, 0X120);
    // 0x802588A0: jal         0x8002A33C
    // 0x802588A4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_19;
    // 0x802588A4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_19:
    // 0x802588A8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x802588AC: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x802588B0: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x802588B4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802588B8: jr          $ra
    // 0x802588BC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x802588BC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80258A00_ovl33(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80258A00: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80258A04: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x80258A08: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80258A0C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80258A10: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x80258A14: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80258A18: jal         0x80071060
    // 0x80258A1C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80071060_4C460(rdram, ctx);
        goto after_0;
    // 0x80258A1C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x80258A20: lh          $v1, 0x14($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X14);
    // 0x80258A24: lhu         $a0, 0x2C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X2C);
    // 0x80258A28: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x80258A2C: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x80258A30: sh          $v1, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r3;
    // 0x80258A34: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x80258A38: lhu         $a0, 0x2E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X2E);
    // 0x80258A3C: addu        $t0, $v0, $zero
    ctx->r8 = ADD32(ctx->r2, 0);
    // 0x80258A40: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x80258A44: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x80258A48: sh          $v1, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r3;
    // 0x80258A4C: lh          $v0, 0x18($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X18);
    // 0x80258A50: lhu         $v1, 0x30($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X30);
    // 0x80258A54: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80258A58: lb          $a0, 0x4B21($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X4B21);
    // 0x80258A5C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80258A60: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80258A64: bne         $a0, $zero, L_80258A70
    if (ctx->r4 != 0) {
        // 0x80258A68: sh          $v0, 0x34($sp)
        MEM_H(0X34, ctx->r29) = ctx->r2;
            goto L_80258A70;
    }
    // 0x80258A68: sh          $v0, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r2;
    // 0x80258A6C: addiu       $t0, $zero, 0x1000
    ctx->r8 = ADD32(0, 0X1000);
L_80258A70:
    // 0x80258A70: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80258A74: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x80258A78: beq         $v0, $zero, L_80258ABC
    if (ctx->r2 == 0) {
        // 0x80258A7C: addiu       $a0, $sp, 0x30
        ctx->r4 = ADD32(ctx->r29, 0X30);
            goto L_80258ABC;
    }
    // 0x80258A7C: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x80258A80: lui         $t0, 0x800
    ctx->r8 = S32(0X800 << 16);
    // 0x80258A84: ori         $t0, $t0, 0x5
    ctx->r8 = ctx->r8 | 0X5;
    // 0x80258A88: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x80258A8C: addiu       $a2, $s0, 0x14
    ctx->r6 = ADD32(ctx->r16, 0X14);
    // 0x80258A90: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80258A94: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80258A98: ori         $v0, $zero, 0xA000
    ctx->r2 = 0 | 0XA000;
    // 0x80258A9C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80258AA0: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80258AA4: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x80258AA8: addiu       $v0, $s0, 0xC8
    ctx->r2 = ADD32(ctx->r16, 0XC8);
    // 0x80258AAC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80258AB0: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80258AB4: j           L_80258B14
    // 0x80258AB8: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
        goto L_80258B14;
    // 0x80258AB8: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
L_80258ABC:
    // 0x80258ABC: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x80258AC0: beq         $v0, $zero, L_80258ADC
    if (ctx->r2 == 0) {
        // 0x80258AC4: addiu       $a1, $zero, 0x20
        ctx->r5 = ADD32(0, 0X20);
            goto L_80258ADC;
    }
    // 0x80258AC4: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x80258AC8: addiu       $a2, $s0, 0x14
    ctx->r6 = ADD32(ctx->r16, 0X14);
    // 0x80258ACC: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80258AD0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80258AD4: j           L_80258AF0
    // 0x80258AD8: addiu       $v0, $zero, 0x6000
    ctx->r2 = ADD32(0, 0X6000);
        goto L_80258AF0;
    // 0x80258AD8: addiu       $v0, $zero, 0x6000
    ctx->r2 = ADD32(0, 0X6000);
L_80258ADC:
    // 0x80258ADC: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x80258AE0: addiu       $a2, $s0, 0x14
    ctx->r6 = ADD32(ctx->r16, 0X14);
    // 0x80258AE4: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80258AE8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80258AEC: addiu       $v0, $zero, 0x4000
    ctx->r2 = ADD32(0, 0X4000);
L_80258AF0:
    // 0x80258AF0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80258AF4: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80258AF8: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x80258AFC: addiu       $v0, $s0, 0xC8
    ctx->r2 = ADD32(ctx->r16, 0XC8);
    // 0x80258B00: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80258B04: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x80258B08: or          $v0, $t0, $v0
    ctx->r2 = ctx->r8 | ctx->r2;
    // 0x80258B0C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80258B10: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
L_80258B14:
    // 0x80258B14: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80258B18: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x80258B1C: jal         0x80051F9C
    // 0x80258B20: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051F9C_2D39C(rdram, ctx);
        goto after_1;
    // 0x80258B20: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_1:
    // 0x80258B24: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80258B28: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x80258B2C: jr          $ra
    // 0x80258B30: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80258B30: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_802584C0_ovl33(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802584C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802584C4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802584C8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802584CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802584D0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802584D4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802584D8: lui         $at, 0x8026
    ctx->r1 = S32(0X8026 << 16);
    // 0x802584DC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802584E0: lw          $v0, -0x73D4($at)
    ctx->r2 = MEM_W(ctx->r1, -0X73D4);
    // 0x802584E4: jalr        $v0
    // 0x802584E8: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802584E8: nop

    after_0:
    // 0x802584EC: jal         0x800472C0
    // 0x802584F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800472C0_226C0(rdram, ctx);
        goto after_1;
    // 0x802584F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802584F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802584F8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802584FC: jr          $ra
    // 0x80258500: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80258500: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80258504_ovl33_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80258504: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80258508: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x8025850C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80258510: sw          $ra, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r31;
    // 0x80258514: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x80258518: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8025851C: lbu         $v1, 0x6($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X6);
    // 0x80258520: lb          $a0, 0xD($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XD);
    // 0x80258524: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80258528: ori         $v1, $v1, 0x20
    ctx->r3 = ctx->r3 | 0X20;
    // 0x8025852C: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x80258530: jal         0x800530E8
    // 0x80258534: sb          $v1, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r3;
    func_800530E8_2E4E8(rdram, ctx);
        goto after_0;
    // 0x80258534: sb          $v1, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r3;
    after_0:
    // 0x80258538: lui         $v0, 0x8026
    ctx->r2 = S32(0X8026 << 16);
    // 0x8025853C: addiu       $v0, $v0, -0x75D0
    ctx->r2 = ADD32(ctx->r2, -0X75D0);
    // 0x80258540: sw          $zero, 0xC8($s1)
    MEM_W(0XC8, ctx->r17) = 0;
    // 0x80258544: sw          $zero, 0xCC($s1)
    MEM_W(0XCC, ctx->r17) = 0;
    // 0x80258548: jal         0x80034B34
    // 0x8025854C: sw          $v0, 0x78($s1)
    MEM_W(0X78, ctx->r17) = ctx->r2;
    func_80034B34_FF34(rdram, ctx);
        goto after_1;
    // 0x8025854C: sw          $v0, 0x78($s1)
    MEM_W(0X78, ctx->r17) = ctx->r2;
    after_1:
    // 0x80258550: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x80258554: sh          $v0, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r2;
    // 0x80258558: lhu         $v0, 0x64($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X64);
    // 0x8025855C: addiu       $s0, $sp, 0x30
    ctx->r16 = ADD32(ctx->r29, 0X30);
    // 0x80258560: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80258564: sh          $zero, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = 0;
    // 0x80258568: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8025856C: jal         0x80031600
    // 0x80258570: sh          $v0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r2;
    func_80031600_CA00(rdram, ctx);
        goto after_2;
    // 0x80258570: sh          $v0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r2;
    after_2:
    // 0x80258574: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80258578: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8025857C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x80258580: addiu       $v0, $zero, -0x1000
    ctx->r2 = ADD32(0, -0X1000);
    // 0x80258584: sh          $zero, 0x10($sp)
    MEM_H(0X10, ctx->r29) = 0;
    // 0x80258588: sh          $zero, 0x12($sp)
    MEM_H(0X12, ctx->r29) = 0;
    // 0x8025858C: jal         0x800308E8
    // 0x80258590: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    func_800308E8_BCE8(rdram, ctx);
        goto after_3;
    // 0x80258590: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    after_3:
    // 0x80258594: addiu       $a0, $s1, 0xA4
    ctx->r4 = ADD32(ctx->r17, 0XA4);
    // 0x80258598: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x8025859C: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x802585A0: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x802585A4: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x802585A8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802585AC: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x802585B0: sh          $v1, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r3;
    // 0x802585B4: sh          $a3, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r7;
    // 0x802585B8: sh          $zero, 0x44($s1)
    MEM_H(0X44, ctx->r17) = 0;
    // 0x802585BC: sh          $zero, 0x46($s1)
    MEM_H(0X46, ctx->r17) = 0;
    // 0x802585C0: jal         0x8009A3B4
    // 0x802585C4: sh          $zero, 0x48($s1)
    MEM_H(0X48, ctx->r17) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x802585C4: sh          $zero, 0x48($s1)
    MEM_H(0X48, ctx->r17) = 0;
    after_4:
    // 0x802585C8: lui         $t2, 0x3D08
    ctx->r10 = S32(0X3D08 << 16);
    // 0x802585CC: lhu         $v1, 0x10($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X10);
    // 0x802585D0: ori         $t2, $t2, 0xE
    ctx->r10 = ctx->r10 | 0XE;
    // 0x802585D4: lui         $t1, 0x2C80
    ctx->r9 = S32(0X2C80 << 16);
    // 0x802585D8: ori         $t1, $t1, 0x8080
    ctx->r9 = ctx->r9 | 0X8080;
    // 0x802585DC: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
    // 0x802585E0: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x802585E4: sra         $v0, $v1, 16
    ctx->r2 = S32(SIGNED(ctx->r3) >> 16);
    // 0x802585E8: srl         $v1, $v1, 31
    ctx->r3 = S32(U32(ctx->r3) >> 31);
    // 0x802585EC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802585F0: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x802585F4: sh          $v0, 0x4C($s1)
    MEM_H(0X4C, ctx->r17) = ctx->r2;
    // 0x802585F8: lhu         $v1, 0x12($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X12);
    // 0x802585FC: lhu         $a3, 0x20($s1)
    ctx->r7 = MEM_HU(ctx->r17, 0X20);
    // 0x80258600: lhu         $t0, 0x24($s1)
    ctx->r8 = MEM_HU(ctx->r17, 0X24);
    // 0x80258604: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80258608: sra         $v0, $v1, 16
    ctx->r2 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8025860C: srl         $v1, $v1, 31
    ctx->r3 = S32(U32(ctx->r3) >> 31);
    // 0x80258610: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80258614: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x80258618: sh          $v0, 0x4E($s1)
    MEM_H(0X4E, ctx->r17) = ctx->r2;
    // 0x8025861C: lhu         $v1, 0x14($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X14);
    // 0x80258620: lhu         $v0, 0x1C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X1C);
    // 0x80258624: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x80258628: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x8025862C: sw          $t2, 0x88($s1)
    MEM_W(0X88, ctx->r17) = ctx->r10;
    // 0x80258630: sw          $t1, 0x8C($s1)
    MEM_W(0X8C, ctx->r17) = ctx->r9;
    // 0x80258634: sh          $a3, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r7;
    // 0x80258638: sh          $a3, 0x92($s1)
    MEM_H(0X92, ctx->r17) = ctx->r7;
    // 0x8025863C: sh          $t0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r8;
    // 0x80258640: sh          $t0, 0x94($s1)
    MEM_H(0X94, ctx->r17) = ctx->r8;
    // 0x80258644: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80258648: sh          $v0, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r2;
    // 0x8025864C: sh          $v0, 0x90($s1)
    MEM_H(0X90, ctx->r17) = ctx->r2;
    // 0x80258650: sra         $v0, $v1, 16
    ctx->r2 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80258654: srl         $v1, $v1, 31
    ctx->r3 = S32(U32(ctx->r3) >> 31);
    // 0x80258658: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8025865C: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x80258660: jal         0x8009A3B4
    // 0x80258664: sh          $v0, 0x50($s1)
    MEM_H(0X50, ctx->r17) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x80258664: sh          $v0, 0x50($s1)
    MEM_H(0X50, ctx->r17) = ctx->r2;
    after_5:
    // 0x80258668: addiu       $a0, $s1, 0x2C
    ctx->r4 = ADD32(ctx->r17, 0X2C);
    // 0x8025866C: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x80258670: jal         0x8009A3B4
    // 0x80258674: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x80258674: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x80258678: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8025867C: sb          $v0, 0x96($s1)
    MEM_B(0X96, ctx->r17) = ctx->r2;
    // 0x80258680: sb          $v0, 0x97($s1)
    MEM_B(0X97, ctx->r17) = ctx->r2;
    // 0x80258684: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80258688: lb          $v0, 0x4EBC($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X4EBC);
    // 0x8025868C: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x80258690: lui         $a0, 0x8026
    ctx->r4 = S32(0X8026 << 16);
    // 0x80258694: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80258698: lbu         $a0, -0x75C4($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X75C4);
    // 0x8025869C: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x802586A0: sh          $zero, 0x7C($s1)
    MEM_H(0X7C, ctx->r17) = 0;
    // 0x802586A4: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
    // 0x802586A8: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
    // 0x802586AC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802586B0: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x802586B4: beq         $v1, $zero, L_802586C4
    if (ctx->r3 == 0) {
        // 0x802586B8: sh          $a0, 0x98($s1)
        MEM_H(0X98, ctx->r17) = ctx->r4;
            goto L_802586C4;
    }
    // 0x802586B8: sh          $a0, 0x98($s1)
    MEM_H(0X98, ctx->r17) = ctx->r4;
    // 0x802586BC: j           L_802586C8
    // 0x802586C0: addiu       $v0, $zero, 0x6208
    ctx->r2 = ADD32(0, 0X6208);
        goto L_802586C8;
    // 0x802586C0: addiu       $v0, $zero, 0x6208
    ctx->r2 = ADD32(0, 0X6208);
L_802586C4:
    // 0x802586C4: addiu       $v0, $zero, 0x4208
    ctx->r2 = ADD32(0, 0X4208);
L_802586C8:
    // 0x802586C8: sh          $v0, 0x1A($s1)
    MEM_H(0X1A, ctx->r17) = ctx->r2;
    // 0x802586CC: sh          $v0, 0x32($s1)
    MEM_H(0X32, ctx->r17) = ctx->r2;
    // 0x802586D0: jal         0x8025897C
    // 0x802586D4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8025897C_ovl33_1(rdram, ctx);
        goto after_7;
    // 0x802586D4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_7:
    // 0x802586D8: addiu       $a0, $zero, 0x122
    ctx->r4 = ADD32(0, 0X122);
    // 0x802586DC: jal         0x8002A33C
    // 0x802586E0: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_8;
    // 0x802586E0: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_8:
    // 0x802586E4: lw          $ra, 0x58($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X58);
    // 0x802586E8: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x802586EC: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x802586F0: jr          $ra
    // 0x802586F4: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x802586F4: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_802588B0_ovl33_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802588B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802588B4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802588B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802588BC: jal         0x8004F144
    // 0x802588C0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x802588C0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x802588C4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x802588C8: beq         $a0, $zero, L_80258914
    if (ctx->r4 == 0) {
        // 0x802588CC: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80258914;
    }
    // 0x802588CC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802588D0: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x802588D4: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x802588D8: sb          $v0, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r2;
    // 0x802588DC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802588E0: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
    // 0x802588E4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802588E8: lb          $v0, 0x4EBC($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X4EBC);
    // 0x802588EC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x802588F0: lui         $v1, 0x8026
    ctx->r3 = S32(0X8026 << 16);
    // 0x802588F4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802588F8: lbu         $v1, -0x75BC($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X75BC);
    // 0x802588FC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80258900: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80258904: sb          $v0, 0xE($a0)
    MEM_B(0XE, ctx->r4) = ctx->r2;
    // 0x80258908: sb          $v1, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r3;
    // 0x8025890C: jal         0x8009A3B4
    // 0x80258910: addiu       $a0, $a0, 0x38
    ctx->r4 = ADD32(ctx->r4, 0X38);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80258910: addiu       $a0, $a0, 0x38
    ctx->r4 = ADD32(ctx->r4, 0X38);
    after_1:
L_80258914:
    // 0x80258914: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80258918: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8025891C: jr          $ra
    // 0x80258920: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80258920: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80258924_ovl33_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80258924: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80258928: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8025892C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80258930: jal         0x8004F144
    // 0x80258934: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80258934: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x80258938: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8025893C: beq         $a0, $zero, L_8025896C
    if (ctx->r4 == 0) {
        // 0x80258940: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8025896C;
    }
    // 0x80258940: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80258944: addiu       $v0, $zero, 0x83
    ctx->r2 = ADD32(0, 0X83);
    // 0x80258948: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
    // 0x8025894C: sb          $v0, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r2;
    // 0x80258950: sb          $v1, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r3;
    // 0x80258954: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x80258958: sh          $v0, 0x1C($a0)
    MEM_H(0X1C, ctx->r4) = ctx->r2;
    // 0x8025895C: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x80258960: sh          $v0, 0x1E($a0)
    MEM_H(0X1E, ctx->r4) = ctx->r2;
    // 0x80258964: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x80258968: sh          $v0, 0x20($a0)
    MEM_H(0X20, ctx->r4) = ctx->r2;
L_8025896C:
    // 0x8025896C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80258970: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80258974: jr          $ra
    // 0x80258978: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80258978: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8025897C_ovl33_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8025897C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80258980: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80258984: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80258988: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8025898C: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x80258990: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x80258994: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80258998: lhu         $s1, 0x98($s0)
    ctx->r17 = MEM_HU(ctx->r16, 0X98);
    // 0x8025899C: jal         0x80071060
    // 0x802589A0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_80071060_4C460(rdram, ctx);
        goto after_0;
    // 0x802589A0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x802589A4: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x802589A8: beq         $v1, $zero, L_802589CC
    if (ctx->r3 == 0) {
        // 0x802589AC: addu        $t0, $v0, $zero
        ctx->r8 = ADD32(ctx->r2, 0);
            goto L_802589CC;
    }
    // 0x802589AC: addu        $t0, $v0, $zero
    ctx->r8 = ADD32(ctx->r2, 0);
    // 0x802589B0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802589B4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802589B8: addiu       $a2, $s0, 0x2C
    ctx->r6 = ADD32(ctx->r16, 0X2C);
    // 0x802589BC: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x802589C0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x802589C4: j           L_802589E4
    // 0x802589C8: addiu       $v0, $zero, 0x6000
    ctx->r2 = ADD32(0, 0X6000);
        goto L_802589E4;
    // 0x802589C8: addiu       $v0, $zero, 0x6000
    ctx->r2 = ADD32(0, 0X6000);
L_802589CC:
    // 0x802589CC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802589D0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802589D4: addiu       $a2, $s0, 0x2C
    ctx->r6 = ADD32(ctx->r16, 0X2C);
    // 0x802589D8: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x802589DC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x802589E0: addiu       $v0, $zero, 0x4000
    ctx->r2 = ADD32(0, 0X4000);
L_802589E4:
    // 0x802589E4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x802589E8: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x802589EC: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    // 0x802589F0: addiu       $v0, $s0, 0xC8
    ctx->r2 = ADD32(ctx->r16, 0XC8);
    // 0x802589F4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x802589F8: lui         $v0, 0x8800
    ctx->r2 = S32(0X8800 << 16);
    // 0x802589FC: or          $v0, $t0, $v0
    ctx->r2 = ctx->r8 | ctx->r2;
    // 0x80258A00: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80258A04: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80258A08: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80258A0C: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x80258A10: jal         0x80051F9C
    // 0x80258A14: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051F9C_2D39C(rdram, ctx);
        goto after_1;
    // 0x80258A14: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_1:
    // 0x80258A18: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x80258A1C: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80258A20: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80258A24: jr          $ra
    // 0x80258A28: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80258A28: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80258A2C: nop

;}
RECOMP_FUNC void func_802586F8_ovl33_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802586F8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x802586FC: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80258700: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80258704: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x80258708: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x8025870C: jal         0x80071110
    // 0x80258710: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    func_80071110_4C510(rdram, ctx);
        goto after_0;
    // 0x80258710: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    after_0:
    // 0x80258714: bne         $v0, $zero, L_80258728
    if (ctx->r2 != 0) {
        // 0x80258718: nop
    
            goto L_80258728;
    }
    // 0x80258718: nop

    // 0x8025871C: lh          $v0, 0x7C($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X7C);
    // 0x80258720: beq         $v0, $zero, L_8025874C
    if (ctx->r2 == 0) {
        // 0x80258724: addiu       $a0, $s1, 0x34
        ctx->r4 = ADD32(ctx->r17, 0X34);
            goto L_8025874C;
    }
    // 0x80258724: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
L_80258728:
    // 0x80258728: jal         0x802588B0
    // 0x8025872C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_802588B0_ovl33_1(rdram, ctx);
        goto after_1;
    // 0x8025872C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x80258730: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x80258734: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    // 0x80258738: addiu       $a2, $zero, 0xFA0
    ctx->r6 = ADD32(0, 0XFA0);
    // 0x8025873C: jal         0x8003491C
    // 0x80258740: addiu       $a3, $s1, 0x14
    ctx->r7 = ADD32(ctx->r17, 0X14);
    func_8003491C_FD1C(rdram, ctx);
        goto after_2;
    // 0x80258740: addiu       $a3, $s1, 0x14
    ctx->r7 = ADD32(ctx->r17, 0X14);
    after_2:
    // 0x80258744: j           L_8025886C
    // 0x80258748: nop

        goto L_8025886C;
    // 0x80258748: nop

L_8025874C:
    // 0x8025874C: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x80258750: jal         0x8009A3B4
    // 0x80258754: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80258754: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_3:
    // 0x80258758: addiu       $a0, $s1, 0x2C
    ctx->r4 = ADD32(ctx->r17, 0X2C);
    // 0x8025875C: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x80258760: jal         0x8009A3B4
    // 0x80258764: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x80258764: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x80258768: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x8025876C: sltiu       $v0, $v0, 0xF
    ctx->r2 = ctx->r2 < 0XF ? 1 : 0;
    // 0x80258770: beq         $v0, $zero, L_802587A8
    if (ctx->r2 == 0) {
        // 0x80258774: nop
    
            goto L_802587A8;
    }
    // 0x80258774: nop

    // 0x80258778: lhu         $v0, 0x44($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X44);
    // 0x8025877C: lhu         $a1, 0x4C($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X4C);
    // 0x80258780: lhu         $v1, 0x46($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X46);
    // 0x80258784: lhu         $a2, 0x4E($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X4E);
    // 0x80258788: lhu         $a0, 0x48($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X48);
    // 0x8025878C: lhu         $a3, 0x50($s1)
    ctx->r7 = MEM_HU(ctx->r17, 0X50);
    // 0x80258790: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80258794: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x80258798: addu        $a0, $a0, $a3
    ctx->r4 = ADD32(ctx->r4, ctx->r7);
    // 0x8025879C: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x802587A0: sh          $v1, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r3;
    // 0x802587A4: sh          $a0, 0x48($s1)
    MEM_H(0X48, ctx->r17) = ctx->r4;
L_802587A8:
    // 0x802587A8: lbu         $s0, 0xB($s1)
    ctx->r16 = MEM_BU(ctx->r17, 0XB);
    // 0x802587AC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x802587B0: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x802587B4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802587B8: addiu       $v0, $s0, 0x1
    ctx->r2 = ADD32(ctx->r16, 0X1);
    // 0x802587BC: andi        $s0, $s0, 0xFF
    ctx->r16 = ctx->r16 & 0XFF;
    // 0x802587C0: jal         0x800710B8
    // 0x802587C4: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    func_800710B8_4C4B8(rdram, ctx);
        goto after_5;
    // 0x802587C4: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    after_5:
    // 0x802587C8: slt         $s0, $s0, $v0
    ctx->r16 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802587CC: beq         $s0, $zero, L_8025886C
    if (ctx->r16 == 0) {
        // 0x802587D0: nop
    
            goto L_8025886C;
    }
    // 0x802587D0: nop

    // 0x802587D4: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x802587D8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802587DC: beq         $v0, $zero, L_802587F0
    if (ctx->r2 == 0) {
        // 0x802587E0: addiu       $v0, $zero, 0xA0
        ctx->r2 = ADD32(0, 0XA0);
            goto L_802587F0;
    }
    // 0x802587E0: addiu       $v0, $zero, 0xA0
    ctx->r2 = ADD32(0, 0XA0);
    // 0x802587E4: sb          $v0, 0x96($s1)
    MEM_B(0X96, ctx->r17) = ctx->r2;
    // 0x802587E8: j           L_802587F8
    // 0x802587EC: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
        goto L_802587F8;
    // 0x802587EC: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
L_802587F0:
    // 0x802587F0: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x802587F4: sb          $v0, 0x96($s1)
    MEM_B(0X96, ctx->r17) = ctx->r2;
L_802587F8:
    // 0x802587F8: sb          $v0, 0x97($s1)
    MEM_B(0X97, ctx->r17) = ctx->r2;
    // 0x802587FC: lh          $v0, 0x44($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X44);
    // 0x80258800: lw          $v1, 0x1C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X1C);
    // 0x80258804: lh          $a0, 0x48($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X48);
    // 0x80258808: lw          $a1, 0x24($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X24);
    // 0x8025880C: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80258810: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80258814: lh          $v0, 0x46($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X46);
    // 0x80258818: sw          $v1, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r3;
    // 0x8025881C: lw          $v1, 0x20($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X20);
    // 0x80258820: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x80258824: addu        $a1, $a1, $a0
    ctx->r5 = ADD32(ctx->r5, ctx->r4);
    // 0x80258828: sw          $a1, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r5;
    // 0x8025882C: lhu         $a1, 0x24($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X24);
    // 0x80258830: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80258834: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80258838: sw          $v1, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r3;
    // 0x8025883C: lhu         $v1, 0x1C($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X1C);
    // 0x80258840: lhu         $a0, 0x20($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X20);
    // 0x80258844: lui         $v0, 0x2C80
    ctx->r2 = S32(0X2C80 << 16);
    // 0x80258848: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x8025884C: sw          $v0, 0x8C($s1)
    MEM_W(0X8C, ctx->r17) = ctx->r2;
    // 0x80258850: sh          $a1, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r5;
    // 0x80258854: sh          $a1, 0x94($s1)
    MEM_H(0X94, ctx->r17) = ctx->r5;
    // 0x80258858: sh          $v1, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r3;
    // 0x8025885C: sh          $v1, 0x90($s1)
    MEM_H(0X90, ctx->r17) = ctx->r3;
    // 0x80258860: sh          $a0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r4;
    // 0x80258864: j           L_8025887C
    // 0x80258868: sh          $a0, 0x92($s1)
    MEM_H(0X92, ctx->r17) = ctx->r4;
        goto L_8025887C;
    // 0x80258868: sh          $a0, 0x92($s1)
    MEM_H(0X92, ctx->r17) = ctx->r4;
L_8025886C:
    // 0x8025886C: jal         0x8004F568
    // 0x80258870: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F568_2A968(rdram, ctx);
        goto after_6;
    // 0x80258870: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
    // 0x80258874: j           L_8025889C
    // 0x80258878: nop

        goto L_8025889C;
    // 0x80258878: nop

L_8025887C:
    // 0x8025887C: jal         0x8025897C
    // 0x80258880: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8025897C_ovl33_1(rdram, ctx);
        goto after_7;
    // 0x80258880: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_7:
    // 0x80258884: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x80258888: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8025888C: beq         $v0, $zero, L_8025889C
    if (ctx->r2 == 0) {
        // 0x80258890: nop
    
            goto L_8025889C;
    }
    // 0x80258890: nop

    // 0x80258894: jal         0x80258924
    // 0x80258898: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80258924_ovl33_1(rdram, ctx);
        goto after_8;
    // 0x80258898: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_8:
L_8025889C:
    // 0x8025889C: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x802588A0: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x802588A4: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x802588A8: jr          $ra
    // 0x802588AC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x802588AC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_802584C0_ovl33_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802584C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802584C4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802584C8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802584CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802584D0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802584D4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802584D8: lui         $at, 0x8026
    ctx->r1 = S32(0X8026 << 16);
    // 0x802584DC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802584E0: lw          $v0, -0x75B4($at)
    ctx->r2 = MEM_W(ctx->r1, -0X75B4);
    // 0x802584E4: jalr        $v0
    // 0x802584E8: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802584E8: nop

    after_0:
    // 0x802584EC: jal         0x800472C0
    // 0x802584F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800472C0_226C0(rdram, ctx);
        goto after_1;
    // 0x802584F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802584F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802584F8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802584FC: jr          $ra
    // 0x80258500: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80258500: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802584C0_ovl34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802584C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802584C4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802584C8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x802584CC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802584D0: lui         $at, 0x8026
    ctx->r1 = S32(0X8026 << 16);
    // 0x802584D4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802584D8: lw          $v0, -0x77A0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X77A0);
    // 0x802584DC: jalr        $v0
    // 0x802584E0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802584E0: nop

    after_0:
    // 0x802584E4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802584E8: jr          $ra
    // 0x802584EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802584EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80258688_ovl34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80258688: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x8025868C: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x80258690: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80258694: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80258698: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x8025869C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802586A0: sw          $ra, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r31;
    // 0x802586A4: jal         0x80071060
    // 0x802586A8: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    func_80071060_4C460(rdram, ctx);
        goto after_0;
    // 0x802586A8: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    after_0:
    // 0x802586AC: lbu         $a0, 0xC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XC);
    // 0x802586B0: jal         0x80053ED8
    // 0x802586B4: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    func_80053ED8_2F2D8(rdram, ctx);
        goto after_1;
    // 0x802586B4: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    after_1:
    // 0x802586B8: lh          $a0, 0x3C8($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X3C8);
    // 0x802586BC: lh          $v1, 0x3C0($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X3C0);
    // 0x802586C0: subu        $v1, $a0, $v1
    ctx->r3 = SUB32(ctx->r4, ctx->r3);
    // 0x802586C4: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x802586C8: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x802586CC: sh          $a0, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r4;
    // 0x802586D0: lh          $a0, 0x3CA($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X3CA);
    // 0x802586D4: lh          $v1, 0x3C2($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X3C2);
    // 0x802586D8: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x802586DC: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    // 0x802586E0: subu        $v1, $a0, $v1
    ctx->r3 = SUB32(ctx->r4, ctx->r3);
    // 0x802586E4: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x802586E8: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x802586EC: sh          $a0, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r4;
    // 0x802586F0: lh          $a1, 0x3CC($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X3CC);
    // 0x802586F4: lh          $v1, 0x3C4($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X3C4);
    // 0x802586F8: addiu       $a0, $v0, 0x3C8
    ctx->r4 = ADD32(ctx->r2, 0X3C8);
    // 0x802586FC: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80258700: subu        $v1, $a1, $v1
    ctx->r3 = SUB32(ctx->r5, ctx->r3);
    // 0x80258704: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80258708: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x8025870C: sh          $a1, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r5;
    // 0x80258710: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80258714: addiu       $v0, $zero, 0x4000
    ctx->r2 = ADD32(0, 0X4000);
    // 0x80258718: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8025871C: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80258720: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x80258724: addiu       $v0, $s0, 0xC8
    ctx->r2 = ADD32(ctx->r16, 0XC8);
    // 0x80258728: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8025872C: lui         $v0, 0x8800
    ctx->r2 = S32(0X8800 << 16);
    // 0x80258730: or          $s1, $s1, $v0
    ctx->r17 = ctx->r17 | ctx->r2;
    // 0x80258734: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80258738: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x8025873C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80258740: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x80258744: jal         0x80051F9C
    // 0x80258748: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051F9C_2D39C(rdram, ctx);
        goto after_2;
    // 0x80258748: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_2:
    // 0x8025874C: sw          $zero, 0xC8($s0)
    MEM_W(0XC8, ctx->r16) = 0;
    // 0x80258750: sw          $zero, 0xCC($s0)
    MEM_W(0XCC, ctx->r16) = 0;
    // 0x80258754: lw          $ra, 0x58($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X58);
    // 0x80258758: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x8025875C: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x80258760: jr          $ra
    // 0x80258764: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x80258764: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_8025853C_ovl34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8025853C: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x80258540: sw          $s1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r17;
    // 0x80258544: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80258548: sw          $ra, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r31;
    // 0x8025854C: sw          $s0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r16;
    // 0x80258550: jal         0x80053ED8
    // 0x80258554: lbu         $a0, 0xC($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0XC);
    func_80053ED8_2F2D8(rdram, ctx);
        goto after_0;
    // 0x80258554: lbu         $a0, 0xC($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0XC);
    after_0:
    // 0x80258558: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8025855C: lh          $v1, 0x3C8($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X3C8);
    // 0x80258560: lh          $v0, 0x3C0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X3C0);
    // 0x80258564: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
    // 0x80258568: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8025856C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80258570: sh          $v1, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r3;
    // 0x80258574: lh          $v1, 0x3CA($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X3CA);
    // 0x80258578: lh          $v0, 0x3C2($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X3C2);
    // 0x8025857C: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
    // 0x80258580: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80258584: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80258588: sh          $v1, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r3;
    // 0x8025858C: lh          $v1, 0x3CC($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X3CC);
    // 0x80258590: lh          $v0, 0x3C4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X3C4);
    // 0x80258594: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80258598: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x8025859C: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
    // 0x802585A0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802585A4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802585A8: jal         0x80071110
    // 0x802585AC: sh          $v1, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r3;
    func_80071110_4C510(rdram, ctx);
        goto after_1;
    // 0x802585AC: sh          $v1, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r3;
    after_1:
    // 0x802585B0: beq         $v0, $zero, L_802585D0
    if (ctx->r2 == 0) {
        // 0x802585B4: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_802585D0;
    }
    // 0x802585B4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802585B8: jal         0x80258768
    // 0x802585BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80258768_ovl34(rdram, ctx);
        goto after_2;
    // 0x802585BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x802585C0: addiu       $a0, $zero, 0x125
    ctx->r4 = ADD32(0, 0X125);
    // 0x802585C4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802585C8: jal         0x8002A2F8
    // 0x802585CC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_3;
    // 0x802585CC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
L_802585D0:
    // 0x802585D0: lb          $v1, 0x170($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X170);
    // 0x802585D4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802585D8: bne         $v1, $v0, L_80258630
    if (ctx->r3 != ctx->r2) {
        // 0x802585DC: nop
    
            goto L_80258630;
    }
    // 0x802585DC: nop

    // 0x802585E0: lh          $a0, 0x51A($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X51A);
    // 0x802585E4: beq         $a0, $zero, L_80258620
    if (ctx->r4 == 0) {
        // 0x802585E8: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_80258620;
    }
    // 0x802585E8: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x802585EC: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x802585F0: beq         $a0, $v0, L_802585FC
    if (ctx->r4 == ctx->r2) {
        // 0x802585F4: addiu       $v0, $v1, -0x1
        ctx->r2 = ADD32(ctx->r3, -0X1);
            goto L_802585FC;
    }
    // 0x802585F4: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x802585F8: sh          $v0, 0x51A($s0)
    MEM_H(0X51A, ctx->r16) = ctx->r2;
L_802585FC:
    // 0x802585FC: lbu         $v1, 0x100($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X100);
    // 0x80258600: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80258604: lbu         $v0, 0x3126($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3126);
    // 0x80258608: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8025860C: bne         $v0, $zero, L_80258624
    if (ctx->r2 != 0) {
        // 0x80258610: addiu       $a0, $zero, 0x124
        ctx->r4 = ADD32(0, 0X124);
            goto L_80258624;
    }
    // 0x80258610: addiu       $a0, $zero, 0x124
    ctx->r4 = ADD32(0, 0X124);
    // 0x80258614: lb          $v0, 0x174($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X174);
    // 0x80258618: bnel        $v0, $zero, L_80258640
    if (ctx->r2 != 0) {
        // 0x8025861C: sh          $zero, 0x30($sp)
        MEM_H(0X30, ctx->r29) = 0;
            goto L_80258640;
    }
    goto skip_0;
    // 0x8025861C: sh          $zero, 0x30($sp)
    MEM_H(0X30, ctx->r29) = 0;
    skip_0:
L_80258620:
    // 0x80258620: addiu       $a0, $zero, 0x124
    ctx->r4 = ADD32(0, 0X124);
L_80258624:
    // 0x80258624: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80258628: jal         0x8002A2F8
    // 0x8025862C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_4;
    // 0x8025862C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
L_80258630:
    // 0x80258630: jal         0x8004F568
    // 0x80258634: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F568_2A968(rdram, ctx);
        goto after_5;
    // 0x80258634: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_5:
    // 0x80258638: j           L_80258674
    // 0x8025863C: nop

        goto L_80258674;
    // 0x8025863C: nop

L_80258640:
    // 0x80258640: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x80258644: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80258648: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x8025864C: sh          $zero, 0x34($sp)
    MEM_H(0X34, ctx->r29) = 0;
    // 0x80258650: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80258654: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x80258658: jal         0x80258770
    // 0x8025865C: sh          $v0, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r2;
    func_80258770_ovl34(rdram, ctx);
        goto after_6;
    // 0x8025865C: sh          $v0, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r2;
    after_6:
    // 0x80258660: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x80258664: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80258668: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8025866C: jal         0x80258688
    // 0x80258670: sb          $v0, 0xB($a0)
    MEM_B(0XB, ctx->r4) = ctx->r2;
    func_80258688_ovl34(rdram, ctx);
        goto after_7;
    // 0x80258670: sb          $v0, 0xB($a0)
    MEM_B(0XB, ctx->r4) = ctx->r2;
    after_7:
L_80258674:
    // 0x80258674: lw          $ra, 0x60($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X60);
    // 0x80258678: lw          $s1, 0x5C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X5C);
    // 0x8025867C: lw          $s0, 0x58($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X58);
    // 0x80258680: jr          $ra
    // 0x80258684: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    TRACE_RETURN()
    return;
    // 0x80258684: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_80258770_ovl34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80258770: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80258774: lw          $v1, -0x38A0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X38A0);
    // 0x80258778: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x8025877C: sw          $ra, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r31;
    // 0x80258780: sw          $s2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r18;
    // 0x80258784: sw          $s1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r17;
    // 0x80258788: sw          $s0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r16;
    // 0x8025878C: lhu         $v0, 0x20($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X20);
    // 0x80258790: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80258794: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x80258798: sh          $v0, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r2;
    // 0x8025879C: lhu         $v0, 0x22($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X22);
    // 0x802587A0: addiu       $s2, $sp, 0x60
    ctx->r18 = ADD32(ctx->r29, 0X60);
    // 0x802587A4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x802587A8: sh          $v0, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = ctx->r2;
    // 0x802587AC: lhu         $v0, 0x24($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X24);
    // 0x802587B0: addiu       $a1, $s1, 0x228
    ctx->r5 = ADD32(ctx->r17, 0X228);
    // 0x802587B4: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x802587B8: jal         0x8009A3B4
    // 0x802587BC: sh          $v0, 0x3C($sp)
    MEM_H(0X3C, ctx->r29) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x802587BC: sh          $v0, 0x3C($sp)
    MEM_H(0X3C, ctx->r29) = ctx->r2;
    after_0:
    // 0x802587C0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x802587C4: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x802587C8: jal         0x800308E8
    // 0x802587CC: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    func_800308E8_BCE8(rdram, ctx);
        goto after_1;
    // 0x802587CC: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    after_1:
    // 0x802587D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802587D4: addiu       $s0, $sp, 0x40
    ctx->r16 = ADD32(ctx->r29, 0X40);
    // 0x802587D8: jal         0x80031428
    // 0x802587DC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80031428_C828(rdram, ctx);
        goto after_2;
    // 0x802587DC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x802587E0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x802587E4: jal         0x8003077C
    // 0x802587E8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8003077C_BB7C(rdram, ctx);
        goto after_3;
    // 0x802587E8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_3:
    // 0x802587EC: lh          $v0, 0x3C0($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X3C0);
    // 0x802587F0: lw          $a0, 0x10($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X10);
    // 0x802587F4: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x802587F8: sw          $a0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r4;
    // 0x802587FC: lh          $v1, 0x3C2($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X3C2);
    // 0x80258800: lw          $v0, 0x14($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X14);
    // 0x80258804: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80258808: sw          $v0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r2;
    // 0x8025880C: lh          $v1, 0x3C4($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X3C4);
    // 0x80258810: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x80258814: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80258818: sw          $v0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r2;
    // 0x8025881C: sh          $a0, 0x3C8($s1)
    MEM_H(0X3C8, ctx->r17) = ctx->r4;
    // 0x80258820: lw          $v0, 0x78($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X78);
    // 0x80258824: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80258828: sh          $v0, 0x3CA($s1)
    MEM_H(0X3CA, ctx->r17) = ctx->r2;
    // 0x8025882C: lw          $v0, 0x7C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X7C);
    // 0x80258830: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x80258834: addiu       $a0, $s1, 0x248
    ctx->r4 = ADD32(ctx->r17, 0X248);
    // 0x80258838: jal         0x8009A3B4
    // 0x8025883C: sh          $v0, 0x3CC($s1)
    MEM_H(0X3CC, ctx->r17) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8025883C: sh          $v0, 0x3CC($s1)
    MEM_H(0X3CC, ctx->r17) = ctx->r2;
    after_4:
    // 0x80258840: lw          $ra, 0x8C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X8C);
    // 0x80258844: lw          $s2, 0x88($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X88);
    // 0x80258848: lw          $s1, 0x84($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X84);
    // 0x8025884C: lw          $s0, 0x80($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X80);
    // 0x80258850: jr          $ra
    // 0x80258854: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    TRACE_RETURN()
    return;
    // 0x80258854: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    // 0x80258858: nop

    // 0x8025885C: nop

;}
RECOMP_FUNC void func_80258768_ovl34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80258768: jr          $ra
    // 0x8025876C: nop

    TRACE_RETURN()
    return;
    // 0x8025876C: nop

;}
RECOMP_FUNC void func_802584F0_ovl34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802584F0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802584F4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802584F8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802584FC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80258500: jal         0x800530E8
    // 0x80258504: lb          $a0, 0xD($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XD);
    func_800530E8_2E4E8(rdram, ctx);
        goto after_0;
    // 0x80258504: lb          $a0, 0xD($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XD);
    after_0:
    // 0x80258508: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8025850C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80258510: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x80258514: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80258518: jal         0x80258688
    // 0x8025851C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    func_80258688_ovl34(rdram, ctx);
        goto after_1;
    // 0x8025851C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    after_1:
    // 0x80258520: addiu       $a0, $zero, 0x123
    ctx->r4 = ADD32(0, 0X123);
    // 0x80258524: jal         0x8002A33C
    // 0x80258528: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x80258528: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_2:
    // 0x8025852C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80258530: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80258534: jr          $ra
    // 0x80258538: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80258538: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80258FF4_ovl34_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80258FF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80258FF8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80258FFC: addiu       $a1, $a0, 0x14
    ctx->r5 = ADD32(ctx->r4, 0X14);
    // 0x80259000: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80259004: jal         0x80259034
    // 0x80259008: addiu       $a0, $a0, 0x49C4
    ctx->r4 = ADD32(ctx->r4, 0X49C4);
    func_80259034_ovl34_1(rdram, ctx);
        goto after_0;
    // 0x80259008: addiu       $a0, $a0, 0x49C4
    ctx->r4 = ADD32(ctx->r4, 0X49C4);
    after_0:
    // 0x8025900C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80259010: sltiu       $v0, $v1, 0x1C00
    ctx->r2 = ctx->r3 < 0X1C00 ? 1 : 0;
    // 0x80259014: bne         $v0, $zero, L_80259020
    if (ctx->r2 != 0) {
        // 0x80259018: srl         $v0, $v1, 6
        ctx->r2 = S32(U32(ctx->r3) >> 6);
            goto L_80259020;
    }
    // 0x80259018: srl         $v0, $v1, 6
    ctx->r2 = S32(U32(ctx->r3) >> 6);
    // 0x8025901C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
L_80259020:
    // 0x80259020: lui         $at, 0x8026
    ctx->r1 = S32(0X8026 << 16);
    // 0x80259024: sw          $v0, -0x6EE0($at)
    MEM_W(-0X6EE0, ctx->r1) = ctx->r2;
    // 0x80259028: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8025902C: jr          $ra
    // 0x80259030: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80259030: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80258F98_ovl34_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80258F98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80258F9C: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x80258FA0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80258FA4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80258FA8: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x80258FAC: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80258FB0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80258FB4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80258FB8: sb          $v0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r2;
    // 0x80258FBC: sb          $a0, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r4;
    // 0x80258FC0: sb          $v1, 0xE($a1)
    MEM_B(0XE, ctx->r5) = ctx->r3;
    // 0x80258FC4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80258FC8: lb          $v0, 0x4ECC($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X4ECC);
    // 0x80258FCC: bnel        $v0, $zero, L_80258FD8
    if (ctx->r2 != 0) {
        // 0x80258FD0: sb          $a0, 0xD($a1)
        MEM_B(0XD, ctx->r5) = ctx->r4;
            goto L_80258FD8;
    }
    goto skip_0;
    // 0x80258FD0: sb          $a0, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r4;
    skip_0:
    // 0x80258FD4: sb          $v1, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r3;
L_80258FD8:
    // 0x80258FD8: addiu       $a0, $a1, 0x38
    ctx->r4 = ADD32(ctx->r5, 0X38);
    // 0x80258FDC: addiu       $a1, $a2, 0x14
    ctx->r5 = ADD32(ctx->r6, 0X14);
    // 0x80258FE0: jal         0x8009A3B4
    // 0x80258FE4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80258FE4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80258FE8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80258FEC: jr          $ra
    // 0x80258FF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80258FF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80258804_ovl34_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80258804: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80258808: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8025880C: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x80258810: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80258814: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80258818: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8025881C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80258820: jal         0x80258FF4
    // 0x80258824: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_80258FF4_ovl34_1(rdram, ctx);
        goto after_0;
    // 0x80258824: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x80258828: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x8025882C: jal         0x80071110
    // 0x80258830: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_80071110_4C510(rdram, ctx);
        goto after_1;
    // 0x80258830: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_1:
    // 0x80258834: bne         $v0, $zero, L_80258848
    if (ctx->r2 != 0) {
        // 0x80258838: nop
    
            goto L_80258848;
    }
    // 0x80258838: nop

    // 0x8025883C: lh          $v0, 0x7C($s4)
    ctx->r2 = MEM_H(ctx->r20, 0X7C);
    // 0x80258840: beq         $v0, $zero, L_80258868
    if (ctx->r2 == 0) {
        // 0x80258844: addiu       $s2, $s4, 0x34
        ctx->r18 = ADD32(ctx->r20, 0X34);
            goto L_80258868;
    }
    // 0x80258844: addiu       $s2, $s4, 0x34
    ctx->r18 = ADD32(ctx->r20, 0X34);
L_80258848:
    // 0x80258848: jal         0x8004F144
    // 0x8025884C: sw          $zero, 0x9C($s4)
    MEM_W(0X9C, ctx->r20) = 0;
    func_8004F144_2A544(rdram, ctx);
        goto after_2;
    // 0x8025884C: sw          $zero, 0x9C($s4)
    MEM_W(0X9C, ctx->r20) = 0;
    after_2:
    // 0x80258850: beq         $v0, $zero, L_802588E8
    if (ctx->r2 == 0) {
        // 0x80258854: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_802588E8;
    }
    // 0x80258854: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x80258858: jal         0x80258F98
    // 0x8025885C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_80258F98_ovl34_1(rdram, ctx);
        goto after_3;
    // 0x8025885C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_3:
    // 0x80258860: j           L_802588EC
    // 0x80258864: sb          $zero, 0x0($s4)
    MEM_B(0X0, ctx->r20) = 0;
        goto L_802588EC;
    // 0x80258864: sb          $zero, 0x0($s4)
    MEM_B(0X0, ctx->r20) = 0;
L_80258868:
    // 0x80258868: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8025886C: addiu       $s3, $s4, 0x1C
    ctx->r19 = ADD32(ctx->r20, 0X1C);
    // 0x80258870: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x80258874: jal         0x8009A3B4
    // 0x80258878: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x80258878: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_4:
    // 0x8025887C: addiu       $s0, $s4, 0x2C
    ctx->r16 = ADD32(ctx->r20, 0X2C);
    // 0x80258880: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80258884: addiu       $s1, $s4, 0x14
    ctx->r17 = ADD32(ctx->r20, 0X14);
    // 0x80258888: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8025888C: jal         0x8009A3B4
    // 0x80258890: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x80258890: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x80258894: lui         $v0, 0x2C80
    ctx->r2 = S32(0X2C80 << 16);
    // 0x80258898: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x8025889C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x802588A0: jal         0x80258EA8
    // 0x802588A4: sw          $v0, 0x8C($s4)
    MEM_W(0X8C, ctx->r20) = ctx->r2;
    func_80258EA8_ovl34_1(rdram, ctx);
        goto after_6;
    // 0x802588A4: sw          $v0, 0x8C($s4)
    MEM_W(0X8C, ctx->r20) = ctx->r2;
    after_6:
    // 0x802588A8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x802588AC: jal         0x8004DD04
    // 0x802588B0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8004DD04_29104(rdram, ctx);
        goto after_7;
    // 0x802588B0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_7:
    // 0x802588B4: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x802588B8: jal         0x8004DD04
    // 0x802588BC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8004DD04_29104(rdram, ctx);
        goto after_8;
    // 0x802588BC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_8:
    // 0x802588C0: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x802588C4: lbu         $v0, -0x3BC8($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3BC8);
    // 0x802588C8: addiu       $v0, $v0, -0x10
    ctx->r2 = ADD32(ctx->r2, -0X10);
    // 0x802588CC: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x802588D0: beq         $v0, $zero, L_802588FC
    if (ctx->r2 == 0) {
        // 0x802588D4: nop
    
            goto L_802588FC;
    }
    // 0x802588D4: nop

    // 0x802588D8: lh          $v0, 0x16($s4)
    ctx->r2 = MEM_H(ctx->r20, 0X16);
    // 0x802588DC: slti        $v0, $v0, -0x1
    ctx->r2 = SIGNED(ctx->r2) < -0X1 ? 1 : 0;
    // 0x802588E0: bne         $v0, $zero, L_802588FC
    if (ctx->r2 != 0) {
        // 0x802588E4: nop
    
            goto L_802588FC;
    }
    // 0x802588E4: nop

L_802588E8:
    // 0x802588E8: sb          $zero, 0x0($s4)
    MEM_B(0X0, ctx->r20) = 0;
L_802588EC:
    // 0x802588EC: jal         0x8004F568
    // 0x802588F0: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_8004F568_2A968(rdram, ctx);
        goto after_9;
    // 0x802588F0: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_9:
    // 0x802588F4: j           L_802589A4
    // 0x802588F8: nop

        goto L_802589A4;
    // 0x802588F8: nop

L_802588FC:
    // 0x802588FC: jal         0x80258CE0
    // 0x80258900: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_80258CE0_ovl34_1(rdram, ctx);
        goto after_10;
    // 0x80258900: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_10:
    // 0x80258904: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80258908: beq         $v0, $zero, L_80258918
    if (ctx->r2 == 0) {
        // 0x8025890C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80258918;
    }
    // 0x8025890C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80258910: sb          $v0, 0x8($s4)
    MEM_B(0X8, ctx->r20) = ctx->r2;
    // 0x80258914: sb          $zero, 0xD($s4)
    MEM_B(0XD, ctx->r20) = 0;
L_80258918:
    // 0x80258918: lbu         $v1, 0xA($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0XA);
    // 0x8025891C: sltiu       $v0, $v1, 0x96
    ctx->r2 = ctx->r3 < 0X96 ? 1 : 0;
    // 0x80258920: bne         $v0, $zero, L_80258938
    if (ctx->r2 != 0) {
        // 0x80258924: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_80258938;
    }
    // 0x80258924: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80258928: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8025892C: sb          $v0, 0x8($s4)
    MEM_B(0X8, ctx->r20) = ctx->r2;
    // 0x80258930: j           L_80258958
    // 0x80258934: sb          $zero, 0xD($s4)
    MEM_B(0XD, ctx->r20) = 0;
        goto L_80258958;
    // 0x80258934: sb          $zero, 0xD($s4)
    MEM_B(0XD, ctx->r20) = 0;
L_80258938:
    // 0x80258938: lbu         $v0, 0x9($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X9);
    // 0x8025893C: sb          $v1, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r3;
    // 0x80258940: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80258944: sb          $v0, 0x9($s4)
    MEM_B(0X9, ctx->r20) = ctx->r2;
    // 0x80258948: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8025894C: sltiu       $v0, $v0, 0x6
    ctx->r2 = ctx->r2 < 0X6 ? 1 : 0;
    // 0x80258950: beql        $v0, $zero, L_80258958
    if (ctx->r2 == 0) {
        // 0x80258954: sb          $zero, 0x9($s4)
        MEM_B(0X9, ctx->r20) = 0;
            goto L_80258958;
    }
    goto skip_0;
    // 0x80258954: sb          $zero, 0x9($s4)
    MEM_B(0X9, ctx->r20) = 0;
    skip_0:
L_80258958:
    // 0x80258958: lhu         $a0, 0x14($s4)
    ctx->r4 = MEM_HU(ctx->r20, 0X14);
    // 0x8025895C: lhu         $v0, 0x16($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X16);
    // 0x80258960: lhu         $a1, 0x18($s4)
    ctx->r5 = MEM_HU(ctx->r20, 0X18);
    // 0x80258964: lbu         $v1, 0x9($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X9);
    // 0x80258968: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
    // 0x8025896C: sh          $v0, 0x92($s4)
    MEM_H(0X92, ctx->r20) = ctx->r2;
    // 0x80258970: lbu         $v0, 0x9($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X9);
    // 0x80258974: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80258978: sh          $a0, 0x90($s4)
    MEM_H(0X90, ctx->r20) = ctx->r4;
    // 0x8025897C: sh          $a1, 0x94($s4)
    MEM_H(0X94, ctx->r20) = ctx->r5;
    // 0x80258980: lui         $at, 0x8026
    ctx->r1 = S32(0X8026 << 16);
    // 0x80258984: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80258988: lw          $v1, -0x6F24($at)
    ctx->r3 = MEM_W(ctx->r1, -0X6F24);
    // 0x8025898C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80258990: sb          $v1, 0x96($s4)
    MEM_B(0X96, ctx->r20) = ctx->r3;
    // 0x80258994: lui         $at, 0x8026
    ctx->r1 = S32(0X8026 << 16);
    // 0x80258998: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8025899C: lw          $v0, -0x6F20($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6F20);
    // 0x802589A0: sb          $v0, 0x97($s4)
    MEM_B(0X97, ctx->r20) = ctx->r2;
L_802589A4:
    // 0x802589A4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802589A8: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x802589AC: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x802589B0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x802589B4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802589B8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802589BC: jr          $ra
    // 0x802589C0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x802589C0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80258EA8_ovl34_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80258EA8: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x80258EAC: lhu         $v0, 0x44($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X44);
    // 0x80258EB0: lhu         $v1, 0x4C($a3)
    ctx->r3 = MEM_HU(ctx->r7, 0X4C);
    // 0x80258EB4: lhu         $a0, 0x4E($a3)
    ctx->r4 = MEM_HU(ctx->r7, 0X4E);
    // 0x80258EB8: lhu         $a1, 0x50($a3)
    ctx->r5 = MEM_HU(ctx->r7, 0X50);
    // 0x80258EBC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80258EC0: sh          $v0, 0x44($a3)
    MEM_H(0X44, ctx->r7) = ctx->r2;
    // 0x80258EC4: lhu         $v0, 0x46($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X46);
    // 0x80258EC8: lhu         $v1, 0x48($a3)
    ctx->r3 = MEM_HU(ctx->r7, 0X48);
    // 0x80258ECC: lh          $a2, 0x44($a3)
    ctx->r6 = MEM_H(ctx->r7, 0X44);
    // 0x80258ED0: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80258ED4: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x80258ED8: sh          $v0, 0x46($a3)
    MEM_H(0X46, ctx->r7) = ctx->r2;
    // 0x80258EDC: slti        $v0, $a2, -0x6000
    ctx->r2 = SIGNED(ctx->r6) < -0X6000 ? 1 : 0;
    // 0x80258EE0: beq         $v0, $zero, L_80258EF0
    if (ctx->r2 == 0) {
        // 0x80258EE4: sh          $v1, 0x48($a3)
        MEM_H(0X48, ctx->r7) = ctx->r3;
            goto L_80258EF0;
    }
    // 0x80258EE4: sh          $v1, 0x48($a3)
    MEM_H(0X48, ctx->r7) = ctx->r3;
    // 0x80258EE8: j           L_80258EFC
    // 0x80258EEC: addiu       $v0, $zero, -0x6000
    ctx->r2 = ADD32(0, -0X6000);
        goto L_80258EFC;
    // 0x80258EEC: addiu       $v0, $zero, -0x6000
    ctx->r2 = ADD32(0, -0X6000);
L_80258EF0:
    // 0x80258EF0: slti        $v0, $a2, 0x6001
    ctx->r2 = SIGNED(ctx->r6) < 0X6001 ? 1 : 0;
    // 0x80258EF4: bne         $v0, $zero, L_80258F00
    if (ctx->r2 != 0) {
        // 0x80258EF8: addiu       $v0, $zero, 0x6000
        ctx->r2 = ADD32(0, 0X6000);
            goto L_80258F00;
    }
    // 0x80258EF8: addiu       $v0, $zero, 0x6000
    ctx->r2 = ADD32(0, 0X6000);
L_80258EFC:
    // 0x80258EFC: sh          $v0, 0x44($a3)
    MEM_H(0X44, ctx->r7) = ctx->r2;
L_80258F00:
    // 0x80258F00: lh          $v1, 0x46($a3)
    ctx->r3 = MEM_H(ctx->r7, 0X46);
    // 0x80258F04: slti        $v0, $v1, -0x6000
    ctx->r2 = SIGNED(ctx->r3) < -0X6000 ? 1 : 0;
    // 0x80258F08: bne         $v0, $zero, L_80258F1C
    if (ctx->r2 != 0) {
        // 0x80258F0C: addiu       $v0, $zero, -0x6000
        ctx->r2 = ADD32(0, -0X6000);
            goto L_80258F1C;
    }
    // 0x80258F0C: addiu       $v0, $zero, -0x6000
    ctx->r2 = ADD32(0, -0X6000);
    // 0x80258F10: slti        $v0, $v1, 0x6001
    ctx->r2 = SIGNED(ctx->r3) < 0X6001 ? 1 : 0;
    // 0x80258F14: bne         $v0, $zero, L_80258F20
    if (ctx->r2 != 0) {
        // 0x80258F18: addiu       $v0, $zero, 0x6000
        ctx->r2 = ADD32(0, 0X6000);
            goto L_80258F20;
    }
    // 0x80258F18: addiu       $v0, $zero, 0x6000
    ctx->r2 = ADD32(0, 0X6000);
L_80258F1C:
    // 0x80258F1C: sh          $v0, 0x46($a3)
    MEM_H(0X46, ctx->r7) = ctx->r2;
L_80258F20:
    // 0x80258F20: lh          $v1, 0x48($a3)
    ctx->r3 = MEM_H(ctx->r7, 0X48);
    // 0x80258F24: slti        $v0, $v1, -0x6000
    ctx->r2 = SIGNED(ctx->r3) < -0X6000 ? 1 : 0;
    // 0x80258F28: bne         $v0, $zero, L_80258F3C
    if (ctx->r2 != 0) {
        // 0x80258F2C: addiu       $v0, $zero, -0x6000
        ctx->r2 = ADD32(0, -0X6000);
            goto L_80258F3C;
    }
    // 0x80258F2C: addiu       $v0, $zero, -0x6000
    ctx->r2 = ADD32(0, -0X6000);
    // 0x80258F30: slti        $v0, $v1, 0x6001
    ctx->r2 = SIGNED(ctx->r3) < 0X6001 ? 1 : 0;
    // 0x80258F34: bne         $v0, $zero, L_80258F40
    if (ctx->r2 != 0) {
        // 0x80258F38: addiu       $v0, $zero, 0x6000
        ctx->r2 = ADD32(0, 0X6000);
            goto L_80258F40;
    }
    // 0x80258F38: addiu       $v0, $zero, 0x6000
    ctx->r2 = ADD32(0, 0X6000);
L_80258F3C:
    // 0x80258F3C: sh          $v0, 0x48($a3)
    MEM_H(0X48, ctx->r7) = ctx->r2;
L_80258F40:
    // 0x80258F40: lh          $v0, 0x44($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X44);
    // 0x80258F44: lw          $v1, 0x1C($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X1C);
    // 0x80258F48: lh          $a0, 0x46($a3)
    ctx->r4 = MEM_H(ctx->r7, 0X46);
    // 0x80258F4C: lw          $a1, 0x20($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X20);
    // 0x80258F50: lhu         $a2, 0x18($a3)
    ctx->r6 = MEM_HU(ctx->r7, 0X18);
    // 0x80258F54: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80258F58: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80258F5C: lh          $v0, 0x48($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X48);
    // 0x80258F60: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x80258F64: addu        $a1, $a1, $a0
    ctx->r5 = ADD32(ctx->r5, ctx->r4);
    // 0x80258F68: sw          $v1, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->r3;
    // 0x80258F6C: lw          $v1, 0x24($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X24);
    // 0x80258F70: lhu         $a0, 0x14($a3)
    ctx->r4 = MEM_HU(ctx->r7, 0X14);
    // 0x80258F74: sw          $a1, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->r5;
    // 0x80258F78: lhu         $a1, 0x16($a3)
    ctx->r5 = MEM_HU(ctx->r7, 0X16);
    // 0x80258F7C: sh          $a2, 0x18($a3)
    MEM_H(0X18, ctx->r7) = ctx->r6;
    // 0x80258F80: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80258F84: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80258F88: sw          $v1, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->r3;
    // 0x80258F8C: sh          $a0, 0x14($a3)
    MEM_H(0X14, ctx->r7) = ctx->r4;
    // 0x80258F90: jr          $ra
    // 0x80258F94: sh          $a1, 0x16($a3)
    MEM_H(0X16, ctx->r7) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x80258F94: sh          $a1, 0x16($a3)
    MEM_H(0X16, ctx->r7) = ctx->r5;
;}
RECOMP_FUNC void func_80259094_ovl34_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80259094: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80259098: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8025909C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802590A0: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x802590A4: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
    // 0x802590A8: sb          $v0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r2;
    // 0x802590AC: addiu       $v0, $a0, 0x14
    ctx->r2 = ADD32(ctx->r4, 0X14);
    // 0x802590B0: addiu       $a0, $a1, 0x38
    ctx->r4 = ADD32(ctx->r5, 0X38);
    // 0x802590B4: sb          $zero, 0x3($a1)
    MEM_B(0X3, ctx->r5) = 0;
    // 0x802590B8: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x802590BC: jal         0x8009A3B4
    // 0x802590C0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x802590C0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x802590C4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802590C8: jr          $ra
    // 0x802590CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802590CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802585A8_ovl34_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802585A8: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x802585AC: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x802585B0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802585B4: sw          $ra, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r31;
    // 0x802585B8: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x802585BC: jal         0x800530E8
    // 0x802585C0: lb          $a0, 0xC($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XC);
    func_800530E8_2E4E8(rdram, ctx);
        goto after_0;
    // 0x802585C0: lb          $a0, 0xC($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XC);
    after_0:
    // 0x802585C4: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x802585C8: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x802585CC: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
    // 0x802585D0: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
    // 0x802585D4: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    // 0x802585D8: sb          $zero, 0xE($s1)
    MEM_B(0XE, ctx->r17) = 0;
    // 0x802585DC: sw          $zero, 0xC8($s1)
    MEM_W(0XC8, ctx->r17) = 0;
    // 0x802585E0: sw          $zero, 0xCC($s1)
    MEM_W(0XCC, ctx->r17) = 0;
    // 0x802585E4: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x802585E8: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
    // 0x802585EC: jal         0x80034B34
    // 0x802585F0: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
    func_80034B34_FF34(rdram, ctx);
        goto after_1;
    // 0x802585F0: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
    after_1:
    // 0x802585F4: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x802585F8: sh          $v0, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r2;
    // 0x802585FC: lhu         $v0, 0x64($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X64);
    // 0x80258600: addiu       $s0, $sp, 0x30
    ctx->r16 = ADD32(ctx->r29, 0X30);
    // 0x80258604: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80258608: sh          $zero, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = 0;
    // 0x8025860C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80258610: jal         0x80031600
    // 0x80258614: sh          $v0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r2;
    func_80031600_CA00(rdram, ctx);
        goto after_2;
    // 0x80258614: sh          $v0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r2;
    after_2:
    // 0x80258618: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8025861C: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x80258620: addiu       $v0, $zero, -0x1000
    ctx->r2 = ADD32(0, -0X1000);
    // 0x80258624: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x80258628: sh          $zero, 0x10($sp)
    MEM_H(0X10, ctx->r29) = 0;
    // 0x8025862C: sh          $zero, 0x12($sp)
    MEM_H(0X12, ctx->r29) = 0;
    // 0x80258630: jal         0x800308E8
    // 0x80258634: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    func_800308E8_BCE8(rdram, ctx);
        goto after_3;
    // 0x80258634: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    after_3:
    // 0x80258638: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x8025863C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80258640: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x80258644: addiu       $a2, $a2, 0x4ECE
    ctx->r6 = ADD32(ctx->r6, 0X4ECE);
    // 0x80258648: lb          $v1, 0x0($a2)
    ctx->r3 = MEM_B(ctx->r6, 0X0);
    // 0x8025864C: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x80258650: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80258654: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x80258658: sh          $a0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r4;
    // 0x8025865C: sh          $a1, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r5;
    // 0x80258660: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80258664: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80258668: lh          $v1, 0x32E0($at)
    ctx->r3 = MEM_H(ctx->r1, 0X32E0);
    // 0x8025866C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80258670: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80258674: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80258678: mflo        $v0
    ctx->r2 = lo;
    // 0x8025867C: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x80258680: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x80258684: lb          $v0, 0x0($a2)
    ctx->r2 = MEM_B(ctx->r6, 0X0);
    // 0x80258688: lh          $v1, 0x12($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X12);
    // 0x8025868C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80258690: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80258694: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80258698: lh          $v0, 0x32E0($at)
    ctx->r2 = MEM_H(ctx->r1, 0X32E0);
    // 0x8025869C: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802586A0: mflo        $v1
    ctx->r3 = lo;
    // 0x802586A4: lui         $a3, 0x3D48
    ctx->r7 = S32(0X3D48 << 16);
    // 0x802586A8: ori         $a3, $a3, 0xE
    ctx->r7 = ctx->r7 | 0XE;
    // 0x802586AC: sra         $v1, $v1, 4
    ctx->r3 = S32(SIGNED(ctx->r3) >> 4);
    // 0x802586B0: sh          $v1, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r3;
    // 0x802586B4: lb          $v0, 0x0($a2)
    ctx->r2 = MEM_B(ctx->r6, 0X0);
    // 0x802586B8: addiu       $s0, $s1, 0x14
    ctx->r16 = ADD32(ctx->r17, 0X14);
    // 0x802586BC: lh          $v1, 0x14($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X14);
    // 0x802586C0: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x802586C4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x802586C8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802586CC: lh          $v0, 0x32E0($at)
    ctx->r2 = MEM_H(ctx->r1, 0X32E0);
    // 0x802586D0: addiu       $a0, $s1, 0x1C
    ctx->r4 = ADD32(ctx->r17, 0X1C);
    // 0x802586D4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x802586D8: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802586DC: mflo        $v1
    ctx->r3 = lo;
    // 0x802586E0: lui         $a2, 0x2C80
    ctx->r6 = S32(0X2C80 << 16);
    // 0x802586E4: ori         $a2, $a2, 0x8080
    ctx->r6 = ctx->r6 | 0X8080;
    // 0x802586E8: sh          $zero, 0x4C($s1)
    MEM_H(0X4C, ctx->r17) = 0;
    // 0x802586EC: sh          $zero, 0x50($s1)
    MEM_H(0X50, ctx->r17) = 0;
    // 0x802586F0: sh          $zero, 0x7C($s1)
    MEM_H(0X7C, ctx->r17) = 0;
    // 0x802586F4: sw          $a3, 0x88($s1)
    MEM_W(0X88, ctx->r17) = ctx->r7;
    // 0x802586F8: sw          $a2, 0x8C($s1)
    MEM_W(0X8C, ctx->r17) = ctx->r6;
    // 0x802586FC: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80258700: sh          $v0, 0x4E($s1)
    MEM_H(0X4E, ctx->r17) = ctx->r2;
    // 0x80258704: sra         $v1, $v1, 4
    ctx->r3 = S32(SIGNED(ctx->r3) >> 4);
    // 0x80258708: jal         0x8004DD04
    // 0x8025870C: sh          $v1, 0x48($s1)
    MEM_H(0X48, ctx->r17) = ctx->r3;
    func_8004DD04_29104(rdram, ctx);
        goto after_4;
    // 0x8025870C: sh          $v1, 0x48($s1)
    MEM_H(0X48, ctx->r17) = ctx->r3;
    after_4:
    // 0x80258710: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
    // 0x80258714: addiu       $a1, $s1, 0x2C
    ctx->r5 = ADD32(ctx->r17, 0X2C);
    // 0x80258718: lh          $v0, 0x44($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X44);
    // 0x8025871C: lw          $v1, 0x1C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X1C);
    // 0x80258720: lw          $t0, 0x20($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X20);
    // 0x80258724: lh          $a2, 0x48($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X48);
    // 0x80258728: lw          $a3, 0x24($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X24);
    // 0x8025872C: sll         $v0, $v0, 10
    ctx->r2 = S32(ctx->r2 << 10);
    // 0x80258730: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80258734: sll         $a2, $a2, 10
    ctx->r6 = S32(ctx->r6 << 10);
    // 0x80258738: subu        $a3, $a3, $a2
    ctx->r7 = SUB32(ctx->r7, ctx->r6);
    // 0x8025873C: sw          $v1, 0x34($s1)
    MEM_W(0X34, ctx->r17) = ctx->r3;
    // 0x80258740: sw          $t0, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->r8;
    // 0x80258744: jal         0x8004DD04
    // 0x80258748: sw          $a3, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->r7;
    func_8004DD04_29104(rdram, ctx);
        goto after_5;
    // 0x80258748: sw          $a3, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->r7;
    after_5:
    // 0x8025874C: lui         $v0, 0x8026
    ctx->r2 = S32(0X8026 << 16);
    // 0x80258750: addiu       $v0, $v0, -0x6F30
    ctx->r2 = ADD32(ctx->r2, -0X6F30);
    // 0x80258754: sw          $v0, 0x78($s1)
    MEM_W(0X78, ctx->r17) = ctx->r2;
    // 0x80258758: lui         $v0, 0x8026
    ctx->r2 = S32(0X8026 << 16);
    // 0x8025875C: lw          $v0, -0x6F24($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6F24);
    // 0x80258760: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x80258764: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80258768: sb          $v0, 0x96($s1)
    MEM_B(0X96, ctx->r17) = ctx->r2;
    // 0x8025876C: lui         $a1, 0x8026
    ctx->r5 = S32(0X8026 << 16);
    // 0x80258770: lw          $a1, -0x6F20($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X6F20);
    // 0x80258774: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x80258778: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8025877C: sh          $v0, 0x98($s1)
    MEM_H(0X98, ctx->r17) = ctx->r2;
    // 0x80258780: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80258784: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
    // 0x80258788: sb          $v0, 0x74($s1)
    MEM_B(0X74, ctx->r17) = ctx->r2;
    // 0x8025878C: jal         0x80258FF4
    // 0x80258790: sb          $a1, 0x97($s1)
    MEM_B(0X97, ctx->r17) = ctx->r5;
    func_80258FF4_ovl34_1(rdram, ctx);
        goto after_6;
    // 0x80258790: sb          $a1, 0x97($s1)
    MEM_B(0X97, ctx->r17) = ctx->r5;
    after_6:
    // 0x80258794: addiu       $a0, $zero, 0x127
    ctx->r4 = ADD32(0, 0X127);
    // 0x80258798: lhu         $a3, 0x14($s1)
    ctx->r7 = MEM_HU(ctx->r17, 0X14);
    // 0x8025879C: lhu         $v0, 0x16($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X16);
    // 0x802587A0: lhu         $t0, 0x18($s1)
    ctx->r8 = MEM_HU(ctx->r17, 0X18);
    // 0x802587A4: lbu         $a2, 0x8($s1)
    ctx->r6 = MEM_BU(ctx->r17, 0X8);
    // 0x802587A8: lbu         $v1, 0xE($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XE);
    // 0x802587AC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x802587B0: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x802587B4: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
    // 0x802587B8: andi        $v1, $v1, 0xFB
    ctx->r3 = ctx->r3 & 0XFB;
    // 0x802587BC: sh          $a3, 0x90($s1)
    MEM_H(0X90, ctx->r17) = ctx->r7;
    // 0x802587C0: sh          $v0, 0x92($s1)
    MEM_H(0X92, ctx->r17) = ctx->r2;
    // 0x802587C4: sh          $t0, 0x94($s1)
    MEM_H(0X94, ctx->r17) = ctx->r8;
    // 0x802587C8: sb          $v1, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r3;
    // 0x802587CC: jal         0x8002A33C
    // 0x802587D0: sb          $a2, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r6;
    func_8002A33C_573C(rdram, ctx);
        goto after_7;
    // 0x802587D0: sb          $a2, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r6;
    after_7:
    // 0x802587D4: jal         0x80258CE0
    // 0x802587D8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80258CE0_ovl34_1(rdram, ctx);
        goto after_8;
    // 0x802587D8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_8:
    // 0x802587DC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802587E0: beq         $v0, $zero, L_802587F0
    if (ctx->r2 == 0) {
        // 0x802587E4: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802587F0;
    }
    // 0x802587E4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802587E8: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x802587EC: sb          $zero, 0xD($s1)
    MEM_B(0XD, ctx->r17) = 0;
L_802587F0:
    // 0x802587F0: lw          $ra, 0x58($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X58);
    // 0x802587F4: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x802587F8: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x802587FC: jr          $ra
    // 0x80258800: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x80258800: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_80258CE0_ovl34_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80258CE0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80258CE4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80258CE8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80258CEC: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80258CF0: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x80258CF4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80258CF8: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80258CFC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80258D00: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80258D04: jal         0x80258FF4
    // 0x80258D08: sb          $v0, 0x74($s1)
    MEM_B(0X74, ctx->r17) = ctx->r2;
    func_80258FF4_ovl34_1(rdram, ctx);
        goto after_0;
    // 0x80258D08: sb          $v0, 0x74($s1)
    MEM_B(0X74, ctx->r17) = ctx->r2;
    after_0:
    // 0x80258D0C: jal         0x80040F30
    // 0x80258D10: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_1;
    // 0x80258D10: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x80258D14: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x80258D18: beq         $s2, $zero, L_80258E88
    if (ctx->r18 == 0) {
        // 0x80258D1C: andi        $v0, $s2, 0x1000
        ctx->r2 = ctx->r18 & 0X1000;
            goto L_80258E88;
    }
    // 0x80258D1C: andi        $v0, $s2, 0x1000
    ctx->r2 = ctx->r18 & 0X1000;
    // 0x80258D20: beq         $v0, $zero, L_80258E20
    if (ctx->r2 == 0) {
        // 0x80258D24: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_80258E20;
    }
    // 0x80258D24: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x80258D28: lh          $v0, 0x46($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X46);
    // 0x80258D2C: bltzl       $v0, L_80258D48
    if (SIGNED(ctx->r2) < 0) {
        // 0x80258D30: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_80258D48;
    }
    goto skip_0;
    // 0x80258D30: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_0:
    // 0x80258D34: slti        $v0, $v0, 0x1001
    ctx->r2 = SIGNED(ctx->r2) < 0X1001 ? 1 : 0;
    // 0x80258D38: bnel        $v0, $zero, L_80258D58
    if (ctx->r2 != 0) {
        // 0x80258D3C: addiu       $s3, $zero, 0x1
        ctx->r19 = ADD32(0, 0X1);
            goto L_80258D58;
    }
    goto skip_1;
    // 0x80258D3C: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    skip_1:
    // 0x80258D40: j           L_80258D74
    // 0x80258D44: nop

        goto L_80258D74;
    // 0x80258D44: nop

L_80258D48:
    // 0x80258D48: slti        $v0, $v0, 0x1001
    ctx->r2 = SIGNED(ctx->r2) < 0X1001 ? 1 : 0;
    // 0x80258D4C: beq         $v0, $zero, L_80258D74
    if (ctx->r2 == 0) {
        // 0x80258D50: nop
    
            goto L_80258D74;
    }
    // 0x80258D50: nop

    // 0x80258D54: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
L_80258D58:
    // 0x80258D58: sh          $zero, 0x44($s1)
    MEM_H(0X44, ctx->r17) = 0;
    // 0x80258D5C: sh          $zero, 0x46($s1)
    MEM_H(0X46, ctx->r17) = 0;
    // 0x80258D60: sh          $zero, 0x48($s1)
    MEM_H(0X48, ctx->r17) = 0;
    // 0x80258D64: sh          $zero, 0x4C($s1)
    MEM_H(0X4C, ctx->r17) = 0;
    // 0x80258D68: sh          $zero, 0x4E($s1)
    MEM_H(0X4E, ctx->r17) = 0;
    // 0x80258D6C: j           L_80258DB4
    // 0x80258D70: sh          $zero, 0x50($s1)
    MEM_H(0X50, ctx->r17) = 0;
        goto L_80258DB4;
    // 0x80258D70: sh          $zero, 0x50($s1)
    MEM_H(0X50, ctx->r17) = 0;
L_80258D74:
    // 0x80258D74: lh          $v1, 0x46($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X46);
    // 0x80258D78: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80258D7C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80258D80: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x80258D84: bltzl       $v0, L_80258D8C
    if (SIGNED(ctx->r2) < 0) {
        // 0x80258D88: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_80258D8C;
    }
    goto skip_2;
    // 0x80258D88: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_2:
L_80258D8C:
    // 0x80258D8C: srl         $v1, $v0, 8
    ctx->r3 = S32(U32(ctx->r2) >> 8);
    // 0x80258D90: lhu         $v0, 0x44($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X44);
    // 0x80258D94: sh          $v1, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r3;
    // 0x80258D98: lhu         $v1, 0x48($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X48);
    // 0x80258D9C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80258DA0: sra         $v0, $v0, 17
    ctx->r2 = S32(SIGNED(ctx->r2) >> 17);
    // 0x80258DA4: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80258DA8: sra         $v1, $v1, 17
    ctx->r3 = S32(SIGNED(ctx->r3) >> 17);
    // 0x80258DAC: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x80258DB0: sh          $v1, 0x48($s1)
    MEM_H(0X48, ctx->r17) = ctx->r3;
L_80258DB4:
    // 0x80258DB4: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80258DB8: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x80258DBC: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x80258DC0: bne         $v1, $v0, L_80258E40
    if (ctx->r3 != ctx->r2) {
        // 0x80258DC4: addiu       $a0, $zero, 0x129
        ctx->r4 = ADD32(0, 0X129);
            goto L_80258E40;
    }
    // 0x80258DC4: addiu       $a0, $zero, 0x129
    ctx->r4 = ADD32(0, 0X129);
    // 0x80258DC8: lh          $v1, 0x16($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X16);
    // 0x80258DCC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80258DD0: bne         $v1, $v0, L_80258E40
    if (ctx->r3 != ctx->r2) {
        // 0x80258DD4: nop
    
            goto L_80258E40;
    }
    // 0x80258DD4: nop

    // 0x80258DD8: jal         0x8004F568
    // 0x80258DDC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F568_2A968(rdram, ctx);
        goto after_2;
    // 0x80258DDC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x80258DE0: addiu       $a0, $zero, 0x102
    ctx->r4 = ADD32(0, 0X102);
    // 0x80258DE4: jal         0x8002A33C
    // 0x80258DE8: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_3;
    // 0x80258DE8: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_3:
    // 0x80258DEC: jal         0x8004F144
    // 0x80258DF0: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_4;
    // 0x80258DF0: nop

    after_4:
    // 0x80258DF4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80258DF8: beq         $s0, $zero, L_80258E0C
    if (ctx->r16 == 0) {
        // 0x80258DFC: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80258E0C;
    }
    // 0x80258DFC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80258E00: addiu       $a1, $s1, 0x88
    ctx->r5 = ADD32(ctx->r17, 0X88);
    // 0x80258E04: jal         0x8009A3B4
    // 0x80258E08: addiu       $a2, $zero, 0x34
    ctx->r6 = ADD32(0, 0X34);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x80258E08: addiu       $a2, $zero, 0x34
    ctx->r6 = ADD32(0, 0X34);
    after_5:
L_80258E0C:
    // 0x80258E0C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80258E10: jal         0x80259094
    // 0x80258E14: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80259094_ovl34_1(rdram, ctx);
        goto after_6;
    // 0x80258E14: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_6:
    // 0x80258E18: j           L_80258E80
    // 0x80258E1C: addiu       $a0, $s1, 0x44
    ctx->r4 = ADD32(ctx->r17, 0X44);
        goto L_80258E80;
    // 0x80258E1C: addiu       $a0, $s1, 0x44
    ctx->r4 = ADD32(ctx->r17, 0X44);
L_80258E20:
    // 0x80258E20: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80258E24: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x80258E28: bne         $v1, $v0, L_80258E40
    if (ctx->r3 != ctx->r2) {
        // 0x80258E2C: addiu       $a0, $zero, 0x129
        ctx->r4 = ADD32(0, 0X129);
            goto L_80258E40;
    }
    // 0x80258E2C: addiu       $a0, $zero, 0x129
    ctx->r4 = ADD32(0, 0X129);
    // 0x80258E30: lh          $v1, 0x16($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X16);
    // 0x80258E34: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80258E38: beq         $v1, $v0, L_80258E48
    if (ctx->r3 == ctx->r2) {
        // 0x80258E3C: nop
    
            goto L_80258E48;
    }
    // 0x80258E3C: nop

L_80258E40:
    // 0x80258E40: jal         0x8002A33C
    // 0x80258E44: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_7;
    // 0x80258E44: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_7:
L_80258E48:
    // 0x80258E48: jal         0x8004F144
    // 0x80258E4C: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_8;
    // 0x80258E4C: nop

    after_8:
    // 0x80258E50: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80258E54: beq         $s0, $zero, L_80258E7C
    if (ctx->r16 == 0) {
        // 0x80258E58: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80258E7C;
    }
    // 0x80258E58: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80258E5C: addiu       $a1, $s1, 0x88
    ctx->r5 = ADD32(ctx->r17, 0X88);
    // 0x80258E60: addiu       $a2, $zero, 0x34
    ctx->r6 = ADD32(0, 0X34);
    // 0x80258E64: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80258E68: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80258E6C: addiu       $v0, $zero, 0x83
    ctx->r2 = ADD32(0, 0X83);
    // 0x80258E70: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80258E74: jal         0x8009A3B4
    // 0x80258E78: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_9;
    // 0x80258E78: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    after_9:
L_80258E7C:
    // 0x80258E7C: addiu       $a0, $s1, 0x44
    ctx->r4 = ADD32(ctx->r17, 0X44);
L_80258E80:
    // 0x80258E80: jal         0x80040834
    // 0x80258E84: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_80040834_1BC34(rdram, ctx);
        goto after_10;
    // 0x80258E84: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_10:
L_80258E88:
    // 0x80258E88: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    // 0x80258E8C: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80258E90: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80258E94: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80258E98: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80258E9C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80258EA0: jr          $ra
    // 0x80258EA4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80258EA4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80258C28_ovl34_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80258C28: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80258C2C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80258C30: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80258C34: lui         $v1, 0x3D48
    ctx->r3 = S32(0X3D48 << 16);
    // 0x80258C38: ori         $v1, $v1, 0xE
    ctx->r3 = ctx->r3 | 0XE;
    // 0x80258C3C: lui         $v0, 0x2C80
    ctx->r2 = S32(0X2C80 << 16);
    // 0x80258C40: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x80258C44: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80258C48: addiu       $s1, $s0, 0x1C
    ctx->r17 = ADD32(ctx->r16, 0X1C);
    // 0x80258C4C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80258C50: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80258C54: addiu       $s2, $s0, 0x14
    ctx->r18 = ADD32(ctx->r16, 0X14);
    // 0x80258C58: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80258C5C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80258C60: sw          $v1, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->r3;
    // 0x80258C64: jal         0x8004DD04
    // 0x80258C68: sw          $v0, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r2;
    func_8004DD04_29104(rdram, ctx);
        goto after_0;
    // 0x80258C68: sw          $v0, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r2;
    after_0:
    // 0x80258C6C: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80258C70: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x80258C74: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x80258C78: lhu         $a3, 0x18($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X18);
    // 0x80258C7C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80258C80: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80258C84: addiu       $v0, $v0, -0x10
    ctx->r2 = ADD32(ctx->r2, -0X10);
    // 0x80258C88: sh          $v1, 0x90($s0)
    MEM_H(0X90, ctx->r16) = ctx->r3;
    // 0x80258C8C: sh          $v0, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r2;
    // 0x80258C90: jal         0x8009A3B4
    // 0x80258C94: sh          $a3, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r7;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80258C94: sh          $a3, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r7;
    after_1:
    // 0x80258C98: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80258C9C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80258CA0: jal         0x8009A3B4
    // 0x80258CA4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80258CA4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80258CA8: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80258CAC: addiu       $v0, $zero, 0xD8
    ctx->r2 = ADD32(0, 0XD8);
    // 0x80258CB0: sb          $v0, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r2;
    // 0x80258CB4: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
    // 0x80258CB8: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80258CBC: sh          $v0, 0x98($s0)
    MEM_H(0X98, ctx->r16) = ctx->r2;
    // 0x80258CC0: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80258CC4: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    // 0x80258CC8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80258CCC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80258CD0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80258CD4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80258CD8: jr          $ra
    // 0x80258CDC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80258CDC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80259034_ovl34_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80259034: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80259038: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8025903C: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x80259040: lh          $v1, 0x0($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X0);
    // 0x80259044: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80259048: mult        $v0, $v0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8025904C: mflo        $v0
    ctx->r2 = lo;
    // 0x80259050: lh          $a2, 0x2($a0)
    ctx->r6 = MEM_H(ctx->r4, 0X2);
    // 0x80259054: lh          $v1, 0x2($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X2);
    // 0x80259058: subu        $a2, $a2, $v1
    ctx->r6 = SUB32(ctx->r6, ctx->r3);
    // 0x8025905C: mult        $a2, $a2
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80259060: mflo        $a2
    ctx->r6 = lo;
    // 0x80259064: lh          $a0, 0x4($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4);
    // 0x80259068: lh          $v1, 0x4($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X4);
    // 0x8025906C: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x80259070: mult        $a0, $a0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80259074: mflo        $a0
    ctx->r4 = lo;
    // 0x80259078: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x8025907C: nop

    // 0x80259080: jal         0x80032424
    // 0x80259084: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_80032424_D824(rdram, ctx);
        goto after_0;
    // 0x80259084: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_0:
    // 0x80259088: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8025908C: jr          $ra
    // 0x80259090: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80259090: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802584C0_ovl34_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802584C0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802584C4: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x802584C8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802584CC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x802584D0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802584D4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802584D8: lui         $at, 0x8026
    ctx->r1 = S32(0X8026 << 16);
    // 0x802584DC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802584E0: lw          $v0, -0x6EF4($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6EF4);
    // 0x802584E4: jalr        $v0
    // 0x802584E8: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802584E8: nop

    after_0:
    // 0x802584EC: lhu         $v0, 0x90($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X90);
    // 0x802584F0: sh          $v0, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r2;
    // 0x802584F4: lhu         $v0, 0x92($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X92);
    // 0x802584F8: sh          $v0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r2;
    // 0x802584FC: lhu         $v0, 0x94($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X94);
    // 0x80258500: sh          $v0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r2;
    // 0x80258504: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x80258508: beq         $v0, $zero, L_8025852C
    if (ctx->r2 == 0) {
        // 0x8025850C: addiu       $a1, $zero, 0x8
        ctx->r5 = ADD32(0, 0X8);
            goto L_8025852C;
    }
    // 0x8025850C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80258510: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x80258514: lbu         $a2, 0x1($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X1);
    // 0x80258518: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8025851C: lb          $v1, 0x4ECC($v1)
    ctx->r3 = MEM_B(ctx->r3, 0X4ECC);
    // 0x80258520: addiu       $v0, $s0, 0xC8
    ctx->r2 = ADD32(ctx->r16, 0XC8);
    // 0x80258524: j           L_80258544
    // 0x80258528: addiu       $a3, $zero, 0x6000
    ctx->r7 = ADD32(0, 0X6000);
        goto L_80258544;
    // 0x80258528: addiu       $a3, $zero, 0x6000
    ctx->r7 = ADD32(0, 0X6000);
L_8025852C:
    // 0x8025852C: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x80258530: lbu         $a2, 0x1($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X1);
    // 0x80258534: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80258538: lb          $v1, 0x4ECC($v1)
    ctx->r3 = MEM_B(ctx->r3, 0X4ECC);
    // 0x8025853C: addiu       $v0, $s0, 0xC8
    ctx->r2 = ADD32(ctx->r16, 0XC8);
    // 0x80258540: addiu       $a3, $zero, 0x4000
    ctx->r7 = ADD32(0, 0X4000);
L_80258544:
    // 0x80258544: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80258548: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8025854C: sw          $a2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r6;
    // 0x80258550: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80258554: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80258558: lh          $v1, 0x32DC($at)
    ctx->r3 = MEM_H(ctx->r1, 0X32DC);
    // 0x8025855C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80258560: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80258564: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80258568: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x8025856C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80258570: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80258574: jal         0x80051E18
    // 0x80258578: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_1;
    // 0x80258578: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_1:
    // 0x8025857C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80258580: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    // 0x80258584: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x80258588: jal         0x8003B564
    // 0x8025858C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_2;
    // 0x8025858C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x80258590: jal         0x800472C0
    // 0x80258594: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800472C0_226C0(rdram, ctx);
        goto after_3;
    // 0x80258594: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80258598: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8025859C: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x802585A0: jr          $ra
    // 0x802585A4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x802585A4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80258A54_ovl34_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80258A54: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80258A58: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80258A5C: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x80258A60: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80258A64: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80258A68: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80258A6C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80258A70: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80258A74: jal         0x80071110
    // 0x80258A78: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80071110_4C510(rdram, ctx);
        goto after_0;
    // 0x80258A78: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x80258A7C: bnel        $v0, $zero, L_80258BE4
    if (ctx->r2 != 0) {
        // 0x80258A80: sw          $zero, 0x9C($s4)
        MEM_W(0X9C, ctx->r20) = 0;
            goto L_80258BE4;
    }
    goto skip_0;
    // 0x80258A80: sw          $zero, 0x9C($s4)
    MEM_W(0X9C, ctx->r20) = 0;
    skip_0:
    // 0x80258A84: lh          $v0, 0x7C($s4)
    ctx->r2 = MEM_H(ctx->r20, 0X7C);
    // 0x80258A88: beq         $v0, $zero, L_80258A98
    if (ctx->r2 == 0) {
        // 0x80258A8C: addiu       $s2, $s4, 0x34
        ctx->r18 = ADD32(ctx->r20, 0X34);
            goto L_80258A98;
    }
    // 0x80258A8C: addiu       $s2, $s4, 0x34
    ctx->r18 = ADD32(ctx->r20, 0X34);
    // 0x80258A90: j           L_80258BE4
    // 0x80258A94: sw          $zero, 0x9C($s4)
    MEM_W(0X9C, ctx->r20) = 0;
        goto L_80258BE4;
    // 0x80258A94: sw          $zero, 0x9C($s4)
    MEM_W(0X9C, ctx->r20) = 0;
L_80258A98:
    // 0x80258A98: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80258A9C: addiu       $s3, $s4, 0x1C
    ctx->r19 = ADD32(ctx->r20, 0X1C);
    // 0x80258AA0: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x80258AA4: jal         0x8009A3B4
    // 0x80258AA8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80258AA8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80258AAC: addiu       $s0, $s4, 0x2C
    ctx->r16 = ADD32(ctx->r20, 0X2C);
    // 0x80258AB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80258AB4: addiu       $s1, $s4, 0x14
    ctx->r17 = ADD32(ctx->r20, 0X14);
    // 0x80258AB8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80258ABC: jal         0x8009A3B4
    // 0x80258AC0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80258AC0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80258AC4: jal         0x80258EA8
    // 0x80258AC8: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_80258EA8_ovl34_1(rdram, ctx);
        goto after_3;
    // 0x80258AC8: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_3:
    // 0x80258ACC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80258AD0: jal         0x8004DD04
    // 0x80258AD4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8004DD04_29104(rdram, ctx);
        goto after_4;
    // 0x80258AD4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80258AD8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80258ADC: jal         0x8004DD04
    // 0x80258AE0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8004DD04_29104(rdram, ctx);
        goto after_5;
    // 0x80258AE0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_5:
    // 0x80258AE4: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80258AE8: lbu         $v0, -0x3BC8($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3BC8);
    // 0x80258AEC: addiu       $v0, $v0, -0x10
    ctx->r2 = ADD32(ctx->r2, -0X10);
    // 0x80258AF0: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x80258AF4: beq         $v0, $zero, L_80258B0C
    if (ctx->r2 == 0) {
        // 0x80258AF8: nop
    
            goto L_80258B0C;
    }
    // 0x80258AF8: nop

    // 0x80258AFC: lh          $v0, 0x16($s4)
    ctx->r2 = MEM_H(ctx->r20, 0X16);
    // 0x80258B00: slti        $v0, $v0, -0x1
    ctx->r2 = SIGNED(ctx->r2) < -0X1 ? 1 : 0;
    // 0x80258B04: beql        $v0, $zero, L_80258C00
    if (ctx->r2 == 0) {
        // 0x80258B08: sb          $zero, 0x0($s4)
        MEM_B(0X0, ctx->r20) = 0;
            goto L_80258C00;
    }
    goto skip_1;
    // 0x80258B08: sb          $zero, 0x0($s4)
    MEM_B(0X0, ctx->r20) = 0;
    skip_1:
L_80258B0C:
    // 0x80258B0C: jal         0x80258CE0
    // 0x80258B10: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_80258CE0_ovl34_1(rdram, ctx);
        goto after_6;
    // 0x80258B10: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_6:
    // 0x80258B14: lhu         $a0, 0x14($s4)
    ctx->r4 = MEM_HU(ctx->r20, 0X14);
    // 0x80258B18: lhu         $v0, 0x16($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X16);
    // 0x80258B1C: lhu         $a1, 0x18($s4)
    ctx->r5 = MEM_HU(ctx->r20, 0X18);
    // 0x80258B20: lbu         $v1, 0x9($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X9);
    // 0x80258B24: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
    // 0x80258B28: sh          $v0, 0x92($s4)
    MEM_H(0X92, ctx->r20) = ctx->r2;
    // 0x80258B2C: lbu         $v0, 0x9($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X9);
    // 0x80258B30: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80258B34: sh          $a0, 0x90($s4)
    MEM_H(0X90, ctx->r20) = ctx->r4;
    // 0x80258B38: sh          $a1, 0x94($s4)
    MEM_H(0X94, ctx->r20) = ctx->r5;
    // 0x80258B3C: lui         $at, 0x8026
    ctx->r1 = S32(0X8026 << 16);
    // 0x80258B40: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80258B44: lw          $v1, -0x6F24($at)
    ctx->r3 = MEM_W(ctx->r1, -0X6F24);
    // 0x80258B48: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80258B4C: sb          $v1, 0x96($s4)
    MEM_B(0X96, ctx->r20) = ctx->r3;
    // 0x80258B50: lui         $at, 0x8026
    ctx->r1 = S32(0X8026 << 16);
    // 0x80258B54: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80258B58: lw          $v0, -0x6F20($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6F20);
    // 0x80258B5C: lh          $v1, 0x44($s4)
    ctx->r3 = MEM_H(ctx->r20, 0X44);
    // 0x80258B60: beq         $v1, $zero, L_80258B84
    if (ctx->r3 == 0) {
        // 0x80258B64: sb          $v0, 0x97($s4)
        MEM_B(0X97, ctx->r20) = ctx->r2;
            goto L_80258B84;
    }
    // 0x80258B64: sb          $v0, 0x97($s4)
    MEM_B(0X97, ctx->r20) = ctx->r2;
    // 0x80258B68: lbu         $v0, 0x9($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X9);
    // 0x80258B6C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80258B70: sb          $v0, 0x9($s4)
    MEM_B(0X9, ctx->r20) = ctx->r2;
    // 0x80258B74: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80258B78: sltiu       $v0, $v0, 0x6
    ctx->r2 = ctx->r2 < 0X6 ? 1 : 0;
    // 0x80258B7C: beql        $v0, $zero, L_80258B84
    if (ctx->r2 == 0) {
        // 0x80258B80: sb          $zero, 0x9($s4)
        MEM_B(0X9, ctx->r20) = 0;
            goto L_80258B84;
    }
    goto skip_2;
    // 0x80258B80: sb          $zero, 0x9($s4)
    MEM_B(0X9, ctx->r20) = 0;
    skip_2:
L_80258B84:
    // 0x80258B84: jal         0x80258FF4
    // 0x80258B88: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_80258FF4_ovl34_1(rdram, ctx);
        goto after_7;
    // 0x80258B88: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_7:
    // 0x80258B8C: lb          $v1, 0xD($s4)
    ctx->r3 = MEM_B(ctx->r20, 0XD);
    // 0x80258B90: slti        $v0, $v1, 0x1E
    ctx->r2 = SIGNED(ctx->r3) < 0X1E ? 1 : 0;
    // 0x80258B94: beq         $v0, $zero, L_80258BE4
    if (ctx->r2 == 0) {
        // 0x80258B98: slti        $v0, $v1, 0xF
        ctx->r2 = SIGNED(ctx->r3) < 0XF ? 1 : 0;
            goto L_80258BE4;
    }
    // 0x80258B98: slti        $v0, $v1, 0xF
    ctx->r2 = SIGNED(ctx->r3) < 0XF ? 1 : 0;
    // 0x80258B9C: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x80258BA0: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80258BA4: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80258BA8: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x80258BAC: beq         $v0, $zero, L_80258BD4
    if (ctx->r2 == 0) {
        // 0x80258BB0: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_80258BD4;
    }
    // 0x80258BB0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80258BB4: lbu         $v1, 0x8F($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X8F);
    // 0x80258BB8: bnel        $v1, $v0, L_80258BCC
    if (ctx->r3 != ctx->r2) {
        // 0x80258BBC: lui         $v0, 0x2CFF
        ctx->r2 = S32(0X2CFF << 16);
            goto L_80258BCC;
    }
    goto skip_3;
    // 0x80258BBC: lui         $v0, 0x2CFF
    ctx->r2 = S32(0X2CFF << 16);
    skip_3:
    // 0x80258BC0: lui         $v0, 0x2C80
    ctx->r2 = S32(0X2C80 << 16);
    // 0x80258BC4: j           L_80258BD0
    // 0x80258BC8: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
        goto L_80258BD0;
    // 0x80258BC8: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
L_80258BCC:
    // 0x80258BCC: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
L_80258BD0:
    // 0x80258BD0: sw          $v0, 0x8C($s4)
    MEM_W(0X8C, ctx->r20) = ctx->r2;
L_80258BD4:
    // 0x80258BD4: lbu         $v0, 0xD($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XD);
    // 0x80258BD8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80258BDC: j           L_80258C08
    // 0x80258BE0: sb          $v0, 0xD($s4)
    MEM_B(0XD, ctx->r20) = ctx->r2;
        goto L_80258C08;
    // 0x80258BE0: sb          $v0, 0xD($s4)
    MEM_B(0XD, ctx->r20) = ctx->r2;
L_80258BE4:
    // 0x80258BE4: jal         0x8004F144
    // 0x80258BE8: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_8;
    // 0x80258BE8: nop

    after_8:
    // 0x80258BEC: beq         $v0, $zero, L_80258BFC
    if (ctx->r2 == 0) {
        // 0x80258BF0: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_80258BFC;
    }
    // 0x80258BF0: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x80258BF4: jal         0x80258F98
    // 0x80258BF8: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_80258F98_ovl34_1(rdram, ctx);
        goto after_9;
    // 0x80258BF8: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_9:
L_80258BFC:
    // 0x80258BFC: sb          $zero, 0x0($s4)
    MEM_B(0X0, ctx->r20) = 0;
L_80258C00:
    // 0x80258C00: jal         0x8004F568
    // 0x80258C04: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_8004F568_2A968(rdram, ctx);
        goto after_10;
    // 0x80258C04: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_10:
L_80258C08:
    // 0x80258C08: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80258C0C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80258C10: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80258C14: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80258C18: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80258C1C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80258C20: jr          $ra
    // 0x80258C24: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80258C24: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802589C4_ovl34_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802589C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802589C8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802589CC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802589D0: lui         $v1, 0x3D48
    ctx->r3 = S32(0X3D48 << 16);
    // 0x802589D4: ori         $v1, $v1, 0xE
    ctx->r3 = ctx->r3 | 0XE;
    // 0x802589D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802589DC: lhu         $a0, 0x1C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X1C);
    // 0x802589E0: lhu         $a1, 0x20($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X20);
    // 0x802589E4: lhu         $a2, 0x24($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X24);
    // 0x802589E8: lui         $v0, 0x2C80
    ctx->r2 = S32(0X2C80 << 16);
    // 0x802589EC: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x802589F0: sw          $v0, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r2;
    // 0x802589F4: addiu       $v0, $zero, 0xD8
    ctx->r2 = ADD32(0, 0XD8);
    // 0x802589F8: sb          $v0, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r2;
    // 0x802589FC: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
    // 0x80258A00: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80258A04: sw          $v1, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->r3;
    // 0x80258A08: sh          $v0, 0x98($s0)
    MEM_H(0X98, ctx->r16) = ctx->r2;
    // 0x80258A0C: sh          $a0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r4;
    // 0x80258A10: sh          $a0, 0x90($s0)
    MEM_H(0X90, ctx->r16) = ctx->r4;
    // 0x80258A14: sh          $a1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r5;
    // 0x80258A18: sh          $a1, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r5;
    // 0x80258A1C: sh          $a2, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r6;
    // 0x80258A20: jal         0x8004F144
    // 0x80258A24: sh          $a2, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r6;
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80258A24: sh          $a2, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r6;
    after_0:
    // 0x80258A28: beq         $v0, $zero, L_80258A38
    if (ctx->r2 == 0) {
        // 0x80258A2C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80258A38;
    }
    // 0x80258A2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80258A30: jal         0x80258F98
    // 0x80258A34: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_80258F98_ovl34_1(rdram, ctx);
        goto after_1;
    // 0x80258A34: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_1:
L_80258A38:
    // 0x80258A38: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    // 0x80258A3C: jal         0x8004F568
    // 0x80258A40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F568_2A968(rdram, ctx);
        goto after_2;
    // 0x80258A40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80258A44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80258A48: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80258A4C: jr          $ra
    // 0x80258A50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80258A50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80258504_ovl35(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80258504: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80258508: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x8025850C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80258510: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x80258514: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x80258518: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x8025851C: jal         0x800530E8
    // 0x80258520: lb          $a0, 0xD($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XD);
    func_800530E8_2E4E8(rdram, ctx);
        goto after_0;
    // 0x80258520: lb          $a0, 0xD($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XD);
    after_0:
    // 0x80258524: jal         0x80034B34
    // 0x80258528: nop

    func_80034B34_FF34(rdram, ctx);
        goto after_1;
    // 0x80258528: nop

    after_1:
    // 0x8025852C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80258530: sh          $v0, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r2;
    // 0x80258534: lh          $a2, 0x64($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X64);
    // 0x80258538: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8025853C: jal         0x80258A10
    // 0x80258540: sra         $a1, $v0, 16
    ctx->r5 = S32(SIGNED(ctx->r2) >> 16);
    func_80258A10_ovl35(rdram, ctx);
        goto after_2;
    // 0x80258540: sra         $a1, $v0, 16
    ctx->r5 = S32(SIGNED(ctx->r2) >> 16);
    after_2:
    // 0x80258544: jal         0x8004F094
    // 0x80258548: nop

    func_8004F094_2A494(rdram, ctx);
        goto after_3;
    // 0x80258548: nop

    after_3:
    // 0x8025854C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80258550: beq         $s0, $zero, L_80258584
    if (ctx->r16 == 0) {
        // 0x80258554: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80258584;
    }
    // 0x80258554: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80258558: jal         0x802589A4
    // 0x8025855C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_802589A4_ovl35(rdram, ctx);
        goto after_4;
    // 0x8025855C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80258560: jal         0x800A3450
    // 0x80258564: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_5;
    // 0x80258564: nop

    after_5:
    // 0x80258568: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8025856C: lh          $a1, 0x18($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X18);
    // 0x80258570: lh          $a2, 0x64($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X64);
    // 0x80258574: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x80258578: addiu       $v0, $v0, 0x80
    ctx->r2 = ADD32(ctx->r2, 0X80);
    // 0x8025857C: jal         0x80258A10
    // 0x80258580: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    func_80258A10_ovl35(rdram, ctx);
        goto after_6;
    // 0x80258580: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    after_6:
L_80258584:
    // 0x80258584: jal         0x8004F094
    // 0x80258588: nop

    func_8004F094_2A494(rdram, ctx);
        goto after_7;
    // 0x80258588: nop

    after_7:
    // 0x8025858C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80258590: beq         $s0, $zero, L_802585C4
    if (ctx->r16 == 0) {
        // 0x80258594: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_802585C4;
    }
    // 0x80258594: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80258598: jal         0x802589A4
    // 0x8025859C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_802589A4_ovl35(rdram, ctx);
        goto after_8;
    // 0x8025859C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_8:
    // 0x802585A0: jal         0x800A3450
    // 0x802585A4: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_9;
    // 0x802585A4: nop

    after_9:
    // 0x802585A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802585AC: lh          $a1, 0x18($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X18);
    // 0x802585B0: lh          $a2, 0x64($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X64);
    // 0x802585B4: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x802585B8: addiu       $v0, $v0, -0x80
    ctx->r2 = ADD32(ctx->r2, -0X80);
    // 0x802585BC: jal         0x80258A10
    // 0x802585C0: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    func_80258A10_ovl35(rdram, ctx);
        goto after_10;
    // 0x802585C0: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    after_10:
L_802585C4:
    // 0x802585C4: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x802585C8: addiu       $s2, $s2, 0x4ED8
    ctx->r18 = ADD32(ctx->r18, 0X4ED8);
    // 0x802585CC: lb          $v0, 0x0($s2)
    ctx->r2 = MEM_B(ctx->r18, 0X0);
    // 0x802585D0: blez        $v0, L_802586EC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x802585D4: addiu       $a0, $zero, 0x12A
        ctx->r4 = ADD32(0, 0X12A);
            goto L_802586EC;
    }
    // 0x802585D4: addiu       $a0, $zero, 0x12A
    ctx->r4 = ADD32(0, 0X12A);
    // 0x802585D8: jal         0x8004F094
    // 0x802585DC: nop

    func_8004F094_2A494(rdram, ctx);
        goto after_11;
    // 0x802585DC: nop

    after_11:
    // 0x802585E0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x802585E4: beq         $s0, $zero, L_80258618
    if (ctx->r16 == 0) {
        // 0x802585E8: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80258618;
    }
    // 0x802585E8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802585EC: jal         0x802589A4
    // 0x802585F0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_802589A4_ovl35(rdram, ctx);
        goto after_12;
    // 0x802585F0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_12:
    // 0x802585F4: jal         0x800A3450
    // 0x802585F8: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_13;
    // 0x802585F8: nop

    after_13:
    // 0x802585FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80258600: lh          $a1, 0x18($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X18);
    // 0x80258604: lh          $a2, 0x64($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X64);
    // 0x80258608: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x8025860C: addiu       $v0, $v0, 0x100
    ctx->r2 = ADD32(ctx->r2, 0X100);
    // 0x80258610: jal         0x80258A10
    // 0x80258614: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    func_80258A10_ovl35(rdram, ctx);
        goto after_14;
    // 0x80258614: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    after_14:
L_80258618:
    // 0x80258618: jal         0x8004F094
    // 0x8025861C: nop

    func_8004F094_2A494(rdram, ctx);
        goto after_15;
    // 0x8025861C: nop

    after_15:
    // 0x80258620: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80258624: beq         $s0, $zero, L_80258658
    if (ctx->r16 == 0) {
        // 0x80258628: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80258658;
    }
    // 0x80258628: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8025862C: jal         0x802589A4
    // 0x80258630: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_802589A4_ovl35(rdram, ctx);
        goto after_16;
    // 0x80258630: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_16:
    // 0x80258634: jal         0x800A3450
    // 0x80258638: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_17;
    // 0x80258638: nop

    after_17:
    // 0x8025863C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80258640: lh          $a1, 0x18($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X18);
    // 0x80258644: lh          $a2, 0x64($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X64);
    // 0x80258648: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x8025864C: addiu       $v0, $v0, -0x100
    ctx->r2 = ADD32(ctx->r2, -0X100);
    // 0x80258650: jal         0x80258A10
    // 0x80258654: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    func_80258A10_ovl35(rdram, ctx);
        goto after_18;
    // 0x80258654: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    after_18:
L_80258658:
    // 0x80258658: lb          $v0, 0x0($s2)
    ctx->r2 = MEM_B(ctx->r18, 0X0);
    // 0x8025865C: slti        $v0, $v0, 0x2
    ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x80258660: bne         $v0, $zero, L_802586EC
    if (ctx->r2 != 0) {
        // 0x80258664: addiu       $a0, $zero, 0x12A
        ctx->r4 = ADD32(0, 0X12A);
            goto L_802586EC;
    }
    // 0x80258664: addiu       $a0, $zero, 0x12A
    ctx->r4 = ADD32(0, 0X12A);
    // 0x80258668: jal         0x8004F094
    // 0x8025866C: nop

    func_8004F094_2A494(rdram, ctx);
        goto after_19;
    // 0x8025866C: nop

    after_19:
    // 0x80258670: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80258674: beq         $s0, $zero, L_802586A8
    if (ctx->r16 == 0) {
        // 0x80258678: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_802586A8;
    }
    // 0x80258678: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8025867C: jal         0x802589A4
    // 0x80258680: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_802589A4_ovl35(rdram, ctx);
        goto after_20;
    // 0x80258680: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_20:
    // 0x80258684: jal         0x800A3450
    // 0x80258688: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_21;
    // 0x80258688: nop

    after_21:
    // 0x8025868C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80258690: lh          $a1, 0x18($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X18);
    // 0x80258694: lh          $a2, 0x64($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X64);
    // 0x80258698: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x8025869C: addiu       $v0, $v0, 0x180
    ctx->r2 = ADD32(ctx->r2, 0X180);
    // 0x802586A0: jal         0x80258A10
    // 0x802586A4: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    func_80258A10_ovl35(rdram, ctx);
        goto after_22;
    // 0x802586A4: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    after_22:
L_802586A8:
    // 0x802586A8: jal         0x8004F094
    // 0x802586AC: nop

    func_8004F094_2A494(rdram, ctx);
        goto after_23;
    // 0x802586AC: nop

    after_23:
    // 0x802586B0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x802586B4: beq         $s0, $zero, L_802586E8
    if (ctx->r16 == 0) {
        // 0x802586B8: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_802586E8;
    }
    // 0x802586B8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802586BC: jal         0x802589A4
    // 0x802586C0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_802589A4_ovl35(rdram, ctx);
        goto after_24;
    // 0x802586C0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_24:
    // 0x802586C4: jal         0x800A3450
    // 0x802586C8: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_25;
    // 0x802586C8: nop

    after_25:
    // 0x802586CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802586D0: lh          $a1, 0x18($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X18);
    // 0x802586D4: lh          $a2, 0x64($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X64);
    // 0x802586D8: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x802586DC: addiu       $v0, $v0, -0x180
    ctx->r2 = ADD32(ctx->r2, -0X180);
    // 0x802586E0: jal         0x80258A10
    // 0x802586E4: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    func_80258A10_ovl35(rdram, ctx);
        goto after_26;
    // 0x802586E4: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    after_26:
L_802586E8:
    // 0x802586E8: addiu       $a0, $zero, 0x12A
    ctx->r4 = ADD32(0, 0X12A);
L_802586EC:
    // 0x802586EC: jal         0x8002A33C
    // 0x802586F0: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_27;
    // 0x802586F0: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_27:
    // 0x802586F4: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x802586F8: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x802586FC: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x80258700: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x80258704: jr          $ra
    // 0x80258708: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x80258708: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_80258900_ovl35(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80258900: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80258904: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80258908: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8025890C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80258910: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x80258914: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80258918: jal         0x80071060
    // 0x8025891C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_80071060_4C460(rdram, ctx);
        goto after_0;
    // 0x8025891C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_0:
    // 0x80258920: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x80258924: beq         $v1, $zero, L_80258948
    if (ctx->r3 == 0) {
        // 0x80258928: addu        $t0, $v0, $zero
        ctx->r8 = ADD32(ctx->r2, 0);
            goto L_80258948;
    }
    // 0x80258928: addu        $t0, $v0, $zero
    ctx->r8 = ADD32(ctx->r2, 0);
    // 0x8025892C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80258930: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x80258934: addiu       $a2, $s0, 0x2C
    ctx->r6 = ADD32(ctx->r16, 0X2C);
    // 0x80258938: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8025893C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80258940: j           L_80258960
    // 0x80258944: addiu       $v0, $zero, 0x6000
    ctx->r2 = ADD32(0, 0X6000);
        goto L_80258960;
    // 0x80258944: addiu       $v0, $zero, 0x6000
    ctx->r2 = ADD32(0, 0X6000);
L_80258948:
    // 0x80258948: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8025894C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x80258950: addiu       $a2, $s0, 0x2C
    ctx->r6 = ADD32(ctx->r16, 0X2C);
    // 0x80258954: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80258958: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8025895C: addiu       $v0, $zero, 0x4000
    ctx->r2 = ADD32(0, 0X4000);
L_80258960:
    // 0x80258960: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80258964: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80258968: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x8025896C: addiu       $v0, $s0, 0xC8
    ctx->r2 = ADD32(ctx->r16, 0XC8);
    // 0x80258970: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80258974: lui         $v0, 0x8800
    ctx->r2 = S32(0X8800 << 16);
    // 0x80258978: or          $v0, $t0, $v0
    ctx->r2 = ctx->r8 | ctx->r2;
    // 0x8025897C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80258980: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80258984: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80258988: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x8025898C: jal         0x80051F9C
    // 0x80258990: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051F9C_2D39C(rdram, ctx);
        goto after_1;
    // 0x80258990: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_1:
    // 0x80258994: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80258998: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8025899C: jr          $ra
    // 0x802589A0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x802589A0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80258A10_ovl35(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80258A10: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x80258A14: sw          $s3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r19;
    // 0x80258A18: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x80258A1C: sw          $s0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r16;
    // 0x80258A20: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x80258A24: sw          $ra, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r31;
    // 0x80258A28: sw          $s2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r18;
    // 0x80258A2C: sw          $s1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r17;
    // 0x80258A30: lbu         $v1, 0x0($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X0);
    // 0x80258A34: lbu         $a0, 0x6($s3)
    ctx->r4 = MEM_BU(ctx->r19, 0X6);
    // 0x80258A38: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x80258A3C: lui         $v0, 0x8026
    ctx->r2 = S32(0X8026 << 16);
    // 0x80258A40: addiu       $v0, $v0, -0x7370
    ctx->r2 = ADD32(ctx->r2, -0X7370);
    // 0x80258A44: sw          $zero, 0xC8($s3)
    MEM_W(0XC8, ctx->r19) = 0;
    // 0x80258A48: sw          $zero, 0xCC($s3)
    MEM_W(0XCC, ctx->r19) = 0;
    // 0x80258A4C: sw          $v0, 0x78($s3)
    MEM_W(0X78, ctx->r19) = ctx->r2;
    // 0x80258A50: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80258A54: ori         $a0, $a0, 0x20
    ctx->r4 = ctx->r4 | 0X20;
    // 0x80258A58: sb          $v1, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r3;
    // 0x80258A5C: jal         0x800A3450
    // 0x80258A60: sb          $a0, 0x6($s3)
    MEM_B(0X6, ctx->r19) = ctx->r4;
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80258A60: sb          $a0, 0x6($s3)
    MEM_B(0X6, ctx->r19) = ctx->r4;
    after_0:
    // 0x80258A64: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x80258A68: addiu       $s2, $sp, 0x50
    ctx->r18 = ADD32(ctx->r29, 0X50);
    // 0x80258A6C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80258A70: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80258A74: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x80258A78: subu        $s0, $s0, $v0
    ctx->r16 = SUB32(ctx->r16, ctx->r2);
    // 0x80258A7C: andi        $s1, $s1, 0xFFF
    ctx->r17 = ctx->r17 & 0XFFF;
    // 0x80258A80: sh          $s0, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r16;
    // 0x80258A84: sh          $s1, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = ctx->r17;
    // 0x80258A88: jal         0x80031600
    // 0x80258A8C: sh          $zero, 0x3C($sp)
    MEM_H(0X3C, ctx->r29) = 0;
    func_80031600_CA00(rdram, ctx);
        goto after_1;
    // 0x80258A8C: sh          $zero, 0x3C($sp)
    MEM_H(0X3C, ctx->r29) = 0;
    after_1:
    // 0x80258A90: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80258A94: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x80258A98: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    // 0x80258A9C: addiu       $v0, $zero, -0x1000
    ctx->r2 = ADD32(0, -0X1000);
    // 0x80258AA0: sh          $zero, 0x30($sp)
    MEM_H(0X30, ctx->r29) = 0;
    // 0x80258AA4: sh          $zero, 0x32($sp)
    MEM_H(0X32, ctx->r29) = 0;
    // 0x80258AA8: jal         0x800308E8
    // 0x80258AAC: sh          $v0, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r2;
    func_800308E8_BCE8(rdram, ctx);
        goto after_2;
    // 0x80258AAC: sh          $v0, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r2;
    after_2:
    // 0x80258AB0: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
    // 0x80258AB4: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
    // 0x80258AB8: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x80258ABC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80258AC0: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x80258AC4: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x80258AC8: sh          $v0, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r2;
    // 0x80258ACC: sh          $v1, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r3;
    // 0x80258AD0: jal         0x800710B8
    // 0x80258AD4: sh          $a2, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r6;
    func_800710B8_4C4B8(rdram, ctx);
        goto after_3;
    // 0x80258AD4: sh          $a2, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r6;
    after_3:
    // 0x80258AD8: jal         0x800A3450
    // 0x80258ADC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_800A3450_7E850(rdram, ctx);
        goto after_4;
    // 0x80258ADC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_4:
    // 0x80258AE0: lh          $v1, 0x30($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X30);
    // 0x80258AE4: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x80258AE8: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x80258AEC: mult        $v1, $s0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80258AF0: mflo        $v1
    ctx->r3 = lo;
    // 0x80258AF4: srl         $v1, $v1, 4
    ctx->r3 = S32(U32(ctx->r3) >> 4);
    // 0x80258AF8: sh          $v1, 0x44($s3)
    MEM_H(0X44, ctx->r19) = ctx->r3;
    // 0x80258AFC: lh          $v0, 0x32($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X32);
    // 0x80258B00: mult        $v0, $s0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80258B04: mflo        $v0
    ctx->r2 = lo;
    // 0x80258B08: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
    // 0x80258B0C: sh          $v0, 0x46($s3)
    MEM_H(0X46, ctx->r19) = ctx->r2;
    // 0x80258B10: lh          $v0, 0x34($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X34);
    // 0x80258B14: mult        $v0, $s0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80258B18: mflo        $v0
    ctx->r2 = lo;
    // 0x80258B1C: addiu       $a0, $s3, 0xA4
    ctx->r4 = ADD32(ctx->r19, 0XA4);
    // 0x80258B20: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x80258B24: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80258B28: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
    // 0x80258B2C: jal         0x8009A3B4
    // 0x80258B30: sh          $v0, 0x48($s3)
    MEM_H(0X48, ctx->r19) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x80258B30: sh          $v0, 0x48($s3)
    MEM_H(0X48, ctx->r19) = ctx->r2;
    after_5:
    // 0x80258B34: lui         $t2, 0x3D48
    ctx->r10 = S32(0X3D48 << 16);
    // 0x80258B38: ori         $t2, $t2, 0xE
    ctx->r10 = ctx->r10 | 0XE;
    // 0x80258B3C: lui         $t1, 0x2C80
    ctx->r9 = S32(0X2C80 << 16);
    // 0x80258B40: ori         $t1, $t1, 0x8080
    ctx->r9 = ctx->r9 | 0X8080;
    // 0x80258B44: addiu       $a0, $s3, 0x34
    ctx->r4 = ADD32(ctx->r19, 0X34);
    // 0x80258B48: lhu         $v1, 0x1C($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0X1C);
    // 0x80258B4C: lhu         $a3, 0x20($s3)
    ctx->r7 = MEM_HU(ctx->r19, 0X20);
    // 0x80258B50: lhu         $t0, 0x24($s3)
    ctx->r8 = MEM_HU(ctx->r19, 0X24);
    // 0x80258B54: addiu       $a1, $s3, 0x1C
    ctx->r5 = ADD32(ctx->r19, 0X1C);
    // 0x80258B58: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80258B5C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80258B60: sh          $zero, 0x4C($s3)
    MEM_H(0X4C, ctx->r19) = 0;
    // 0x80258B64: sh          $v0, 0x4E($s3)
    MEM_H(0X4E, ctx->r19) = ctx->r2;
    // 0x80258B68: sh          $zero, 0x50($s3)
    MEM_H(0X50, ctx->r19) = 0;
    // 0x80258B6C: sw          $t2, 0x88($s3)
    MEM_W(0X88, ctx->r19) = ctx->r10;
    // 0x80258B70: sw          $t1, 0x8C($s3)
    MEM_W(0X8C, ctx->r19) = ctx->r9;
    // 0x80258B74: sh          $v1, 0x14($s3)
    MEM_H(0X14, ctx->r19) = ctx->r3;
    // 0x80258B78: sh          $v1, 0x90($s3)
    MEM_H(0X90, ctx->r19) = ctx->r3;
    // 0x80258B7C: sh          $a3, 0x16($s3)
    MEM_H(0X16, ctx->r19) = ctx->r7;
    // 0x80258B80: sh          $a3, 0x92($s3)
    MEM_H(0X92, ctx->r19) = ctx->r7;
    // 0x80258B84: sh          $t0, 0x18($s3)
    MEM_H(0X18, ctx->r19) = ctx->r8;
    // 0x80258B88: jal         0x8009A3B4
    // 0x80258B8C: sh          $t0, 0x94($s3)
    MEM_H(0X94, ctx->r19) = ctx->r8;
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x80258B8C: sh          $t0, 0x94($s3)
    MEM_H(0X94, ctx->r19) = ctx->r8;
    after_6:
    // 0x80258B90: addiu       $a0, $s3, 0x2C
    ctx->r4 = ADD32(ctx->r19, 0X2C);
    // 0x80258B94: addiu       $a1, $s3, 0x14
    ctx->r5 = ADD32(ctx->r19, 0X14);
    // 0x80258B98: jal         0x8009A3B4
    // 0x80258B9C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x80258B9C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_7:
    // 0x80258BA0: lui         $v0, 0x8026
    ctx->r2 = S32(0X8026 << 16);
    // 0x80258BA4: lw          $v0, -0x7364($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7364);
    // 0x80258BA8: lbu         $v1, 0x8($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X8);
    // 0x80258BAC: lbu         $a1, 0xA($s3)
    ctx->r5 = MEM_BU(ctx->r19, 0XA);
    // 0x80258BB0: sb          $v0, 0x96($s3)
    MEM_B(0X96, ctx->r19) = ctx->r2;
    // 0x80258BB4: lui         $a0, 0x8026
    ctx->r4 = S32(0X8026 << 16);
    // 0x80258BB8: lw          $a0, -0x7360($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X7360);
    // 0x80258BBC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80258BC0: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x80258BC4: sh          $v0, 0x98($s3)
    MEM_H(0X98, ctx->r19) = ctx->r2;
    // 0x80258BC8: sb          $zero, 0xB($s3)
    MEM_B(0XB, ctx->r19) = 0;
    // 0x80258BCC: sb          $v1, 0x8($s3)
    MEM_B(0X8, ctx->r19) = ctx->r3;
    // 0x80258BD0: sb          $zero, 0x9($s3)
    MEM_B(0X9, ctx->r19) = 0;
    // 0x80258BD4: beq         $a1, $zero, L_80258BE4
    if (ctx->r5 == 0) {
        // 0x80258BD8: sb          $a0, 0x97($s3)
        MEM_B(0X97, ctx->r19) = ctx->r4;
            goto L_80258BE4;
    }
    // 0x80258BD8: sb          $a0, 0x97($s3)
    MEM_B(0X97, ctx->r19) = ctx->r4;
    // 0x80258BDC: j           L_80258BE8
    // 0x80258BE0: addiu       $v0, $zero, 0x6208
    ctx->r2 = ADD32(0, 0X6208);
        goto L_80258BE8;
    // 0x80258BE0: addiu       $v0, $zero, 0x6208
    ctx->r2 = ADD32(0, 0X6208);
L_80258BE4:
    // 0x80258BE4: addiu       $v0, $zero, 0x4208
    ctx->r2 = ADD32(0, 0X4208);
L_80258BE8:
    // 0x80258BE8: sh          $v0, 0x1A($s3)
    MEM_H(0X1A, ctx->r19) = ctx->r2;
    // 0x80258BEC: sh          $v0, 0x32($s3)
    MEM_H(0X32, ctx->r19) = ctx->r2;
    // 0x80258BF0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80258BF4: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x80258BF8: jal         0x80071060
    // 0x80258BFC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_80071060_4C460(rdram, ctx);
        goto after_8;
    // 0x80258BFC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_8:
    // 0x80258C00: lb          $v1, 0xC($s3)
    ctx->r3 = MEM_B(ctx->r19, 0XC);
    // 0x80258C04: beq         $v1, $zero, L_80258C28
    if (ctx->r3 == 0) {
        // 0x80258C08: addu        $t0, $v0, $zero
        ctx->r8 = ADD32(ctx->r2, 0);
            goto L_80258C28;
    }
    // 0x80258C08: addu        $t0, $v0, $zero
    ctx->r8 = ADD32(ctx->r2, 0);
    // 0x80258C0C: addiu       $a0, $s3, 0x14
    ctx->r4 = ADD32(ctx->r19, 0X14);
    // 0x80258C10: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x80258C14: addiu       $a2, $s3, 0x2C
    ctx->r6 = ADD32(ctx->r19, 0X2C);
    // 0x80258C18: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80258C1C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80258C20: j           L_80258C40
    // 0x80258C24: addiu       $v0, $zero, 0x6000
    ctx->r2 = ADD32(0, 0X6000);
        goto L_80258C40;
    // 0x80258C24: addiu       $v0, $zero, 0x6000
    ctx->r2 = ADD32(0, 0X6000);
L_80258C28:
    // 0x80258C28: addiu       $a0, $s3, 0x14
    ctx->r4 = ADD32(ctx->r19, 0X14);
    // 0x80258C2C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x80258C30: addiu       $a2, $s3, 0x2C
    ctx->r6 = ADD32(ctx->r19, 0X2C);
    // 0x80258C34: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80258C38: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80258C3C: addiu       $v0, $zero, 0x4000
    ctx->r2 = ADD32(0, 0X4000);
L_80258C40:
    // 0x80258C40: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80258C44: lbu         $v1, 0x1($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X1);
    // 0x80258C48: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x80258C4C: addiu       $v0, $s3, 0xC8
    ctx->r2 = ADD32(ctx->r19, 0XC8);
    // 0x80258C50: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80258C54: lui         $v0, 0x8800
    ctx->r2 = S32(0X8800 << 16);
    // 0x80258C58: or          $v0, $t0, $v0
    ctx->r2 = ctx->r8 | ctx->r2;
    // 0x80258C5C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80258C60: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80258C64: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80258C68: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x80258C6C: jal         0x80051F9C
    // 0x80258C70: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051F9C_2D39C(rdram, ctx);
        goto after_9;
    // 0x80258C70: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_9:
    // 0x80258C74: lw          $ra, 0x80($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X80);
    // 0x80258C78: lw          $s3, 0x7C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X7C);
    // 0x80258C7C: lw          $s2, 0x78($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X78);
    // 0x80258C80: lw          $s1, 0x74($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X74);
    // 0x80258C84: lw          $s0, 0x70($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X70);
    // 0x80258C88: jr          $ra
    // 0x80258C8C: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    TRACE_RETURN()
    return;
    // 0x80258C8C: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void func_802584C0_ovl35(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802584C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802584C4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802584C8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802584CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802584D0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802584D4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802584D8: lui         $at, 0x8026
    ctx->r1 = S32(0X8026 << 16);
    // 0x802584DC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802584E0: lw          $v0, -0x7334($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7334);
    // 0x802584E4: jalr        $v0
    // 0x802584E8: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802584E8: nop

    after_0:
    // 0x802584EC: jal         0x800472C0
    // 0x802584F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800472C0_226C0(rdram, ctx);
        goto after_1;
    // 0x802584F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802584F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802584F8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802584FC: jr          $ra
    // 0x80258500: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80258500: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8025870C_ovl35(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8025870C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80258710: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80258714: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80258718: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8025871C: jal         0x80071110
    // 0x80258720: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    func_80071110_4C510(rdram, ctx);
        goto after_0;
    // 0x80258720: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_0:
    // 0x80258724: bne         $v0, $zero, L_80258738
    if (ctx->r2 != 0) {
        // 0x80258728: nop
    
            goto L_80258738;
    }
    // 0x80258728: nop

    // 0x8025872C: lh          $v0, 0x7C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X7C);
    // 0x80258730: beq         $v0, $zero, L_80258748
    if (ctx->r2 == 0) {
        // 0x80258734: addiu       $a0, $s0, 0x34
        ctx->r4 = ADD32(ctx->r16, 0X34);
            goto L_80258748;
    }
    // 0x80258734: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
L_80258738:
    // 0x80258738: jal         0x8025888C
    // 0x8025873C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8025888C_ovl35(rdram, ctx);
        goto after_1;
    // 0x8025873C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80258740: j           L_802587AC
    // 0x80258744: nop

        goto L_802587AC;
    // 0x80258744: nop

L_80258748:
    // 0x80258748: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8025874C: jal         0x8009A3B4
    // 0x80258750: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80258750: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x80258754: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80258758: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8025875C: jal         0x8009A3B4
    // 0x80258760: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80258760: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x80258764: lhu         $v0, 0x44($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X44);
    // 0x80258768: lhu         $a2, 0x4C($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X4C);
    // 0x8025876C: lhu         $a0, 0x46($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X46);
    // 0x80258770: lhu         $a3, 0x4E($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X4E);
    // 0x80258774: lhu         $a1, 0x48($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X48);
    // 0x80258778: lhu         $t0, 0x50($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X50);
    // 0x8025877C: lbu         $v1, 0xB($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XB);
    // 0x80258780: sh          $zero, 0x7C($s0)
    MEM_H(0X7C, ctx->r16) = 0;
    // 0x80258784: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80258788: addu        $a0, $a0, $a3
    ctx->r4 = ADD32(ctx->r4, ctx->r7);
    // 0x8025878C: addu        $a1, $a1, $t0
    ctx->r5 = ADD32(ctx->r5, ctx->r8);
    // 0x80258790: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80258794: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x80258798: sltiu       $v1, $v1, 0x5A
    ctx->r3 = ctx->r3 < 0X5A ? 1 : 0;
    // 0x8025879C: sh          $a0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r4;
    // 0x802587A0: sh          $a1, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r5;
    // 0x802587A4: bne         $v1, $zero, L_802587BC
    if (ctx->r3 != 0) {
        // 0x802587A8: sb          $v0, 0xB($s0)
        MEM_B(0XB, ctx->r16) = ctx->r2;
            goto L_802587BC;
    }
    // 0x802587A8: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_802587AC:
    // 0x802587AC: jal         0x8004F568
    // 0x802587B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F568_2A968(rdram, ctx);
        goto after_4;
    // 0x802587B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x802587B4: j           L_8025887C
    // 0x802587B8: nop

        goto L_8025887C;
    // 0x802587B8: nop

L_802587BC:
    // 0x802587BC: lh          $v0, 0x44($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X44);
    // 0x802587C0: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x802587C4: lh          $a0, 0x48($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X48);
    // 0x802587C8: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    // 0x802587CC: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x802587D0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802587D4: lh          $v0, 0x46($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X46);
    // 0x802587D8: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
    // 0x802587DC: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x802587E0: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x802587E4: addu        $a1, $a1, $a0
    ctx->r5 = ADD32(ctx->r5, ctx->r4);
    // 0x802587E8: sw          $a1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r5;
    // 0x802587EC: lhu         $a1, 0x24($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X24);
    // 0x802587F0: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x802587F4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802587F8: lhu         $v0, 0x1C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1C);
    // 0x802587FC: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80258800: lhu         $v1, 0x20($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X20);
    // 0x80258804: lui         $a2, 0x2C80
    ctx->r6 = S32(0X2C80 << 16);
    // 0x80258808: ori         $a2, $a2, 0x8080
    ctx->r6 = ctx->r6 | 0X8080;
    // 0x8025880C: sw          $a2, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r6;
    // 0x80258810: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80258814: sh          $a1, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r5;
    // 0x80258818: sh          $a1, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r5;
    // 0x8025881C: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x80258820: sh          $v0, 0x90($s0)
    MEM_H(0X90, ctx->r16) = ctx->r2;
    // 0x80258824: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
    // 0x80258828: jal         0x80258900
    // 0x8025882C: sh          $v1, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r3;
    func_80258900_ovl35(rdram, ctx);
        goto after_5;
    // 0x8025882C: sh          $v1, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r3;
    after_5:
    // 0x80258830: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80258834: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80258838: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8025883C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80258840: sltiu       $v0, $v0, 0x6
    ctx->r2 = ctx->r2 < 0X6 ? 1 : 0;
    // 0x80258844: beql        $v0, $zero, L_8025884C
    if (ctx->r2 == 0) {
        // 0x80258848: sb          $zero, 0x9($s0)
        MEM_B(0X9, ctx->r16) = 0;
            goto L_8025884C;
    }
    goto skip_0;
    // 0x80258848: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    skip_0:
L_8025884C:
    // 0x8025884C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80258850: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80258854: lui         $v1, 0x8026
    ctx->r3 = S32(0X8026 << 16);
    // 0x80258858: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8025885C: lw          $v1, -0x7364($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7364);
    // 0x80258860: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80258864: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80258868: sb          $v1, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r3;
    // 0x8025886C: lui         $at, 0x8026
    ctx->r1 = S32(0X8026 << 16);
    // 0x80258870: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80258874: lw          $v0, -0x7360($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7360);
    // 0x80258878: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
L_8025887C:
    // 0x8025887C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80258880: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80258884: jr          $ra
    // 0x80258888: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80258888: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_802589A4_ovl35(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802589A4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802589A8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802589AC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802589B0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802589B4: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x802589B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802589BC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802589C0: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x802589C4: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x802589C8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802589CC: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x802589D0: lbu         $v0, 0xC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XC);
    // 0x802589D4: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x802589D8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802589DC: jal         0x8009A3B4
    // 0x802589E0: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x802589E0: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    after_0:
    // 0x802589E4: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x802589E8: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x802589EC: jal         0x8009A3B4
    // 0x802589F0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802589F0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x802589F4: lhu         $v0, 0x64($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X64);
    // 0x802589F8: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x802589FC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80258A00: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80258A04: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80258A08: jr          $ra
    // 0x80258A0C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80258A0C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8025888C_ovl35(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8025888C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80258890: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80258894: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80258898: jal         0x8004F144
    // 0x8025889C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8025889C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x802588A0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x802588A4: beq         $a0, $zero, L_802588F0
    if (ctx->r4 == 0) {
        // 0x802588A8: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_802588F0;
    }
    // 0x802588A8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802588AC: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x802588B0: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x802588B4: sb          $v0, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r2;
    // 0x802588B8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802588BC: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
    // 0x802588C0: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x802588C4: lb          $v1, 0x4ED4($v1)
    ctx->r3 = MEM_B(ctx->r3, 0X4ED4);
    // 0x802588C8: slti        $v0, $v1, 0x3
    ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x802588CC: beql        $v0, $zero, L_802588D4
    if (ctx->r2 == 0) {
        // 0x802588D0: addiu       $v1, $zero, 0x2
        ctx->r3 = ADD32(0, 0X2);
            goto L_802588D4;
    }
    goto skip_0;
    // 0x802588D0: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    skip_0:
L_802588D4:
    // 0x802588D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802588D8: sb          $v1, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r3;
    // 0x802588DC: sb          $v0, 0xE($a0)
    MEM_B(0XE, ctx->r4) = ctx->r2;
    // 0x802588E0: addiu       $a0, $a0, 0x38
    ctx->r4 = ADD32(ctx->r4, 0X38);
    // 0x802588E4: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x802588E8: jal         0x8009A3B4
    // 0x802588EC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802588EC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
L_802588F0:
    // 0x802588F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802588F4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802588F8: jr          $ra
    // 0x802588FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802588FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802584F0_ovl36(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802584F0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802584F4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802584F8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802584FC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80258500: jal         0x800530E8
    // 0x80258504: lb          $a0, 0xD($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XD);
    func_800530E8_2E4E8(rdram, ctx);
        goto after_0;
    // 0x80258504: lb          $a0, 0xD($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XD);
    after_0:
    // 0x80258508: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8025850C: addiu       $a0, $zero, 0x12B
    ctx->r4 = ADD32(0, 0X12B);
    // 0x80258510: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80258514: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x80258518: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8025851C: jal         0x8002A33C
    // 0x80258520: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x80258520: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    after_1:
    // 0x80258524: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80258528: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8025852C: jr          $ra
    // 0x80258530: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80258530: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
