#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8022DFB4_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DFB4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022DFB8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022DFBC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022DFC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022DFC4: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022DFC8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022DFCC: jal         0x8004DA90
    // 0x8022DFD0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8022DFD0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x8022DFD4: lhu         $v0, 0x35E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X35E);
    // 0x8022DFD8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022DFDC: sh          $v0, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r2;
    // 0x8022DFE0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022DFE4: bne         $v0, $zero, L_8022E01C
    if (ctx->r2 != 0) {
        // 0x8022DFE8: nop
    
            goto L_8022E01C;
    }
    // 0x8022DFE8: nop

    // 0x8022DFEC: lh          $v0, 0x35C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X35C);
    // 0x8022DFF0: beq         $v0, $zero, L_8022E004
    if (ctx->r2 == 0) {
        // 0x8022DFF4: nop
    
            goto L_8022E004;
    }
    // 0x8022DFF4: nop

    // 0x8022DFF8: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x8022DFFC: j           L_8022E00C
    // 0x8022E000: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
        goto L_8022E00C;
    // 0x8022E000: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
L_8022E004:
    // 0x8022E004: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x8022E008: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
L_8022E00C:
    // 0x8022E00C: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8022E010: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x8022E014: j           L_8022E06C
    // 0x8022E018: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_8022E06C;
    // 0x8022E018: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_8022E01C:
    // 0x8022E01C: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x8022E020: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022E024: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x8022E028: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022E02C: bne         $v0, $zero, L_8022E03C
    if (ctx->r2 != 0) {
        // 0x8022E030: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022E03C;
    }
    // 0x8022E030: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E034: j           L_8022E06C
    // 0x8022E038: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022E06C;
    // 0x8022E038: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022E03C:
    // 0x8022E03C: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x8022E040: jal         0x8022FF44
    // 0x8022E044: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_8022FF44_ovl28(rdram, ctx);
        goto after_1;
    // 0x8022E044: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_1:
    // 0x8022E048: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022E04C: beq         $v0, $zero, L_8022E070
    if (ctx->r2 == 0) {
        // 0x8022E050: nop
    
            goto L_8022E070;
    }
    // 0x8022E050: nop

    // 0x8022E054: jal         0x8022FEA8
    // 0x8022E058: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_8022FEA8_ovl28(rdram, ctx);
        goto after_2;
    // 0x8022E058: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_2:
    // 0x8022E05C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022E060: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x8022E064: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x8022E068: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_8022E06C:
    // 0x8022E06C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022E070:
    // 0x8022E070: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022E074: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E078: jr          $ra
    // 0x8022E07C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E07C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80249D08_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80249D08: jr          $ra
    // 0x80249D0C: nop

    TRACE_RETURN()
    return;
    // 0x80249D0C: nop

;}
RECOMP_FUNC void func_80244090_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80244090: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80244094: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80244098: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8024409C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802440A0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802440A4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802440A8: lw          $v0, 0x4C08($at)
    ctx->r2 = MEM_W(ctx->r1, 0X4C08);
    // 0x802440AC: jalr        $v0
    // 0x802440B0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802440B0: nop

    after_0:
    // 0x802440B4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802440B8: jr          $ra
    // 0x802440BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802440BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80232B3C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232B3C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80232B40: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232B44: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232B48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80232B4C: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x80232B50: bgez        $v0, L_80232BAC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80232B54: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80232BAC;
    }
    // 0x80232B54: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80232B58: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80232B5C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80232B60: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x80232B64: jal         0x8004F820
    // 0x80232B68: addiu       $a3, $zero, 0x400
    ctx->r7 = ADD32(0, 0X400);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80232B68: addiu       $a3, $zero, 0x400
    ctx->r7 = ADD32(0, 0X400);
    after_0:
    // 0x80232B6C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80232B70: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80232B74: bltzl       $v0, L_80232B90
    if (SIGNED(ctx->r2) < 0) {
        // 0x80232B78: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_80232B90;
    }
    goto skip_0;
    // 0x80232B78: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_0:
    // 0x80232B7C: slti        $v0, $v0, 0x69
    ctx->r2 = SIGNED(ctx->r2) < 0X69 ? 1 : 0;
    // 0x80232B80: beq         $v0, $zero, L_80232B9C
    if (ctx->r2 == 0) {
        // 0x80232B84: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_80232B9C;
    }
    // 0x80232B84: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80232B88: j           L_80232BA0
    // 0x80232B8C: nop

        goto L_80232BA0;
    // 0x80232B8C: nop

L_80232B90:
    // 0x80232B90: slti        $v0, $v0, 0x69
    ctx->r2 = SIGNED(ctx->r2) < 0X69 ? 1 : 0;
    // 0x80232B94: bne         $v0, $zero, L_80232BA0
    if (ctx->r2 != 0) {
        // 0x80232B98: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_80232BA0;
    }
    // 0x80232B98: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
L_80232B9C:
    // 0x80232B9C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80232BA0:
    // 0x80232BA0: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80232BA4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232BA8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80232BAC:
    // 0x80232BAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80232BB0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232BB4: jr          $ra
    // 0x80232BB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80232BB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802498F8_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802498F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802498FC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80249900: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80249904: jal         0x80249DD8
    // 0x80249908: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_80249DD8_ovl28(rdram, ctx);
        goto after_0;
    // 0x80249908: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x8024990C: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80249910: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80249914: sb          $v1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r3;
    // 0x80249918: xori        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 ^ 0X4;
    // 0x8024991C: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x80249920: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x80249924: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80249928: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8024992C: jr          $ra
    // 0x80249930: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80249930: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022AE4C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AE4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022AE50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022AE54: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022AE58: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x8022AE5C: bne         $v0, $zero, L_8022AEA8
    if (ctx->r2 != 0) {
        // 0x8022AE60: addiu       $a1, $zero, -0x3
        ctx->r5 = ADD32(0, -0X3);
            goto L_8022AEA8;
    }
    // 0x8022AE60: addiu       $a1, $zero, -0x3
    ctx->r5 = ADD32(0, -0X3);
    // 0x8022AE64: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8022AE68: addiu       $v1, $v1, 0x49B0
    ctx->r3 = ADD32(ctx->r3, 0X49B0);
    // 0x8022AE6C: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8022AE70: and         $v0, $v0, $a1
    ctx->r2 = ctx->r2 & ctx->r5;
    // 0x8022AE74: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8022AE78: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x8022AE7C: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8022AE80: lui         $s0, 0x8025
    ctx->r16 = S32(0X8025 << 16);
    // 0x8022AE84: addiu       $s0, $s0, 0x2088
    ctx->r16 = ADD32(ctx->r16, 0X2088);
    // 0x8022AE88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022AE8C: and         $v0, $v0, $a1
    ctx->r2 = ctx->r2 & ctx->r5;
    // 0x8022AE90: jal         0x8005FA7C
    // 0x8022AE94: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_0;
    // 0x8022AE94: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    after_0:
    // 0x8022AE98: jal         0x8005FA7C
    // 0x8022AE9C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_1;
    // 0x8022AE9C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_1:
    // 0x8022AEA0: jal         0x8022B6D0
    // 0x8022AEA4: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_8022B6D0_ovl28(rdram, ctx);
        goto after_2;
    // 0x8022AEA4: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_2:
L_8022AEA8:
    // 0x8022AEA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022AEAC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022AEB0: jr          $ra
    // 0x8022AEB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022AEB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023B3F0_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B3F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023B3F4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023B3F8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023B3FC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023B400: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x8023B404: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023B408: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8023B40C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023B410: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8023B414: jal         0x8004D5D4
    // 0x8023B418: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8023B418: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x8023B41C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023B420: lbu         $v1, 0x8($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X8);
    // 0x8023B424: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023B428: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8023B42C: sh          $v0, 0x15C($a0)
    MEM_H(0X15C, ctx->r4) = ctx->r2;
    // 0x8023B430: sh          $v0, 0x15A($a0)
    MEM_H(0X15A, ctx->r4) = ctx->r2;
    // 0x8023B434: sh          $v0, 0x158($a0)
    MEM_H(0X158, ctx->r4) = ctx->r2;
    // 0x8023B438: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8023B43C: sh          $v0, 0x15E($a0)
    MEM_H(0X15E, ctx->r4) = ctx->r2;
    // 0x8023B440: sw          $zero, 0x78($a0)
    MEM_W(0X78, ctx->r4) = 0;
    // 0x8023B444: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8023B448: jal         0x8023B2F0
    // 0x8023B44C: sb          $v1, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r3;
    func_8023B2F0_ovl28(rdram, ctx);
        goto after_1;
    // 0x8023B44C: sb          $v1, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r3;
    after_1:
    // 0x8023B450: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023B454: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023B458: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023B45C: jr          $ra
    // 0x8023B460: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023B460: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023B744_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B744: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023B748: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023B74C: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8023B750: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023B754: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8023B758: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023B75C: lw          $v0, 0x46C4($at)
    ctx->r2 = MEM_W(ctx->r1, 0X46C4);
    // 0x8023B760: jalr        $v0
    // 0x8023B764: addiu       $a1, $a0, 0x4E0
    ctx->r5 = ADD32(ctx->r4, 0X4E0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8023B764: addiu       $a1, $a0, 0x4E0
    ctx->r5 = ADD32(ctx->r4, 0X4E0);
    after_0:
    // 0x8023B768: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023B76C: jr          $ra
    // 0x8023B770: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023B770: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226208_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226208: jr          $ra
    // 0x8022620C: nop

    TRACE_RETURN()
    return;
    // 0x8022620C: nop

;}
RECOMP_FUNC void func_80246CEC_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80246CEC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80246CF0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80246CF4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80246CF8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80246CFC: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x80246D00: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80246D04: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80246D08: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    // 0x80246D0C: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x80246D10: jal         0x8004D5D4
    // 0x80246D14: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80246D14: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x80246D18: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x80246D1C: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x80246D20: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
    // 0x80246D24: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x80246D28: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
    // 0x80246D2C: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
    // 0x80246D30: sh          $zero, 0x4($s1)
    MEM_H(0X4, ctx->r17) = 0;
    // 0x80246D34: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80246D38: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80246D3C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80246D40: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80246D44: lhu         $v0, 0x4D80($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X4D80);
    // 0x80246D48: sh          $v0, 0x6($s1)
    MEM_H(0X6, ctx->r17) = ctx->r2;
    // 0x80246D4C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80246D50: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80246D54: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80246D58: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80246D5C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80246D60: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80246D64: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80246D68: jr          $ra
    // 0x80246D6C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80246D6C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80245E24_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80245E24: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80245E28: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80245E2C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80245E30: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80245E34: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80245E38: lbu         $a1, 0xA($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XA);
    // 0x80245E3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80245E40: andi        $v1, $a1, 0xFF
    ctx->r3 = ctx->r5 & 0XFF;
    // 0x80245E44: beq         $v1, $v0, L_80245EAC
    if (ctx->r3 == ctx->r2) {
        // 0x80245E48: addiu       $s1, $s0, 0xC0
        ctx->r17 = ADD32(ctx->r16, 0XC0);
            goto L_80245EAC;
    }
    // 0x80245E48: addiu       $s1, $s0, 0xC0
    ctx->r17 = ADD32(ctx->r16, 0XC0);
    // 0x80245E4C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80245E50: beql        $v0, $zero, L_80245E68
    if (ctx->r2 == 0) {
        // 0x80245E54: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80245E68;
    }
    goto skip_0;
    // 0x80245E54: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80245E58: beq         $v1, $zero, L_80245E78
    if (ctx->r3 == 0) {
        // 0x80245E5C: addiu       $v0, $a1, 0x1
        ctx->r2 = ADD32(ctx->r5, 0X1);
            goto L_80245E78;
    }
    // 0x80245E5C: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    // 0x80245E60: j           L_80245F7C
    // 0x80245E64: nop

        goto L_80245F7C;
    // 0x80245E64: nop

L_80245E68:
    // 0x80245E68: beq         $v1, $v0, L_80245F0C
    if (ctx->r3 == ctx->r2) {
        // 0x80245E6C: nop
    
            goto L_80245F0C;
    }
    // 0x80245E6C: nop

    // 0x80245E70: j           L_80245F7C
    // 0x80245E74: nop

        goto L_80245F7C;
    // 0x80245E74: nop

L_80245E78:
    // 0x80245E78: lw          $a0, 0xF4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XF4);
    // 0x80245E7C: jal         0x8003E934
    // 0x80245E80: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_0;
    // 0x80245E80: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    after_0:
    // 0x80245E84: lw          $v1, 0xF4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XF4);
    // 0x80245E88: lh          $v1, 0x16($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X16);
    // 0x80245E8C: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    // 0x80245E90: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
    // 0x80245E94: bltzl       $v0, L_80245E9C
    if (SIGNED(ctx->r2) < 0) {
        // 0x80245E98: addiu       $v0, $v0, 0x7
        ctx->r2 = ADD32(ctx->r2, 0X7);
            goto L_80245E9C;
    }
    goto skip_1;
    // 0x80245E98: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    skip_1:
L_80245E9C:
    // 0x80245E9C: sra         $v0, $v0, 3
    ctx->r2 = S32(SIGNED(ctx->r2) >> 3);
    // 0x80245EA0: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
    // 0x80245EA4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80245EA8: sh          $v0, 0xC4($s0)
    MEM_H(0XC4, ctx->r16) = ctx->r2;
L_80245EAC:
    // 0x80245EAC: lh          $v0, 0x4($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4);
    // 0x80245EB0: beq         $v0, $zero, L_80245EE0
    if (ctx->r2 == 0) {
        // 0x80245EB4: nop
    
            goto L_80245EE0;
    }
    // 0x80245EB4: nop

    // 0x80245EB8: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x80245EBC: lhu         $v1, 0x4E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X4E);
    // 0x80245EC0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80245EC4: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80245EC8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80245ECC: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80245ED0: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80245ED4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80245ED8: j           L_80245F7C
    // 0x80245EDC: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
        goto L_80245F7C;
    // 0x80245EDC: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_80245EE0:
    // 0x80245EE0: lw          $v0, 0x34($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X34);
    // 0x80245EE4: lb          $v0, 0xF($v0)
    ctx->r2 = MEM_B(ctx->r2, 0XF);
    // 0x80245EE8: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x80245EEC: beq         $v0, $zero, L_80245F7C
    if (ctx->r2 == 0) {
        // 0x80245EF0: nop
    
            goto L_80245F7C;
    }
    // 0x80245EF0: nop

    // 0x80245EF4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80245EF8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80245EFC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80245F00: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80245F04: j           L_80245F7C
    // 0x80245F08: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
        goto L_80245F7C;
    // 0x80245F08: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_80245F0C:
    // 0x80245F0C: lh          $v0, 0xC4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XC4);
    // 0x80245F10: beq         $v0, $zero, L_80245F40
    if (ctx->r2 == 0) {
        // 0x80245F14: nop
    
            goto L_80245F40;
    }
    // 0x80245F14: nop

    // 0x80245F18: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x80245F1C: lhu         $v1, 0xC4($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XC4);
    // 0x80245F20: lhu         $a0, 0x4E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X4E);
    // 0x80245F24: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80245F28: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80245F2C: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80245F30: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80245F34: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80245F38: j           L_80245F7C
    // 0x80245F3C: sh          $v1, 0xC4($s0)
    MEM_H(0XC4, ctx->r16) = ctx->r3;
        goto L_80245F7C;
    // 0x80245F3C: sh          $v1, 0xC4($s0)
    MEM_H(0XC4, ctx->r16) = ctx->r3;
L_80245F40:
    // 0x80245F40: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x80245F44: lw          $v1, 0xF4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XF4);
    // 0x80245F48: lw          $a0, 0xF4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XF4);
    // 0x80245F4C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80245F50: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80245F54: lhu         $v0, 0xC0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XC0);
    // 0x80245F58: lhu         $v1, 0x182($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X182);
    // 0x80245F5C: ori         $v0, $v0, 0x11
    ctx->r2 = ctx->r2 | 0X11;
    // 0x80245F60: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
    // 0x80245F64: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80245F68: sh          $v0, 0xC0($s0)
    MEM_H(0XC0, ctx->r16) = ctx->r2;
    // 0x80245F6C: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80245F70: lbu         $v0, 0xF($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XF);
    // 0x80245F74: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x80245F78: sb          $v0, 0xF($a0)
    MEM_B(0XF, ctx->r4) = ctx->r2;
L_80245F7C:
    // 0x80245F7C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80245F80: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80245F84: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80245F88: jr          $ra
    // 0x80245F8C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80245F8C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022FEF8_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FEF8: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x8022FEFC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022FF00: beq         $a1, $v0, L_8022FF2C
    if (ctx->r5 == ctx->r2) {
        // 0x8022FF04: addiu       $v0, $zero, 0x2A
        ctx->r2 = ADD32(0, 0X2A);
            goto L_8022FF2C;
    }
    // 0x8022FF04: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x8022FF08: lbu         $a0, 0x2($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X2);
    // 0x8022FF0C: bne         $a0, $v0, L_8022FF1C
    if (ctx->r4 != ctx->r2) {
        // 0x8022FF10: addiu       $v1, $zero, 0x5
        ctx->r3 = ADD32(0, 0X5);
            goto L_8022FF1C;
    }
    // 0x8022FF10: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x8022FF14: j           L_8022FF3C
    // 0x8022FF18: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
        goto L_8022FF3C;
    // 0x8022FF18: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
L_8022FF1C:
    // 0x8022FF1C: bne         $a0, $v1, L_8022FF3C
    if (ctx->r4 != ctx->r3) {
        // 0x8022FF20: addiu       $v0, $zero, 0x180
        ctx->r2 = ADD32(0, 0X180);
            goto L_8022FF3C;
    }
    // 0x8022FF20: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
    // 0x8022FF24: j           L_8022FF3C
    // 0x8022FF28: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
        goto L_8022FF3C;
    // 0x8022FF28: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
L_8022FF2C:
    // 0x8022FF2C: lbu         $v0, 0x2($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X2);
    // 0x8022FF30: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022FF34: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022FF38: lbu         $v0, 0x3560($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X3560);
L_8022FF3C:
    // 0x8022FF3C: jr          $ra
    // 0x8022FF40: nop

    TRACE_RETURN()
    return;
    // 0x8022FF40: nop

;}
RECOMP_FUNC void func_8022F300_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F300: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022F304: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F308: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F30C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022F310: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022F314: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022F318: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022F31C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022F320: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022F324: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022F328: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022F32C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022F330: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
    // 0x8022F334: sh          $v1, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r3;
    // 0x8022F338: jal         0x8022FEA8
    // 0x8022F33C: sb          $a1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r5;
    func_8022FEA8_ovl28(rdram, ctx);
        goto after_0;
    // 0x8022F33C: sb          $a1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r5;
    after_0:
    // 0x8022F340: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x8022F344: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022F348: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022F34C: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8022F350: addiu       $s2, $s2, 0x49C4
    ctx->r18 = ADD32(ctx->r18, 0X49C4);
    // 0x8022F354: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022F358: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x8022F35C: jal         0x8004F820
    // 0x8022F360: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x8022F360: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022F364: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022F368: bgez        $v0, L_8022F398
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022F36C: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_8022F398;
    }
    // 0x8022F36C: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x8022F370: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022F374: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022F378: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022F37C: jal         0x8004F820
    // 0x8022F380: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x8022F380: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x8022F384: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022F388: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022F38C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8022F390: j           L_8022F3B4
    // 0x8022F394: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_8022F3B4;
    // 0x8022F394: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_8022F398:
    // 0x8022F398: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022F39C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022F3A0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022F3A4: jal         0x8004F820
    // 0x8022F3A8: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x8022F3A8: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_3:
    // 0x8022F3AC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022F3B0: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_8022F3B4:
    // 0x8022F3B4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022F3B8: sh          $v0, 0x6($s3)
    MEM_H(0X6, ctx->r19) = ctx->r2;
    // 0x8022F3BC: lbu         $a3, 0xC($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XC);
    // 0x8022F3C0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022F3C4: jal         0x800610AC
    // 0x8022F3C8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_4;
    // 0x8022F3C8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x8022F3CC: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022F3D0: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022F3D4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022F3D8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022F3DC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F3E0: jr          $ra
    // 0x8022F3E4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022F3E4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802337E8_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802337E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802337EC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802337F0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802337F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802337F8: jal         0x8007A1B8
    // 0x802337FC: addiu       $a1, $s0, 0x180
    ctx->r5 = ADD32(ctx->r16, 0X180);
    func_8007A1B8_555B8(rdram, ctx);
        goto after_0;
    // 0x802337FC: addiu       $a1, $s0, 0x180
    ctx->r5 = ADD32(ctx->r16, 0X180);
    after_0:
    // 0x80233800: jal         0x8004F418
    // 0x80233804: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_1;
    // 0x80233804: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80233808: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023380C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80233810: jr          $ra
    // 0x80233814: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80233814: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023A208_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A208: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8023A20C: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8023A210: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023A214: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x8023A218: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8023A21C: lb          $v0, 0xD($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XD);
    // 0x8023A220: beq         $v0, $zero, L_8023A288
    if (ctx->r2 == 0) {
        // 0x8023A224: addiu       $s0, $s1, 0x4F8
        ctx->r16 = ADD32(ctx->r17, 0X4F8);
            goto L_8023A288;
    }
    // 0x8023A224: addiu       $s0, $s1, 0x4F8
    ctx->r16 = ADD32(ctx->r17, 0X4F8);
    // 0x8023A228: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023A22C: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x8023A230: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8023A234: jal         0x8009A3B4
    // 0x8023A238: sw          $zero, 0x500($s1)
    MEM_W(0X500, ctx->r17) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8023A238: sw          $zero, 0x500($s1)
    MEM_W(0X500, ctx->r17) = 0;
    after_0:
    // 0x8023A23C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023A240: lhu         $v0, 0x4FA($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4FA);
    // 0x8023A244: lbu         $v1, 0x1($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X1);
    // 0x8023A248: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x8023A24C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023A250: addiu       $v0, $v0, -0x80
    ctx->r2 = ADD32(ctx->r2, -0X80);
    // 0x8023A254: sh          $v0, 0x4FA($s1)
    MEM_H(0X4FA, ctx->r17) = ctx->r2;
    // 0x8023A258: addiu       $v0, $s1, 0x500
    ctx->r2 = ADD32(ctx->r17, 0X500);
    // 0x8023A25C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x8023A260: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8023A264: lw          $v1, 0x510($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X510);
    // 0x8023A268: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8023A26C: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8023A270: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8023A274: lui         $v0, 0x408
    ctx->r2 = S32(0X408 << 16);
    // 0x8023A278: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8023A27C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8023A280: jal         0x80051E18
    // 0x8023A284: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_1;
    // 0x8023A284: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_1:
L_8023A288:
    // 0x8023A288: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8023A28C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8023A290: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8023A294: jr          $ra
    // 0x8023A298: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8023A298: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80225704_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225704: jr          $ra
    // 0x80225708: nop

    TRACE_RETURN()
    return;
    // 0x80225708: nop

;}
RECOMP_FUNC void func_802266D0_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802266D0: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x802266D4: lw          $v0, 0x10($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X10);
    // 0x802266D8: bne         $v0, $zero, L_80226758
    if (ctx->r2 != 0) {
        // 0x802266DC: addiu       $v0, $zero, -0x1EA
        ctx->r2 = ADD32(0, -0X1EA);
            goto L_80226758;
    }
    // 0x802266DC: addiu       $v0, $zero, -0x1EA
    ctx->r2 = ADD32(0, -0X1EA);
    // 0x802266E0: lw          $a1, 0x28($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X28);
    // 0x802266E4: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x802266E8: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x802266EC: sh          $v0, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r2;
    // 0x802266F0: addiu       $v0, $zero, -0x99C
    ctx->r2 = ADD32(0, -0X99C);
    // 0x802266F4: sh          $v0, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r2;
    // 0x802266F8: lui         $v0, 0xFE16
    ctx->r2 = S32(0XFE16 << 16);
    // 0x802266FC: sw          $v0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->r2;
    // 0x80226700: lui         $v0, 0xF664
    ctx->r2 = S32(0XF664 << 16);
    // 0x80226704: sw          $v0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->r2;
    // 0x80226708: addiu       $v0, $zero, 0x9C8
    ctx->r2 = ADD32(0, 0X9C8);
    // 0x8022670C: sh          $a0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r4;
    // 0x80226710: sw          $v1, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->r3;
    // 0x80226714: sh          $zero, 0x58($a1)
    MEM_H(0X58, ctx->r5) = 0;
    // 0x80226718: sh          $zero, 0x54($a1)
    MEM_H(0X54, ctx->r5) = 0;
    // 0x8022671C: sh          $v0, 0x56($a1)
    MEM_H(0X56, ctx->r5) = ctx->r2;
    // 0x80226720: lw          $a1, 0x2C($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X2C);
    // 0x80226724: addiu       $v0, $zero, -0x19E
    ctx->r2 = ADD32(0, -0X19E);
    // 0x80226728: sh          $v0, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r2;
    // 0x8022672C: addiu       $v0, $zero, -0x950
    ctx->r2 = ADD32(0, -0X950);
    // 0x80226730: sh          $v0, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r2;
    // 0x80226734: lui         $v0, 0xFE62
    ctx->r2 = S32(0XFE62 << 16);
    // 0x80226738: sw          $v0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->r2;
    // 0x8022673C: lui         $v0, 0xF6B0
    ctx->r2 = S32(0XF6B0 << 16);
    // 0x80226740: sh          $a0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r4;
    // 0x80226744: sw          $v1, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->r3;
    // 0x80226748: sw          $v0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->r2;
    // 0x8022674C: sh          $zero, 0x58($a1)
    MEM_H(0X58, ctx->r5) = 0;
    // 0x80226750: sh          $zero, 0x54($a1)
    MEM_H(0X54, ctx->r5) = 0;
    // 0x80226754: sh          $zero, 0x56($a1)
    MEM_H(0X56, ctx->r5) = 0;
L_80226758:
    // 0x80226758: jr          $ra
    // 0x8022675C: nop

    TRACE_RETURN()
    return;
    // 0x8022675C: nop

;}
RECOMP_FUNC void func_8023B3C0_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B3C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023B3C4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023B3C8: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x8023B3CC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023B3D0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8023B3D4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023B3D8: lw          $v0, 0x46D4($at)
    ctx->r2 = MEM_W(ctx->r1, 0X46D4);
    // 0x8023B3DC: jalr        $v0
    // 0x8023B3E0: addiu       $a1, $a0, 0x4E0
    ctx->r5 = ADD32(ctx->r4, 0X4E0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8023B3E0: addiu       $a1, $a0, 0x4E0
    ctx->r5 = ADD32(ctx->r4, 0X4E0);
    after_0:
    // 0x8023B3E4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023B3E8: jr          $ra
    // 0x8023B3EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023B3EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8024AA8C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024AA8C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8024AA90: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8024AA94: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8024AA98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8024AA9C: jal         0x80053ED8
    // 0x8024AAA0: lbu         $a0, 0xC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XC);
    func_80053ED8_2F2D8(rdram, ctx);
        goto after_0;
    // 0x8024AAA0: lbu         $a0, 0xC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XC);
    after_0:
    // 0x8024AAA4: lbu         $v1, 0xC($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0XC);
    // 0x8024AAA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8024AAAC: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8024AAB0: jal         0x8004F5C4
    // 0x8024AAB4: sb          $v1, 0xC($v0)
    MEM_B(0XC, ctx->r2) = ctx->r3;
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_1;
    // 0x8024AAB4: sb          $v1, 0xC($v0)
    MEM_B(0XC, ctx->r2) = ctx->r3;
    after_1:
    // 0x8024AAB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8024AABC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8024AAC0: jr          $ra
    // 0x8024AAC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8024AAC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8024AAC8: nop

    // 0x8024AACC: nop

;}
RECOMP_FUNC void func_8024B54C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024B54C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8024B550: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8024B554: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8024B558: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8024B55C: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8024B560: lb          $a0, 0xD($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XD);
    // 0x8024B564: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024B568: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8024B56C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8024B570: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8024B574: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x8024B578: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8024B57C: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x8024B580: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    // 0x8024B584: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8024B588: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8024B58C: lbu         $v0, 0x52A2($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X52A2);
    // 0x8024B590: lbu         $a0, 0xC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XC);
    // 0x8024B594: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    // 0x8024B598: jal         0x80053ED8
    // 0x8024B59C: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    func_80053ED8_2F2D8(rdram, ctx);
        goto after_0;
    // 0x8024B59C: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    after_0:
    // 0x8024B5A0: lb          $a0, 0xD($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XD);
    // 0x8024B5A4: sll         $v1, $a0, 1
    ctx->r3 = S32(ctx->r4 << 1);
    // 0x8024B5A8: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8024B5AC: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8024B5B0: lhu         $a0, 0x14($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X14);
    // 0x8024B5B4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024B5B8: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8024B5BC: lhu         $v1, 0x5294($at)
    ctx->r3 = MEM_HU(ctx->r1, 0X5294);
    // 0x8024B5C0: lb          $a1, 0xD($s0)
    ctx->r5 = MEM_B(ctx->r16, 0XD);
    // 0x8024B5C4: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x8024B5C8: sll         $v1, $a1, 1
    ctx->r3 = S32(ctx->r5 << 1);
    // 0x8024B5CC: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x8024B5D0: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8024B5D4: sh          $a0, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r4;
    // 0x8024B5D8: lhu         $a0, 0x16($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X16);
    // 0x8024B5DC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024B5E0: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8024B5E4: lhu         $v1, 0x5296($at)
    ctx->r3 = MEM_HU(ctx->r1, 0X5296);
    // 0x8024B5E8: lb          $a1, 0xD($s0)
    ctx->r5 = MEM_B(ctx->r16, 0XD);
    // 0x8024B5EC: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x8024B5F0: sll         $v1, $a1, 1
    ctx->r3 = S32(ctx->r5 << 1);
    // 0x8024B5F4: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x8024B5F8: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8024B5FC: sh          $a0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r4;
    // 0x8024B600: lhu         $v0, 0x18($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X18);
    // 0x8024B604: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8024B608: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x8024B60C: lhu         $a0, 0x5298($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X5298);
    // 0x8024B610: lb          $v1, 0xF($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XF);
    // 0x8024B614: lui         $a1, 0x2E80
    ctx->r5 = S32(0X2E80 << 16);
    // 0x8024B618: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8024B61C: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8024B620: sh          $v0, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r2;
    // 0x8024B624: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x8024B628: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024B62C: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8024B630: lbu         $v1, 0x52A8($at)
    ctx->r3 = MEM_BU(ctx->r1, 0X52A8);
    // 0x8024B634: ori         $a1, $a1, 0x8080
    ctx->r5 = ctx->r5 | 0X8080;
    // 0x8024B638: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8024B63C: sb          $v1, 0x22($s0)
    MEM_B(0X22, ctx->r16) = ctx->r3;
    // 0x8024B640: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8024B644: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8024B648: lbu         $a0, 0x52A9($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X52A9);
    // 0x8024B64C: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x8024B650: lui         $v1, 0x3DC0
    ctx->r3 = S32(0X3DC0 << 16);
    // 0x8024B654: ori         $v1, $v1, 0x29
    ctx->r3 = ctx->r3 | 0X29;
    // 0x8024B658: sw          $a1, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r5;
    // 0x8024B65C: sw          $v1, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r3;
    // 0x8024B660: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8024B664: sb          $a0, 0x23($s0)
    MEM_B(0X23, ctx->r16) = ctx->r4;
    // 0x8024B668: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024B66C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8024B670: lhu         $v0, 0x52A0($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X52A0);
    // 0x8024B674: sh          $v0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r2;
    // 0x8024B678: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8024B67C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8024B680: jr          $ra
    // 0x8024B684: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8024B684: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80241EE4_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80241EE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80241EE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80241EEC: jal         0x8004EFE4
    // 0x80241EF0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_0;
    // 0x80241EF0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x80241EF4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80241EF8: beq         $s0, $zero, L_80241F30
    if (ctx->r16 == 0) {
        // 0x80241EFC: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_80241F30;
    }
    // 0x80241EFC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80241F00: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    // 0x80241F04: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80241F08: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80241F0C: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x80241F10: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80241F14: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    // 0x80241F18: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80241F1C: jal         0x8009A3B4
    // 0x80241F20: sb          $v1, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r3;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80241F20: sb          $v1, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r3;
    after_1:
    // 0x80241F24: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x80241F28: addiu       $v0, $v0, -0x3E8
    ctx->r2 = ADD32(ctx->r2, -0X3E8);
    // 0x80241F2C: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
L_80241F30:
    // 0x80241F30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80241F34: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80241F38: jr          $ra
    // 0x80241F3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80241F3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802417CC_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802417CC: lh          $v1, 0x4($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X4);
    // 0x802417D0: lh          $a2, 0x0($a0)
    ctx->r6 = MEM_H(ctx->r4, 0X0);
    // 0x802417D4: addiu       $a1, $v1, -0x400
    ctx->r5 = ADD32(ctx->r3, -0X400);
    // 0x802417D8: slti        $v1, $a2, 0x59C
    ctx->r3 = SIGNED(ctx->r6) < 0X59C ? 1 : 0;
    // 0x802417DC: slti        $a0, $a1, 0x59C
    ctx->r4 = SIGNED(ctx->r5) < 0X59C ? 1 : 0;
    // 0x802417E0: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
    // 0x802417E4: beq         $v1, $zero, L_80241838
    if (ctx->r3 == 0) {
        // 0x802417E8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80241838;
    }
    // 0x802417E8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x802417EC: slti        $a0, $a2, -0x59B
    ctx->r4 = SIGNED(ctx->r6) < -0X59B ? 1 : 0;
    // 0x802417F0: xori        $a0, $a0, 0x1
    ctx->r4 = ctx->r4 ^ 0X1;
    // 0x802417F4: slti        $v1, $a1, -0x59B
    ctx->r3 = SIGNED(ctx->r5) < -0X59B ? 1 : 0;
    // 0x802417F8: xori        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 ^ 0X1;
    // 0x802417FC: and         $a0, $a0, $v1
    ctx->r4 = ctx->r4 & ctx->r3;
    // 0x80241800: beq         $a0, $zero, L_80241838
    if (ctx->r4 == 0) {
        // 0x80241804: addiu       $v1, $a2, 0x973
        ctx->r3 = ADD32(ctx->r6, 0X973);
            goto L_80241838;
    }
    // 0x80241804: addiu       $v1, $a2, 0x973
    ctx->r3 = ADD32(ctx->r6, 0X973);
    // 0x80241808: slt         $v1, $a1, $v1
    ctx->r3 = SIGNED(ctx->r5) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8024180C: beq         $v1, $zero, L_80241838
    if (ctx->r3 == 0) {
        // 0x80241810: negu        $a0, $a2
        ctx->r4 = SUB32(0, ctx->r6);
            goto L_80241838;
    }
    // 0x80241810: negu        $a0, $a2
    ctx->r4 = SUB32(0, ctx->r6);
    // 0x80241814: addiu       $v1, $a0, 0x973
    ctx->r3 = ADD32(ctx->r4, 0X973);
    // 0x80241818: slt         $v1, $a1, $v1
    ctx->r3 = SIGNED(ctx->r5) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8024181C: beq         $v1, $zero, L_80241838
    if (ctx->r3 == 0) {
        // 0x80241820: addiu       $v1, $a2, -0x973
        ctx->r3 = ADD32(ctx->r6, -0X973);
            goto L_80241838;
    }
    // 0x80241820: addiu       $v1, $a2, -0x973
    ctx->r3 = ADD32(ctx->r6, -0X973);
    // 0x80241824: slt         $v1, $v1, $a1
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80241828: beq         $v1, $zero, L_80241838
    if (ctx->r3 == 0) {
        // 0x8024182C: nop
    
            goto L_80241838;
    }
    // 0x8024182C: nop

    // 0x80241830: addiu       $v0, $a0, -0x973
    ctx->r2 = ADD32(ctx->r4, -0X973);
    // 0x80241834: slt         $v0, $v0, $a1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
L_80241838:
    // 0x80241838: jr          $ra
    // 0x8024183C: nop

    TRACE_RETURN()
    return;
    // 0x8024183C: nop

;}
RECOMP_FUNC void func_8024726C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024726C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80247270: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80247274: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80247278: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8024727C: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80247280: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x80247284: beq         $v0, $zero, L_8024733C
    if (ctx->r2 == 0) {
        // 0x80247288: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8024733C;
    }
    // 0x80247288: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8024728C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80247290: addu        $at, $at, $v0
    gpr jr_addend_80247298 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80247294: lw          $v0, 0x62B8($at)
    ctx->r2 = ADD32(ctx->r1, 0X62B8);
    // 0x80247298: jr          $v0
    // 0x8024729C: nop

    switch (jr_addend_80247298 >> 2) {
        case 0: goto L_802472A0; break;
        case 1: goto L_802472CC; break;
        case 2: goto L_802472F4; break;
        case 3: goto L_80247318; break;
        case 4: goto L_8024733C; break;
        default: switch_error(__func__, 0x80247298, 0x802562B8);
    }
    // 0x8024729C: nop

L_802472A0:
    // 0x802472A0: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x802472A4: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x802472A8: bne         $v1, $v0, L_8024733C
    if (ctx->r3 != ctx->r2) {
        // 0x802472AC: addiu       $v0, $zero, 0xC
        ctx->r2 = ADD32(0, 0XC);
            goto L_8024733C;
    }
    // 0x802472AC: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x802472B0: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x802472B4: bne         $v1, $v0, L_8024733C
    if (ctx->r3 != ctx->r2) {
        // 0x802472B8: nop
    
            goto L_8024733C;
    }
    // 0x802472B8: nop

    // 0x802472BC: jal         0x802476B0
    // 0x802472C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802476B0_ovl28(rdram, ctx);
        goto after_0;
    // 0x802472C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x802472C4: j           L_80247330
    // 0x802472C8: nop

        goto L_80247330;
    // 0x802472C8: nop

L_802472CC:
    // 0x802472CC: lhu         $v0, 0x2($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X2);
    // 0x802472D0: addiu       $v1, $zero, 0x800
    ctx->r3 = ADD32(0, 0X800);
    // 0x802472D4: addiu       $v0, $v0, -0x400
    ctx->r2 = ADD32(ctx->r2, -0X400);
    // 0x802472D8: sh          $v0, 0x2($a2)
    MEM_H(0X2, ctx->r6) = ctx->r2;
    // 0x802472DC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802472E0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802472E4: beq         $v0, $v1, L_80247330
    if (ctx->r2 == ctx->r3) {
        // 0x802472E8: nop
    
            goto L_80247330;
    }
    // 0x802472E8: nop

    // 0x802472EC: j           L_8024733C
    // 0x802472F0: nop

        goto L_8024733C;
    // 0x802472F0: nop

L_802472F4:
    // 0x802472F4: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x802472F8: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x802472FC: bne         $v1, $v0, L_8024733C
    if (ctx->r3 != ctx->r2) {
        // 0x80247300: addiu       $v0, $zero, 0x1E
        ctx->r2 = ADD32(0, 0X1E);
            goto L_8024733C;
    }
    // 0x80247300: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x80247304: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x80247308: beq         $v1, $v0, L_80247330
    if (ctx->r3 == ctx->r2) {
        // 0x8024730C: nop
    
            goto L_80247330;
    }
    // 0x8024730C: nop

    // 0x80247310: j           L_8024733C
    // 0x80247314: nop

        goto L_8024733C;
    // 0x80247314: nop

L_80247318:
    // 0x80247318: lhu         $v0, 0x2($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X2);
    // 0x8024731C: addiu       $v0, $v0, -0x80
    ctx->r2 = ADD32(ctx->r2, -0X80);
    // 0x80247320: sh          $v0, 0x2($a2)
    MEM_H(0X2, ctx->r6) = ctx->r2;
    // 0x80247324: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80247328: bne         $v0, $zero, L_8024733C
    if (ctx->r2 != 0) {
        // 0x8024732C: nop
    
            goto L_8024733C;
    }
    // 0x8024732C: nop

L_80247330:
    // 0x80247330: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80247334: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80247338: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8024733C:
    // 0x8024733C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80247340: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80247344: jr          $ra
    // 0x80247348: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80247348: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8024DE40_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024DE40: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8024DE44: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8024DE48: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8024DE4C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8024DE50: addiu       $s0, $zero, 0x1F
    ctx->r16 = ADD32(0, 0X1F);
    // 0x8024DE54: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8024DE58: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x8024DE5C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
L_8024DE60:
    // 0x8024DE60: jal         0x8004F374
    // 0x8024DE64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F374_2A774(rdram, ctx);
        goto after_0;
    // 0x8024DE64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8024DE68: beql        $v0, $zero, L_8024DE7C
    if (ctx->r2 == 0) {
        // 0x8024DE6C: addiu       $s0, $s0, -0x1
        ctx->r16 = ADD32(ctx->r16, -0X1);
            goto L_8024DE7C;
    }
    goto skip_0;
    // 0x8024DE6C: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    skip_0:
    // 0x8024DE70: sb          $s1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r17;
    // 0x8024DE74: j           L_8024DE84
    // 0x8024DE78: sb          $zero, 0x2($v0)
    MEM_B(0X2, ctx->r2) = 0;
        goto L_8024DE84;
    // 0x8024DE78: sb          $zero, 0x2($v0)
    MEM_B(0X2, ctx->r2) = 0;
L_8024DE7C:
    // 0x8024DE7C: bgez        $s0, L_8024DE60
    if (SIGNED(ctx->r16) >= 0) {
        // 0x8024DE80: nop
    
            goto L_8024DE60;
    }
    // 0x8024DE80: nop

L_8024DE84:
    // 0x8024DE84: jal         0x8004F62C
    // 0x8024DE88: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8004F62C_2AA2C(rdram, ctx);
        goto after_1;
    // 0x8024DE88: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_1:
    // 0x8024DE8C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8024DE90: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8024DE94: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8024DE98: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8024DE9C: jr          $ra
    // 0x8024DEA0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8024DEA0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8024DEA4: nop

    // 0x8024DEA8: nop

    // 0x8024DEAC: nop

;}
RECOMP_FUNC void func_8023A4C8_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A4C8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8023A4CC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8023A4D0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023A4D4: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x8023A4D8: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8023A4DC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8023A4E0: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x8023A4E4: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x8023A4E8: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x8023A4EC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8023A4F0: jal         0x8004F820
    // 0x8023A4F4: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8023A4F4: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_0:
    // 0x8023A4F8: lhu         $a1, 0x56($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X56);
    // 0x8023A4FC: addiu       $a0, $s1, 0x1C
    ctx->r4 = ADD32(ctx->r17, 0X1C);
    // 0x8023A500: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    // 0x8023A504: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x8023A508: andi        $a1, $a1, 0xFFF
    ctx->r5 = ctx->r5 & 0XFFF;
    // 0x8023A50C: sh          $a1, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r5;
    // 0x8023A510: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8023A514: lh          $v1, 0x4A06($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X4A06);
    // 0x8023A518: addiu       $a3, $s0, 0x1C
    ctx->r7 = ADD32(ctx->r16, 0X1C);
    // 0x8023A51C: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x8023A520: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8023A524: jal         0x8004FAEC
    // 0x8023A528: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_8004FAEC_2AEEC(rdram, ctx);
        goto after_1;
    // 0x8023A528: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_1:
    // 0x8023A52C: lbu         $v1, 0x6($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X6);
    // 0x8023A530: addiu       $s0, $s1, 0x4E0
    ctx->r16 = ADD32(ctx->r17, 0X4E0);
    // 0x8023A534: andi        $v1, $v1, 0x80
    ctx->r3 = ctx->r3 & 0X80;
    // 0x8023A538: beq         $v1, $zero, L_8023A558
    if (ctx->r3 == 0) {
        // 0x8023A53C: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_8023A558;
    }
    // 0x8023A53C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8023A540: lhu         $v1, 0x518($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X518);
    // 0x8023A544: sltiu       $v0, $v1, 0x1E
    ctx->r2 = ctx->r3 < 0X1E ? 1 : 0;
    // 0x8023A548: beq         $v0, $zero, L_8023A55C
    if (ctx->r2 == 0) {
        // 0x8023A54C: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_8023A55C;
    }
    // 0x8023A54C: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8023A550: j           L_8023A55C
    // 0x8023A554: sh          $v0, 0x518($s1)
    MEM_H(0X518, ctx->r17) = ctx->r2;
        goto L_8023A55C;
    // 0x8023A554: sh          $v0, 0x518($s1)
    MEM_H(0X518, ctx->r17) = ctx->r2;
L_8023A558:
    // 0x8023A558: sh          $zero, 0x518($s1)
    MEM_H(0X518, ctx->r17) = 0;
L_8023A55C:
    // 0x8023A55C: lhu         $v0, 0x36($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X36);
    // 0x8023A560: beq         $v0, $zero, L_8023A570
    if (ctx->r2 == 0) {
        // 0x8023A564: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_8023A570;
    }
    // 0x8023A564: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023A568: j           L_8023A5D8
    // 0x8023A56C: sh          $v0, 0x36($s0)
    MEM_H(0X36, ctx->r16) = ctx->r2;
        goto L_8023A5D8;
    // 0x8023A56C: sh          $v0, 0x36($s0)
    MEM_H(0X36, ctx->r16) = ctx->r2;
L_8023A570:
    // 0x8023A570: lhu         $v0, 0x38($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X38);
    // 0x8023A574: sltiu       $v0, $v0, 0x1E
    ctx->r2 = ctx->r2 < 0X1E ? 1 : 0;
    // 0x8023A578: bne         $v0, $zero, L_8023A5D8
    if (ctx->r2 != 0) {
        // 0x8023A57C: lui         $v1, 0x9
        ctx->r3 = S32(0X9 << 16);
            goto L_8023A5D8;
    }
    // 0x8023A57C: lui         $v1, 0x9
    ctx->r3 = S32(0X9 << 16);
    // 0x8023A580: lw          $v0, 0x80($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X80);
    // 0x8023A584: ori         $v1, $v1, 0xC400
    ctx->r3 = ctx->r3 | 0XC400;
    // 0x8023A588: sltu        $v1, $v1, $v0
    ctx->r3 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x8023A58C: xori        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 ^ 0X1;
    // 0x8023A590: sltu        $v0, $zero, $a0
    ctx->r2 = 0 < ctx->r4 ? 1 : 0;
    // 0x8023A594: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8023A598: beq         $v1, $zero, L_8023A5D8
    if (ctx->r3 == 0) {
        // 0x8023A59C: nop
    
            goto L_8023A5D8;
    }
    // 0x8023A59C: nop

    // 0x8023A5A0: jal         0x800A3450
    // 0x8023A5A4: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x8023A5A4: nop

    after_2:
    // 0x8023A5A8: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8023A5AC: slti        $v0, $v0, 0x7
    ctx->r2 = SIGNED(ctx->r2) < 0X7 ? 1 : 0;
    // 0x8023A5B0: beq         $v0, $zero, L_8023A5C8
    if (ctx->r2 == 0) {
        // 0x8023A5B4: nop
    
            goto L_8023A5C8;
    }
    // 0x8023A5B4: nop

    // 0x8023A5B8: jal         0x8023AD88
    // 0x8023A5BC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8023AD88_ovl28(rdram, ctx);
        goto after_3;
    // 0x8023A5BC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
    // 0x8023A5C0: j           L_8023A6BC
    // 0x8023A5C4: nop

        goto L_8023A6BC;
    // 0x8023A5C4: nop

L_8023A5C8:
    // 0x8023A5C8: jal         0x8023ADCC
    // 0x8023A5CC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8023ADCC_ovl28(rdram, ctx);
        goto after_4;
    // 0x8023A5CC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x8023A5D0: j           L_8023A6BC
    // 0x8023A5D4: nop

        goto L_8023A6BC;
    // 0x8023A5D4: nop

L_8023A5D8:
    // 0x8023A5D8: lhu         $v0, 0x34($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X34);
    // 0x8023A5DC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023A5E0: sh          $v0, 0x34($s0)
    MEM_H(0X34, ctx->r16) = ctx->r2;
    // 0x8023A5E4: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x8023A5E8: bne         $v0, $zero, L_8023A624
    if (ctx->r2 != 0) {
        // 0x8023A5EC: nop
    
            goto L_8023A624;
    }
    // 0x8023A5EC: nop

    // 0x8023A5F0: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x8023A5F4: bne         $v0, $zero, L_8023A620
    if (ctx->r2 != 0) {
        // 0x8023A5F8: addiu       $v0, $zero, 0x3C
        ctx->r2 = ADD32(0, 0X3C);
            goto L_8023A620;
    }
    // 0x8023A5F8: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x8023A5FC: jal         0x8023AD38
    // 0x8023A600: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8023AD38_ovl28(rdram, ctx);
        goto after_5;
    // 0x8023A600: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_5:
    // 0x8023A604: lh          $a1, 0x44($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X44);
    // 0x8023A608: lh          $a2, 0x46($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X46);
    // 0x8023A60C: lh          $a3, 0x48($s1)
    ctx->r7 = MEM_H(ctx->r17, 0X48);
    // 0x8023A610: jal         0x8004DA90
    // 0x8023A614: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_6;
    // 0x8023A614: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
    // 0x8023A618: j           L_8023A6BC
    // 0x8023A61C: nop

        goto L_8023A6BC;
    // 0x8023A61C: nop

L_8023A620:
    // 0x8023A620: sh          $v0, 0x34($s0)
    MEM_H(0X34, ctx->r16) = ctx->r2;
L_8023A624:
    // 0x8023A624: lhu         $v1, 0x56($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X56);
    // 0x8023A628: lhu         $a2, 0x5E($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X5E);
    // 0x8023A62C: subu        $a1, $v1, $a2
    ctx->r5 = SUB32(ctx->r3, ctx->r6);
    // 0x8023A630: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
    // 0x8023A634: bgez        $v0, L_8023A640
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8023A638: addu        $a0, $a1, $zero
        ctx->r4 = ADD32(ctx->r5, 0);
            goto L_8023A640;
    }
    // 0x8023A638: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x8023A63C: negu        $a0, $a1
    ctx->r4 = SUB32(0, ctx->r5);
L_8023A640:
    // 0x8023A640: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x8023A644: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023A648: slti        $v0, $v0, 0x11
    ctx->r2 = SIGNED(ctx->r2) < 0X11 ? 1 : 0;
    // 0x8023A64C: beq         $v0, $zero, L_8023A65C
    if (ctx->r2 == 0) {
        // 0x8023A650: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8023A65C;
    }
    // 0x8023A650: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023A654: j           L_8023A688
    // 0x8023A658: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
        goto L_8023A688;
    // 0x8023A658: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
L_8023A65C:
    // 0x8023A65C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8023A660: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8023A664: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x8023A668: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023A66C: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8023A670: beq         $v0, $zero, L_8023A680
    if (ctx->r2 == 0) {
        // 0x8023A674: addiu       $a1, $zero, 0x7
        ctx->r5 = ADD32(0, 0X7);
            goto L_8023A680;
    }
    // 0x8023A674: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x8023A678: j           L_8023A688
    // 0x8023A67C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
        goto L_8023A688;
    // 0x8023A67C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_8023A680:
    // 0x8023A680: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023A684: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
L_8023A688:
    // 0x8023A688: jal         0x8023AC48
    // 0x8023A68C: nop

    func_8023AC48_ovl28(rdram, ctx);
        goto after_7;
    // 0x8023A68C: nop

    after_7:
    // 0x8023A690: lh          $a1, 0x44($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X44);
    // 0x8023A694: lh          $a2, 0x46($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X46);
    // 0x8023A698: lh          $a3, 0x48($s1)
    ctx->r7 = MEM_H(ctx->r17, 0X48);
    // 0x8023A69C: jal         0x8004DA90
    // 0x8023A6A0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_8;
    // 0x8023A6A0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_8:
    // 0x8023A6A4: lbu         $v1, 0xA4($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA4);
    // 0x8023A6A8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023A6AC: bne         $v1, $v0, L_8023A6BC
    if (ctx->r3 != ctx->r2) {
        // 0x8023A6B0: addiu       $a0, $zero, 0x1B8
        ctx->r4 = ADD32(0, 0X1B8);
            goto L_8023A6BC;
    }
    // 0x8023A6B0: addiu       $a0, $zero, 0x1B8
    ctx->r4 = ADD32(0, 0X1B8);
    // 0x8023A6B4: jal         0x8002A33C
    // 0x8023A6B8: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_9;
    // 0x8023A6B8: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_9:
L_8023A6BC:
    // 0x8023A6BC: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8023A6C0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8023A6C4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023A6C8: jr          $ra
    // 0x8023A6CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8023A6CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802262C8_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802262C8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802262CC: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x802262D0: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x802262D4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802262D8: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x802262DC: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x802262E0: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x802262E4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802262E8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802262EC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802262F0: lw          $v0, 0x10($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X10);
    // 0x802262F4: bne         $v0, $zero, L_802263C4
    if (ctx->r2 != 0) {
        // 0x802262F8: slti        $v0, $v0, 0x5
        ctx->r2 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
            goto L_802263C4;
    }
    // 0x802262F8: slti        $v0, $v0, 0x5
    ctx->r2 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
    // 0x802262FC: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x80226300: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x80226304: addiu       $s4, $zero, 0x1C
    ctx->r20 = ADD32(0, 0X1C);
    // 0x80226308: addiu       $s6, $zero, 0x3
    ctx->r22 = ADD32(0, 0X3);
    // 0x8022630C: addiu       $s5, $zero, 0x4
    ctx->r21 = ADD32(0, 0X4);
    // 0x80226310: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
L_80226314:
    // 0x80226314: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80226318: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x8022631C: jal         0x8004F144
    // 0x80226320: lw          $s1, 0x5C($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X5C);
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80226320: lw          $s1, 0x5C($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X5C);
    after_0:
    // 0x80226324: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80226328: beq         $v1, $zero, L_80226348
    if (ctx->r3 == 0) {
        // 0x8022632C: nop
    
            goto L_80226348;
    }
    // 0x8022632C: nop

    // 0x80226330: sb          $s2, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r18;
    // 0x80226334: sb          $s4, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r20;
    // 0x80226338: sb          $s6, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r22;
    // 0x8022633C: lbu         $v0, 0x1($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X1);
    // 0x80226340: sb          $zero, 0xD($v1)
    MEM_B(0XD, ctx->r3) = 0;
    // 0x80226344: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
L_80226348:
    // 0x80226348: jal         0x8004F144
    // 0x8022634C: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_1;
    // 0x8022634C: nop

    after_1:
    // 0x80226350: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80226354: beq         $v1, $zero, L_80226378
    if (ctx->r3 == 0) {
        // 0x80226358: nop
    
            goto L_80226378;
    }
    // 0x80226358: nop

    // 0x8022635C: sb          $s2, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r18;
    // 0x80226360: sb          $s4, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r20;
    // 0x80226364: sb          $s5, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r21;
    // 0x80226368: lbu         $v0, 0x1($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X1);
    // 0x8022636C: sb          $s0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r16;
    // 0x80226370: sb          $zero, 0xE($v1)
    MEM_B(0XE, ctx->r3) = 0;
    // 0x80226374: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
L_80226378:
    // 0x80226378: jal         0x8004F144
    // 0x8022637C: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_2;
    // 0x8022637C: nop

    after_2:
    // 0x80226380: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80226384: beql        $v1, $zero, L_802263AC
    if (ctx->r3 == 0) {
        // 0x80226388: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_802263AC;
    }
    goto skip_0;
    // 0x80226388: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x8022638C: sb          $s2, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r18;
    // 0x80226390: sb          $s4, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r20;
    // 0x80226394: sb          $s5, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r21;
    // 0x80226398: lbu         $v0, 0x1($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X1);
    // 0x8022639C: sb          $s0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r16;
    // 0x802263A0: sb          $s2, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r18;
    // 0x802263A4: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
    // 0x802263A8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_802263AC:
    // 0x802263AC: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
    // 0x802263B0: sltiu       $v0, $v0, 0x4
    ctx->r2 = ctx->r2 < 0X4 ? 1 : 0;
    // 0x802263B4: bne         $v0, $zero, L_80226314
    if (ctx->r2 != 0) {
        // 0x802263B8: andi        $v0, $s0, 0xFF
        ctx->r2 = ctx->r16 & 0XFF;
            goto L_80226314;
    }
    // 0x802263B8: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
    // 0x802263BC: lw          $v0, 0x10($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X10);
    // 0x802263C0: slti        $v0, $v0, 0x5
    ctx->r2 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
L_802263C4:
    // 0x802263C4: bne         $v0, $zero, L_802263D4
    if (ctx->r2 != 0) {
        // 0x802263C8: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_802263D4;
    }
    // 0x802263C8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x802263CC: jal         0x80226BC4
    // 0x802263D0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_80226BC4_ovl28(rdram, ctx);
        goto after_3;
    // 0x802263D0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_3:
L_802263D4:
    // 0x802263D4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802263D8: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x802263DC: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x802263E0: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x802263E4: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x802263E8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802263EC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802263F0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802263F4: jr          $ra
    // 0x802263F8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x802263F8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022FBC0_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FBC0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022FBC4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022FBC8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022FBCC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022FBD0: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x8022FBD4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022FBD8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022FBDC: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8022FBE0: addiu       $s2, $s2, 0x49C4
    ctx->r18 = ADD32(ctx->r18, 0X49C4);
    // 0x8022FBE4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022FBE8: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022FBEC: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022FBF0: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022FBF4: lbu         $v1, 0x34B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022FBF8: lhu         $t0, 0x56($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X56);
    // 0x8022FBFC: lbu         $t1, 0xAC($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022FC00: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x8022FC04: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022FC08: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022FC0C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022FC10: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
    // 0x8022FC14: sh          $t0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r8;
    // 0x8022FC18: jal         0x8004F820
    // 0x8022FC1C: sb          $t1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r9;
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022FC1C: sb          $t1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r9;
    after_0:
    // 0x8022FC20: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022FC24: bgez        $v0, L_8022FC54
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022FC28: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_8022FC54;
    }
    // 0x8022FC28: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x8022FC2C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022FC30: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022FC34: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022FC38: jal         0x8004F820
    // 0x8022FC3C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x8022FC3C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_1:
    // 0x8022FC40: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022FC44: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022FC48: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8022FC4C: j           L_8022FC70
    // 0x8022FC50: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_8022FC70;
    // 0x8022FC50: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_8022FC54:
    // 0x8022FC54: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022FC58: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022FC5C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022FC60: jal         0x8004F820
    // 0x8022FC64: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x8022FC64: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x8022FC68: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022FC6C: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_8022FC70:
    // 0x8022FC70: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022FC74: sh          $v0, 0x6($s3)
    MEM_H(0X6, ctx->r19) = ctx->r2;
    // 0x8022FC78: lbu         $a3, 0xC($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XC);
    // 0x8022FC7C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022FC80: jal         0x800610AC
    // 0x8022FC84: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_3;
    // 0x8022FC84: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x8022FC88: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022FC8C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022FC90: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022FC94: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022FC98: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022FC9C: jr          $ra
    // 0x8022FCA0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022FCA0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80249CF8_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80249CF8: lw          $v0, 0x44($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X44);
    // 0x80249CFC: lw          $v0, 0x4C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4C);
    // 0x80249D00: jr          $ra
    // 0x80249D04: sw          $v0, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80249D04: sw          $v0, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_80235734_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235734: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80235738: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8023573C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x80235740: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80235744: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80235748: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x8023574C: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x80235750: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80235754: addu        $v1, $v0, $v1
    ctx->r3 = ADD32(ctx->r2, ctx->r3);
    // 0x80235758: lb          $a0, 0x1($v1)
    ctx->r4 = MEM_B(ctx->r3, 0X1);
    // 0x8023575C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80235760: addiu       $v0, $zero, 0x7E
    ctx->r2 = ADD32(0, 0X7E);
    // 0x80235764: beq         $a0, $v0, L_80235780
    if (ctx->r4 == ctx->r2) {
        // 0x80235768: addiu       $v0, $zero, 0x7F
        ctx->r2 = ADD32(0, 0X7F);
            goto L_80235780;
    }
    // 0x80235768: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x8023576C: bne         $a0, $v0, L_8023577C
    if (ctx->r4 != ctx->r2) {
        // 0x80235770: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_8023577C;
    }
    // 0x80235770: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x80235774: j           L_80235780
    // 0x80235778: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
        goto L_80235780;
    // 0x80235778: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
L_8023577C:
    // 0x8023577C: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
L_80235780:
    // 0x80235780: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x80235784: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x80235788: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023578C: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80235790: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x80235794: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x80235798: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8023579C: sra         $a0, $v0, 24
    ctx->r4 = S32(SIGNED(ctx->r2) >> 24);
    // 0x802357A0: beq         $a0, $v1, L_802357C8
    if (ctx->r4 == ctx->r3) {
        // 0x802357A4: addiu       $a1, $zero, 0x3E
        ctx->r5 = ADD32(0, 0X3E);
            goto L_802357C8;
    }
    // 0x802357A4: addiu       $a1, $zero, 0x3E
    ctx->r5 = ADD32(0, 0X3E);
    // 0x802357A8: addiu       $a2, $zero, 0x3A
    ctx->r6 = ADD32(0, 0X3A);
    // 0x802357AC: jal         0x8003B85C
    // 0x802357B0: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_0;
    // 0x802357B0: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_0:
    // 0x802357B4: lw          $a0, 0x88($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X88);
    // 0x802357B8: lui         $a1, 0x5
    ctx->r5 = S32(0X5 << 16);
    // 0x802357BC: ori         $a1, $a1, 0x4
    ctx->r5 = ctx->r5 | 0X4;
    // 0x802357C0: jal         0x8003B840
    // 0x802357C4: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_1;
    // 0x802357C4: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_1:
L_802357C8:
    // 0x802357C8: lb          $a0, 0x11($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X11);
    // 0x802357CC: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x802357D0: lbu         $v1, 0xC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XC);
    // 0x802357D4: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x802357D8: sb          $v1, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r3;
    // 0x802357DC: lb          $v1, 0x1($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X1);
    // 0x802357E0: addiu       $v0, $zero, 0x7E
    ctx->r2 = ADD32(0, 0X7E);
    // 0x802357E4: beq         $v1, $v0, L_80235800
    if (ctx->r3 == ctx->r2) {
        // 0x802357E8: addiu       $v0, $zero, 0x7F
        ctx->r2 = ADD32(0, 0X7F);
            goto L_80235800;
    }
    // 0x802357E8: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x802357EC: bne         $v1, $v0, L_802357FC
    if (ctx->r3 != ctx->r2) {
        // 0x802357F0: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_802357FC;
    }
    // 0x802357F0: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x802357F4: j           L_80235800
    // 0x802357F8: sb          $zero, 0x11($s0)
    MEM_B(0X11, ctx->r16) = 0;
        goto L_80235800;
    // 0x802357F8: sb          $zero, 0x11($s0)
    MEM_B(0X11, ctx->r16) = 0;
L_802357FC:
    // 0x802357FC: sb          $v0, 0x11($s0)
    MEM_B(0X11, ctx->r16) = ctx->r2;
L_80235800:
    // 0x80235800: lb          $v1, 0x11($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X11);
    // 0x80235804: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x80235808: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023580C: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80235810: lb          $v1, 0x10($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X10);
    // 0x80235814: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    // 0x80235818: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8023581C: sra         $a0, $v0, 24
    ctx->r4 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80235820: beq         $a0, $v1, L_80235848
    if (ctx->r4 == ctx->r3) {
        // 0x80235824: addiu       $a1, $zero, 0x3E
        ctx->r5 = ADD32(0, 0X3E);
            goto L_80235848;
    }
    // 0x80235824: addiu       $a1, $zero, 0x3E
    ctx->r5 = ADD32(0, 0X3E);
    // 0x80235828: addiu       $a2, $zero, 0x3A
    ctx->r6 = ADD32(0, 0X3A);
    // 0x8023582C: jal         0x8003B85C
    // 0x80235830: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_2;
    // 0x80235830: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_2:
    // 0x80235834: lw          $a0, 0x88($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X88);
    // 0x80235838: lui         $a1, 0x7
    ctx->r5 = S32(0X7 << 16);
    // 0x8023583C: ori         $a1, $a1, 0x6
    ctx->r5 = ctx->r5 | 0X6;
    // 0x80235840: jal         0x8003B840
    // 0x80235844: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_3;
    // 0x80235844: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_3:
L_80235848:
    // 0x80235848: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x8023584C: sb          $v0, 0x10($s0)
    MEM_B(0X10, ctx->r16) = ctx->r2;
    // 0x80235850: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80235854: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80235858: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8023585C: jr          $ra
    // 0x80235860: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80235860: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80235A00_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235A00: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80235A04: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80235A08: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x80235A0C: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80235A10: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80235A14: lb          $v0, 0x9($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X9);
    // 0x80235A18: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80235A1C: bne         $v0, $zero, L_80235AA0
    if (ctx->r2 != 0) {
        // 0x80235A20: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80235AA0;
    }
    // 0x80235A20: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80235A24: lb          $v0, 0x8($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X8);
    // 0x80235A28: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x80235A2C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80235A30: lb          $v1, 0x0($v1)
    ctx->r3 = MEM_B(ctx->r3, 0X0);
    // 0x80235A34: addiu       $v0, $zero, 0x7E
    ctx->r2 = ADD32(0, 0X7E);
    // 0x80235A38: beq         $v1, $v0, L_80235AA8
    if (ctx->r3 == ctx->r2) {
        // 0x80235A3C: addiu       $v0, $zero, 0x7F
        ctx->r2 = ADD32(0, 0X7F);
            goto L_80235AA8;
    }
    // 0x80235A3C: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x80235A40: beql        $v1, $v0, L_80235A48
    if (ctx->r3 == ctx->r2) {
        // 0x80235A44: sb          $zero, 0x8($s0)
        MEM_B(0X8, ctx->r16) = 0;
            goto L_80235A48;
    }
    goto skip_0;
    // 0x80235A44: sb          $zero, 0x8($s0)
    MEM_B(0X8, ctx->r16) = 0;
    skip_0:
L_80235A48:
    // 0x80235A48: lb          $v1, 0x8($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X8);
    // 0x80235A4C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80235A50: addiu       $a1, $zero, 0x3E
    ctx->r5 = ADD32(0, 0X3E);
    // 0x80235A54: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80235A58: lb          $a0, 0x0($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X0);
    // 0x80235A5C: addiu       $a2, $zero, 0x3A
    ctx->r6 = ADD32(0, 0X3A);
    // 0x80235A60: jal         0x8003B85C
    // 0x80235A64: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_0;
    // 0x80235A64: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_0:
    // 0x80235A68: lw          $a0, 0x88($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X88);
    // 0x80235A6C: lui         $a1, 0x5
    ctx->r5 = S32(0X5 << 16);
    // 0x80235A70: ori         $a1, $a1, 0x4
    ctx->r5 = ctx->r5 | 0X4;
    // 0x80235A74: jal         0x8003B840
    // 0x80235A78: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_1;
    // 0x80235A78: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_1:
    // 0x80235A7C: lb          $v1, 0x8($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X8);
    // 0x80235A80: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80235A84: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80235A88: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80235A8C: lbu         $v1, 0x1($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X1);
    // 0x80235A90: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80235A94: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80235A98: j           L_80235AA8
    // 0x80235A9C: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
        goto L_80235AA8;
    // 0x80235A9C: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
L_80235AA0:
    // 0x80235AA0: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80235AA4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80235AA8:
    // 0x80235AA8: lb          $v0, 0xB($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XB);
    // 0x80235AAC: bne         $v0, $zero, L_80235B30
    if (ctx->r2 != 0) {
        // 0x80235AB0: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80235B30;
    }
    // 0x80235AB0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80235AB4: lb          $v0, 0xA($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA);
    // 0x80235AB8: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x80235ABC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80235AC0: lb          $v1, 0x0($v1)
    ctx->r3 = MEM_B(ctx->r3, 0X0);
    // 0x80235AC4: addiu       $v0, $zero, 0x7E
    ctx->r2 = ADD32(0, 0X7E);
    // 0x80235AC8: beq         $v1, $v0, L_80235B38
    if (ctx->r3 == ctx->r2) {
        // 0x80235ACC: addiu       $v0, $zero, 0x7F
        ctx->r2 = ADD32(0, 0X7F);
            goto L_80235B38;
    }
    // 0x80235ACC: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x80235AD0: beql        $v1, $v0, L_80235AD8
    if (ctx->r3 == ctx->r2) {
        // 0x80235AD4: sb          $zero, 0xA($s0)
        MEM_B(0XA, ctx->r16) = 0;
            goto L_80235AD8;
    }
    goto skip_1;
    // 0x80235AD4: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    skip_1:
L_80235AD8:
    // 0x80235AD8: lb          $v1, 0xA($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA);
    // 0x80235ADC: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x80235AE0: addiu       $a1, $zero, 0x3E
    ctx->r5 = ADD32(0, 0X3E);
    // 0x80235AE4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80235AE8: lb          $a0, 0x0($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X0);
    // 0x80235AEC: addiu       $a2, $zero, 0x3A
    ctx->r6 = ADD32(0, 0X3A);
    // 0x80235AF0: jal         0x8003B85C
    // 0x80235AF4: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_2;
    // 0x80235AF4: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_2:
    // 0x80235AF8: lw          $a0, 0x88($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X88);
    // 0x80235AFC: lui         $a1, 0x7
    ctx->r5 = S32(0X7 << 16);
    // 0x80235B00: ori         $a1, $a1, 0x6
    ctx->r5 = ctx->r5 | 0X6;
    // 0x80235B04: jal         0x8003B840
    // 0x80235B08: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_3;
    // 0x80235B08: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_3:
    // 0x80235B0C: lb          $v1, 0xA($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA);
    // 0x80235B10: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x80235B14: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80235B18: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80235B1C: lbu         $v1, 0x1($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X1);
    // 0x80235B20: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80235B24: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80235B28: j           L_80235B38
    // 0x80235B2C: sb          $v1, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r3;
        goto L_80235B38;
    // 0x80235B2C: sb          $v1, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r3;
L_80235B30:
    // 0x80235B30: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80235B34: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_80235B38:
    // 0x80235B38: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80235B3C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80235B40: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80235B44: jr          $ra
    // 0x80235B48: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80235B48: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8024B744_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024B744: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8024B748: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8024B74C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8024B750: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8024B754: jal         0x80053ED8
    // 0x8024B758: lbu         $a0, 0xC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XC);
    func_80053ED8_2F2D8(rdram, ctx);
        goto after_0;
    // 0x8024B758: lbu         $a0, 0xC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XC);
    after_0:
    // 0x8024B75C: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8024B760: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024B764: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8024B768: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8024B76C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8024B770: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8024B774: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x8024B778: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x8024B77C: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8024B780: jal         0x800A3450
    // 0x8024B784: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x8024B784: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_1:
    // 0x8024B788: lui         $v1, 0x3DC0
    ctx->r3 = S32(0X3DC0 << 16);
    // 0x8024B78C: ori         $v1, $v1, 0x29
    ctx->r3 = ctx->r3 | 0X29;
    // 0x8024B790: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8024B794: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8024B798: sb          $v0, 0xF($a0)
    MEM_B(0XF, ctx->r4) = ctx->r2;
    // 0x8024B79C: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8024B7A0: sw          $v1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r3;
    // 0x8024B7A4: jal         0x8024B890
    // 0x8024B7A8: sh          $v0, 0x24($a0)
    MEM_H(0X24, ctx->r4) = ctx->r2;
    func_8024B890_ovl28(rdram, ctx);
        goto after_2;
    // 0x8024B7A8: sh          $v0, 0x24($a0)
    MEM_H(0X24, ctx->r4) = ctx->r2;
    after_2:
    // 0x8024B7AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8024B7B0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8024B7B4: jr          $ra
    // 0x8024B7B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8024B7B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022DD18_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DD18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022DD1C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022DD20: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022DD24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022DD28: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x8022DD2C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022DD30: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x8022DD34: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022DD38: bne         $v0, $zero, L_8022DD6C
    if (ctx->r2 != 0) {
        // 0x8022DD3C: addiu       $v0, $zero, 0x49
        ctx->r2 = ADD32(0, 0X49);
            goto L_8022DD6C;
    }
    // 0x8022DD3C: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x8022DD40: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x8022DD44: bne         $v1, $v0, L_8022DD50
    if (ctx->r3 != ctx->r2) {
        // 0x8022DD48: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022DD50;
    }
    // 0x8022DD48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022DD4C: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
L_8022DD50:
    // 0x8022DD50: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x8022DD54: jal         0x8022FE10
    // 0x8022DD58: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_8022FE10_ovl28(rdram, ctx);
        goto after_0;
    // 0x8022DD58: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_0:
    // 0x8022DD5C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022DD60: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022DD64: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022DD68: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_8022DD6C:
    // 0x8022DD6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022DD70: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022DD74: jr          $ra
    // 0x8022DD78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022DD78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A49C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A49C: jr          $ra
    // 0x8022A4A0: nop

    TRACE_RETURN()
    return;
    // 0x8022A4A0: nop

;}
RECOMP_FUNC void func_8023ADCC_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023ADCC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023ADD0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023ADD4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023ADD8: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x8023ADDC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023ADE0: jal         0x80050294
    // 0x8023ADE4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8023ADE4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8023ADE8: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8023ADEC: lui         $v1, 0x8019
    ctx->r3 = S32(0X8019 << 16);
    // 0x8023ADF0: lw          $v1, 0x3C60($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3C60);
    // 0x8023ADF4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023ADF8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023ADFC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8023AE00: addiu       $a0, $zero, 0x1B9
    ctx->r4 = ADD32(0, 0X1B9);
    // 0x8023AE04: lbu         $v1, 0xA($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0XA);
    // 0x8023AE08: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8023AE0C: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x8023AE10: sh          $v0, 0x516($s0)
    MEM_H(0X516, ctx->r16) = ctx->r2;
    // 0x8023AE14: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x8023AE18: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8023AE1C: lui         $v0, 0x100
    ctx->r2 = S32(0X100 << 16);
    // 0x8023AE20: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8023AE24: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    // 0x8023AE28: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8023AE2C: jal         0x8002A33C
    // 0x8023AE30: sw          $v1, 0x510($s0)
    MEM_W(0X510, ctx->r16) = ctx->r3;
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x8023AE30: sw          $v1, 0x510($s0)
    MEM_W(0X510, ctx->r16) = ctx->r3;
    after_1:
    // 0x8023AE34: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8023AE38: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8023AE3C: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8023AE40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023AE44: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023AE48: jr          $ra
    // 0x8023AE4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023AE4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80235D78_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235D78: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80235D7C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80235D80: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80235D84: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80235D88: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80235D8C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80235D90: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80235D94: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80235D98: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80235D9C: lw          $v0, 0x3C80($at)
    ctx->r2 = MEM_W(ctx->r1, 0X3C80);
    // 0x80235DA0: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x80235DA4: jalr        $v0
    // 0x80235DA8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80235DA8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_0:
    // 0x80235DAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235DB0: jal         0x80235A00
    // 0x80235DB4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_80235A00_ovl28(rdram, ctx);
        goto after_1;
    // 0x80235DB4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x80235DB8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80235DBC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80235DC0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80235DC4: jr          $ra
    // 0x80235DC8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80235DC8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80232DD8_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232DD8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80232DDC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232DE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80232DE4: jal         0x80233980
    // 0x80232DE8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_80233980_ovl28(rdram, ctx);
        goto after_0;
    // 0x80232DE8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x80232DEC: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80232DF0: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80232DF4: beq         $v0, $zero, L_80232E28
    if (ctx->r2 == 0) {
        // 0x80232DF8: nop
    
            goto L_80232E28;
    }
    // 0x80232DF8: nop

    // 0x80232DFC: bgez        $v0, L_80232E48
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80232E00: addiu       $v1, $zero, 0x4
        ctx->r3 = ADD32(0, 0X4);
            goto L_80232E48;
    }
    // 0x80232E00: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x80232E04: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x80232E08: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    // 0x80232E0C: addiu       $v1, $zero, 0x9
    ctx->r3 = ADD32(0, 0X9);
    // 0x80232E10: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80232E14: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x80232E18: sh          $zero, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = 0;
    // 0x80232E1C: andi        $v0, $v0, 0xFFFD
    ctx->r2 = ctx->r2 & 0XFFFD;
    // 0x80232E20: j           L_80232E64
    // 0x80232E24: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
        goto L_80232E64;
    // 0x80232E24: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
L_80232E28:
    // 0x80232E28: jal         0x80233818
    // 0x80232E2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80233818_ovl28(rdram, ctx);
        goto after_1;
    // 0x80232E2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80232E30: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80232E34: bgez        $v0, L_80232E48
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80232E38: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80232E48;
    }
    // 0x80232E38: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80232E3C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80232E40: j           L_80232E64
    // 0x80232E44: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
        goto L_80232E64;
    // 0x80232E44: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_80232E48:
    // 0x80232E48: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80232E4C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80232E50: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80232E54: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80232E58: lw          $v0, 0x3944($at)
    ctx->r2 = MEM_W(ctx->r1, 0X3944);
    // 0x80232E5C: jalr        $v0
    // 0x80232E60: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x80232E60: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
L_80232E64:
    // 0x80232E64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80232E68: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232E6C: jr          $ra
    // 0x80232E70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80232E70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8024CEF8_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024CEF8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8024CEFC: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8024CF00: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x8024CF04: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x8024CF08: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x8024CF0C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8024CF10: addu        $s3, $a3, $zero
    ctx->r19 = ADD32(ctx->r7, 0);
    // 0x8024CF14: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8024CF18: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8024CF1C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8024CF20: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x8024CF24: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8024CF28: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8024CF2C: jal         0x8004F144
    // 0x8024CF30: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8024CF30: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    after_0:
    // 0x8024CF34: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8024CF38: beq         $v1, $zero, L_8024CF88
    if (ctx->r3 == 0) {
        // 0x8024CF3C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8024CF88;
    }
    // 0x8024CF3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024CF40: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8024CF44: addiu       $v0, $zero, 0x21
    ctx->r2 = ADD32(0, 0X21);
    // 0x8024CF48: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8024CF4C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8024CF50: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    // 0x8024CF54: sll         $v0, $s3, 16
    ctx->r2 = S32(ctx->r19 << 16);
    // 0x8024CF58: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8024CF5C: sw          $v0, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r2;
    // 0x8024CF60: sll         $v0, $s4, 16
    ctx->r2 = S32(ctx->r20 << 16);
    // 0x8024CF64: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8024CF68: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
    // 0x8024CF6C: sll         $v0, $s5, 16
    ctx->r2 = S32(ctx->r21 << 16);
    // 0x8024CF70: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8024CF74: sb          $s0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r16;
    // 0x8024CF78: sh          $s1, 0x1C($v1)
    MEM_H(0X1C, ctx->r3) = ctx->r17;
    // 0x8024CF7C: sh          $s2, 0x1E($v1)
    MEM_H(0X1E, ctx->r3) = ctx->r18;
    // 0x8024CF80: sh          $zero, 0x26($v1)
    MEM_H(0X26, ctx->r3) = 0;
    // 0x8024CF84: sw          $v0, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r2;
L_8024CF88:
    // 0x8024CF88: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x8024CF8C: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8024CF90: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x8024CF94: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8024CF98: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8024CF9C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8024CFA0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8024CFA4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8024CFA8: jr          $ra
    // 0x8024CFAC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8024CFAC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_802478D0_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802478D0: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x802478D4: sw          $s2, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r18;
    // 0x802478D8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x802478DC: sw          $ra, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r31;
    // 0x802478E0: sw          $s1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r17;
    // 0x802478E4: sw          $s0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r16;
    // 0x802478E8: lbu         $v1, 0x3($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X3);
    // 0x802478EC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802478F0: bne         $v1, $v0, L_80247910
    if (ctx->r3 != ctx->r2) {
        // 0x802478F4: nop
    
            goto L_80247910;
    }
    // 0x802478F4: nop

    // 0x802478F8: jal         0x80247EDC
    // 0x802478FC: nop

    func_80247EDC_ovl28(rdram, ctx);
        goto after_0;
    // 0x802478FC: nop

    after_0:
    // 0x80247900: jal         0x8004F684
    // 0x80247904: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8004F684_2AA84(rdram, ctx);
        goto after_1;
    // 0x80247904: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_1:
    // 0x80247908: j           L_80247BC0
    // 0x8024790C: nop

        goto L_80247BC0;
    // 0x8024790C: nop

L_80247910:
    // 0x80247910: lbu         $v0, 0x8($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X8);
    // 0x80247914: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80247918: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024791C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80247920: lw          $v0, 0x50D0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X50D0);
    // 0x80247924: jalr        $v0
    // 0x80247928: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x80247928: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_2:
    // 0x8024792C: jal         0x8006033C
    // 0x80247930: addiu       $a0, $zero, 0x7B0
    ctx->r4 = ADD32(0, 0X7B0);
    func_8006033C_3B73C(rdram, ctx);
        goto after_3;
    // 0x80247930: addiu       $a0, $zero, 0x7B0
    ctx->r4 = ADD32(0, 0X7B0);
    after_3:
    // 0x80247934: bne         $v0, $zero, L_80247BB8
    if (ctx->r2 != 0) {
        // 0x80247938: lui         $v0, 0x80
        ctx->r2 = S32(0X80 << 16);
            goto L_80247BB8;
    }
    // 0x80247938: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8024793C: addiu       $s0, $sp, 0x70
    ctx->r16 = ADD32(ctx->r29, 0X70);
    // 0x80247940: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80247944: addiu       $v0, $zero, -0x200
    ctx->r2 = ADD32(0, -0X200);
    // 0x80247948: sh          $v0, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r2;
    // 0x8024794C: sh          $zero, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = 0;
    // 0x80247950: jal         0x8002C678
    // 0x80247954: sh          $zero, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = 0;
    func_8002C678_7A78(rdram, ctx);
        goto after_4;
    // 0x80247954: sh          $zero, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = 0;
    after_4:
    // 0x80247958: lb          $a0, 0xC($s2)
    ctx->r4 = MEM_B(ctx->r18, 0XC);
    // 0x8024795C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80247960: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    // 0x80247964: jal         0x800319B4
    // 0x80247968: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    func_800319B4_CDB4(rdram, ctx);
        goto after_5;
    // 0x80247968: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    after_5:
    // 0x8024796C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80247970: addiu       $s1, $sp, 0x28
    ctx->r17 = ADD32(ctx->r29, 0X28);
    // 0x80247974: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80247978: jal         0x800308E8
    // 0x8024797C: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    func_800308E8_BCE8(rdram, ctx);
        goto after_6;
    // 0x8024797C: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_6:
    // 0x80247980: lh          $v1, 0x38($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X38);
    // 0x80247984: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x80247988: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8024798C: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80247990: sh          $v0, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r2;
    // 0x80247994: lh          $v1, 0x3A($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X3A);
    // 0x80247998: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x8024799C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802479A0: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x802479A4: sh          $v0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r2;
    // 0x802479A8: lh          $v1, 0x3C($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X3C);
    // 0x802479AC: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x802479B0: lui         $s0, 0x801D
    ctx->r16 = S32(0X801D << 16);
    // 0x802479B4: addiu       $s0, $s0, 0x4760
    ctx->r16 = ADD32(ctx->r16, 0X4760);
    // 0x802479B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802479BC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802479C0: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x802479C4: jal         0x80031E5C
    // 0x802479C8: sh          $v0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r2;
    func_80031E5C_D25C(rdram, ctx);
        goto after_7;
    // 0x802479C8: sh          $v0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r2;
    after_7:
    // 0x802479CC: jal         0x80031E94
    // 0x802479D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80031E94_D294(rdram, ctx);
        goto after_8;
    // 0x802479D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
    // 0x802479D4: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x802479D8: addiu       $a0, $a0, -0x26A4
    ctx->r4 = ADD32(ctx->r4, -0X26A4);
    // 0x802479DC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x802479E0: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x802479E4: jal         0x8009A3B4
    // 0x802479E8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_9;
    // 0x802479E8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_9:
    // 0x802479EC: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x802479F0: addiu       $a0, $a0, -0x26A4
    ctx->r4 = ADD32(ctx->r4, -0X26A4);
    // 0x802479F4: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x802479F8: addiu       $a1, $a1, 0x6B34
    ctx->r5 = ADD32(ctx->r5, 0X6B34);
    // 0x802479FC: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x80247A00: addiu       $a2, $a2, -0x236C
    ctx->r6 = ADD32(ctx->r6, -0X236C);
    // 0x80247A04: lui         $a3, 0x801E
    ctx->r7 = S32(0X801E << 16);
    // 0x80247A08: jal         0x80031F0C
    // 0x80247A0C: addiu       $a3, $a3, -0x7794
    ctx->r7 = ADD32(ctx->r7, -0X7794);
    func_80031F0C_D30C(rdram, ctx);
        goto after_10;
    // 0x80247A0C: addiu       $a3, $a3, -0x7794
    ctx->r7 = ADD32(ctx->r7, -0X7794);
    after_10:
    // 0x80247A10: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x80247A14: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x80247A18: addiu       $a1, $a1, -0x3F58
    ctx->r5 = ADD32(ctx->r5, -0X3F58);
    // 0x80247A1C: jal         0x8009A3B4
    // 0x80247A20: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_11;
    // 0x80247A20: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_11:
    // 0x80247A24: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80247A28: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80247A2C: addiu       $a1, $a1, 0x6B34
    ctx->r5 = ADD32(ctx->r5, 0X6B34);
    // 0x80247A30: jal         0x8009A3B4
    // 0x80247A34: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    memcpy_recomp(rdram, ctx);
        goto after_12;
    // 0x80247A34: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_12:
    // 0x80247A38: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80247A3C: addiu       $a0, $a0, -0x26A4
    ctx->r4 = ADD32(ctx->r4, -0X26A4);
    // 0x80247A40: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80247A44: jal         0x8009A3B4
    // 0x80247A48: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_13;
    // 0x80247A48: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_13:
    // 0x80247A4C: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80247A50: addiu       $a0, $a0, -0x26A4
    ctx->r4 = ADD32(ctx->r4, -0X26A4);
    // 0x80247A54: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80247A58: addiu       $a1, $a1, 0x6B34
    ctx->r5 = ADD32(ctx->r5, 0X6B34);
    // 0x80247A5C: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x80247A60: addiu       $a2, $a2, -0x236C
    ctx->r6 = ADD32(ctx->r6, -0X236C);
    // 0x80247A64: lui         $a3, 0x801E
    ctx->r7 = S32(0X801E << 16);
    // 0x80247A68: jal         0x80031F0C
    // 0x80247A6C: addiu       $a3, $a3, -0x7794
    ctx->r7 = ADD32(ctx->r7, -0X7794);
    func_80031F0C_D30C(rdram, ctx);
        goto after_14;
    // 0x80247A6C: addiu       $a3, $a3, -0x7794
    ctx->r7 = ADD32(ctx->r7, -0X7794);
    after_14:
    // 0x80247A70: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x80247A74: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x80247A78: addiu       $a1, $a1, -0x3F58
    ctx->r5 = ADD32(ctx->r5, -0X3F58);
    // 0x80247A7C: jal         0x8009A3B4
    // 0x80247A80: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_15;
    // 0x80247A80: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_15:
    // 0x80247A84: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x80247A88: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80247A8C: addiu       $a1, $a1, 0x6B34
    ctx->r5 = ADD32(ctx->r5, 0X6B34);
    // 0x80247A90: jal         0x8009A3B4
    // 0x80247A94: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    memcpy_recomp(rdram, ctx);
        goto after_16;
    // 0x80247A94: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_16:
    // 0x80247A98: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80247A9C: addiu       $a0, $a0, -0x26A4
    ctx->r4 = ADD32(ctx->r4, -0X26A4);
    // 0x80247AA0: addiu       $a1, $s2, 0x38
    ctx->r5 = ADD32(ctx->r18, 0X38);
    // 0x80247AA4: jal         0x8009A3B4
    // 0x80247AA8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_17;
    // 0x80247AA8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_17:
    // 0x80247AAC: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80247AB0: addiu       $a0, $a0, -0x26A4
    ctx->r4 = ADD32(ctx->r4, -0X26A4);
    // 0x80247AB4: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80247AB8: addiu       $a1, $a1, 0x6B34
    ctx->r5 = ADD32(ctx->r5, 0X6B34);
    // 0x80247ABC: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x80247AC0: addiu       $a2, $a2, -0x236C
    ctx->r6 = ADD32(ctx->r6, -0X236C);
    // 0x80247AC4: lui         $a3, 0x801E
    ctx->r7 = S32(0X801E << 16);
    // 0x80247AC8: jal         0x80031F0C
    // 0x80247ACC: addiu       $a3, $a3, -0x7794
    ctx->r7 = ADD32(ctx->r7, -0X7794);
    func_80031F0C_D30C(rdram, ctx);
        goto after_18;
    // 0x80247ACC: addiu       $a3, $a3, -0x7794
    ctx->r7 = ADD32(ctx->r7, -0X7794);
    after_18:
    // 0x80247AD0: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x80247AD4: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x80247AD8: addiu       $a1, $a1, -0x3F58
    ctx->r5 = ADD32(ctx->r5, -0X3F58);
    // 0x80247ADC: jal         0x8009A3B4
    // 0x80247AE0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_19;
    // 0x80247AE0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_19:
    // 0x80247AE4: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x80247AE8: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80247AEC: addiu       $a1, $a1, 0x6B34
    ctx->r5 = ADD32(ctx->r5, 0X6B34);
    // 0x80247AF0: jal         0x8009A3B4
    // 0x80247AF4: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    memcpy_recomp(rdram, ctx);
        goto after_20;
    // 0x80247AF4: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_20:
    // 0x80247AF8: lw          $a2, 0x60($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X60);
    // 0x80247AFC: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x80247B00: beq         $a2, $a1, L_80247BB8
    if (ctx->r6 == ctx->r5) {
        // 0x80247B04: lui         $v0, 0x80
        ctx->r2 = S32(0X80 << 16);
            goto L_80247BB8;
    }
    // 0x80247B04: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x80247B08: lw          $v0, 0x68($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X68);
    // 0x80247B0C: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x80247B10: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x80247B14: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80247B18: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x80247B1C: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80247B20: mflo        $v0
    ctx->r2 = lo;
    // 0x80247B24: subu        $v1, $a2, $a1
    ctx->r3 = SUB32(ctx->r6, ctx->r5);
    // 0x80247B28: nop

    // 0x80247B2C: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x80247B30: bne         $v1, $zero, L_80247B3C
    if (ctx->r3 != 0) {
        // 0x80247B34: nop
    
            goto L_80247B3C;
    }
    // 0x80247B34: nop

    // 0x80247B38: break       7
    do_break(2149874488);
L_80247B3C:
    // 0x80247B3C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80247B40: bne         $v1, $at, L_80247B54
    if (ctx->r3 != ctx->r1) {
        // 0x80247B44: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80247B54;
    }
    // 0x80247B44: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80247B48: bne         $v0, $at, L_80247B54
    if (ctx->r2 != ctx->r1) {
        // 0x80247B4C: nop
    
            goto L_80247B54;
    }
    // 0x80247B4C: nop

    // 0x80247B50: break       6
    do_break(2149874512);
L_80247B54:
    // 0x80247B54: mflo        $v0
    ctx->r2 = lo;
    // 0x80247B58: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x80247B5C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80247B60: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80247B64: beq         $v0, $zero, L_80247BB8
    if (ctx->r2 == 0) {
        // 0x80247B68: lui         $v0, 0x80
        ctx->r2 = S32(0X80 << 16);
            goto L_80247BB8;
    }
    // 0x80247B68: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x80247B6C: lh          $v1, 0x10($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X10);
    // 0x80247B70: lh          $a0, 0x18($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X18);
    // 0x80247B74: slt         $v0, $v1, $a0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80247B78: beq         $v0, $zero, L_80247B94
    if (ctx->r2 == 0) {
        // 0x80247B7C: slt         $v0, $a0, $v1
        ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_80247B94;
    }
    // 0x80247B7C: slt         $v0, $a0, $v1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80247B80: lh          $v0, 0x20($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X20);
    // 0x80247B84: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80247B88: bne         $v0, $zero, L_80247BAC
    if (ctx->r2 != 0) {
        // 0x80247B8C: lui         $v0, 0x240
        ctx->r2 = S32(0X240 << 16);
            goto L_80247BAC;
    }
    // 0x80247B8C: lui         $v0, 0x240
    ctx->r2 = S32(0X240 << 16);
    // 0x80247B90: slt         $v0, $a0, $v1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
L_80247B94:
    // 0x80247B94: beq         $v0, $zero, L_80247BB8
    if (ctx->r2 == 0) {
        // 0x80247B98: lui         $v0, 0x80
        ctx->r2 = S32(0X80 << 16);
            goto L_80247BB8;
    }
    // 0x80247B98: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x80247B9C: lh          $v0, 0x20($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X20);
    // 0x80247BA0: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80247BA4: beq         $v0, $zero, L_80247BB4
    if (ctx->r2 == 0) {
        // 0x80247BA8: lui         $v0, 0x240
        ctx->r2 = S32(0X240 << 16);
            goto L_80247BB4;
    }
    // 0x80247BA8: lui         $v0, 0x240
    ctx->r2 = S32(0X240 << 16);
L_80247BAC:
    // 0x80247BAC: j           L_80247BBC
    // 0x80247BB0: ori         $v0, $v0, 0x4040
    ctx->r2 = ctx->r2 | 0X4040;
        goto L_80247BBC;
    // 0x80247BB0: ori         $v0, $v0, 0x4040
    ctx->r2 = ctx->r2 | 0X4040;
L_80247BB4:
    // 0x80247BB4: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
L_80247BB8:
    // 0x80247BB8: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
L_80247BBC:
    // 0x80247BBC: sw          $v0, 0x40($s2)
    MEM_W(0X40, ctx->r18) = ctx->r2;
L_80247BC0:
    // 0x80247BC0: lw          $ra, 0x9C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X9C);
    // 0x80247BC4: lw          $s2, 0x98($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X98);
    // 0x80247BC8: lw          $s1, 0x94($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X94);
    // 0x80247BCC: lw          $s0, 0x90($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X90);
    // 0x80247BD0: jr          $ra
    // 0x80247BD4: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    TRACE_RETURN()
    return;
    // 0x80247BD4: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void func_8024972C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024972C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80249730: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80249734: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80249738: jal         0x80249DD8
    // 0x8024973C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_80249DD8_ovl28(rdram, ctx);
        goto after_0;
    // 0x8024973C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x80249740: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80249744: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x80249748: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x8024974C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80249750: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80249754: jr          $ra
    // 0x80249758: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80249758: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8024C29C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024C29C: jr          $ra
    // 0x8024C2A0: nop

    TRACE_RETURN()
    return;
    // 0x8024C2A0: nop

;}
RECOMP_FUNC void func_8024A230_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024A230: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8024A234: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8024A238: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8024A23C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8024A240: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8024A244: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8024A248: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x8024A24C: lbu         $v1, 0x3($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X3);
    // 0x8024A250: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8024A254: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x8024A258: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x8024A25C: beq         $v0, $zero, L_8024A4AC
    if (ctx->r2 == 0) {
        // 0x8024A260: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8024A4AC;
    }
    // 0x8024A260: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8024A264: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024A268: addu        $at, $at, $v0
    gpr jr_addend_8024A270 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8024A26C: lw          $v0, 0x6348($at)
    ctx->r2 = ADD32(ctx->r1, 0X6348);
    // 0x8024A270: jr          $v0
    // 0x8024A274: nop

    switch (jr_addend_8024A270 >> 2) {
        case 0: goto L_8024A278; break;
        case 1: goto L_8024A2BC; break;
        case 2: goto L_8024A36C; break;
        case 3: goto L_8024A3BC; break;
        case 4: goto L_8024A45C; break;
        default: switch_error(__func__, 0x8024A270, 0x80256348);
    }
    // 0x8024A274: nop

L_8024A278:
    // 0x8024A278: lui         $v0, 0x3D48
    ctx->r2 = S32(0X3D48 << 16);
    // 0x8024A27C: ori         $v0, $v0, 0xE
    ctx->r2 = ctx->r2 | 0XE;
    // 0x8024A280: lui         $v1, 0x2E80
    ctx->r3 = S32(0X2E80 << 16);
    // 0x8024A284: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x8024A288: sw          $v0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r2;
    // 0x8024A28C: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8024A290: sb          $v0, 0x22($s2)
    MEM_B(0X22, ctx->r18) = ctx->r2;
    // 0x8024A294: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8024A298: sb          $v0, 0x23($s2)
    MEM_B(0X23, ctx->r18) = ctx->r2;
    // 0x8024A29C: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x8024A2A0: sh          $v0, 0x24($s2)
    MEM_H(0X24, ctx->r18) = ctx->r2;
    // 0x8024A2A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024A2A8: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x8024A2AC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8024A2B0: sw          $v1, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r3;
    // 0x8024A2B4: j           L_8024A4AC
    // 0x8024A2B8: sb          $v0, 0xB($s2)
    MEM_B(0XB, ctx->r18) = ctx->r2;
        goto L_8024A4AC;
    // 0x8024A2B8: sb          $v0, 0xB($s2)
    MEM_B(0XB, ctx->r18) = ctx->r2;
L_8024A2BC:
    // 0x8024A2BC: lui         $v1, 0x3D48
    ctx->r3 = S32(0X3D48 << 16);
    // 0x8024A2C0: lb          $a0, 0xC($s2)
    ctx->r4 = MEM_B(ctx->r18, 0XC);
    // 0x8024A2C4: ori         $v1, $v1, 0xE
    ctx->r3 = ctx->r3 | 0XE;
    // 0x8024A2C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024A2CC: sh          $v0, 0x24($s2)
    MEM_H(0X24, ctx->r18) = ctx->r2;
    // 0x8024A2D0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8024A2D4: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x8024A2D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024A2DC: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
    // 0x8024A2E0: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8024A2E4: sb          $v0, 0x22($s2)
    MEM_B(0X22, ctx->r18) = ctx->r2;
    // 0x8024A2E8: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8024A2EC: sb          $v0, 0x23($s2)
    MEM_B(0X23, ctx->r18) = ctx->r2;
    // 0x8024A2F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024A2F4: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
    // 0x8024A2F8: beq         $a0, $v0, L_8024A340
    if (ctx->r4 == ctx->r2) {
        // 0x8024A2FC: sw          $v1, 0x14($s2)
        MEM_W(0X14, ctx->r18) = ctx->r3;
            goto L_8024A340;
    }
    // 0x8024A2FC: sw          $v1, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r3;
    // 0x8024A300: slti        $v0, $a0, 0x2
    ctx->r2 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    // 0x8024A304: beql        $v0, $zero, L_8024A31C
    if (ctx->r2 == 0) {
        // 0x8024A308: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8024A31C;
    }
    goto skip_0;
    // 0x8024A308: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8024A30C: beq         $a0, $zero, L_8024A32C
    if (ctx->r4 == 0) {
        // 0x8024A310: lui         $v0, 0x2E00
        ctx->r2 = S32(0X2E00 << 16);
            goto L_8024A32C;
    }
    // 0x8024A310: lui         $v0, 0x2E00
    ctx->r2 = S32(0X2E00 << 16);
    // 0x8024A314: j           L_8024A4AC
    // 0x8024A318: nop

        goto L_8024A4AC;
    // 0x8024A318: nop

L_8024A31C:
    // 0x8024A31C: beq         $a0, $v0, L_8024A358
    if (ctx->r4 == ctx->r2) {
        // 0x8024A320: lui         $v0, 0x2E00
        ctx->r2 = S32(0X2E00 << 16);
            goto L_8024A358;
    }
    // 0x8024A320: lui         $v0, 0x2E00
    ctx->r2 = S32(0X2E00 << 16);
    // 0x8024A324: j           L_8024A4AC
    // 0x8024A328: nop

        goto L_8024A4AC;
    // 0x8024A328: nop

L_8024A32C:
    // 0x8024A32C: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x8024A330: sw          $v0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r2;
    // 0x8024A334: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8024A338: j           L_8024A4AC
    // 0x8024A33C: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
        goto L_8024A4AC;
    // 0x8024A33C: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
L_8024A340:
    // 0x8024A340: lui         $v0, 0x2E00
    ctx->r2 = S32(0X2E00 << 16);
    // 0x8024A344: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x8024A348: sw          $v0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r2;
    // 0x8024A34C: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x8024A350: j           L_8024A4AC
    // 0x8024A354: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
        goto L_8024A4AC;
    // 0x8024A354: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
L_8024A358:
    // 0x8024A358: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x8024A35C: sw          $v0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r2;
    // 0x8024A360: addiu       $v0, $zero, 0x808
    ctx->r2 = ADD32(0, 0X808);
    // 0x8024A364: j           L_8024A4AC
    // 0x8024A368: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
        goto L_8024A4AC;
    // 0x8024A368: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
L_8024A36C:
    // 0x8024A36C: lui         $v0, 0x3D48
    ctx->r2 = S32(0X3D48 << 16);
    // 0x8024A370: ori         $v0, $v0, 0xE
    ctx->r2 = ctx->r2 | 0XE;
    // 0x8024A374: lbu         $a0, 0x3($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X3);
    // 0x8024A378: lui         $v1, 0x2E00
    ctx->r3 = S32(0X2E00 << 16);
    // 0x8024A37C: ori         $v1, $v1, 0x80
    ctx->r3 = ctx->r3 | 0X80;
    // 0x8024A380: sw          $v0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r2;
    // 0x8024A384: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8024A388: sb          $v0, 0x22($s2)
    MEM_B(0X22, ctx->r18) = ctx->r2;
    // 0x8024A38C: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8024A390: sb          $v0, 0x23($s2)
    MEM_B(0X23, ctx->r18) = ctx->r2;
    // 0x8024A394: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8024A398: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x8024A39C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8024A3A0: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
    // 0x8024A3A4: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x8024A3A8: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
    // 0x8024A3AC: sw          $v1, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r3;
    // 0x8024A3B0: sh          $v0, 0x24($s2)
    MEM_H(0X24, ctx->r18) = ctx->r2;
    // 0x8024A3B4: j           L_8024A4AC
    // 0x8024A3B8: sb          $a0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r4;
        goto L_8024A4AC;
    // 0x8024A3B8: sb          $a0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r4;
L_8024A3BC:
    // 0x8024A3BC: lui         $v0, 0x3D48
    ctx->r2 = S32(0X3D48 << 16);
    // 0x8024A3C0: ori         $v0, $v0, 0x2E
    ctx->r2 = ctx->r2 | 0X2E;
    // 0x8024A3C4: lui         $v1, 0x2E80
    ctx->r3 = S32(0X2E80 << 16);
    // 0x8024A3C8: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x8024A3CC: addiu       $s1, $sp, 0x10
    ctx->r17 = ADD32(ctx->r29, 0X10);
    // 0x8024A3D0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8024A3D4: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x8024A3D8: addiu       $a1, $a1, 0x6340
    ctx->r5 = ADD32(ctx->r5, 0X6340);
    // 0x8024A3DC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x8024A3E0: sw          $v0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r2;
    // 0x8024A3E4: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
    // 0x8024A3E8: sb          $v0, 0x22($s2)
    MEM_B(0X22, ctx->r18) = ctx->r2;
    // 0x8024A3EC: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x8024A3F0: sb          $v0, 0x23($s2)
    MEM_B(0X23, ctx->r18) = ctx->r2;
    // 0x8024A3F4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8024A3F8: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x8024A3FC: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8024A400: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
    // 0x8024A404: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
    // 0x8024A408: sw          $v1, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r3;
    // 0x8024A40C: jal         0x8009A3B4
    // 0x8024A410: sh          $zero, 0x26($s2)
    MEM_H(0X26, ctx->r18) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8024A410: sh          $zero, 0x26($s2)
    MEM_H(0X26, ctx->r18) = 0;
    after_0:
    // 0x8024A414: addiu       $s0, $sp, 0x18
    ctx->r16 = ADD32(ctx->r29, 0X18);
    // 0x8024A418: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8024A41C: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x8024A420: addiu       $a1, $a1, 0x6344
    ctx->r5 = ADD32(ctx->r5, 0X6344);
    // 0x8024A424: jal         0x8009A3B4
    // 0x8024A428: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8024A428: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_1:
    // 0x8024A42C: lb          $v0, 0xC($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XC);
    // 0x8024A430: lb          $v1, 0xC($s2)
    ctx->r3 = MEM_B(ctx->r18, 0XC);
    // 0x8024A434: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
    // 0x8024A438: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8024A43C: addu        $s0, $s0, $v1
    ctx->r16 = ADD32(ctx->r16, ctx->r3);
    // 0x8024A440: sh          $v0, 0x24($s2)
    MEM_H(0X24, ctx->r18) = ctx->r2;
    // 0x8024A444: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x8024A448: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8024A44C: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x8024A450: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x8024A454: j           L_8024A4AC
    // 0x8024A458: sb          $v1, 0xC($s2)
    MEM_B(0XC, ctx->r18) = ctx->r3;
        goto L_8024A4AC;
    // 0x8024A458: sb          $v1, 0xC($s2)
    MEM_B(0XC, ctx->r18) = ctx->r3;
L_8024A45C:
    // 0x8024A45C: lui         $v0, 0x3D08
    ctx->r2 = S32(0X3D08 << 16);
    // 0x8024A460: ori         $v0, $v0, 0xE
    ctx->r2 = ctx->r2 | 0XE;
    // 0x8024A464: lbu         $v1, 0x0($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X0);
    // 0x8024A468: lui         $a0, 0x2E00
    ctx->r4 = S32(0X2E00 << 16);
    // 0x8024A46C: ori         $a0, $a0, 0x80
    ctx->r4 = ctx->r4 | 0X80;
    // 0x8024A470: sw          $v0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r2;
    // 0x8024A474: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
    // 0x8024A478: sb          $v0, 0x22($s2)
    MEM_B(0X22, ctx->r18) = ctx->r2;
    // 0x8024A47C: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8024A480: sb          $v0, 0x23($s2)
    MEM_B(0X23, ctx->r18) = ctx->r2;
    // 0x8024A484: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8024A488: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x8024A48C: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x8024A490: sb          $zero, 0x9($s2)
    MEM_B(0X9, ctx->r18) = 0;
    // 0x8024A494: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
    // 0x8024A498: sw          $a0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r4;
    // 0x8024A49C: sh          $zero, 0x26($s2)
    MEM_H(0X26, ctx->r18) = 0;
    // 0x8024A4A0: sh          $v0, 0x24($s2)
    MEM_H(0X24, ctx->r18) = ctx->r2;
    // 0x8024A4A4: ori         $v1, $v1, 0x20
    ctx->r3 = ctx->r3 | 0X20;
    // 0x8024A4A8: sb          $v1, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r3;
L_8024A4AC:
    // 0x8024A4AC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8024A4B0: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8024A4B4: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8024A4B8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8024A4BC: jr          $ra
    // 0x8024A4C0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8024A4C0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80226A94_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226A94: jr          $ra
    // 0x80226A98: nop

    TRACE_RETURN()
    return;
    // 0x80226A98: nop

;}
RECOMP_FUNC void func_8022A894_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A894: jr          $ra
    // 0x8022A898: nop

    TRACE_RETURN()
    return;
    // 0x8022A898: nop

;}
RECOMP_FUNC void func_80227B1C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227B1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227B20: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80227B24: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x80227B28: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227B2C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80227B30: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227B34: lw          $v0, 0x1910($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1910);
    // 0x80227B38: jalr        $v0
    // 0x80227B3C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80227B3C: nop

    after_0:
    // 0x80227B40: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80227B44: jr          $ra
    // 0x80227B48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227B48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80244BE8_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80244BE8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80244BEC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80244BF0: jr          $ra
    // 0x80244BF4: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80244BF4: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_8023ED8C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023ED8C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023ED90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023ED94: jal         0x8004EF48
    // 0x8023ED98: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8004EF48_2A348(rdram, ctx);
        goto after_0;
    // 0x8023ED98: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x8023ED9C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8023EDA0: bne         $s0, $zero, L_8023EDB0
    if (ctx->r16 != 0) {
        // 0x8023EDA4: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8023EDB0;
    }
    // 0x8023EDA4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8023EDA8: j           L_8023EE00
    // 0x8023EDAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8023EE00;
    // 0x8023EDAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8023EDB0:
    // 0x8023EDB0: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
    // 0x8023EDB4: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x8023EDB8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023EDBC: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    // 0x8023EDC0: lui         $v0, 0xFF3F
    ctx->r2 = S32(0XFF3F << 16);
    // 0x8023EDC4: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8023EDC8: lui         $v0, 0x8FC
    ctx->r2 = S32(0X8FC << 16);
    // 0x8023EDCC: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8023EDD0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8023EDD4: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    // 0x8023EDD8: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    // 0x8023EDDC: sb          $v1, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r3;
    // 0x8023EDE0: sw          $zero, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = 0;
    // 0x8023EDE4: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    // 0x8023EDE8: jal         0x8004DD04
    // 0x8023EDEC: sh          $zero, 0x56($s0)
    MEM_H(0X56, ctx->r16) = 0;
    func_8004DD04_29104(rdram, ctx);
        goto after_1;
    // 0x8023EDEC: sh          $zero, 0x56($s0)
    MEM_H(0X56, ctx->r16) = 0;
    after_1:
    // 0x8023EDF0: lbu         $v1, 0x6($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X6);
    // 0x8023EDF4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8023EDF8: ori         $v1, $v1, 0x20
    ctx->r3 = ctx->r3 | 0X20;
    // 0x8023EDFC: sb          $v1, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r3;
L_8023EE00:
    // 0x8023EE00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023EE04: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023EE08: jr          $ra
    // 0x8023EE0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023EE0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80233CC0_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233CC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80233CC4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80233CC8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80233CCC: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80233CD0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80233CD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80233CD8: jal         0x8009A3B4
    // 0x80233CDC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80233CDC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80233CE0: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80233CE4: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80233CE8: jal         0x8009A3B4
    // 0x80233CEC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80233CEC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80233CF0: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80233CF4: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80233CF8: jal         0x8009A3B4
    // 0x80233CFC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80233CFC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80233D00: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80233D04: jal         0x800A3450
    // 0x80233D08: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80233D08: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    after_3:
    // 0x80233D0C: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80233D10: sh          $v0, 0x3B2($s0)
    MEM_H(0X3B2, ctx->r16) = ctx->r2;
    // 0x80233D14: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80233D18: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80233D1C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80233D20: lw          $v0, 0x3990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3990);
    // 0x80233D24: jalr        $v0
    // 0x80233D28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x80233D28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80233D2C: sw          $zero, 0x350($s0)
    MEM_W(0X350, ctx->r16) = 0;
    // 0x80233D30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80233D34: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80233D38: jr          $ra
    // 0x80233D3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80233D3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8024358C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024358C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80243590: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x80243594: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80243598: addiu       $a0, $s2, 0x2C
    ctx->r4 = ADD32(ctx->r18, 0X2C);
    // 0x8024359C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x802435A0: addiu       $s0, $s2, 0x14
    ctx->r16 = ADD32(ctx->r18, 0X14);
    // 0x802435A4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x802435A8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802435AC: sw          $ra, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r31;
    // 0x802435B0: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x802435B4: jal         0x8009A3B4
    // 0x802435B8: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x802435B8: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    after_0:
    // 0x802435BC: addiu       $a0, $s2, 0x34
    ctx->r4 = ADD32(ctx->r18, 0X34);
    // 0x802435C0: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    // 0x802435C4: jal         0x8009A3B4
    // 0x802435C8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802435C8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x802435CC: addiu       $a0, $s2, 0x5C
    ctx->r4 = ADD32(ctx->r18, 0X5C);
    // 0x802435D0: addiu       $s1, $s2, 0x54
    ctx->r17 = ADD32(ctx->r18, 0X54);
    // 0x802435D4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802435D8: jal         0x8009A3B4
    // 0x802435DC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x802435DC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x802435E0: lbu         $v0, 0x8($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X8);
    // 0x802435E4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802435E8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802435EC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802435F0: lw          $v0, 0x4BB0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X4BB0);
    // 0x802435F4: jalr        $v0
    // 0x802435F8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x802435F8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_3:
    // 0x802435FC: addiu       $s3, $s2, 0xAC
    ctx->r19 = ADD32(ctx->r18, 0XAC);
    // 0x80243600: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80243604: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80243608: jal         0x8009A3B4
    // 0x8024360C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8024360C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x80243610: addiu       $s0, $s2, 0x8C
    ctx->r16 = ADD32(ctx->r18, 0X8C);
    // 0x80243614: jal         0x8002C654
    // 0x80243618: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_5;
    // 0x80243618: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8024361C: lh          $v0, 0xE8($s2)
    ctx->r2 = MEM_H(ctx->r18, 0XE8);
    // 0x80243620: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80243624: addiu       $a1, $s2, 0xFC
    ctx->r5 = ADD32(ctx->r18, 0XFC);
    // 0x80243628: sw          $v0, 0x104($s2)
    MEM_W(0X104, ctx->r18) = ctx->r2;
    // 0x8024362C: sw          $v0, 0x100($s2)
    MEM_W(0X100, ctx->r18) = ctx->r2;
    // 0x80243630: jal         0x80031DA8
    // 0x80243634: sw          $v0, 0xFC($s2)
    MEM_W(0XFC, ctx->r18) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_6;
    // 0x80243634: sw          $v0, 0xFC($s2)
    MEM_W(0XFC, ctx->r18) = ctx->r2;
    after_6:
    // 0x80243638: jal         0x8002C654
    // 0x8024363C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_8002C654_7A54(rdram, ctx);
        goto after_7;
    // 0x8024363C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_7:
    // 0x80243640: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80243644: jal         0x80031428
    // 0x80243648: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_80031428_C828(rdram, ctx);
        goto after_8;
    // 0x80243648: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_8:
    // 0x8024364C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80243650: jal         0x8003077C
    // 0x80243654: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_8003077C_BB7C(rdram, ctx);
        goto after_9;
    // 0x80243654: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_9:
    // 0x80243658: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x8024365C: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80243660: beq         $v0, $zero, L_80243678
    if (ctx->r2 == 0) {
        // 0x80243664: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_80243678;
    }
    // 0x80243664: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80243668: lh          $a3, 0x56($s2)
    ctx->r7 = MEM_H(ctx->r18, 0X56);
    // 0x8024366C: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x80243670: jal         0x8003B6B8
    // 0x80243674: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    func_8003B6B8_16AB8(rdram, ctx);
        goto after_10;
    // 0x80243674: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    after_10:
L_80243678:
    // 0x80243678: lw          $ra, 0x40($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X40);
    // 0x8024367C: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x80243680: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x80243684: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80243688: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8024368C: jr          $ra
    // 0x80243690: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x80243690: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8022A4F4_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A4F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A4F8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022A4FC: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x8022A500: addiu       $v0, $zero, 0x15E
    ctx->r2 = ADD32(0, 0X15E);
    // 0x8022A504: beq         $v1, $v0, L_8022A5C0
    if (ctx->r3 == ctx->r2) {
        // 0x8022A508: slti        $v0, $v1, 0x15F
        ctx->r2 = SIGNED(ctx->r3) < 0X15F ? 1 : 0;
            goto L_8022A5C0;
    }
    // 0x8022A508: slti        $v0, $v1, 0x15F
    ctx->r2 = SIGNED(ctx->r3) < 0X15F ? 1 : 0;
    // 0x8022A50C: beq         $v0, $zero, L_8022A544
    if (ctx->r2 == 0) {
        // 0x8022A510: addiu       $v0, $zero, 0x32
        ctx->r2 = ADD32(0, 0X32);
            goto L_8022A544;
    }
    // 0x8022A510: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    // 0x8022A514: beq         $v1, $v0, L_8022A5A4
    if (ctx->r3 == ctx->r2) {
        // 0x8022A518: slti        $v0, $v1, 0x33
        ctx->r2 = SIGNED(ctx->r3) < 0X33 ? 1 : 0;
            goto L_8022A5A4;
    }
    // 0x8022A518: slti        $v0, $v1, 0x33
    ctx->r2 = SIGNED(ctx->r3) < 0X33 ? 1 : 0;
    // 0x8022A51C: beql        $v0, $zero, L_8022A534
    if (ctx->r2 == 0) {
        // 0x8022A520: addiu       $v0, $zero, 0xBE
        ctx->r2 = ADD32(0, 0XBE);
            goto L_8022A534;
    }
    goto skip_0;
    // 0x8022A520: addiu       $v0, $zero, 0xBE
    ctx->r2 = ADD32(0, 0XBE);
    skip_0:
    // 0x8022A524: beq         $v1, $zero, L_8022A584
    if (ctx->r3 == 0) {
        // 0x8022A528: nop
    
            goto L_8022A584;
    }
    // 0x8022A528: nop

    // 0x8022A52C: j           L_8022A5FC
    // 0x8022A530: nop

        goto L_8022A5FC;
    // 0x8022A530: nop

L_8022A534:
    // 0x8022A534: beq         $v1, $v0, L_8022A5C0
    if (ctx->r3 == ctx->r2) {
        // 0x8022A538: nop
    
            goto L_8022A5C0;
    }
    // 0x8022A538: nop

    // 0x8022A53C: j           L_8022A5FC
    // 0x8022A540: nop

        goto L_8022A5FC;
    // 0x8022A540: nop

L_8022A544:
    // 0x8022A544: addiu       $v0, $zero, 0x1FE
    ctx->r2 = ADD32(0, 0X1FE);
    // 0x8022A548: beq         $v1, $v0, L_8022A5F0
    if (ctx->r3 == ctx->r2) {
        // 0x8022A54C: slti        $v0, $v1, 0x1FF
        ctx->r2 = SIGNED(ctx->r3) < 0X1FF ? 1 : 0;
            goto L_8022A5F0;
    }
    // 0x8022A54C: slti        $v0, $v1, 0x1FF
    ctx->r2 = SIGNED(ctx->r3) < 0X1FF ? 1 : 0;
    // 0x8022A550: beq         $v0, $zero, L_8022A568
    if (ctx->r2 == 0) {
        // 0x8022A554: addiu       $v0, $zero, 0x1F4
        ctx->r2 = ADD32(0, 0X1F4);
            goto L_8022A568;
    }
    // 0x8022A554: addiu       $v0, $zero, 0x1F4
    ctx->r2 = ADD32(0, 0X1F4);
    // 0x8022A558: beq         $v1, $v0, L_8022A5D0
    if (ctx->r3 == ctx->r2) {
        // 0x8022A55C: addiu       $v0, $zero, 0x84
        ctx->r2 = ADD32(0, 0X84);
            goto L_8022A5D0;
    }
    // 0x8022A55C: addiu       $v0, $zero, 0x84
    ctx->r2 = ADD32(0, 0X84);
    // 0x8022A560: j           L_8022A5FC
    // 0x8022A564: nop

        goto L_8022A5FC;
    // 0x8022A564: nop

L_8022A568:
    // 0x8022A568: addiu       $v0, $zero, 0x208
    ctx->r2 = ADD32(0, 0X208);
    // 0x8022A56C: beq         $v1, $v0, L_8022A5E8
    if (ctx->r3 == ctx->r2) {
        // 0x8022A570: addiu       $v0, $zero, 0x21E
        ctx->r2 = ADD32(0, 0X21E);
            goto L_8022A5E8;
    }
    // 0x8022A570: addiu       $v0, $zero, 0x21E
    ctx->r2 = ADD32(0, 0X21E);
    // 0x8022A574: beq         $v1, $v0, L_8022A5F4
    if (ctx->r3 == ctx->r2) {
        // 0x8022A578: addiu       $a0, $zero, 0x3
        ctx->r4 = ADD32(0, 0X3);
            goto L_8022A5F4;
    }
    // 0x8022A578: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x8022A57C: j           L_8022A5FC
    // 0x8022A580: nop

        goto L_8022A5FC;
    // 0x8022A580: nop

L_8022A584:
    // 0x8022A584: jal         0x8022B750
    // 0x8022A588: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_8022B750_ovl28(rdram, ctx);
        goto after_0;
    // 0x8022A588: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_0:
    // 0x8022A58C: jal         0x8022B784
    // 0x8022A590: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_8022B784_ovl28(rdram, ctx);
        goto after_1;
    // 0x8022A590: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_1:
    // 0x8022A594: addiu       $v0, $zero, 0x82
    ctx->r2 = ADD32(0, 0X82);
    // 0x8022A598: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A59C: j           L_8022A5FC
    // 0x8022A5A0: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
        goto L_8022A5FC;
    // 0x8022A5A0: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
L_8022A5A4:
    // 0x8022A5A4: addiu       $v0, $zero, 0x83
    ctx->r2 = ADD32(0, 0X83);
    // 0x8022A5A8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A5AC: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
    // 0x8022A5B0: jal         0x8022B750
    // 0x8022A5B4: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    func_8022B750_ovl28(rdram, ctx);
        goto after_2;
    // 0x8022A5B4: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    after_2:
    // 0x8022A5B8: j           L_8022A5F4
    // 0x8022A5BC: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
        goto L_8022A5F4;
    // 0x8022A5BC: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
L_8022A5C0:
    // 0x8022A5C0: jal         0x8022B750
    // 0x8022A5C4: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    func_8022B750_ovl28(rdram, ctx);
        goto after_3;
    // 0x8022A5C4: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_3:
    // 0x8022A5C8: j           L_8022A5FC
    // 0x8022A5CC: nop

        goto L_8022A5FC;
    // 0x8022A5CC: nop

L_8022A5D0:
    // 0x8022A5D0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A5D4: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
    // 0x8022A5D8: jal         0x8022B750
    // 0x8022A5DC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_8022B750_ovl28(rdram, ctx);
        goto after_4;
    // 0x8022A5DC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_4:
    // 0x8022A5E0: j           L_8022A5F4
    // 0x8022A5E4: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
        goto L_8022A5F4;
    // 0x8022A5E4: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
L_8022A5E8:
    // 0x8022A5E8: j           L_8022A5F4
    // 0x8022A5EC: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
        goto L_8022A5F4;
    // 0x8022A5EC: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
L_8022A5F0:
    // 0x8022A5F0: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
L_8022A5F4:
    // 0x8022A5F4: jal         0x8022B784
    // 0x8022A5F8: nop

    func_8022B784_ovl28(rdram, ctx);
        goto after_5;
    // 0x8022A5F8: nop

    after_5:
L_8022A5FC:
    // 0x8022A5FC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022A600: jr          $ra
    // 0x8022A604: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A604: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80232BBC_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232BBC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80232BC0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232BC4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232BC8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80232BCC: addiu       $s2, $s0, 0x14
    ctx->r18 = ADD32(ctx->r16, 0X14);
    // 0x80232BD0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80232BD4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80232BD8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80232BDC: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80232BE0: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80232BE4: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x80232BE8: jal         0x8004F820
    // 0x80232BEC: addiu       $a3, $zero, 0x34
    ctx->r7 = ADD32(0, 0X34);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80232BEC: addiu       $a3, $zero, 0x34
    ctx->r7 = ADD32(0, 0X34);
    after_0:
    // 0x80232BF0: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80232BF4: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80232BF8: lbu         $a0, 0xA4($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA4);
    // 0x80232BFC: addu        $v1, $v1, $s1
    ctx->r3 = ADD32(ctx->r3, ctx->r17);
    // 0x80232C00: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80232C04: xori        $v0, $a0, 0x5
    ctx->r2 = ctx->r4 ^ 0X5;
    // 0x80232C08: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80232C0C: xori        $a0, $a0, 0x14
    ctx->r4 = ctx->r4 ^ 0X14;
    // 0x80232C10: sltiu       $a0, $a0, 0x1
    ctx->r4 = ctx->r4 < 0X1 ? 1 : 0;
    // 0x80232C14: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x80232C18: beq         $v0, $zero, L_80232C2C
    if (ctx->r2 == 0) {
        // 0x80232C1C: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_80232C2C;
    }
    // 0x80232C1C: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80232C20: addiu       $a0, $zero, 0x1B6
    ctx->r4 = ADD32(0, 0X1B6);
    // 0x80232C24: jal         0x8002A33C
    // 0x80232C28: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x80232C28: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_1:
L_80232C2C:
    // 0x80232C2C: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x80232C30: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80232C34: bltzl       $v0, L_80232C50
    if (SIGNED(ctx->r2) < 0) {
        // 0x80232C38: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_80232C50;
    }
    goto skip_0;
    // 0x80232C38: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_0:
    // 0x80232C3C: slti        $v0, $v0, 0x34
    ctx->r2 = SIGNED(ctx->r2) < 0X34 ? 1 : 0;
    // 0x80232C40: beq         $v0, $zero, L_80232C70
    if (ctx->r2 == 0) {
        // 0x80232C44: nop
    
            goto L_80232C70;
    }
    // 0x80232C44: nop

    // 0x80232C48: j           L_80232C5C
    // 0x80232C4C: nop

        goto L_80232C5C;
    // 0x80232C4C: nop

L_80232C50:
    // 0x80232C50: slti        $v0, $v0, 0x34
    ctx->r2 = SIGNED(ctx->r2) < 0X34 ? 1 : 0;
    // 0x80232C54: beq         $v0, $zero, L_80232C70
    if (ctx->r2 == 0) {
        // 0x80232C58: nop
    
            goto L_80232C70;
    }
    // 0x80232C58: nop

L_80232C5C:
    // 0x80232C5C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80232C60: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x80232C64: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x80232C68: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232C6C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80232C70:
    // 0x80232C70: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80232C74: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80232C78: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80232C7C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232C80: jr          $ra
    // 0x80232C84: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80232C84: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
