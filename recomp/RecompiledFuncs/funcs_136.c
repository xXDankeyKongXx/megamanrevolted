#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80227A10_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227A10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227A14: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227A18: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227A1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227A20: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x80227A24: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80227A28: jal         0x8004FA7C
    // 0x80227A2C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x80227A2C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_0:
    // 0x80227A30: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80227A34: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x80227A38: bne         $v0, $zero, L_80227A48
    if (ctx->r2 != 0) {
        // 0x80227A3C: nop
    
            goto L_80227A48;
    }
    // 0x80227A3C: nop

    // 0x80227A40: lhu         $v0, 0x366($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X366);
    // 0x80227A44: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80227A48:
    // 0x80227A48: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80227A4C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80227A50: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80227A54: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80227A58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227A5C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227A60: jr          $ra
    // 0x80227A64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227A64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802262A0_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802262A0: jr          $ra
    // 0x802262A4: nop

    TRACE_RETURN()
    return;
    // 0x802262A4: nop

    // 0x802262A8: nop

    // 0x802262AC: nop

;}
RECOMP_FUNC void func_80226390_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226390: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80226394: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x80226398: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8022639C: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x802263A0: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x802263A4: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x802263A8: lbu         $v1, 0x8($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X8);
    // 0x802263AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802263B0: beq         $v1, $v0, L_802263F0
    if (ctx->r3 == ctx->r2) {
        // 0x802263B4: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_802263F0;
    }
    // 0x802263B4: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x802263B8: beq         $v0, $zero, L_80226460
    if (ctx->r2 == 0) {
        // 0x802263BC: nop
    
            goto L_80226460;
    }
    // 0x802263BC: nop

    // 0x802263C0: bne         $v1, $zero, L_80226460
    if (ctx->r3 != 0) {
        // 0x802263C4: addiu       $a1, $sp, 0x48
        ctx->r5 = ADD32(ctx->r29, 0X48);
            goto L_80226460;
    }
    // 0x802263C4: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    // 0x802263C8: lbu         $v0, 0x3($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X3);
    // 0x802263CC: jal         0x8004D5D4
    // 0x802263D0: sb          $v0, 0x48($sp)
    MEM_B(0X48, ctx->r29) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x802263D0: sb          $v0, 0x48($sp)
    MEM_B(0X48, ctx->r29) = ctx->r2;
    after_0:
    // 0x802263D4: lbu         $v0, 0x8($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X8);
    // 0x802263D8: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x802263DC: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x802263E0: sw          $v1, 0x40($s2)
    MEM_W(0X40, ctx->r18) = ctx->r3;
    // 0x802263E4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802263E8: j           L_80226460
    // 0x802263EC: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
        goto L_80226460;
    // 0x802263EC: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
L_802263F0:
    // 0x802263F0: addiu       $s1, $s2, 0x18
    ctx->r17 = ADD32(ctx->r18, 0X18);
    // 0x802263F4: jal         0x8002C654
    // 0x802263F8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_1;
    // 0x802263F8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x802263FC: lhu         $v0, 0xC($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XC);
    // 0x80226400: sh          $v0, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r2;
    // 0x80226404: lbu         $v0, 0x3($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X3);
    // 0x80226408: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022640C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226410: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226414: lw          $v0, -0x4114($at)
    ctx->r2 = MEM_W(ctx->r1, -0X4114);
    // 0x80226418: addiu       $s0, $sp, 0x28
    ctx->r16 = ADD32(ctx->r29, 0X28);
    // 0x8022641C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226420: sh          $zero, 0x24($sp)
    MEM_H(0X24, ctx->r29) = 0;
    // 0x80226424: jal         0x8002C654
    // 0x80226428: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    func_8002C654_7A54(rdram, ctx);
        goto after_2;
    // 0x80226428: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    after_2:
    // 0x8022642C: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x80226430: jal         0x80031600
    // 0x80226434: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80031600_CA00(rdram, ctx);
        goto after_3;
    // 0x80226434: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80226438: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022643C: jal         0x8003077C
    // 0x80226440: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8003077C_BB7C(rdram, ctx);
        goto after_4;
    // 0x80226440: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80226444: lbu         $v0, 0x9($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X9);
    // 0x80226448: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022644C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226450: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226454: lw          $v0, -0x4120($at)
    ctx->r2 = MEM_W(ctx->r1, -0X4120);
    // 0x80226458: jalr        $v0
    // 0x8022645C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x8022645C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_5:
L_80226460:
    // 0x80226460: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x80226464: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x80226468: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x8022646C: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x80226470: jr          $ra
    // 0x80226474: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x80226474: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_80228878_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228878: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022887C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228880: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228884: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80228888: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022888C: lh          $a0, 0x34C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X34C);
    // 0x80228890: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80228894: jal         0x8004FA7C
    // 0x80228898: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x80228898: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    after_0:
    // 0x8022889C: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x802288A0: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x802288A4: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x802288A8: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x802288AC: srl         $v1, $v1, 31
    ctx->r3 = S32(U32(ctx->r3) >> 31);
    // 0x802288B0: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x802288B4: beq         $v1, $zero, L_802288E8
    if (ctx->r3 == 0) {
        // 0x802288B8: nop
    
            goto L_802288E8;
    }
    // 0x802288B8: nop

    // 0x802288BC: jal         0x80228A08
    // 0x802288C0: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_80228A08_ovl20(rdram, ctx);
        goto after_1;
    // 0x802288C0: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_1:
    // 0x802288C4: lbu         $v1, 0x34A($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34A);
    // 0x802288C8: lhu         $a0, 0x348($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X348);
    // 0x802288CC: lbu         $a1, 0xD($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XD);
    // 0x802288D0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802288D4: ori         $a0, $a0, 0x2
    ctx->r4 = ctx->r4 | 0X2;
    // 0x802288D8: andi        $a1, $a1, 0x7
    ctx->r5 = ctx->r5 & 0X7;
    // 0x802288DC: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x802288E0: sh          $a0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r4;
    // 0x802288E4: sb          $a1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r5;
L_802288E8:
    // 0x802288E8: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x802288EC: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x802288F0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x802288F4: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x802288F8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802288FC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80228900: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228904: jr          $ra
    // 0x80228908: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80228908: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022ABE0_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022ABE0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022ABE4: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8022ABE8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8022ABEC: addiu       $a0, $s2, 0x2C
    ctx->r4 = ADD32(ctx->r18, 0X2C);
    // 0x8022ABF0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022ABF4: addiu       $s1, $s2, 0x14
    ctx->r17 = ADD32(ctx->r18, 0X14);
    // 0x8022ABF8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022ABFC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022AC00: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8022AC04: jal         0x8009A3B4
    // 0x8022AC08: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022AC08: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    after_0:
    // 0x8022AC0C: addiu       $a0, $s2, 0x34
    ctx->r4 = ADD32(ctx->r18, 0X34);
    // 0x8022AC10: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    // 0x8022AC14: jal         0x8009A3B4
    // 0x8022AC18: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022AC18: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022AC1C: addiu       $a0, $s2, 0x5C
    ctx->r4 = ADD32(ctx->r18, 0X5C);
    // 0x8022AC20: addiu       $s0, $s2, 0x54
    ctx->r16 = ADD32(ctx->r18, 0X54);
    // 0x8022AC24: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022AC28: jal         0x8009A3B4
    // 0x8022AC2C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022AC2C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022AC30: lbu         $v0, 0x8($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X8);
    // 0x8022AC34: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022AC38: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022AC3C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022AC40: lw          $v0, -0x38A8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X38A8);
    // 0x8022AC44: jalr        $v0
    // 0x8022AC48: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x8022AC48: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_3:
    // 0x8022AC4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022AC50: addiu       $s0, $s2, 0x8C
    ctx->r16 = ADD32(ctx->r18, 0X8C);
    // 0x8022AC54: jal         0x80031600
    // 0x8022AC58: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80031600_CA00(rdram, ctx);
        goto after_4;
    // 0x8022AC58: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8022AC5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022AC60: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8022AC64: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022AC68: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022AC6C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022AC70: jal         0x80031DA8
    // 0x8022AC74: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_5;
    // 0x8022AC74: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_5:
    // 0x8022AC78: addiu       $a0, $s2, 0xAC
    ctx->r4 = ADD32(ctx->r18, 0XAC);
    // 0x8022AC7C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022AC80: jal         0x8009A3B4
    // 0x8022AC84: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x8022AC84: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x8022AC88: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x8022AC8C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022AC90: beq         $v0, $zero, L_8022ACAC
    if (ctx->r2 == 0) {
        // 0x8022AC94: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_8022ACAC;
    }
    // 0x8022AC94: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022AC98: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022AC9C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x8022ACA0: lui         $a3, 0x2000
    ctx->r7 = S32(0X2000 << 16);
    // 0x8022ACA4: jal         0x80047284
    // 0x8022ACA8: ori         $a3, $a3, 0x8
    ctx->r7 = ctx->r7 | 0X8;
    func_80047284_22684(rdram, ctx);
        goto after_7;
    // 0x8022ACA8: ori         $a3, $a3, 0x8
    ctx->r7 = ctx->r7 | 0X8;
    after_7:
L_8022ACAC:
    // 0x8022ACAC: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x8022ACB0: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022ACB4: beq         $v0, $zero, L_8022ACCC
    if (ctx->r2 == 0) {
        // 0x8022ACB8: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_8022ACCC;
    }
    // 0x8022ACB8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022ACBC: addiu       $a1, $zero, 0x104
    ctx->r5 = ADD32(0, 0X104);
    // 0x8022ACC0: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8022ACC4: jal         0x8003B564
    // 0x8022ACC8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8003B564_16964(rdram, ctx);
        goto after_8;
    // 0x8022ACC8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_8:
L_8022ACCC:
    // 0x8022ACCC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8022ACD0: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8022ACD4: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022ACD8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022ACDC: jr          $ra
    // 0x8022ACE0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022ACE0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80226478_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226478: jr          $ra
    // 0x8022647C: nop

    TRACE_RETURN()
    return;
    // 0x8022647C: nop

;}
RECOMP_FUNC void func_80227950_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227950: lhu         $v0, 0x350($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X350);
    // 0x80227954: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80227958: sh          $v0, 0x350($a0)
    MEM_H(0X350, ctx->r4) = ctx->r2;
    // 0x8022795C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227960: bne         $v0, $zero, L_8022796C
    if (ctx->r2 != 0) {
        // 0x80227964: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022796C;
    }
    // 0x80227964: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227968: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_8022796C:
    // 0x8022796C: jr          $ra
    // 0x80227970: nop

    TRACE_RETURN()
    return;
    // 0x80227970: nop

;}
RECOMP_FUNC void func_80225C2C_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225C2C: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x80225C30: lw          $v0, 0x10($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X10);
    // 0x80225C34: bne         $v0, $zero, L_80225CFC
    if (ctx->r2 != 0) {
        // 0x80225C38: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80225CFC;
    }
    // 0x80225C38: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80225C3C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225C40: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x80225C44: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80225C48: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225C4C: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x80225C50: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80225C54: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225C58: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x80225C5C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225C60: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x80225C64: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225C68: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x80225C6C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225C70: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x80225C74: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225C78: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x80225C7C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225C80: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80225C84: lw          $a1, 0x2C($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X2C);
    // 0x80225C88: sb          $zero, 0x0($a1)
    MEM_B(0X0, ctx->r5) = 0;
    // 0x80225C8C: lw          $a1, 0x30($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X30);
    // 0x80225C90: sb          $zero, 0x0($a1)
    MEM_B(0X0, ctx->r5) = 0;
    // 0x80225C94: lw          $a1, 0x34($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X34);
    // 0x80225C98: sb          $zero, 0x0($a1)
    MEM_B(0X0, ctx->r5) = 0;
    // 0x80225C9C: lw          $a1, 0x38($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X38);
    // 0x80225CA0: sb          $zero, 0x0($a1)
    MEM_B(0X0, ctx->r5) = 0;
    // 0x80225CA4: lw          $a1, 0x44($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X44);
    // 0x80225CA8: sb          $zero, 0x0($a1)
    MEM_B(0X0, ctx->r5) = 0;
    // 0x80225CAC: lw          $a1, 0x40($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X40);
    // 0x80225CB0: sb          $zero, 0x0($a1)
    MEM_B(0X0, ctx->r5) = 0;
    // 0x80225CB4: lw          $a1, 0x3C($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X3C);
    // 0x80225CB8: sb          $zero, 0x0($a1)
    MEM_B(0X0, ctx->r5) = 0;
    // 0x80225CBC: lw          $v0, 0x10($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X10);
    // 0x80225CC0: bne         $v0, $zero, L_80225CFC
    if (ctx->r2 != 0) {
        // 0x80225CC4: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_80225CFC;
    }
    // 0x80225CC4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80225CC8: lw          $a1, 0x24($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X24);
    // 0x80225CCC: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x80225CD0: addiu       $v1, $zero, 0xA
    ctx->r3 = ADD32(0, 0XA);
    // 0x80225CD4: sb          $a0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r4;
    // 0x80225CD8: sb          $v1, 0xA($a1)
    MEM_B(0XA, ctx->r5) = ctx->r3;
    // 0x80225CDC: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x80225CE0: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x80225CE4: lw          $a1, 0x28($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X28);
    // 0x80225CE8: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x80225CEC: sb          $a0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r4;
    // 0x80225CF0: sb          $v1, 0xA($a1)
    MEM_B(0XA, ctx->r5) = ctx->r3;
    // 0x80225CF4: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x80225CF8: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
L_80225CFC:
    // 0x80225CFC: jr          $ra
    // 0x80225D00: nop

    TRACE_RETURN()
    return;
    // 0x80225D00: nop

;}
RECOMP_FUNC void func_8022AA84_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AA84: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022AA88: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8022AA8C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022AA90: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x8022AA94: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022AA98: lw          $v0, 0x350($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X350);
    // 0x8022AA9C: sltiu       $v0, $v0, 0x64
    ctx->r2 = ctx->r2 < 0X64 ? 1 : 0;
    // 0x8022AAA0: beq         $v0, $zero, L_8022AB90
    if (ctx->r2 == 0) {
        // 0x8022AAA4: addiu       $a0, $s1, 0xC4
        ctx->r4 = ADD32(ctx->r17, 0XC4);
            goto L_8022AB90;
    }
    // 0x8022AAA4: addiu       $a0, $s1, 0xC4
    ctx->r4 = ADD32(ctx->r17, 0XC4);
    // 0x8022AAA8: addiu       $a1, $s1, 0x180
    ctx->r5 = ADD32(ctx->r17, 0X180);
    // 0x8022AAAC: jal         0x8009A3B4
    // 0x8022AAB0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022AAB0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022AAB4: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x8022AAB8: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x8022AABC: addiu       $a0, $s0, 0xC4
    ctx->r4 = ADD32(ctx->r16, 0XC4);
    // 0x8022AAC0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022AAC4: jal         0x8009A3B4
    // 0x8022AAC8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022AAC8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x8022AACC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022AAD0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022AAD4: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x8022AAD8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022AADC: sh          $v0, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r2;
    // 0x8022AAE0: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8022AAE4: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    // 0x8022AAE8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022AAEC: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    // 0x8022AAF0: jal         0x8004DF78
    // 0x8022AAF4: sh          $v0, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r2;
    func_8004DF78_29378(rdram, ctx);
        goto after_2;
    // 0x8022AAF4: sh          $v0, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r2;
    after_2:
    // 0x8022AAF8: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8022AAFC: bne         $v0, $zero, L_8022AB94
    if (ctx->r2 != 0) {
        // 0x8022AB00: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022AB94;
    }
    // 0x8022AB00: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022AB04: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x8022AB08: addiu       $a1, $s1, 0x2C
    ctx->r5 = ADD32(ctx->r17, 0X2C);
    // 0x8022AB0C: jal         0x8009A3B4
    // 0x8022AB10: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8022AB10: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x8022AB14: addiu       $a0, $s1, 0x1C
    ctx->r4 = ADD32(ctx->r17, 0X1C);
    // 0x8022AB18: addiu       $a1, $s1, 0x34
    ctx->r5 = ADD32(ctx->r17, 0X34);
    // 0x8022AB1C: jal         0x8009A3B4
    // 0x8022AB20: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8022AB20: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_4:
    // 0x8022AB24: lbu         $v0, 0xAC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XAC);
    // 0x8022AB28: beq         $v0, $zero, L_8022AB44
    if (ctx->r2 == 0) {
        // 0x8022AB2C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022AB44;
    }
    // 0x8022AB2C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022AB30: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022AB34: jal         0x80050294
    // 0x8022AB38: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x8022AB38: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x8022AB3C: j           L_8022AB88
    // 0x8022AB40: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
        goto L_8022AB88;
    // 0x8022AB40: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
L_8022AB44:
    // 0x8022AB44: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x8022AB48: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022AB4C: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    // 0x8022AB50: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022AB54: sltiu       $v0, $v0, 0x3D
    ctx->r2 = ctx->r2 < 0X3D ? 1 : 0;
    // 0x8022AB58: bnel        $v0, $zero, L_8022AB94
    if (ctx->r2 != 0) {
        // 0x8022AB5C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022AB94;
    }
    goto skip_0;
    // 0x8022AB5C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
    // 0x8022AB60: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022AB64: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022AB68: jal         0x80050294
    // 0x8022AB6C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_6;
    // 0x8022AB6C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_6:
    // 0x8022AB70: lhu         $v0, 0x56($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X56);
    // 0x8022AB74: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
    // 0x8022AB78: sb          $v1, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r3;
    // 0x8022AB7C: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022AB80: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022AB84: sh          $v0, 0x34A($s1)
    MEM_H(0X34A, ctx->r17) = ctx->r2;
L_8022AB88:
    // 0x8022AB88: j           L_8022AB94
    // 0x8022AB8C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8022AB94;
    // 0x8022AB8C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8022AB90:
    // 0x8022AB90: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022AB94:
    // 0x8022AB94: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8022AB98: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022AB9C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022ABA0: jr          $ra
    // 0x8022ABA4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022ABA4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8022ABA8: nop

    // 0x8022ABAC: nop

;}
RECOMP_FUNC void func_802268DC_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802268DC: lh          $v0, 0x350($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X350);
    // 0x802268E0: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x802268E4: beq         $v0, $zero, L_80226900
    if (ctx->r2 == 0) {
        // 0x802268E8: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80226900;
    }
    // 0x802268E8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802268EC: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x802268F0: sh          $v0, 0x350($a0)
    MEM_H(0X350, ctx->r4) = ctx->r2;
    // 0x802268F4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802268F8: bne         $v0, $zero, L_8022692C
    if (ctx->r2 != 0) {
        // 0x802268FC: nop
    
            goto L_8022692C;
    }
    // 0x802268FC: nop

L_80226900:
    // 0x80226900: lb          $v0, 0xA7($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XA7);
    // 0x80226904: bgez        $v0, L_8022692C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80226908: addiu       $v0, $zero, 0x49
        ctx->r2 = ADD32(0, 0X49);
            goto L_8022692C;
    }
    // 0x80226908: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x8022690C: lbu         $v1, 0x2($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X2);
    // 0x80226910: bnel        $v1, $v0, L_8022692C
    if (ctx->r3 != ctx->r2) {
        // 0x80226914: sb          $zero, 0xA($a0)
        MEM_B(0XA, ctx->r4) = 0;
            goto L_8022692C;
    }
    goto skip_0;
    // 0x80226914: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    skip_0:
    // 0x80226918: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8022691C: addiu       $v1, $zero, 0x9
    ctx->r3 = ADD32(0, 0X9);
    // 0x80226920: sb          $v1, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r3;
    // 0x80226924: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226928: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_8022692C:
    // 0x8022692C: jr          $ra
    // 0x80226930: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x80226930: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_802293F8_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802293F8: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x802293FC: beq         $a1, $zero, L_80229410
    if (ctx->r5 == 0) {
        // 0x80229400: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80229410;
    }
    // 0x80229400: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80229404: sb          $zero, 0xFF($a0)
    MEM_B(0XFF, ctx->r4) = 0;
    // 0x80229408: j           L_80229418
    // 0x8022940C: sb          $zero, 0x103($a0)
    MEM_B(0X103, ctx->r4) = 0;
        goto L_80229418;
    // 0x8022940C: sb          $zero, 0x103($a0)
    MEM_B(0X103, ctx->r4) = 0;
L_80229410:
    // 0x80229410: sb          $v0, 0xFF($a0)
    MEM_B(0XFF, ctx->r4) = ctx->r2;
    // 0x80229414: sb          $v0, 0x103($a0)
    MEM_B(0X103, ctx->r4) = ctx->r2;
L_80229418:
    // 0x80229418: jr          $ra
    // 0x8022941C: nop

    TRACE_RETURN()
    return;
    // 0x8022941C: nop

;}
RECOMP_FUNC void func_80227554_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227554: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227558: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022755C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227560: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227564: jal         0x80228A58
    // 0x80227568: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80228A58_ovl20(rdram, ctx);
        goto after_0;
    // 0x80227568: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x8022756C: lbu         $a0, 0xA($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA);
    // 0x80227570: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80227574: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x80227578: lbu         $v1, 0xF($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XF);
    // 0x8022757C: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80227580: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80227584: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80227588: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022758C: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x80227590: sh          $v0, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = ctx->r2;
    // 0x80227594: sh          $v1, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r3;
    // 0x80227598: sb          $a0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r4;
    // 0x8022759C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802275A0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802275A4: jr          $ra
    // 0x802275A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802275A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225DE0_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225DE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225DE4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225DE8: lb          $v0, 0xD($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XD);
    // 0x80225DEC: bne         $v0, $zero, L_80225E0C
    if (ctx->r2 != 0) {
        // 0x80225DF0: nop
    
            goto L_80225E0C;
    }
    // 0x80225DF0: nop

    // 0x80225DF4: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x80225DF8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80225DFC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80225E00: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80225E04: j           L_80225E20
    // 0x80225E08: lw          $v0, -0x4178($at)
    ctx->r2 = MEM_W(ctx->r1, -0X4178);
        goto L_80225E20;
    // 0x80225E08: lw          $v0, -0x4178($at)
    ctx->r2 = MEM_W(ctx->r1, -0X4178);
L_80225E0C:
    // 0x80225E0C: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80225E10: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80225E14: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80225E18: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80225E1C: lw          $v0, -0x4180($at)
    ctx->r2 = MEM_W(ctx->r1, -0X4180);
L_80225E20:
    // 0x80225E20: jalr        $v0
    // 0x80225E24: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80225E24: nop

    after_0:
    // 0x80225E28: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80225E2C: jr          $ra
    // 0x80225E30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225E30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A228_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A228: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A22C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A230: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A234: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022A238: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x8022A23C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022A240: jal         0x8004DDE8
    // 0x8022A244: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8004DDE8_291E8(rdram, ctx);
        goto after_0;
    // 0x8022A244: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8022A248: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8022A24C: beq         $v1, $zero, L_8022A268
    if (ctx->r3 == 0) {
        // 0x8022A250: sw          $v0, 0x350($s0)
        MEM_W(0X350, ctx->r16) = ctx->r2;
            goto L_8022A268;
    }
    // 0x8022A250: sw          $v0, 0x350($s0)
    MEM_W(0X350, ctx->r16) = ctx->r2;
    // 0x8022A254: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A258: beq         $v1, $v0, L_8022A294
    if (ctx->r3 == ctx->r2) {
        // 0x8022A25C: nop
    
            goto L_8022A294;
    }
    // 0x8022A25C: nop

    // 0x8022A260: j           L_8022A2BC
    // 0x8022A264: nop

        goto L_8022A2BC;
    // 0x8022A264: nop

L_8022A268:
    // 0x8022A268: sltiu       $v0, $v0, 0x12C
    ctx->r2 = ctx->r2 < 0X12C ? 1 : 0;
    // 0x8022A26C: beq         $v0, $zero, L_8022A2BC
    if (ctx->r2 == 0) {
        // 0x8022A270: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022A2BC;
    }
    // 0x8022A270: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A274: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8022A278: jal         0x80050294
    // 0x8022A27C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x8022A27C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x8022A280: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022A284: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x8022A288: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022A28C: j           L_8022A2BC
    // 0x8022A290: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022A2BC;
    // 0x8022A290: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022A294:
    // 0x8022A294: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x8022A298: bgez        $v0, L_8022A2BC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022A29C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022A2BC;
    }
    // 0x8022A29C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A2A0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022A2A4: jal         0x80050294
    // 0x8022A2A8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x8022A2A8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x8022A2AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A2B0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022A2B4: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022A2B8: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
L_8022A2BC:
    // 0x8022A2BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022A2C0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A2C4: jr          $ra
    // 0x8022A2C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A2C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229D80_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229D80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229D84: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229D88: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229D8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80229D90: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80229D94: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80229D98: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80229D9C: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80229DA0: sh          $zero, 0x56($s0)
    MEM_H(0X56, ctx->r16) = 0;
    // 0x80229DA4: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80229DA8: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x80229DAC: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80229DB0: jal         0x8004D5D4
    // 0x80229DB4: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80229DB4: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x80229DB8: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x80229DBC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80229DC0: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x80229DC4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80229DC8: lhu         $v1, -0x38B8($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X38B8);
    // 0x80229DCC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229DD0: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80229DD4: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80229DD8: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80229DDC: addiu       $v0, $v0, -0x38C4
    ctx->r2 = ADD32(ctx->r2, -0X38C4);
    // 0x80229DE0: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x80229DE4: sh          $v1, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r3;
    // 0x80229DE8: sh          $v1, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r3;
    // 0x80229DEC: jal         0x8003E934
    // 0x80229DF0: sh          $v1, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r3;
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x80229DF0: sh          $v1, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r3;
    after_1:
    // 0x80229DF4: addiu       $a0, $s0, 0x36C
    ctx->r4 = ADD32(ctx->r16, 0X36C);
    // 0x80229DF8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80229DFC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80229E00: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80229E04: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229E08: jal         0x8009A3B4
    // 0x80229E0C: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80229E0C: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    after_2:
    // 0x80229E10: lbu         $a0, 0x3($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X3);
    // 0x80229E14: lui         $v1, 0x7FFF
    ctx->r3 = S32(0X7FFF << 16);
    // 0x80229E18: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x80229E1C: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80229E20: addiu       $v0, $v0, -0x38D0
    ctx->r2 = ADD32(ctx->r2, -0X38D0);
    // 0x80229E24: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x80229E28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229E2C: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x80229E30: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
    // 0x80229E34: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x80229E38: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x80229E3C: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80229E40: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80229E44: sb          $zero, 0x74($s0)
    MEM_B(0X74, ctx->r16) = 0;
    // 0x80229E48: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x80229E4C: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    // 0x80229E50: sb          $zero, 0x8($s0)
    MEM_B(0X8, ctx->r16) = 0;
    // 0x80229E54: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80229E58: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80229E5C: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x80229E60: sh          $zero, 0x348($s0)
    MEM_H(0X348, ctx->r16) = 0;
    // 0x80229E64: sw          $zero, 0x354($s0)
    MEM_W(0X354, ctx->r16) = 0;
    // 0x80229E68: sw          $zero, 0x358($s0)
    MEM_W(0X358, ctx->r16) = 0;
    // 0x80229E6C: beq         $a0, $v0, L_80229EA4
    if (ctx->r4 == ctx->r2) {
        // 0x80229E70: sw          $v1, 0x350($s0)
        MEM_W(0X350, ctx->r16) = ctx->r3;
            goto L_80229EA4;
    }
    // 0x80229E70: sw          $v1, 0x350($s0)
    MEM_W(0X350, ctx->r16) = ctx->r3;
    // 0x80229E74: slti        $v0, $a0, 0x2
    ctx->r2 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    // 0x80229E78: bnel        $v0, $zero, L_80229E8C
    if (ctx->r2 != 0) {
        // 0x80229E7C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80229E8C;
    }
    goto skip_0;
    // 0x80229E7C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    skip_0:
    // 0x80229E80: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80229E84: beq         $a0, $v0, L_80229EC0
    if (ctx->r4 == ctx->r2) {
        // 0x80229E88: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80229EC0;
    }
    // 0x80229E88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80229E8C:
    // 0x80229E8C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80229E90: jal         0x80050294
    // 0x80229E94: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x80229E94: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x80229E98: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229E9C: j           L_80229EE0
    // 0x80229EA0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_80229EE0;
    // 0x80229EA0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80229EA4:
    // 0x80229EA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229EA8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80229EAC: jal         0x80050294
    // 0x80229EB0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_4;
    // 0x80229EB0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x80229EB4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80229EB8: j           L_80229EE0
    // 0x80229EBC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_80229EE0;
    // 0x80229EBC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80229EC0:
    // 0x80229EC0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80229EC4: jal         0x80050294
    // 0x80229EC8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x80229EC8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x80229ECC: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80229ED0: addiu       $v1, $zero, 0x7
    ctx->r3 = ADD32(0, 0X7);
    // 0x80229ED4: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    // 0x80229ED8: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80229EDC: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_80229EE0:
    // 0x80229EE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80229EE4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229EE8: jr          $ra
    // 0x80229EEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229EEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802282D8_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802282D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802282DC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802282E0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802282E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802282E8: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x802282EC: bgez        $v0, L_80228320
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802282F0: nop
    
            goto L_80228320;
    }
    // 0x802282F0: nop

    // 0x802282F4: jal         0x80228A08
    // 0x802282F8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_80228A08_ovl20(rdram, ctx);
        goto after_0;
    // 0x802282F8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_0:
    // 0x802282FC: lbu         $v1, 0x34A($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34A);
    // 0x80228300: lhu         $a0, 0x348($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X348);
    // 0x80228304: lbu         $a1, 0xD($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XD);
    // 0x80228308: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022830C: ori         $a0, $a0, 0x2
    ctx->r4 = ctx->r4 | 0X2;
    // 0x80228310: andi        $a1, $a1, 0x7
    ctx->r5 = ctx->r5 & 0X7;
    // 0x80228314: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x80228318: sh          $a0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r4;
    // 0x8022831C: sb          $a1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r5;
L_80228320:
    // 0x80228320: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80228324: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228328: jr          $ra
    // 0x8022832C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022832C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227AE4_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227AE4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80227AE8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227AEC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227AF0: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80227AF4: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80227AF8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80227AFC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227B00: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80227B04: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x80227B08: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80227B0C: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x80227B10: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227B14: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
    // 0x80227B18: sh          $v1, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r3;
    // 0x80227B1C: jal         0x80228A08
    // 0x80227B20: sb          $a1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r5;
    func_80228A08_ovl20(rdram, ctx);
        goto after_0;
    // 0x80227B20: sb          $a1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r5;
    after_0:
    // 0x80227B24: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x80227B28: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80227B2C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80227B30: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x80227B34: addiu       $s2, $s2, 0x49C4
    ctx->r18 = ADD32(ctx->r18, 0X49C4);
    // 0x80227B38: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80227B3C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x80227B40: jal         0x8004F820
    // 0x80227B44: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x80227B44: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_1:
    // 0x80227B48: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227B4C: bgez        $v0, L_80227B7C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80227B50: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_80227B7C;
    }
    // 0x80227B50: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x80227B54: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80227B58: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80227B5C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80227B60: jal         0x8004F820
    // 0x80227B64: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x80227B64: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x80227B68: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227B6C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80227B70: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80227B74: j           L_80227B98
    // 0x80227B78: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_80227B98;
    // 0x80227B78: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_80227B7C:
    // 0x80227B7C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80227B80: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80227B84: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80227B88: jal         0x8004F820
    // 0x80227B8C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x80227B8C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_3:
    // 0x80227B90: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227B94: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_80227B98:
    // 0x80227B98: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80227B9C: sh          $v0, 0x6($s3)
    MEM_H(0X6, ctx->r19) = ctx->r2;
    // 0x80227BA0: lbu         $a3, 0xC($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XC);
    // 0x80227BA4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80227BA8: jal         0x800610AC
    // 0x80227BAC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_4;
    // 0x80227BAC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x80227BB0: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80227BB4: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80227BB8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80227BBC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227BC0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227BC4: jr          $ra
    // 0x80227BC8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80227BC8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022AA1C_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AA1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022AA20: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022AA24: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022AA28: beq         $a1, $zero, L_8022AA74
    if (ctx->r5 == 0) {
        // 0x8022AA2C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8022AA74;
    }
    // 0x8022AA2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022AA30: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022AA34: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022AA38: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    // 0x8022AA3C: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x8022AA40: sltiu       $v0, $v0, 0x3D
    ctx->r2 = ctx->r2 < 0X3D ? 1 : 0;
    // 0x8022AA44: bne         $v0, $zero, L_8022AA74
    if (ctx->r2 != 0) {
        // 0x8022AA48: nop
    
            goto L_8022AA74;
    }
    // 0x8022AA48: nop

    // 0x8022AA4C: jal         0x800A3450
    // 0x8022AA50: sh          $zero, 0x348($s0)
    MEM_H(0X348, ctx->r16) = 0;
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022AA50: sh          $zero, 0x348($s0)
    MEM_H(0X348, ctx->r16) = 0;
    after_0:
    // 0x8022AA54: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
    // 0x8022AA58: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    // 0x8022AA5C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022AA60: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x8022AA64: addiu       $v0, $v0, 0x7D0
    ctx->r2 = ADD32(ctx->r2, 0X7D0);
    // 0x8022AA68: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022AA6C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022AA70: sh          $v1, 0x34A($s0)
    MEM_H(0X34A, ctx->r16) = ctx->r3;
L_8022AA74:
    // 0x8022AA74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022AA78: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022AA7C: jr          $ra
    // 0x8022AA80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022AA80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802293D8_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802293D8: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x802293DC: beq         $a1, $zero, L_802293EC
    if (ctx->r5 == 0) {
        // 0x802293E0: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_802293EC;
    }
    // 0x802293E0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802293E4: j           L_802293F0
    // 0x802293E8: sb          $zero, 0x107($a0)
    MEM_B(0X107, ctx->r4) = 0;
        goto L_802293F0;
    // 0x802293E8: sb          $zero, 0x107($a0)
    MEM_B(0X107, ctx->r4) = 0;
L_802293EC:
    // 0x802293EC: sb          $v0, 0x107($a0)
    MEM_B(0X107, ctx->r4) = ctx->r2;
L_802293F0:
    // 0x802293F0: jr          $ra
    // 0x802293F4: nop

    TRACE_RETURN()
    return;
    // 0x802293F4: nop

;}
RECOMP_FUNC void func_80225740_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225740: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80225744: bne         $v0, $zero, L_80225804
    if (ctx->r2 != 0) {
        // 0x80225748: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80225804;
    }
    // 0x80225748: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022574C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225750: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x80225754: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80225758: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022575C: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x80225760: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80225764: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225768: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x8022576C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225770: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x80225774: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225778: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x8022577C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225780: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x80225784: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225788: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x8022578C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225790: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80225794: lw          $v1, 0x2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X2C);
    // 0x80225798: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8022579C: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x802257A0: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x802257A4: lw          $v1, 0x30($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X30);
    // 0x802257A8: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x802257AC: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x802257B0: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x802257B4: lw          $v1, 0x34($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X34);
    // 0x802257B8: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x802257BC: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x802257C0: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x802257C4: lw          $v1, 0x38($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X38);
    // 0x802257C8: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x802257CC: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x802257D0: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x802257D4: lw          $v1, 0x44($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X44);
    // 0x802257D8: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x802257DC: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x802257E0: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x802257E4: lw          $v1, 0x40($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X40);
    // 0x802257E8: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x802257EC: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x802257F0: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x802257F4: lw          $v1, 0x3C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X3C);
    // 0x802257F8: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x802257FC: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x80225800: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
L_80225804:
    // 0x80225804: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80225808: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x8022580C: bne         $v1, $v0, L_80225868
    if (ctx->r3 != ctx->r2) {
        // 0x80225810: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80225868;
    }
    // 0x80225810: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225814: lw          $v1, 0x2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X2C);
    // 0x80225818: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x8022581C: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x80225820: lw          $v1, 0x30($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X30);
    // 0x80225824: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80225828: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x8022582C: lw          $v1, 0x34($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X34);
    // 0x80225830: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80225834: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x80225838: lw          $v1, 0x38($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X38);
    // 0x8022583C: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80225840: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x80225844: lw          $v1, 0x44($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X44);
    // 0x80225848: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x8022584C: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x80225850: lw          $v1, 0x40($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X40);
    // 0x80225854: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80225858: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x8022585C: lw          $v1, 0x3C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X3C);
    // 0x80225860: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80225864: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
L_80225868:
    // 0x80225868: jr          $ra
    // 0x8022586C: nop

    TRACE_RETURN()
    return;
    // 0x8022586C: nop

;}
RECOMP_FUNC void func_80227BCC_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227BCC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227BD0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227BD4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227BD8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80227BDC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227BE0: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80227BE4: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80227BE8: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x80227BEC: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x80227BF0: bne         $v0, $zero, L_80227C4C
    if (ctx->r2 != 0) {
        // 0x80227BF4: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_80227C4C;
    }
    // 0x80227BF4: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x80227BF8: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80227BFC: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x80227C00: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80227C04: jal         0x8004F820
    // 0x80227C08: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80227C08: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_0:
    // 0x80227C0C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80227C10: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80227C14: lw          $a0, 0x3FF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3FF0);
    // 0x80227C18: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80227C1C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80227C20: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x80227C24: and         $a0, $a0, $v0
    ctx->r4 = ctx->r4 & ctx->r2;
    // 0x80227C28: beq         $a0, $zero, L_80227C4C
    if (ctx->r4 == 0) {
        // 0x80227C2C: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_80227C4C;
    }
    // 0x80227C2C: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80227C30: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80227C34: jal         0x80228970
    // 0x80227C38: nop

    func_80228970_ovl20(rdram, ctx);
        goto after_1;
    // 0x80227C38: nop

    after_1:
    // 0x80227C3C: lbu         $v1, 0x34B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34B);
    // 0x80227C40: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80227C44: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80227C48: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
L_80227C4C:
    // 0x80227C4C: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80227C50: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x80227C54: bne         $v0, $zero, L_80227C78
    if (ctx->r2 != 0) {
        // 0x80227C58: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_80227C78;
    }
    // 0x80227C58: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x80227C5C: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80227C60: sb          $v1, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r3;
    // 0x80227C64: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x80227C68: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x80227C6C: jal         0x80228A08
    // 0x80227C70: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_80228A08_ovl20(rdram, ctx);
        goto after_2;
    // 0x80227C70: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_2:
    // 0x80227C74: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80227C78:
    // 0x80227C78: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80227C7C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227C80: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227C84: jr          $ra
    // 0x80227C88: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80227C88: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022A67C_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A67C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022A680: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022A684: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8022A688: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8022A68C: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8022A690: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022A694: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022A698: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A69C: lbu         $v1, 0x9($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X9);
    // 0x8022A6A0: lui         $s4, 0x8020
    ctx->r20 = S32(0X8020 << 16);
    // 0x8022A6A4: addiu       $s4, $s4, 0x49B0
    ctx->r20 = ADD32(ctx->r20, 0X49B0);
    // 0x8022A6A8: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x8022A6AC: beq         $v0, $zero, L_8022A84C
    if (ctx->r2 == 0) {
        // 0x8022A6B0: addiu       $s3, $s2, 0x348
        ctx->r19 = ADD32(ctx->r18, 0X348);
            goto L_8022A84C;
    }
    // 0x8022A6B0: addiu       $s3, $s2, 0x348
    ctx->r19 = ADD32(ctx->r18, 0X348);
    // 0x8022A6B4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022A6B8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022A6BC: addu        $at, $at, $v0
    gpr jr_addend_8022A6C4 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022A6C0: lw          $v0, -0x36F8($at)
    ctx->r2 = ADD32(ctx->r1, -0X36F8);
    // 0x8022A6C4: jr          $v0
    // 0x8022A6C8: nop

    switch (jr_addend_8022A6C4 >> 2) {
        case 0: goto L_8022A6CC; break;
        case 1: goto L_8022A6F8; break;
        case 2: goto L_8022A70C; break;
        case 3: goto L_8022A7C8; break;
        case 4: goto L_8022A7EC; break;
        default: switch_error(__func__, 0x8022A6C4, 0x8022C908);
    }
    // 0x8022A6C8: nop

L_8022A6CC:
    // 0x8022A6CC: jal         0x8006FF84
    // 0x8022A6D0: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x8022A6D0: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_0:
    // 0x8022A6D4: beq         $v0, $zero, L_8022A84C
    if (ctx->r2 == 0) {
        // 0x8022A6D8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022A84C;
    }
    // 0x8022A6D8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022A6DC: sb          $v0, 0x8($s4)
    MEM_B(0X8, ctx->r20) = ctx->r2;
    // 0x8022A6E0: sb          $zero, 0x9($s4)
    MEM_B(0X9, ctx->r20) = 0;
    // 0x8022A6E4: sw          $zero, 0xC($s4)
    MEM_W(0XC, ctx->r20) = 0;
    // 0x8022A6E8: lbu         $v0, 0x9($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X9);
    // 0x8022A6EC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022A6F0: j           L_8022A84C
    // 0x8022A6F4: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
        goto L_8022A84C;
    // 0x8022A6F4: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
L_8022A6F8:
    // 0x8022A6F8: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x8022A6FC: sb          $v0, 0x448($s4)
    MEM_B(0X448, ctx->r20) = ctx->r2;
    // 0x8022A700: lbu         $v0, 0x9($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X9);
    // 0x8022A704: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022A708: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
L_8022A70C:
    // 0x8022A70C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022A710: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8022A714: bne         $v0, $zero, L_8022A84C
    if (ctx->r2 != 0) {
        // 0x8022A718: addiu       $s1, $s2, 0x14
        ctx->r17 = ADD32(ctx->r18, 0X14);
            goto L_8022A84C;
    }
    // 0x8022A718: addiu       $s1, $s2, 0x14
    ctx->r17 = ADD32(ctx->r18, 0X14);
    // 0x8022A71C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022A720: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022A724: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022A728: jal         0x800610AC
    // 0x8022A72C: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_1;
    // 0x8022A72C: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_1:
    // 0x8022A730: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022A734: addiu       $a1, $s4, 0x14
    ctx->r5 = ADD32(ctx->r20, 0X14);
    // 0x8022A738: lbu         $v1, 0x0($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X0);
    // 0x8022A73C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022A740: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022A744: sh          $v0, 0x44($s2)
    MEM_H(0X44, ctx->r18) = ctx->r2;
    // 0x8022A748: addiu       $v0, $zero, 0xA8C
    ctx->r2 = ADD32(0, 0XA8C);
    // 0x8022A74C: sh          $v0, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r2;
    // 0x8022A750: addiu       $v0, $zero, 0xB4
    ctx->r2 = ADD32(0, 0XB4);
    // 0x8022A754: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022A758: sb          $v1, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r3;
    // 0x8022A75C: jal         0x8009A3B4
    // 0x8022A760: sh          $v0, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022A760: sh          $v0, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r2;
    after_2:
    // 0x8022A764: addiu       $s0, $s2, 0x2C
    ctx->r16 = ADD32(ctx->r18, 0X2C);
    // 0x8022A768: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A76C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022A770: jal         0x8009A3B4
    // 0x8022A774: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8022A774: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x8022A778: addiu       $a0, $s3, 0x24
    ctx->r4 = ADD32(ctx->r19, 0X24);
    // 0x8022A77C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022A780: jal         0x8009A3B4
    // 0x8022A784: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8022A784: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x8022A788: addiu       $s0, $s2, 0x1C
    ctx->r16 = ADD32(ctx->r18, 0X1C);
    // 0x8022A78C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A790: addiu       $a1, $s4, 0x1C
    ctx->r5 = ADD32(ctx->r20, 0X1C);
    // 0x8022A794: jal         0x8009A3B4
    // 0x8022A798: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8022A798: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_5:
    // 0x8022A79C: addiu       $a0, $s2, 0x34
    ctx->r4 = ADD32(ctx->r18, 0X34);
    // 0x8022A7A0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022A7A4: jal         0x8009A3B4
    // 0x8022A7A8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x8022A7A8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_6:
    // 0x8022A7AC: lbu         $v1, 0x9($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X9);
    // 0x8022A7B0: lhu         $v0, 0x16($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X16);
    // 0x8022A7B4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022A7B8: addiu       $v0, $v0, -0x32
    ctx->r2 = ADD32(ctx->r2, -0X32);
    // 0x8022A7BC: sh          $v0, 0x16($s2)
    MEM_H(0X16, ctx->r18) = ctx->r2;
    // 0x8022A7C0: j           L_8022A84C
    // 0x8022A7C4: sb          $v1, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r3;
        goto L_8022A84C;
    // 0x8022A7C4: sb          $v1, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r3;
L_8022A7C8:
    // 0x8022A7C8: lhu         $v0, 0x4($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X4);
    // 0x8022A7CC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022A7D0: sh          $v0, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r2;
    // 0x8022A7D4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A7D8: bnel        $v0, $zero, L_8022A7F0
    if (ctx->r2 != 0) {
        // 0x8022A7DC: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_8022A7F0;
    }
    goto skip_0;
    // 0x8022A7DC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    skip_0:
    // 0x8022A7E0: lbu         $v0, 0x9($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X9);
    // 0x8022A7E4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022A7E8: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
L_8022A7EC:
    // 0x8022A7EC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_8022A7F0:
    // 0x8022A7F0: lh          $a1, 0x44($s2)
    ctx->r5 = MEM_H(ctx->r18, 0X44);
    // 0x8022A7F4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022A7F8: jal         0x8004DA90
    // 0x8022A7FC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_7;
    // 0x8022A7FC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_7:
    // 0x8022A800: jal         0x80040F30
    // 0x8022A804: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_8;
    // 0x8022A804: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_8:
    // 0x8022A808: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022A80C: jal         0x8022A994
    // 0x8022A810: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_8022A994_ovl20(rdram, ctx);
        goto after_9;
    // 0x8022A810: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_9:
    // 0x8022A814: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022A818: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x8022A81C: bne         $v0, $zero, L_8022A84C
    if (ctx->r2 != 0) {
        // 0x8022A820: nop
    
            goto L_8022A84C;
    }
    // 0x8022A820: nop

    // 0x8022A824: jal         0x80070050
    // 0x8022A828: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_80070050_4B450(rdram, ctx);
        goto after_10;
    // 0x8022A828: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_10:
    // 0x8022A82C: lbu         $v0, 0x0($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X0);
    // 0x8022A830: addiu       $a0, $zero, 0x239
    ctx->r4 = ADD32(0, 0X239);
    // 0x8022A834: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022A838: jal         0x8006036C
    // 0x8022A83C: sb          $v0, 0x0($s4)
    MEM_B(0X0, ctx->r20) = ctx->r2;
    func_8006036C_3B76C(rdram, ctx);
        goto after_11;
    // 0x8022A83C: sb          $v0, 0x0($s4)
    MEM_B(0X0, ctx->r20) = ctx->r2;
    after_11:
    // 0x8022A840: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A844: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x8022A848: sb          $zero, 0x9($s2)
    MEM_B(0X9, ctx->r18) = 0;
L_8022A84C:
    // 0x8022A84C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8022A850: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8022A854: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022A858: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022A85C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022A860: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A864: jr          $ra
    // 0x8022A868: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022A868: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80226FF0_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226FF0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80226FF4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226FF8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226FFC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227000: lui         $s1, 0x8023
    ctx->r17 = S32(0X8023 << 16);
    // 0x80227004: addiu       $s1, $s1, -0x3A2C
    ctx->r17 = ADD32(ctx->r17, -0X3A2C);
    // 0x80227008: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022700C: jal         0x800A3450
    // 0x80227010: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80227010: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    after_0:
    // 0x80227014: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80227018: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8022701C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80227020: lbu         $v1, -0x3A3C($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3A3C);
    // 0x80227024: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227028: beq         $v1, $v0, L_802270C8
    if (ctx->r3 == ctx->r2) {
        // 0x8022702C: addiu       $s2, $s0, 0x348
        ctx->r18 = ADD32(ctx->r16, 0X348);
            goto L_802270C8;
    }
    // 0x8022702C: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x80227030: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80227034: beql        $v0, $zero, L_8022704C
    if (ctx->r2 == 0) {
        // 0x80227038: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022704C;
    }
    goto skip_0;
    // 0x80227038: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022703C: beq         $v1, $zero, L_8022705C
    if (ctx->r3 == 0) {
        // 0x80227040: nop
    
            goto L_8022705C;
    }
    // 0x80227040: nop

    // 0x80227044: j           L_80227114
    // 0x80227048: nop

        goto L_80227114;
    // 0x80227048: nop

L_8022704C:
    // 0x8022704C: beq         $v1, $v0, L_802270E8
    if (ctx->r3 == ctx->r2) {
        // 0x80227050: nop
    
            goto L_802270E8;
    }
    // 0x80227050: nop

    // 0x80227054: j           L_80227114
    // 0x80227058: nop

        goto L_80227114;
    // 0x80227058: nop

L_8022705C:
    // 0x8022705C: lh          $v0, 0x35E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X35E);
    // 0x80227060: bne         $v0, $zero, L_80227074
    if (ctx->r2 != 0) {
        // 0x80227064: nop
    
            goto L_80227074;
    }
    // 0x80227064: nop

    // 0x80227068: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022706C: j           L_8022707C
    // 0x80227070: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022707C;
    // 0x80227070: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80227074:
    // 0x80227074: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80227078: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
L_8022707C:
    // 0x8022707C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80227080: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80227084: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x80227088: beq         $v0, $zero, L_802270A4
    if (ctx->r2 == 0) {
        // 0x8022708C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802270A4;
    }
    // 0x8022708C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227090: jal         0x80228A58
    // 0x80227094: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80228A58_ovl20(rdram, ctx);
        goto after_1;
    // 0x80227094: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x80227098: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022709C: j           L_802270B8
    // 0x802270A0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_802270B8;
    // 0x802270A0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_802270A4:
    // 0x802270A4: jal         0x80228A58
    // 0x802270A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80228A58_ovl20(rdram, ctx);
        goto after_2;
    // 0x802270A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x802270AC: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x802270B0: jal         0x80228A18
    // 0x802270B4: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    func_80228A18_ovl20(rdram, ctx);
        goto after_3;
    // 0x802270B4: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    after_3:
L_802270B8:
    // 0x802270B8: lui         $s1, 0x8023
    ctx->r17 = S32(0X8023 << 16);
    // 0x802270BC: addiu       $s1, $s1, -0x3A2C
    ctx->r17 = ADD32(ctx->r17, -0X3A2C);
    // 0x802270C0: j           L_80227114
    // 0x802270C4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_80227114;
    // 0x802270C4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_802270C8:
    // 0x802270C8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x802270CC: jal         0x80228A08
    // 0x802270D0: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    func_80228A08_ovl20(rdram, ctx);
        goto after_4;
    // 0x802270D0: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    after_4:
    // 0x802270D4: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802270D8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802270DC: addiu       $v1, $v1, 0x3
    ctx->r3 = ADD32(ctx->r3, 0X3);
    // 0x802270E0: j           L_80227114
    // 0x802270E4: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
        goto L_80227114;
    // 0x802270E4: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_802270E8:
    // 0x802270E8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x802270EC: jal         0x80228A18
    // 0x802270F0: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
    func_80228A18_ovl20(rdram, ctx);
        goto after_5;
    // 0x802270F0: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
    after_5:
    // 0x802270F4: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x802270F8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802270FC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80227100: addiu       $v1, $v1, 0x800
    ctx->r3 = ADD32(ctx->r3, 0X800);
    // 0x80227104: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80227108: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8022710C: sh          $v1, 0x364($s0)
    MEM_H(0X364, ctx->r16) = ctx->r3;
    // 0x80227110: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80227114:
    // 0x80227114: jal         0x800A3450
    // 0x80227118: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_6;
    // 0x80227118: nop

    after_6:
    // 0x8022711C: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80227120: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x80227124: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80227128: sh          $v0, 0x8($s2)
    MEM_H(0X8, ctx->r18) = ctx->r2;
    // 0x8022712C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80227130: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80227134: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227138: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022713C: jr          $ra
    // 0x80227140: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80227140: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80226B14_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226B14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226B18: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226B1C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226B20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226B24: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80226B28: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80226B2C: jal         0x8004DA90
    // 0x80226B30: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x80226B30: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x80226B34: lhu         $v0, 0x35E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X35E);
    // 0x80226B38: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80226B3C: sh          $v0, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r2;
    // 0x80226B40: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226B44: bne         $v0, $zero, L_80226B7C
    if (ctx->r2 != 0) {
        // 0x80226B48: nop
    
            goto L_80226B7C;
    }
    // 0x80226B48: nop

    // 0x80226B4C: lh          $v0, 0x35C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X35C);
    // 0x80226B50: beq         $v0, $zero, L_80226B64
    if (ctx->r2 == 0) {
        // 0x80226B54: nop
    
            goto L_80226B64;
    }
    // 0x80226B54: nop

    // 0x80226B58: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x80226B5C: j           L_80226B6C
    // 0x80226B60: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
        goto L_80226B6C;
    // 0x80226B60: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
L_80226B64:
    // 0x80226B64: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x80226B68: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
L_80226B6C:
    // 0x80226B6C: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80226B70: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x80226B74: j           L_80226BCC
    // 0x80226B78: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_80226BCC;
    // 0x80226B78: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_80226B7C:
    // 0x80226B7C: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x80226B80: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80226B84: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x80226B88: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226B8C: bne         $v0, $zero, L_80226B9C
    if (ctx->r2 != 0) {
        // 0x80226B90: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80226B9C;
    }
    // 0x80226B90: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226B94: j           L_80226BCC
    // 0x80226B98: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80226BCC;
    // 0x80226B98: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80226B9C:
    // 0x80226B9C: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80226BA0: jal         0x80228AA4
    // 0x80226BA4: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_80228AA4_ovl20(rdram, ctx);
        goto after_1;
    // 0x80226BA4: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_1:
    // 0x80226BA8: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80226BAC: beq         $v0, $zero, L_80226BD0
    if (ctx->r2 == 0) {
        // 0x80226BB0: nop
    
            goto L_80226BD0;
    }
    // 0x80226BB0: nop

    // 0x80226BB4: jal         0x80228A08
    // 0x80226BB8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_80228A08_ovl20(rdram, ctx);
        goto after_2;
    // 0x80226BB8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_2:
    // 0x80226BBC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80226BC0: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80226BC4: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x80226BC8: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_80226BCC:
    // 0x80226BCC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80226BD0:
    // 0x80226BD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226BD4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226BD8: jr          $ra
    // 0x80226BDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226BDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229EF0_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229EF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229EF4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80229EF8: jal         0x8004F418
    // 0x80229EFC: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x80229EFC: nop

    after_0:
    // 0x80229F00: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80229F04: jr          $ra
    // 0x80229F08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229F08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022890C_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022890C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80228910: lw          $a1, 0x4B34($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4B34);
    // 0x80228914: bne         $a1, $a0, L_80228968
    if (ctx->r5 != ctx->r4) {
        // 0x80228918: addiu       $a2, $a0, 0x348
        ctx->r6 = ADD32(ctx->r4, 0X348);
            goto L_80228968;
    }
    // 0x80228918: addiu       $a2, $a0, 0x348
    ctx->r6 = ADD32(ctx->r4, 0X348);
    // 0x8022891C: lbu         $v1, 0x2($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X2);
    // 0x80228920: addiu       $v0, $zero, 0x34
    ctx->r2 = ADD32(0, 0X34);
    // 0x80228924: bne         $v1, $v0, L_80228934
    if (ctx->r3 != ctx->r2) {
        // 0x80228928: addiu       $v0, $zero, 0x11
        ctx->r2 = ADD32(0, 0X11);
            goto L_80228934;
    }
    // 0x80228928: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x8022892C: j           L_80228950
    // 0x80228930: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
        goto L_80228950;
    // 0x80228930: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_80228934:
    // 0x80228934: bne         $v1, $v0, L_80228944
    if (ctx->r3 != ctx->r2) {
        // 0x80228938: addiu       $v0, $zero, 0x49
        ctx->r2 = ADD32(0, 0X49);
            goto L_80228944;
    }
    // 0x80228938: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x8022893C: j           L_80228950
    // 0x80228940: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
        goto L_80228950;
    // 0x80228940: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_80228944:
    // 0x80228944: bne         $v1, $v0, L_80228950
    if (ctx->r3 != ctx->r2) {
        // 0x80228948: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80228950;
    }
    // 0x80228948: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022894C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_80228950:
    // 0x80228950: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x80228954: lhu         $v0, 0x0($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X0);
    // 0x80228958: sb          $zero, 0x3($a2)
    MEM_B(0X3, ctx->r6) = 0;
    // 0x8022895C: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x80228960: andi        $v0, $v0, 0xFFFD
    ctx->r2 = ctx->r2 & 0XFFFD;
    // 0x80228964: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
L_80228968:
    // 0x80228968: jr          $ra
    // 0x8022896C: nop

    TRACE_RETURN()
    return;
    // 0x8022896C: nop

;}
RECOMP_FUNC void func_80228720_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228720: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80228724: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228728: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022872C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80228730: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x80228734: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80228738: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022873C: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x80228740: addiu       $s2, $s2, 0x49C4
    ctx->r18 = ADD32(ctx->r18, 0X49C4);
    // 0x80228744: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80228748: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022874C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80228750: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80228754: lbu         $v1, 0x34B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34B);
    // 0x80228758: lhu         $t0, 0x56($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X56);
    // 0x8022875C: lbu         $t1, 0xAC($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XAC);
    // 0x80228760: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x80228764: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80228768: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022876C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80228770: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
    // 0x80228774: sh          $t0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r8;
    // 0x80228778: jal         0x8004F820
    // 0x8022877C: sb          $t1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r9;
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022877C: sb          $t1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r9;
    after_0:
    // 0x80228780: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228784: bgez        $v0, L_802287B4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80228788: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_802287B4;
    }
    // 0x80228788: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x8022878C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80228790: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80228794: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80228798: jal         0x8004F820
    // 0x8022879C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x8022879C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_1:
    // 0x802287A0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802287A4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802287A8: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x802287AC: j           L_802287D0
    // 0x802287B0: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_802287D0;
    // 0x802287B0: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_802287B4:
    // 0x802287B4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802287B8: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802287BC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802287C0: jal         0x8004F820
    // 0x802287C4: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x802287C4: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x802287C8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802287CC: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_802287D0:
    // 0x802287D0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802287D4: sh          $v0, 0x6($s3)
    MEM_H(0X6, ctx->r19) = ctx->r2;
    // 0x802287D8: lbu         $a3, 0xC($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XC);
    // 0x802287DC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802287E0: jal         0x800610AC
    // 0x802287E4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_3;
    // 0x802287E4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x802287E8: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x802287EC: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x802287F0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802287F4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802287F8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802287FC: jr          $ra
    // 0x80228800: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80228800: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80228008_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228008: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022800C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228010: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228014: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80228018: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022801C: lh          $a0, 0x34C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X34C);
    // 0x80228020: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80228024: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    // 0x80228028: jal         0x8004FA7C
    // 0x8022802C: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x8022802C: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    after_0:
    // 0x80228030: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80228034: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x80228038: beq         $v0, $zero, L_802280CC
    if (ctx->r2 == 0) {
        // 0x8022803C: nop
    
            goto L_802280CC;
    }
    // 0x8022803C: nop

    // 0x80228040: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80228044: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x80228048: bne         $v0, $zero, L_802280CC
    if (ctx->r2 != 0) {
        // 0x8022804C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802280CC;
    }
    // 0x8022804C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228050: lbu         $v1, 0x34A($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34A);
    // 0x80228054: beq         $v1, $v0, L_8022806C
    if (ctx->r3 == ctx->r2) {
        // 0x80228058: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022806C;
    }
    // 0x80228058: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022805C: beq         $v1, $v0, L_8022809C
    if (ctx->r3 == ctx->r2) {
        // 0x80228060: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022809C;
    }
    // 0x80228060: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80228064: j           L_802280C0
    // 0x80228068: nop

        goto L_802280C0;
    // 0x80228068: nop

L_8022806C:
    // 0x8022806C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80228070: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x80228074: bne         $v0, $zero, L_802280C0
    if (ctx->r2 != 0) {
        // 0x80228078: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_802280C0;
    }
    // 0x80228078: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022807C: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x80228080: bne         $v0, $zero, L_802280C0
    if (ctx->r2 != 0) {
        // 0x80228084: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802280C0;
    }
    // 0x80228084: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228088: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022808C: bne         $v1, $v0, L_802280C0
    if (ctx->r3 != ctx->r2) {
        // 0x80228090: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_802280C0;
    }
    // 0x80228090: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80228094: j           L_802280C0
    // 0x80228098: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802280C0;
    // 0x80228098: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022809C:
    // 0x8022809C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802280A0: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x802280A4: beq         $v0, $zero, L_802280BC
    if (ctx->r2 == 0) {
        // 0x802280A8: slti        $v0, $v1, 0x4
        ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
            goto L_802280BC;
    }
    // 0x802280A8: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x802280AC: bne         $v0, $zero, L_802280C0
    if (ctx->r2 != 0) {
        // 0x802280B0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_802280C0;
    }
    // 0x802280B0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x802280B4: j           L_802280C0
    // 0x802280B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802280C0;
    // 0x802280B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802280BC:
    // 0x802280BC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_802280C0:
    // 0x802280C0: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x802280C4: beq         $v0, $zero, L_802280F0
    if (ctx->r2 == 0) {
        // 0x802280C8: nop
    
            goto L_802280F0;
    }
    // 0x802280C8: nop

L_802280CC:
    // 0x802280CC: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x802280D0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802280D4: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x802280D8: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x802280DC: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x802280E0: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x802280E4: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x802280E8: j           L_80228100
    // 0x802280EC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80228100;
    // 0x802280EC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_802280F0:
    // 0x802280F0: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x802280F4: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x802280F8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x802280FC: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_80228100:
    // 0x80228100: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80228104: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80228108: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022810C: jr          $ra
    // 0x80228110: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80228110: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802275AC_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802275AC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802275B0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802275B4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802275B8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802275BC: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x802275C0: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x802275C4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802275C8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802275CC: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x802275D0: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x802275D4: bne         $v1, $v0, L_802275F0
    if (ctx->r3 != ctx->r2) {
        // 0x802275D8: addiu       $s2, $s0, 0x348
        ctx->r18 = ADD32(ctx->r16, 0X348);
            goto L_802275F0;
    }
    // 0x802275D8: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x802275DC: lui         $s1, 0x8023
    ctx->r17 = S32(0X8023 << 16);
    // 0x802275E0: addiu       $s1, $s1, -0x39D0
    ctx->r17 = ADD32(ctx->r17, -0X39D0);
    // 0x802275E4: lui         $s3, 0x8023
    ctx->r19 = S32(0X8023 << 16);
    // 0x802275E8: j           L_80227600
    // 0x802275EC: addiu       $s3, $s3, -0x39B0
    ctx->r19 = ADD32(ctx->r19, -0X39B0);
        goto L_80227600;
    // 0x802275EC: addiu       $s3, $s3, -0x39B0
    ctx->r19 = ADD32(ctx->r19, -0X39B0);
L_802275F0:
    // 0x802275F0: lui         $s1, 0x8023
    ctx->r17 = S32(0X8023 << 16);
    // 0x802275F4: addiu       $s1, $s1, -0x39E0
    ctx->r17 = ADD32(ctx->r17, -0X39E0);
    // 0x802275F8: lui         $s3, 0x8023
    ctx->r19 = S32(0X8023 << 16);
    // 0x802275FC: addiu       $s3, $s3, -0x39C0
    ctx->r19 = ADD32(ctx->r19, -0X39C0);
L_80227600:
    // 0x80227600: lui         $s4, 0x8023
    ctx->r20 = S32(0X8023 << 16);
    // 0x80227604: jal         0x800A3450
    // 0x80227608: addiu       $s4, $s4, -0x39A0
    ctx->r20 = ADD32(ctx->r20, -0X39A0);
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80227608: addiu       $s4, $s4, -0x39A0
    ctx->r20 = ADD32(ctx->r20, -0X39A0);
    after_0:
    // 0x8022760C: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80227610: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x80227614: lbu         $s1, 0x0($v0)
    ctx->r17 = MEM_BU(ctx->r2, 0X0);
    // 0x80227618: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022761C: andi        $v1, $s1, 0xFF
    ctx->r3 = ctx->r17 & 0XFF;
    // 0x80227620: beq         $v1, $v0, L_802276AC
    if (ctx->r3 == ctx->r2) {
        // 0x80227624: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_802276AC;
    }
    // 0x80227624: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80227628: beql        $v0, $zero, L_80227640
    if (ctx->r2 == 0) {
        // 0x8022762C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80227640;
    }
    goto skip_0;
    // 0x8022762C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80227630: beq         $v1, $zero, L_80227650
    if (ctx->r3 == 0) {
        // 0x80227634: nop
    
            goto L_80227650;
    }
    // 0x80227634: nop

    // 0x80227638: j           L_8022773C
    // 0x8022763C: nop

        goto L_8022773C;
    // 0x8022763C: nop

L_80227640:
    // 0x80227640: beq         $v1, $v0, L_802276C0
    if (ctx->r3 == ctx->r2) {
        // 0x80227644: nop
    
            goto L_802276C0;
    }
    // 0x80227644: nop

    // 0x80227648: j           L_8022773C
    // 0x8022764C: nop

        goto L_8022773C;
    // 0x8022764C: nop

L_80227650:
    // 0x80227650: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80227654: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x80227658: bne         $v0, $zero, L_8022767C
    if (ctx->r2 != 0) {
        // 0x8022765C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022767C;
    }
    // 0x8022765C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227660: jal         0x800A3450
    // 0x80227664: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x80227664: nop

    after_1:
    // 0x80227668: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022766C: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x80227670: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80227674: beq         $v0, $zero, L_80227688
    if (ctx->r2 == 0) {
        // 0x80227678: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227688;
    }
    // 0x80227678: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022767C:
    // 0x8022767C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80227680: j           L_8022769C
    // 0x80227684: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_8022769C;
    // 0x80227684: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80227688:
    // 0x80227688: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022768C: jal         0x80228A18
    // 0x80227690: nop

    func_80228A18_ovl20(rdram, ctx);
        goto after_2;
    // 0x80227690: nop

    after_2:
    // 0x80227694: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227698: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_8022769C:
    // 0x8022769C: jal         0x80228A58
    // 0x802276A0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80228A58_ovl20(rdram, ctx);
        goto after_3;
    // 0x802276A0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_3:
    // 0x802276A4: j           L_80227760
    // 0x802276A8: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
        goto L_80227760;
    // 0x802276A8: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
L_802276AC:
    // 0x802276AC: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x802276B0: jal         0x80228A08
    // 0x802276B4: nop

    func_80228A08_ovl20(rdram, ctx);
        goto after_4;
    // 0x802276B4: nop

    after_4:
    // 0x802276B8: j           L_80227760
    // 0x802276BC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_80227760;
    // 0x802276BC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_802276C0:
    // 0x802276C0: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x802276C4: lhu         $v0, 0xC($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XC);
    // 0x802276C8: lhu         $a2, 0x14($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X14);
    // 0x802276CC: lhu         $a1, 0x18($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X18);
    // 0x802276D0: lhu         $a0, 0x16($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X16);
    // 0x802276D4: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x802276D8: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x802276DC: sra         $a3, $a2, 17
    ctx->r7 = S32(SIGNED(ctx->r6) >> 17);
    // 0x802276E0: lhu         $v0, 0x10($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X10);
    // 0x802276E4: addu        $v1, $v1, $a3
    ctx->r3 = ADD32(ctx->r3, ctx->r7);
    // 0x802276E8: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x802276EC: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802276F0: andi        $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 & 0XFFFF;
    // 0x802276F4: slt         $v1, $v1, $a2
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x802276F8: subu        $a1, $a1, $v0
    ctx->r5 = SUB32(ctx->r5, ctx->r2);
    // 0x802276FC: sra         $v0, $a0, 17
    ctx->r2 = S32(SIGNED(ctx->r4) >> 17);
    // 0x80227700: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x80227704: beq         $v1, $zero, L_80227734
    if (ctx->r3 == 0) {
        // 0x80227708: sra         $a0, $a0, 16
        ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
            goto L_80227734;
    }
    // 0x80227708: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8022770C: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x80227710: slt         $v0, $v0, $a0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80227714: beq         $v0, $zero, L_80227734
    if (ctx->r2 == 0) {
        // 0x80227718: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227734;
    }
    // 0x80227718: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022771C: jal         0x80228A58
    // 0x80227720: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80228A58_ovl20(rdram, ctx);
        goto after_5;
    // 0x80227720: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x80227724: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80227728: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022772C: j           L_80227760
    // 0x80227730: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_80227760;
    // 0x80227730: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80227734:
    // 0x80227734: j           L_80227760
    // 0x80227738: addiu       $s1, $zero, 0xFF
    ctx->r17 = ADD32(0, 0XFF);
        goto L_80227760;
    // 0x80227738: addiu       $s1, $zero, 0xFF
    ctx->r17 = ADD32(0, 0XFF);
L_8022773C:
    // 0x8022773C: jal         0x800A3450
    // 0x80227740: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_6;
    // 0x80227740: nop

    after_6:
    // 0x80227744: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80227748: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022774C: jal         0x80228A18
    // 0x80227750: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    func_80228A18_ovl20(rdram, ctx);
        goto after_7;
    // 0x80227750: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    after_7:
    // 0x80227754: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80227758: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022775C: sh          $v0, 0x1E($s2)
    MEM_H(0X1E, ctx->r18) = ctx->r2;
L_80227760:
    // 0x80227760: jal         0x800A3450
    // 0x80227764: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_8;
    // 0x80227764: nop

    after_8:
    // 0x80227768: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022776C: addu        $v0, $s4, $v0
    ctx->r2 = ADD32(ctx->r20, ctx->r2);
    // 0x80227770: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80227774: andi        $v1, $s1, 0xFF
    ctx->r3 = ctx->r17 & 0XFF;
    // 0x80227778: sh          $v0, 0x8($s2)
    MEM_H(0X8, ctx->r18) = ctx->r2;
    // 0x8022777C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80227780: beq         $v1, $v0, L_80227798
    if (ctx->r3 == ctx->r2) {
        // 0x80227784: nop
    
            goto L_80227798;
    }
    // 0x80227784: nop

    // 0x80227788: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022778C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227790: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x80227794: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80227798:
    // 0x80227798: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8022779C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x802277A0: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x802277A4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802277A8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802277AC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802277B0: jr          $ra
    // 0x802277B4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802277B4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80225B60_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225B60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225B64: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225B68: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80225B6C: bne         $v0, $zero, L_80225BBC
    if (ctx->r2 != 0) {
        // 0x80225B70: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80225BBC;
    }
    // 0x80225B70: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80225B74: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225B78: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x80225B7C: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80225B80: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225B84: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x80225B88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225B8C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225B90: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x80225B94: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225B98: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x80225B9C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225BA0: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x80225BA4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225BA8: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x80225BAC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225BB0: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x80225BB4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225BB8: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
L_80225BBC:
    // 0x80225BBC: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80225BC0: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x80225BC4: bne         $v1, $v0, L_80225C10
    if (ctx->r3 != ctx->r2) {
        // 0x80225BC8: nop
    
            goto L_80225C10;
    }
    // 0x80225BC8: nop

    // 0x80225BCC: jal         0x8004F144
    // 0x80225BD0: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80225BD0: nop

    after_0:
    // 0x80225BD4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80225BD8: beq         $v1, $zero, L_80225C10
    if (ctx->r3 == 0) {
        // 0x80225BDC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80225C10;
    }
    // 0x80225BDC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225BE0: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80225BE4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80225BE8: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x80225BEC: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
    // 0x80225BF0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80225BF4: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
    // 0x80225BF8: addiu       $v0, $zero, -0x14D
    ctx->r2 = ADD32(0, -0X14D);
    // 0x80225BFC: sh          $v0, 0x1E($v1)
    MEM_H(0X1E, ctx->r3) = ctx->r2;
    // 0x80225C00: addiu       $v0, $zero, -0x370
    ctx->r2 = ADD32(0, -0X370);
    // 0x80225C04: sb          $zero, 0xD($v1)
    MEM_B(0XD, ctx->r3) = 0;
    // 0x80225C08: sh          $zero, 0x1C($v1)
    MEM_H(0X1C, ctx->r3) = 0;
    // 0x80225C0C: sh          $v0, 0x20($v1)
    MEM_H(0X20, ctx->r3) = ctx->r2;
L_80225C10:
    // 0x80225C10: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80225C14: jr          $ra
    // 0x80225C18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225C18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225C1C_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225C1C: jr          $ra
    // 0x80225C20: nop

    TRACE_RETURN()
    return;
    // 0x80225C20: nop

;}
RECOMP_FUNC void func_802274A0_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802274A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802274A4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802274A8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802274AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802274B0: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x802274B4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802274B8: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x802274BC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802274C0: bne         $v0, $zero, L_80227514
    if (ctx->r2 != 0) {
        // 0x802274C4: addiu       $a1, $zero, 0x40
        ctx->r5 = ADD32(0, 0X40);
            goto L_80227514;
    }
    // 0x802274C4: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x802274C8: jal         0x80228AA4
    // 0x802274CC: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_80228AA4_ovl20(rdram, ctx);
        goto after_0;
    // 0x802274CC: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_0:
    // 0x802274D0: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x802274D4: beq         $v0, $zero, L_80227510
    if (ctx->r2 == 0) {
        // 0x802274D8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80227510;
    }
    // 0x802274D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802274DC: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x802274E0: jal         0x80228A18
    // 0x802274E4: nop

    func_80228A18_ovl20(rdram, ctx);
        goto after_1;
    // 0x802274E4: nop

    after_1:
    // 0x802274E8: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x802274EC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802274F0: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x802274F4: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x802274F8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802274FC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80227500: addiu       $v1, $v1, 0x800
    ctx->r3 = ADD32(ctx->r3, 0X800);
    // 0x80227504: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80227508: j           L_80227514
    // 0x8022750C: sh          $v1, 0x364($s0)
    MEM_H(0X364, ctx->r16) = ctx->r3;
        goto L_80227514;
    // 0x8022750C: sh          $v1, 0x364($s0)
    MEM_H(0X364, ctx->r16) = ctx->r3;
L_80227510:
    // 0x80227510: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80227514:
    // 0x80227514: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227518: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022751C: jr          $ra
    // 0x80227520: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227520: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225D04_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225D04: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80225D08: bne         $v0, $zero, L_80225D88
    if (ctx->r2 != 0) {
        // 0x80225D0C: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80225D88;
    }
    // 0x80225D0C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80225D10: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225D14: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x80225D18: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80225D1C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225D20: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x80225D24: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80225D28: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225D2C: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x80225D30: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225D34: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x80225D38: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225D3C: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x80225D40: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225D44: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x80225D48: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225D4C: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x80225D50: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225D54: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80225D58: lw          $v1, 0x48($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X48);
    // 0x80225D5C: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80225D60: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x80225D64: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80225D68: lw          $v1, 0x4C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X4C);
    // 0x80225D6C: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80225D70: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x80225D74: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80225D78: lw          $v1, 0x50($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X50);
    // 0x80225D7C: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80225D80: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x80225D84: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
L_80225D88:
    // 0x80225D88: jr          $ra
    // 0x80225D8C: nop

    TRACE_RETURN()
    return;
    // 0x80225D8C: nop

;}
RECOMP_FUNC void func_80228538_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228538: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022853C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228540: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228544: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228548: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022854C: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x80228550: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80228554: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x80228558: jal         0x8004F820
    // 0x8022855C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022855C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x80228560: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80228564: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80228568: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022856C: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80228570: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80228574: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x80228578: bne         $v0, $zero, L_802285B0
    if (ctx->r2 != 0) {
        // 0x8022857C: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_802285B0;
    }
    // 0x8022857C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80228580: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x80228584: lbu         $v1, 0x34B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34B);
    // 0x80228588: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022858C: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x80228590: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x80228594: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    // 0x80228598: jal         0x80228A08
    // 0x8022859C: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
    func_80228A08_ovl20(rdram, ctx);
        goto after_1;
    // 0x8022859C: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
    after_1:
    // 0x802285A0: jal         0x80034E3C
    // 0x802285A4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80034E3C_1023C(rdram, ctx);
        goto after_2;
    // 0x802285A4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_2:
    // 0x802285A8: j           L_802285CC
    // 0x802285AC: nop

        goto L_802285CC;
    // 0x802285AC: nop

L_802285B0:
    // 0x802285B0: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x802285B4: lb          $v1, -0x3C18($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3C18);
    // 0x802285B8: bne         $v1, $v0, L_802285CC
    if (ctx->r3 != ctx->r2) {
        // 0x802285BC: nop
    
            goto L_802285CC;
    }
    // 0x802285BC: nop

    // 0x802285C0: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x802285C4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802285C8: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
L_802285CC:
    // 0x802285CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802285D0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802285D4: jr          $ra
    // 0x802285D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802285D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228290_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228290: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80228294: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x80228298: bne         $v0, $zero, L_802282D0
    if (ctx->r2 != 0) {
        // 0x8022829C: addiu       $a1, $a0, 0x348
        ctx->r5 = ADD32(ctx->r4, 0X348);
            goto L_802282D0;
    }
    // 0x8022829C: addiu       $a1, $a0, 0x348
    ctx->r5 = ADD32(ctx->r4, 0X348);
    // 0x802282A0: lhu         $v0, 0x348($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X348);
    // 0x802282A4: lh          $v1, 0x34E($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X34E);
    // 0x802282A8: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x802282AC: beq         $v1, $zero, L_802282BC
    if (ctx->r3 == 0) {
        // 0x802282B0: sh          $v0, 0x348($a0)
        MEM_H(0X348, ctx->r4) = ctx->r2;
            goto L_802282BC;
    }
    // 0x802282B0: sh          $v0, 0x348($a0)
    MEM_H(0X348, ctx->r4) = ctx->r2;
    // 0x802282B4: j           L_802282C0
    // 0x802282B8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_802282C0;
    // 0x802282B8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_802282BC:
    // 0x802282BC: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_802282C0:
    // 0x802282C0: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x802282C4: lbu         $v0, 0x3($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X3);
    // 0x802282C8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802282CC: sb          $v0, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r2;
L_802282D0:
    // 0x802282D0: jr          $ra
    // 0x802282D4: nop

    TRACE_RETURN()
    return;
    // 0x802282D4: nop

;}
RECOMP_FUNC void func_80225FEC_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225FEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225FF0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225FF4: jal         0x8004F5C4
    // 0x80225FF8: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x80225FF8: nop

    after_0:
    // 0x80225FFC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80226000: jr          $ra
    // 0x80226004: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226004: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80226008: nop

    // 0x8022600C: nop

;}
RECOMP_FUNC void func_80228AA4_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228AA4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80228AA8: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80228AAC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80228AB0: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x80228AB4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80228AB8: lh          $v0, 0x56($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X56);
    // 0x80228ABC: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x80228AC0: sll         $a2, $a1, 20
    ctx->r6 = S32(ctx->r5 << 20);
    // 0x80228AC4: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x80228AC8: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80228ACC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80228AD0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80228AD4: jal         0x8004DC2C
    // 0x80228AD8: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_8004DC2C_2902C(rdram, ctx);
        goto after_0;
    // 0x80228AD8: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_0:
    // 0x80228ADC: lh          $a1, 0x18($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X18);
    // 0x80228AE0: lhu         $a0, 0x14($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X14);
    // 0x80228AE4: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80228AE8: lhu         $v1, 0x49C4($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X49C4);
    // 0x80228AEC: lh          $a2, 0x20($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X20);
    // 0x80228AF0: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x80228AF4: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x80228AF8: lhu         $v1, 0x18($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X18);
    // 0x80228AFC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80228B00: lhu         $a1, 0x49C8($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X49C8);
    // 0x80228B04: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    // 0x80228B08: andi        $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 & 0XFFFF;
    // 0x80228B0C: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x80228B10: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x80228B14: addu        $v1, $s0, $v1
    ctx->r3 = ADD32(ctx->r16, ctx->r3);
    // 0x80228B18: andi        $s0, $s0, 0xFFFF
    ctx->r16 = ctx->r16 & 0XFFFF;
    // 0x80228B1C: sll         $s0, $s0, 1
    ctx->r16 = S32(ctx->r16 << 1);
    // 0x80228B20: slt         $a0, $a0, $s0
    ctx->r4 = SIGNED(ctx->r4) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x80228B24: beq         $a0, $zero, L_80228B34
    if (ctx->r4 == 0) {
        // 0x80228B28: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80228B34;
    }
    // 0x80228B28: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80228B2C: andi        $v0, $v1, 0xFFFF
    ctx->r2 = ctx->r3 & 0XFFFF;
    // 0x80228B30: slt         $v0, $v0, $s0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r16) ? 1 : 0;
L_80228B34:
    // 0x80228B34: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x80228B38: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80228B3C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80228B40: jr          $ra
    // 0x80228B44: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80228B44: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80228B48: nop

    // 0x80228B4C: nop

;}
RECOMP_FUNC void func_80229C20_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229C20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229C24: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229C28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80229C2C: jal         0x800A3450
    // 0x80229C30: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80229C30: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x80229C34: andi        $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 & 0X7F;
    // 0x80229C38: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80229C3C: jal         0x800A3450
    // 0x80229C40: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x80229C40: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
    after_1:
    // 0x80229C44: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80229C48: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80229C4C: jal         0x800A3450
    // 0x80229C50: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x80229C50: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    after_2:
    // 0x80229C54: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80229C58: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
    // 0x80229C5C: sh          $v0, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r2;
    // 0x80229C60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80229C64: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229C68: jr          $ra
    // 0x80229C6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229C6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225340_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225340: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80225344: jr          $ra
    // 0x80225348: sw          $zero, -0x359C($at)
    MEM_W(-0X359C, ctx->r1) = 0;
    TRACE_RETURN()
    return;
    // 0x80225348: sw          $zero, -0x359C($at)
    MEM_W(-0X359C, ctx->r1) = 0;
;}
RECOMP_FUNC void func_80227524_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227524: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227528: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022752C: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80227530: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227534: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227538: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022753C: lw          $v0, -0x39FC($at)
    ctx->r2 = MEM_W(ctx->r1, -0X39FC);
    // 0x80227540: jalr        $v0
    // 0x80227544: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80227544: nop

    after_0:
    // 0x80227548: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022754C: jr          $ra
    // 0x80227550: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227550: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229420_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229420: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80229424: lw          $v0, 0x4B34($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4B34);
    // 0x80229428: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022942C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80229430: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80229434: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80229438: lui         $s3, 0x8020
    ctx->r19 = S32(0X8020 << 16);
    // 0x8022943C: addiu       $s3, $s3, 0x49B0
    ctx->r19 = ADD32(ctx->r19, 0X49B0);
    // 0x80229440: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80229444: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80229448: bne         $v0, $s1, L_8022952C
    if (ctx->r2 != ctx->r17) {
        // 0x8022944C: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_8022952C;
    }
    // 0x8022944C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229450: addiu       $s0, $s1, 0x14
    ctx->r16 = ADD32(ctx->r17, 0X14);
    // 0x80229454: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229458: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x8022945C: addiu       $s2, $s3, 0x14
    ctx->r18 = ADD32(ctx->r19, 0X14);
    // 0x80229460: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80229464: jal         0x8004F820
    // 0x80229468: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80229468: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_0:
    // 0x8022946C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229470: bgez        $v0, L_8022949C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80229474: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022949C;
    }
    // 0x80229474: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229478: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x8022947C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80229480: jal         0x8004F820
    // 0x80229484: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x80229484: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_1:
    // 0x80229488: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022948C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80229490: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80229494: j           L_802294B4
    // 0x80229498: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_802294B4;
    // 0x80229498: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_8022949C:
    // 0x8022949C: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x802294A0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802294A4: jal         0x8004F820
    // 0x802294A8: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x802294A8: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x802294AC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802294B0: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_802294B4:
    // 0x802294B4: sh          $v0, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r2;
    // 0x802294B8: lbu         $v0, 0x0($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X0);
    // 0x802294BC: lbu         $v1, 0xBD($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0XBD);
    // 0x802294C0: sw          $zero, 0x184($s3)
    MEM_W(0X184, ctx->r19) = 0;
    // 0x802294C4: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x802294C8: ori         $v1, $v1, 0x40
    ctx->r3 = ctx->r3 | 0X40;
    // 0x802294CC: sb          $v0, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r2;
    // 0x802294D0: sb          $v1, 0xBD($s3)
    MEM_B(0XBD, ctx->r19) = ctx->r3;
    // 0x802294D4: lh          $v0, 0x180($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X180);
    // 0x802294D8: lui         $s0, 0x8023
    ctx->r16 = S32(0X8023 << 16);
    // 0x802294DC: addiu       $s0, $s0, -0x36D0
    ctx->r16 = ADD32(ctx->r16, -0X36D0);
    // 0x802294E0: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x802294E4: lh          $v0, 0x182($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X182);
    // 0x802294E8: addiu       $v0, $v0, -0x20
    ctx->r2 = ADD32(ctx->r2, -0X20);
    // 0x802294EC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802294F0: sw          $v0, -0x36CC($at)
    MEM_W(-0X36CC, ctx->r1) = ctx->r2;
    // 0x802294F4: lh          $v0, 0x184($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X184);
    // 0x802294F8: addiu       $a0, $s3, 0x14
    ctx->r4 = ADD32(ctx->r19, 0X14);
    // 0x802294FC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80229500: sw          $v0, -0x36C8($at)
    MEM_W(-0X36C8, ctx->r1) = ctx->r2;
    // 0x80229504: jal         0x8004EC38
    // 0x80229508: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8004EC38_2A038(rdram, ctx);
        goto after_3;
    // 0x80229508: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_3:
    // 0x8022950C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229510: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x80229514: lw          $a3, 0x435C($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X435C);
    // 0x80229518: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x8022951C: jal         0x80034FCC
    // 0x80229520: addiu       $a2, $v0, 0x800
    ctx->r6 = ADD32(ctx->r2, 0X800);
    func_80034FCC_103CC(rdram, ctx);
        goto after_4;
    // 0x80229520: addiu       $a2, $v0, 0x800
    ctx->r6 = ADD32(ctx->r2, 0X800);
    after_4:
    // 0x80229524: j           L_80229530
    // 0x80229528: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80229530;
    // 0x80229528: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022952C:
    // 0x8022952C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80229530:
    // 0x80229530: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80229534: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80229538: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022953C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80229540: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229544: jr          $ra
    // 0x80229548: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80229548: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80225D90_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225D90: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80225D94: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80225D98: bne         $v1, $v0, L_80225DD0
    if (ctx->r3 != ctx->r2) {
        // 0x80225D9C: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_80225DD0;
    }
    // 0x80225D9C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80225DA0: lw          $a1, 0x48($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X48);
    // 0x80225DA4: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x80225DA8: sb          $v1, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r3;
    // 0x80225DAC: sb          $v0, 0xA($a1)
    MEM_B(0XA, ctx->r5) = ctx->r2;
    // 0x80225DB0: lw          $a1, 0x4C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X4C);
    // 0x80225DB4: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
    // 0x80225DB8: sb          $v1, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r3;
    // 0x80225DBC: sb          $v0, 0xA($a1)
    MEM_B(0XA, ctx->r5) = ctx->r2;
    // 0x80225DC0: lw          $a1, 0x50($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X50);
    // 0x80225DC4: addiu       $v0, $zero, 0x16
    ctx->r2 = ADD32(0, 0X16);
    // 0x80225DC8: sb          $v1, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r3;
    // 0x80225DCC: sb          $v0, 0xA($a1)
    MEM_B(0XA, ctx->r5) = ctx->r2;
L_80225DD0:
    // 0x80225DD0: jr          $ra
    // 0x80225DD4: nop

    TRACE_RETURN()
    return;
    // 0x80225DD4: nop

    // 0x80225DD8: nop

    // 0x80225DDC: nop

;}
RECOMP_FUNC void func_80226F50_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226F50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226F54: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226F58: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226F5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226F60: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x80226F64: bgez        $v0, L_80226F7C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80226F68: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_80226F7C;
    }
    // 0x80226F68: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80226F6C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80226F70: jal         0x80228A18
    // 0x80226F74: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    func_80228A18_ovl20(rdram, ctx);
        goto after_0;
    // 0x80226F74: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    after_0:
    // 0x80226F78: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80226F7C:
    // 0x80226F7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226F80: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226F84: jr          $ra
    // 0x80226F88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226F88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226D44_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226D44: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80226D48: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226D4C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226D50: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80226D54: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80226D58: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x80226D5C: bgez        $v0, L_80226D80
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80226D60: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_80226D80;
    }
    // 0x80226D60: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x80226D64: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80226D68: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x80226D6C: beq         $a0, $v0, L_80226D80
    if (ctx->r4 == ctx->r2) {
        // 0x80226D70: nop
    
            goto L_80226D80;
    }
    // 0x80226D70: nop

    // 0x80226D74: jal         0x80228A08
    // 0x80226D78: nop

    func_80228A08_ovl20(rdram, ctx);
        goto after_0;
    // 0x80226D78: nop

    after_0:
    // 0x80226D7C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80226D80:
    // 0x80226D80: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x80226D84: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80226D88: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    // 0x80226D8C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226D90: bne         $v0, $zero, L_80226DFC
    if (ctx->r2 != 0) {
        // 0x80226D94: addiu       $v0, $zero, 0x49
        ctx->r2 = ADD32(0, 0X49);
            goto L_80226DFC;
    }
    // 0x80226D94: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x80226D98: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80226D9C: bne         $a0, $v0, L_80226DB4
    if (ctx->r4 != ctx->r2) {
        // 0x80226DA0: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_80226DB4;
    }
    // 0x80226DA0: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80226DA4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80226DA8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80226DAC: j           L_80226DCC
    // 0x80226DB0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_80226DCC;
    // 0x80226DB0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80226DB4:
    // 0x80226DB4: jal         0x80228A18
    // 0x80226DB8: nop

    func_80228A18_ovl20(rdram, ctx);
        goto after_1;
    // 0x80226DB8: nop

    after_1:
    // 0x80226DBC: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80226DC0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80226DC4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80226DC8: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_80226DCC:
    // 0x80226DCC: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x80226DD0: beq         $v0, $zero, L_80226DE4
    if (ctx->r2 == 0) {
        // 0x80226DD4: nop
    
            goto L_80226DE4;
    }
    // 0x80226DD4: nop

    // 0x80226DD8: lhu         $v0, 0xA($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XA);
    // 0x80226DDC: j           L_80226DF4
    // 0x80226DE0: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
        goto L_80226DF4;
    // 0x80226DE0: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
L_80226DE4:
    // 0x80226DE4: lhu         $v0, 0xA($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XA);
    // 0x80226DE8: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80226DEC: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80226DF0: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
L_80226DF4:
    // 0x80226DF4: lhu         $v0, 0x1E($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X1E);
    // 0x80226DF8: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
L_80226DFC:
    // 0x80226DFC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80226E00: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80226E04: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226E08: jr          $ra
    // 0x80226E0C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80226E0C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80228A58_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228A58: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x80228A5C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228A60: beq         $a1, $v0, L_80228A8C
    if (ctx->r5 == ctx->r2) {
        // 0x80228A64: addiu       $v0, $zero, 0x2A
        ctx->r2 = ADD32(0, 0X2A);
            goto L_80228A8C;
    }
    // 0x80228A64: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x80228A68: lbu         $a0, 0x2($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X2);
    // 0x80228A6C: bne         $a0, $v0, L_80228A7C
    if (ctx->r4 != ctx->r2) {
        // 0x80228A70: addiu       $v1, $zero, 0x5
        ctx->r3 = ADD32(0, 0X5);
            goto L_80228A7C;
    }
    // 0x80228A70: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x80228A74: j           L_80228A9C
    // 0x80228A78: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
        goto L_80228A9C;
    // 0x80228A78: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
L_80228A7C:
    // 0x80228A7C: bne         $a0, $v1, L_80228A9C
    if (ctx->r4 != ctx->r3) {
        // 0x80228A80: addiu       $v0, $zero, 0x180
        ctx->r2 = ADD32(0, 0X180);
            goto L_80228A9C;
    }
    // 0x80228A80: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
    // 0x80228A84: j           L_80228A9C
    // 0x80228A88: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
        goto L_80228A9C;
    // 0x80228A88: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
L_80228A8C:
    // 0x80228A8C: lbu         $v0, 0x2($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X2);
    // 0x80228A90: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80228A94: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80228A98: lbu         $v0, -0x3BF0($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X3BF0);
L_80228A9C:
    // 0x80228A9C: jr          $ra
    // 0x80228AA0: nop

    TRACE_RETURN()
    return;
    // 0x80228AA0: nop

;}
RECOMP_FUNC void func_80227F48_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227F48: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227F4C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227F50: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227F54: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80227F58: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227F5C: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80227F60: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80227F64: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x80227F68: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x80227F6C: bne         $v0, $zero, L_80227FC8
    if (ctx->r2 != 0) {
        // 0x80227F70: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_80227FC8;
    }
    // 0x80227F70: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x80227F74: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80227F78: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x80227F7C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80227F80: jal         0x8004F820
    // 0x80227F84: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80227F84: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_0:
    // 0x80227F88: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80227F8C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80227F90: lw          $a0, 0x3FF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3FF0);
    // 0x80227F94: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80227F98: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80227F9C: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x80227FA0: and         $a0, $a0, $v0
    ctx->r4 = ctx->r4 & ctx->r2;
    // 0x80227FA4: beq         $a0, $zero, L_80227FC8
    if (ctx->r4 == 0) {
        // 0x80227FA8: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_80227FC8;
    }
    // 0x80227FA8: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80227FAC: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80227FB0: jal         0x80228970
    // 0x80227FB4: nop

    func_80228970_ovl20(rdram, ctx);
        goto after_1;
    // 0x80227FB4: nop

    after_1:
    // 0x80227FB8: lbu         $v1, 0x34B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34B);
    // 0x80227FBC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80227FC0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80227FC4: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
L_80227FC8:
    // 0x80227FC8: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80227FCC: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x80227FD0: bne         $v0, $zero, L_80227FF4
    if (ctx->r2 != 0) {
        // 0x80227FD4: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_80227FF4;
    }
    // 0x80227FD4: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x80227FD8: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80227FDC: sb          $v1, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r3;
    // 0x80227FE0: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x80227FE4: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x80227FE8: jal         0x80228A08
    // 0x80227FEC: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_80228A08_ovl20(rdram, ctx);
        goto after_2;
    // 0x80227FEC: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_2:
    // 0x80227FF0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80227FF4:
    // 0x80227FF4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80227FF8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227FFC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228000: jr          $ra
    // 0x80228004: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80228004: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80226480_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226480: jr          $ra
    // 0x80226484: nop

    TRACE_RETURN()
    return;
    // 0x80226484: nop

    // 0x80226488: nop

    // 0x8022648C: nop

;}
RECOMP_FUNC void func_8022ACE4_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022ACE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022ACE8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022ACEC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022ACF0: addiu       $a0, $s0, 0xAC
    ctx->r4 = ADD32(ctx->r16, 0XAC);
    // 0x8022ACF4: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022ACF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022ACFC: jal         0x8009A3B4
    // 0x8022AD00: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022AD00: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022AD04: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022AD08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022AD0C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022AD10: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8022AD14: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8022AD18: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x8022AD1C: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
    // 0x8022AD20: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x8022AD24: sw          $zero, 0x70($s0)
    MEM_W(0X70, ctx->r16) = 0;
    // 0x8022AD28: sw          $zero, 0x74($s0)
    MEM_W(0X74, ctx->r16) = 0;
    // 0x8022AD2C: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x8022AD30: jal         0x8004D5D4
    // 0x8022AD34: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_1;
    // 0x8022AD34: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022AD38: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x8022AD3C: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022AD40: addiu       $v0, $v0, -0x3898
    ctx->r2 = ADD32(ctx->r2, -0X3898);
    // 0x8022AD44: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x8022AD48: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022AD4C: addiu       $v0, $v0, -0x388C
    ctx->r2 = ADD32(ctx->r2, -0X388C);
    // 0x8022AD50: beq         $v1, $zero, L_8022AD60
    if (ctx->r3 == 0) {
        // 0x8022AD54: sw          $v0, 0x10($s0)
        MEM_W(0X10, ctx->r16) = ctx->r2;
            goto L_8022AD60;
    }
    // 0x8022AD54: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x8022AD58: j           L_8022AD64
    // 0x8022AD5C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_8022AD64;
    // 0x8022AD5C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_8022AD60:
    // 0x8022AD60: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022AD64:
    // 0x8022AD64: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022AD68: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8022AD6C: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x8022AD70: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022AD74: sw          $v0, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r2;
    // 0x8022AD78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022AD7C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022AD80: jr          $ra
    // 0x8022AD84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022AD84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022AD88_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AD88: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022AD8C: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x8022AD90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022AD94: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022AD98: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022AD9C: addiu       $v0, $zero, 0x1B
    ctx->r2 = ADD32(0, 0X1B);
    // 0x8022ADA0: bne         $v1, $v0, L_8022AE6C
    if (ctx->r3 != ctx->r2) {
        // 0x8022ADA4: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8022AE6C;
    }
    // 0x8022ADA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022ADA8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022ADAC: bne         $v0, $zero, L_8022AE2C
    if (ctx->r2 != 0) {
        // 0x8022ADB0: lui         $v0, 0x800
        ctx->r2 = S32(0X800 << 16);
            goto L_8022AE2C;
    }
    // 0x8022ADB0: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x8022ADB4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022ADB8: lw          $v0, 0x4B34($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4B34);
    // 0x8022ADBC: bne         $v0, $s0, L_8022AEB8
    if (ctx->r2 != ctx->r16) {
        // 0x8022ADC0: nop
    
            goto L_8022AEB8;
    }
    // 0x8022ADC0: nop

    // 0x8022ADC4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022ADC8: lhu         $v0, 0x4A06($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4A06);
    // 0x8022ADCC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022ADD0: sw          $zero, 0x4B34($at)
    MEM_W(0X4B34, ctx->r1) = 0;
    // 0x8022ADD4: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022ADD8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022ADDC: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022ADE0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022ADE4: addiu       $v0, $v0, 0x180
    ctx->r2 = ADD32(ctx->r2, 0X180);
    // 0x8022ADE8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022ADEC: slti        $v0, $v0, 0x300
    ctx->r2 = SIGNED(ctx->r2) < 0X300 ? 1 : 0;
    // 0x8022ADF0: beq         $v0, $zero, L_8022AEB8
    if (ctx->r2 == 0) {
        // 0x8022ADF4: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_8022AEB8;
    }
    // 0x8022ADF4: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022ADF8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022ADFC: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022AE00: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022AE04: bne         $v0, $zero, L_8022AEB8
    if (ctx->r2 != 0) {
        // 0x8022AE08: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_8022AEB8;
    }
    // 0x8022AE08: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022AE0C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022AE10: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x8022AE14: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022AE18: jal         0x800610AC
    // 0x8022AE1C: addiu       $a3, $zero, 0xD2
    ctx->r7 = ADD32(0, 0XD2);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_0;
    // 0x8022AE1C: addiu       $a3, $zero, 0xD2
    ctx->r7 = ADD32(0, 0XD2);
    after_0:
    // 0x8022AE20: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022AE24: j           L_8022AEB8
    // 0x8022AE28: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8022AEB8;
    // 0x8022AE28: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022AE2C:
    // 0x8022AE2C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8022AE30: lw          $v1, 0x3FF0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3FF0);
    // 0x8022AE34: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8022AE38: bne         $v0, $zero, L_8022AEB8
    if (ctx->r2 != 0) {
        // 0x8022AE3C: andi        $v1, $v1, 0xFF
        ctx->r3 = ctx->r3 & 0XFF;
            goto L_8022AEB8;
    }
    // 0x8022AE3C: andi        $v1, $v1, 0xFF
    ctx->r3 = ctx->r3 & 0XFF;
    // 0x8022AE40: bne         $v1, $zero, L_8022AE5C
    if (ctx->r3 != 0) {
        // 0x8022AE44: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022AE5C;
    }
    // 0x8022AE44: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022AE48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022AE4C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8022AE50: sb          $v0, -0x3B97($at)
    MEM_B(-0X3B97, ctx->r1) = ctx->r2;
    // 0x8022AE54: j           L_8022AEB8
    // 0x8022AE58: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
        goto L_8022AEB8;
    // 0x8022AE58: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_8022AE5C:
    // 0x8022AE5C: beql        $v1, $v0, L_8022AEB8
    if (ctx->r3 == ctx->r2) {
        // 0x8022AE60: sb          $zero, 0xA($s0)
        MEM_B(0XA, ctx->r16) = 0;
            goto L_8022AEB8;
    }
    goto skip_0;
    // 0x8022AE60: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    skip_0:
    // 0x8022AE64: j           L_8022AEB8
    // 0x8022AE68: nop

        goto L_8022AEB8;
    // 0x8022AE68: nop

L_8022AE6C:
    // 0x8022AE6C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022AE70: lw          $v0, 0x4B34($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4B34);
    // 0x8022AE74: bne         $v0, $s0, L_8022AEB8
    if (ctx->r2 != ctx->r16) {
        // 0x8022AE78: nop
    
            goto L_8022AEB8;
    }
    // 0x8022AE78: nop

    // 0x8022AE7C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022AE80: lhu         $v0, 0x4A06($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4A06);
    // 0x8022AE84: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022AE88: sw          $zero, 0x4B34($at)
    MEM_W(0X4B34, ctx->r1) = 0;
    // 0x8022AE8C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022AE90: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022AE94: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022AE98: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022AE9C: addiu       $v0, $v0, 0x180
    ctx->r2 = ADD32(ctx->r2, 0X180);
    // 0x8022AEA0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022AEA4: slti        $v0, $v0, 0x300
    ctx->r2 = SIGNED(ctx->r2) < 0X300 ? 1 : 0;
    // 0x8022AEA8: beq         $v0, $zero, L_8022AEB8
    if (ctx->r2 == 0) {
        // 0x8022AEAC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022AEB8;
    }
    // 0x8022AEAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022AEB0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8022AEB4: sb          $v0, -0x3B97($at)
    MEM_B(-0X3B97, ctx->r1) = ctx->r2;
L_8022AEB8:
    // 0x8022AEB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022AEBC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022AEC0: jr          $ra
    // 0x8022AEC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022AEC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022680C_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022680C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80226810: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80226814: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80226818: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022681C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226820: lbu         $s0, 0xE($s1)
    ctx->r16 = MEM_BU(ctx->r17, 0XE);
    // 0x80226824: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    // 0x80226828: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022682C: addiu       $v0, $v0, -0x3B34
    ctx->r2 = ADD32(ctx->r2, -0X3B34);
    // 0x80226830: andi        $s0, $s0, 0x3
    ctx->r16 = ctx->r16 & 0X3;
    // 0x80226834: sll         $s0, $s0, 4
    ctx->r16 = S32(ctx->r16 << 4);
    // 0x80226838: jal         0x80228A08
    // 0x8022683C: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    func_80228A08_ovl20(rdram, ctx);
        goto after_0;
    // 0x8022683C: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    after_0:
    // 0x80226840: jal         0x800A3450
    // 0x80226844: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x80226844: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    after_1:
    // 0x80226848: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022684C: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x80226850: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80226854: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80226858: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022685C: sh          $v1, 0x350($s1)
    MEM_H(0X350, ctx->r17) = ctx->r3;
    // 0x80226860: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x80226864: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80226868: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022686C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226870: jr          $ra
    // 0x80226874: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80226874: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
