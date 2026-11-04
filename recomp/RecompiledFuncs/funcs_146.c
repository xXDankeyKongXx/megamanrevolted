#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80228DE0_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228DE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228DE4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80228DE8: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80228DEC: bne         $v0, $zero, L_80228E04
    if (ctx->r2 != 0) {
        // 0x80228DF0: nop
    
            goto L_80228E04;
    }
    // 0x80228DF0: nop

    // 0x80228DF4: jal         0x80228E18
    // 0x80228DF8: nop

    func_80228E18_ovl21(rdram, ctx);
        goto after_0;
    // 0x80228DF8: nop

    after_0:
    // 0x80228DFC: j           L_80228E0C
    // 0x80228E00: nop

        goto L_80228E0C;
    // 0x80228E00: nop

L_80228E04:
    // 0x80228E04: jal         0x80228EC8
    // 0x80228E08: nop

    func_80228EC8_ovl21(rdram, ctx);
        goto after_1;
    // 0x80228E08: nop

    after_1:
L_80228E0C:
    // 0x80228E0C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80228E10: jr          $ra
    // 0x80228E14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228E14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022EE9C_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EE9C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022EEA0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022EEA4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022EEA8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8022EEAC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022EEB0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022EEB4: lb          $v0, 0xA6($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA6);
    // 0x8022EEB8: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x8022EEBC: bne         $v0, $zero, L_8022EED0
    if (ctx->r2 != 0) {
        // 0x8022EEC0: addiu       $s1, $s0, 0xC4
        ctx->r17 = ADD32(ctx->r16, 0XC4);
            goto L_8022EED0;
    }
    // 0x8022EEC0: addiu       $s1, $s0, 0xC4
    ctx->r17 = ADD32(ctx->r16, 0XC4);
    // 0x8022EEC4: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8022EEC8: jal         0x8022E8B4
    // 0x8022EECC: sh          $v0, 0x382($s0)
    MEM_H(0X382, ctx->r16) = ctx->r2;
    func_8022E8B4_ovl22(rdram, ctx);
        goto after_0;
    // 0x8022EECC: sh          $v0, 0x382($s0)
    MEM_H(0X382, ctx->r16) = ctx->r2;
    after_0:
L_8022EED0:
    // 0x8022EED0: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022EED4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022EED8: bne         $v1, $v0, L_8022EF68
    if (ctx->r3 != ctx->r2) {
        // 0x8022EEDC: nop
    
            goto L_8022EF68;
    }
    // 0x8022EEDC: nop

    // 0x8022EEE0: lbu         $v0, 0x64($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X64);
    // 0x8022EEE4: lbu         $v1, 0x65($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X65);
    // 0x8022EEE8: lbu         $a0, 0x66($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X66);
    // 0x8022EEEC: lbu         $a1, 0x66($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X66);
    // 0x8022EEF0: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x8022EEF4: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x8022EEF8: andi        $a0, $a0, 0x1F
    ctx->r4 = ctx->r4 & 0X1F;
    // 0x8022EEFC: sll         $v1, $v1, 5
    ctx->r3 = S32(ctx->r3 << 5);
    // 0x8022EF00: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8022EF04: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    // 0x8022EF08: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x8022EF0C: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022EF10: lhu         $a0, 0x15E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X15E);
    // 0x8022EF14: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8022EF18: sb          $a1, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r5;
    // 0x8022EF1C: lb          $v1, 0x66($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X66);
    // 0x8022EF20: addiu       $v0, $zero, -0x8000
    ctx->r2 = ADD32(0, -0X8000);
    // 0x8022EF24: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x8022EF28: slti        $v1, $v1, 0x10
    ctx->r3 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
    // 0x8022EF2C: bne         $v1, $zero, L_8022EF68
    if (ctx->r3 != 0) {
        // 0x8022EF30: sh          $v0, 0x15E($s0)
        MEM_H(0X15E, ctx->r16) = ctx->r2;
            goto L_8022EF68;
    }
    // 0x8022EF30: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022EF34: lb          $v1, 0x64($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X64);
    // 0x8022EF38: andi        $v0, $v0, 0x7FFF
    ctx->r2 = ctx->r2 & 0X7FFF;
    // 0x8022EF3C: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022EF40: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022EF44: sb          $v0, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r2;
    // 0x8022EF48: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022EF4C: beq         $v1, $v0, L_8022EF68
    if (ctx->r3 == ctx->r2) {
        // 0x8022EF50: addu        $a0, $v1, $zero
        ctx->r4 = ADD32(ctx->r3, 0);
            goto L_8022EF68;
    }
    // 0x8022EF50: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x8022EF54: lbu         $v0, 0x65($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X65);
    // 0x8022EF58: addiu       $v1, $a0, 0x4
    ctx->r3 = ADD32(ctx->r4, 0X4);
    // 0x8022EF5C: sb          $v1, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r3;
    // 0x8022EF60: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8022EF64: sb          $v0, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r2;
L_8022EF68:
    // 0x8022EF68: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x8022EF6C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022EF70: bne         $v1, $v0, L_8022EFC8
    if (ctx->r3 != ctx->r2) {
        // 0x8022EF74: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022EFC8;
    }
    // 0x8022EF74: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022EF78: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022EF7C: beq         $v1, $v0, L_8022EFC0
    if (ctx->r3 == ctx->r2) {
        // 0x8022EF80: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_8022EFC0;
    }
    // 0x8022EF80: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022EF84: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x8022EF88: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8022EF8C: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
    // 0x8022EF90: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x8022EF94: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022EF98: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022EF9C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022EFA0: sh          $v0, 0x3A($s2)
    MEM_H(0X3A, ctx->r18) = ctx->r2;
    // 0x8022EFA4: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x8022EFA8: sb          $v0, 0x3E($s2)
    MEM_B(0X3E, ctx->r18) = ctx->r2;
    // 0x8022EFAC: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x8022EFB0: sb          $zero, 0x7($s1)
    MEM_B(0X7, ctx->r17) = 0;
    // 0x8022EFB4: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x8022EFB8: j           L_8022EFC8
    // 0x8022EFBC: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
        goto L_8022EFC8;
    // 0x8022EFBC: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
L_8022EFC0:
    // 0x8022EFC0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022EFC4: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_8022EFC8:
    // 0x8022EFC8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8022EFCC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022EFD0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022EFD4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022EFD8: jr          $ra
    // 0x8022EFDC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022EFDC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022EAB4_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EAB4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022EAB8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022EABC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022EAC0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022EAC4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022EAC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022EACC: jal         0x80050294
    // 0x8022EAD0: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8022EAD0: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    after_0:
    // 0x8022EAD4: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022EAD8: sb          $v0, 0x385($s0)
    MEM_B(0X385, ctx->r16) = ctx->r2;
    // 0x8022EADC: addiu       $v0, $zero, 0x5A
    ctx->r2 = ADD32(0, 0X5A);
    // 0x8022EAE0: sb          $v0, 0x1DE($s0)
    MEM_B(0X1DE, ctx->r16) = ctx->r2;
    // 0x8022EAE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022EAE8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022EAEC: sb          $v0, 0x387($s0)
    MEM_B(0X387, ctx->r16) = ctx->r2;
    // 0x8022EAF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022EAF4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022EAF8: jr          $ra
    // 0x8022EAFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022EAFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228028_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228028: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022802C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80228030: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x80228034: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80228038: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022803C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80228040: lw          $v0, -0x6B68($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6B68);
    // 0x80228044: jalr        $v0
    // 0x80228048: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80228048: nop

    after_0:
    // 0x8022804C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80228050: jr          $ra
    // 0x80228054: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228054: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80235210_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235210: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80235214: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80235218: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023521C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80235220: addiu       $s1, $s0, 0xD0
    ctx->r17 = ADD32(ctx->r16, 0XD0);
    // 0x80235224: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80235228: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8023522C: jal         0x800540D0
    // 0x80235230: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_800540D0_2F4D0(rdram, ctx);
        goto after_0;
    // 0x80235230: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80235234: beq         $v0, $zero, L_8023524C
    if (ctx->r2 == 0) {
        // 0x80235238: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023524C;
    }
    // 0x80235238: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023523C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80235240: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80235244: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80235248: sh          $v1, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r3;
L_8023524C:
    // 0x8023524C: lhu         $v0, 0xE0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XE0);
    // 0x80235250: addiu       $v0, $v0, 0x22
    ctx->r2 = ADD32(ctx->r2, 0X22);
    // 0x80235254: sll         $a0, $v0, 16
    ctx->r4 = S32(ctx->r2 << 16);
    // 0x80235258: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8023525C: jal         0x800324B4
    // 0x80235260: sh          $v0, 0xE0($s0)
    MEM_H(0XE0, ctx->r16) = ctx->r2;
    func_800324B4_D8B4(rdram, ctx);
        goto after_1;
    // 0x80235260: sh          $v0, 0xE0($s0)
    MEM_H(0XE0, ctx->r16) = ctx->r2;
    after_1:
    // 0x80235264: lh          $a0, 0xE2($s0)
    ctx->r4 = MEM_H(ctx->r16, 0XE2);
    // 0x80235268: lh          $v1, 0xE4($s0)
    ctx->r3 = MEM_H(ctx->r16, 0XE4);
    // 0x8023526C: lhu         $a1, 0x56($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X56);
    // 0x80235270: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x80235274: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80235278: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x8023527C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80235280: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80235284: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80235288: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x8023528C: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x80235290: lhu         $v0, 0x44($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X44);
    // 0x80235294: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    // 0x80235298: andi        $a1, $a1, 0xFFF
    ctx->r5 = ctx->r5 & 0XFFF;
    // 0x8023529C: sw          $a0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r4;
    // 0x802352A0: sh          $a1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r5;
    // 0x802352A4: addiu       $v0, $v0, -0x5
    ctx->r2 = ADD32(ctx->r2, -0X5);
    // 0x802352A8: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x802352AC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802352B0: bltzl       $v0, L_802352B8
    if (SIGNED(ctx->r2) < 0) {
        // 0x802352B4: sh          $zero, 0x44($s0)
        MEM_H(0X44, ctx->r16) = 0;
            goto L_802352B8;
    }
    goto skip_0;
    // 0x802352B4: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    skip_0:
L_802352B8:
    // 0x802352B8: lh          $a2, 0x66($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X66);
    // 0x802352BC: lh          $a3, 0x44($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X44);
    // 0x802352C0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802352C4: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x802352C8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802352CC: jal         0x8004DBA0
    // 0x802352D0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_2;
    // 0x802352D0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_2:
    // 0x802352D4: jal         0x80040F30
    // 0x802352D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_3;
    // 0x802352D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x802352DC: bne         $v0, $zero, L_80235394
    if (ctx->r2 != 0) {
        // 0x802352E0: nop
    
            goto L_80235394;
    }
    // 0x802352E0: nop

    // 0x802352E4: jal         0x8003E934
    // 0x802352E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_4;
    // 0x802352E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x802352EC: lhu         $v1, 0xE2($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XE2);
    // 0x802352F0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x802352F4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x802352F8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802352FC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80235300: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80235304: bltzl       $v0, L_80235320
    if (SIGNED(ctx->r2) < 0) {
        // 0x80235308: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_80235320;
    }
    goto skip_1;
    // 0x80235308: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_1:
    // 0x8023530C: slti        $v0, $v0, 0xB
    ctx->r2 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x80235310: beq         $v0, $zero, L_80235330
    if (ctx->r2 == 0) {
        // 0x80235314: sll         $v0, $v1, 16
        ctx->r2 = S32(ctx->r3 << 16);
            goto L_80235330;
    }
    // 0x80235314: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x80235318: j           L_80235354
    // 0x8023531C: sh          $a0, 0x12($s1)
    MEM_H(0X12, ctx->r17) = ctx->r4;
        goto L_80235354;
    // 0x8023531C: sh          $a0, 0x12($s1)
    MEM_H(0X12, ctx->r17) = ctx->r4;
L_80235320:
    // 0x80235320: slti        $v0, $v0, 0xB
    ctx->r2 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x80235324: bnel        $v0, $zero, L_80235354
    if (ctx->r2 != 0) {
        // 0x80235328: sh          $a0, 0x12($s1)
        MEM_H(0X12, ctx->r17) = ctx->r4;
            goto L_80235354;
    }
    goto skip_2;
    // 0x80235328: sh          $a0, 0x12($s1)
    MEM_H(0X12, ctx->r17) = ctx->r4;
    skip_2:
    // 0x8023532C: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
L_80235330:
    // 0x80235330: bltz        $v0, L_80235348
    if (SIGNED(ctx->r2) < 0) {
        // 0x80235334: nop
    
            goto L_80235348;
    }
    // 0x80235334: nop

    // 0x80235338: lhu         $v0, 0x12($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X12);
    // 0x8023533C: addiu       $v0, $v0, 0xA
    ctx->r2 = ADD32(ctx->r2, 0XA);
    // 0x80235340: j           L_80235354
    // 0x80235344: sh          $v0, 0x12($s1)
    MEM_H(0X12, ctx->r17) = ctx->r2;
        goto L_80235354;
    // 0x80235344: sh          $v0, 0x12($s1)
    MEM_H(0X12, ctx->r17) = ctx->r2;
L_80235348:
    // 0x80235348: lhu         $v0, 0x12($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X12);
    // 0x8023534C: addiu       $v0, $v0, -0xA
    ctx->r2 = ADD32(ctx->r2, -0XA);
    // 0x80235350: sh          $v0, 0x12($s1)
    MEM_H(0X12, ctx->r17) = ctx->r2;
L_80235354:
    // 0x80235354: jal         0x800324B4
    // 0x80235358: lh          $a0, 0x10($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X10);
    func_800324B4_D8B4(rdram, ctx);
        goto after_5;
    // 0x80235358: lh          $a0, 0x10($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X10);
    after_5:
    // 0x8023535C: lh          $a2, 0x12($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X12);
    // 0x80235360: lh          $v1, 0x14($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X14);
    // 0x80235364: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80235368: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8023536C: addu        $a2, $a2, $v1
    ctx->r6 = ADD32(ctx->r6, ctx->r3);
    // 0x80235370: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x80235374: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x80235378: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023537C: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80235380: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80235384: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x80235388: addu        $a2, $a2, $v1
    ctx->r6 = ADD32(ctx->r6, ctx->r3);
    // 0x8023538C: jal         0x8004DD04
    // 0x80235390: sw          $a2, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r6;
    func_8004DD04_29104(rdram, ctx);
        goto after_6;
    // 0x80235390: sw          $a2, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r6;
    after_6:
L_80235394:
    // 0x80235394: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80235398: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8023539C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802353A0: jr          $ra
    // 0x802353A4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802353A4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022AE34_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AE34: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022AE38: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022AE3C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022AE40: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022AE44: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022AE48: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022AE4C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022AE50: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8022AE54: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8022AE58: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x8022AE5C: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x8022AE60: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
    // 0x8022AE64: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022AE68: jal         0x8004D5D4
    // 0x8022AE6C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022AE6C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022AE70: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022AE74: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022AE78: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x8022AE7C: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022AE80: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022AE84: andi        $v1, $v1, 0x20
    ctx->r3 = ctx->r3 & 0X20;
    // 0x8022AE88: beq         $v1, $zero, L_8022AE98
    if (ctx->r3 == 0) {
        // 0x8022AE8C: sh          $v0, 0x158($s0)
        MEM_H(0X158, ctx->r16) = ctx->r2;
            goto L_8022AE98;
    }
    // 0x8022AE8C: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022AE90: j           L_8022AEA0
    // 0x8022AE94: sh          $zero, 0x328($s0)
    MEM_H(0X328, ctx->r16) = 0;
        goto L_8022AEA0;
    // 0x8022AE94: sh          $zero, 0x328($s0)
    MEM_H(0X328, ctx->r16) = 0;
L_8022AE98:
    // 0x8022AE98: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x8022AE9C: sh          $v0, 0x328($s0)
    MEM_H(0X328, ctx->r16) = ctx->r2;
L_8022AEA0:
    // 0x8022AEA0: sw          $zero, 0x4($s1)
    MEM_W(0X4, ctx->r17) = 0;
    // 0x8022AEA4: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x8022AEA8: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8022AEAC: beq         $v0, $zero, L_8022AEB8
    if (ctx->r2 == 0) {
        // 0x8022AEB0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022AEB8;
    }
    // 0x8022AEB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022AEB4: sh          $v0, 0x6($s1)
    MEM_H(0X6, ctx->r17) = ctx->r2;
L_8022AEB8:
    // 0x8022AEB8: sw          $zero, 0x8($s1)
    MEM_W(0X8, ctx->r17) = 0;
    // 0x8022AEBC: sw          $zero, 0x14($s1)
    MEM_W(0X14, ctx->r17) = 0;
    // 0x8022AEC0: sw          $zero, 0x18($s1)
    MEM_W(0X18, ctx->r17) = 0;
    // 0x8022AEC4: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x8022AEC8: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x8022AECC: lw          $v0, 0x298($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X298);
    // 0x8022AED0: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022AED4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022AED8: lh          $v0, 0x6($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X6);
    // 0x8022AEDC: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x8022AEE0: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022AEE4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022AEE8: lbu         $a1, 0xF($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0XF);
    // 0x8022AEEC: addiu       $a0, $s1, 0x24
    ctx->r4 = ADD32(ctx->r17, 0X24);
    // 0x8022AEF0: jal         0x800540BC
    // 0x8022AEF4: addiu       $a2, $zero, -0x60
    ctx->r6 = ADD32(0, -0X60);
    func_800540BC_2F4BC(rdram, ctx);
        goto after_1;
    // 0x8022AEF4: addiu       $a2, $zero, -0x60
    ctx->r6 = ADD32(0, -0X60);
    after_1:
    // 0x8022AEF8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022AEFC: sh          $zero, 0x34($s1)
    MEM_H(0X34, ctx->r17) = 0;
    // 0x8022AF00: sh          $zero, 0x36($s1)
    MEM_H(0X36, ctx->r17) = 0;
    // 0x8022AF04: sh          $v0, 0x38($s1)
    MEM_H(0X38, ctx->r17) = ctx->r2;
    // 0x8022AF08: lhu         $v0, 0x1A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1A);
    // 0x8022AF0C: sw          $zero, 0x40($s1)
    MEM_W(0X40, ctx->r17) = 0;
    // 0x8022AF10: sh          $zero, 0x44($s1)
    MEM_H(0X44, ctx->r17) = 0;
    // 0x8022AF14: sw          $zero, 0x48($s1)
    MEM_W(0X48, ctx->r17) = 0;
    // 0x8022AF18: sh          $v0, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r2;
    // 0x8022AF1C: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x8022AF20: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x8022AF24: lw          $v0, 0x298($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X298);
    // 0x8022AF28: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022AF2C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022AF30: lh          $v0, 0x6($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X6);
    // 0x8022AF34: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x8022AF38: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022AF3C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022AF40: lbu         $v1, 0x8($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X8);
    // 0x8022AF44: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x8022AF48: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x8022AF4C: andi        $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 & 0X7F;
    // 0x8022AF50: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022AF54: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022AF58: mflo        $v1
    ctx->r3 = lo;
    // 0x8022AF5C: lbu         $a0, 0x3($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X3);
    // 0x8022AF60: andi        $a0, $a0, 0x40
    ctx->r4 = ctx->r4 & 0X40;
    // 0x8022AF64: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x8022AF68: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022AF6C: addiu       $v0, $v0, -0x64F8
    ctx->r2 = ADD32(ctx->r2, -0X64F8);
    // 0x8022AF70: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x8022AF74: sh          $v1, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r3;
    // 0x8022AF78: sh          $v1, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r3;
    // 0x8022AF7C: beq         $a0, $zero, L_8022AFBC
    if (ctx->r4 == 0) {
        // 0x8022AF80: sh          $v1, 0xB2($s0)
        MEM_H(0XB2, ctx->r16) = ctx->r3;
            goto L_8022AFBC;
    }
    // 0x8022AF80: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    // 0x8022AF84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022AF88: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x8022AF8C: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x8022AF90: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022AF94: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022AF98: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    // 0x8022AF9C: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x8022AFA0: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    // 0x8022AFA4: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8022AFA8: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    // 0x8022AFAC: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022AFB0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022AFB4: j           L_8022AFEC
    // 0x8022AFB8: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
        goto L_8022AFEC;
    // 0x8022AFB8: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_8022AFBC:
    // 0x8022AFBC: jal         0x8003E934
    // 0x8022AFC0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_2;
    // 0x8022AFC0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022AFC4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022AFC8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022AFCC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022AFD0: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022AFD4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022AFD8: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022AFDC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022AFE0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022AFE4: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022AFE8: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8022AFEC:
    // 0x8022AFEC: jal         0x80050294
    // 0x8022AFF0: nop

    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x8022AFF0: nop

    after_3:
    // 0x8022AFF4: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022AFF8: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022AFFC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022B000: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022B004: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B008: jr          $ra
    // 0x8022B00C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022B00C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80236150_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236150: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80236154: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80236158: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8023615C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80236160: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80236164: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80236168: lw          $v0, -0x5D68($at)
    ctx->r2 = MEM_W(ctx->r1, -0X5D68);
    // 0x8023616C: jalr        $v0
    // 0x80236170: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80236170: nop

    after_0:
    // 0x80236174: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80236178: jr          $ra
    // 0x8023617C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023617C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80233C14_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233C14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80233C18: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80233C1C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80233C20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80233C24: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80233C28: bne         $v0, $zero, L_80233C58
    if (ctx->r2 != 0) {
        // 0x80233C2C: nop
    
            goto L_80233C58;
    }
    // 0x80233C2C: nop

    // 0x80233C30: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80233C34: lbu         $v0, -0x7388($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7388);
    // 0x80233C38: bne         $v0, $zero, L_80233C88
    if (ctx->r2 != 0) {
        // 0x80233C3C: nop
    
            goto L_80233C88;
    }
    // 0x80233C3C: nop

    // 0x80233C40: jal         0x80036B58
    // 0x80233C44: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_80036B58_11F58(rdram, ctx);
        goto after_0;
    // 0x80233C44: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_0:
    // 0x80233C48: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80233C4C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80233C50: j           L_80233C88
    // 0x80233C54: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80233C88;
    // 0x80233C54: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80233C58:
    // 0x80233C58: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80233C5C: lbu         $v0, -0x7388($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7388);
    // 0x80233C60: bne         $v0, $zero, L_80233C88
    if (ctx->r2 != 0) {
        // 0x80233C64: nop
    
            goto L_80233C88;
    }
    // 0x80233C64: nop

    // 0x80233C68: jal         0x8006036C
    // 0x80233C6C: addiu       $a0, $zero, 0x50
    ctx->r4 = ADD32(0, 0X50);
    func_8006036C_3B76C(rdram, ctx);
        goto after_1;
    // 0x80233C6C: addiu       $a0, $zero, 0x50
    ctx->r4 = ADD32(0, 0X50);
    after_1:
    // 0x80233C70: addiu       $a0, $zero, 0x27
    ctx->r4 = ADD32(0, 0X27);
    // 0x80233C74: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80233C78: jal         0x8002A2F8
    // 0x80233C7C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_2;
    // 0x80233C7C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x80233C80: jal         0x8004F488
    // 0x80233C84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F488_2A888(rdram, ctx);
        goto after_3;
    // 0x80233C84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
L_80233C88:
    // 0x80233C88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80233C8C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80233C90: jr          $ra
    // 0x80233C94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80233C94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80233C98: nop

    // 0x80233C9C: nop

;}
RECOMP_FUNC void func_802371F8_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802371F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802371FC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80237200: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80237204: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80237208: jal         0x8006033C
    // 0x8023720C: addiu       $a0, $zero, 0x531
    ctx->r4 = ADD32(0, 0X531);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8023720C: addiu       $a0, $zero, 0x531
    ctx->r4 = ADD32(0, 0X531);
    after_0:
    // 0x80237210: bne         $v0, $zero, L_80237238
    if (ctx->r2 != 0) {
        // 0x80237214: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80237238;
    }
    // 0x80237214: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237218: jal         0x8006033C
    // 0x8023721C: addiu       $a0, $zero, 0x532
    ctx->r4 = ADD32(0, 0X532);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x8023721C: addiu       $a0, $zero, 0x532
    ctx->r4 = ADD32(0, 0X532);
    after_1:
    // 0x80237220: bne         $v0, $zero, L_80237238
    if (ctx->r2 != 0) {
        // 0x80237224: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80237238;
    }
    // 0x80237224: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237228: jal         0x8006033C
    // 0x8023722C: addiu       $a0, $zero, 0x533
    ctx->r4 = ADD32(0, 0X533);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x8023722C: addiu       $a0, $zero, 0x533
    ctx->r4 = ADD32(0, 0X533);
    after_2:
    // 0x80237230: beq         $v0, $zero, L_80237244
    if (ctx->r2 == 0) {
        // 0x80237234: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80237244;
    }
    // 0x80237234: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80237238:
    // 0x80237238: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x8023723C: j           L_80237248
    // 0x80237240: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80237248;
    // 0x80237240: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80237244:
    // 0x80237244: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80237248:
    // 0x80237248: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023724C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80237250: jr          $ra
    // 0x80237254: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80237254: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023597C_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023597C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80235980: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80235984: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80235988: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8023598C: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x80235990: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80235994: bne         $v1, $v0, L_802359D4
    if (ctx->r3 != ctx->r2) {
        // 0x80235998: lui         $v0, 0x2FF
        ctx->r2 = S32(0X2FF << 16);
            goto L_802359D4;
    }
    // 0x80235998: lui         $v0, 0x2FF
    ctx->r2 = S32(0X2FF << 16);
    // 0x8023599C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802359A0: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x802359A4: lh          $a2, 0x66($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X66);
    // 0x802359A8: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x802359AC: lhu         $v1, 0x54($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X54);
    // 0x802359B0: addiu       $a3, $zero, 0x200
    ctx->r7 = ADD32(0, 0X200);
    // 0x802359B4: addiu       $v0, $v0, 0x190
    ctx->r2 = ADD32(ctx->r2, 0X190);
    // 0x802359B8: addiu       $v1, $v1, 0x190
    ctx->r3 = ADD32(ctx->r3, 0X190);
    // 0x802359BC: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x802359C0: sh          $v1, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r3;
    // 0x802359C4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802359C8: jal         0x8004DBA0
    // 0x802359CC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_0;
    // 0x802359CC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_0:
    // 0x802359D0: lui         $v0, 0x2FF
    ctx->r2 = S32(0X2FF << 16);
L_802359D4:
    // 0x802359D4: lw          $v1, 0xE8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XE8);
    // 0x802359D8: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x802359DC: lui         $a0, 0x33
    ctx->r4 = S32(0X33 << 16);
    // 0x802359E0: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x802359E4: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x802359E8: beq         $v0, $zero, L_80235A3C
    if (ctx->r2 == 0) {
        // 0x802359EC: sw          $v1, 0xE8($s0)
        MEM_W(0XE8, ctx->r16) = ctx->r3;
            goto L_80235A3C;
    }
    // 0x802359EC: sw          $v1, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r3;
    // 0x802359F0: jal         0x8004F144
    // 0x802359F4: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_1;
    // 0x802359F4: nop

    after_1:
    // 0x802359F8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802359FC: beq         $v1, $zero, L_80235A28
    if (ctx->r3 == 0) {
        // 0x80235A00: addiu       $a1, $s0, 0x14
        ctx->r5 = ADD32(ctx->r16, 0X14);
            goto L_80235A28;
    }
    // 0x80235A00: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80235A04: addiu       $a0, $v1, 0x38
    ctx->r4 = ADD32(ctx->r3, 0X38);
    // 0x80235A08: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80235A0C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80235A10: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80235A14: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80235A18: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x80235A1C: addiu       $v0, $zero, 0x42
    ctx->r2 = ADD32(0, 0X42);
    // 0x80235A20: jal         0x8009A3B4
    // 0x80235A24: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80235A24: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    after_2:
L_80235A28:
    // 0x80235A28: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80235A2C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80235A30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235A34: jal         0x8007A1B8
    // 0x80235A38: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8007A1B8_555B8(rdram, ctx);
        goto after_3;
    // 0x80235A38: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_3:
L_80235A3C:
    // 0x80235A3C: jal         0x80040F30
    // 0x80235A40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_4;
    // 0x80235A40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80235A44: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80235A48: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80235A4C: jr          $ra
    // 0x80235A50: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80235A50: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80227564_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227564: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227568: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022756C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227570: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x80227574: addiu       $a0, $a0, -0x3BC8
    ctx->r4 = ADD32(ctx->r4, -0X3BC8);
    // 0x80227578: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022757C: lb          $v1, 0x0($a0)
    ctx->r3 = MEM_B(ctx->r4, 0X0);
    // 0x80227580: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80227584: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x80227588: xori        $v0, $v1, 0xE
    ctx->r2 = ctx->r3 ^ 0XE;
    // 0x8022758C: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80227590: xori        $v1, $v1, 0x14
    ctx->r3 = ctx->r3 ^ 0X14;
    // 0x80227594: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x80227598: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8022759C: bne         $v0, $zero, L_802275B8
    if (ctx->r2 != 0) {
        // 0x802275A0: lui         $v1, 0xFFFF
        ctx->r3 = S32(0XFFFF << 16);
            goto L_802275B8;
    }
    // 0x802275A0: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x802275A4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x802275A8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802275AC: lui         $v1, 0x1300
    ctx->r3 = S32(0X1300 << 16);
    // 0x802275B0: bne         $v0, $v1, L_80227648
    if (ctx->r2 != ctx->r3) {
        // 0x802275B4: nop
    
            goto L_80227648;
    }
    // 0x802275B4: nop

L_802275B8:
    // 0x802275B8: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x802275BC: lhu         $v1, 0x3A($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X3A);
    // 0x802275C0: lbu         $a0, 0xE($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XE);
    // 0x802275C4: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x802275C8: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x802275CC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802275D0: sh          $v1, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r3;
    // 0x802275D4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802275D8: lhu         $v0, 0x4DEA($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4DEA);
    // 0x802275DC: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x802275E0: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x802275E4: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x802275E8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802275EC: sh          $v0, 0x4DEA($at)
    MEM_H(0X4DEA, ctx->r1) = ctx->r2;
    // 0x802275F0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802275F4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802275F8: sw          $v0, 0x4DDC($at)
    MEM_W(0X4DDC, ctx->r1) = ctx->r2;
    // 0x802275FC: lh          $v0, 0x3A($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X3A);
    // 0x80227600: lw          $v1, 0x2C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X2C);
    // 0x80227604: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80227608: bne         $v0, $zero, L_802277D8
    if (ctx->r2 != 0) {
        // 0x8022760C: nop
    
            goto L_802277D8;
    }
    // 0x8022760C: nop

    // 0x80227610: jal         0x80070050
    // 0x80227614: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    func_80070050_4B450(rdram, ctx);
        goto after_0;
    // 0x80227614: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    after_0:
    // 0x80227618: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022761C: lbu         $v0, 0x4A6D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4A6D);
    // 0x80227620: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x80227624: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227628: sb          $v0, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r2;
    // 0x8022762C: lw          $v0, 0x2C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X2C);
    // 0x80227630: addiu       $a0, $zero, 0x177
    ctx->r4 = ADD32(0, 0X177);
    // 0x80227634: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    // 0x80227638: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022763C: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80227640: j           L_802277D0
    // 0x80227644: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
        goto L_802277D0;
    // 0x80227644: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
L_80227648:
    // 0x80227648: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x8022764C: andi        $v0, $v0, 0xF0
    ctx->r2 = ctx->r2 & 0XF0;
    // 0x80227650: bne         $v0, $zero, L_80227714
    if (ctx->r2 != 0) {
        // 0x80227654: addiu       $v0, $zero, 0x7FF
        ctx->r2 = ADD32(0, 0X7FF);
            goto L_80227714;
    }
    // 0x80227654: addiu       $v0, $zero, 0x7FF
    ctx->r2 = ADD32(0, 0X7FF);
    // 0x80227658: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x8022765C: lhu         $v1, 0x3A($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X3A);
    // 0x80227660: lbu         $a0, 0xE($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XE);
    // 0x80227664: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80227668: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8022766C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80227670: sh          $v1, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r3;
    // 0x80227674: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80227678: lhu         $v0, 0x4DEA($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4DEA);
    // 0x8022767C: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x80227680: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80227684: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80227688: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022768C: sh          $v0, 0x4DEA($at)
    MEM_H(0X4DEA, ctx->r1) = ctx->r2;
    // 0x80227690: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227694: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227698: sw          $v0, 0x4DDC($at)
    MEM_W(0X4DDC, ctx->r1) = ctx->r2;
    // 0x8022769C: lh          $v0, 0x3A($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X3A);
    // 0x802276A0: lw          $v1, 0x2C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X2C);
    // 0x802276A4: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x802276A8: bne         $v0, $zero, L_802277D8
    if (ctx->r2 != 0) {
        // 0x802276AC: nop
    
            goto L_802277D8;
    }
    // 0x802276AC: nop

    // 0x802276B0: jal         0x80070050
    // 0x802276B4: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    func_80070050_4B450(rdram, ctx);
        goto after_1;
    // 0x802276B4: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    after_1:
    // 0x802276B8: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x802276BC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802276C0: lbu         $v0, 0x4A6D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4A6D);
    // 0x802276C4: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x802276C8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802276CC: sb          $v0, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r2;
    // 0x802276D0: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x802276D4: addiu       $a0, $zero, 0x177
    ctx->r4 = ADD32(0, 0X177);
    // 0x802276D8: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    // 0x802276DC: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x802276E0: andi        $v0, $v0, 0xF0
    ctx->r2 = ctx->r2 & 0XF0;
    // 0x802276E4: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x802276E8: jal         0x8002A33C
    // 0x802276EC: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x802276EC: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
    after_2:
    // 0x802276F0: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x802276F4: bne         $v0, $zero, L_80227708
    if (ctx->r2 != 0) {
        // 0x802276F8: nop
    
            goto L_80227708;
    }
    // 0x802276F8: nop

    // 0x802276FC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80227700: j           L_802277D8
    // 0x80227704: sh          $zero, -0x3A82($at)
    MEM_H(-0X3A82, ctx->r1) = 0;
        goto L_802277D8;
    // 0x80227704: sh          $zero, -0x3A82($at)
    MEM_H(-0X3A82, ctx->r1) = 0;
L_80227708:
    // 0x80227708: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8022770C: j           L_802277D8
    // 0x80227710: sh          $zero, -0x3A80($at)
    MEM_H(-0X3A80, ctx->r1) = 0;
        goto L_802277D8;
    // 0x80227710: sh          $zero, -0x3A80($at)
    MEM_H(-0X3A80, ctx->r1) = 0;
L_80227714:
    // 0x80227714: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80227718: lh          $v1, 0x4A06($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X4A06);
    // 0x8022771C: bne         $v1, $v0, L_80227768
    if (ctx->r3 != ctx->r2) {
        // 0x80227720: nop
    
            goto L_80227768;
    }
    // 0x80227720: nop

    // 0x80227724: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x80227728: lhu         $v1, 0x3A($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X3A);
    // 0x8022772C: lbu         $a0, 0xE($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XE);
    // 0x80227730: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80227734: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80227738: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022773C: sh          $v1, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r3;
    // 0x80227740: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80227744: lhu         $v0, 0x4DEA($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4DEA);
    // 0x80227748: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x8022774C: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80227750: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80227754: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227758: sh          $v0, 0x4DEA($at)
    MEM_H(0X4DEA, ctx->r1) = ctx->r2;
    // 0x8022775C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227760: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227764: sw          $v0, 0x4DDC($at)
    MEM_W(0X4DDC, ctx->r1) = ctx->r2;
L_80227768:
    // 0x80227768: lh          $v0, 0x3A($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X3A);
    // 0x8022776C: lw          $v1, 0x2C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X2C);
    // 0x80227770: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80227774: bltzl       $v0, L_8022777C
    if (SIGNED(ctx->r2) < 0) {
        // 0x80227778: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_8022777C;
    }
    goto skip_0;
    // 0x80227778: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_0:
L_8022777C:
    // 0x8022777C: slti        $v0, $v0, 0x460
    ctx->r2 = SIGNED(ctx->r2) < 0X460 ? 1 : 0;
    // 0x80227780: bne         $v0, $zero, L_802277D8
    if (ctx->r2 != 0) {
        // 0x80227784: nop
    
            goto L_802277D8;
    }
    // 0x80227784: nop

    // 0x80227788: jal         0x80070050
    // 0x8022778C: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    func_80070050_4B450(rdram, ctx);
        goto after_3;
    // 0x8022778C: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    after_3:
    // 0x80227790: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80227794: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80227798: lbu         $v0, 0x4A6D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4A6D);
    // 0x8022779C: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x802277A0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802277A4: sb          $v0, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r2;
    // 0x802277A8: lhu         $v0, 0x3A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X3A);
    // 0x802277AC: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x802277B0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x802277B4: sh          $v0, -0x3A7E($at)
    MEM_H(-0X3A7E, ctx->r1) = ctx->r2;
    // 0x802277B8: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x802277BC: addiu       $a0, $zero, 0x177
    ctx->r4 = ADD32(0, 0X177);
    // 0x802277C0: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    // 0x802277C4: andi        $v0, $v0, 0xF0
    ctx->r2 = ctx->r2 & 0XF0;
    // 0x802277C8: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x802277CC: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_802277D0:
    // 0x802277D0: jal         0x8002A33C
    // 0x802277D4: nop

    func_8002A33C_573C(rdram, ctx);
        goto after_4;
    // 0x802277D4: nop

    after_4:
L_802277D8:
    // 0x802277D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802277DC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802277E0: jr          $ra
    // 0x802277E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802277E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227F4C_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227F4C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227F50: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80227F54: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227F58: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80227F5C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80227F60: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    // 0x80227F64: sh          $zero, 0x30($s0)
    MEM_H(0X30, ctx->r16) = 0;
    // 0x80227F68: sh          $zero, 0x32($s0)
    MEM_H(0X32, ctx->r16) = 0;
    // 0x80227F6C: sh          $zero, 0x34($s0)
    MEM_H(0X34, ctx->r16) = 0;
    // 0x80227F70: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x80227F74: jal         0x8004D5D4
    // 0x80227F78: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80227F78: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x80227F7C: lui         $v1, 0x2C80
    ctx->r3 = S32(0X2C80 << 16);
    // 0x80227F80: lb          $a0, 0xC($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XC);
    // 0x80227F84: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x80227F88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227F8C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80227F90: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x80227F94: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x80227F98: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x80227F9C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80227FA0: sw          $v1, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r3;
    // 0x80227FA4: bne         $a0, $zero, L_80227FE0
    if (ctx->r4 != 0) {
        // 0x80227FA8: sb          $v0, 0xE($s0)
        MEM_B(0XE, ctx->r16) = ctx->r2;
            goto L_80227FE0;
    }
    // 0x80227FA8: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x80227FAC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80227FB0: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x80227FB4: addiu       $v0, $zero, -0x900
    ctx->r2 = ADD32(0, -0X900);
    // 0x80227FB8: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x80227FBC: addiu       $v0, $zero, -0x12B
    ctx->r2 = ADD32(0, -0X12B);
    // 0x80227FC0: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x80227FC4: addiu       $v0, $zero, -0x2300
    ctx->r2 = ADD32(0, -0X2300);
    // 0x80227FC8: jal         0x8003E768
    // 0x80227FCC: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    func_8003E768_19B68(rdram, ctx);
        goto after_1;
    // 0x80227FCC: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    after_1:
    // 0x80227FD0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80227FD4: lui         $a1, 0x6
    ctx->r5 = S32(0X6 << 16);
    // 0x80227FD8: j           L_80228010
    // 0x80227FDC: ori         $a1, $a1, 0x1302
    ctx->r5 = ctx->r5 | 0X1302;
        goto L_80228010;
    // 0x80227FDC: ori         $a1, $a1, 0x1302
    ctx->r5 = ctx->r5 | 0X1302;
L_80227FE0:
    // 0x80227FE0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80227FE4: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x80227FE8: addiu       $v0, $zero, -0x1700
    ctx->r2 = ADD32(0, -0X1700);
    // 0x80227FEC: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x80227FF0: addiu       $v0, $zero, -0x2AB
    ctx->r2 = ADD32(0, -0X2AB);
    // 0x80227FF4: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x80227FF8: addiu       $v0, $zero, -0x2300
    ctx->r2 = ADD32(0, -0X2300);
    // 0x80227FFC: jal         0x8003E768
    // 0x80228000: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    func_8003E768_19B68(rdram, ctx);
        goto after_2;
    // 0x80228000: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    after_2:
    // 0x80228004: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80228008: lui         $a1, 0x6
    ctx->r5 = S32(0X6 << 16);
    // 0x8022800C: ori         $a1, $a1, 0x1402
    ctx->r5 = ctx->r5 | 0X1402;
L_80228010:
    // 0x80228010: jal         0x80071ACC
    // 0x80228014: nop

    func_80071ACC_4CECC(rdram, ctx);
        goto after_3;
    // 0x80228014: nop

    after_3:
    // 0x80228018: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022801C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80228020: jr          $ra
    // 0x80228024: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80228024: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80233848_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233848: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023384C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80233850: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80233854: jal         0x80233BD0
    // 0x80233858: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_80233BD0_ovl22(rdram, ctx);
        goto after_0;
    // 0x80233858: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x8023385C: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x80233860: beq         $v0, $zero, L_802338A4
    if (ctx->r2 == 0) {
        // 0x80233864: addiu       $a0, $zero, 0x19A
        ctx->r4 = ADD32(0, 0X19A);
            goto L_802338A4;
    }
    // 0x80233864: addiu       $a0, $zero, 0x19A
    ctx->r4 = ADD32(0, 0X19A);
    // 0x80233868: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8023386C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80233870: addiu       $v0, $zero, 0x300
    ctx->r2 = ADD32(0, 0X300);
    // 0x80233874: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80233878: addiu       $v0, $zero, -0x480
    ctx->r2 = ADD32(0, -0X480);
    // 0x8023387C: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x80233880: addiu       $v0, $zero, 0x48
    ctx->r2 = ADD32(0, 0X48);
    // 0x80233884: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
    // 0x80233888: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023388C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80233890: jal         0x8002A33C
    // 0x80233894: sb          $v0, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x80233894: sb          $v0, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r2;
    after_1:
    // 0x80233898: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023389C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802338A0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802338A4:
    // 0x802338A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802338A8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802338AC: jr          $ra
    // 0x802338B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802338B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022F27C_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F27C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022F280: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022F284: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F288: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022F28C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022F290: lh          $a3, 0x382($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X382);
    // 0x8022F294: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022F298: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022F29C: jal         0x8004F820
    // 0x8022F2A0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022F2A0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x8022F2A4: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022F2A8: lb          $a0, 0xA7($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XA7);
    // 0x8022F2AC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022F2B0: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022F2B4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022F2B8: bne         $a0, $v0, L_8022F2C4
    if (ctx->r4 != ctx->r2) {
        // 0x8022F2BC: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8022F2C4;
    }
    // 0x8022F2BC: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022F2C0: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_8022F2C4:
    // 0x8022F2C4: lbu         $v0, 0x64($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X64);
    // 0x8022F2C8: lbu         $v1, 0x65($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X65);
    // 0x8022F2CC: lbu         $a0, 0x66($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X66);
    // 0x8022F2D0: lbu         $a1, 0x66($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X66);
    // 0x8022F2D4: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x8022F2D8: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x8022F2DC: andi        $a0, $a0, 0x1F
    ctx->r4 = ctx->r4 & 0X1F;
    // 0x8022F2E0: sll         $v1, $v1, 5
    ctx->r3 = S32(ctx->r3 << 5);
    // 0x8022F2E4: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8022F2E8: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    // 0x8022F2EC: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x8022F2F0: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022F2F4: lhu         $a0, 0x15E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X15E);
    // 0x8022F2F8: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8022F2FC: sb          $a1, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r5;
    // 0x8022F300: lb          $v1, 0x66($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X66);
    // 0x8022F304: addiu       $v0, $zero, -0x8000
    ctx->r2 = ADD32(0, -0X8000);
    // 0x8022F308: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x8022F30C: slti        $v1, $v1, 0x10
    ctx->r3 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
    // 0x8022F310: bne         $v1, $zero, L_8022F34C
    if (ctx->r3 != 0) {
        // 0x8022F314: sh          $v0, 0x15E($s0)
        MEM_H(0X15E, ctx->r16) = ctx->r2;
            goto L_8022F34C;
    }
    // 0x8022F314: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022F318: lb          $v1, 0x64($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X64);
    // 0x8022F31C: andi        $v0, $v0, 0x7FFF
    ctx->r2 = ctx->r2 & 0X7FFF;
    // 0x8022F320: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022F324: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022F328: sb          $v0, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r2;
    // 0x8022F32C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022F330: beq         $v1, $v0, L_8022F34C
    if (ctx->r3 == ctx->r2) {
        // 0x8022F334: addu        $a0, $v1, $zero
        ctx->r4 = ADD32(ctx->r3, 0);
            goto L_8022F34C;
    }
    // 0x8022F334: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x8022F338: lbu         $v0, 0x65($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X65);
    // 0x8022F33C: addiu       $v1, $a0, 0x4
    ctx->r3 = ADD32(ctx->r4, 0X4);
    // 0x8022F340: sb          $v1, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r3;
    // 0x8022F344: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8022F348: sb          $v0, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r2;
L_8022F34C:
    // 0x8022F34C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022F350: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022F354: jr          $ra
    // 0x8022F358: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022F358: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80229C94_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229C94: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80229C98: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80229C9C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80229CA0: lh          $v0, 0x24($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X24);
    // 0x80229CA4: bgtz        $v0, L_80229CBC
    if (SIGNED(ctx->r2) > 0) {
        // 0x80229CA8: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_80229CBC;
    }
    // 0x80229CA8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80229CAC: jal         0x8004F5C4
    // 0x80229CB0: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x80229CB0: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    after_0:
    // 0x80229CB4: j           L_80229CD4
    // 0x80229CB8: nop

        goto L_80229CD4;
    // 0x80229CB8: nop

L_80229CBC:
    // 0x80229CBC: lhu         $v0, 0x26($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X26);
    // 0x80229CC0: lw          $v1, 0x18($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X18);
    // 0x80229CC4: addiu       $a0, $a0, -0x8
    ctx->r4 = ADD32(ctx->r4, -0X8);
    // 0x80229CC8: sh          $a0, 0x24($a1)
    MEM_H(0X24, ctx->r5) = ctx->r4;
    // 0x80229CCC: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80229CD0: sw          $v1, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r3;
L_80229CD4:
    // 0x80229CD4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80229CD8: jr          $ra
    // 0x80229CDC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80229CDC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80229D50_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229D50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229D54: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229D58: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229D5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80229D60: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80229D64: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80229D68: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80229D6C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80229D70: lw          $v0, -0x65DC($at)
    ctx->r2 = MEM_W(ctx->r1, -0X65DC);
    // 0x80229D74: jalr        $v0
    // 0x80229D78: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80229D78: nop

    after_0:
    // 0x80229D7C: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80229D80: beq         $v0, $zero, L_80229DD4
    if (ctx->r2 == 0) {
        // 0x80229D84: nop
    
            goto L_80229DD4;
    }
    // 0x80229D84: nop

    // 0x80229D88: jal         0x8003B878
    // 0x80229D8C: nop

    func_8003B878_16C78(rdram, ctx);
        goto after_1;
    // 0x80229D8C: nop

    after_1:
    // 0x80229D90: lw          $v1, 0x18($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X18);
    // 0x80229D94: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
    // 0x80229D98: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x80229D9C: sw          $v1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r3;
    // 0x80229DA0: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x80229DA4: sw          $v1, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r3;
    // 0x80229DA8: lw          $v1, 0x34($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X34);
    // 0x80229DAC: sw          $v1, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r3;
    // 0x80229DB0: lw          $v1, 0x38($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X38);
    // 0x80229DB4: sw          $v1, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r3;
    // 0x80229DB8: lw          $v1, 0x3C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X3C);
    // 0x80229DBC: andi        $a0, $v1, 0xFFFF
    ctx->r4 = ctx->r3 & 0XFFFF;
    // 0x80229DC0: srl         $v1, $v1, 16
    ctx->r3 = S32(U32(ctx->r3) >> 16);
    // 0x80229DC4: sw          $a0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r4;
    // 0x80229DC8: sw          $v1, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r3;
    // 0x80229DCC: lhu         $v1, 0x24($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X24);
    // 0x80229DD0: sw          $v1, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r3;
L_80229DD4:
    // 0x80229DD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80229DD8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229DDC: jr          $ra
    // 0x80229DE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229DE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225BE0_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225BE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225BE4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225BE8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225BEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225BF0: lbu         $v1, 0x5($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X5);
    // 0x80225BF4: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x80225BF8: beq         $v0, $zero, L_80225D7C
    if (ctx->r2 == 0) {
        // 0x80225BFC: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80225D7C;
    }
    // 0x80225BFC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80225C00: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80225C04: addu        $at, $at, $v0
    gpr jr_addend_80225C0C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80225C08: lw          $v0, -0x5C98($at)
    ctx->r2 = ADD32(ctx->r1, -0X5C98);
    // 0x80225C0C: jr          $v0
    // 0x80225C10: nop

    switch (jr_addend_80225C0C >> 2) {
        case 0: goto L_80225C14; break;
        case 1: goto L_80225C3C; break;
        case 2: goto L_80225CDC; break;
        case 3: goto L_80225CFC; break;
        case 4: goto L_80225D1C; break;
        default: switch_error(__func__, 0x80225C0C, 0x8023A368);
    }
    // 0x80225C10: nop

L_80225C14:
    // 0x80225C14: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80225C18: jal         0x8006FF84
    // 0x80225C1C: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x80225C1C: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_0:
    // 0x80225C20: beq         $v0, $zero, L_80225D7C
    if (ctx->r2 == 0) {
        // 0x80225C24: addiu       $a0, $zero, 0x10
        ctx->r4 = ADD32(0, 0X10);
            goto L_80225D7C;
    }
    // 0x80225C24: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x80225C28: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80225C2C: jal         0x80036B58
    // 0x80225C30: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    func_80036B58_11F58(rdram, ctx);
        goto after_1;
    // 0x80225C30: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    after_1:
    // 0x80225C34: j           L_80225CCC
    // 0x80225C38: nop

        goto L_80225CCC;
    // 0x80225C38: nop

L_80225C3C:
    // 0x80225C3C: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80225C40: lbu         $v0, -0x7388($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7388);
    // 0x80225C44: bne         $v0, $zero, L_80225D7C
    if (ctx->r2 != 0) {
        // 0x80225C48: addiu       $a0, $zero, 0x10
        ctx->r4 = ADD32(0, 0X10);
            goto L_80225D7C;
    }
    // 0x80225C48: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x80225C4C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80225C50: addiu       $v1, $v1, 0x49B0
    ctx->r3 = ADD32(ctx->r3, 0X49B0);
    // 0x80225C54: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80225C58: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x80225C5C: andi        $v0, $v0, 0xFC
    ctx->r2 = ctx->r2 & 0XFC;
    // 0x80225C60: jal         0x8004CB2C
    // 0x80225C64: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_2;
    // 0x80225C64: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    after_2:
    // 0x80225C68: addiu       $a0, $zero, 0x56
    ctx->r4 = ADD32(0, 0X56);
    // 0x80225C6C: jal         0x8004CB2C
    // 0x80225C70: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_3;
    // 0x80225C70: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_3:
    // 0x80225C74: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    // 0x80225C78: jal         0x8004CB2C
    // 0x80225C7C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_4;
    // 0x80225C7C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_4:
    // 0x80225C80: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80225C84: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80225C88: jal         0x8005F6B4
    // 0x80225C8C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_5;
    // 0x80225C8C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x80225C90: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80225C94: addiu       $a0, $a0, -0x6E64
    ctx->r4 = ADD32(ctx->r4, -0X6E64);
    // 0x80225C98: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80225C9C: addiu       $v0, $v0, -0x6E50
    ctx->r2 = ADD32(ctx->r2, -0X6E50);
    // 0x80225CA0: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    // 0x80225CA4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80225CA8: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x80225CAC: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80225CB0: addiu       $v0, $v0, -0x6CD0
    ctx->r2 = ADD32(ctx->r2, -0X6CD0);
    // 0x80225CB4: jal         0x8005FA7C
    // 0x80225CB8: sw          $v0, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r2;
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_6;
    // 0x80225CB8: sw          $v0, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r2;
    after_6:
    // 0x80225CBC: jal         0x8005FB90
    // 0x80225CC0: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_7;
    // 0x80225CC0: nop

    after_7:
    // 0x80225CC4: jal         0x80060018
    // 0x80225CC8: nop

    func_80060018_3B418(rdram, ctx);
        goto after_8;
    // 0x80225CC8: nop

    after_8:
L_80225CCC:
    // 0x80225CCC: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x80225CD0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225CD4: j           L_80225D7C
    // 0x80225CD8: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
        goto L_80225D7C;
    // 0x80225CD8: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_80225CDC:
    // 0x80225CDC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80225CE0: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80225CE4: bne         $v0, $zero, L_80225D6C
    if (ctx->r2 != 0) {
        // 0x80225CE8: lui         $a0, 0x100
        ctx->r4 = S32(0X100 << 16);
            goto L_80225D6C;
    }
    // 0x80225CE8: lui         $a0, 0x100
    ctx->r4 = S32(0X100 << 16);
    // 0x80225CEC: jal         0x80036B1C
    // 0x80225CF0: ori         $a0, $a0, 0x3F01
    ctx->r4 = ctx->r4 | 0X3F01;
    func_80036B1C_11F1C(rdram, ctx);
        goto after_9;
    // 0x80225CF0: ori         $a0, $a0, 0x3F01
    ctx->r4 = ctx->r4 | 0X3F01;
    after_9:
    // 0x80225CF4: j           L_80225D0C
    // 0x80225CF8: nop

        goto L_80225D0C;
    // 0x80225CF8: nop

L_80225CFC:
    // 0x80225CFC: jal         0x80036B7C
    // 0x80225D00: nop

    func_80036B7C_11F7C(rdram, ctx);
        goto after_10;
    // 0x80225D00: nop

    after_10:
    // 0x80225D04: beq         $v0, $zero, L_80225D6C
    if (ctx->r2 == 0) {
        // 0x80225D08: nop
    
            goto L_80225D6C;
    }
    // 0x80225D08: nop

L_80225D0C:
    // 0x80225D0C: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x80225D10: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225D14: j           L_80225D6C
    // 0x80225D18: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
        goto L_80225D6C;
    // 0x80225D18: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_80225D1C:
    // 0x80225D1C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80225D20: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80225D24: bne         $v0, $zero, L_80225D6C
    if (ctx->r2 != 0) {
        // 0x80225D28: nop
    
            goto L_80225D6C;
    }
    // 0x80225D28: nop

    // 0x80225D2C: jal         0x80060170
    // 0x80225D30: nop

    func_80060170_3B570(rdram, ctx);
        goto after_11;
    // 0x80225D30: nop

    after_11:
    // 0x80225D34: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80225D38: addiu       $v0, $v0, -0x6E00
    ctx->r2 = ADD32(ctx->r2, -0X6E00);
    // 0x80225D3C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80225D40: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x80225D44: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80225D48: lbu         $a0, 0x4($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X4);
    // 0x80225D4C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80225D50: addiu       $v0, $v0, -0x6CC0
    ctx->r2 = ADD32(ctx->r2, -0X6CC0);
    // 0x80225D54: sw          $v0, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r2;
    // 0x80225D58: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x80225D5C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80225D60: andi        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 & 0X1;
    // 0x80225D64: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x80225D68: sb          $a0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r4;
L_80225D6C:
    // 0x80225D6C: jal         0x8005FB90
    // 0x80225D70: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_12;
    // 0x80225D70: nop

    after_12:
    // 0x80225D74: jal         0x80060018
    // 0x80225D78: nop

    func_80060018_3B418(rdram, ctx);
        goto after_13;
    // 0x80225D78: nop

    after_13:
L_80225D7C:
    // 0x80225D7C: jal         0x8006072C
    // 0x80225D80: nop

    func_8006072C_3BB2C(rdram, ctx);
        goto after_14;
    // 0x80225D80: nop

    after_14:
    // 0x80225D84: beq         $v0, $zero, L_80225D98
    if (ctx->r2 == 0) {
        // 0x80225D88: nop
    
            goto L_80225D98;
    }
    // 0x80225D88: nop

    // 0x80225D8C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80225D90: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80225D94: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80225D98:
    // 0x80225D98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225D9C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225DA0: jr          $ra
    // 0x80225DA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225DA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80233918_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233918: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023391C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80233920: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80233924: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80233928: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8023392C: jal         0x80233BD0
    // 0x80233930: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80233BD0_ovl22(rdram, ctx);
        goto after_0;
    // 0x80233930: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x80233934: lb          $v0, 0x74($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X74);
    // 0x80233938: bne         $v0, $zero, L_802339C4
    if (ctx->r2 != 0) {
        // 0x8023393C: addiu       $a0, $zero, 0x19B
        ctx->r4 = ADD32(0, 0X19B);
            goto L_802339C4;
    }
    // 0x8023393C: addiu       $a0, $zero, 0x19B
    ctx->r4 = ADD32(0, 0X19B);
    // 0x80233940: addiu       $s2, $s1, 0x14
    ctx->r18 = ADD32(ctx->r17, 0X14);
    // 0x80233944: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80233948: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8023394C: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x80233950: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80233954: sw          $zero, 0x574($s1)
    MEM_W(0X574, ctx->r17) = 0;
    // 0x80233958: sh          $zero, 0x568($s1)
    MEM_H(0X568, ctx->r17) = 0;
    // 0x8023395C: jal         0x8002A33C
    // 0x80233960: sh          $v0, 0x56A($s1)
    MEM_H(0X56A, ctx->r17) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x80233960: sh          $v0, 0x56A($s1)
    MEM_H(0X56A, ctx->r17) = ctx->r2;
    after_1:
    // 0x80233964: jal         0x8004F144
    // 0x80233968: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_2;
    // 0x80233968: nop

    after_2:
    // 0x8023396C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80233970: beq         $s0, $zero, L_802339B4
    if (ctx->r16 == 0) {
        // 0x80233974: addiu       $a0, $s0, 0x38
        ctx->r4 = ADD32(ctx->r16, 0X38);
            goto L_802339B4;
    }
    // 0x80233974: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x80233978: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8023397C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80233980: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80233984: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80233988: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8023398C: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80233990: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80233994: jal         0x8009A3B4
    // 0x80233998: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80233998: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    after_3:
    // 0x8023399C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802339A0: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x802339A4: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x802339A8: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x802339AC: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    // 0x802339B0: sw          $s0, 0x574($s1)
    MEM_W(0X574, ctx->r17) = ctx->r16;
L_802339B4:
    // 0x802339B4: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x802339B8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802339BC: j           L_802339E8
    // 0x802339C0: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_802339E8;
    // 0x802339C0: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_802339C4:
    // 0x802339C4: lh          $a1, 0x44($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X44);
    // 0x802339C8: lh          $a2, 0x46($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X46);
    // 0x802339CC: lh          $a3, 0x48($s1)
    ctx->r7 = MEM_H(ctx->r17, 0X48);
    // 0x802339D0: jal         0x8004DA90
    // 0x802339D4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_4;
    // 0x802339D4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x802339D8: lhu         $v0, 0x46($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X46);
    // 0x802339DC: lhu         $v1, 0x4E($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X4E);
    // 0x802339E0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802339E4: sh          $v0, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r2;
L_802339E8:
    // 0x802339E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802339EC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802339F0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802339F4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802339F8: jr          $ra
    // 0x802339FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802339FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023490C_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023490C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80234910: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80234914: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80234918: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x8023491C: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
    // 0x80234920: sb          $v0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r2;
    // 0x80234924: addiu       $v0, $a0, 0x14
    ctx->r2 = ADD32(ctx->r4, 0X14);
    // 0x80234928: addiu       $a0, $a1, 0x38
    ctx->r4 = ADD32(ctx->r5, 0X38);
    // 0x8023492C: sb          $zero, 0x3($a1)
    MEM_B(0X3, ctx->r5) = 0;
    // 0x80234930: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x80234934: jal         0x8009A3B4
    // 0x80234938: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80234938: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8023493C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80234940: jr          $ra
    // 0x80234944: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80234944: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80234948: nop

    // 0x8023494C: nop

;}
RECOMP_FUNC void func_802251B4_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802251B4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802251B8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802251BC: lui         $s0, 0x801C
    ctx->r16 = S32(0X801C << 16);
    // 0x802251C0: addiu       $s0, $s0, -0x3BC7
    ctx->r16 = ADD32(ctx->r16, -0X3BC7);
    // 0x802251C4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802251C8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802251CC: lb          $t0, 0x0($s0)
    ctx->r8 = MEM_B(ctx->r16, 0X0);
    // 0x802251D0: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x802251D4: lb          $a1, 0x47CD($a1)
    ctx->r5 = MEM_B(ctx->r5, 0X47CD);
    // 0x802251D8: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x802251DC: addiu       $a2, $a2, 0xCB4
    ctx->r6 = ADD32(ctx->r6, 0XCB4);
    // 0x802251E0: sll         $v0, $t0, 3
    ctx->r2 = S32(ctx->r8 << 3);
    // 0x802251E4: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x802251E8: lbu         $v1, 0x2($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X2);
    // 0x802251EC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802251F0: sh          $v1, 0x49AE($at)
    MEM_H(0X49AE, ctx->r1) = ctx->r3;
    // 0x802251F4: lbu         $a3, 0x3($v0)
    ctx->r7 = MEM_BU(ctx->r2, 0X3);
    // 0x802251F8: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x802251FC: sh          $a3, -0x7386($at)
    MEM_H(-0X7386, ctx->r1) = ctx->r7;
    // 0x80225200: lbu         $t1, 0x0($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X0);
    // 0x80225204: lui         $t2, 0x7FE9
    ctx->r10 = S32(0X7FE9 << 16);
    // 0x80225208: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x8022520C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225210: sb          $t1, 0x6B40($at)
    MEM_B(0X6B40, ctx->r1) = ctx->r9;
    // 0x80225214: lbu         $t3, 0x1($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X1);
    // 0x80225218: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x8022521C: ori         $t2, $t2, 0xC000
    ctx->r10 = ctx->r10 | 0XC000;
    // 0x80225220: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80225224: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225228: sb          $s1, 0x4DFE($at)
    MEM_B(0X4DFE, ctx->r1) = ctx->r17;
    // 0x8022522C: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80225230: addu        $a0, $a0, $t0
    ctx->r4 = ADD32(ctx->r4, ctx->r8);
    // 0x80225234: lw          $a0, -0x7440($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X7440);
    // 0x80225238: addiu       $a2, $a2, -0x4
    ctx->r6 = ADD32(ctx->r6, -0X4);
    // 0x8022523C: addu        $v1, $v1, $t1
    ctx->r3 = ADD32(ctx->r3, ctx->r9);
    // 0x80225240: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80225244: sb          $v1, -0x35BC($at)
    MEM_B(-0X35BC, ctx->r1) = ctx->r3;
    // 0x80225248: addu        $v0, $v0, $t2
    ctx->r2 = ADD32(ctx->r2, ctx->r10);
    // 0x8022524C: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
    // 0x80225250: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80225254: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80225258: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8022525C: sw          $v0, -0x35C0($at)
    MEM_W(-0X35C0, ctx->r1) = ctx->r2;
    // 0x80225260: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80225264: addiu       $v0, $v0, 0x5080
    ctx->r2 = ADD32(ctx->r2, 0X5080);
    // 0x80225268: addu        $a3, $a3, $t3
    ctx->r7 = ADD32(ctx->r7, ctx->r11);
    // 0x8022526C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80225270: sw          $v0, 0xB5C($at)
    MEM_W(0XB5C, ctx->r1) = ctx->r2;
    // 0x80225274: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80225278: sb          $t3, -0x39A6($at)
    MEM_B(-0X39A6, ctx->r1) = ctx->r11;
    // 0x8022527C: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80225280: sb          $a3, 0x53D4($at)
    MEM_B(0X53D4, ctx->r1) = ctx->r7;
    // 0x80225284: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80225288: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x8022528C: lw          $v0, -0x7234($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7234);
    // 0x80225290: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225294: jal         0x8004C790
    // 0x80225298: sw          $v0, 0x6B44($at)
    MEM_W(0X6B44, ctx->r1) = ctx->r2;
    func_8004C790_27B90(rdram, ctx);
        goto after_0;
    // 0x80225298: sw          $v0, 0x6B44($at)
    MEM_W(0X6B44, ctx->r1) = ctx->r2;
    after_0:
    // 0x8022529C: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
    // 0x802252A0: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x802252A4: addiu       $a0, $a0, -0x71E4
    ctx->r4 = ADD32(ctx->r4, -0X71E4);
    // 0x802252A8: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x802252AC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802252B0: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x802252B4: lw          $v1, -0x71B4($at)
    ctx->r3 = MEM_W(ctx->r1, -0X71B4);
    // 0x802252B8: sll         $a1, $v0, 1
    ctx->r5 = S32(ctx->r2 << 1);
    // 0x802252BC: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x802252C0: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x802252C4: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802252C8: addiu       $v0, $v0, -0x7220
    ctx->r2 = ADD32(ctx->r2, -0X7220);
    // 0x802252CC: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x802252D0: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x802252D4: jal         0x80054FB8
    // 0x802252D8: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    func_80054FB8_303B8(rdram, ctx);
        goto after_1;
    // 0x802252D8: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    after_1:
    // 0x802252DC: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
    // 0x802252E0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802252E4: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802252E8: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x802252EC: jal         0x8004A614
    // 0x802252F0: lw          $a0, 0x7EF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7EF0);
    func_8004A614_25A14(rdram, ctx);
        goto after_2;
    // 0x802252F0: lw          $a0, 0x7EF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7EF0);
    after_2:
    // 0x802252F4: jal         0x80225350
    // 0x802252F8: nop

    func_80225350_ovl22(rdram, ctx);
        goto after_3;
    // 0x802252F8: nop

    after_3:
    // 0x802252FC: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
    // 0x80225300: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80225304: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80225308: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022530C: lw          $v1, -0x7160($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7160);
    // 0x80225310: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80225314: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80225318: lw          $v0, -0x715C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X715C);
    // 0x8022531C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80225320: sb          $s1, 0xB62($at)
    MEM_B(0XB62, ctx->r1) = ctx->r17;
    // 0x80225324: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80225328: sw          $v1, -0x3690($at)
    MEM_W(-0X3690, ctx->r1) = ctx->r3;
    // 0x8022532C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80225330: sw          $v0, -0x368C($at)
    MEM_W(-0X368C, ctx->r1) = ctx->r2;
    // 0x80225334: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80225338: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022533C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225340: jr          $ra
    // 0x80225344: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80225344: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80225348: nop

    // 0x8022534C: nop

;}
RECOMP_FUNC void func_80231E04_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231E04: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80231E08: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80231E0C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80231E10: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80231E14: jal         0x8004EFE4
    // 0x80231E18: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_0;
    // 0x80231E18: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x80231E1C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80231E20: beq         $s0, $zero, L_80231E58
    if (ctx->r16 == 0) {
        // 0x80231E24: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80231E58;
    }
    // 0x80231E24: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80231E28: addiu       $a1, $s1, 0x188
    ctx->r5 = ADD32(ctx->r17, 0X188);
    // 0x80231E2C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80231E30: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80231E34: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x80231E38: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80231E3C: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80231E40: jal         0x8009A3B4
    // 0x80231E44: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80231E44: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    after_1:
    // 0x80231E48: lhu         $v0, 0x54($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X54);
    // 0x80231E4C: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x80231E50: lhu         $v0, 0x56($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X56);
    // 0x80231E54: sh          $v0, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r2;
L_80231E58:
    // 0x80231E58: addiu       $a0, $zero, 0x193
    ctx->r4 = ADD32(0, 0X193);
    // 0x80231E5C: jal         0x8002A33C
    // 0x80231E60: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x80231E60: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_2:
    // 0x80231E64: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80231E68: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80231E6C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231E70: jr          $ra
    // 0x80231E74: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80231E74: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802253DC_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802253DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802253E0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802253E4: lbu         $v1, 0x4($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X4);
    // 0x802253E8: beq         $v1, $zero, L_80225400
    if (ctx->r3 == 0) {
        // 0x802253EC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80225400;
    }
    // 0x802253EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802253F0: beq         $v1, $v0, L_80225418
    if (ctx->r3 == ctx->r2) {
        // 0x802253F4: nop
    
            goto L_80225418;
    }
    // 0x802253F4: nop

    // 0x802253F8: j           L_80225430
    // 0x802253FC: nop

        goto L_80225430;
    // 0x802253FC: nop

L_80225400:
    // 0x80225400: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80225404: sh          $zero, -0x3A84($at)
    MEM_H(-0X3A84, ctx->r1) = 0;
    // 0x80225408: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x8022540C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225410: j           L_80225430
    // 0x80225414: sb          $v0, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r2;
        goto L_80225430;
    // 0x80225414: sb          $v0, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r2;
L_80225418:
    // 0x80225418: jal         0x8006033C
    // 0x8022541C: addiu       $a0, $zero, 0x7B0
    ctx->r4 = ADD32(0, 0X7B0);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8022541C: addiu       $a0, $zero, 0x7B0
    ctx->r4 = ADD32(0, 0X7B0);
    after_0:
    // 0x80225420: beq         $v0, $zero, L_80225430
    if (ctx->r2 == 0) {
        // 0x80225424: nop
    
            goto L_80225430;
    }
    // 0x80225424: nop

    // 0x80225428: jal         0x80060690
    // 0x8022542C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80060690_3BA90(rdram, ctx);
        goto after_1;
    // 0x8022542C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_1:
L_80225430:
    // 0x80225430: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80225434: jr          $ra
    // 0x80225438: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225438: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802254F4_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802254F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802254F8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802254FC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225500: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225504: jal         0x8006033C
    // 0x80225508: addiu       $a0, $zero, 0x7B0
    ctx->r4 = ADD32(0, 0X7B0);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80225508: addiu       $a0, $zero, 0x7B0
    ctx->r4 = ADD32(0, 0X7B0);
    after_0:
    // 0x8022550C: beq         $v0, $zero, L_80225524
    if (ctx->r2 == 0) {
        // 0x80225510: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80225524;
    }
    // 0x80225510: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80225514: jal         0x80060690
    // 0x80225518: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80060690_3BA90(rdram, ctx);
        goto after_1;
    // 0x80225518: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_1:
    // 0x8022551C: j           L_80225624
    // 0x80225520: nop

        goto L_80225624;
    // 0x80225520: nop

L_80225524:
    // 0x80225524: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x80225528: beq         $v1, $v0, L_802255AC
    if (ctx->r3 == ctx->r2) {
        // 0x8022552C: slti        $v0, $v1, 0x3
        ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
            goto L_802255AC;
    }
    // 0x8022552C: slti        $v0, $v1, 0x3
    ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x80225530: beql        $v0, $zero, L_80225550
    if (ctx->r2 == 0) {
        // 0x80225534: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80225550;
    }
    goto skip_0;
    // 0x80225534: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    skip_0:
    // 0x80225538: beq         $v1, $zero, L_80225560
    if (ctx->r3 == 0) {
        // 0x8022553C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80225560;
    }
    // 0x8022553C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225540: beq         $v1, $v0, L_80225588
    if (ctx->r3 == ctx->r2) {
        // 0x80225544: nop
    
            goto L_80225588;
    }
    // 0x80225544: nop

    // 0x80225548: j           L_80225624
    // 0x8022554C: nop

        goto L_80225624;
    // 0x8022554C: nop

L_80225550:
    // 0x80225550: beq         $v1, $v0, L_802255F0
    if (ctx->r3 == ctx->r2) {
        // 0x80225554: nop
    
            goto L_802255F0;
    }
    // 0x80225554: nop

    // 0x80225558: j           L_80225624
    // 0x8022555C: nop

        goto L_80225624;
    // 0x8022555C: nop

L_80225560:
    // 0x80225560: jal         0x8006033C
    // 0x80225564: addiu       $a0, $zero, 0x50
    ctx->r4 = ADD32(0, 0X50);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x80225564: addiu       $a0, $zero, 0x50
    ctx->r4 = ADD32(0, 0X50);
    after_2:
    // 0x80225568: bnel        $v0, $zero, L_80225620
    if (ctx->r2 != 0) {
        // 0x8022556C: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_80225620;
    }
    goto skip_1;
    // 0x8022556C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    skip_1:
    // 0x80225570: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80225574: jal         0x8005FA7C
    // 0x80225578: addiu       $a0, $a0, -0x704C
    ctx->r4 = ADD32(ctx->r4, -0X704C);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_3;
    // 0x80225578: addiu       $a0, $a0, -0x704C
    ctx->r4 = ADD32(ctx->r4, -0X704C);
    after_3:
    // 0x8022557C: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225580: j           L_80225620
    // 0x80225584: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80225620;
    // 0x80225584: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80225588:
    // 0x80225588: jal         0x8006033C
    // 0x8022558C: addiu       $a0, $zero, 0x27
    ctx->r4 = ADD32(0, 0X27);
    func_8006033C_3B73C(rdram, ctx);
        goto after_4;
    // 0x8022558C: addiu       $a0, $zero, 0x27
    ctx->r4 = ADD32(0, 0X27);
    after_4:
    // 0x80225590: beq         $v0, $zero, L_80225624
    if (ctx->r2 == 0) {
        // 0x80225594: nop
    
            goto L_80225624;
    }
    // 0x80225594: nop

    // 0x80225598: jal         0x80060690
    // 0x8022559C: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    func_80060690_3BA90(rdram, ctx);
        goto after_5;
    // 0x8022559C: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    after_5:
    // 0x802255A0: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802255A4: j           L_80225620
    // 0x802255A8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80225620;
    // 0x802255A8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_802255AC:
    // 0x802255AC: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x802255B0: jal         0x80225634
    // 0x802255B4: addiu       $a0, $a0, -0x70C8
    ctx->r4 = ADD32(ctx->r4, -0X70C8);
    func_80225634_ovl22(rdram, ctx);
        goto after_6;
    // 0x802255B4: addiu       $a0, $a0, -0x70C8
    ctx->r4 = ADD32(ctx->r4, -0X70C8);
    after_6:
    // 0x802255B8: beq         $v0, $zero, L_80225624
    if (ctx->r2 == 0) {
        // 0x802255BC: nop
    
            goto L_80225624;
    }
    // 0x802255BC: nop

    // 0x802255C0: jal         0x8006036C
    // 0x802255C4: addiu       $a0, $zero, 0x41
    ctx->r4 = ADD32(0, 0X41);
    func_8006036C_3B76C(rdram, ctx);
        goto after_7;
    // 0x802255C4: addiu       $a0, $zero, 0x41
    ctx->r4 = ADD32(0, 0X41);
    after_7:
    // 0x802255C8: jal         0x80060690
    // 0x802255CC: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    func_80060690_3BA90(rdram, ctx);
        goto after_8;
    // 0x802255CC: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    after_8:
    // 0x802255D0: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x802255D4: addiu       $a0, $a0, -0x70C4
    ctx->r4 = ADD32(ctx->r4, -0X70C4);
    // 0x802255D8: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x802255DC: jal         0x8006100C
    // 0x802255E0: addiu       $a1, $a1, -0x705C
    ctx->r5 = ADD32(ctx->r5, -0X705C);
    func_8006100C_3C40C(rdram, ctx);
        goto after_9;
    // 0x802255E0: addiu       $a1, $a1, -0x705C
    ctx->r5 = ADD32(ctx->r5, -0X705C);
    after_9:
    // 0x802255E4: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802255E8: j           L_80225620
    // 0x802255EC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80225620;
    // 0x802255EC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_802255F0:
    // 0x802255F0: jal         0x8006033C
    // 0x802255F4: addiu       $a0, $zero, 0x50
    ctx->r4 = ADD32(0, 0X50);
    func_8006033C_3B73C(rdram, ctx);
        goto after_10;
    // 0x802255F4: addiu       $a0, $zero, 0x50
    ctx->r4 = ADD32(0, 0X50);
    after_10:
    // 0x802255F8: beq         $v0, $zero, L_80225624
    if (ctx->r2 == 0) {
        // 0x802255FC: addiu       $a0, $zero, 0x4
        ctx->r4 = ADD32(0, 0X4);
            goto L_80225624;
    }
    // 0x802255FC: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x80225600: jal         0x800616FC
    // 0x80225604: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_11;
    // 0x80225604: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_11:
    // 0x80225608: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8022560C: addiu       $a0, $a0, -0x70C4
    ctx->r4 = ADD32(ctx->r4, -0X70C4);
    // 0x80225610: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x80225614: jal         0x8006100C
    // 0x80225618: addiu       $a1, $a1, -0x7054
    ctx->r5 = ADD32(ctx->r5, -0X7054);
    func_8006100C_3C40C(rdram, ctx);
        goto after_12;
    // 0x80225618: addiu       $a1, $a1, -0x7054
    ctx->r5 = ADD32(ctx->r5, -0X7054);
    after_12:
    // 0x8022561C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_80225620:
    // 0x80225620: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225624:
    // 0x80225624: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225628: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022562C: jr          $ra
    // 0x80225630: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225630: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022FB54_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FB54: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022FB58: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022FB5C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022FB60: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022FB64: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022FB68: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022FB6C: lhu         $v0, 0x1DA($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1DA);
    // 0x8022FB70: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x8022FB74: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022FB78: beq         $v0, $zero, L_8022FBA4
    if (ctx->r2 == 0) {
        // 0x8022FB7C: addiu       $s1, $s0, 0x64
        ctx->r17 = ADD32(ctx->r16, 0X64);
            goto L_8022FBA4;
    }
    // 0x8022FB7C: addiu       $s1, $s0, 0x64
    ctx->r17 = ADD32(ctx->r16, 0X64);
    // 0x8022FB80: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x8022FB84: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022FB88: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x8022FB8C: jal         0x80050294
    // 0x8022FB90: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8022FB90: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022FB94: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022FB98: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x8022FB9C: j           L_8022FBCC
    // 0x8022FBA0: sh          $v0, 0x380($s0)
    MEM_H(0X380, ctx->r16) = ctx->r2;
        goto L_8022FBCC;
    // 0x8022FBA0: sh          $v0, 0x380($s0)
    MEM_H(0X380, ctx->r16) = ctx->r2;
L_8022FBA4:
    // 0x8022FBA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FBA8: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x8022FBAC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022FBB0: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x8022FBB4: jal         0x80050294
    // 0x8022FBB8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x8022FBB8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022FBBC: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022FBC0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022FBC4: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x8022FBC8: sh          $v1, 0x380($s0)
    MEM_H(0X380, ctx->r16) = ctx->r3;
L_8022FBCC:
    // 0x8022FBCC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022FBD0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022FBD4: sb          $v0, 0x3F($s2)
    MEM_B(0X3F, ctx->r18) = ctx->r2;
    // 0x8022FBD8: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022FBDC: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x8022FBE0: sb          $v0, 0x1($s1)
    MEM_B(0X1, ctx->r17) = ctx->r2;
    // 0x8022FBE4: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
    // 0x8022FBE8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022FBEC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022FBF0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022FBF4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022FBF8: jr          $ra
    // 0x8022FBFC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022FBFC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80231DA8_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231DA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231DAC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231DB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80231DB4: jal         0x8004F144
    // 0x80231DB8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80231DB8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x80231DBC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80231DC0: beq         $v1, $zero, L_80231DF4
    if (ctx->r3 == 0) {
        // 0x80231DC4: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80231DF4;
    }
    // 0x80231DC4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80231DC8: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80231DCC: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80231DD0: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x80231DD4: addiu       $v0, $zero, 0x42
    ctx->r2 = ADD32(0, 0X42);
    // 0x80231DD8: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    // 0x80231DDC: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x80231DE0: sh          $v0, 0x38($v1)
    MEM_H(0X38, ctx->r3) = ctx->r2;
    // 0x80231DE4: lhu         $v0, 0x2($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2);
    // 0x80231DE8: sh          $v0, 0x3A($v1)
    MEM_H(0X3A, ctx->r3) = ctx->r2;
    // 0x80231DEC: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x80231DF0: sh          $v0, 0x3C($v1)
    MEM_H(0X3C, ctx->r3) = ctx->r2;
L_80231DF4:
    // 0x80231DF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80231DF8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231DFC: jr          $ra
    // 0x80231E00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80231E00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802298D0_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802298D0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802298D4: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x802298D8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x802298DC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802298E0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x802298E4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802298E8: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x802298EC: lbu         $v1, 0x3($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X3);
    // 0x802298F0: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x802298F4: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x802298F8: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x802298FC: beq         $v0, $zero, L_80229B4C
    if (ctx->r2 == 0) {
        // 0x80229900: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80229B4C;
    }
    // 0x80229900: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80229904: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80229908: addu        $at, $at, $v0
    gpr jr_addend_80229910 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022990C: lw          $v0, -0x5C00($at)
    ctx->r2 = ADD32(ctx->r1, -0X5C00);
    // 0x80229910: jr          $v0
    // 0x80229914: nop

    switch (jr_addend_80229910 >> 2) {
        case 0: goto L_80229918; break;
        case 1: goto L_8022995C; break;
        case 2: goto L_80229A0C; break;
        case 3: goto L_80229A5C; break;
        case 4: goto L_80229AFC; break;
        default: switch_error(__func__, 0x80229910, 0x8023A400);
    }
    // 0x80229914: nop

L_80229918:
    // 0x80229918: lui         $v0, 0x3D48
    ctx->r2 = S32(0X3D48 << 16);
    // 0x8022991C: ori         $v0, $v0, 0xE
    ctx->r2 = ctx->r2 | 0XE;
    // 0x80229920: lui         $v1, 0x2E80
    ctx->r3 = S32(0X2E80 << 16);
    // 0x80229924: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x80229928: sw          $v0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r2;
    // 0x8022992C: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80229930: sb          $v0, 0x22($s2)
    MEM_B(0X22, ctx->r18) = ctx->r2;
    // 0x80229934: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80229938: sb          $v0, 0x23($s2)
    MEM_B(0X23, ctx->r18) = ctx->r2;
    // 0x8022993C: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80229940: sh          $v0, 0x24($s2)
    MEM_H(0X24, ctx->r18) = ctx->r2;
    // 0x80229944: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229948: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x8022994C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80229950: sw          $v1, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r3;
    // 0x80229954: j           L_80229B4C
    // 0x80229958: sb          $v0, 0xB($s2)
    MEM_B(0XB, ctx->r18) = ctx->r2;
        goto L_80229B4C;
    // 0x80229958: sb          $v0, 0xB($s2)
    MEM_B(0XB, ctx->r18) = ctx->r2;
L_8022995C:
    // 0x8022995C: lui         $v1, 0x3D48
    ctx->r3 = S32(0X3D48 << 16);
    // 0x80229960: lb          $a0, 0xC($s2)
    ctx->r4 = MEM_B(ctx->r18, 0XC);
    // 0x80229964: ori         $v1, $v1, 0xE
    ctx->r3 = ctx->r3 | 0XE;
    // 0x80229968: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022996C: sh          $v0, 0x24($s2)
    MEM_H(0X24, ctx->r18) = ctx->r2;
    // 0x80229970: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80229974: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x80229978: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022997C: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
    // 0x80229980: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80229984: sb          $v0, 0x22($s2)
    MEM_B(0X22, ctx->r18) = ctx->r2;
    // 0x80229988: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8022998C: sb          $v0, 0x23($s2)
    MEM_B(0X23, ctx->r18) = ctx->r2;
    // 0x80229990: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229994: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
    // 0x80229998: beq         $a0, $v0, L_802299E0
    if (ctx->r4 == ctx->r2) {
        // 0x8022999C: sw          $v1, 0x14($s2)
        MEM_W(0X14, ctx->r18) = ctx->r3;
            goto L_802299E0;
    }
    // 0x8022999C: sw          $v1, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r3;
    // 0x802299A0: slti        $v0, $a0, 0x2
    ctx->r2 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    // 0x802299A4: beql        $v0, $zero, L_802299BC
    if (ctx->r2 == 0) {
        // 0x802299A8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802299BC;
    }
    goto skip_0;
    // 0x802299A8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x802299AC: beq         $a0, $zero, L_802299CC
    if (ctx->r4 == 0) {
        // 0x802299B0: lui         $v0, 0x2E00
        ctx->r2 = S32(0X2E00 << 16);
            goto L_802299CC;
    }
    // 0x802299B0: lui         $v0, 0x2E00
    ctx->r2 = S32(0X2E00 << 16);
    // 0x802299B4: j           L_80229B4C
    // 0x802299B8: nop

        goto L_80229B4C;
    // 0x802299B8: nop

L_802299BC:
    // 0x802299BC: beq         $a0, $v0, L_802299F8
    if (ctx->r4 == ctx->r2) {
        // 0x802299C0: lui         $v0, 0x2E00
        ctx->r2 = S32(0X2E00 << 16);
            goto L_802299F8;
    }
    // 0x802299C0: lui         $v0, 0x2E00
    ctx->r2 = S32(0X2E00 << 16);
    // 0x802299C4: j           L_80229B4C
    // 0x802299C8: nop

        goto L_80229B4C;
    // 0x802299C8: nop

L_802299CC:
    // 0x802299CC: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x802299D0: sw          $v0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r2;
    // 0x802299D4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x802299D8: j           L_80229B4C
    // 0x802299DC: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
        goto L_80229B4C;
    // 0x802299DC: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
L_802299E0:
    // 0x802299E0: lui         $v0, 0x2E00
    ctx->r2 = S32(0X2E00 << 16);
    // 0x802299E4: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x802299E8: sw          $v0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r2;
    // 0x802299EC: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x802299F0: j           L_80229B4C
    // 0x802299F4: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
        goto L_80229B4C;
    // 0x802299F4: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
L_802299F8:
    // 0x802299F8: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x802299FC: sw          $v0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r2;
    // 0x80229A00: addiu       $v0, $zero, 0x808
    ctx->r2 = ADD32(0, 0X808);
    // 0x80229A04: j           L_80229B4C
    // 0x80229A08: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
        goto L_80229B4C;
    // 0x80229A08: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
L_80229A0C:
    // 0x80229A0C: lui         $v0, 0x3D48
    ctx->r2 = S32(0X3D48 << 16);
    // 0x80229A10: ori         $v0, $v0, 0xE
    ctx->r2 = ctx->r2 | 0XE;
    // 0x80229A14: lbu         $a0, 0x3($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X3);
    // 0x80229A18: lui         $v1, 0x2E00
    ctx->r3 = S32(0X2E00 << 16);
    // 0x80229A1C: ori         $v1, $v1, 0x80
    ctx->r3 = ctx->r3 | 0X80;
    // 0x80229A20: sw          $v0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r2;
    // 0x80229A24: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80229A28: sb          $v0, 0x22($s2)
    MEM_B(0X22, ctx->r18) = ctx->r2;
    // 0x80229A2C: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80229A30: sb          $v0, 0x23($s2)
    MEM_B(0X23, ctx->r18) = ctx->r2;
    // 0x80229A34: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80229A38: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x80229A3C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80229A40: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
    // 0x80229A44: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x80229A48: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
    // 0x80229A4C: sw          $v1, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r3;
    // 0x80229A50: sh          $v0, 0x24($s2)
    MEM_H(0X24, ctx->r18) = ctx->r2;
    // 0x80229A54: j           L_80229B4C
    // 0x80229A58: sb          $a0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r4;
        goto L_80229B4C;
    // 0x80229A58: sb          $a0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r4;
L_80229A5C:
    // 0x80229A5C: lui         $v0, 0x3D48
    ctx->r2 = S32(0X3D48 << 16);
    // 0x80229A60: ori         $v0, $v0, 0x2E
    ctx->r2 = ctx->r2 | 0X2E;
    // 0x80229A64: lui         $v1, 0x2E80
    ctx->r3 = S32(0X2E80 << 16);
    // 0x80229A68: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x80229A6C: addiu       $s1, $sp, 0x10
    ctx->r17 = ADD32(ctx->r29, 0X10);
    // 0x80229A70: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80229A74: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x80229A78: addiu       $a1, $a1, -0x5C08
    ctx->r5 = ADD32(ctx->r5, -0X5C08);
    // 0x80229A7C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80229A80: sw          $v0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r2;
    // 0x80229A84: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
    // 0x80229A88: sb          $v0, 0x22($s2)
    MEM_B(0X22, ctx->r18) = ctx->r2;
    // 0x80229A8C: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x80229A90: sb          $v0, 0x23($s2)
    MEM_B(0X23, ctx->r18) = ctx->r2;
    // 0x80229A94: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80229A98: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x80229A9C: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80229AA0: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
    // 0x80229AA4: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
    // 0x80229AA8: sw          $v1, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r3;
    // 0x80229AAC: jal         0x8009A3B4
    // 0x80229AB0: sh          $zero, 0x26($s2)
    MEM_H(0X26, ctx->r18) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80229AB0: sh          $zero, 0x26($s2)
    MEM_H(0X26, ctx->r18) = 0;
    after_0:
    // 0x80229AB4: addiu       $s0, $sp, 0x18
    ctx->r16 = ADD32(ctx->r29, 0X18);
    // 0x80229AB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229ABC: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x80229AC0: addiu       $a1, $a1, -0x5C04
    ctx->r5 = ADD32(ctx->r5, -0X5C04);
    // 0x80229AC4: jal         0x8009A3B4
    // 0x80229AC8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80229AC8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_1:
    // 0x80229ACC: lb          $v0, 0xC($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XC);
    // 0x80229AD0: lb          $v1, 0xC($s2)
    ctx->r3 = MEM_B(ctx->r18, 0XC);
    // 0x80229AD4: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
    // 0x80229AD8: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80229ADC: addu        $s0, $s0, $v1
    ctx->r16 = ADD32(ctx->r16, ctx->r3);
    // 0x80229AE0: sh          $v0, 0x24($s2)
    MEM_H(0X24, ctx->r18) = ctx->r2;
    // 0x80229AE4: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x80229AE8: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80229AEC: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x80229AF0: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x80229AF4: j           L_80229B4C
    // 0x80229AF8: sb          $v1, 0xC($s2)
    MEM_B(0XC, ctx->r18) = ctx->r3;
        goto L_80229B4C;
    // 0x80229AF8: sb          $v1, 0xC($s2)
    MEM_B(0XC, ctx->r18) = ctx->r3;
L_80229AFC:
    // 0x80229AFC: lui         $v0, 0x3D08
    ctx->r2 = S32(0X3D08 << 16);
    // 0x80229B00: ori         $v0, $v0, 0xE
    ctx->r2 = ctx->r2 | 0XE;
    // 0x80229B04: lbu         $v1, 0x0($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X0);
    // 0x80229B08: lui         $a0, 0x2E00
    ctx->r4 = S32(0X2E00 << 16);
    // 0x80229B0C: ori         $a0, $a0, 0x80
    ctx->r4 = ctx->r4 | 0X80;
    // 0x80229B10: sw          $v0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r2;
    // 0x80229B14: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
    // 0x80229B18: sb          $v0, 0x22($s2)
    MEM_B(0X22, ctx->r18) = ctx->r2;
    // 0x80229B1C: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80229B20: sb          $v0, 0x23($s2)
    MEM_B(0X23, ctx->r18) = ctx->r2;
    // 0x80229B24: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80229B28: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x80229B2C: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x80229B30: sb          $zero, 0x9($s2)
    MEM_B(0X9, ctx->r18) = 0;
    // 0x80229B34: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
    // 0x80229B38: sw          $a0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r4;
    // 0x80229B3C: sh          $zero, 0x26($s2)
    MEM_H(0X26, ctx->r18) = 0;
    // 0x80229B40: sh          $v0, 0x24($s2)
    MEM_H(0X24, ctx->r18) = ctx->r2;
    // 0x80229B44: ori         $v1, $v1, 0x20
    ctx->r3 = ctx->r3 | 0X20;
    // 0x80229B48: sb          $v1, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r3;
L_80229B4C:
    // 0x80229B4C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80229B50: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80229B54: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80229B58: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80229B5C: jr          $ra
    // 0x80229B60: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80229B60: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_802341A0_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802341A0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802341A4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802341A8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802341AC: lui         $a3, 0x3D48
    ctx->r7 = S32(0X3D48 << 16);
    // 0x802341B0: ori         $a3, $a3, 0xE
    ctx->r7 = ctx->r7 | 0XE;
    // 0x802341B4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802341B8: lhu         $a0, 0x1C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X1C);
    // 0x802341BC: lhu         $a1, 0x20($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X20);
    // 0x802341C0: lhu         $a2, 0x24($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X24);
    // 0x802341C4: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x802341C8: lui         $v1, 0x2C80
    ctx->r3 = S32(0X2C80 << 16);
    // 0x802341CC: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x802341D0: sw          $a3, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->r7;
    // 0x802341D4: sw          $v1, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r3;
    // 0x802341D8: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x802341DC: sh          $a0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r4;
    // 0x802341E0: sh          $a0, 0x90($s0)
    MEM_H(0X90, ctx->r16) = ctx->r4;
    // 0x802341E4: sh          $a1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r5;
    // 0x802341E8: sh          $a1, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r5;
    // 0x802341EC: sh          $a2, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r6;
    // 0x802341F0: beq         $v0, $zero, L_8023422C
    if (ctx->r2 == 0) {
        // 0x802341F4: sh          $a2, 0x94($s0)
        MEM_H(0X94, ctx->r16) = ctx->r6;
            goto L_8023422C;
    }
    // 0x802341F4: sh          $a2, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r6;
    // 0x802341F8: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x802341FC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80234200: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80234204: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80234208: lhu         $v1, -0x6128($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X6128);
    // 0x8023420C: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x80234210: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80234214: sb          $v1, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r3;
    // 0x80234218: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023421C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80234220: lhu         $v0, -0x6126($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X6126);
    // 0x80234224: j           L_8023425C
    // 0x80234228: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
        goto L_8023425C;
    // 0x80234228: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
L_8023422C:
    // 0x8023422C: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x80234230: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80234234: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80234238: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023423C: lhu         $v1, -0x6140($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X6140);
    // 0x80234240: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x80234244: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80234248: sb          $v1, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r3;
    // 0x8023424C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234250: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80234254: lhu         $v0, -0x613E($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X613E);
    // 0x80234258: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
L_8023425C:
    // 0x8023425C: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80234260: jal         0x8004F144
    // 0x80234264: sh          $v0, 0x98($s0)
    MEM_H(0X98, ctx->r16) = ctx->r2;
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80234264: sh          $v0, 0x98($s0)
    MEM_H(0X98, ctx->r16) = ctx->r2;
    after_0:
    // 0x80234268: beq         $v0, $zero, L_80234278
    if (ctx->r2 == 0) {
        // 0x8023426C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80234278;
    }
    // 0x8023426C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234270: jal         0x802348C0
    // 0x80234274: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_802348C0_ovl22(rdram, ctx);
        goto after_1;
    // 0x80234274: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_1:
L_80234278:
    // 0x80234278: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    // 0x8023427C: jal         0x8004F4F8
    // 0x80234280: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_2;
    // 0x80234280: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80234284: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80234288: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8023428C: jr          $ra
    // 0x80234290: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80234290: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80234294_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234294: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80234298: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x8023429C: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x802342A0: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x802342A4: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x802342A8: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x802342AC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x802342B0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802342B4: lw          $v1, 0x9C($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X9C);
    // 0x802342B8: lui         $v0, 0x2000
    ctx->r2 = S32(0X2000 << 16);
    // 0x802342BC: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x802342C0: beq         $v0, $zero, L_8023432C
    if (ctx->r2 == 0) {
        // 0x802342C4: nop
    
            goto L_8023432C;
    }
    // 0x802342C4: nop

    // 0x802342C8: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x802342CC: addiu       $s0, $s0, 0x4A06
    ctx->r16 = ADD32(ctx->r16, 0X4A06);
    // 0x802342D0: jal         0x800324B4
    // 0x802342D4: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    func_800324B4_D8B4(rdram, ctx);
        goto after_0;
    // 0x802342D4: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    after_0:
    // 0x802342D8: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x802342DC: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x802342E0: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x802342E4: sh          $v0, 0x44($s4)
    MEM_H(0X44, ctx->r20) = ctx->r2;
    // 0x802342E8: addiu       $v0, $zero, -0x1000
    ctx->r2 = ADD32(0, -0X1000);
    // 0x802342EC: sh          $v0, 0x46($s4)
    MEM_H(0X46, ctx->r20) = ctx->r2;
    // 0x802342F0: jal         0x80032498
    // 0x802342F4: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    func_80032498_D898(rdram, ctx);
        goto after_1;
    // 0x802342F4: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    after_1:
    // 0x802342F8: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x802342FC: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x80234300: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x80234304: sh          $v0, 0x48($s4)
    MEM_H(0X48, ctx->r20) = ctx->r2;
    // 0x80234308: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023430C: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
    // 0x80234310: sb          $v0, 0x8($s4)
    MEM_B(0X8, ctx->r20) = ctx->r2;
    // 0x80234314: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80234318: sh          $zero, 0x4C($s4)
    MEM_H(0X4C, ctx->r20) = 0;
    // 0x8023431C: sh          $v0, 0x4E($s4)
    MEM_H(0X4E, ctx->r20) = ctx->r2;
    // 0x80234320: sh          $zero, 0x50($s4)
    MEM_H(0X50, ctx->r20) = 0;
    // 0x80234324: j           L_80234354
    // 0x80234328: sw          $zero, 0x9C($s4)
    MEM_W(0X9C, ctx->r20) = 0;
        goto L_80234354;
    // 0x80234328: sw          $zero, 0x9C($s4)
    MEM_W(0X9C, ctx->r20) = 0;
L_8023432C:
    // 0x8023432C: lbu         $v0, 0xA($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XA);
    // 0x80234330: beq         $v0, $zero, L_8023434C
    if (ctx->r2 == 0) {
        // 0x80234334: lui         $v0, 0x1C00
        ctx->r2 = S32(0X1C00 << 16);
            goto L_8023434C;
    }
    // 0x80234334: lui         $v0, 0x1C00
    ctx->r2 = S32(0X1C00 << 16);
L_80234338:
    // 0x80234338: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8023433C: beq         $v0, $zero, L_80234354
    if (ctx->r2 == 0) {
        // 0x80234340: nop
    
            goto L_80234354;
    }
    // 0x80234340: nop

    // 0x80234344: j           L_802344AC
    // 0x80234348: sw          $zero, 0x9C($s4)
    MEM_W(0X9C, ctx->r20) = 0;
        goto L_802344AC;
    // 0x80234348: sw          $zero, 0x9C($s4)
    MEM_W(0X9C, ctx->r20) = 0;
L_8023434C:
    // 0x8023434C: j           L_80234338
    // 0x80234350: lui         $v0, 0x1A00
    ctx->r2 = S32(0X1A00 << 16);
        goto L_80234338;
    // 0x80234350: lui         $v0, 0x1A00
    ctx->r2 = S32(0X1A00 << 16);
L_80234354:
    // 0x80234354: lw          $v0, 0x44($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X44);
    // 0x80234358: bne         $v0, $zero, L_8023436C
    if (ctx->r2 != 0) {
        // 0x8023435C: sw          $zero, 0x9C($s4)
        MEM_W(0X9C, ctx->r20) = 0;
            goto L_8023436C;
    }
    // 0x8023435C: sw          $zero, 0x9C($s4)
    MEM_W(0X9C, ctx->r20) = 0;
    // 0x80234360: lh          $v0, 0x48($s4)
    ctx->r2 = MEM_H(ctx->r20, 0X48);
    // 0x80234364: beq         $v0, $zero, L_802343E4
    if (ctx->r2 == 0) {
        // 0x80234368: addiu       $s2, $s4, 0x34
        ctx->r18 = ADD32(ctx->r20, 0X34);
            goto L_802343E4;
    }
    // 0x80234368: addiu       $s2, $s4, 0x34
    ctx->r18 = ADD32(ctx->r20, 0X34);
L_8023436C:
    // 0x8023436C: lbu         $v0, 0x3($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X3);
    // 0x80234370: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x80234374: beq         $v0, $zero, L_802343B0
    if (ctx->r2 == 0) {
        // 0x80234378: nop
    
            goto L_802343B0;
    }
    // 0x80234378: nop

    // 0x8023437C: lb          $v0, 0xF($s4)
    ctx->r2 = MEM_B(ctx->r20, 0XF);
    // 0x80234380: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80234384: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80234388: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023438C: lhu         $v1, -0x6128($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X6128);
    // 0x80234390: lb          $v0, 0xF($s4)
    ctx->r2 = MEM_B(ctx->r20, 0XF);
    // 0x80234394: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80234398: sb          $v1, 0x96($s4)
    MEM_B(0X96, ctx->r20) = ctx->r3;
    // 0x8023439C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802343A0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802343A4: lhu         $v0, -0x6126($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X6126);
    // 0x802343A8: j           L_802343E0
    // 0x802343AC: sb          $v0, 0x97($s4)
    MEM_B(0X97, ctx->r20) = ctx->r2;
        goto L_802343E0;
    // 0x802343AC: sb          $v0, 0x97($s4)
    MEM_B(0X97, ctx->r20) = ctx->r2;
L_802343B0:
    // 0x802343B0: lb          $v0, 0xF($s4)
    ctx->r2 = MEM_B(ctx->r20, 0XF);
    // 0x802343B4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802343B8: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x802343BC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802343C0: lhu         $v1, -0x6140($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X6140);
    // 0x802343C4: lb          $v0, 0xF($s4)
    ctx->r2 = MEM_B(ctx->r20, 0XF);
    // 0x802343C8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802343CC: sb          $v1, 0x96($s4)
    MEM_B(0X96, ctx->r20) = ctx->r3;
    // 0x802343D0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802343D4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802343D8: lhu         $v0, -0x613E($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X613E);
    // 0x802343DC: sb          $v0, 0x97($s4)
    MEM_B(0X97, ctx->r20) = ctx->r2;
L_802343E0:
    // 0x802343E0: addiu       $s2, $s4, 0x34
    ctx->r18 = ADD32(ctx->r20, 0X34);
L_802343E4:
    // 0x802343E4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x802343E8: addiu       $s3, $s4, 0x1C
    ctx->r19 = ADD32(ctx->r20, 0X1C);
    // 0x802343EC: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x802343F0: jal         0x8009A3B4
    // 0x802343F4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x802343F4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x802343F8: addiu       $s0, $s4, 0x2C
    ctx->r16 = ADD32(ctx->r20, 0X2C);
    // 0x802343FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234400: addiu       $s1, $s4, 0x14
    ctx->r17 = ADD32(ctx->r20, 0X14);
    // 0x80234404: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80234408: jal         0x8009A3B4
    // 0x8023440C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8023440C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x80234410: jal         0x802347D0
    // 0x80234414: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_802347D0_ovl22(rdram, ctx);
        goto after_4;
    // 0x80234414: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_4:
    // 0x80234418: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8023441C: jal         0x8004DD04
    // 0x80234420: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8004DD04_29104(rdram, ctx);
        goto after_5;
    // 0x80234420: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80234424: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80234428: jal         0x8004DD04
    // 0x8023442C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8004DD04_29104(rdram, ctx);
        goto after_6;
    // 0x8023442C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_6:
    // 0x80234430: jal         0x80234618
    // 0x80234434: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_80234618_ovl22(rdram, ctx);
        goto after_7;
    // 0x80234434: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_7:
    // 0x80234438: lhu         $v1, 0x14($s4)
    ctx->r3 = MEM_HU(ctx->r20, 0X14);
    // 0x8023443C: lhu         $v0, 0x16($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X16);
    // 0x80234440: lhu         $a0, 0x18($s4)
    ctx->r4 = MEM_HU(ctx->r20, 0X18);
    // 0x80234444: lb          $a1, 0xD($s4)
    ctx->r5 = MEM_B(ctx->r20, 0XD);
    // 0x80234448: addiu       $v0, $v0, -0x10
    ctx->r2 = ADD32(ctx->r2, -0X10);
    // 0x8023444C: sh          $v0, 0x92($s4)
    MEM_H(0X92, ctx->r20) = ctx->r2;
    // 0x80234450: slti        $v0, $a1, 0x1E
    ctx->r2 = SIGNED(ctx->r5) < 0X1E ? 1 : 0;
    // 0x80234454: sh          $v1, 0x90($s4)
    MEM_H(0X90, ctx->r20) = ctx->r3;
    // 0x80234458: beq         $v0, $zero, L_802344AC
    if (ctx->r2 == 0) {
        // 0x8023445C: sh          $a0, 0x94($s4)
        MEM_H(0X94, ctx->r20) = ctx->r4;
            goto L_802344AC;
    }
    // 0x8023445C: sh          $a0, 0x94($s4)
    MEM_H(0X94, ctx->r20) = ctx->r4;
    // 0x80234460: slti        $v0, $a1, 0xF
    ctx->r2 = SIGNED(ctx->r5) < 0XF ? 1 : 0;
    // 0x80234464: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x80234468: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8023446C: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80234470: and         $v0, $a1, $v0
    ctx->r2 = ctx->r5 & ctx->r2;
    // 0x80234474: beq         $v0, $zero, L_8023449C
    if (ctx->r2 == 0) {
        // 0x80234478: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_8023449C;
    }
    // 0x80234478: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8023447C: lbu         $v1, 0x8F($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X8F);
    // 0x80234480: bnel        $v1, $v0, L_80234494
    if (ctx->r3 != ctx->r2) {
        // 0x80234484: lui         $v0, 0x2CFF
        ctx->r2 = S32(0X2CFF << 16);
            goto L_80234494;
    }
    goto skip_0;
    // 0x80234484: lui         $v0, 0x2CFF
    ctx->r2 = S32(0X2CFF << 16);
    skip_0:
    // 0x80234488: lui         $v0, 0x2C80
    ctx->r2 = S32(0X2C80 << 16);
    // 0x8023448C: j           L_80234498
    // 0x80234490: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
        goto L_80234498;
    // 0x80234490: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
L_80234494:
    // 0x80234494: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
L_80234498:
    // 0x80234498: sw          $v0, 0x8C($s4)
    MEM_W(0X8C, ctx->r20) = ctx->r2;
L_8023449C:
    // 0x8023449C: lbu         $v0, 0xD($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XD);
    // 0x802344A0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802344A4: j           L_802344D0
    // 0x802344A8: sb          $v0, 0xD($s4)
    MEM_B(0XD, ctx->r20) = ctx->r2;
        goto L_802344D0;
    // 0x802344A8: sb          $v0, 0xD($s4)
    MEM_B(0XD, ctx->r20) = ctx->r2;
L_802344AC:
    // 0x802344AC: jal         0x8004F144
    // 0x802344B0: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_8;
    // 0x802344B0: nop

    after_8:
    // 0x802344B4: beq         $v0, $zero, L_802344C4
    if (ctx->r2 == 0) {
        // 0x802344B8: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_802344C4;
    }
    // 0x802344B8: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x802344BC: jal         0x802348C0
    // 0x802344C0: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_802348C0_ovl22(rdram, ctx);
        goto after_9;
    // 0x802344C0: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_9:
L_802344C4:
    // 0x802344C4: sb          $zero, 0x0($s4)
    MEM_B(0X0, ctx->r20) = 0;
    // 0x802344C8: jal         0x8004F4F8
    // 0x802344CC: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_10;
    // 0x802344CC: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_10:
L_802344D0:
    // 0x802344D0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x802344D4: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x802344D8: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x802344DC: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x802344E0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x802344E4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802344E8: jr          $ra
    // 0x802344EC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x802344EC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80232ED4_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232ED4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80232ED8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232EDC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232EE0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80232EE4: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x80232EE8: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80232EEC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80232EF0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80232EF4: jal         0x8009A3B4
    // 0x80232EF8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80232EF8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80232EFC: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80232F00: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80232F04: jal         0x8009A3B4
    // 0x80232F08: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80232F08: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80232F0C: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80232F10: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80232F14: jal         0x8009A3B4
    // 0x80232F18: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80232F18: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80232F1C: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x80232F20: lbu         $a1, 0x74($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X74);
    // 0x80232F24: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232F28: addiu       $v1, $zero, 0x4210
    ctx->r3 = ADD32(0, 0X4210);
    // 0x80232F2C: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x80232F30: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x80232F34: jal         0x80233020
    // 0x80232F38: sb          $a1, 0x75($s0)
    MEM_B(0X75, ctx->r16) = ctx->r5;
    func_80233020_ovl22(rdram, ctx);
        goto after_3;
    // 0x80232F38: sb          $a1, 0x75($s0)
    MEM_B(0X75, ctx->r16) = ctx->r5;
    after_3:
    // 0x80232F3C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80232F40: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80232F44: addiu       $a0, $a0, -0x618C
    ctx->r4 = ADD32(ctx->r4, -0X618C);
    // 0x80232F48: sh          $zero, 0x56C($s0)
    MEM_H(0X56C, ctx->r16) = 0;
L_80232F4C:
    // 0x80232F4C: lw          $v0, 0x80($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X80);
    // 0x80232F50: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80232F54: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80232F58: bne         $v0, $zero, L_80232F6C
    if (ctx->r2 != 0) {
        // 0x80232F5C: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_80232F6C;
    }
    // 0x80232F5C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80232F60: lhu         $v0, 0x8C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8C);
    // 0x80232F64: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232F68: sh          $v0, 0x8C($s1)
    MEM_H(0X8C, ctx->r17) = ctx->r2;
L_80232F6C:
    // 0x80232F6C: sltiu       $v0, $a1, 0x6
    ctx->r2 = ctx->r5 < 0X6 ? 1 : 0;
    // 0x80232F70: bne         $v0, $zero, L_80232F4C
    if (ctx->r2 != 0) {
        // 0x80232F74: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_80232F4C;
    }
    // 0x80232F74: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x80232F78: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80232F7C: jal         0x8004DE68
    // 0x80232F80: addiu       $a1, $s1, 0x4
    ctx->r5 = ADD32(ctx->r17, 0X4);
    func_8004DE68_29268(rdram, ctx);
        goto after_4;
    // 0x80232F80: addiu       $a1, $s1, 0x4
    ctx->r5 = ADD32(ctx->r17, 0X4);
    after_4:
    // 0x80232F84: sw          $v0, 0x84($s1)
    MEM_W(0X84, ctx->r17) = ctx->r2;
    // 0x80232F88: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80232F8C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80232F90: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80232F94: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80232F98: lw          $v0, -0x61A8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X61A8);
    // 0x80232F9C: jalr        $v0
    // 0x80232FA0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x80232FA0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80232FA4: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80232FA8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80232FAC: beq         $v1, $v0, L_8023300C
    if (ctx->r3 == ctx->r2) {
        // 0x80232FB0: nop
    
            goto L_8023300C;
    }
    // 0x80232FB0: nop

    // 0x80232FB4: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x80232FB8: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x80232FBC: beq         $a1, $v0, L_80232FD4
    if (ctx->r5 == ctx->r2) {
        // 0x80232FC0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80232FD4;
    }
    // 0x80232FC0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232FC4: jal         0x80050294
    // 0x80232FC8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_6;
    // 0x80232FC8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_6:
    // 0x80232FCC: j           L_80232FDC
    // 0x80232FD0: nop

        goto L_80232FDC;
    // 0x80232FD0: nop

L_80232FD4:
    // 0x80232FD4: jal         0x8005044C
    // 0x80232FD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_7;
    // 0x80232FD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
L_80232FDC:
    // 0x80232FDC: jal         0x802332F8
    // 0x80232FE0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802332F8_ovl22(rdram, ctx);
        goto after_8;
    // 0x80232FE0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
    // 0x80232FE4: jal         0x80233194
    // 0x80232FE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80233194_ovl22(rdram, ctx);
        goto after_9;
    // 0x80232FE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
    // 0x80232FEC: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80232FF0: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80232FF4: beq         $v0, $zero, L_8023300C
    if (ctx->r2 == 0) {
        // 0x80232FF8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023300C;
    }
    // 0x80232FF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232FFC: addiu       $a1, $zero, 0x138
    ctx->r5 = ADD32(0, 0X138);
    // 0x80233000: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x80233004: jal         0x8003B564
    // 0x80233008: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_10;
    // 0x80233008: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_10:
L_8023300C:
    // 0x8023300C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80233010: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80233014: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80233018: jr          $ra
    // 0x8023301C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023301C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80227084_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227084: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80227088: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x8022708C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227090: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227094: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227098: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022709C: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x802270A0: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x802270A4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802270A8: addiu       $s2, $s0, 0x2C
    ctx->r18 = ADD32(ctx->r16, 0X2C);
    // 0x802270AC: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
    // 0x802270B0: bne         $v1, $v0, L_802270C8
    if (ctx->r3 != ctx->r2) {
        // 0x802270B4: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_802270C8;
    }
    // 0x802270B4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802270B8: jal         0x8006033C
    // 0x802270BC: addiu       $a0, $zero, 0x64B
    ctx->r4 = ADD32(0, 0X64B);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x802270BC: addiu       $a0, $zero, 0x64B
    ctx->r4 = ADD32(0, 0X64B);
    after_0:
    // 0x802270C0: bne         $v0, $zero, L_80227394
    if (ctx->r2 != 0) {
        // 0x802270C4: nop
    
            goto L_80227394;
    }
    // 0x802270C4: nop

L_802270C8:
    // 0x802270C8: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802270CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802270D0: beq         $v1, $v0, L_802270E8
    if (ctx->r3 == ctx->r2) {
        // 0x802270D4: nop
    
            goto L_802270E8;
    }
    // 0x802270D4: nop

    // 0x802270D8: jal         0x8006033C
    // 0x802270DC: addiu       $a0, $zero, 0x49
    ctx->r4 = ADD32(0, 0X49);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x802270DC: addiu       $a0, $zero, 0x49
    ctx->r4 = ADD32(0, 0X49);
    after_1:
    // 0x802270E0: bne         $v0, $zero, L_802270F0
    if (ctx->r2 != 0) {
        // 0x802270E4: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_802270F0;
    }
    // 0x802270E4: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_802270E8:
    // 0x802270E8: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x802270EC: lw          $v1, 0x3FF0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3FF0);
L_802270F0:
    // 0x802270F0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802270F4: bne         $v0, $zero, L_802271B8
    if (ctx->r2 != 0) {
        // 0x802270F8: nop
    
            goto L_802271B8;
    }
    // 0x802270F8: nop

    // 0x802270FC: lh          $v1, 0x6($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X6);
    // 0x80227100: lh          $a0, 0x56($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X56);
    // 0x80227104: addiu       $v0, $v1, 0x620
    ctx->r2 = ADD32(ctx->r3, 0X620);
    // 0x80227108: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022710C: slt         $v0, $v0, $a0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80227110: beq         $v0, $zero, L_80227394
    if (ctx->r2 == 0) {
        // 0x80227114: addiu       $v0, $v1, 0x9E0
        ctx->r2 = ADD32(ctx->r3, 0X9E0);
            goto L_80227394;
    }
    // 0x80227114: addiu       $v0, $v1, 0x9E0
    ctx->r2 = ADD32(ctx->r3, 0X9E0);
    // 0x80227118: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022711C: slt         $v0, $a0, $v0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80227120: beq         $v0, $zero, L_80227394
    if (ctx->r2 == 0) {
        // 0x80227124: nop
    
            goto L_80227394;
    }
    // 0x80227124: nop

    // 0x80227128: lw          $v0, 0x184($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X184);
    // 0x8022712C: bne         $v0, $s0, L_80227394
    if (ctx->r2 != ctx->r16) {
        // 0x80227130: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80227394;
    }
    // 0x80227130: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227134: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80227138: lbu         $v0, 0xBD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XBD);
    // 0x8022713C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80227140: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x80227144: sw          $zero, 0x184($s1)
    MEM_W(0X184, ctx->r17) = 0;
    // 0x80227148: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x8022714C: sb          $v0, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r2;
    // 0x80227150: xori        $v0, $v1, 0xE
    ctx->r2 = ctx->r3 ^ 0XE;
    // 0x80227154: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80227158: xori        $v1, $v1, 0x14
    ctx->r3 = ctx->r3 ^ 0X14;
    // 0x8022715C: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x80227160: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80227164: beq         $v0, $zero, L_8022717C
    if (ctx->r2 == 0) {
        // 0x80227168: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8022717C;
    }
    // 0x80227168: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022716C: jal         0x800616FC
    // 0x80227170: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_2;
    // 0x80227170: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    after_2:
    // 0x80227174: j           L_80227394
    // 0x80227178: nop

        goto L_80227394;
    // 0x80227178: nop

L_8022717C:
    // 0x8022717C: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x80227180: bne         $v0, $zero, L_80227198
    if (ctx->r2 != 0) {
        // 0x80227184: nop
    
            goto L_80227198;
    }
    // 0x80227184: nop

    // 0x80227188: jal         0x800616FC
    // 0x8022718C: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_3;
    // 0x8022718C: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    after_3:
    // 0x80227190: j           L_80227394
    // 0x80227194: nop

        goto L_80227394;
    // 0x80227194: nop

L_80227198:
    // 0x80227198: jal         0x8006033C
    // 0x8022719C: addiu       $a0, $zero, 0x49
    ctx->r4 = ADD32(0, 0X49);
    func_8006033C_3B73C(rdram, ctx);
        goto after_4;
    // 0x8022719C: addiu       $a0, $zero, 0x49
    ctx->r4 = ADD32(0, 0X49);
    after_4:
    // 0x802271A0: bne         $v0, $zero, L_80227394
    if (ctx->r2 != 0) {
        // 0x802271A4: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80227394;
    }
    // 0x802271A4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802271A8: jal         0x800616FC
    // 0x802271AC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_5;
    // 0x802271AC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_5:
    // 0x802271B0: j           L_80227394
    // 0x802271B4: nop

        goto L_80227394;
    // 0x802271B4: nop

L_802271B8:
    // 0x802271B8: bltz        $v1, L_80227394
    if (SIGNED(ctx->r3) < 0) {
        // 0x802271BC: andi        $v0, $v1, 0xFF
        ctx->r2 = ctx->r3 & 0XFF;
            goto L_80227394;
    }
    // 0x802271BC: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x802271C0: bne         $v0, $zero, L_80227384
    if (ctx->r2 != 0) {
        // 0x802271C4: nop
    
            goto L_80227384;
    }
    // 0x802271C4: nop

    // 0x802271C8: jal         0x8006FF84
    // 0x802271CC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_6;
    // 0x802271CC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
    // 0x802271D0: beq         $v0, $zero, L_80227394
    if (ctx->r2 == 0) {
        // 0x802271D4: nop
    
            goto L_80227394;
    }
    // 0x802271D4: nop

    // 0x802271D8: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x802271DC: addiu       $a0, $a0, -0x3BC8
    ctx->r4 = ADD32(ctx->r4, -0X3BC8);
    // 0x802271E0: lb          $v0, 0x0($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X0);
    // 0x802271E4: xori        $v1, $v0, 0xE
    ctx->r3 = ctx->r2 ^ 0XE;
    // 0x802271E8: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x802271EC: xori        $v0, $v0, 0x14
    ctx->r2 = ctx->r2 ^ 0X14;
    // 0x802271F0: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x802271F4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x802271F8: bnel        $v1, $zero, L_80227218
    if (ctx->r3 != 0) {
        // 0x802271FC: addiu       $a0, $zero, 0x178
        ctx->r4 = ADD32(0, 0X178);
            goto L_80227218;
    }
    goto skip_0;
    // 0x802271FC: addiu       $a0, $zero, 0x178
    ctx->r4 = ADD32(0, 0X178);
    skip_0:
    // 0x80227200: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80227204: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x80227208: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022720C: lui         $v1, 0x1300
    ctx->r3 = S32(0X1300 << 16);
    // 0x80227210: bne         $v0, $v1, L_80227244
    if (ctx->r2 != ctx->r3) {
        // 0x80227214: addiu       $a0, $zero, 0x178
        ctx->r4 = ADD32(0, 0X178);
            goto L_80227244;
    }
    // 0x80227214: addiu       $a0, $zero, 0x178
    ctx->r4 = ADD32(0, 0X178);
L_80227218:
    // 0x80227218: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x8022721C: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    // 0x80227220: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80227224: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    // 0x80227228: addiu       $v1, $zero, -0x61
    ctx->r3 = ADD32(0, -0X61);
    // 0x8022722C: sb          $v1, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r3;
    // 0x80227230: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80227234: jal         0x8002A33C
    // 0x80227238: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_7;
    // 0x80227238: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    after_7:
    // 0x8022723C: j           L_80227394
    // 0x80227240: nop

        goto L_80227394;
    // 0x80227240: nop

L_80227244:
    // 0x80227244: jal         0x8006033C
    // 0x80227248: addiu       $a0, $zero, 0x49
    ctx->r4 = ADD32(0, 0X49);
    func_8006033C_3B73C(rdram, ctx);
        goto after_8;
    // 0x80227248: addiu       $a0, $zero, 0x49
    ctx->r4 = ADD32(0, 0X49);
    after_8:
    // 0x8022724C: beq         $v0, $zero, L_80227384
    if (ctx->r2 == 0) {
        // 0x80227250: addiu       $v1, $zero, 0x2
        ctx->r3 = ADD32(0, 0X2);
            goto L_80227384;
    }
    // 0x80227250: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80227254: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x80227258: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022725C: bne         $v0, $v1, L_80227364
    if (ctx->r2 != ctx->r3) {
        // 0x80227260: addiu       $a0, $zero, 0x178
        ctx->r4 = ADD32(0, 0X178);
            goto L_80227364;
    }
    // 0x80227260: addiu       $a0, $zero, 0x178
    ctx->r4 = ADD32(0, 0X178);
    // 0x80227264: jal         0x8006FF84
    // 0x80227268: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_9;
    // 0x80227268: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_9:
    // 0x8022726C: lhu         $v1, 0x16($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X16);
    // 0x80227270: lhu         $v0, 0x14($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X14);
    // 0x80227274: lhu         $a0, 0x18($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X18);
    // 0x80227278: lhu         $a3, 0x56($s1)
    ctx->r7 = MEM_HU(ctx->r17, 0X56);
    // 0x8022727C: sh          $v1, 0x43A($s1)
    MEM_H(0X43A, ctx->r17) = ctx->r3;
    // 0x80227280: lbu         $v1, 0xBD($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XBD);
    // 0x80227284: sh          $v0, 0x438($s1)
    MEM_H(0X438, ctx->r17) = ctx->r2;
    // 0x80227288: sh          $a0, 0x43C($s1)
    MEM_H(0X43C, ctx->r17) = ctx->r4;
    // 0x8022728C: lh          $a0, 0x438($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X438);
    // 0x80227290: lh          $a1, 0x43A($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X43A);
    // 0x80227294: lh          $a2, 0x43C($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X43C);
    // 0x80227298: sh          $zero, 0x440($s1)
    MEM_H(0X440, ctx->r17) = 0;
    // 0x8022729C: sh          $zero, 0x444($s1)
    MEM_H(0X444, ctx->r17) = 0;
    // 0x802272A0: sb          $zero, 0x448($s1)
    MEM_B(0X448, ctx->r17) = 0;
    // 0x802272A4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802272A8: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x802272AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802272B0: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x802272B4: sh          $a3, 0x442($s1)
    MEM_H(0X442, ctx->r17) = ctx->r7;
    // 0x802272B8: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
    // 0x802272BC: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x802272C0: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x802272C4: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x802272C8: sb          $v1, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r3;
    // 0x802272CC: sw          $a0, 0x428($s1)
    MEM_W(0X428, ctx->r17) = ctx->r4;
    // 0x802272D0: sw          $a1, 0x42C($s1)
    MEM_W(0X42C, ctx->r17) = ctx->r5;
    // 0x802272D4: sw          $a2, 0x430($s1)
    MEM_W(0X430, ctx->r17) = ctx->r6;
    // 0x802272D8: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x802272DC: andi        $v0, $v0, 0xF0
    ctx->r2 = ctx->r2 & 0XF0;
    // 0x802272E0: beq         $v0, $zero, L_80227350
    if (ctx->r2 == 0) {
        // 0x802272E4: addiu       $a0, $zero, 0x176
        ctx->r4 = ADD32(0, 0X176);
            goto L_80227350;
    }
    // 0x802272E4: addiu       $a0, $zero, 0x176
    ctx->r4 = ADD32(0, 0X176);
    // 0x802272E8: jal         0x8006033C
    // 0x802272EC: addiu       $a0, $zero, 0x6B
    ctx->r4 = ADD32(0, 0X6B);
    func_8006033C_3B73C(rdram, ctx);
        goto after_10;
    // 0x802272EC: addiu       $a0, $zero, 0x6B
    ctx->r4 = ADD32(0, 0X6B);
    after_10:
    // 0x802272F0: beq         $v0, $zero, L_80227320
    if (ctx->r2 == 0) {
        // 0x802272F4: addiu       $a0, $zero, 0x176
        ctx->r4 = ADD32(0, 0X176);
            goto L_80227320;
    }
    // 0x802272F4: addiu       $a0, $zero, 0x176
    ctx->r4 = ADD32(0, 0X176);
    // 0x802272F8: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    // 0x802272FC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80227300: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x80227304: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80227308: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022730C: addiu       $v0, $zero, 0x7FF
    ctx->r2 = ADD32(0, 0X7FF);
    // 0x80227310: jal         0x8002A33C
    // 0x80227314: sh          $v0, 0x442($s1)
    MEM_H(0X442, ctx->r17) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_11;
    // 0x80227314: sh          $v0, 0x442($s1)
    MEM_H(0X442, ctx->r17) = ctx->r2;
    after_11:
    // 0x80227318: j           L_80227394
    // 0x8022731C: nop

        goto L_80227394;
    // 0x8022731C: nop

L_80227320:
    // 0x80227320: addiu       $a0, $zero, 0x6B
    ctx->r4 = ADD32(0, 0X6B);
    // 0x80227324: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80227328: jal         0x8006036C
    // 0x8022732C: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    func_8006036C_3B76C(rdram, ctx);
        goto after_12;
    // 0x8022732C: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    after_12:
    // 0x80227330: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80227334: jal         0x800616FC
    // 0x80227338: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_13;
    // 0x80227338: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    after_13:
    // 0x8022733C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80227340: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80227344: addiu       $v0, $zero, 0x7FF
    ctx->r2 = ADD32(0, 0X7FF);
    // 0x80227348: j           L_80227394
    // 0x8022734C: sh          $v0, 0x442($s1)
    MEM_H(0X442, ctx->r17) = ctx->r2;
        goto L_80227394;
    // 0x8022734C: sh          $v0, 0x442($s1)
    MEM_H(0X442, ctx->r17) = ctx->r2;
L_80227350:
    // 0x80227350: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    // 0x80227354: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80227358: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x8022735C: j           L_80227374
    // 0x80227360: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80227374;
    // 0x80227360: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80227364:
    // 0x80227364: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    // 0x80227368: addiu       $v0, $zero, -0xC
    ctx->r2 = ADD32(0, -0XC);
    // 0x8022736C: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x80227370: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80227374:
    // 0x80227374: jal         0x8002A33C
    // 0x80227378: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_14;
    // 0x80227378: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    after_14:
    // 0x8022737C: j           L_80227394
    // 0x80227380: nop

        goto L_80227394;
    // 0x80227380: nop

L_80227384:
    // 0x80227384: lbu         $v0, 0xBD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XBD);
    // 0x80227388: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x8022738C: sb          $v0, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r2;
    // 0x80227390: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_80227394:
    // 0x80227394: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80227398: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022739C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802273A0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802273A4: jr          $ra
    // 0x802273A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802273A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80227EE4_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227EE4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80227EE8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80227EEC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227EF0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80227EF4: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80227EF8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227EFC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80227F00: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227F04: lw          $v0, -0x6B74($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6B74);
    // 0x80227F08: jalr        $v0
    // 0x80227F0C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80227F0C: nop

    after_0:
    // 0x80227F10: addiu       $a0, $s0, 0x30
    ctx->r4 = ADD32(ctx->r16, 0X30);
    // 0x80227F14: addiu       $s0, $s0, 0x18
    ctx->r16 = ADD32(ctx->r16, 0X18);
    // 0x80227F18: jal         0x80031600
    // 0x80227F1C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80031600_CA00(rdram, ctx);
        goto after_1;
    // 0x80227F1C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80227F20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227F24: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x80227F28: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x80227F2C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80227F30: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80227F34: jal         0x80031DA8
    // 0x80227F38: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_2;
    // 0x80227F38: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_2:
    // 0x80227F3C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80227F40: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80227F44: jr          $ra
    // 0x80227F48: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80227F48: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80226150_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226150: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80226154: sw          $fp, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r30;
    // 0x80226158: addu        $fp, $a0, $zero
    ctx->r30 = ADD32(ctx->r4, 0);
    // 0x8022615C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80226160: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x80226164: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x80226168: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x8022616C: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80226170: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80226174: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80226178: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022617C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226180: lw          $s4, 0x14($fp)
    ctx->r20 = MEM_W(ctx->r30, 0X14);
    // 0x80226184: lh          $v1, 0x0($s4)
    ctx->r3 = MEM_H(ctx->r20, 0X0);
    // 0x80226188: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022618C: beq         $v1, $v0, L_80226560
    if (ctx->r3 == ctx->r2) {
        // 0x80226190: addiu       $s7, $fp, 0x14
        ctx->r23 = ADD32(ctx->r30, 0X14);
            goto L_80226560;
    }
    // 0x80226190: addiu       $s7, $fp, 0x14
    ctx->r23 = ADD32(ctx->r30, 0X14);
    // 0x80226194: addiu       $s6, $zero, 0xFF
    ctx->r22 = ADD32(0, 0XFF);
    // 0x80226198: lui         $s3, 0x8000
    ctx->r19 = S32(0X8000 << 16);
    // 0x8022619C: addiu       $s5, $zero, 0x2
    ctx->r21 = ADD32(0, 0X2);
    // 0x802261A0: addiu       $s2, $s4, 0x8
    ctx->r18 = ADD32(ctx->r20, 0X8);
L_802261A4:
    // 0x802261A4: lbu         $v0, 0x8($s7)
    ctx->r2 = MEM_BU(ctx->r23, 0X8);
    // 0x802261A8: lh          $v1, -0x6($s2)
    ctx->r3 = MEM_H(ctx->r18, -0X6);
    // 0x802261AC: sll         $a2, $v0, 24
    ctx->r6 = S32(ctx->r2 << 24);
    // 0x802261B0: sra         $v0, $a2, 24
    ctx->r2 = S32(SIGNED(ctx->r6) >> 24);
    // 0x802261B4: beq         $v1, $v0, L_8022644C
    if (ctx->r3 == ctx->r2) {
        // 0x802261B8: nop
    
            goto L_8022644C;
    }
    // 0x802261B8: nop

    // 0x802261BC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802261C0: lhu         $v0, 0x49C4($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X49C4);
    // 0x802261C4: lb          $a0, -0x4($s2)
    ctx->r4 = MEM_B(ctx->r18, -0X4);
    // 0x802261C8: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x802261CC: lhu         $v1, 0x49C8($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X49C8);
    // 0x802261D0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802261D4: sra         $v0, $v0, 25
    ctx->r2 = S32(SIGNED(ctx->r2) >> 25);
    // 0x802261D8: subu        $a1, $v0, $a0
    ctx->r5 = SUB32(ctx->r2, ctx->r4);
    // 0x802261DC: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x802261E0: lb          $a0, -0x3($s2)
    ctx->r4 = MEM_B(ctx->r18, -0X3);
    // 0x802261E4: lbu         $v0, -0x2($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0X2);
    // 0x802261E8: sra         $v1, $v1, 25
    ctx->r3 = S32(SIGNED(ctx->r3) >> 25);
    // 0x802261EC: sltu        $v0, $a1, $v0
    ctx->r2 = ctx->r5 < ctx->r2 ? 1 : 0;
    // 0x802261F0: beq         $v0, $zero, L_8022654C
    if (ctx->r2 == 0) {
        // 0x802261F4: subu        $v1, $v1, $a0
        ctx->r3 = SUB32(ctx->r3, ctx->r4);
            goto L_8022654C;
    }
    // 0x802261F4: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x802261F8: lbu         $v0, -0x1($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0X1);
    // 0x802261FC: sltu        $v0, $v1, $v0
    ctx->r2 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x80226200: beq         $v0, $zero, L_8022654C
    if (ctx->r2 == 0) {
        // 0x80226204: sra         $v1, $a2, 24
        ctx->r3 = S32(SIGNED(ctx->r6) >> 24);
            goto L_8022654C;
    }
    // 0x80226204: sra         $v1, $a2, 24
    ctx->r3 = S32(SIGNED(ctx->r6) >> 24);
    // 0x80226208: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022620C: beql        $v1, $v0, L_80226444
    if (ctx->r3 == ctx->r2) {
        // 0x80226210: sw          $s4, 0x4($s7)
        MEM_W(0X4, ctx->r23) = ctx->r20;
            goto L_80226444;
    }
    goto skip_0;
    // 0x80226210: sw          $s4, 0x4($s7)
    MEM_W(0X4, ctx->r23) = ctx->r20;
    skip_0:
    // 0x80226214: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80226218: lbu         $v0, -0x5A9F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X5A9F);
    // 0x8022621C: lui         $s1, 0x8024
    ctx->r17 = S32(0X8024 << 16);
    // 0x80226220: addiu       $s1, $s1, -0x5AA0
    ctx->r17 = ADD32(ctx->r17, -0X5AA0);
    // 0x80226224: beql        $v0, $s6, L_80226444
    if (ctx->r2 == ctx->r22) {
        // 0x80226228: sw          $s4, 0x4($s7)
        MEM_W(0X4, ctx->r23) = ctx->r20;
            goto L_80226444;
    }
    goto skip_1;
    // 0x80226228: sw          $s4, 0x4($s7)
    MEM_W(0X4, ctx->r23) = ctx->r20;
    skip_1:
    // 0x8022622C: addiu       $s0, $s1, 0x1
    ctx->r16 = ADD32(ctx->r17, 0X1);
L_80226230:
    // 0x80226230: jal         0x8004DA68
    // 0x80226234: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    func_8004DA68_28E68(rdram, ctx);
        goto after_0;
    // 0x80226234: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    after_0:
    // 0x80226238: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022623C: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80226240: beq         $v1, $v0, L_802262E4
    if (ctx->r3 == ctx->r2) {
        // 0x80226244: sltiu       $v0, $v1, 0x41
        ctx->r2 = ctx->r3 < 0X41 ? 1 : 0;
            goto L_802262E4;
    }
    // 0x80226244: sltiu       $v0, $v1, 0x41
    ctx->r2 = ctx->r3 < 0X41 ? 1 : 0;
    // 0x80226248: beq         $v0, $zero, L_80226260
    if (ctx->r2 == 0) {
        // 0x8022624C: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_80226260;
    }
    // 0x8022624C: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80226250: beq         $v1, $v0, L_8022627C
    if (ctx->r3 == ctx->r2) {
        // 0x80226254: nop
    
            goto L_8022627C;
    }
    // 0x80226254: nop

    // 0x80226258: j           L_80226434
    // 0x8022625C: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
        goto L_80226434;
    // 0x8022625C: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
L_80226260:
    // 0x80226260: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x80226264: beq         $v1, $v0, L_8022634C
    if (ctx->r3 == ctx->r2) {
        // 0x80226268: addiu       $v0, $zero, 0xE0
        ctx->r2 = ADD32(0, 0XE0);
            goto L_8022634C;
    }
    // 0x80226268: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
    // 0x8022626C: beq         $v1, $v0, L_802263A4
    if (ctx->r3 == ctx->r2) {
        // 0x80226270: nop
    
            goto L_802263A4;
    }
    // 0x80226270: nop

    // 0x80226274: j           L_80226434
    // 0x80226278: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
        goto L_80226434;
    // 0x80226278: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
L_8022627C:
    // 0x8022627C: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x80226280: jal         0x80053ED8
    // 0x80226284: nop

    func_80053ED8_2F2D8(rdram, ctx);
        goto after_1;
    // 0x80226284: nop

    after_1:
    // 0x80226288: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8022628C: lw          $v1, -0x714C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X714C);
    // 0x80226290: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80226294: lw          $a0, -0x5AAC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5AAC);
    // 0x80226298: lbu         $a1, 0x0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X0);
    // 0x8022629C: xor         $v1, $v1, $a0
    ctx->r3 = ctx->r3 ^ ctx->r4;
    // 0x802262A0: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
    // 0x802262A4: andi        $a1, $a1, 0x1F
    ctx->r5 = ctx->r5 & 0X1F;
    // 0x802262A8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x802262AC: srlv        $v0, $s3, $a1
    ctx->r2 = S32(U32(ctx->r19) >> (ctx->r5 & 31));
    // 0x802262B0: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x802262B4: bne         $v0, $zero, L_802263E4
    if (ctx->r2 != 0) {
        // 0x802262B8: nop
    
            goto L_802263E4;
    }
    // 0x802262B8: nop

    // 0x802262BC: lbu         $v1, 0x2($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X2);
    // 0x802262C0: sb          $s5, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r21;
    // 0x802262C4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802262C8: lw          $v0, 0x4020($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4020);
    // 0x802262CC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x802262D0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802262D4: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x802262D8: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x802262DC: j           L_80226424
    // 0x802262E0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
        goto L_80226424;
    // 0x802262E0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_802262E4:
    // 0x802262E4: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x802262E8: jal         0x80053ED8
    // 0x802262EC: nop

    func_80053ED8_2F2D8(rdram, ctx);
        goto after_2;
    // 0x802262EC: nop

    after_2:
    // 0x802262F0: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x802262F4: lw          $v1, -0x7798($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7798);
    // 0x802262F8: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x802262FC: lw          $a0, -0x5AB0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5AB0);
    // 0x80226300: lbu         $a1, 0x0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X0);
    // 0x80226304: xor         $v1, $v1, $a0
    ctx->r3 = ctx->r3 ^ ctx->r4;
    // 0x80226308: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
    // 0x8022630C: andi        $a1, $a1, 0x1F
    ctx->r5 = ctx->r5 & 0X1F;
    // 0x80226310: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80226314: srlv        $v0, $s3, $a1
    ctx->r2 = S32(U32(ctx->r19) >> (ctx->r5 & 31));
    // 0x80226318: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8022631C: bne         $v0, $zero, L_802263E4
    if (ctx->r2 != 0) {
        // 0x80226320: nop
    
            goto L_802263E4;
    }
    // 0x80226320: nop

    // 0x80226324: lbu         $v1, 0x2($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X2);
    // 0x80226328: sb          $s5, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r21;
    // 0x8022632C: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80226330: lw          $v0, -0x22A0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X22A0);
    // 0x80226334: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80226338: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022633C: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x80226340: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x80226344: j           L_80226424
    // 0x80226348: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
        goto L_80226424;
    // 0x80226348: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_8022634C:
    // 0x8022634C: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x80226350: jal         0x80053ED8
    // 0x80226354: nop

    func_80053ED8_2F2D8(rdram, ctx);
        goto after_3;
    // 0x80226354: nop

    after_3:
    // 0x80226358: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8022635C: lw          $v1, -0x781C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X781C);
    // 0x80226360: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80226364: lw          $a0, -0x5AA8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5AA8);
    // 0x80226368: lbu         $a1, 0x0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X0);
    // 0x8022636C: xor         $v1, $v1, $a0
    ctx->r3 = ctx->r3 ^ ctx->r4;
    // 0x80226370: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
    // 0x80226374: andi        $a1, $a1, 0x1F
    ctx->r5 = ctx->r5 & 0X1F;
    // 0x80226378: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022637C: srlv        $v0, $s3, $a1
    ctx->r2 = S32(U32(ctx->r19) >> (ctx->r5 & 31));
    // 0x80226380: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x80226384: bne         $v0, $zero, L_802263E4
    if (ctx->r2 != 0) {
        // 0x80226388: nop
    
            goto L_802263E4;
    }
    // 0x80226388: nop

    // 0x8022638C: lbu         $v0, 0x2($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X2);
    // 0x80226390: sb          $s5, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r21;
    // 0x80226394: lui         $v1, 0x8022
    ctx->r3 = S32(0X8022 << 16);
    // 0x80226398: lw          $v1, -0x26A8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X26A8);
    // 0x8022639C: j           L_80226424
    // 0x802263A0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
        goto L_80226424;
    // 0x802263A0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_802263A4:
    // 0x802263A4: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x802263A8: jal         0x80053ED8
    // 0x802263AC: nop

    func_80053ED8_2F2D8(rdram, ctx);
        goto after_4;
    // 0x802263AC: nop

    after_4:
    // 0x802263B0: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x802263B4: lw          $v1, -0x72C8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X72C8);
    // 0x802263B8: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x802263BC: lw          $a0, -0x5AA4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5AA4);
    // 0x802263C0: lbu         $a1, 0x0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X0);
    // 0x802263C4: xor         $v1, $v1, $a0
    ctx->r3 = ctx->r3 ^ ctx->r4;
    // 0x802263C8: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
    // 0x802263CC: andi        $a1, $a1, 0x1F
    ctx->r5 = ctx->r5 & 0X1F;
    // 0x802263D0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x802263D4: srlv        $v0, $s3, $a1
    ctx->r2 = S32(U32(ctx->r19) >> (ctx->r5 & 31));
    // 0x802263D8: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x802263DC: beq         $v0, $zero, L_80226410
    if (ctx->r2 == 0) {
        // 0x802263E0: nop
    
            goto L_80226410;
    }
    // 0x802263E0: nop

L_802263E4:
    // 0x802263E4: lb          $v0, 0x0($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X0);
    // 0x802263E8: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x802263EC: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x802263F0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802263F4: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x802263F8: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x802263FC: lw          $a0, 0x14($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X14);
    // 0x80226400: jal         0x8006036C
    // 0x80226404: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    func_8006036C_3B76C(rdram, ctx);
        goto after_5;
    // 0x80226404: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    after_5:
    // 0x80226408: j           L_80226434
    // 0x8022640C: nop

        goto L_80226434;
    // 0x8022640C: nop

L_80226410:
    // 0x80226410: lbu         $v0, 0x2($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X2);
    // 0x80226414: sb          $s5, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r21;
    // 0x80226418: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8022641C: lw          $v1, -0x2344($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X2344);
    // 0x80226420: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_80226424:
    // 0x80226424: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80226428: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8022642C: jalr        $v0
    // 0x80226430: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_6;
    // 0x80226430: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    after_6:
L_80226434:
    // 0x80226434: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80226438: bne         $v0, $s6, L_80226230
    if (ctx->r2 != ctx->r22) {
        // 0x8022643C: addiu       $s1, $s1, 0x2
        ctx->r17 = ADD32(ctx->r17, 0X2);
            goto L_80226230;
    }
    // 0x8022643C: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x80226440: sw          $s4, 0x4($s7)
    MEM_W(0X4, ctx->r23) = ctx->r20;
L_80226444:
    // 0x80226444: j           L_8022654C
    // 0x80226448: sb          $s5, 0x8($fp)
    MEM_B(0X8, ctx->r30) = ctx->r21;
        goto L_8022654C;
    // 0x80226448: sb          $s5, 0x8($fp)
    MEM_B(0X8, ctx->r30) = ctx->r21;
L_8022644C:
    // 0x8022644C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80226450: lbu         $v0, -0x5A9F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X5A9F);
    // 0x80226454: lui         $s1, 0x8024
    ctx->r17 = S32(0X8024 << 16);
    // 0x80226458: addiu       $s1, $s1, -0x5AA0
    ctx->r17 = ADD32(ctx->r17, -0X5AA0);
    // 0x8022645C: beql        $v0, $s6, L_80226550
    if (ctx->r2 == ctx->r22) {
        // 0x80226460: addiu       $s4, $s4, 0xC
        ctx->r20 = ADD32(ctx->r20, 0XC);
            goto L_80226550;
    }
    goto skip_2;
    // 0x80226460: addiu       $s4, $s4, 0xC
    ctx->r20 = ADD32(ctx->r20, 0XC);
    skip_2:
    // 0x80226464: addiu       $s0, $s1, 0x1
    ctx->r16 = ADD32(ctx->r17, 0X1);
L_80226468:
    // 0x80226468: jal         0x8004DA68
    // 0x8022646C: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    func_8004DA68_28E68(rdram, ctx);
        goto after_7;
    // 0x8022646C: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    after_7:
    // 0x80226470: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80226474: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80226478: beq         $v1, $v0, L_802264C8
    if (ctx->r3 == ctx->r2) {
        // 0x8022647C: sltiu       $v0, $v1, 0x41
        ctx->r2 = ctx->r3 < 0X41 ? 1 : 0;
            goto L_802264C8;
    }
    // 0x8022647C: sltiu       $v0, $v1, 0x41
    ctx->r2 = ctx->r3 < 0X41 ? 1 : 0;
    // 0x80226480: beq         $v0, $zero, L_80226498
    if (ctx->r2 == 0) {
        // 0x80226484: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_80226498;
    }
    // 0x80226484: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80226488: beq         $v1, $v0, L_802264B4
    if (ctx->r3 == ctx->r2) {
        // 0x8022648C: nop
    
            goto L_802264B4;
    }
    // 0x8022648C: nop

    // 0x80226490: j           L_80226540
    // 0x80226494: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
        goto L_80226540;
    // 0x80226494: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
L_80226498:
    // 0x80226498: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x8022649C: beq         $v1, $v0, L_802264DC
    if (ctx->r3 == ctx->r2) {
        // 0x802264A0: addiu       $v0, $zero, 0xE0
        ctx->r2 = ADD32(0, 0XE0);
            goto L_802264DC;
    }
    // 0x802264A0: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
    // 0x802264A4: beq         $v1, $v0, L_802264F0
    if (ctx->r3 == ctx->r2) {
        // 0x802264A8: nop
    
            goto L_802264F0;
    }
    // 0x802264A8: nop

    // 0x802264AC: j           L_80226540
    // 0x802264B0: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
        goto L_80226540;
    // 0x802264B0: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
L_802264B4:
    // 0x802264B4: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x802264B8: lw          $v0, -0x714C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X714C);
    // 0x802264BC: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x802264C0: j           L_80226500
    // 0x802264C4: lw          $v1, -0x5AAC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5AAC);
        goto L_80226500;
    // 0x802264C4: lw          $v1, -0x5AAC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5AAC);
L_802264C8:
    // 0x802264C8: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x802264CC: lw          $v0, -0x7798($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7798);
    // 0x802264D0: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x802264D4: j           L_80226500
    // 0x802264D8: lw          $v1, -0x5AB0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5AB0);
        goto L_80226500;
    // 0x802264D8: lw          $v1, -0x5AB0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5AB0);
L_802264DC:
    // 0x802264DC: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x802264E0: lw          $v0, -0x781C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X781C);
    // 0x802264E4: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x802264E8: j           L_80226500
    // 0x802264EC: lw          $v1, -0x5AA8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5AA8);
        goto L_80226500;
    // 0x802264EC: lw          $v1, -0x5AA8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5AA8);
L_802264F0:
    // 0x802264F0: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x802264F4: lw          $v0, -0x72C8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X72C8);
    // 0x802264F8: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x802264FC: lw          $v1, -0x5AA4($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5AA4);
L_80226500:
    // 0x80226500: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x80226504: xor         $v0, $v0, $v1
    ctx->r2 = ctx->r2 ^ ctx->r3;
    // 0x80226508: and         $v1, $v0, $v1
    ctx->r3 = ctx->r2 & ctx->r3;
    // 0x8022650C: andi        $a1, $a0, 0x1F
    ctx->r5 = ctx->r4 & 0X1F;
    // 0x80226510: srlv        $v0, $s3, $a1
    ctx->r2 = S32(U32(ctx->r19) >> (ctx->r5 & 31));
    // 0x80226514: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x80226518: beq         $v0, $zero, L_80226540
    if (ctx->r2 == 0) {
        // 0x8022651C: addiu       $s0, $s0, 0x2
        ctx->r16 = ADD32(ctx->r16, 0X2);
            goto L_80226540;
    }
    // 0x8022651C: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x80226520: lb          $v0, 0x0($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X0);
    // 0x80226524: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x80226528: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x8022652C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80226530: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80226534: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80226538: jal         0x8006036C
    // 0x8022653C: lw          $a0, 0x14($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X14);
    func_8006036C_3B76C(rdram, ctx);
        goto after_8;
    // 0x8022653C: lw          $a0, 0x14($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X14);
    after_8:
L_80226540:
    // 0x80226540: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80226544: bne         $v0, $s6, L_80226468
    if (ctx->r2 != ctx->r22) {
        // 0x80226548: addiu       $s1, $s1, 0x2
        ctx->r17 = ADD32(ctx->r17, 0X2);
            goto L_80226468;
    }
    // 0x80226548: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
L_8022654C:
    // 0x8022654C: addiu       $s4, $s4, 0xC
    ctx->r20 = ADD32(ctx->r20, 0XC);
L_80226550:
    // 0x80226550: lh          $v1, 0x0($s4)
    ctx->r3 = MEM_H(ctx->r20, 0X0);
    // 0x80226554: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80226558: bne         $v1, $v0, L_802261A4
    if (ctx->r3 != ctx->r2) {
        // 0x8022655C: addiu       $s2, $s2, 0xC
        ctx->r18 = ADD32(ctx->r18, 0XC);
            goto L_802261A4;
    }
    // 0x8022655C: addiu       $s2, $s2, 0xC
    ctx->r18 = ADD32(ctx->r18, 0XC);
L_80226560:
    // 0x80226560: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80226564: lw          $v0, -0x714C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X714C);
    // 0x80226568: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8022656C: lw          $v1, -0x7798($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7798);
    // 0x80226570: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x80226574: lw          $a0, -0x781C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X781C);
    // 0x80226578: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x8022657C: lw          $a1, -0x72C8($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X72C8);
    // 0x80226580: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80226584: sw          $v0, -0x5AAC($at)
    MEM_W(-0X5AAC, ctx->r1) = ctx->r2;
    // 0x80226588: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022658C: sw          $v1, -0x5AB0($at)
    MEM_W(-0X5AB0, ctx->r1) = ctx->r3;
    // 0x80226590: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80226594: sw          $a0, -0x5AA8($at)
    MEM_W(-0X5AA8, ctx->r1) = ctx->r4;
    // 0x80226598: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022659C: sw          $a1, -0x5AA4($at)
    MEM_W(-0X5AA4, ctx->r1) = ctx->r5;
    // 0x802265A0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x802265A4: lw          $fp, 0x30($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X30);
    // 0x802265A8: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x802265AC: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x802265B0: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x802265B4: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x802265B8: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x802265BC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802265C0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802265C4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802265C8: jr          $ra
    // 0x802265CC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x802265CC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80225468_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225468: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022546C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225470: jal         0x8006033C
    // 0x80225474: addiu       $a0, $zero, 0x7B0
    ctx->r4 = ADD32(0, 0X7B0);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80225474: addiu       $a0, $zero, 0x7B0
    ctx->r4 = ADD32(0, 0X7B0);
    after_0:
    // 0x80225478: beq         $v0, $zero, L_80225488
    if (ctx->r2 == 0) {
        // 0x8022547C: nop
    
            goto L_80225488;
    }
    // 0x8022547C: nop

    // 0x80225480: jal         0x80060690
    // 0x80225484: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80060690_3BA90(rdram, ctx);
        goto after_1;
    // 0x80225484: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_1:
L_80225488:
    // 0x80225488: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022548C: jr          $ra
    // 0x80225490: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225490: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B484_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B484: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022B488: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B48C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B490: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022B494: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022B498: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022B49C: beq         $v1, $zero, L_8022B4B8
    if (ctx->r3 == 0) {
        // 0x8022B4A0: addiu       $s1, $s0, 0x328
        ctx->r17 = ADD32(ctx->r16, 0X328);
            goto L_8022B4B8;
    }
    // 0x8022B4A0: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x8022B4A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B4A8: beq         $v1, $v0, L_8022B4C8
    if (ctx->r3 == ctx->r2) {
        // 0x8022B4AC: nop
    
            goto L_8022B4C8;
    }
    // 0x8022B4AC: nop

    // 0x8022B4B0: j           L_8022B5F0
    // 0x8022B4B4: nop

        goto L_8022B5F0;
    // 0x8022B4B4: nop

L_8022B4B8:
    // 0x8022B4B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B4BC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022B4C0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022B4C4: sh          $zero, 0x330($s0)
    MEM_H(0X330, ctx->r16) = 0;
L_8022B4C8:
    // 0x8022B4C8: lb          $v1, 0xA6($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA6);
    // 0x8022B4CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B4D0: bnel        $v1, $v0, L_8022B4E8
    if (ctx->r3 != ctx->r2) {
        // 0x8022B4D4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022B4E8;
    }
    goto skip_0;
    // 0x8022B4D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    skip_0:
    // 0x8022B4D8: addiu       $a0, $zero, 0xB0
    ctx->r4 = ADD32(0, 0XB0);
    // 0x8022B4DC: jal         0x8002A33C
    // 0x8022B4E0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x8022B4E0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x8022B4E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022B4E8:
    // 0x8022B4E8: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022B4EC: lhu         $v1, 0x66($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X66);
    // 0x8022B4F0: addiu       $a1, $zero, 0x34
    ctx->r5 = ADD32(0, 0X34);
    // 0x8022B4F4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022B4F8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022B4FC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022B500: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022B504: jal         0x8004DA90
    // 0x8022B508: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x8022B508: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022B50C: jal         0x80040F30
    // 0x8022B510: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_2;
    // 0x8022B510: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022B514: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B518: jal         0x8003E934
    // 0x8022B51C: sw          $v0, 0x48($s1)
    MEM_W(0X48, ctx->r17) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_3;
    // 0x8022B51C: sw          $v0, 0x48($s1)
    MEM_W(0X48, ctx->r17) = ctx->r2;
    after_3:
    // 0x8022B520: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022B524: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x8022B528: lh          $v1, 0x2E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2E);
    // 0x8022B52C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B530: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022B534: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x8022B538: bltz        $v0, L_8022B550
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022B53C: slti        $v0, $v0, 0x21
        ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
            goto L_8022B550;
    }
    // 0x8022B53C: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x8022B540: beq         $v0, $zero, L_8022B560
    if (ctx->r2 == 0) {
        // 0x8022B544: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022B560;
    }
    // 0x8022B544: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022B548: j           L_8022B5A0
    // 0x8022B54C: nop

        goto L_8022B5A0;
    // 0x8022B54C: nop

L_8022B550:
    // 0x8022B550: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x8022B554: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x8022B558: bne         $v0, $zero, L_8022B5A0
    if (ctx->r2 != 0) {
        // 0x8022B55C: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022B5A0;
    }
    // 0x8022B55C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_8022B560:
    // 0x8022B560: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x8022B564: jal         0x8009A3B4
    // 0x8022B568: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8022B568: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x8022B56C: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8022B570: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x8022B574: jal         0x8009A3B4
    // 0x8022B578: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8022B578: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_5:
    // 0x8022B57C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B580: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022B584: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8022B588: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022B58C: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8022B590: bne         $v0, $zero, L_8022B5C8
    if (ctx->r2 != 0) {
        // 0x8022B594: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8022B5C8;
    }
    // 0x8022B594: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022B598: j           L_8022B5D4
    // 0x8022B59C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_8022B5D4;
    // 0x8022B59C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8022B5A0:
    // 0x8022B5A0: lw          $v0, 0x48($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X48);
    // 0x8022B5A4: andi        $v0, $v0, 0xF00
    ctx->r2 = ctx->r2 & 0XF00;
    // 0x8022B5A8: beq         $v0, $zero, L_8022B5DC
    if (ctx->r2 == 0) {
        // 0x8022B5AC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022B5DC;
    }
    // 0x8022B5AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B5B0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022B5B4: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8022B5B8: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022B5BC: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8022B5C0: beq         $v0, $zero, L_8022B5D0
    if (ctx->r2 == 0) {
        // 0x8022B5C4: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8022B5D0;
    }
    // 0x8022B5C4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_8022B5C8:
    // 0x8022B5C8: j           L_8022B5F0
    // 0x8022B5CC: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
        goto L_8022B5F0;
    // 0x8022B5CC: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
L_8022B5D0:
    // 0x8022B5D0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8022B5D4:
    // 0x8022B5D4: j           L_8022B5F0
    // 0x8022B5D8: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
        goto L_8022B5F0;
    // 0x8022B5D8: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
L_8022B5DC:
    // 0x8022B5DC: lhu         $v1, 0x0($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X0);
    // 0x8022B5E0: andi        $v0, $v1, 0x10
    ctx->r2 = ctx->r3 & 0X10;
    // 0x8022B5E4: beq         $v0, $zero, L_8022B5F0
    if (ctx->r2 == 0) {
        // 0x8022B5E8: ori         $v0, $v1, 0x1
        ctx->r2 = ctx->r3 | 0X1;
            goto L_8022B5F0;
    }
    // 0x8022B5E8: ori         $v0, $v1, 0x1
    ctx->r2 = ctx->r3 | 0X1;
    // 0x8022B5EC: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8022B5F0:
    // 0x8022B5F0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022B5F4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022B5F8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B5FC: jr          $ra
    // 0x8022B600: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022B600: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022A300_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A300: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022A304: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8022A308: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022A30C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8022A310: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8022A314: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022A318: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8022A31C: lbu         $v1, 0xC($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XC);
    // 0x8022A320: addiu       $s2, $s1, 0x2C
    ctx->r18 = ADD32(ctx->r17, 0X2C);
    // 0x8022A324: sh          $zero, 0x30($s1)
    MEM_H(0X30, ctx->r17) = 0;
    // 0x8022A328: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022A32C: andi        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 & 0X1;
    // 0x8022A330: beq         $v1, $zero, L_8022A354
    if (ctx->r3 == 0) {
        // 0x8022A334: sb          $v0, 0x0($s1)
        MEM_B(0X0, ctx->r17) = ctx->r2;
            goto L_8022A354;
    }
    // 0x8022A334: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x8022A338: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x8022A33C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022A340: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022A344: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022A348: lhu         $v0, -0x65BE($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X65BE);
    // 0x8022A34C: j           L_8022A36C
    // 0x8022A350: sh          $v0, 0x2C($s1)
    MEM_H(0X2C, ctx->r17) = ctx->r2;
        goto L_8022A36C;
    // 0x8022A350: sh          $v0, 0x2C($s1)
    MEM_H(0X2C, ctx->r17) = ctx->r2;
L_8022A354:
    // 0x8022A354: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x8022A358: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022A35C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022A360: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022A364: lhu         $v0, -0x65C0($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X65C0);
    // 0x8022A368: sh          $v0, 0x2C($s1)
    MEM_H(0X2C, ctx->r17) = ctx->r2;
L_8022A36C:
    // 0x8022A36C: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x8022A370: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022A374: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022A378: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022A37C: lhu         $v0, -0x65A8($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X65A8);
    // 0x8022A380: sh          $v0, 0x2($s2)
    MEM_H(0X2, ctx->r18) = ctx->r2;
    // 0x8022A384: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x8022A388: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022A38C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022A390: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022A394: lhu         $v0, -0x6590($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X6590);
    // 0x8022A398: sh          $v0, 0x6($s2)
    MEM_H(0X6, ctx->r18) = ctx->r2;
    // 0x8022A39C: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x8022A3A0: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022A3A4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022A3A8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022A3AC: lhu         $v0, -0x6578($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X6578);
    // 0x8022A3B0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022A3B4: addiu       $a1, $s1, 0x3
    ctx->r5 = ADD32(ctx->r17, 0X3);
    // 0x8022A3B8: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
    // 0x8022A3BC: jal         0x8004D5D4
    // 0x8022A3C0: sh          $v0, 0x8($s2)
    MEM_H(0X8, ctx->r18) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022A3C0: sh          $v0, 0x8($s2)
    MEM_H(0X8, ctx->r18) = ctx->r2;
    after_0:
    // 0x8022A3C4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8022A3C8: sh          $zero, 0x10($sp)
    MEM_H(0X10, ctx->r29) = 0;
    // 0x8022A3CC: lbu         $v0, 0xC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XC);
    // 0x8022A3D0: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x8022A3D4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022A3D8: sh          $zero, 0x14($sp)
    MEM_H(0X14, ctx->r29) = 0;
    // 0x8022A3DC: sll         $v0, $v0, 10
    ctx->r2 = S32(ctx->r2 << 10);
    // 0x8022A3E0: andi        $v0, $v0, 0x800
    ctx->r2 = ctx->r2 & 0X800;
    // 0x8022A3E4: addiu       $v0, $v0, -0x400
    ctx->r2 = ADD32(ctx->r2, -0X400);
    // 0x8022A3E8: jal         0x80031600
    // 0x8022A3EC: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    func_80031600_CA00(rdram, ctx);
        goto after_1;
    // 0x8022A3EC: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    after_1:
    // 0x8022A3F0: lh          $v0, 0x4($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X4);
    // 0x8022A3F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A3F8: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x8022A3FC: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8022A400: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8022A404: jal         0x80031DA8
    // 0x8022A408: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_2;
    // 0x8022A408: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_2:
    // 0x8022A40C: lbu         $v1, 0x8($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X8);
    // 0x8022A410: lbu         $a0, 0x3($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X3);
    // 0x8022A414: lui         $v0, 0x280
    ctx->r2 = S32(0X280 << 16);
    // 0x8022A418: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x8022A41C: sw          $v0, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->r2;
    // 0x8022A420: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022A424: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
    // 0x8022A428: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x8022A42C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022A430: sll         $a0, $a0, 1
    ctx->r4 = S32(ctx->r4 << 1);
    // 0x8022A434: sb          $v1, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r3;
    // 0x8022A438: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022A43C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022A440: lhu         $v0, -0x6560($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X6560);
    // 0x8022A444: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    // 0x8022A448: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8022A44C: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8022A450: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022A454: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022A458: jr          $ra
    // 0x8022A45C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022A45C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80226060_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226060: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226064: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226068: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022606C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226070: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80226074: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x80226078: addiu       $a1, $a1, -0x3BC8
    ctx->r5 = ADD32(ctx->r5, -0X3BC8);
    // 0x8022607C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226080: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80226084: sb          $a0, 0x1D($s0)
    MEM_B(0X1D, ctx->r16) = ctx->r4;
    // 0x80226088: sb          $a0, 0x1C($s0)
    MEM_B(0X1C, ctx->r16) = ctx->r4;
    // 0x8022608C: lb          $v1, 0x0($a1)
    ctx->r3 = MEM_B(ctx->r5, 0X0);
    // 0x80226090: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80226094: lb          $v0, -0x3BC7($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC7);
    // 0x80226098: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022609C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802260A0: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x802260A4: lw          $v1, -0x6CA0($at)
    ctx->r3 = MEM_W(ctx->r1, -0X6CA0);
    // 0x802260A8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802260AC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802260B0: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x802260B4: sw          $zero, 0x18($s0)
    MEM_W(0X18, ctx->r16) = 0;
    // 0x802260B8: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x802260BC: lb          $v1, 0x0($a1)
    ctx->r3 = MEM_B(ctx->r5, 0X0);
    // 0x802260C0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802260C4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802260C8: sb          $a0, -0x5AA0($at)
    MEM_B(-0X5AA0, ctx->r1) = ctx->r4;
    // 0x802260CC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802260D0: sb          $v0, -0x5A9F($at)
    MEM_B(-0X5A9F, ctx->r1) = ctx->r2;
    // 0x802260D4: sltiu       $v0, $v1, 0x1E
    ctx->r2 = ctx->r3 < 0X1E ? 1 : 0;
    // 0x802260D8: beq         $v0, $zero, L_80226130
    if (ctx->r2 == 0) {
        // 0x802260DC: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80226130;
    }
    // 0x802260DC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802260E0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802260E4: addu        $at, $at, $v0
    gpr jr_addend_802260EC = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802260E8: lw          $v0, -0x5C80($at)
    ctx->r2 = ADD32(ctx->r1, -0X5C80);
    // 0x802260EC: jr          $v0
    // 0x802260F0: nop

    switch (jr_addend_802260EC >> 2) {
        case 0: goto L_802260F4; break;
        case 1: goto L_80226130; break;
        case 2: goto L_80226130; break;
        case 3: goto L_80226130; break;
        case 4: goto L_80226130; break;
        case 5: goto L_80226130; break;
        case 6: goto L_80226130; break;
        case 7: goto L_80226130; break;
        case 8: goto L_80226130; break;
        case 9: goto L_802260FC; break;
        case 10: goto L_80226130; break;
        case 11: goto L_80226130; break;
        case 12: goto L_80226130; break;
        case 13: goto L_80226130; break;
        case 14: goto L_80226104; break;
        case 15: goto L_80226130; break;
        case 16: goto L_80226130; break;
        case 17: goto L_80226130; break;
        case 18: goto L_80226130; break;
        case 19: goto L_8022610C; break;
        case 20: goto L_80226114; break;
        case 21: goto L_80226130; break;
        case 22: goto L_80226130; break;
        case 23: goto L_80226130; break;
        case 24: goto L_80226130; break;
        case 25: goto L_80226130; break;
        case 26: goto L_8022611C; break;
        case 27: goto L_80226130; break;
        case 28: goto L_80226130; break;
        case 29: goto L_80226124; break;
        default: switch_error(__func__, 0x802260EC, 0x8023A380);
    }
    // 0x802260F0: nop

L_802260F4:
    // 0x802260F4: j           L_80226128
    // 0x802260F8: addiu       $a0, $zero, 0x630
    ctx->r4 = ADD32(0, 0X630);
        goto L_80226128;
    // 0x802260F8: addiu       $a0, $zero, 0x630
    ctx->r4 = ADD32(0, 0X630);
L_802260FC:
    // 0x802260FC: j           L_80226128
    // 0x80226100: addiu       $a0, $zero, 0x610
    ctx->r4 = ADD32(0, 0X610);
        goto L_80226128;
    // 0x80226100: addiu       $a0, $zero, 0x610
    ctx->r4 = ADD32(0, 0X610);
L_80226104:
    // 0x80226104: j           L_80226128
    // 0x80226108: addiu       $a0, $zero, 0x610
    ctx->r4 = ADD32(0, 0X610);
        goto L_80226128;
    // 0x80226108: addiu       $a0, $zero, 0x610
    ctx->r4 = ADD32(0, 0X610);
L_8022610C:
    // 0x8022610C: j           L_80226128
    // 0x80226110: addiu       $a0, $zero, 0x620
    ctx->r4 = ADD32(0, 0X620);
        goto L_80226128;
    // 0x80226110: addiu       $a0, $zero, 0x620
    ctx->r4 = ADD32(0, 0X620);
L_80226114:
    // 0x80226114: j           L_80226128
    // 0x80226118: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
        goto L_80226128;
    // 0x80226118: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
L_8022611C:
    // 0x8022611C: j           L_80226128
    // 0x80226120: addiu       $a0, $zero, 0x605
    ctx->r4 = ADD32(0, 0X605);
        goto L_80226128;
    // 0x80226120: addiu       $a0, $zero, 0x605
    ctx->r4 = ADD32(0, 0X605);
L_80226124:
    // 0x80226124: addiu       $a0, $zero, 0x604
    ctx->r4 = ADD32(0, 0X604);
L_80226128:
    // 0x80226128: jal         0x80060590
    // 0x8022612C: nop

    func_80060590_3B990(rdram, ctx);
        goto after_0;
    // 0x8022612C: nop

    after_0:
L_80226130:
    // 0x80226130: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226134: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80226138: jal         0x80226150
    // 0x8022613C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80226150_ovl22(rdram, ctx);
        goto after_1;
    // 0x8022613C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80226140: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226144: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226148: jr          $ra
    // 0x8022614C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022614C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228474_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228474: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228478: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022847C: lbu         $v0, 0xB($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XB);
    // 0x80228480: beq         $v0, $zero, L_80228490
    if (ctx->r2 == 0) {
        // 0x80228484: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_80228490;
    }
    // 0x80228484: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80228488: j           L_802284D0
    // 0x8022848C: sb          $v0, 0xB($a0)
    MEM_B(0XB, ctx->r4) = ctx->r2;
        goto L_802284D0;
    // 0x8022848C: sb          $v0, 0xB($a0)
    MEM_B(0XB, ctx->r4) = ctx->r2;
L_80228490:
    // 0x80228490: lbu         $v1, 0x5($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X5);
    // 0x80228494: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x80228498: sw          $v0, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r2;
    // 0x8022849C: bne         $v1, $zero, L_802284AC
    if (ctx->r3 != 0) {
        // 0x802284A0: sb          $zero, 0x9($a0)
        MEM_B(0X9, ctx->r4) = 0;
            goto L_802284AC;
    }
    // 0x802284A0: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    // 0x802284A4: j           L_802284C8
    // 0x802284A8: addiu       $a0, $zero, 0x605
    ctx->r4 = ADD32(0, 0X605);
        goto L_802284C8;
    // 0x802284A8: addiu       $a0, $zero, 0x605
    ctx->r4 = ADD32(0, 0X605);
L_802284AC:
    // 0x802284AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802284B0: bne         $v1, $v0, L_802284C0
    if (ctx->r3 != ctx->r2) {
        // 0x802284B4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802284C0;
    }
    // 0x802284B4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802284B8: j           L_802284C8
    // 0x802284BC: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
        goto L_802284C8;
    // 0x802284BC: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
L_802284C0:
    // 0x802284C0: bne         $v1, $v0, L_802284D0
    if (ctx->r3 != ctx->r2) {
        // 0x802284C4: addiu       $a0, $zero, 0x604
        ctx->r4 = ADD32(0, 0X604);
            goto L_802284D0;
    }
    // 0x802284C4: addiu       $a0, $zero, 0x604
    ctx->r4 = ADD32(0, 0X604);
L_802284C8:
    // 0x802284C8: jal         0x80060590
    // 0x802284CC: nop

    func_80060590_3B990(rdram, ctx);
        goto after_0;
    // 0x802284CC: nop

    after_0:
L_802284D0:
    // 0x802284D0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802284D4: jr          $ra
    // 0x802284D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802284D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022D594_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D594: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D598: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022D59C: jal         0x8004F418
    // 0x8022D5A0: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x8022D5A0: nop

    after_0:
    // 0x8022D5A4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022D5A8: jr          $ra
    // 0x8022D5AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022D5AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228380_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228380: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228384: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80228388: jal         0x8004F684
    // 0x8022838C: nop

    func_8004F684_2AA84(rdram, ctx);
        goto after_0;
    // 0x8022838C: nop

    after_0:
    // 0x80228390: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80228394: jr          $ra
    // 0x80228398: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228398: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80236C0C_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236C0C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80236C10: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80236C14: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80236C18: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80236C1C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80236C20: lbu         $s1, 0xA($s0)
    ctx->r17 = MEM_BU(ctx->r16, 0XA);
    // 0x80236C24: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80236C28: beq         $s1, $a0, L_80236CD8
    if (ctx->r17 == ctx->r4) {
        // 0x80236C2C: slti        $v0, $s1, 0x2
        ctx->r2 = SIGNED(ctx->r17) < 0X2 ? 1 : 0;
            goto L_80236CD8;
    }
    // 0x80236C2C: slti        $v0, $s1, 0x2
    ctx->r2 = SIGNED(ctx->r17) < 0X2 ? 1 : 0;
    // 0x80236C30: beql        $v0, $zero, L_80236C48
    if (ctx->r2 == 0) {
        // 0x80236C34: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80236C48;
    }
    goto skip_0;
    // 0x80236C34: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80236C38: beq         $s1, $zero, L_80236C58
    if (ctx->r17 == 0) {
        // 0x80236C3C: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_80236C58;
    }
    // 0x80236C3C: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80236C40: j           L_80236D8C
    // 0x80236C44: nop

        goto L_80236D8C;
    // 0x80236C44: nop

L_80236C48:
    // 0x80236C48: beq         $s1, $v0, L_80236D48
    if (ctx->r17 == ctx->r2) {
        // 0x80236C4C: lui         $v1, 0x80
        ctx->r3 = S32(0X80 << 16);
            goto L_80236D48;
    }
    // 0x80236C4C: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x80236C50: j           L_80236D8C
    // 0x80236C54: nop

        goto L_80236D8C;
    // 0x80236C54: nop

L_80236C58:
    // 0x80236C58: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80236C5C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80236C60: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80236C64: bne         $v0, $zero, L_80236D8C
    if (ctx->r2 != 0) {
        // 0x80236C68: nop
    
            goto L_80236D8C;
    }
    // 0x80236C68: nop

    // 0x80236C6C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80236C70: lhu         $v0, 0x49C4($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X49C4);
    // 0x80236C74: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80236C78: sra         $v0, $v0, 25
    ctx->r2 = S32(SIGNED(ctx->r2) >> 25);
    // 0x80236C7C: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x80236C80: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80236C84: lhu         $v0, 0x49C8($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X49C8);
    // 0x80236C88: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x80236C8C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80236C90: sra         $v0, $v0, 25
    ctx->r2 = S32(SIGNED(ctx->r2) >> 25);
    // 0x80236C94: bne         $v1, $a0, L_80236CA8
    if (ctx->r3 != ctx->r4) {
        // 0x80236C98: sh          $v0, 0x18($s0)
        MEM_H(0X18, ctx->r16) = ctx->r2;
            goto L_80236CA8;
    }
    // 0x80236C98: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x80236C9C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80236CA0: j           L_80236D3C
    // 0x80236CA4: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
        goto L_80236D3C;
    // 0x80236CA4: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
L_80236CA8:
    // 0x80236CA8: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x80236CAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236CB0: sll         $a1, $v0, 2
    ctx->r5 = S32(ctx->r2 << 2);
    // 0x80236CB4: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80236CB8: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80236CBC: addiu       $v0, $v0, -0x5CE0
    ctx->r2 = ADD32(ctx->r2, -0X5CE0);
    // 0x80236CC0: jal         0x80236DA0
    // 0x80236CC4: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    func_80236DA0_ovl22(rdram, ctx);
        goto after_0;
    // 0x80236CC4: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    after_0:
    // 0x80236CC8: bne         $v0, $zero, L_80236D38
    if (ctx->r2 != 0) {
        // 0x80236CCC: nop
    
            goto L_80236D38;
    }
    // 0x80236CCC: nop

    // 0x80236CD0: j           L_80236D88
    // 0x80236CD4: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
        goto L_80236D88;
    // 0x80236CD4: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_80236CD8:
    // 0x80236CD8: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x80236CDC: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x80236CE0: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80236CE4: lbu         $a1, -0x5CBC($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X5CBC);
    // 0x80236CE8: jal         0x800616FC
    // 0x80236CEC: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_1;
    // 0x80236CEC: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_1:
    // 0x80236CF0: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x80236CF4: addiu       $v0, $zero, 0x48
    ctx->r2 = ADD32(0, 0X48);
    // 0x80236CF8: srav        $v0, $v0, $v1
    ctx->r2 = S32(SIGNED(ctx->r2) >> (ctx->r3 & 31));
    // 0x80236CFC: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80236D00: beq         $v0, $zero, L_80236D1C
    if (ctx->r2 == 0) {
        // 0x80236D04: nop
    
            goto L_80236D1C;
    }
    // 0x80236D04: nop

    // 0x80236D08: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80236D0C: lbu         $v0, 0x4A6D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4A6D);
    // 0x80236D10: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x80236D14: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80236D18: sb          $v0, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r2;
L_80236D1C:
    // 0x80236D1C: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x80236D20: addiu       $a0, $a0, -0x3AA4
    ctx->r4 = ADD32(ctx->r4, -0X3AA4);
    // 0x80236D24: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x80236D28: lhu         $v1, 0x0($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X0);
    // 0x80236D2C: sllv        $v0, $s1, $v0
    ctx->r2 = S32(ctx->r17 << (ctx->r2 & 31));
    // 0x80236D30: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80236D34: sh          $v1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r3;
L_80236D38:
    // 0x80236D38: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
L_80236D3C:
    // 0x80236D3C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80236D40: j           L_80236D8C
    // 0x80236D44: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_80236D8C;
    // 0x80236D44: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80236D48:
    // 0x80236D48: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80236D4C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80236D50: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80236D54: bne         $v0, $zero, L_80236D8C
    if (ctx->r2 != 0) {
        // 0x80236D58: addiu       $v0, $zero, 0x48
        ctx->r2 = ADD32(0, 0X48);
            goto L_80236D8C;
    }
    // 0x80236D58: addiu       $v0, $zero, 0x48
    ctx->r2 = ADD32(0, 0X48);
    // 0x80236D5C: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x80236D60: srav        $v0, $v0, $v1
    ctx->r2 = S32(SIGNED(ctx->r2) >> (ctx->r3 & 31));
    // 0x80236D64: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80236D68: beql        $v0, $zero, L_80236D88
    if (ctx->r2 == 0) {
        // 0x80236D6C: sb          $zero, 0x9($s0)
        MEM_B(0X9, ctx->r16) = 0;
            goto L_80236D88;
    }
    goto skip_1;
    // 0x80236D6C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    skip_1:
    // 0x80236D70: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80236D74: lbu         $v0, 0x4A6D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4A6D);
    // 0x80236D78: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x80236D7C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80236D80: sb          $v0, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r2;
    // 0x80236D84: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_80236D88:
    // 0x80236D88: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_80236D8C:
    // 0x80236D8C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80236D90: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80236D94: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80236D98: jr          $ra
    // 0x80236D9C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80236D9C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022F0F0_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F0F0: lbu         $v0, 0x395($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X395);
    // 0x8022F0F4: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
    // 0x8022F0F8: sb          $v0, 0x395($a0)
    MEM_B(0X395, ctx->r4) = ctx->r2;
    // 0x8022F0FC: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022F100: sltiu       $v0, $v0, 0x21
    ctx->r2 = ctx->r2 < 0X21 ? 1 : 0;
    // 0x8022F104: beq         $v0, $zero, L_8022F11C
    if (ctx->r2 == 0) {
        // 0x8022F108: addiu       $v1, $zero, 0x4
        ctx->r3 = ADD32(0, 0X4);
            goto L_8022F11C;
    }
    // 0x8022F108: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x8022F10C: lbu         $v0, 0xCA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XCA);
    // 0x8022F110: sb          $v1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r3;
    // 0x8022F114: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8022F118: sb          $v0, 0xCA($a0)
    MEM_B(0XCA, ctx->r4) = ctx->r2;
L_8022F11C:
    // 0x8022F11C: jr          $ra
    // 0x8022F120: nop

    TRACE_RETURN()
    return;
    // 0x8022F120: nop

;}
RECOMP_FUNC void func_8022A0F4_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A0F4: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8022A0F8: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8022A0FC: lw          $s2, 0x60($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X60);
    // 0x8022A100: lw          $v0, 0x64($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X64);
    // 0x8022A104: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x8022A108: addu        $s6, $a2, $zero
    ctx->r22 = ADD32(ctx->r6, 0);
    // 0x8022A10C: subu        $v0, $v0, $s2
    ctx->r2 = SUB32(ctx->r2, ctx->r18);
    // 0x8022A110: div         $zero, $v0, $s6
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r22))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r22)));
    // 0x8022A114: bne         $s6, $zero, L_8022A120
    if (ctx->r22 != 0) {
        // 0x8022A118: nop
    
            goto L_8022A120;
    }
    // 0x8022A118: nop

    // 0x8022A11C: break       7
    do_break(2149753116);
L_8022A120:
    // 0x8022A120: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8022A124: bne         $s6, $at, L_8022A138
    if (ctx->r22 != ctx->r1) {
        // 0x8022A128: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8022A138;
    }
    // 0x8022A128: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8022A12C: bne         $v0, $at, L_8022A138
    if (ctx->r2 != ctx->r1) {
        // 0x8022A130: nop
    
            goto L_8022A138;
    }
    // 0x8022A130: nop

    // 0x8022A134: break       6
    do_break(2149753140);
L_8022A138:
    // 0x8022A138: mflo        $t0
    ctx->r8 = lo;
    // 0x8022A13C: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x8022A140: addu        $s7, $a0, $zero
    ctx->r23 = ADD32(ctx->r4, 0);
    // 0x8022A144: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x8022A148: addu        $s5, $a1, $zero
    ctx->r21 = ADD32(ctx->r5, 0);
    // 0x8022A14C: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x8022A150: addu        $s4, $a3, $zero
    ctx->r20 = ADD32(ctx->r7, 0);
    // 0x8022A154: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x8022A158: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x8022A15C: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x8022A160: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x8022A164: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8022A168: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022A16C: blez        $s6, L_8022A29C
    if (SIGNED(ctx->r22) <= 0) {
        // 0x8022A170: sw          $t0, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r8;
            goto L_8022A29C;
    }
    // 0x8022A170: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x8022A174: sll         $v0, $s5, 2
    ctx->r2 = S32(ctx->r21 << 2);
    // 0x8022A178: addu        $v0, $v0, $s5
    ctx->r2 = ADD32(ctx->r2, ctx->r21);
    // 0x8022A17C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022A180: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8022A184: sll         $fp, $s5, 4
    ctx->r30 = S32(ctx->r21 << 4);
L_8022A188:
    // 0x8022A188: jal         0x8004F144
    // 0x8022A18C: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8022A18C: nop

    after_0:
    // 0x8022A190: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022A194: beq         $s0, $zero, L_8022A278
    if (ctx->r16 == 0) {
        // 0x8022A198: lui         $v1, 0x2E80
        ctx->r3 = S32(0X2E80 << 16);
            goto L_8022A278;
    }
    // 0x8022A198: lui         $v1, 0x2E80
    ctx->r3 = S32(0X2E80 << 16);
    // 0x8022A19C: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x8022A1A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A1A4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8022A1A8: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x8022A1AC: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x8022A1B0: sb          $s7, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r23;
    // 0x8022A1B4: sb          $s5, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r21;
    // 0x8022A1B8: sw          $v1, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r3;
    // 0x8022A1BC: lhu         $v0, 0x0($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X0);
    // 0x8022A1C0: sh          $v0, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r2;
    // 0x8022A1C4: lhu         $v0, 0x2($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X2);
    // 0x8022A1C8: sh          $v0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r2;
    // 0x8022A1CC: lhu         $v0, 0x4($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X4);
    // 0x8022A1D0: beq         $s7, $zero, L_8022A204
    if (ctx->r23 == 0) {
        // 0x8022A1D4: sh          $v0, 0x20($s0)
        MEM_H(0X20, ctx->r16) = ctx->r2;
            goto L_8022A204;
    }
    // 0x8022A1D4: sh          $v0, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r2;
    // 0x8022A1D8: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8022A1DC: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022A1E0: addiu       $v0, $v0, -0x65F0
    ctx->r2 = ADD32(ctx->r2, -0X65F0);
    // 0x8022A1E4: addu        $s1, $t0, $v0
    ctx->r17 = ADD32(ctx->r8, ctx->r2);
    // 0x8022A1E8: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x8022A1EC: sw          $v0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r2;
    // 0x8022A1F0: lw          $v0, 0xC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XC);
    // 0x8022A1F4: sw          $v0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r2;
    // 0x8022A1F8: lw          $v0, 0x10($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X10);
    // 0x8022A1FC: j           L_8022A228
    // 0x8022A200: sw          $v0, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r2;
        goto L_8022A228;
    // 0x8022A200: sw          $v0, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r2;
L_8022A204:
    // 0x8022A204: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022A208: addiu       $v0, $v0, -0x6690
    ctx->r2 = ADD32(ctx->r2, -0X6690);
    // 0x8022A20C: addu        $s1, $fp, $v0
    ctx->r17 = ADD32(ctx->r30, ctx->r2);
    // 0x8022A210: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x8022A214: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x8022A218: lbu         $v0, 0xC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XC);
    // 0x8022A21C: sb          $v0, 0x22($s0)
    MEM_B(0X22, ctx->r16) = ctx->r2;
    // 0x8022A220: lbu         $v0, 0xD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XD);
    // 0x8022A224: sb          $v0, 0x23($s0)
    MEM_B(0X23, ctx->r16) = ctx->r2;
L_8022A228:
    // 0x8022A228: jal         0x800324B4
    // 0x8022A22C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_800324B4_D8B4(rdram, ctx);
        goto after_1;
    // 0x8022A22C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_1:
    // 0x8022A230: lh          $v1, 0x0($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X0);
    // 0x8022A234: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022A238: mflo        $v0
    ctx->r2 = lo;
    // 0x8022A23C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022A240: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x8022A244: jal         0x80032498
    // 0x8022A248: sh          $v0, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r2;
    func_80032498_D898(rdram, ctx);
        goto after_2;
    // 0x8022A248: sh          $v0, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r2;
    after_2:
    // 0x8022A24C: lh          $v1, 0x0($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X0);
    // 0x8022A250: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022A254: mflo        $v0
    ctx->r2 = lo;
    // 0x8022A258: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x8022A25C: sh          $v0, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = ctx->r2;
    // 0x8022A260: lhu         $v0, 0x2($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X2);
    // 0x8022A264: sh          $v0, 0x2A($s0)
    MEM_H(0X2A, ctx->r16) = ctx->r2;
    // 0x8022A268: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022A26C: sh          $v0, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r2;
    // 0x8022A270: lhu         $v0, 0x6($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X6);
    // 0x8022A274: sh          $v0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r2;
L_8022A278:
    // 0x8022A278: jal         0x800A3450
    // 0x8022A27C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x8022A27C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    after_3:
    // 0x8022A280: lw          $t0, 0x14($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X14);
    // 0x8022A284: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x8022A288: addu        $v0, $t0, $v0
    ctx->r2 = ADD32(ctx->r8, ctx->r2);
    // 0x8022A28C: addu        $s2, $s2, $v0
    ctx->r18 = ADD32(ctx->r18, ctx->r2);
    // 0x8022A290: slt         $v0, $s3, $s6
    ctx->r2 = SIGNED(ctx->r19) < SIGNED(ctx->r22) ? 1 : 0;
    // 0x8022A294: bne         $v0, $zero, L_8022A188
    if (ctx->r2 != 0) {
        // 0x8022A298: nop
    
            goto L_8022A188;
    }
    // 0x8022A298: nop

L_8022A29C:
    // 0x8022A29C: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x8022A2A0: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x8022A2A4: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x8022A2A8: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x8022A2AC: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x8022A2B0: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x8022A2B4: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x8022A2B8: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8022A2BC: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022A2C0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022A2C4: jr          $ra
    // 0x8022A2C8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x8022A2C8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x8022A2CC: nop

;}
RECOMP_FUNC void func_80229CE0_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229CE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229CE4: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x80229CE8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80229CEC: lbu         $v0, 0x9($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X9);
    // 0x80229CF0: bne         $v0, $zero, L_80229D08
    if (ctx->r2 != 0) {
        // 0x80229CF4: lui         $a2, 0xFFF5
        ctx->r6 = S32(0XFFF5 << 16);
            goto L_80229D08;
    }
    // 0x80229CF4: lui         $a2, 0xFFF5
    ctx->r6 = S32(0XFFF5 << 16);
    // 0x80229CF8: jal         0x8004F5C4
    // 0x80229CFC: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x80229CFC: nop

    after_0:
    // 0x80229D00: j           L_80229D3C
    // 0x80229D04: nop

        goto L_80229D3C;
    // 0x80229D04: nop

L_80229D08:
    // 0x80229D08: lbu         $a0, 0xC($a3)
    ctx->r4 = MEM_BU(ctx->r7, 0XC);
    // 0x80229D0C: ori         $a2, $a2, 0xF5F6
    ctx->r6 = ctx->r6 | 0XF5F6;
    // 0x80229D10: lbu         $a1, 0x9($a3)
    ctx->r5 = MEM_BU(ctx->r7, 0X9);
    // 0x80229D14: lw          $v0, 0x18($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X18);
    // 0x80229D18: lhu         $v1, 0x24($a3)
    ctx->r3 = MEM_HU(ctx->r7, 0X24);
    // 0x80229D1C: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x80229D20: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80229D24: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x80229D28: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80229D2C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80229D30: sw          $v0, 0x18($a3)
    MEM_W(0X18, ctx->r7) = ctx->r2;
    // 0x80229D34: sh          $v1, 0x24($a3)
    MEM_H(0X24, ctx->r7) = ctx->r3;
    // 0x80229D38: sb          $a1, 0x9($a3)
    MEM_B(0X9, ctx->r7) = ctx->r5;
L_80229D3C:
    // 0x80229D3C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80229D40: jr          $ra
    // 0x80229D44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229D44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80229D48: nop

    // 0x80229D4C: nop

;}
RECOMP_FUNC void func_80229370_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229370: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80229374: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80229378: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022937C: addiu       $a0, $zero, 0x7B0
    ctx->r4 = ADD32(0, 0X7B0);
    // 0x80229380: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80229384: jal         0x8006033C
    // 0x80229388: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80229388: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x8022938C: beq         $v0, $zero, L_802293FC
    if (ctx->r2 == 0) {
        // 0x80229390: nop
    
            goto L_802293FC;
    }
    // 0x80229390: nop

    // 0x80229394: jal         0x8006033C
    // 0x80229398: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x80229398: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    after_1:
    // 0x8022939C: bne         $v0, $zero, L_8022946C
    if (ctx->r2 != 0) {
        // 0x802293A0: addiu       $s0, $s1, 0x18
        ctx->r16 = ADD32(ctx->r17, 0X18);
            goto L_8022946C;
    }
    // 0x802293A0: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x802293A4: lbu         $v1, 0x8($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X8);
    // 0x802293A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802293AC: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x802293B0: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    // 0x802293B4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802293B8: jal         0x8002C678
    // 0x802293BC: sb          $v1, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r3;
    func_8002C678_7A78(rdram, ctx);
        goto after_2;
    // 0x802293BC: sb          $v1, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r3;
    after_2:
    // 0x802293C0: lb          $a0, 0xC($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XC);
    // 0x802293C4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x802293C8: sh          $zero, 0x18($s1)
    MEM_H(0X18, ctx->r17) = 0;
    // 0x802293CC: jal         0x800319B4
    // 0x802293D0: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    func_800319B4_CDB4(rdram, ctx);
        goto after_3;
    // 0x802293D0: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    after_3:
    // 0x802293D4: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x802293D8: addiu       $a0, $zero, 0x7B2
    ctx->r4 = ADD32(0, 0X7B2);
    // 0x802293DC: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x802293E0: jal         0x8006036C
    // 0x802293E4: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    func_8006036C_3B76C(rdram, ctx);
        goto after_4;
    // 0x802293E4: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    after_4:
    // 0x802293E8: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    // 0x802293EC: jal         0x8002A33C
    // 0x802293F0: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    func_8002A33C_573C(rdram, ctx);
        goto after_5;
    // 0x802293F0: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    after_5:
    // 0x802293F4: j           L_8022946C
    // 0x802293F8: nop

        goto L_8022946C;
    // 0x802293F8: nop

L_802293FC:
    // 0x802293FC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80229400: jal         0x8003E6BC
    // 0x80229404: addiu       $a0, $a0, 0x49C4
    ctx->r4 = ADD32(ctx->r4, 0X49C4);
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_6;
    // 0x80229404: addiu       $a0, $a0, 0x49C4
    ctx->r4 = ADD32(ctx->r4, 0X49C4);
    after_6:
    // 0x80229408: lw          $v1, 0x44($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X44);
    // 0x8022940C: beq         $v1, $v0, L_8022946C
    if (ctx->r3 == ctx->r2) {
        // 0x80229410: addiu       $s0, $s1, 0x18
        ctx->r16 = ADD32(ctx->r17, 0X18);
            goto L_8022946C;
    }
    // 0x80229410: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x80229414: lbu         $v1, 0x8($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X8);
    // 0x80229418: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022941C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80229420: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    // 0x80229424: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80229428: jal         0x8002C678
    // 0x8022942C: sb          $v1, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r3;
    func_8002C678_7A78(rdram, ctx);
        goto after_7;
    // 0x8022942C: sb          $v1, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r3;
    after_7:
    // 0x80229430: lb          $a0, 0xC($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XC);
    // 0x80229434: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80229438: sh          $zero, 0x18($s1)
    MEM_H(0X18, ctx->r17) = 0;
    // 0x8022943C: jal         0x800319B4
    // 0x80229440: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    func_800319B4_CDB4(rdram, ctx);
        goto after_8;
    // 0x80229440: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    after_8:
    // 0x80229444: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80229448: addiu       $a0, $zero, 0x7B2
    ctx->r4 = ADD32(0, 0X7B2);
    // 0x8022944C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80229450: jal         0x8006036C
    // 0x80229454: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    func_8006036C_3B76C(rdram, ctx);
        goto after_9;
    // 0x80229454: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    after_9:
    // 0x80229458: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    // 0x8022945C: jal         0x8002A33C
    // 0x80229460: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    func_8002A33C_573C(rdram, ctx);
        goto after_10;
    // 0x80229460: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    after_10:
    // 0x80229464: jal         0x80060590
    // 0x80229468: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    func_80060590_3B990(rdram, ctx);
        goto after_11;
    // 0x80229468: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    after_11:
L_8022946C:
    // 0x8022946C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80229470: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80229474: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229478: jr          $ra
    // 0x8022947C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022947C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80225494_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225494: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225498: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022549C: lbu         $v1, 0x4($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X4);
    // 0x802254A0: beq         $v1, $zero, L_802254B8
    if (ctx->r3 == 0) {
        // 0x802254A4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802254B8;
    }
    // 0x802254A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802254A8: beq         $v1, $v0, L_802254D0
    if (ctx->r3 == ctx->r2) {
        // 0x802254AC: nop
    
            goto L_802254D0;
    }
    // 0x802254AC: nop

    // 0x802254B0: j           L_802254E8
    // 0x802254B4: nop

        goto L_802254E8;
    // 0x802254B4: nop

L_802254B8:
    // 0x802254B8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x802254BC: sh          $zero, -0x3A84($at)
    MEM_H(-0X3A84, ctx->r1) = 0;
    // 0x802254C0: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x802254C4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802254C8: j           L_802254E8
    // 0x802254CC: sb          $v0, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r2;
        goto L_802254E8;
    // 0x802254CC: sb          $v0, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r2;
L_802254D0:
    // 0x802254D0: jal         0x8006033C
    // 0x802254D4: addiu       $a0, $zero, 0x7B0
    ctx->r4 = ADD32(0, 0X7B0);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x802254D4: addiu       $a0, $zero, 0x7B0
    ctx->r4 = ADD32(0, 0X7B0);
    after_0:
    // 0x802254D8: beq         $v0, $zero, L_802254E8
    if (ctx->r2 == 0) {
        // 0x802254DC: nop
    
            goto L_802254E8;
    }
    // 0x802254DC: nop

    // 0x802254E0: jal         0x80060690
    // 0x802254E4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80060690_3BA90(rdram, ctx);
        goto after_1;
    // 0x802254E4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_1:
L_802254E8:
    // 0x802254E8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802254EC: jr          $ra
    // 0x802254F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802254F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022C374_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C374: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022C378: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C37C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C380: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022C384: addiu       $a0, $a0, 0x49C4
    ctx->r4 = ADD32(ctx->r4, 0X49C4);
    // 0x8022C388: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022C38C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022C390: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022C394: jal         0x8004EC38
    // 0x8022C398: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    func_8004EC38_2A038(rdram, ctx);
        goto after_0;
    // 0x8022C398: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x8022C39C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8022C3A0: lhu         $v1, 0x4A06($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X4A06);
    // 0x8022C3A4: lbu         $a0, 0xA($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA);
    // 0x8022C3A8: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x8022C3AC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022C3B0: beq         $a0, $zero, L_8022C3CC
    if (ctx->r4 == 0) {
        // 0x8022C3B4: sh          $v0, 0x36E($s0)
        MEM_H(0X36E, ctx->r16) = ctx->r2;
            goto L_8022C3CC;
    }
    // 0x8022C3B4: sh          $v0, 0x36E($s0)
    MEM_H(0X36E, ctx->r16) = ctx->r2;
    // 0x8022C3B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C3BC: beq         $a0, $v0, L_8022C3E4
    if (ctx->r4 == ctx->r2) {
        // 0x8022C3C0: nop
    
            goto L_8022C3E4;
    }
    // 0x8022C3C0: nop

    // 0x8022C3C4: j           L_8022C5B4
    // 0x8022C3C8: nop

        goto L_8022C5B4;
    // 0x8022C3C8: nop

L_8022C3CC:
    // 0x8022C3CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C3D0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022C3D4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022C3D8: addiu       $v0, $zero, 0x5A
    ctx->r2 = ADD32(0, 0X5A);
    // 0x8022C3DC: sh          $v0, 0x32C($s0)
    MEM_H(0X32C, ctx->r16) = ctx->r2;
    // 0x8022C3E0: sh          $zero, 0x330($s0)
    MEM_H(0X330, ctx->r16) = 0;
L_8022C3E4:
    // 0x8022C3E4: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x8022C3E8: lui         $v0, 0x48
    ctx->r2 = S32(0X48 << 16);
    // 0x8022C3EC: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8022C3F0: beq         $v0, $zero, L_8022C408
    if (ctx->r2 == 0) {
        // 0x8022C3F4: addiu       $s2, $s0, 0x14
        ctx->r18 = ADD32(ctx->r16, 0X14);
            goto L_8022C408;
    }
    // 0x8022C3F4: addiu       $s2, $s0, 0x14
    ctx->r18 = ADD32(ctx->r16, 0X14);
    // 0x8022C3F8: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022C3FC: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8022C400: bne         $v0, $zero, L_8022C594
    if (ctx->r2 != 0) {
        // 0x8022C404: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022C594;
    }
    // 0x8022C404: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_8022C408:
    // 0x8022C408: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022C40C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022C410: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022C414: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022C418: jal         0x8004F820
    // 0x8022C41C: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x8022C41C: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_1:
    // 0x8022C420: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C424: addiu       $a1, $zero, 0x34
    ctx->r5 = ADD32(0, 0X34);
    // 0x8022C428: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x8022C42C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022C430: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022C434: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022C438: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022C43C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022C440: jal         0x8004DA90
    // 0x8022C444: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x8022C444: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    after_2:
    // 0x8022C448: jal         0x80040F30
    // 0x8022C44C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_3;
    // 0x8022C44C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022C450: sw          $v0, 0x48($s1)
    MEM_W(0X48, ctx->r17) = ctx->r2;
    // 0x8022C454: lb          $v1, 0xA6($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA6);
    // 0x8022C458: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C45C: bne         $v1, $v0, L_8022C46C
    if (ctx->r3 != ctx->r2) {
        // 0x8022C460: addiu       $a0, $zero, 0xB0
        ctx->r4 = ADD32(0, 0XB0);
            goto L_8022C46C;
    }
    // 0x8022C460: addiu       $a0, $zero, 0xB0
    ctx->r4 = ADD32(0, 0XB0);
    // 0x8022C464: jal         0x8002A33C
    // 0x8022C468: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_4;
    // 0x8022C468: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_4:
L_8022C46C:
    // 0x8022C46C: jal         0x8003E934
    // 0x8022C470: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_5;
    // 0x8022C470: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8022C474: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022C478: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x8022C47C: lh          $v1, 0x2E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2E);
    // 0x8022C480: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C484: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022C488: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x8022C48C: bltz        $v0, L_8022C4A4
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022C490: slti        $v0, $v0, 0x21
        ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
            goto L_8022C4A4;
    }
    // 0x8022C490: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x8022C494: beq         $v0, $zero, L_8022C4B4
    if (ctx->r2 == 0) {
        // 0x8022C498: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022C4B4;
    }
    // 0x8022C498: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022C49C: j           L_8022C4D8
    // 0x8022C4A0: nop

        goto L_8022C4D8;
    // 0x8022C4A0: nop

L_8022C4A4:
    // 0x8022C4A4: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x8022C4A8: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x8022C4AC: bne         $v0, $zero, L_8022C4D8
    if (ctx->r2 != 0) {
        // 0x8022C4B0: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022C4D8;
    }
    // 0x8022C4B0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_8022C4B4:
    // 0x8022C4B4: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x8022C4B8: jal         0x8009A3B4
    // 0x8022C4BC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x8022C4BC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x8022C4C0: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8022C4C4: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x8022C4C8: jal         0x8009A3B4
    // 0x8022C4CC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x8022C4CC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_7:
    // 0x8022C4D0: j           L_8022C4E8
    // 0x8022C4D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022C4E8;
    // 0x8022C4D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022C4D8:
    // 0x8022C4D8: lw          $v0, 0x48($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X48);
    // 0x8022C4DC: andi        $v0, $v0, 0xF00
    ctx->r2 = ctx->r2 & 0XF00;
    // 0x8022C4E0: beq         $v0, $zero, L_8022C4FC
    if (ctx->r2 == 0) {
        // 0x8022C4E4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022C4FC;
    }
    // 0x8022C4E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022C4E8:
    // 0x8022C4E8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022C4EC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022C4F0: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8022C4F4: j           L_8022C5B4
    // 0x8022C4F8: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
        goto L_8022C5B4;
    // 0x8022C4F8: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
L_8022C4FC:
    // 0x8022C4FC: lh          $v0, 0x36($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X36);
    // 0x8022C500: bne         $v0, $zero, L_8022C530
    if (ctx->r2 != 0) {
        // 0x8022C504: lui         $v0, 0x1
        ctx->r2 = S32(0X1 << 16);
            goto L_8022C530;
    }
    // 0x8022C504: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x8022C508: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x8022C50C: ori         $v0, $v0, 0x1FFF
    ctx->r2 = ctx->r2 | 0X1FFF;
    // 0x8022C510: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8022C514: bne         $v0, $zero, L_8022C530
    if (ctx->r2 != 0) {
        // 0x8022C518: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_8022C530;
    }
    // 0x8022C518: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022C51C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022C520: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8022C524: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022C528: j           L_8022C5B0
    // 0x8022C52C: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
        goto L_8022C5B0;
    // 0x8022C52C: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
L_8022C530:
    // 0x8022C530: lh          $v0, 0x34($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X34);
    // 0x8022C534: bne         $v0, $zero, L_8022C5A0
    if (ctx->r2 != 0) {
        // 0x8022C538: lui         $v0, 0x11
        ctx->r2 = S32(0X11 << 16);
            goto L_8022C5A0;
    }
    // 0x8022C538: lui         $v0, 0x11
    ctx->r2 = S32(0X11 << 16);
    // 0x8022C53C: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x8022C540: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8022C544: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8022C548: bne         $v0, $zero, L_8022C5A0
    if (ctx->r2 != 0) {
        // 0x8022C54C: nop
    
            goto L_8022C5A0;
    }
    // 0x8022C54C: nop

    // 0x8022C550: lh          $v0, 0x44($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X44);
    // 0x8022C554: bltzl       $v0, L_8022C570
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022C558: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_8022C570;
    }
    goto skip_0;
    // 0x8022C558: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_0:
    // 0x8022C55C: slti        $v0, $v0, 0x10
    ctx->r2 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x8022C560: beq         $v0, $zero, L_8022C5A0
    if (ctx->r2 == 0) {
        // 0x8022C564: nop
    
            goto L_8022C5A0;
    }
    // 0x8022C564: nop

    // 0x8022C568: j           L_8022C57C
    // 0x8022C56C: nop

        goto L_8022C57C;
    // 0x8022C56C: nop

L_8022C570:
    // 0x8022C570: slti        $v0, $v0, 0x10
    ctx->r2 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x8022C574: beq         $v0, $zero, L_8022C5A0
    if (ctx->r2 == 0) {
        // 0x8022C578: nop
    
            goto L_8022C5A0;
    }
    // 0x8022C578: nop

L_8022C57C:
    // 0x8022C57C: lh          $v0, 0x46($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X46);
    // 0x8022C580: addiu       $v0, $v0, 0x400
    ctx->r2 = ADD32(ctx->r2, 0X400);
    // 0x8022C584: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022C588: slti        $v0, $v0, 0x800
    ctx->r2 = SIGNED(ctx->r2) < 0X800 ? 1 : 0;
    // 0x8022C58C: beq         $v0, $zero, L_8022C5A0
    if (ctx->r2 == 0) {
        // 0x8022C590: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8022C5A0;
    }
    // 0x8022C590: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_8022C594:
    // 0x8022C594: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022C598: j           L_8022C5B4
    // 0x8022C59C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_8022C5B4;
    // 0x8022C59C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8022C5A0:
    // 0x8022C5A0: lhu         $v1, 0x0($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X0);
    // 0x8022C5A4: andi        $v0, $v1, 0x10
    ctx->r2 = ctx->r3 & 0X10;
    // 0x8022C5A8: bne         $v0, $zero, L_8022C5B4
    if (ctx->r2 != 0) {
        // 0x8022C5AC: ori         $v0, $v1, 0x1
        ctx->r2 = ctx->r3 | 0X1;
            goto L_8022C5B4;
    }
    // 0x8022C5AC: ori         $v0, $v1, 0x1
    ctx->r2 = ctx->r3 | 0X1;
L_8022C5B0:
    // 0x8022C5B0: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8022C5B4:
    // 0x8022C5B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022C5B8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022C5BC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022C5C0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C5C4: jr          $ra
    // 0x8022C5C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022C5C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80230320_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230320: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80230324: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80230328: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023032C: addiu       $a0, $zero, 0x197
    ctx->r4 = ADD32(0, 0X197);
    // 0x80230330: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80230334: addiu       $s0, $s1, 0x14
    ctx->r16 = ADD32(ctx->r17, 0X14);
    // 0x80230338: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023033C: jal         0x8002A33C
    // 0x80230340: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x80230340: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80230344: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230348: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x8023034C: addiu       $a1, $s1, 0x370
    ctx->r5 = ADD32(ctx->r17, 0X370);
    // 0x80230350: jal         0x8004FEA0
    // 0x80230354: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004FEA0_2B2A0(rdram, ctx);
        goto after_1;
    // 0x80230354: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x80230358: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023035C: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x80230360: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x80230364: beq         $v0, $zero, L_80230378
    if (ctx->r2 == 0) {
        // 0x80230368: addiu       $v0, $v1, 0x800
        ctx->r2 = ADD32(ctx->r3, 0X800);
            goto L_80230378;
    }
    // 0x80230368: addiu       $v0, $v1, 0x800
    ctx->r2 = ADD32(ctx->r3, 0X800);
    // 0x8023036C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80230370: j           L_8023037C
    // 0x80230374: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
        goto L_8023037C;
    // 0x80230374: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
L_80230378:
    // 0x80230378: sh          $v1, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r3;
L_8023037C:
    // 0x8023037C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80230380: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80230384: sh          $v0, 0x44($a0)
    MEM_H(0X44, ctx->r4) = ctx->r2;
    // 0x80230388: addiu       $v0, $zero, -0x280
    ctx->r2 = ADD32(0, -0X280);
    // 0x8023038C: sh          $v0, 0x46($a0)
    MEM_H(0X46, ctx->r4) = ctx->r2;
    // 0x80230390: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80230394: jal         0x80230B74
    // 0x80230398: sh          $v0, 0x4E($a0)
    MEM_H(0X4E, ctx->r4) = ctx->r2;
    func_80230B74_ovl22(rdram, ctx);
        goto after_2;
    // 0x80230398: sh          $v0, 0x4E($a0)
    MEM_H(0X4E, ctx->r4) = ctx->r2;
    after_2:
    // 0x8023039C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802303A0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802303A4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802303A8: jr          $ra
    // 0x802303AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802303AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80227EDC_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227EDC: jr          $ra
    // 0x80227EE0: nop

    TRACE_RETURN()
    return;
    // 0x80227EE0: nop

;}
RECOMP_FUNC void func_8022A824_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A824: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x8022A828: sw          $s7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r23;
    // 0x8022A82C: addu        $s7, $a0, $zero
    ctx->r23 = ADD32(ctx->r4, 0);
    // 0x8022A830: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x8022A834: sw          $fp, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r30;
    // 0x8022A838: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x8022A83C: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x8022A840: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x8022A844: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x8022A848: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x8022A84C: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x8022A850: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x8022A854: lb          $a0, 0xC($s7)
    ctx->r4 = MEM_B(ctx->r23, 0XC);
    // 0x8022A858: addiu       $fp, $s7, 0x28
    ctx->r30 = ADD32(ctx->r23, 0X28);
    // 0x8022A85C: jal         0x80053ED8
    // 0x8022A860: addu        $s6, $zero, $zero
    ctx->r22 = ADD32(0, 0);
    func_80053ED8_2F2D8(rdram, ctx);
        goto after_0;
    // 0x8022A860: addu        $s6, $zero, $zero
    ctx->r22 = ADD32(0, 0);
    after_0:
    // 0x8022A864: addu        $s5, $v0, $zero
    ctx->r21 = ADD32(ctx->r2, 0);
    // 0x8022A868: andi        $v0, $s6, 0xFF
    ctx->r2 = ctx->r22 & 0XFF;
L_8022A86C:
    // 0x8022A86C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022A870: addu        $s4, $v0, $fp
    ctx->r20 = ADD32(ctx->r2, ctx->r30);
    // 0x8022A874: lb          $v0, 0x2($s4)
    ctx->r2 = MEM_B(ctx->r20, 0X2);
    // 0x8022A878: bne         $v0, $zero, L_8022AB4C
    if (ctx->r2 != 0) {
        // 0x8022A87C: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022AB4C;
    }
    // 0x8022A87C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022A880: lbu         $s1, 0x1($s4)
    ctx->r17 = MEM_BU(ctx->r20, 0X1);
    // 0x8022A884: lbu         $s3, 0x0($s4)
    ctx->r19 = MEM_BU(ctx->r20, 0X0);
    // 0x8022A888: sll         $s1, $s1, 24
    ctx->r17 = S32(ctx->r17 << 24);
    // 0x8022A88C: sra         $s1, $s1, 16
    ctx->r17 = S32(SIGNED(ctx->r17) >> 16);
    // 0x8022A890: jal         0x800324B4
    // 0x8022A894: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_800324B4_D8B4(rdram, ctx);
        goto after_1;
    // 0x8022A894: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x8022A898: lh          $v1, 0x6($s4)
    ctx->r3 = MEM_H(ctx->r20, 0X6);
    // 0x8022A89C: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022A8A0: mflo        $s0
    ctx->r16 = lo;
    // 0x8022A8A4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022A8A8: nop

    // 0x8022A8AC: jal         0x80032498
    // 0x8022A8B0: sra         $s0, $s0, 12
    ctx->r16 = S32(SIGNED(ctx->r16) >> 12);
    func_80032498_D898(rdram, ctx);
        goto after_2;
    // 0x8022A8B0: sra         $s0, $s0, 12
    ctx->r16 = S32(SIGNED(ctx->r16) >> 12);
    after_2:
    // 0x8022A8B4: lh          $v1, 0x6($s4)
    ctx->r3 = MEM_H(ctx->r20, 0X6);
    // 0x8022A8B8: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022A8BC: mflo        $s2
    ctx->r18 = lo;
    // 0x8022A8C0: sll         $s3, $s3, 7
    ctx->r19 = S32(ctx->r19 << 7);
    // 0x8022A8C4: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8022A8C8: jal         0x800324B4
    // 0x8022A8CC: sra         $s2, $s2, 12
    ctx->r18 = S32(SIGNED(ctx->r18) >> 12);
    func_800324B4_D8B4(rdram, ctx);
        goto after_3;
    // 0x8022A8CC: sra         $s2, $s2, 12
    ctx->r18 = S32(SIGNED(ctx->r18) >> 12);
    after_3:
    // 0x8022A8D0: sll         $s0, $s0, 16
    ctx->r16 = S32(ctx->r16 << 16);
    // 0x8022A8D4: sra         $s0, $s0, 16
    ctx->r16 = S32(SIGNED(ctx->r16) >> 16);
    // 0x8022A8D8: mult        $v0, $s0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022A8DC: mflo        $v0
    ctx->r2 = lo;
    // 0x8022A8E0: lhu         $v1, 0x38($s5)
    ctx->r3 = MEM_HU(ctx->r21, 0X38);
    // 0x8022A8E4: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8022A8E8: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x8022A8EC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022A8F0: jal         0x80032498
    // 0x8022A8F4: sh          $v1, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r3;
    func_80032498_D898(rdram, ctx);
        goto after_4;
    // 0x8022A8F4: sh          $v1, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r3;
    after_4:
    // 0x8022A8F8: nop

    // 0x8022A8FC: mult        $v0, $s0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022A900: mflo        $v0
    ctx->r2 = lo;
    // 0x8022A904: lhu         $v1, 0x3C($s5)
    ctx->r3 = MEM_HU(ctx->r21, 0X3C);
    // 0x8022A908: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x8022A90C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022A910: sh          $v1, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r3;
    // 0x8022A914: lhu         $v0, 0x3A($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X3A);
    // 0x8022A918: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022A91C: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x8022A920: jal         0x800324B4
    // 0x8022A924: sh          $v0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r2;
    func_800324B4_D8B4(rdram, ctx);
        goto after_5;
    // 0x8022A924: sh          $v0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r2;
    after_5:
    // 0x8022A928: lh          $v1, 0x6($s4)
    ctx->r3 = MEM_H(ctx->r20, 0X6);
    // 0x8022A92C: lbu         $a0, 0x3($s4)
    ctx->r4 = MEM_BU(ctx->r20, 0X3);
    // 0x8022A930: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8022A934: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022A938: mflo        $s0
    ctx->r16 = lo;
    // 0x8022A93C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022A940: nop

    // 0x8022A944: jal         0x80032498
    // 0x8022A948: sra         $s0, $s0, 12
    ctx->r16 = S32(SIGNED(ctx->r16) >> 12);
    func_80032498_D898(rdram, ctx);
        goto after_6;
    // 0x8022A948: sra         $s0, $s0, 12
    ctx->r16 = S32(SIGNED(ctx->r16) >> 12);
    after_6:
    // 0x8022A94C: lh          $v1, 0x6($s4)
    ctx->r3 = MEM_H(ctx->r20, 0X6);
    // 0x8022A950: lbu         $a0, 0x3($s4)
    ctx->r4 = MEM_BU(ctx->r20, 0X3);
    // 0x8022A954: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8022A958: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022A95C: mflo        $s1
    ctx->r17 = lo;
    // 0x8022A960: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8022A964: nop

    // 0x8022A968: jal         0x800324B4
    // 0x8022A96C: sra         $s1, $s1, 12
    ctx->r17 = S32(SIGNED(ctx->r17) >> 12);
    func_800324B4_D8B4(rdram, ctx);
        goto after_7;
    // 0x8022A96C: sra         $s1, $s1, 12
    ctx->r17 = S32(SIGNED(ctx->r17) >> 12);
    after_7:
    // 0x8022A970: sll         $s0, $s0, 16
    ctx->r16 = S32(ctx->r16 << 16);
    // 0x8022A974: sra         $s0, $s0, 16
    ctx->r16 = S32(SIGNED(ctx->r16) >> 16);
    // 0x8022A978: mult        $v0, $s0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022A97C: mflo        $v0
    ctx->r2 = lo;
    // 0x8022A980: lhu         $v1, 0x38($s5)
    ctx->r3 = MEM_HU(ctx->r21, 0X38);
    // 0x8022A984: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8022A988: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x8022A98C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022A990: jal         0x80032498
    // 0x8022A994: sh          $v1, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r3;
    func_80032498_D898(rdram, ctx);
        goto after_8;
    // 0x8022A994: sh          $v1, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r3;
    after_8:
    // 0x8022A998: nop

    // 0x8022A99C: mult        $v0, $s0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022A9A0: mflo        $v0
    ctx->r2 = lo;
    // 0x8022A9A4: lhu         $v1, 0x3C($s5)
    ctx->r3 = MEM_HU(ctx->r21, 0X3C);
    // 0x8022A9A8: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x8022A9AC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022A9B0: sh          $v1, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r3;
    // 0x8022A9B4: lhu         $v0, 0x3A($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X3A);
    // 0x8022A9B8: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x8022A9BC: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    // 0x8022A9C0: lh          $v0, 0x6($s4)
    ctx->r2 = MEM_H(ctx->r20, 0X6);
    // 0x8022A9C4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022A9C8: slti        $v0, $v0, 0x18
    ctx->r2 = SIGNED(ctx->r2) < 0X18 ? 1 : 0;
    // 0x8022A9CC: bne         $v0, $zero, L_8022A9D8
    if (ctx->r2 != 0) {
        // 0x8022A9D0: addiu       $v0, $v1, -0x8
        ctx->r2 = ADD32(ctx->r3, -0X8);
            goto L_8022A9D8;
    }
    // 0x8022A9D0: addiu       $v0, $v1, -0x8
    ctx->r2 = ADD32(ctx->r3, -0X8);
    // 0x8022A9D4: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
L_8022A9D8:
    // 0x8022A9D8: andi        $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 & 0XFFFF;
    // 0x8022A9DC: andi        $a1, $a1, 0xFFFF
    ctx->r5 = ctx->r5 & 0XFFFF;
    // 0x8022A9E0: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    // 0x8022A9E4: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022A9E8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022A9EC: lhu         $v0, 0x18($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X18);
    // 0x8022A9F0: andi        $a3, $a3, 0xFFFF
    ctx->r7 = ctx->r7 & 0XFFFF;
    // 0x8022A9F4: lhu         $v1, 0x1C($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X1C);
    // 0x8022A9F8: lui         $t1, 0xFFFF
    ctx->r9 = S32(0XFFFF << 16);
    // 0x8022A9FC: lhu         $t0, 0x26($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X26);
    // 0x8022AA00: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022AA04: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x8022AA08: and         $a0, $a0, $t1
    ctx->r4 = ctx->r4 & ctx->r9;
    // 0x8022AA0C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022AA10: lhu         $v0, 0x20($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X20);
    // 0x8022AA14: or          $a1, $a1, $v1
    ctx->r5 = ctx->r5 | ctx->r3;
    // 0x8022AA18: and         $a1, $a1, $t1
    ctx->r5 = ctx->r5 & ctx->r9;
    // 0x8022AA1C: lhu         $v1, 0x1A($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X1A);
    // 0x8022AA20: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022AA24: or          $a2, $a2, $v0
    ctx->r6 = ctx->r6 | ctx->r2;
    // 0x8022AA28: lhu         $v0, 0x24($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X24);
    // 0x8022AA2C: and         $a2, $a2, $t1
    ctx->r6 = ctx->r6 & ctx->r9;
    // 0x8022AA30: or          $a0, $a0, $v1
    ctx->r4 = ctx->r4 | ctx->r3;
    // 0x8022AA34: lhu         $v1, 0x22($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X22);
    // 0x8022AA38: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022AA3C: or          $a3, $a3, $v0
    ctx->r7 = ctx->r7 | ctx->r2;
    // 0x8022AA40: and         $a3, $a3, $t1
    ctx->r7 = ctx->r7 & ctx->r9;
    // 0x8022AA44: lhu         $v0, 0x1E($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X1E);
    // 0x8022AA48: or          $a2, $a2, $v1
    ctx->r6 = ctx->r6 | ctx->r3;
    // 0x8022AA4C: or          $a3, $a3, $t0
    ctx->r7 = ctx->r7 | ctx->r8;
    // 0x8022AA50: jal         0x8022ABB4
    // 0x8022AA54: or          $a1, $a1, $v0
    ctx->r5 = ctx->r5 | ctx->r2;
    func_8022ABB4_ovl22(rdram, ctx);
        goto after_9;
    // 0x8022AA54: or          $a1, $a1, $v0
    ctx->r5 = ctx->r5 | ctx->r2;
    after_9:
    // 0x8022AA58: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8022AA5C: lhu         $v0, -0x730C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X730C);
    // 0x8022AA60: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022AA64: beq         $v0, $zero, L_8022AA8C
    if (ctx->r2 == 0) {
        // 0x8022AA68: andi        $v0, $s6, 0xFF
        ctx->r2 = ctx->r22 & 0XFF;
            goto L_8022AA8C;
    }
    // 0x8022AA68: andi        $v0, $s6, 0xFF
    ctx->r2 = ctx->r22 & 0XFF;
    // 0x8022AA6C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022AA70: addu        $a1, $v0, $fp
    ctx->r5 = ADD32(ctx->r2, ctx->r30);
    // 0x8022AA74: lbu         $a0, 0x4($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X4);
    // 0x8022AA78: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022AA7C: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x8022AA80: beq         $v1, $v0, L_8022AA8C
    if (ctx->r3 == ctx->r2) {
        // 0x8022AA84: addiu       $v0, $a0, -0x1
        ctx->r2 = ADD32(ctx->r4, -0X1);
            goto L_8022AA8C;
    }
    // 0x8022AA84: addiu       $v0, $a0, -0x1
    ctx->r2 = ADD32(ctx->r4, -0X1);
    // 0x8022AA88: sb          $v0, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r2;
L_8022AA8C:
    // 0x8022AA8C: andi        $v0, $s6, 0xFF
    ctx->r2 = ctx->r22 & 0XFF;
    // 0x8022AA90: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022AA94: addu        $s0, $v0, $fp
    ctx->r16 = ADD32(ctx->r2, ctx->r30);
    // 0x8022AA98: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x8022AA9C: lhu         $v0, 0x6($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6);
    // 0x8022AAA0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022AAA4: sh          $v0, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r2;
    // 0x8022AAA8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022AAAC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022AAB0: slti        $v0, $v0, 0x8
    ctx->r2 = SIGNED(ctx->r2) < 0X8 ? 1 : 0;
    // 0x8022AAB4: beq         $v0, $zero, L_8022AB58
    if (ctx->r2 == 0) {
        // 0x8022AAB8: addiu       $s6, $s6, 0x1
        ctx->r22 = ADD32(ctx->r22, 0X1);
            goto L_8022AB58;
    }
    // 0x8022AAB8: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x8022AABC: jal         0x800A3450
    // 0x8022AAC0: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_10;
    // 0x8022AAC0: nop

    after_10:
    // 0x8022AAC4: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x8022AAC8: jal         0x800A3450
    // 0x8022AACC: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_11;
    // 0x8022AACC: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_11:
    // 0x8022AAD0: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022AAD4: jal         0x800A3450
    // 0x8022AAD8: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_12;
    // 0x8022AAD8: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
    after_12:
    // 0x8022AADC: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x8022AAE0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022AAE4: jal         0x800A3450
    // 0x8022AAE8: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_13;
    // 0x8022AAE8: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    after_13:
    // 0x8022AAEC: lbu         $v1, 0x3($s7)
    ctx->r3 = MEM_BU(ctx->r23, 0X3);
    // 0x8022AAF0: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8022AAF4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022AAF8: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8022AAFC: lbu         $v1, -0x654F($at)
    ctx->r3 = MEM_BU(ctx->r1, -0X654F);
    // 0x8022AB00: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x8022AB04: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022AB08: sb          $v1, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r3;
    // 0x8022AB0C: lbu         $v0, 0x3($s7)
    ctx->r2 = MEM_BU(ctx->r23, 0X3);
    // 0x8022AB10: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022AB14: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022AB18: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022AB1C: lhu         $v0, -0x654E($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X654E);
    // 0x8022AB20: jal         0x800A3450
    // 0x8022AB24: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_14;
    // 0x8022AB24: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    after_14:
    // 0x8022AB28: lbu         $v1, 0x3($s7)
    ctx->r3 = MEM_BU(ctx->r23, 0X3);
    // 0x8022AB2C: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8022AB30: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022AB34: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8022AB38: lhu         $v1, -0x654C($at)
    ctx->r3 = MEM_HU(ctx->r1, -0X654C);
    // 0x8022AB3C: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x8022AB40: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022AB44: j           L_8022AB58
    // 0x8022AB48: sh          $v1, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r3;
        goto L_8022AB58;
    // 0x8022AB48: sh          $v1, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r3;
L_8022AB4C:
    // 0x8022AB4C: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022AB50: sb          $v0, 0x2($s4)
    MEM_B(0X2, ctx->r20) = ctx->r2;
    // 0x8022AB54: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
L_8022AB58:
    // 0x8022AB58: andi        $v0, $s6, 0xFF
    ctx->r2 = ctx->r22 & 0XFF;
    // 0x8022AB5C: sltiu       $v0, $v0, 0x4
    ctx->r2 = ctx->r2 < 0X4 ? 1 : 0;
    // 0x8022AB60: bne         $v0, $zero, L_8022A86C
    if (ctx->r2 != 0) {
        // 0x8022AB64: andi        $v0, $s6, 0xFF
        ctx->r2 = ctx->r22 & 0XFF;
            goto L_8022A86C;
    }
    // 0x8022AB64: andi        $v0, $s6, 0xFF
    ctx->r2 = ctx->r22 & 0XFF;
    // 0x8022AB68: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x8022AB6C: lw          $fp, 0x58($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X58);
    // 0x8022AB70: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x8022AB74: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x8022AB78: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x8022AB7C: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x8022AB80: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x8022AB84: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x8022AB88: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x8022AB8C: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x8022AB90: jr          $ra
    // 0x8022AB94: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x8022AB94: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_8022FA6C_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FA6C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022FA70: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022FA74: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022FA78: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022FA7C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022FA80: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022FA84: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022FA88: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022FA8C: lw          $v0, -0x63D8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X63D8);
    // 0x8022FA90: jalr        $v0
    // 0x8022FA94: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022FA94: nop

    after_0:
    // 0x8022FA98: lb          $v0, 0x387($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X387);
    // 0x8022FA9C: bne         $v0, $zero, L_8022FB34
    if (ctx->r2 != 0) {
        // 0x8022FAA0: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022FB34;
    }
    // 0x8022FAA0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022FAA4: lbu         $v1, 0x64($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X64);
    // 0x8022FAA8: lbu         $a0, 0x65($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X65);
    // 0x8022FAAC: lbu         $a1, 0x66($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X66);
    // 0x8022FAB0: lbu         $v0, 0x64($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X64);
    // 0x8022FAB4: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x8022FAB8: andi        $a0, $a0, 0x1F
    ctx->r4 = ctx->r4 & 0X1F;
    // 0x8022FABC: andi        $a1, $a1, 0x1F
    ctx->r5 = ctx->r5 & 0X1F;
    // 0x8022FAC0: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x8022FAC4: sll         $a0, $a0, 5
    ctx->r4 = S32(ctx->r4 << 5);
    // 0x8022FAC8: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x8022FACC: sb          $v0, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r2;
    // 0x8022FAD0: lbu         $v0, 0x65($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X65);
    // 0x8022FAD4: lb          $a0, 0x64($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X64);
    // 0x8022FAD8: sll         $a1, $a1, 10
    ctx->r5 = S32(ctx->r5 << 10);
    // 0x8022FADC: or          $v1, $v1, $a1
    ctx->r3 = ctx->r3 | ctx->r5;
    // 0x8022FAE0: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x8022FAE4: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x8022FAE8: bgez        $a0, L_8022FB04
    if (SIGNED(ctx->r4) >= 0) {
        // 0x8022FAEC: sb          $v0, 0x65($s0)
        MEM_B(0X65, ctx->r16) = ctx->r2;
            goto L_8022FB04;
    }
    // 0x8022FAEC: sb          $v0, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r2;
    // 0x8022FAF0: lhu         $v0, 0x15E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X15E);
    // 0x8022FAF4: sb          $zero, 0x64($s0)
    MEM_B(0X64, ctx->r16) = 0;
    // 0x8022FAF8: sb          $zero, 0x65($s0)
    MEM_B(0X65, ctx->r16) = 0;
    // 0x8022FAFC: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x8022FB00: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
L_8022FB04:
    // 0x8022FB04: lh          $v0, 0x15E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X15E);
    // 0x8022FB08: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x8022FB0C: beq         $v0, $zero, L_8022FB44
    if (ctx->r2 == 0) {
        // 0x8022FB10: nop
    
            goto L_8022FB44;
    }
    // 0x8022FB10: nop

    // 0x8022FB14: lbu         $v0, 0x66($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X66);
    // 0x8022FB18: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022FB1C: sb          $v0, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r2;
    // 0x8022FB20: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022FB24: bltzl       $v0, L_8022FB44
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022FB28: sb          $zero, 0x66($s0)
        MEM_B(0X66, ctx->r16) = 0;
            goto L_8022FB44;
    }
    goto skip_0;
    // 0x8022FB28: sb          $zero, 0x66($s0)
    MEM_B(0X66, ctx->r16) = 0;
    skip_0:
    // 0x8022FB2C: j           L_8022FB44
    // 0x8022FB30: nop

        goto L_8022FB44;
    // 0x8022FB30: nop

L_8022FB34:
    // 0x8022FB34: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022FB38: sb          $v0, 0x387($s0)
    MEM_B(0X387, ctx->r16) = ctx->r2;
    // 0x8022FB3C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022FB40: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
L_8022FB44:
    // 0x8022FB44: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022FB48: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022FB4C: jr          $ra
    // 0x8022FB50: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022FB50: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
