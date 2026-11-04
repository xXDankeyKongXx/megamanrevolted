#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80241A00_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80241A00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80241A04: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80241A08: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80241A0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80241A10: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x80241A14: sll         $v1, $v0, 24
    ctx->r3 = S32(ctx->r2 << 24);
    // 0x80241A18: sra         $a0, $v1, 24
    ctx->r4 = S32(SIGNED(ctx->r3) >> 24);
    // 0x80241A1C: blez        $a0, L_80241B14
    if (SIGNED(ctx->r4) <= 0) {
        // 0x80241A20: lui         $v0, 0x2AAA
        ctx->r2 = S32(0X2AAA << 16);
            goto L_80241B14;
    }
    // 0x80241A20: lui         $v0, 0x2AAA
    ctx->r2 = S32(0X2AAA << 16);
    // 0x80241A24: ori         $v0, $v0, 0xAAAB
    ctx->r2 = ctx->r2 | 0XAAAB;
    // 0x80241A28: mult        $a0, $v0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80241A2C: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x80241A30: mfhi        $a1
    ctx->r5 = hi;
    // 0x80241A34: subu        $v1, $a1, $v1
    ctx->r3 = SUB32(ctx->r5, ctx->r3);
    // 0x80241A38: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80241A3C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80241A40: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80241A44: subu        $v0, $a0, $v0
    ctx->r2 = SUB32(ctx->r4, ctx->r2);
    // 0x80241A48: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80241A4C: bne         $v0, $zero, L_80241A6C
    if (ctx->r2 != 0) {
        // 0x80241A50: nop
    
            goto L_80241A6C;
    }
    // 0x80241A50: nop

    // 0x80241A54: lbu         $v1, 0x22($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X22);
    // 0x80241A58: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x80241A5C: sltiu       $v0, $v0, 0x80
    ctx->r2 = ctx->r2 < 0X80 ? 1 : 0;
    // 0x80241A60: beq         $v0, $zero, L_80241A6C
    if (ctx->r2 == 0) {
        // 0x80241A64: addiu       $v0, $v1, 0x20
        ctx->r2 = ADD32(ctx->r3, 0X20);
            goto L_80241A6C;
    }
    // 0x80241A64: addiu       $v0, $v1, 0x20
    ctx->r2 = ADD32(ctx->r3, 0X20);
    // 0x80241A68: sb          $v0, 0x22($s0)
    MEM_B(0X22, ctx->r16) = ctx->r2;
L_80241A6C:
    // 0x80241A6C: jal         0x800A3450
    // 0x80241A70: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80241A70: nop

    after_0:
    // 0x80241A74: lhu         $v1, 0x1C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1C);
    // 0x80241A78: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80241A7C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80241A80: jal         0x800A3450
    // 0x80241A84: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x80241A84: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    after_1:
    // 0x80241A88: lhu         $v1, 0x20($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X20);
    // 0x80241A8C: lbu         $a0, 0xE($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XE);
    // 0x80241A90: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80241A94: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80241A98: andi        $a0, $a0, 0x1
    ctx->r4 = ctx->r4 & 0X1;
    // 0x80241A9C: bne         $a0, $zero, L_80241ABC
    if (ctx->r4 != 0) {
        // 0x80241AA0: sh          $v1, 0x20($s0)
        MEM_H(0X20, ctx->r16) = ctx->r3;
            goto L_80241ABC;
    }
    // 0x80241AA0: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    // 0x80241AA4: jal         0x800A3450
    // 0x80241AA8: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x80241AA8: nop

    after_2:
    // 0x80241AAC: lhu         $v1, 0x1E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1E);
    // 0x80241AB0: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80241AB4: j           L_80241AD0
    // 0x80241AB8: addiu       $v1, $v1, -0x2
    ctx->r3 = ADD32(ctx->r3, -0X2);
        goto L_80241AD0;
    // 0x80241AB8: addiu       $v1, $v1, -0x2
    ctx->r3 = ADD32(ctx->r3, -0X2);
L_80241ABC:
    // 0x80241ABC: jal         0x800A3450
    // 0x80241AC0: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80241AC0: nop

    after_3:
    // 0x80241AC4: lhu         $v1, 0x1E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1E);
    // 0x80241AC8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80241ACC: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
L_80241AD0:
    // 0x80241AD0: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80241AD4: sh          $v1, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r3;
    // 0x80241AD8: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x80241ADC: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80241AE0: bne         $v0, $zero, L_80241AF4
    if (ctx->r2 != 0) {
        // 0x80241AE4: lui         $a0, 0xFFFD
        ctx->r4 = S32(0XFFFD << 16);
            goto L_80241AF4;
    }
    // 0x80241AE4: lui         $a0, 0xFFFD
    ctx->r4 = S32(0XFFFD << 16);
    // 0x80241AE8: lhu         $v0, 0x24($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X24);
    // 0x80241AEC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80241AF0: sh          $v0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r2;
L_80241AF4:
    // 0x80241AF4: lbu         $v1, 0xE($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XE);
    // 0x80241AF8: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x80241AFC: ori         $a0, $a0, 0xFDFE
    ctx->r4 = ctx->r4 | 0XFDFE;
    // 0x80241B00: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80241B04: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80241B08: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x80241B0C: j           L_80241B1C
    // 0x80241B10: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
        goto L_80241B1C;
    // 0x80241B10: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
L_80241B14:
    // 0x80241B14: jal         0x8004F5C4
    // 0x80241B18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_4;
    // 0x80241B18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
L_80241B1C:
    // 0x80241B1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80241B20: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80241B24: jr          $ra
    // 0x80241B28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80241B28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022EAB8_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EAB8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022EABC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022EAC0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022EAC4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022EAC8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022EACC: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022EAD0: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022EAD4: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x8022EAD8: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x8022EADC: bne         $v0, $zero, L_8022EB38
    if (ctx->r2 != 0) {
        // 0x8022EAE0: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_8022EB38;
    }
    // 0x8022EAE0: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022EAE4: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022EAE8: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x8022EAEC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022EAF0: jal         0x8004F820
    // 0x8022EAF4: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022EAF4: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_0:
    // 0x8022EAF8: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022EAFC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022EB00: lw          $a0, 0x3FF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3FF0);
    // 0x8022EB04: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022EB08: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022EB0C: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x8022EB10: and         $a0, $a0, $v0
    ctx->r4 = ctx->r4 & ctx->r2;
    // 0x8022EB14: beq         $a0, $zero, L_8022EB38
    if (ctx->r4 == 0) {
        // 0x8022EB18: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8022EB38;
    }
    // 0x8022EB18: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022EB1C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022EB20: jal         0x8022F4E0
    // 0x8022EB24: nop

    func_8022F4E0_ovl5(rdram, ctx);
        goto after_1;
    // 0x8022EB24: nop

    after_1:
    // 0x8022EB28: lbu         $v1, 0x34B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022EB2C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022EB30: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022EB34: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
L_8022EB38:
    // 0x8022EB38: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022EB3C: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x8022EB40: bne         $v0, $zero, L_8022EB64
    if (ctx->r2 != 0) {
        // 0x8022EB44: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_8022EB64;
    }
    // 0x8022EB44: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8022EB48: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022EB4C: sb          $v1, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r3;
    // 0x8022EB50: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x8022EB54: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8022EB58: jal         0x8022F578
    // 0x8022EB5C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_8022F578_ovl5(rdram, ctx);
        goto after_2;
    // 0x8022EB5C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_2:
    // 0x8022EB60: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022EB64:
    // 0x8022EB64: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022EB68: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022EB6C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022EB70: jr          $ra
    // 0x8022EB74: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022EB74: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022D750_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D750: lhu         $v0, 0x350($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X350);
    // 0x8022D754: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022D758: sh          $v0, 0x350($a0)
    MEM_H(0X350, ctx->r4) = ctx->r2;
    // 0x8022D75C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D760: bne         $v0, $zero, L_8022D76C
    if (ctx->r2 != 0) {
        // 0x8022D764: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022D76C;
    }
    // 0x8022D764: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D768: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_8022D76C:
    // 0x8022D76C: jr          $ra
    // 0x8022D770: nop

    TRACE_RETURN()
    return;
    // 0x8022D770: nop

;}
RECOMP_FUNC void func_80225644_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225644: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225648: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022564C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225650: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225654: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x80225658: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022565C: beq         $v1, $v0, L_802256F4
    if (ctx->r3 == ctx->r2) {
        // 0x80225660: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_802256F4;
    }
    // 0x80225660: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80225664: beql        $v0, $zero, L_8022567C
    if (ctx->r2 == 0) {
        // 0x80225668: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022567C;
    }
    goto skip_0;
    // 0x80225668: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022566C: beq         $v1, $zero, L_8022568C
    if (ctx->r3 == 0) {
        // 0x80225670: nop
    
            goto L_8022568C;
    }
    // 0x80225670: nop

    // 0x80225674: j           L_8022575C
    // 0x80225678: nop

        goto L_8022575C;
    // 0x80225678: nop

L_8022567C:
    // 0x8022567C: beq         $v1, $v0, L_8022574C
    if (ctx->r3 == ctx->r2) {
        // 0x80225680: nop
    
            goto L_8022574C;
    }
    // 0x80225680: nop

    // 0x80225684: j           L_8022575C
    // 0x80225688: nop

        goto L_8022575C;
    // 0x80225688: nop

L_8022568C:
    // 0x8022568C: jal         0x8006033C
    // 0x80225690: addiu       $a0, $zero, 0x641
    ctx->r4 = ADD32(0, 0X641);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80225690: addiu       $a0, $zero, 0x641
    ctx->r4 = ADD32(0, 0X641);
    after_0:
    // 0x80225694: bne         $v0, $zero, L_80225758
    if (ctx->r2 != 0) {
        // 0x80225698: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80225758;
    }
    // 0x80225698: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022569C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x802256A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802256A4: jal         0x80060DA0
    // 0x802256A8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80060DA0_3C1A0(rdram, ctx);
        goto after_1;
    // 0x802256A8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x802256AC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802256B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802256B4: jal         0x80060DA0
    // 0x802256B8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80060DA0_3C1A0(rdram, ctx);
        goto after_2;
    // 0x802256B8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x802256BC: jal         0x8006036C
    // 0x802256C0: addiu       $a0, $zero, 0x620
    ctx->r4 = ADD32(0, 0X620);
    func_8006036C_3B76C(rdram, ctx);
        goto after_3;
    // 0x802256C0: addiu       $a0, $zero, 0x620
    ctx->r4 = ADD32(0, 0X620);
    after_3:
    // 0x802256C4: jal         0x80060690
    // 0x802256C8: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    func_80060690_3BA90(rdram, ctx);
        goto after_4;
    // 0x802256C8: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_4:
    // 0x802256CC: jal         0x8004F228
    // 0x802256D0: nop

    func_8004F228_2A628(rdram, ctx);
        goto after_5;
    // 0x802256D0: nop

    after_5:
    // 0x802256D4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802256D8: beq         $v1, $zero, L_802256EC
    if (ctx->r3 == 0) {
        // 0x802256DC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802256EC;
    }
    // 0x802256DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802256E0: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x802256E4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x802256E8: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
L_802256EC:
    // 0x802256EC: j           L_80225758
    // 0x802256F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80225758;
    // 0x802256F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802256F4:
    // 0x802256F4: jal         0x8006033C
    // 0x802256F8: addiu       $a0, $zero, 0x621
    ctx->r4 = ADD32(0, 0X621);
    func_8006033C_3B73C(rdram, ctx);
        goto after_6;
    // 0x802256F8: addiu       $a0, $zero, 0x621
    ctx->r4 = ADD32(0, 0X621);
    after_6:
    // 0x802256FC: beq         $v0, $zero, L_80225714
    if (ctx->r2 == 0) {
        // 0x80225700: nop
    
            goto L_80225714;
    }
    // 0x80225700: nop

    // 0x80225704: jal         0x80060690
    // 0x80225708: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_80060690_3BA90(rdram, ctx);
        goto after_7;
    // 0x80225708: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_7:
    // 0x8022570C: j           L_8022575C
    // 0x80225710: nop

        goto L_8022575C;
    // 0x80225710: nop

L_80225714:
    // 0x80225714: jal         0x8006033C
    // 0x80225718: addiu       $a0, $zero, 0x640
    ctx->r4 = ADD32(0, 0X640);
    func_8006033C_3B73C(rdram, ctx);
        goto after_8;
    // 0x80225718: addiu       $a0, $zero, 0x640
    ctx->r4 = ADD32(0, 0X640);
    after_8:
    // 0x8022571C: beq         $v0, $zero, L_8022575C
    if (ctx->r2 == 0) {
        // 0x80225720: nop
    
            goto L_8022575C;
    }
    // 0x80225720: nop

    // 0x80225724: jal         0x8006033C
    // 0x80225728: addiu       $a0, $zero, 0x630
    ctx->r4 = ADD32(0, 0X630);
    func_8006033C_3B73C(rdram, ctx);
        goto after_9;
    // 0x80225728: addiu       $a0, $zero, 0x630
    ctx->r4 = ADD32(0, 0X630);
    after_9:
    // 0x8022572C: bne         $v0, $zero, L_80225758
    if (ctx->r2 != 0) {
        // 0x80225730: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80225758;
    }
    // 0x80225730: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80225734: jal         0x8006036C
    // 0x80225738: addiu       $a0, $zero, 0x641
    ctx->r4 = ADD32(0, 0X641);
    func_8006036C_3B76C(rdram, ctx);
        goto after_10;
    // 0x80225738: addiu       $a0, $zero, 0x641
    ctx->r4 = ADD32(0, 0X641);
    after_10:
    // 0x8022573C: jal         0x80060690
    // 0x80225740: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    func_80060690_3BA90(rdram, ctx);
        goto after_11;
    // 0x80225740: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    after_11:
    // 0x80225744: j           L_80225758
    // 0x80225748: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80225758;
    // 0x80225748: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8022574C:
    // 0x8022574C: jal         0x80060690
    // 0x80225750: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    func_80060690_3BA90(rdram, ctx);
        goto after_12;
    // 0x80225750: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    after_12:
    // 0x80225754: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_80225758:
    // 0x80225758: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8022575C:
    // 0x8022575C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225760: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225764: jr          $ra
    // 0x80225768: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225768: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022D44C_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D44C: lh          $v0, 0x350($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X350);
    // 0x8022D450: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8022D454: beq         $v0, $zero, L_8022D470
    if (ctx->r2 == 0) {
        // 0x8022D458: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022D470;
    }
    // 0x8022D458: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022D45C: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022D460: sh          $v0, 0x350($a0)
    MEM_H(0X350, ctx->r4) = ctx->r2;
    // 0x8022D464: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D468: bne         $v0, $zero, L_8022D49C
    if (ctx->r2 != 0) {
        // 0x8022D46C: nop
    
            goto L_8022D49C;
    }
    // 0x8022D46C: nop

L_8022D470:
    // 0x8022D470: lb          $v0, 0xA7($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XA7);
    // 0x8022D474: bgez        $v0, L_8022D49C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022D478: addiu       $v0, $zero, 0x49
        ctx->r2 = ADD32(0, 0X49);
            goto L_8022D49C;
    }
    // 0x8022D478: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x8022D47C: lbu         $v1, 0x2($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X2);
    // 0x8022D480: bnel        $v1, $v0, L_8022D49C
    if (ctx->r3 != ctx->r2) {
        // 0x8022D484: sb          $zero, 0xA($a0)
        MEM_B(0XA, ctx->r4) = 0;
            goto L_8022D49C;
    }
    goto skip_0;
    // 0x8022D484: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    skip_0:
    // 0x8022D488: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8022D48C: addiu       $v1, $zero, 0x9
    ctx->r3 = ADD32(0, 0X9);
    // 0x8022D490: sb          $v1, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r3;
    // 0x8022D494: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022D498: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_8022D49C:
    // 0x8022D49C: jr          $ra
    // 0x8022D4A0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x8022D4A0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80232EF4_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232EF4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80232EF8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80232EFC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232F00: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x80232F04: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x80232F08: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80232F0C: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80232F10: lh          $v1, 0x332($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X332);
    // 0x80232F14: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x80232F18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80232F1C: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x80232F20: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80232F24: bne         $v1, $zero, L_80232F40
    if (ctx->r3 != 0) {
        // 0x80232F28: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_80232F40;
    }
    // 0x80232F28: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x80232F2C: addiu       $a0, $zero, 0xEA
    ctx->r4 = ADD32(0, 0XEA);
    // 0x80232F30: jal         0x8002A33C
    // 0x80232F34: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x80232F34: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x80232F38: j           L_80232F44
    // 0x80232F3C: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
        goto L_80232F44;
    // 0x80232F3C: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_80232F40:
    // 0x80232F40: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_80232F44:
    // 0x80232F44: sh          $v0, 0x332($s0)
    MEM_H(0X332, ctx->r16) = ctx->r2;
    // 0x80232F48: lh          $v0, 0x8($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X8);
    // 0x80232F4C: beq         $v0, $zero, L_802331F4
    if (ctx->r2 == 0) {
        // 0x80232F50: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_802331F4;
    }
    // 0x80232F50: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80232F54: lb          $v1, 0x3D($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X3D);
    // 0x80232F58: addiu       $v0, $a0, -0x1
    ctx->r2 = ADD32(ctx->r4, -0X1);
    // 0x80232F5C: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    // 0x80232F60: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80232F64: lbu         $a0, 0x3($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X3);
    // 0x80232F68: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80232F6C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80232F70: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80232F74: bne         $a0, $zero, L_80232F84
    if (ctx->r4 != 0) {
        // 0x80232F78: sh          $v0, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r2;
            goto L_80232F84;
    }
    // 0x80232F78: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80232F7C: j           L_80232F88
    // 0x80232F80: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
        goto L_80232F88;
    // 0x80232F80: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
L_80232F84:
    // 0x80232F84: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
L_80232F88:
    // 0x80232F88: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80232F8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232F90: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80232F94: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80232F98: jal         0x8004DA90
    // 0x80232F9C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x80232F9C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x80232FA0: jal         0x8003F754
    // 0x80232FA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003F754_1AB54(rdram, ctx);
        goto after_2;
    // 0x80232FA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80232FA8: beq         $v0, $zero, L_80232FEC
    if (ctx->r2 == 0) {
        // 0x80232FAC: nop
    
            goto L_80232FEC;
    }
    // 0x80232FAC: nop

    // 0x80232FB0: jal         0x800715F8
    // 0x80232FB4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_800715F8_4C9F8(rdram, ctx);
        goto after_3;
    // 0x80232FB4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_3:
    // 0x80232FB8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80232FBC: blezl       $v1, L_80232FD4
    if (SIGNED(ctx->r3) <= 0) {
        // 0x80232FC0: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80232FD4;
    }
    goto skip_0;
    // 0x80232FC0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    skip_0:
    // 0x80232FC4: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80232FC8: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x80232FCC: j           L_80233200
    // 0x80232FD0: ori         $v0, $v0, 0x200
    ctx->r2 = ctx->r2 | 0X200;
        goto L_80233200;
    // 0x80232FD0: ori         $v0, $v0, 0x200
    ctx->r2 = ctx->r2 | 0X200;
L_80232FD4:
    // 0x80232FD4: bne         $v1, $v0, L_80232FEC
    if (ctx->r3 != ctx->r2) {
        // 0x80232FD8: nop
    
            goto L_80232FEC;
    }
    // 0x80232FD8: nop

    // 0x80232FDC: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80232FE0: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x80232FE4: j           L_80233200
    // 0x80232FE8: ori         $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 | 0X1000;
        goto L_80233200;
    // 0x80232FE8: ori         $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 | 0X1000;
L_80232FEC:
    // 0x80232FEC: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x80232FF0: addiu       $v0, $v1, 0x275F
    ctx->r2 = ADD32(ctx->r3, 0X275F);
    // 0x80232FF4: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x80232FF8: sltiu       $v0, $v0, 0x52C0
    ctx->r2 = ctx->r2 < 0X52C0 ? 1 : 0;
    // 0x80232FFC: bnel        $v0, $zero, L_80233014
    if (ctx->r2 != 0) {
        // 0x80233000: addiu       $v0, $v1, 0x1BFF
        ctx->r2 = ADD32(ctx->r3, 0X1BFF);
            goto L_80233014;
    }
    goto skip_1;
    // 0x80233000: addiu       $v0, $v1, 0x1BFF
    ctx->r2 = ADD32(ctx->r3, 0X1BFF);
    skip_1:
    // 0x80233004: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80233008: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x8023300C: j           L_80233200
    // 0x80233010: ori         $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 | 0X1000;
        goto L_80233200;
    // 0x80233010: ori         $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 | 0X1000;
L_80233014:
    // 0x80233014: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x80233018: sltiu       $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 < 0X1000 ? 1 : 0;
    // 0x8023301C: beq         $v0, $zero, L_80233044
    if (ctx->r2 == 0) {
        // 0x80233020: nop
    
            goto L_80233044;
    }
    // 0x80233020: nop

    // 0x80233024: lh          $v0, 0x18($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X18);
    // 0x80233028: slti        $v0, $v0, 0xF61
    ctx->r2 = SIGNED(ctx->r2) < 0XF61 ? 1 : 0;
    // 0x8023302C: bne         $v0, $zero, L_80233044
    if (ctx->r2 != 0) {
        // 0x80233030: nop
    
            goto L_80233044;
    }
    // 0x80233030: nop

    // 0x80233034: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80233038: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x8023303C: j           L_80233200
    // 0x80233040: ori         $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 | 0X1000;
        goto L_80233200;
    // 0x80233040: ori         $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 | 0X1000;
L_80233044:
    // 0x80233044: lhu         $a0, 0x14($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X14);
    // 0x80233048: addiu       $v0, $a0, 0x275F
    ctx->r2 = ADD32(ctx->r4, 0X275F);
    // 0x8023304C: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x80233050: sltiu       $v0, $v0, 0xB60
    ctx->r2 = ctx->r2 < 0XB60 ? 1 : 0;
    // 0x80233054: beq         $v0, $zero, L_80233090
    if (ctx->r2 == 0) {
        // 0x80233058: nop
    
            goto L_80233090;
    }
    // 0x80233058: nop

    // 0x8023305C: lh          $v1, 0x18($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X18);
    // 0x80233060: slti        $v0, $v1, 0x401
    ctx->r2 = SIGNED(ctx->r3) < 0X401 ? 1 : 0;
    // 0x80233064: bne         $v0, $zero, L_80233090
    if (ctx->r2 != 0) {
        // 0x80233068: sll         $v0, $a0, 16
        ctx->r2 = S32(ctx->r4 << 16);
            goto L_80233090;
    }
    // 0x80233068: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x8023306C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80233070: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
    // 0x80233074: slti        $v0, $v0, 0x2B61
    ctx->r2 = SIGNED(ctx->r2) < 0X2B61 ? 1 : 0;
    // 0x80233078: bne         $v0, $zero, L_80233090
    if (ctx->r2 != 0) {
        // 0x8023307C: nop
    
            goto L_80233090;
    }
    // 0x8023307C: nop

    // 0x80233080: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80233084: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x80233088: j           L_80233200
    // 0x8023308C: ori         $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 | 0X1000;
        goto L_80233200;
    // 0x8023308C: ori         $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 | 0X1000;
L_80233090:
    // 0x80233090: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80233094: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x80233098: beq         $v0, $zero, L_80233204
    if (ctx->r2 == 0) {
        // 0x8023309C: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_80233204;
    }
    // 0x8023309C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x802330A0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x802330A4: jal         0x8009A3B4
    // 0x802330A8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x802330A8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x802330AC: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x802330B0: addiu       $v0, $v0, -0x400
    ctx->r2 = ADD32(ctx->r2, -0X400);
    // 0x802330B4: sltiu       $v0, $v0, 0x800
    ctx->r2 = ctx->r2 < 0X800 ? 1 : 0;
    // 0x802330B8: bne         $v0, $zero, L_802330CC
    if (ctx->r2 != 0) {
        // 0x802330BC: nop
    
            goto L_802330CC;
    }
    // 0x802330BC: nop

    // 0x802330C0: lhu         $v0, 0x14($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X14);
    // 0x802330C4: j           L_802330D4
    // 0x802330C8: addiu       $v0, $v0, -0x6C
    ctx->r2 = ADD32(ctx->r2, -0X6C);
        goto L_802330D4;
    // 0x802330C8: addiu       $v0, $v0, -0x6C
    ctx->r2 = ADD32(ctx->r2, -0X6C);
L_802330CC:
    // 0x802330CC: lhu         $v0, 0x14($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X14);
    // 0x802330D0: addiu       $v0, $v0, 0x6C
    ctx->r2 = ADD32(ctx->r2, 0X6C);
L_802330D4:
    // 0x802330D4: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x802330D8: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x802330DC: lbu         $a3, 0x1($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X1);
    // 0x802330E0: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x802330E4: jal         0x8003E964
    // 0x802330E8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8003E964_19D64(rdram, ctx);
        goto after_5;
    // 0x802330E8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_5:
    // 0x802330EC: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x802330F0: lh          $a0, 0x2E($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X2E);
    // 0x802330F4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802330F8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802330FC: subu        $v1, $v0, $a0
    ctx->r3 = SUB32(ctx->r2, ctx->r4);
    // 0x80233100: bltzl       $v1, L_80233118
    if (SIGNED(ctx->r3) < 0) {
        // 0x80233104: subu        $v0, $a0, $v0
        ctx->r2 = SUB32(ctx->r4, ctx->r2);
            goto L_80233118;
    }
    goto skip_2;
    // 0x80233104: subu        $v0, $a0, $v0
    ctx->r2 = SUB32(ctx->r4, ctx->r2);
    skip_2:
    // 0x80233108: bgtz        $v1, L_80233120
    if (SIGNED(ctx->r3) > 0) {
        // 0x8023310C: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_80233120;
    }
    // 0x8023310C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80233110: j           L_80233130
    // 0x80233114: nop

        goto L_80233130;
    // 0x80233114: nop

L_80233118:
    // 0x80233118: blez        $v0, L_80233130
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8023311C: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_80233130;
    }
    // 0x8023311C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
L_80233120:
    // 0x80233120: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80233124: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x80233128: j           L_80233200
    // 0x8023312C: ori         $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 | 0X1000;
        goto L_80233200;
    // 0x8023312C: ori         $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 | 0X1000;
L_80233130:
    // 0x80233130: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80233134: jal         0x8009A3B4
    // 0x80233138: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x80233138: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x8023313C: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80233140: sltiu       $v0, $v0, 0x800
    ctx->r2 = ctx->r2 < 0X800 ? 1 : 0;
    // 0x80233144: beq         $v0, $zero, L_80233158
    if (ctx->r2 == 0) {
        // 0x80233148: nop
    
            goto L_80233158;
    }
    // 0x80233148: nop

    // 0x8023314C: lhu         $v0, 0x10($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X10);
    // 0x80233150: j           L_80233160
    // 0x80233154: addiu       $v0, $v0, -0x6C
    ctx->r2 = ADD32(ctx->r2, -0X6C);
        goto L_80233160;
    // 0x80233154: addiu       $v0, $v0, -0x6C
    ctx->r2 = ADD32(ctx->r2, -0X6C);
L_80233158:
    // 0x80233158: lhu         $v0, 0x10($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X10);
    // 0x8023315C: addiu       $v0, $v0, 0x6C
    ctx->r2 = ADD32(ctx->r2, 0X6C);
L_80233160:
    // 0x80233160: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x80233164: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x80233168: lbu         $a3, 0x1($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X1);
    // 0x8023316C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80233170: jal         0x8003E964
    // 0x80233174: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8003E964_19D64(rdram, ctx);
        goto after_7;
    // 0x80233174: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_7:
    // 0x80233178: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8023317C: lh          $a0, 0x2E($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X2E);
    // 0x80233180: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80233184: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80233188: subu        $v1, $v0, $a0
    ctx->r3 = SUB32(ctx->r2, ctx->r4);
    // 0x8023318C: bltzl       $v1, L_802331A4
    if (SIGNED(ctx->r3) < 0) {
        // 0x80233190: subu        $v0, $a0, $v0
        ctx->r2 = SUB32(ctx->r4, ctx->r2);
            goto L_802331A4;
    }
    goto skip_3;
    // 0x80233190: subu        $v0, $a0, $v0
    ctx->r2 = SUB32(ctx->r4, ctx->r2);
    skip_3:
    // 0x80233194: bgtz        $v1, L_802331AC
    if (SIGNED(ctx->r3) > 0) {
        // 0x80233198: nop
    
            goto L_802331AC;
    }
    // 0x80233198: nop

    // 0x8023319C: j           L_802331BC
    // 0x802331A0: andi        $v0, $s2, 0xFF
    ctx->r2 = ctx->r18 & 0XFF;
        goto L_802331BC;
    // 0x802331A0: andi        $v0, $s2, 0xFF
    ctx->r2 = ctx->r18 & 0XFF;
L_802331A4:
    // 0x802331A4: blezl       $v0, L_802331BC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x802331A8: andi        $v0, $s2, 0xFF
        ctx->r2 = ctx->r18 & 0XFF;
            goto L_802331BC;
    }
    goto skip_4;
    // 0x802331A8: andi        $v0, $s2, 0xFF
    ctx->r2 = ctx->r18 & 0XFF;
    skip_4:
L_802331AC:
    // 0x802331AC: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x802331B0: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x802331B4: j           L_80233200
    // 0x802331B8: ori         $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 | 0X1000;
        goto L_80233200;
    // 0x802331B8: ori         $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 | 0X1000;
L_802331BC:
    // 0x802331BC: bne         $v0, $zero, L_80233210
    if (ctx->r2 != 0) {
        // 0x802331C0: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80233210;
    }
    // 0x802331C0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802331C4: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x802331C8: sll         $v1, $a0, 16
    ctx->r3 = S32(ctx->r4 << 16);
    // 0x802331CC: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x802331D0: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
    // 0x802331D4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802331D8: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x802331DC: bnel        $v0, $zero, L_802331E4
    if (ctx->r2 != 0) {
        // 0x802331E0: addu        $a0, $a1, $zero
        ctx->r4 = ADD32(ctx->r5, 0);
            goto L_802331E4;
    }
    goto skip_5;
    // 0x802331E0: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    skip_5:
L_802331E4:
    // 0x802331E4: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x802331E8: sh          $a0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r4;
    // 0x802331EC: j           L_80233204
    // 0x802331F0: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
        goto L_80233204;
    // 0x802331F0: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_802331F4:
    // 0x802331F4: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x802331F8: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x802331FC: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
L_80233200:
    // 0x80233200: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_80233204:
    // 0x80233204: andi        $v0, $s2, 0xFF
    ctx->r2 = ctx->r18 & 0XFF;
    // 0x80233208: beq         $v0, $zero, L_80233248
    if (ctx->r2 == 0) {
        // 0x8023320C: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80233248;
    }
    // 0x8023320C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_80233210:
    // 0x80233210: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x80233214: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80233218: jal         0x8009A3B4
    // 0x8023321C: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x8023321C: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
    after_8:
    // 0x80233220: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80233224: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x80233228: jal         0x8009A3B4
    // 0x8023322C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_9;
    // 0x8023322C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_9:
    // 0x80233230: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x80233234: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x80233238: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8023323C: andi        $v0, $v0, 0xFFBF
    ctx->r2 = ctx->r2 & 0XFFBF;
    // 0x80233240: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80233244: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_80233248:
    // 0x80233248: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x8023324C: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x80233250: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80233254: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80233258: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8023325C: jr          $ra
    // 0x80233260: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80233260: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8022576C_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022576C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225770: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225774: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225778: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022577C: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225780: bne         $v0, $zero, L_802257B0
    if (ctx->r2 != 0) {
        // 0x80225784: nop
    
            goto L_802257B0;
    }
    // 0x80225784: nop

    // 0x80225788: jal         0x8006033C
    // 0x8022578C: addiu       $a0, $zero, 0x630
    ctx->r4 = ADD32(0, 0X630);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8022578C: addiu       $a0, $zero, 0x630
    ctx->r4 = ADD32(0, 0X630);
    after_0:
    // 0x80225790: bne         $v0, $zero, L_802257AC
    if (ctx->r2 != 0) {
        // 0x80225794: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_802257AC;
    }
    // 0x80225794: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225798: jal         0x8006036C
    // 0x8022579C: addiu       $a0, $zero, 0x630
    ctx->r4 = ADD32(0, 0X630);
    func_8006036C_3B76C(rdram, ctx);
        goto after_1;
    // 0x8022579C: addiu       $a0, $zero, 0x630
    ctx->r4 = ADD32(0, 0X630);
    after_1:
    // 0x802257A0: jal         0x80060690
    // 0x802257A4: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    func_80060690_3BA90(rdram, ctx);
        goto after_2;
    // 0x802257A4: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    after_2:
    // 0x802257A8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_802257AC:
    // 0x802257AC: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_802257B0:
    // 0x802257B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802257B4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802257B8: jr          $ra
    // 0x802257BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802257BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023FCF0_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023FCF0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8023FCF4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8023FCF8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023FCFC: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8023FD00: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8023FD04: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8023FD08: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8023FD0C: jal         0x8009A3B4
    // 0x8023FD10: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8023FD10: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    after_0:
    // 0x8023FD14: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8023FD18: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8023FD1C: jal         0x8009A3B4
    // 0x8023FD20: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8023FD20: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8023FD24: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8023FD28: addiu       $s1, $s0, 0x54
    ctx->r17 = ADD32(ctx->r16, 0X54);
    // 0x8023FD2C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023FD30: jal         0x8009A3B4
    // 0x8023FD34: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8023FD34: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8023FD38: jal         0x800A3450
    // 0x8023FD3C: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x8023FD3C: nop

    after_3:
    // 0x8023FD40: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8023FD44: sh          $v0, 0xC2($s0)
    MEM_H(0XC2, ctx->r16) = ctx->r2;
    // 0x8023FD48: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8023FD4C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8023FD50: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023FD54: lw          $v0, 0x6CA0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6CA0);
    // 0x8023FD58: jalr        $v0
    // 0x8023FD5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x8023FD5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8023FD60: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023FD64: addiu       $s1, $s0, 0x8C
    ctx->r17 = ADD32(ctx->r16, 0X8C);
    // 0x8023FD68: jal         0x80031600
    // 0x8023FD6C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_80031600_CA00(rdram, ctx);
        goto after_5;
    // 0x8023FD6C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_5:
    // 0x8023FD70: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023FD74: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8023FD78: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8023FD7C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8023FD80: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8023FD84: jal         0x80031DA8
    // 0x8023FD88: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_6;
    // 0x8023FD88: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_6:
    // 0x8023FD8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023FD90: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8023FD94: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x8023FD98: lui         $a3, 0x100
    ctx->r7 = S32(0X100 << 16);
    // 0x8023FD9C: jal         0x80047284
    // 0x8023FDA0: ori         $a3, $a3, 0x8
    ctx->r7 = ctx->r7 | 0X8;
    func_80047284_22684(rdram, ctx);
        goto after_7;
    // 0x8023FDA0: ori         $a3, $a3, 0x8
    ctx->r7 = ctx->r7 | 0X8;
    after_7:
    // 0x8023FDA4: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8023FDA8: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8023FDAC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8023FDB0: jr          $ra
    // 0x8023FDB4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8023FDB4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022C170_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C170: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022C174: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C178: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C17C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022C180: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022C184: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022C188: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022C18C: jal         0x8004D5D4
    // 0x8022C190: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022C190: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022C194: addiu       $a0, $s0, 0x36C
    ctx->r4 = ADD32(ctx->r16, 0X36C);
    // 0x8022C198: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022C19C: addiu       $a2, $zero, -0x60
    ctx->r6 = ADD32(0, -0X60);
    // 0x8022C1A0: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022C1A4: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022C1A8: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022C1AC: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022C1B0: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022C1B4: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022C1B8: addiu       $v0, $zero, 0x10E
    ctx->r2 = ADD32(0, 0X10E);
    // 0x8022C1BC: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8022C1C0: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8022C1C4: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x8022C1C8: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x8022C1CC: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
    // 0x8022C1D0: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    // 0x8022C1D4: sw          $zero, 0x34C($s0)
    MEM_W(0X34C, ctx->r16) = 0;
    // 0x8022C1D8: sw          $zero, 0x350($s0)
    MEM_W(0X350, ctx->r16) = 0;
    // 0x8022C1DC: sw          $zero, 0x35C($s0)
    MEM_W(0X35C, ctx->r16) = 0;
    // 0x8022C1E0: sw          $zero, 0x360($s0)
    MEM_W(0X360, ctx->r16) = 0;
    // 0x8022C1E4: jal         0x800540BC
    // 0x8022C1E8: sh          $zero, 0x37C($s0)
    MEM_H(0X37C, ctx->r16) = 0;
    func_800540BC_2F4BC(rdram, ctx);
        goto after_1;
    // 0x8022C1E8: sh          $zero, 0x37C($s0)
    MEM_H(0X37C, ctx->r16) = 0;
    after_1:
    // 0x8022C1EC: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8022C1F0: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x8022C1F4: lw          $a0, 0x298($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X298);
    // 0x8022C1F8: addiu       $v1, $zero, 0x12C
    ctx->r3 = ADD32(0, 0X12C);
    // 0x8022C1FC: sh          $v1, 0x37E($s0)
    MEM_H(0X37E, ctx->r16) = ctx->r3;
    // 0x8022C200: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022C204: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022C208: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8022C20C: lbu         $a0, 0x3($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X3);
    // 0x8022C210: lbu         $v1, 0x18($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X18);
    // 0x8022C214: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022C218: addiu       $v0, $v0, 0x5430
    ctx->r2 = ADD32(ctx->r2, 0X5430);
    // 0x8022C21C: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x8022C220: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C224: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x8022C228: sh          $v1, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r3;
    // 0x8022C22C: sh          $v1, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r3;
    // 0x8022C230: beq         $a0, $v0, L_8022C27C
    if (ctx->r4 == ctx->r2) {
        // 0x8022C234: sh          $v1, 0xB2($s0)
        MEM_H(0XB2, ctx->r16) = ctx->r3;
            goto L_8022C27C;
    }
    // 0x8022C234: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    // 0x8022C238: slti        $v0, $a0, 0x2
    ctx->r2 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    // 0x8022C23C: beql        $v0, $zero, L_8022C254
    if (ctx->r2 == 0) {
        // 0x8022C240: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022C254;
    }
    goto skip_0;
    // 0x8022C240: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022C244: beq         $a0, $zero, L_8022C264
    if (ctx->r4 == 0) {
        // 0x8022C248: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022C264;
    }
    // 0x8022C248: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C24C: j           L_8022C2D0
    // 0x8022C250: nop

        goto L_8022C2D0;
    // 0x8022C250: nop

L_8022C254:
    // 0x8022C254: beq         $a0, $v0, L_8022C2B0
    if (ctx->r4 == ctx->r2) {
        // 0x8022C258: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022C2B0;
    }
    // 0x8022C258: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C25C: j           L_8022C2D0
    // 0x8022C260: nop

        goto L_8022C2D0;
    // 0x8022C260: nop

L_8022C264:
    // 0x8022C264: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022C268: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022C26C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C270: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022C274: j           L_8022C2C8
    // 0x8022C278: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
        goto L_8022C2C8;
    // 0x8022C278: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_8022C27C:
    // 0x8022C27C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C280: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022C284: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022C288: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C28C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022C290: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022C294: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022C298: jal         0x80050294
    // 0x8022C29C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x8022C29C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    after_2:
    // 0x8022C2A0: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022C2A4: andi        $v0, $v0, 0xFEFF
    ctx->r2 = ctx->r2 & 0XFEFF;
    // 0x8022C2A8: j           L_8022C2D0
    // 0x8022C2AC: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
        goto L_8022C2D0;
    // 0x8022C2AC: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
L_8022C2B0:
    // 0x8022C2B0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022C2B4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022C2B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C2BC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022C2C0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022C2C4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022C2C8:
    // 0x8022C2C8: jal         0x80050294
    // 0x8022C2CC: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x8022C2CC: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    after_3:
L_8022C2D0:
    // 0x8022C2D0: jal         0x8022C2E8
    // 0x8022C2D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022C2E8_ovl5(rdram, ctx);
        goto after_4;
    // 0x8022C2D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8022C2D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022C2DC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C2E0: jr          $ra
    // 0x8022C2E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022C2E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802270AC_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802270AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802270B0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802270B4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802270B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802270BC: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x802270C0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802270C4: beq         $v1, $v0, L_80227108
    if (ctx->r3 == ctx->r2) {
        // 0x802270C8: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_80227108;
    }
    // 0x802270C8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802270CC: jal         0x8006072C
    // 0x802270D0: nop

    func_8006072C_3BB2C(rdram, ctx);
        goto after_0;
    // 0x802270D0: nop

    after_0:
    // 0x802270D4: beq         $v0, $zero, L_802270F0
    if (ctx->r2 == 0) {
        // 0x802270D8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802270F0;
    }
    // 0x802270D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802270DC: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x802270E0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802270E4: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x802270E8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802270EC: sb          $v1, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r3;
L_802270F0:
    // 0x802270F0: lw          $v0, 0xA4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA4);
    // 0x802270F4: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x802270F8: jalr        $v0
    // 0x802270FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x802270FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80227100: j           L_80227118
    // 0x80227104: nop

        goto L_80227118;
    // 0x80227104: nop

L_80227108:
    // 0x80227108: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022710C: sb          $v1, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r3;
    // 0x80227110: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227114: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80227118:
    // 0x80227118: jal         0x80060018
    // 0x8022711C: nop

    func_80060018_3B418(rdram, ctx);
        goto after_2;
    // 0x8022711C: nop

    after_2:
    // 0x80227120: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227124: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227128: jr          $ra
    // 0x8022712C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022712C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023DE34_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023DE34: jr          $ra
    // 0x8023DE38: nop

    TRACE_RETURN()
    return;
    // 0x8023DE38: nop

;}
RECOMP_FUNC void func_80231728_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231728: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8023172C: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x80231730: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231734: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231738: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023173C: bne         $v0, $zero, L_8023176C
    if (ctx->r2 != 0) {
        // 0x80231740: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8023176C;
    }
    // 0x80231740: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80231744: jal         0x80034E3C
    // 0x80231748: nop

    func_80034E3C_1023C(rdram, ctx);
        goto after_0;
    // 0x80231748: nop

    after_0:
    // 0x8023174C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80231750: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80231754: jal         0x80050294
    // 0x80231758: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x80231758: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x8023175C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80231760: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231764: j           L_80231774
    // 0x80231768: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_80231774;
    // 0x80231768: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8023176C:
    // 0x8023176C: jal         0x8005044C
    // 0x80231770: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_2;
    // 0x80231770: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
L_80231774:
    // 0x80231774: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80231778: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023177C: jr          $ra
    // 0x80231780: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80231780: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227F08_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227F08: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80227F0C: bne         $v0, $zero, L_80227F6C
    if (ctx->r2 != 0) {
        // 0x80227F10: nop
    
            goto L_80227F6C;
    }
    // 0x80227F10: nop

    // 0x80227F14: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80227F18: addiu       $v1, $v1, 0x49B0
    ctx->r3 = ADD32(ctx->r3, 0X49B0);
    // 0x80227F1C: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80227F20: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80227F24: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80227F28: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x80227F2C: addiu       $v1, $zero, 0x200
    ctx->r3 = ADD32(0, 0X200);
    // 0x80227F30: sh          $v1, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r3;
    // 0x80227F34: addiu       $v1, $zero, -0x708
    ctx->r3 = ADD32(0, -0X708);
    // 0x80227F38: sh          $v1, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r3;
    // 0x80227F3C: addiu       $v1, $zero, 0x800
    ctx->r3 = ADD32(0, 0X800);
    // 0x80227F40: sh          $v1, 0x18($v0)
    MEM_H(0X18, ctx->r2) = ctx->r3;
    // 0x80227F44: lh          $v1, 0x14($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X14);
    // 0x80227F48: lh          $a0, 0x16($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X16);
    // 0x80227F4C: lh          $a1, 0x18($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X18);
    // 0x80227F50: sh          $zero, 0x56($v0)
    MEM_H(0X56, ctx->r2) = 0;
    // 0x80227F54: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80227F58: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80227F5C: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x80227F60: sw          $v1, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r3;
    // 0x80227F64: sw          $a0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r4;
    // 0x80227F68: sw          $a1, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r5;
L_80227F6C:
    // 0x80227F6C: jr          $ra
    // 0x80227F70: nop

    TRACE_RETURN()
    return;
    // 0x80227F70: nop

    // 0x80227F74: nop

    // 0x80227F78: nop

    // 0x80227F7C: nop

;}
RECOMP_FUNC void func_8022A188_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A188: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A18C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A190: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A194: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022A198: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x8022A19C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022A1A0: bne         $v1, $v0, L_8022A1C8
    if (ctx->r3 != ctx->r2) {
        // 0x8022A1A4: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_8022A1C8;
    }
    // 0x8022A1A4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022A1A8: lw          $v1, 0x2C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X2C);
    // 0x8022A1AC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022A1B0: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
    // 0x8022A1B4: lw          $v1, 0x2C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X2C);
    // 0x8022A1B8: addiu       $a1, $zero, 0x3E
    ctx->r5 = ADD32(0, 0X3E);
    // 0x8022A1BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A1C0: jal         0x800616FC
    // 0x8022A1C4: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
    func_800616FC_3CAFC(rdram, ctx);
        goto after_0;
    // 0x8022A1C4: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
    after_0:
L_8022A1C8:
    // 0x8022A1C8: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x8022A1CC: slti        $v0, $v0, 0x20
    ctx->r2 = SIGNED(ctx->r2) < 0X20 ? 1 : 0;
    // 0x8022A1D0: bne         $v0, $zero, L_8022A1F4
    if (ctx->r2 != 0) {
        // 0x8022A1D4: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_8022A1F4;
    }
    // 0x8022A1D4: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022A1D8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022A1DC: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022A1E0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022A1E4: bne         $v0, $zero, L_8022A1F4
    if (ctx->r2 != 0) {
        // 0x8022A1E8: nop
    
            goto L_8022A1F4;
    }
    // 0x8022A1E8: nop

    // 0x8022A1EC: jal         0x800600F8
    // 0x8022A1F0: nop

    func_800600F8_3B4F8(rdram, ctx);
        goto after_1;
    // 0x8022A1F0: nop

    after_1:
L_8022A1F4:
    // 0x8022A1F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022A1F8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A1FC: jr          $ra
    // 0x8022A200: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A200: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80233F24_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233F24: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80233F28: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80233F2C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80233F30: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80233F34: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80233F38: lhu         $v0, 0x6E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6E);
    // 0x80233F3C: lw          $a1, 0x340($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X340);
    // 0x80233F40: lui         $v1, 0xFF
    ctx->r3 = S32(0XFF << 16);
    // 0x80233F44: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x80233F48: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x80233F4C: and         $a0, $a1, $v1
    ctx->r4 = ctx->r5 & ctx->r3;
    // 0x80233F50: beq         $a0, $zero, L_80233F84
    if (ctx->r4 == 0) {
        // 0x80233F54: sh          $v0, 0xB2($s0)
        MEM_H(0XB2, ctx->r16) = ctx->r2;
            goto L_80233F84;
    }
    // 0x80233F54: sh          $v0, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r2;
    // 0x80233F58: lui         $v0, 0x1800
    ctx->r2 = S32(0X1800 << 16);
    // 0x80233F5C: and         $v0, $a1, $v0
    ctx->r2 = ctx->r5 & ctx->r2;
    // 0x80233F60: beq         $v0, $zero, L_80233F84
    if (ctx->r2 == 0) {
        // 0x80233F64: addiu       $v1, $zero, 0x7FFF
        ctx->r3 = ADD32(0, 0X7FFF);
            goto L_80233F84;
    }
    // 0x80233F64: addiu       $v1, $zero, 0x7FFF
    ctx->r3 = ADD32(0, 0X7FFF);
    // 0x80233F68: lhu         $v0, 0x6E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6E);
    // 0x80233F6C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80233F70: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x80233F74: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80233F78: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x80233F7C: jal         0x8002A33C
    // 0x80233F80: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x80233F80: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    after_0:
L_80233F84:
    // 0x80233F84: lh          $v0, 0x6E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6E);
    // 0x80233F88: bgtz        $v0, L_80233FB8
    if (SIGNED(ctx->r2) > 0) {
        // 0x80233F8C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80233FB8;
    }
    // 0x80233F8C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80233F90: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80233F94: andi        $v0, $v0, 0xFFFD
    ctx->r2 = ctx->r2 & 0XFFFD;
    // 0x80233F98: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x80233F9C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80233FA0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80233FA4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80233FA8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80233FAC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80233FB0: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x80233FB4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80233FB8:
    // 0x80233FB8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80233FBC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80233FC0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80233FC4: jr          $ra
    // 0x80233FC8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80233FC8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80233FCC: nop

;}
RECOMP_FUNC void func_80238354_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238354: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80238358: addiu       $v0, $zero, -0x40
    ctx->r2 = ADD32(0, -0X40);
    // 0x8023835C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80238360: sh          $v0, 0x4C($a0)
    MEM_H(0X4C, ctx->r4) = ctx->r2;
    // 0x80238364: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80238368: jal         0x8005044C
    // 0x8023836C: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
    func_8005044C_2B84C(rdram, ctx);
        goto after_0;
    // 0x8023836C: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
    after_0:
    // 0x80238370: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80238374: jr          $ra
    // 0x80238378: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80238378: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023444C_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023444C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80234450: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80234454: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80234458: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023445C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80234460: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x80234464: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80234468: beq         $v1, $v0, L_802344EC
    if (ctx->r3 == ctx->r2) {
        // 0x8023446C: addiu       $s1, $s0, 0x328
        ctx->r17 = ADD32(ctx->r16, 0X328);
            goto L_802344EC;
    }
    // 0x8023446C: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x80234470: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80234474: beql        $v0, $zero, L_8023448C
    if (ctx->r2 == 0) {
        // 0x80234478: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023448C;
    }
    goto skip_0;
    // 0x80234478: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8023447C: beq         $v1, $zero, L_8023449C
    if (ctx->r3 == 0) {
        // 0x80234480: nop
    
            goto L_8023449C;
    }
    // 0x80234480: nop

    // 0x80234484: j           L_8023458C
    // 0x80234488: nop

        goto L_8023458C;
    // 0x80234488: nop

L_8023448C:
    // 0x8023448C: beq         $v1, $v0, L_80234550
    if (ctx->r3 == ctx->r2) {
        // 0x80234490: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80234550;
    }
    // 0x80234490: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234494: j           L_8023458C
    // 0x80234498: nop

        goto L_8023458C;
    // 0x80234498: nop

L_8023449C:
    // 0x8023449C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802344A0: bne         $v0, $zero, L_802344BC
    if (ctx->r2 != 0) {
        // 0x802344A4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802344BC;
    }
    // 0x802344A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802344A8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802344AC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802344B0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x802344B4: j           L_802344E0
    // 0x802344B8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_802344E0;
    // 0x802344B8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_802344BC:
    // 0x802344BC: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x802344C0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802344C4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x802344C8: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x802344CC: jal         0x8004DA90
    // 0x802344D0: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x802344D0: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    after_0:
    // 0x802344D4: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x802344D8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802344DC: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_802344E0:
    // 0x802344E0: lh          $v1, 0xA($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XA);
    // 0x802344E4: j           L_80234578
    // 0x802344E8: addiu       $v0, $zero, 0x258
    ctx->r2 = ADD32(0, 0X258);
        goto L_80234578;
    // 0x802344E8: addiu       $v0, $zero, 0x258
    ctx->r2 = ADD32(0, 0X258);
L_802344EC:
    // 0x802344EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802344F0: addiu       $a1, $zero, 0xC0
    ctx->r5 = ADD32(0, 0XC0);
    // 0x802344F4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802344F8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x802344FC: addiu       $v0, $zero, 0xC0
    ctx->r2 = ADD32(0, 0XC0);
    // 0x80234500: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x80234504: jal         0x8004DA90
    // 0x80234508: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x80234508: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    after_1:
    // 0x8023450C: lh          $v0, 0x332($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X332);
    // 0x80234510: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80234514: xori        $v0, $v0, 0x578
    ctx->r2 = ctx->r2 ^ 0X578;
    // 0x80234518: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8023451C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80234520: beq         $v1, $zero, L_80234534
    if (ctx->r3 == 0) {
        // 0x80234524: nop
    
            goto L_80234534;
    }
    // 0x80234524: nop

    // 0x80234528: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8023452C: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80234530: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_80234534:
    // 0x80234534: lh          $v1, 0x332($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X332);
    // 0x80234538: addiu       $v0, $zero, 0x3E8
    ctx->r2 = ADD32(0, 0X3E8);
    // 0x8023453C: bne         $v1, $v0, L_8023458C
    if (ctx->r3 != ctx->r2) {
        // 0x80234540: nop
    
            goto L_8023458C;
    }
    // 0x80234540: nop

    // 0x80234544: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80234548: j           L_80234588
    // 0x8023454C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
        goto L_80234588;
    // 0x8023454C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
L_80234550:
    // 0x80234550: addiu       $a1, $zero, 0xC0
    ctx->r5 = ADD32(0, 0XC0);
    // 0x80234554: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80234558: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8023455C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80234560: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80234564: addiu       $v0, $zero, 0xC0
    ctx->r2 = ADD32(0, 0XC0);
    // 0x80234568: jal         0x8004DA90
    // 0x8023456C: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x8023456C: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    after_2:
    // 0x80234570: lh          $v1, 0x332($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X332);
    // 0x80234574: addiu       $v0, $zero, 0x44C
    ctx->r2 = ADD32(0, 0X44C);
L_80234578:
    // 0x80234578: bne         $v1, $v0, L_8023458C
    if (ctx->r3 != ctx->r2) {
        // 0x8023457C: nop
    
            goto L_8023458C;
    }
    // 0x8023457C: nop

    // 0x80234580: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80234584: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
L_80234588:
    // 0x80234588: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_8023458C:
    // 0x8023458C: lhu         $v0, 0xA($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XA);
    // 0x80234590: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80234594: sh          $v0, 0xA($s1)
    MEM_H(0XA, ctx->r17) = ctx->r2;
    // 0x80234598: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023459C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802345A0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802345A4: jr          $ra
    // 0x802345A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802345A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022E580_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E580: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E584: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E588: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E58C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022E590: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x8022E594: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022E598: jal         0x8004FA7C
    // 0x8022E59C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x8022E59C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_0:
    // 0x8022E5A0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022E5A4: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x8022E5A8: bne         $v0, $zero, L_8022E5B8
    if (ctx->r2 != 0) {
        // 0x8022E5AC: nop
    
            goto L_8022E5B8;
    }
    // 0x8022E5AC: nop

    // 0x8022E5B0: lhu         $v0, 0x366($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X366);
    // 0x8022E5B4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022E5B8:
    // 0x8022E5B8: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022E5BC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022E5C0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022E5C4: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022E5C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022E5CC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E5D0: jr          $ra
    // 0x8022E5D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E5D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022F588_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F588: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x8022F58C: addiu       $v0, $zero, 0x39
    ctx->r2 = ADD32(0, 0X39);
    // 0x8022F590: beq         $a0, $v0, L_8022F5B4
    if (ctx->r4 == ctx->r2) {
        // 0x8022F594: slti        $v0, $a0, 0x39
        ctx->r2 = SIGNED(ctx->r4) < 0X39 ? 1 : 0;
            goto L_8022F5B4;
    }
    // 0x8022F594: slti        $v0, $a0, 0x39
    ctx->r2 = SIGNED(ctx->r4) < 0X39 ? 1 : 0;
    // 0x8022F598: bne         $v0, $zero, L_8022F5C0
    if (ctx->r2 != 0) {
        // 0x8022F59C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022F5C0;
    }
    // 0x8022F59C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F5A0: slti        $v0, $a0, 0x4E
    ctx->r2 = SIGNED(ctx->r4) < 0X4E ? 1 : 0;
    // 0x8022F5A4: beq         $v0, $zero, L_8022F5BC
    if (ctx->r2 == 0) {
        // 0x8022F5A8: slti        $v0, $a0, 0x4C
        ctx->r2 = SIGNED(ctx->r4) < 0X4C ? 1 : 0;
            goto L_8022F5BC;
    }
    // 0x8022F5A8: slti        $v0, $a0, 0x4C
    ctx->r2 = SIGNED(ctx->r4) < 0X4C ? 1 : 0;
    // 0x8022F5AC: bne         $v0, $zero, L_8022F5C0
    if (ctx->r2 != 0) {
        // 0x8022F5B0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022F5C0;
    }
    // 0x8022F5B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022F5B4:
    // 0x8022F5B4: j           L_8022F5C0
    // 0x8022F5B8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8022F5C0;
    // 0x8022F5B8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8022F5BC:
    // 0x8022F5BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022F5C0:
    // 0x8022F5C0: jr          $ra
    // 0x8022F5C4: nop

    TRACE_RETURN()
    return;
    // 0x8022F5C4: nop

;}
RECOMP_FUNC void func_80240D00_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80240D00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80240D04: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80240D08: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80240D0C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80240D10: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80240D14: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80240D18: lw          $v0, 0x6E00($at)
    ctx->r2 = MEM_W(ctx->r1, 0X6E00);
    // 0x80240D1C: jalr        $v0
    // 0x80240D20: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80240D20: nop

    after_0:
    // 0x80240D24: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80240D28: jr          $ra
    // 0x80240D2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80240D2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802378BC_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802378BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802378C0: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x802378C4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802378C8: lbu         $v0, 0x8($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X8);
    // 0x802378CC: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x802378D0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802378D4: sb          $v0, 0x8($a1)
    MEM_B(0X8, ctx->r5) = ctx->r2;
    // 0x802378D8: jal         0x8002A33C
    // 0x802378DC: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x802378DC: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_0:
    // 0x802378E0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802378E4: jr          $ra
    // 0x802378E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802378E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80239710_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239710: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80239714: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80239718: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023971C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80239720: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80239724: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80239728: jal         0x8009A3B4
    // 0x8023972C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8023972C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80239730: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80239734: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80239738: jal         0x8009A3B4
    // 0x8023973C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8023973C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80239740: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80239744: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80239748: jal         0x8009A3B4
    // 0x8023974C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8023974C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80239750: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80239754: lbu         $v1, 0xAC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XAC);
    // 0x80239758: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023975C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80239760: sb          $v1, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r3;
    // 0x80239764: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80239768: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023976C: lw          $v0, 0x6420($at)
    ctx->r2 = MEM_W(ctx->r1, 0X6420);
    // 0x80239770: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x80239774: addiu       $a1, $a1, -0x3A50
    ctx->r5 = ADD32(ctx->r5, -0X3A50);
    // 0x80239778: jalr        $v0
    // 0x8023977C: addiu       $a2, $s0, 0x440
    ctx->r6 = ADD32(ctx->r16, 0X440);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x8023977C: addiu       $a2, $s0, 0x440
    ctx->r6 = ADD32(ctx->r16, 0X440);
    after_3:
    // 0x80239780: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x80239784: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x80239788: beq         $a1, $v0, L_802397A0
    if (ctx->r5 == ctx->r2) {
        // 0x8023978C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802397A0;
    }
    // 0x8023978C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239790: jal         0x80050294
    // 0x80239794: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_4;
    // 0x80239794: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x80239798: j           L_802397A8
    // 0x8023979C: nop

        goto L_802397A8;
    // 0x8023979C: nop

L_802397A0:
    // 0x802397A0: jal         0x8005044C
    // 0x802397A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_5;
    // 0x802397A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
L_802397A8:
    // 0x802397A8: lh          $v0, 0x16($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X16);
    // 0x802397AC: slti        $v0, $v0, -0x7FF
    ctx->r2 = SIGNED(ctx->r2) < -0X7FF ? 1 : 0;
    // 0x802397B0: bne         $v0, $zero, L_802397C8
    if (ctx->r2 != 0) {
        // 0x802397B4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802397C8;
    }
    // 0x802397B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802397B8: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x802397BC: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x802397C0: jal         0x8003B564
    // 0x802397C4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_6;
    // 0x802397C4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_6:
L_802397C8:
    // 0x802397C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802397CC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802397D0: jr          $ra
    // 0x802397D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802397D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225C90_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225C90: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80225C94: lb          $v0, -0x3BC6($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC6);
    // 0x80225C98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225C9C: slti        $v0, $v0, 0x2
    ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x80225CA0: bne         $v0, $zero, L_80225CB4
    if (ctx->r2 != 0) {
        // 0x80225CA4: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_80225CB4;
    }
    // 0x80225CA4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225CA8: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80225CAC: jal         0x80225DBC
    // 0x80225CB0: addiu       $a0, $a0, 0x30E0
    ctx->r4 = ADD32(ctx->r4, 0X30E0);
    func_80225DBC_ovl5(rdram, ctx);
        goto after_0;
    // 0x80225CB0: addiu       $a0, $a0, 0x30E0
    ctx->r4 = ADD32(ctx->r4, 0X30E0);
    after_0:
L_80225CB4:
    // 0x80225CB4: jal         0x8006036C
    // 0x80225CB8: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    func_8006036C_3B76C(rdram, ctx);
        goto after_1;
    // 0x80225CB8: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    after_1:
    // 0x80225CBC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80225CC0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80225CC4: jr          $ra
    // 0x80225CC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225CC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023FC60_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023FC60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023FC64: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x8023FC68: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8023FC6C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023FC70: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x8023FC74: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8023FC78: sb          $v0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r2;
    // 0x8023FC7C: lbu         $v0, 0xA($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XA);
    // 0x8023FC80: bne         $v0, $zero, L_8023FC8C
    if (ctx->r2 != 0) {
        // 0x8023FC84: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023FC8C;
    }
    // 0x8023FC84: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023FC88: addiu       $v0, $zero, 0x42
    ctx->r2 = ADD32(0, 0X42);
L_8023FC8C:
    // 0x8023FC8C: sb          $v0, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r2;
    // 0x8023FC90: addiu       $a0, $a1, 0x38
    ctx->r4 = ADD32(ctx->r5, 0X38);
    // 0x8023FC94: addiu       $a1, $v1, 0x14
    ctx->r5 = ADD32(ctx->r3, 0X14);
    // 0x8023FC98: jal         0x8009A3B4
    // 0x8023FC9C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8023FC9C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8023FCA0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023FCA4: jr          $ra
    // 0x8023FCA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023FCA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229C60_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229C60: jr          $ra
    // 0x80229C64: nop

    TRACE_RETURN()
    return;
    // 0x80229C64: nop

;}
RECOMP_FUNC void func_8022F774_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F774: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F778: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022F77C: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8022F780: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022F784: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022F788: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022F78C: lw          $v0, 0x5C0C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X5C0C);
    // 0x8022F790: jalr        $v0
    // 0x8022F794: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022F794: nop

    after_0:
    // 0x8022F798: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022F79C: jr          $ra
    // 0x8022F7A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F7A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023DF60_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023DF60: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8023DF64: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8023DF68: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023DF6C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8023DF70: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8023DF74: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8023DF78: lh          $s2, 0x44($s1)
    ctx->r18 = MEM_H(ctx->r17, 0X44);
    // 0x8023DF7C: mult        $s2, $s2
    result = S64(S32(ctx->r18)) * S64(S32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023DF80: mflo        $v0
    ctx->r2 = lo;
    // 0x8023DF84: lh          $s0, 0x48($s1)
    ctx->r16 = MEM_H(ctx->r17, 0X48);
    // 0x8023DF88: nop

    // 0x8023DF8C: mult        $s0, $s0
    result = S64(S32(ctx->r16)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023DF90: mflo        $a0
    ctx->r4 = lo;
    // 0x8023DF94: nop

    // 0x8023DF98: nop

    // 0x8023DF9C: jal         0x80032424
    // 0x8023DFA0: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_80032424_D824(rdram, ctx);
        goto after_0;
    // 0x8023DFA0: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_0:
    // 0x8023DFA4: lh          $a0, 0x46($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X46);
    // 0x8023DFA8: jal         0x80032664
    // 0x8023DFAC: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_80032664_DA64(rdram, ctx);
        goto after_1;
    // 0x8023DFAC: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_1:
    // 0x8023DFB0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8023DFB4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8023DFB8: jal         0x80032664
    // 0x8023DFBC: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    func_80032664_DA64(rdram, ctx);
        goto after_2;
    // 0x8023DFBC: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    after_2:
    // 0x8023DFC0: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8023DFC4: addiu       $s1, $s1, 0x8C
    ctx->r17 = ADD32(ctx->r17, 0X8C);
    // 0x8023DFC8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023DFCC: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8023DFD0: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x8023DFD4: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8023DFD8: sh          $zero, 0x14($sp)
    MEM_H(0X14, ctx->r29) = 0;
    // 0x8023DFDC: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8023DFE0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8023DFE4: jal         0x80031600
    // 0x8023DFE8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80031600_CA00(rdram, ctx);
        goto after_3;
    // 0x8023DFE8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_3:
    // 0x8023DFEC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023DFF0: jal         0x80031DA8
    // 0x8023DFF4: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    func_80031DA8_D1A8(rdram, ctx);
        goto after_4;
    // 0x8023DFF4: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_4:
    // 0x8023DFF8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8023DFFC: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8023E000: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8023E004: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8023E008: jr          $ra
    // 0x8023E00C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8023E00C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80226CE0_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226CE0: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80226CE4: lw          $v0, 0x3310($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3310);
    // 0x80226CE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226CEC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226CF0: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x80226CF4: beq         $v0, $zero, L_80226D18
    if (ctx->r2 == 0) {
        // 0x80226CF8: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80226D18;
    }
    // 0x80226CF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
L_80226CFC:
    // 0x80226CFC: sll         $a0, $s0, 24
    ctx->r4 = S32(ctx->r16 << 24);
    // 0x80226D00: jal         0x80226D28
    // 0x80226D04: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    func_80226D28_ovl5(rdram, ctx);
        goto after_0;
    // 0x80226D04: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    after_0:
    // 0x80226D08: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80226D0C: lw          $v0, 0x3310($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3310);
    // 0x80226D10: bne         $v0, $zero, L_80226CFC
    if (ctx->r2 != 0) {
        // 0x80226D14: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_80226CFC;
    }
    // 0x80226D14: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_80226D18:
    // 0x80226D18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226D1C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226D20: jr          $ra
    // 0x80226D24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226D24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023B500_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B500: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023B504: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023B508: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8023B50C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023B510: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023B514: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023B518: lw          $v0, 0x64A0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X64A0);
    // 0x8023B51C: jalr        $v0
    // 0x8023B520: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8023B520: nop

    after_0:
    // 0x8023B524: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023B528: jr          $ra
    // 0x8023B52C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023B52C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023B970_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B970: addu        $t0, $a0, $zero
    ctx->r8 = ADD32(ctx->r4, 0);
    // 0x8023B974: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023B978: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8023B97C: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x8023B980: addiu       $a1, $a1, 0x6550
    ctx->r5 = ADD32(ctx->r5, 0X6550);
    // 0x8023B984: lui         $a3, 0x8024
    ctx->r7 = S32(0X8024 << 16);
    // 0x8023B988: addiu       $a3, $a3, 0x7528
    ctx->r7 = ADD32(ctx->r7, 0X7528);
    // 0x8023B98C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8023B990: addiu       $v0, $v0, 0x7548
    ctx->r2 = ADD32(ctx->r2, 0X7548);
    // 0x8023B994: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023B998: sw          $v0, 0x7544($at)
    MEM_W(0X7544, ctx->r1) = ctx->r2;
    // 0x8023B99C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023B9A0: sb          $zero, 0x7523($at)
    MEM_B(0X7523, ctx->r1) = 0;
    // 0x8023B9A4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023B9A8: sb          $zero, 0x7522($at)
    MEM_B(0X7522, ctx->r1) = 0;
    // 0x8023B9AC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023B9B0: sh          $zero, 0x7520($at)
    MEM_H(0X7520, ctx->r1) = 0;
L_8023B9B4:
    // 0x8023B9B4: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8023B9B8: lhu         $v1, 0x7520($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X7520);
    // 0x8023B9BC: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x8023B9C0: sllv        $v0, $t1, $a2
    ctx->r2 = S32(ctx->r9 << (ctx->r6 & 31));
    // 0x8023B9C4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8023B9C8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023B9CC: sh          $v1, 0x7520($at)
    MEM_H(0X7520, ctx->r1) = ctx->r3;
    // 0x8023B9D0: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
    // 0x8023B9D4: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x8023B9D8: sw          $v0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r2;
    // 0x8023B9DC: lhu         $v0, 0x8($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X8);
    // 0x8023B9E0: sh          $v0, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r2;
    // 0x8023B9E4: lhu         $v0, 0xA($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0XA);
    // 0x8023B9E8: sh          $v0, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r2;
    // 0x8023B9EC: lhu         $v0, 0xC($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0XC);
    // 0x8023B9F0: sh          $v0, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r2;
    // 0x8023B9F4: lh          $v0, 0x8($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X8);
    // 0x8023B9F8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023B9FC: sw          $v0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r2;
    // 0x8023BA00: lh          $v0, 0xA($a1)
    ctx->r2 = MEM_H(ctx->r5, 0XA);
    // 0x8023BA04: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023BA08: sw          $v0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r2;
    // 0x8023BA0C: lh          $v0, 0xC($a1)
    ctx->r2 = MEM_H(ctx->r5, 0XC);
    // 0x8023BA10: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x8023BA14: sh          $zero, 0x54($a0)
    MEM_H(0X54, ctx->r4) = 0;
    // 0x8023BA18: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023BA1C: sw          $v0, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r2;
    // 0x8023BA20: lhu         $v0, 0xE($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0XE);
    // 0x8023BA24: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8023BA28: sh          $zero, 0x58($a0)
    MEM_H(0X58, ctx->r4) = 0;
    // 0x8023BA2C: sw          $zero, 0x328($a0)
    MEM_W(0X328, ctx->r4) = 0;
    // 0x8023BA30: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
    // 0x8023BA34: slti        $v0, $a2, 0x7
    ctx->r2 = SIGNED(ctx->r6) < 0X7 ? 1 : 0;
    // 0x8023BA38: bne         $v0, $zero, L_8023B9B4
    if (ctx->r2 != 0) {
        // 0x8023BA3C: addiu       $a1, $a1, 0x10
        ctx->r5 = ADD32(ctx->r5, 0X10);
            goto L_8023B9B4;
    }
    // 0x8023BA3C: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x8023BA40: lbu         $v0, 0x8($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X8);
    // 0x8023BA44: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023BA48: jr          $ra
    // 0x8023BA4C: sb          $v0, 0x8($t0)
    MEM_B(0X8, ctx->r8) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x8023BA4C: sb          $v0, 0x8($t0)
    MEM_B(0X8, ctx->r8) = ctx->r2;
;}
RECOMP_FUNC void func_8022F4E0_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F4E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F4E4: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x8022F4E8: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x8022F4EC: beq         $a0, $v0, L_8022F554
    if (ctx->r4 == ctx->r2) {
        // 0x8022F4F0: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_8022F554;
    }
    // 0x8022F4F0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022F4F4: slti        $v0, $a0, 0x2B
    ctx->r2 = SIGNED(ctx->r4) < 0X2B ? 1 : 0;
    // 0x8022F4F8: beql        $v0, $zero, L_8022F518
    if (ctx->r2 == 0) {
        // 0x8022F4FC: addiu       $v0, $zero, 0x50
        ctx->r2 = ADD32(0, 0X50);
            goto L_8022F518;
    }
    goto skip_0;
    // 0x8022F4FC: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    skip_0:
    // 0x8022F500: beq         $a0, $zero, L_8022F54C
    if (ctx->r4 == 0) {
        // 0x8022F504: addiu       $v0, $zero, 0x11
        ctx->r2 = ADD32(0, 0X11);
            goto L_8022F54C;
    }
    // 0x8022F504: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x8022F508: beq         $a0, $v0, L_8022F56C
    if (ctx->r4 == ctx->r2) {
        // 0x8022F50C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022F56C;
    }
    // 0x8022F50C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F510: j           L_8022F56C
    // 0x8022F514: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_8022F56C;
    // 0x8022F514: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_8022F518:
    // 0x8022F518: beq         $a0, $v0, L_8022F54C
    if (ctx->r4 == ctx->r2) {
        // 0x8022F51C: slti        $v0, $a0, 0x51
        ctx->r2 = SIGNED(ctx->r4) < 0X51 ? 1 : 0;
            goto L_8022F54C;
    }
    // 0x8022F51C: slti        $v0, $a0, 0x51
    ctx->r2 = SIGNED(ctx->r4) < 0X51 ? 1 : 0;
    // 0x8022F520: beq         $v0, $zero, L_8022F538
    if (ctx->r2 == 0) {
        // 0x8022F524: addiu       $v0, $zero, 0x39
        ctx->r2 = ADD32(0, 0X39);
            goto L_8022F538;
    }
    // 0x8022F524: addiu       $v0, $zero, 0x39
    ctx->r2 = ADD32(0, 0X39);
    // 0x8022F528: beq         $a0, $v0, L_8022F56C
    if (ctx->r4 == ctx->r2) {
        // 0x8022F52C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022F56C;
    }
    // 0x8022F52C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022F530: j           L_8022F56C
    // 0x8022F534: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_8022F56C;
    // 0x8022F534: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_8022F538:
    // 0x8022F538: addiu       $v0, $zero, 0x53
    ctx->r2 = ADD32(0, 0X53);
    // 0x8022F53C: beq         $a0, $v0, L_8022F55C
    if (ctx->r4 == ctx->r2) {
        // 0x8022F540: nop
    
            goto L_8022F55C;
    }
    // 0x8022F540: nop

    // 0x8022F544: j           L_8022F56C
    // 0x8022F548: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_8022F56C;
    // 0x8022F548: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_8022F54C:
    // 0x8022F54C: j           L_8022F56C
    // 0x8022F550: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8022F56C;
    // 0x8022F550: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8022F554:
    // 0x8022F554: j           L_8022F56C
    // 0x8022F558: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
        goto L_8022F56C;
    // 0x8022F558: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_8022F55C:
    // 0x8022F55C: jal         0x800A3450
    // 0x8022F560: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022F560: nop

    after_0:
    // 0x8022F564: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022F568: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
L_8022F56C:
    // 0x8022F56C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022F570: jr          $ra
    // 0x8022F574: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F574: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80241E08_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80241E08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80241E0C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80241E10: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80241E14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80241E18: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x80241E1C: blez        $v0, L_80241EA4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80241E20: nop
    
            goto L_80241EA4;
    }
    // 0x80241E20: nop

    // 0x80241E24: jal         0x800A3450
    // 0x80241E28: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80241E28: nop

    after_0:
    // 0x80241E2C: lhu         $v1, 0x1C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1C);
    // 0x80241E30: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80241E34: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80241E38: jal         0x800A3450
    // 0x80241E3C: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x80241E3C: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    after_1:
    // 0x80241E40: lhu         $v1, 0x20($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X20);
    // 0x80241E44: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80241E48: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80241E4C: jal         0x800A3450
    // 0x80241E50: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x80241E50: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    after_2:
    // 0x80241E54: lui         $t0, 0xFFFE
    ctx->r8 = S32(0XFFFE << 16);
    // 0x80241E58: lbu         $v1, 0xF($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XF);
    // 0x80241E5C: ori         $t0, $t0, 0xFEFF
    ctx->r8 = ctx->r8 | 0XFEFF;
    // 0x80241E60: lbu         $a3, 0xE($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XE);
    // 0x80241E64: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80241E68: lhu         $a0, 0x1E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X1E);
    // 0x80241E6C: lhu         $a1, 0x24($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X24);
    // 0x80241E70: lw          $a2, 0x18($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X18);
    // 0x80241E74: sll         $v1, $v1, 24
    ctx->r3 = S32(ctx->r3 << 24);
    // 0x80241E78: sra         $v1, $v1, 24
    ctx->r3 = S32(SIGNED(ctx->r3) >> 24);
    // 0x80241E7C: addiu       $a3, $a3, -0x1
    ctx->r7 = ADD32(ctx->r7, -0X1);
    // 0x80241E80: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80241E84: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x80241E88: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x80241E8C: addu        $a2, $a2, $t0
    ctx->r6 = ADD32(ctx->r6, ctx->r8);
    // 0x80241E90: sh          $a0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r4;
    // 0x80241E94: sh          $a1, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r5;
    // 0x80241E98: sw          $a2, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r6;
    // 0x80241E9C: j           L_80241EAC
    // 0x80241EA0: sb          $a3, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r7;
        goto L_80241EAC;
    // 0x80241EA0: sb          $a3, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r7;
L_80241EA4:
    // 0x80241EA4: jal         0x8004F5C4
    // 0x80241EA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_3;
    // 0x80241EA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
L_80241EAC:
    // 0x80241EAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80241EB0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80241EB4: jr          $ra
    // 0x80241EB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80241EB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80241EBC: nop

;}
RECOMP_FUNC void func_80226EF0_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226EF0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80226EF4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226EF8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226EFC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80226F00: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80226F04: lbu         $v1, 0x5($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X5);
    // 0x80226F08: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80226F0C: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x80226F10: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x80226F14: beq         $v0, $zero, L_80227088
    if (ctx->r2 == 0) {
        // 0x80226F18: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80227088;
    }
    // 0x80226F18: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80226F1C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80226F20: addu        $at, $at, $v0
    gpr jr_addend_80226F28 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226F24: lw          $v0, 0x6F70($at)
    ctx->r2 = ADD32(ctx->r1, 0X6F70);
    // 0x80226F28: jr          $v0
    // 0x80226F2C: nop

    switch (jr_addend_80226F28 >> 2) {
        case 0: goto L_80226F30; break;
        case 1: goto L_80226F70; break;
        case 2: goto L_80227004; break;
        case 3: goto L_80227014; break;
        case 4: goto L_80227044; break;
        default: switch_error(__func__, 0x80226F28, 0x80246F70);
    }
    // 0x80226F2C: nop

L_80226F30:
    // 0x80226F30: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80226F34: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80226F38: jal         0x8005F6B4
    // 0x80226F3C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_0;
    // 0x80226F3C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80226F40: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80226F44: addiu       $v0, $v0, 0x3C60
    ctx->r2 = ADD32(ctx->r2, 0X3C60);
    // 0x80226F48: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80226F4C: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x80226F50: lbu         $v1, 0x5($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X5);
    // 0x80226F54: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80226F58: addiu       $v0, $v0, 0x3CAC
    ctx->r2 = ADD32(ctx->r2, 0X3CAC);
    // 0x80226F5C: sw          $v0, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r2;
    // 0x80226F60: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    // 0x80226F64: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80226F68: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80226F6C: sb          $v1, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r3;
L_80226F70:
    // 0x80226F70: jal         0x8006FF84
    // 0x80226F74: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_1;
    // 0x80226F74: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x80226F78: beq         $v0, $zero, L_80227088
    if (ctx->r2 == 0) {
        // 0x80226F7C: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80227088;
    }
    // 0x80226F7C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80226F80: lbu         $v1, 0xBD($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XBD);
    // 0x80226F84: sh          $zero, 0x438($s1)
    MEM_H(0X438, ctx->r17) = 0;
    // 0x80226F88: lh          $a1, 0x438($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X438);
    // 0x80226F8C: sh          $v0, 0x43A($s1)
    MEM_H(0X43A, ctx->r17) = ctx->r2;
    // 0x80226F90: lh          $a2, 0x43A($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X43A);
    // 0x80226F94: addiu       $v0, $zero, -0x2580
    ctx->r2 = ADD32(0, -0X2580);
    // 0x80226F98: sh          $v0, 0x43C($s1)
    MEM_H(0X43C, ctx->r17) = ctx->r2;
    // 0x80226F9C: lh          $a3, 0x43C($s1)
    ctx->r7 = MEM_H(ctx->r17, 0X43C);
    // 0x80226FA0: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80226FA4: addiu       $a0, $a0, 0x3C4C
    ctx->r4 = ADD32(ctx->r4, 0X3C4C);
    // 0x80226FA8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80226FAC: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x80226FB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226FB4: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x80226FB8: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80226FBC: sh          $v0, 0x442($s1)
    MEM_H(0X442, ctx->r17) = ctx->r2;
    // 0x80226FC0: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80226FC4: sh          $zero, 0x440($s1)
    MEM_H(0X440, ctx->r17) = 0;
    // 0x80226FC8: sh          $zero, 0x444($s1)
    MEM_H(0X444, ctx->r17) = 0;
    // 0x80226FCC: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
    // 0x80226FD0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226FD4: sh          $zero, -0xCBE($at)
    MEM_H(-0XCBE, ctx->r1) = 0;
    // 0x80226FD8: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
    // 0x80226FDC: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x80226FE0: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x80226FE4: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x80226FE8: sb          $v1, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r3;
    // 0x80226FEC: sw          $a1, 0x428($s1)
    MEM_W(0X428, ctx->r17) = ctx->r5;
    // 0x80226FF0: sw          $a2, 0x42C($s1)
    MEM_W(0X42C, ctx->r17) = ctx->r6;
    // 0x80226FF4: jal         0x8005FA7C
    // 0x80226FF8: sw          $a3, 0x430($s1)
    MEM_W(0X430, ctx->r17) = ctx->r7;
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_2;
    // 0x80226FF8: sw          $a3, 0x430($s1)
    MEM_W(0X430, ctx->r17) = ctx->r7;
    after_2:
    // 0x80226FFC: j           L_80227034
    // 0x80227000: nop

        goto L_80227034;
    // 0x80227000: nop

L_80227004:
    // 0x80227004: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x80227008: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022700C: j           L_80227034
    // 0x80227010: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
        goto L_80227034;
    // 0x80227010: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_80227014:
    // 0x80227014: lbu         $v1, 0xBD($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XBD);
    // 0x80227018: addiu       $a0, $zero, 0xB0A
    ctx->r4 = ADD32(0, 0XB0A);
    // 0x8022701C: addiu       $v0, $zero, 0x6E
    ctx->r2 = ADD32(0, 0X6E);
    // 0x80227020: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80227024: sh          $v0, -0x3F82($at)
    MEM_H(-0X3F82, ctx->r1) = ctx->r2;
    // 0x80227028: ori         $v1, $v1, 0x20
    ctx->r3 = ctx->r3 | 0X20;
    // 0x8022702C: jal         0x80036B1C
    // 0x80227030: sb          $v1, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r3;
    func_80036B1C_11F1C(rdram, ctx);
        goto after_3;
    // 0x80227030: sb          $v1, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r3;
    after_3:
L_80227034:
    // 0x80227034: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x80227038: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022703C: j           L_80227088
    // 0x80227040: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
        goto L_80227088;
    // 0x80227040: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_80227044:
    // 0x80227044: jal         0x80036B7C
    // 0x80227048: nop

    func_80036B7C_11F7C(rdram, ctx);
        goto after_4;
    // 0x80227048: nop

    after_4:
    // 0x8022704C: beq         $v0, $zero, L_80227088
    if (ctx->r2 == 0) {
        // 0x80227050: nop
    
            goto L_80227088;
    }
    // 0x80227050: nop

    // 0x80227054: jal         0x80060170
    // 0x80227058: nop

    func_80060170_3B570(rdram, ctx);
        goto after_5;
    // 0x80227058: nop

    after_5:
    // 0x8022705C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80227060: addiu       $v0, $v0, 0x3CBC
    ctx->r2 = ADD32(ctx->r2, 0X3CBC);
    // 0x80227064: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80227068: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x8022706C: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x80227070: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80227074: addiu       $v0, $v0, 0x3ED4
    ctx->r2 = ADD32(ctx->r2, 0X3ED4);
    // 0x80227078: sw          $v0, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r2;
    // 0x8022707C: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x80227080: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80227084: sb          $v1, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r3;
L_80227088:
    // 0x80227088: jal         0x8005FB90
    // 0x8022708C: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_6;
    // 0x8022708C: nop

    after_6:
    // 0x80227090: jal         0x80060018
    // 0x80227094: nop

    func_80060018_3B418(rdram, ctx);
        goto after_7;
    // 0x80227094: nop

    after_7:
    // 0x80227098: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022709C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802270A0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802270A4: jr          $ra
    // 0x802270A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802270A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80241680_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80241680: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80241684: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80241688: lb          $v0, 0xD($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XD);
    // 0x8024168C: bne         $v0, $zero, L_802416AC
    if (ctx->r2 != 0) {
        // 0x80241690: nop
    
            goto L_802416AC;
    }
    // 0x80241690: nop

    // 0x80241694: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x80241698: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8024169C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802416A0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802416A4: j           L_802416C0
    // 0x802416A8: lw          $v0, 0x6E70($at)
    ctx->r2 = MEM_W(ctx->r1, 0X6E70);
        goto L_802416C0;
    // 0x802416A8: lw          $v0, 0x6E70($at)
    ctx->r2 = MEM_W(ctx->r1, 0X6E70);
L_802416AC:
    // 0x802416AC: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x802416B0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802416B4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802416B8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802416BC: lw          $v0, 0x6E80($at)
    ctx->r2 = MEM_W(ctx->r1, 0X6E80);
L_802416C0:
    // 0x802416C0: jalr        $v0
    // 0x802416C4: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802416C4: nop

    after_0:
    // 0x802416C8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802416CC: jr          $ra
    // 0x802416D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802416D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022EED0_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EED0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8022EED4: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8022EED8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8022EEDC: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8022EEE0: addiu       $s1, $sp, 0x20
    ctx->r17 = ADD32(ctx->r29, 0X20);
    // 0x8022EEE4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022EEE8: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x8022EEEC: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x8022EEF0: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022EEF4: lhu         $v0, 0x56($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X56);
    // 0x8022EEF8: lbu         $v1, 0xAC($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0XAC);
    // 0x8022EEFC: addiu       $s3, $s2, 0x14
    ctx->r19 = ADD32(ctx->r18, 0X14);
    // 0x8022EF00: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x8022EF04: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x8022EF08: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x8022EF0C: sh          $v0, 0x34C($s2)
    MEM_H(0X34C, ctx->r18) = ctx->r2;
    // 0x8022EF10: sb          $v1, 0x34A($s2)
    MEM_B(0X34A, ctx->r18) = ctx->r3;
    // 0x8022EF14: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8022EF18: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022EF1C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022EF20: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022EF24: sb          $v0, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = ctx->r2;
    // 0x8022EF28: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022EF2C: sb          $zero, 0x49BA($at)
    MEM_B(0X49BA, ctx->r1) = 0;
    // 0x8022EF30: andi        $v1, $v1, 0xFD
    ctx->r3 = ctx->r3 & 0XFD;
    // 0x8022EF34: jal         0x8009A3B4
    // 0x8022EF38: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022EF38: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x8022EF3C: lh          $v0, 0x14($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X14);
    // 0x8022EF40: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022EF44: lh          $v0, 0x16($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X16);
    // 0x8022EF48: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022EF4C: addiu       $v0, $v0, -0x30
    ctx->r2 = ADD32(ctx->r2, -0X30);
    // 0x8022EF50: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022EF54: lh          $v0, 0x18($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X18);
    // 0x8022EF58: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    // 0x8022EF5C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022EF60: jal         0x8004EC38
    // 0x8022EF64: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_8004EC38_2A038(rdram, ctx);
        goto after_1;
    // 0x8022EF64: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_1:
    // 0x8022EF68: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8022EF6C: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x8022EF70: lw          $a3, 0x435C($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X435C);
    // 0x8022EF74: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x8022EF78: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x8022EF7C: jal         0x80034FCC
    // 0x8022EF80: addiu       $a3, $a3, 0x6C
    ctx->r7 = ADD32(ctx->r7, 0X6C);
    func_80034FCC_103CC(rdram, ctx);
        goto after_2;
    // 0x8022EF80: addiu       $a3, $a3, 0x6C
    ctx->r7 = ADD32(ctx->r7, 0X6C);
    after_2:
    // 0x8022EF84: lbu         $a0, 0x2($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X2);
    // 0x8022EF88: jal         0x8022F578
    // 0x8022EF8C: addiu       $s1, $s2, 0x348
    ctx->r17 = ADD32(ctx->r18, 0X348);
    func_8022F578_ovl5(rdram, ctx);
        goto after_3;
    // 0x8022EF8C: addiu       $s1, $s2, 0x348
    ctx->r17 = ADD32(ctx->r18, 0X348);
    after_3:
    // 0x8022EF90: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8022EF94: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x8022EF98: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022EF9C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x8022EFA0: jal         0x8004F820
    // 0x8022EFA4: sb          $v0, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_4;
    // 0x8022EFA4: sb          $v0, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = ctx->r2;
    after_4:
    // 0x8022EFA8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022EFAC: bgez        $v0, L_8022EFD8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022EFB0: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_8022EFD8;
    }
    // 0x8022EFB0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8022EFB4: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x8022EFB8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022EFBC: jal         0x8004F820
    // 0x8022EFC0: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_5;
    // 0x8022EFC0: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_5:
    // 0x8022EFC4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022EFC8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022EFCC: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8022EFD0: j           L_8022EFF0
    // 0x8022EFD4: srl         $v1, $v0, 3
    ctx->r3 = S32(U32(ctx->r2) >> 3);
        goto L_8022EFF0;
    // 0x8022EFD4: srl         $v1, $v0, 3
    ctx->r3 = S32(U32(ctx->r2) >> 3);
L_8022EFD8:
    // 0x8022EFD8: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x8022EFDC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022EFE0: jal         0x8004F820
    // 0x8022EFE4: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_6;
    // 0x8022EFE4: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_6:
    // 0x8022EFE8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022EFEC: sra         $v1, $v0, 19
    ctx->r3 = S32(SIGNED(ctx->r2) >> 19);
L_8022EFF0:
    // 0x8022EFF0: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x8022EFF4: sh          $v1, 0x6($s1)
    MEM_H(0X6, ctx->r17) = ctx->r3;
    // 0x8022EFF8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022EFFC: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    // 0x8022F000: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022F004: sb          $v0, 0x11B($s2)
    MEM_B(0X11B, ctx->r18) = ctx->r2;
    // 0x8022F008: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x8022F00C: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x8022F010: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8022F014: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022F018: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022F01C: jr          $ra
    // 0x8022F020: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8022F020: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80232C8C_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232C8C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80232C90: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232C94: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232C98: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80232C9C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80232CA0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80232CA4: lb          $a0, 0xD($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XD);
    // 0x80232CA8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80232CAC: beq         $a0, $v0, L_80232CF0
    if (ctx->r4 == ctx->r2) {
        // 0x80232CB0: addiu       $s2, $s0, 0x328
        ctx->r18 = ADD32(ctx->r16, 0X328);
            goto L_80232CF0;
    }
    // 0x80232CB0: addiu       $s2, $s0, 0x328
    ctx->r18 = ADD32(ctx->r16, 0X328);
    // 0x80232CB4: slti        $v0, $a0, 0x2
    ctx->r2 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    // 0x80232CB8: beql        $v0, $zero, L_80232CD0
    if (ctx->r2 == 0) {
        // 0x80232CBC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80232CD0;
    }
    goto skip_0;
    // 0x80232CBC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80232CC0: beq         $a0, $zero, L_80232CE8
    if (ctx->r4 == 0) {
        // 0x80232CC4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80232CE8;
    }
    // 0x80232CC4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80232CC8: j           L_80232E1C
    // 0x80232CCC: nop

        goto L_80232E1C;
    // 0x80232CCC: nop

L_80232CD0:
    // 0x80232CD0: beq         $a0, $v0, L_80232DC4
    if (ctx->r4 == ctx->r2) {
        // 0x80232CD4: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80232DC4;
    }
    // 0x80232CD4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80232CD8: beq         $a0, $v0, L_80232E10
    if (ctx->r4 == ctx->r2) {
        // 0x80232CDC: nop
    
            goto L_80232E10;
    }
    // 0x80232CDC: nop

    // 0x80232CE0: j           L_80232E1C
    // 0x80232CE4: nop

        goto L_80232E1C;
    // 0x80232CE4: nop

L_80232CE8:
    // 0x80232CE8: j           L_80232E1C
    // 0x80232CEC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_80232E1C;
    // 0x80232CEC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80232CF0:
    // 0x80232CF0: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80232CF4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80232CF8: beq         $v1, $a0, L_80232D5C
    if (ctx->r3 == ctx->r4) {
        // 0x80232CFC: sb          $a1, 0xAC($s0)
        MEM_B(0XAC, ctx->r16) = ctx->r5;
            goto L_80232D5C;
    }
    // 0x80232CFC: sb          $a1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r5;
    // 0x80232D00: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80232D04: beql        $v0, $zero, L_80232D1C
    if (ctx->r2 == 0) {
        // 0x80232D08: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80232D1C;
    }
    goto skip_1;
    // 0x80232D08: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_1:
    // 0x80232D0C: beq         $v1, $zero, L_80232D2C
    if (ctx->r3 == 0) {
        // 0x80232D10: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80232D2C;
    }
    // 0x80232D10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232D14: j           L_80232DAC
    // 0x80232D18: nop

        goto L_80232DAC;
    // 0x80232D18: nop

L_80232D1C:
    // 0x80232D1C: beq         $v1, $v0, L_80232D94
    if (ctx->r3 == ctx->r2) {
        // 0x80232D20: addiu       $v0, $zero, 0x80
        ctx->r2 = ADD32(0, 0X80);
            goto L_80232D94;
    }
    // 0x80232D20: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80232D24: j           L_80232DAC
    // 0x80232D28: nop

        goto L_80232DAC;
    // 0x80232D28: nop

L_80232D2C:
    // 0x80232D2C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x80232D30: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80232D34: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80232D38: addiu       $s1, $zero, 0x80
    ctx->r17 = ADD32(0, 0X80);
    // 0x80232D3C: jal         0x8004DA90
    // 0x80232D40: sh          $s1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r17;
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x80232D40: sh          $s1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r17;
    after_0:
    // 0x80232D44: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x80232D48: bgez        $v0, L_80232DAC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80232D4C: nop
    
            goto L_80232DAC;
    }
    // 0x80232D4C: nop

    // 0x80232D50: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80232D54: j           L_80232D88
    // 0x80232D58: sh          $s1, 0x330($s0)
    MEM_H(0X330, ctx->r16) = ctx->r17;
        goto L_80232D88;
    // 0x80232D58: sh          $s1, 0x330($s0)
    MEM_H(0X330, ctx->r16) = ctx->r17;
L_80232D5C:
    // 0x80232D5C: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80232D60: lhu         $v1, 0x330($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X330);
    // 0x80232D64: sb          $a1, 0x365($s0)
    MEM_B(0X365, ctx->r16) = ctx->r5;
    // 0x80232D68: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x80232D6C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80232D70: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80232D74: sh          $v1, 0x330($s0)
    MEM_H(0X330, ctx->r16) = ctx->r3;
    // 0x80232D78: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80232D7C: bne         $v1, $zero, L_80232DAC
    if (ctx->r3 != 0) {
        // 0x80232D80: sh          $v0, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r2;
            goto L_80232DAC;
    }
    // 0x80232D80: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80232D84: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
L_80232D88:
    // 0x80232D88: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232D8C: j           L_80232DAC
    // 0x80232D90: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_80232DAC;
    // 0x80232D90: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80232D94:
    // 0x80232D94: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80232D98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232D9C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x80232DA0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80232DA4: jal         0x8004DA90
    // 0x80232DA8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x80232DA8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
L_80232DAC:
    // 0x80232DAC: lh          $v1, 0xA($s2)
    ctx->r3 = MEM_H(ctx->r18, 0XA);
    // 0x80232DB0: addiu       $v0, $zero, 0x3E8
    ctx->r2 = ADD32(0, 0X3E8);
    // 0x80232DB4: beq         $v1, $v0, L_80232E10
    if (ctx->r3 == ctx->r2) {
        // 0x80232DB8: nop
    
            goto L_80232E10;
    }
    // 0x80232DB8: nop

    // 0x80232DBC: j           L_80232E1C
    // 0x80232DC0: nop

        goto L_80232E1C;
    // 0x80232DC0: nop

L_80232DC4:
    // 0x80232DC4: jal         0x80233934
    // 0x80232DC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80233934_ovl5(rdram, ctx);
        goto after_2;
    // 0x80232DC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80232DCC: lh          $v0, 0x332($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X332);
    // 0x80232DD0: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80232DD4: xori        $v0, $v0, 0x578
    ctx->r2 = ctx->r2 ^ 0X578;
    // 0x80232DD8: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80232DDC: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80232DE0: beq         $v1, $zero, L_80232DF4
    if (ctx->r3 == 0) {
        // 0x80232DE4: nop
    
            goto L_80232DF4;
    }
    // 0x80232DE4: nop

    // 0x80232DE8: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80232DEC: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80232DF0: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_80232DF4:
    // 0x80232DF4: lh          $v1, 0x332($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X332);
    // 0x80232DF8: addiu       $v0, $zero, 0x3E8
    ctx->r2 = ADD32(0, 0X3E8);
    // 0x80232DFC: bne         $v1, $v0, L_80232E1C
    if (ctx->r3 != ctx->r2) {
        // 0x80232E00: nop
    
            goto L_80232E1C;
    }
    // 0x80232E00: nop

    // 0x80232E04: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80232E08: j           L_80232E18
    // 0x80232E0C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
        goto L_80232E18;
    // 0x80232E0C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
L_80232E10:
    // 0x80232E10: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80232E14: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
L_80232E18:
    // 0x80232E18: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_80232E1C:
    // 0x80232E1C: lhu         $v0, 0xA($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XA);
    // 0x80232E20: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232E24: sh          $v0, 0xA($s2)
    MEM_H(0XA, ctx->r18) = ctx->r2;
    // 0x80232E28: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80232E2C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80232E30: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80232E34: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232E38: jr          $ra
    // 0x80232E3C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80232E3C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80240E5C_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80240E5C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80240E60: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80240E64: lui         $s0, 0x801C
    ctx->r16 = S32(0X801C << 16);
    // 0x80240E68: lw          $s0, -0x3A2C($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X3A2C);
    // 0x80240E6C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80240E70: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80240E74: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80240E78: addiu       $s1, $s2, 0x14
    ctx->r17 = ADD32(ctx->r18, 0X14);
    // 0x80240E7C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80240E80: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80240E84: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80240E88: jal         0x8009A3B4
    // 0x80240E8C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80240E8C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x80240E90: addiu       $a0, $s2, 0x1C
    ctx->r4 = ADD32(ctx->r18, 0X1C);
    // 0x80240E94: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80240E98: jal         0x8009A3B4
    // 0x80240E9C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80240E9C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80240EA0: addiu       $a0, $s2, 0xAC
    ctx->r4 = ADD32(ctx->r18, 0XAC);
    // 0x80240EA4: lbu         $v0, 0xC($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XC);
    // 0x80240EA8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80240EAC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80240EB0: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x80240EB4: jal         0x8009A3B4
    // 0x80240EB8: sb          $v0, 0xC($s2)
    MEM_B(0XC, ctx->r18) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80240EB8: sb          $v0, 0xC($s2)
    MEM_B(0XC, ctx->r18) = ctx->r2;
    after_2:
    // 0x80240EBC: lbu         $v0, 0xC($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XC);
    // 0x80240EC0: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80240EC4: beq         $v0, $zero, L_80240ED8
    if (ctx->r2 == 0) {
        // 0x80240EC8: nop
    
            goto L_80240ED8;
    }
    // 0x80240EC8: nop

    // 0x80240ECC: lhu         $v0, 0xAC($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XAC);
    // 0x80240ED0: j           L_80240EE0
    // 0x80240ED4: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
        goto L_80240EE0;
    // 0x80240ED4: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
L_80240ED8:
    // 0x80240ED8: lhu         $v0, 0xAC($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XAC);
    // 0x80240EDC: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
L_80240EE0:
    // 0x80240EE0: sh          $v0, 0xAC($s2)
    MEM_H(0XAC, ctx->r18) = ctx->r2;
    // 0x80240EE4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80240EE8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80240EEC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80240EF0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80240EF4: jr          $ra
    // 0x80240EF8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80240EF8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80240EFC: nop

;}
RECOMP_FUNC void func_802370EC_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802370EC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802370F0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802370F4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802370F8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802370FC: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80237100: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80237104: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80237108: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x8023710C: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80237110: jal         0x8004D5D4
    // 0x80237114: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80237114: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x80237118: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023711C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80237120: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80237124: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80237128: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8023712C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80237130: jal         0x8003E934
    // 0x80237134: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x80237134: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    after_1:
    // 0x80237138: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023713C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80237140: sh          $v0, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r2;
    // 0x80237144: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80237148: sw          $v0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r2;
    // 0x8023714C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80237150: addiu       $v0, $v0, 0x5FDC
    ctx->r2 = ADD32(ctx->r2, 0X5FDC);
    // 0x80237154: sw          $v0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->r2;
    // 0x80237158: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023715C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80237160: sh          $zero, 0x6E($a0)
    MEM_H(0X6E, ctx->r4) = 0;
    // 0x80237164: sh          $zero, 0xB0($a0)
    MEM_H(0XB0, ctx->r4) = 0;
    // 0x80237168: sh          $zero, 0xB2($a0)
    MEM_H(0XB2, ctx->r4) = 0;
    // 0x8023716C: sw          $zero, 0x10($a0)
    MEM_W(0X10, ctx->r4) = 0;
    // 0x80237170: sh          $zero, 0x54($a0)
    MEM_H(0X54, ctx->r4) = 0;
    // 0x80237174: sh          $zero, 0x58($a0)
    MEM_H(0X58, ctx->r4) = 0;
    // 0x80237178: sw          $zero, 0x44($a0)
    MEM_W(0X44, ctx->r4) = 0;
    // 0x8023717C: sw          $zero, 0x48($a0)
    MEM_W(0X48, ctx->r4) = 0;
    // 0x80237180: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
    // 0x80237184: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    // 0x80237188: jal         0x80050294
    // 0x8023718C: sh          $zero, 0xA($a0)
    MEM_H(0XA, ctx->r4) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x8023718C: sh          $zero, 0xA($a0)
    MEM_H(0XA, ctx->r4) = 0;
    after_2:
    // 0x80237190: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80237194: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80237198: jr          $ra
    // 0x8023719C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8023719C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80230818_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230818: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023081C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80230820: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80230824: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80230828: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x8023082C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80230830: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80230834: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x80230838: jal         0x8004DA90
    // 0x8023083C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8023083C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x80230840: jal         0x8003E810
    // 0x80230844: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8003E810_19C10(rdram, ctx);
        goto after_1;
    // 0x80230844: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_1:
    // 0x80230848: bne         $v0, $zero, L_80230864
    if (ctx->r2 != 0) {
        // 0x8023084C: nop
    
            goto L_80230864;
    }
    // 0x8023084C: nop

    // 0x80230850: jal         0x80040F30
    // 0x80230854: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_2;
    // 0x80230854: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80230858: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x8023085C: j           L_80230870
    // 0x80230860: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_80230870;
    // 0x80230860: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80230864:
    // 0x80230864: jal         0x8004F418
    // 0x80230868: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_3;
    // 0x80230868: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8023086C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80230870:
    // 0x80230870: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80230874: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80230878: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023087C: jr          $ra
    // 0x80230880: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80230880: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80230638_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230638: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x8023063C: beq         $a1, $zero, L_8023064C
    if (ctx->r5 == 0) {
        // 0x80230640: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_8023064C;
    }
    // 0x80230640: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80230644: j           L_80230650
    // 0x80230648: sb          $zero, 0x107($a0)
    MEM_B(0X107, ctx->r4) = 0;
        goto L_80230650;
    // 0x80230648: sb          $zero, 0x107($a0)
    MEM_B(0X107, ctx->r4) = 0;
L_8023064C:
    // 0x8023064C: sb          $v0, 0x107($a0)
    MEM_B(0X107, ctx->r4) = ctx->r2;
L_80230650:
    // 0x80230650: jr          $ra
    // 0x80230654: nop

    TRACE_RETURN()
    return;
    // 0x80230654: nop

;}
RECOMP_FUNC void func_80228710_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228710: jr          $ra
    // 0x80228714: nop

    TRACE_RETURN()
    return;
    // 0x80228714: nop

;}
RECOMP_FUNC void func_8023BED8_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023BED8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8023BEDC: addu        $t2, $a0, $zero
    ctx->r10 = ADD32(ctx->r4, 0);
    // 0x8023BEE0: addu        $t3, $zero, $zero
    ctx->r11 = ADD32(0, 0);
    // 0x8023BEE4: addu        $t1, $zero, $zero
    ctx->r9 = ADD32(0, 0);
    // 0x8023BEE8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8023BEEC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023BEF0: lui         $t5, 0x8024
    ctx->r13 = S32(0X8024 << 16);
    // 0x8023BEF4: addiu       $t5, $t5, 0x7528
    ctx->r13 = ADD32(ctx->r13, 0X7528);
    // 0x8023BEF8: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8023BEFC: addiu       $t0, $sp, 0x10
    ctx->r8 = ADD32(ctx->r29, 0X10);
    // 0x8023BF00: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8023BF04: sb          $zero, 0xF($t2)
    MEM_B(0XF, ctx->r10) = 0;
L_8023BF08:
    // 0x8023BF08: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8023BF0C: lhu         $v1, 0x7520($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X7520);
    // 0x8023BF10: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x8023BF14: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023BF18: srav        $v1, $v1, $a0
    ctx->r3 = S32(SIGNED(ctx->r3) >> (ctx->r4 & 31));
    // 0x8023BF1C: andi        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 & 0X1;
    // 0x8023BF20: beq         $v1, $zero, L_8023BF70
    if (ctx->r3 == 0) {
        // 0x8023BF24: sll         $a1, $a0, 2
        ctx->r5 = S32(ctx->r4 << 2);
            goto L_8023BF70;
    }
    // 0x8023BF24: sll         $a1, $a0, 2
    ctx->r5 = S32(ctx->r4 << 2);
    // 0x8023BF28: addu        $v0, $a1, $t5
    ctx->r2 = ADD32(ctx->r5, ctx->r13);
    // 0x8023BF2C: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x8023BF30: lhu         $v0, 0x32C($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X32C);
    // 0x8023BF34: andi        $v0, $v0, 0x400
    ctx->r2 = ctx->r2 & 0X400;
    // 0x8023BF38: beql        $v0, $zero, L_8023BF60
    if (ctx->r2 == 0) {
        // 0x8023BF3C: addiu       $t3, $zero, 0x1
        ctx->r11 = ADD32(0, 0X1);
            goto L_8023BF60;
    }
    goto skip_0;
    // 0x8023BF3C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    skip_0:
    // 0x8023BF40: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x8023BF44: lbu         $v0, 0xF($t2)
    ctx->r2 = MEM_BU(ctx->r10, 0XF);
    // 0x8023BF48: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x8023BF4C: sllv        $v1, $t4, $a0
    ctx->r3 = S32(ctx->r12 << (ctx->r4 & 31));
    // 0x8023BF50: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8023BF54: sb          $v0, 0xF($t2)
    MEM_B(0XF, ctx->r10) = ctx->r2;
    // 0x8023BF58: j           L_8023BF78
    // 0x8023BF5C: addu        $v0, $a1, $t0
    ctx->r2 = ADD32(ctx->r5, ctx->r8);
        goto L_8023BF78;
    // 0x8023BF5C: addu        $v0, $a1, $t0
    ctx->r2 = ADD32(ctx->r5, ctx->r8);
L_8023BF60:
    // 0x8023BF60: lw          $v1, 0x80($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X80);
    // 0x8023BF64: addu        $v0, $a1, $t0
    ctx->r2 = ADD32(ctx->r5, ctx->r8);
    // 0x8023BF68: j           L_8023BF7C
    // 0x8023BF6C: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
        goto L_8023BF7C;
    // 0x8023BF6C: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
L_8023BF70:
    // 0x8023BF70: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x8023BF74: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
L_8023BF78:
    // 0x8023BF78: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
L_8023BF7C:
    // 0x8023BF7C: addiu       $v0, $a2, 0x1
    ctx->r2 = ADD32(ctx->r6, 0X1);
    // 0x8023BF80: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x8023BF84: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023BF88: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023BF8C: slti        $v0, $v0, 0x3
    ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x8023BF90: bne         $v0, $zero, L_8023BF08
    if (ctx->r2 != 0) {
        // 0x8023BF94: sll         $v0, $t1, 16
        ctx->r2 = S32(ctx->r9 << 16);
            goto L_8023BF08;
    }
    // 0x8023BF94: sll         $v0, $t1, 16
    ctx->r2 = S32(ctx->r9 << 16);
    // 0x8023BF98: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023BF9C: slti        $v0, $v0, 0x2
    ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x8023BFA0: beq         $v0, $zero, L_8023C0AC
    if (ctx->r2 == 0) {
        // 0x8023BFA4: addiu       $a2, $zero, 0x3
        ctx->r6 = ADD32(0, 0X3);
            goto L_8023C0AC;
    }
    // 0x8023BFA4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x8023BFA8: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8023BFAC: lhu         $a0, 0x7520($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X7520);
    // 0x8023BFB0: lui         $t1, 0x8024
    ctx->r9 = S32(0X8024 << 16);
    // 0x8023BFB4: addiu       $t1, $t1, 0x7528
    ctx->r9 = ADD32(ctx->r9, 0X7528);
    // 0x8023BFB8: lui         $t0, 0xFFFF
    ctx->r8 = S32(0XFFFF << 16);
    // 0x8023BFBC: lui         $a1, 0x400
    ctx->r5 = S32(0X400 << 16);
    // 0x8023BFC0: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
L_8023BFC4:
    // 0x8023BFC4: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023BFC8: srav        $v0, $a0, $v1
    ctx->r2 = S32(SIGNED(ctx->r4) >> (ctx->r3 & 31));
    // 0x8023BFCC: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8023BFD0: beq         $v0, $zero, L_8023BFF8
    if (ctx->r2 == 0) {
        // 0x8023BFD4: addiu       $v0, $a2, 0x1
        ctx->r2 = ADD32(ctx->r6, 0X1);
            goto L_8023BFF8;
    }
    // 0x8023BFD4: addiu       $v0, $a2, 0x1
    ctx->r2 = ADD32(ctx->r6, 0X1);
    // 0x8023BFD8: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8023BFDC: addu        $v0, $v0, $t1
    ctx->r2 = ADD32(ctx->r2, ctx->r9);
    // 0x8023BFE0: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x8023BFE4: lw          $v0, 0x8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X8);
    // 0x8023BFE8: and         $v0, $v0, $t0
    ctx->r2 = ctx->r2 & ctx->r8;
    // 0x8023BFEC: bnel        $v0, $a1, L_8023BFF4
    if (ctx->r2 != ctx->r5) {
        // 0x8023BFF0: addiu       $a3, $a3, 0x1
        ctx->r7 = ADD32(ctx->r7, 0X1);
            goto L_8023BFF4;
    }
    goto skip_1;
    // 0x8023BFF0: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    skip_1:
L_8023BFF4:
    // 0x8023BFF4: addiu       $v0, $a2, 0x1
    ctx->r2 = ADD32(ctx->r6, 0X1);
L_8023BFF8:
    // 0x8023BFF8: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x8023BFFC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023C000: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023C004: slti        $v0, $v0, 0x7
    ctx->r2 = SIGNED(ctx->r2) < 0X7 ? 1 : 0;
    // 0x8023C008: bne         $v0, $zero, L_8023BFC4
    if (ctx->r2 != 0) {
        // 0x8023C00C: sll         $v0, $a2, 16
        ctx->r2 = S32(ctx->r6 << 16);
            goto L_8023BFC4;
    }
    // 0x8023C00C: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x8023C010: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
    // 0x8023C014: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023C018: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x8023C01C: beq         $v0, $zero, L_8023C0AC
    if (ctx->r2 == 0) {
        // 0x8023C020: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8023C0AC;
    }
    // 0x8023C020: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023C024: bne         $v1, $v0, L_8023C070
    if (ctx->r3 != ctx->r2) {
        // 0x8023C028: addiu       $v1, $sp, 0x10
        ctx->r3 = ADD32(ctx->r29, 0X10);
            goto L_8023C070;
    }
    // 0x8023C028: addiu       $v1, $sp, 0x10
    ctx->r3 = ADD32(ctx->r29, 0X10);
    // 0x8023C02C: lw          $v0, 0x10($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X10);
    // 0x8023C030: lw          $a0, 0x14($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X14);
    // 0x8023C034: sltu        $a0, $a0, $v0
    ctx->r4 = ctx->r4 < ctx->r2 ? 1 : 0;
    // 0x8023C038: xori        $a0, $a0, 0x1
    ctx->r4 = ctx->r4 ^ 0X1;
    // 0x8023C03C: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x8023C040: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023C044: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8023C048: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x8023C04C: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8023C050: bnel        $v0, $zero, L_8023C058
    if (ctx->r2 != 0) {
        // 0x8023C054: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_8023C058;
    }
    goto skip_2;
    // 0x8023C054: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    skip_2:
L_8023C058:
    // 0x8023C058: lbu         $v1, 0xF($t2)
    ctx->r3 = MEM_BU(ctx->r10, 0XF);
    // 0x8023C05C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023C060: sllv        $v0, $v0, $a0
    ctx->r2 = S32(ctx->r2 << (ctx->r4 & 31));
    // 0x8023C064: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8023C068: j           L_8023C0AC
    // 0x8023C06C: sb          $v1, 0xF($t2)
    MEM_B(0XF, ctx->r10) = ctx->r3;
        goto L_8023C0AC;
    // 0x8023C06C: sb          $v1, 0xF($t2)
    MEM_B(0XF, ctx->r10) = ctx->r3;
L_8023C070:
    // 0x8023C070: lw          $a0, 0x10($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X10);
    // 0x8023C074: lw          $v0, 0x14($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X14);
    // 0x8023C078: sltu        $a0, $a0, $v0
    ctx->r4 = ctx->r4 < ctx->r2 ? 1 : 0;
    // 0x8023C07C: xori        $a0, $a0, 0x1
    ctx->r4 = ctx->r4 ^ 0X1;
    // 0x8023C080: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x8023C084: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023C088: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x8023C08C: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x8023C090: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8023C094: bnel        $v0, $zero, L_8023C09C
    if (ctx->r2 != 0) {
        // 0x8023C098: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_8023C09C;
    }
    goto skip_3;
    // 0x8023C098: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    skip_3:
L_8023C09C:
    // 0x8023C09C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023C0A0: sllv        $v0, $v0, $a0
    ctx->r2 = S32(ctx->r2 << (ctx->r4 & 31));
    // 0x8023C0A4: xori        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 ^ 0X7;
    // 0x8023C0A8: sb          $v0, 0xF($t2)
    MEM_B(0XF, ctx->r10) = ctx->r2;
L_8023C0AC:
    // 0x8023C0AC: addu        $v0, $t3, $zero
    ctx->r2 = ADD32(ctx->r11, 0);
    // 0x8023C0B0: beq         $v0, $zero, L_8023C0C8
    if (ctx->r2 == 0) {
        // 0x8023C0B4: nop
    
            goto L_8023C0C8;
    }
    // 0x8023C0B4: nop

    // 0x8023C0B8: jal         0x80049ECC
    // 0x8023C0BC: nop

    func_80049ECC_252CC(rdram, ctx);
        goto after_0;
    // 0x8023C0BC: nop

    after_0:
    // 0x8023C0C0: j           L_8023C0D0
    // 0x8023C0C4: nop

        goto L_8023C0D0;
    // 0x8023C0C4: nop

L_8023C0C8:
    // 0x8023C0C8: jal         0x80049EDC
    // 0x8023C0CC: nop

    func_80049EDC_252DC(rdram, ctx);
        goto after_1;
    // 0x8023C0CC: nop

    after_1:
L_8023C0D0:
    // 0x8023C0D0: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8023C0D4: lbu         $v0, 0x7522($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X7522);
    // 0x8023C0D8: sltiu       $v0, $v0, 0x12
    ctx->r2 = ctx->r2 < 0X12 ? 1 : 0;
    // 0x8023C0DC: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8023C0E0: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x8023C0E4: jr          $ra
    // 0x8023C0E8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8023C0E8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8023C0EC: nop

;}
RECOMP_FUNC void func_802412C4_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802412C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802412C8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802412CC: jal         0x8004F4F8
    // 0x802412D0: nop

    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_0;
    // 0x802412D0: nop

    after_0:
    // 0x802412D4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802412D8: jr          $ra
    // 0x802412DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802412DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A52C_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A52C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A530: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A534: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A538: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022A53C: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x8022A540: addiu       $v0, $zero, 0x1F
    ctx->r2 = ADD32(0, 0X1F);
    // 0x8022A544: bne         $v1, $v0, L_8022A56C
    if (ctx->r3 != ctx->r2) {
        // 0x8022A548: addiu       $v0, $zero, 0x12
        ctx->r2 = ADD32(0, 0X12);
            goto L_8022A56C;
    }
    // 0x8022A548: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x8022A54C: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x8022A550: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022A554: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
    // 0x8022A558: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x8022A55C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x8022A560: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A564: jal         0x800616FC
    // 0x8022A568: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
    func_800616FC_3CAFC(rdram, ctx);
        goto after_0;
    // 0x8022A568: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
    after_0:
L_8022A56C:
    // 0x8022A56C: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x8022A570: slti        $v0, $v0, 0x33
    ctx->r2 = SIGNED(ctx->r2) < 0X33 ? 1 : 0;
    // 0x8022A574: bne         $v0, $zero, L_8022A64C
    if (ctx->r2 != 0) {
        // 0x8022A578: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_8022A64C;
    }
    // 0x8022A578: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022A57C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022A580: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022A584: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022A588: bne         $v0, $zero, L_8022A64C
    if (ctx->r2 != 0) {
        // 0x8022A58C: addiu       $v0, $zero, 0x269
        ctx->r2 = ADD32(0, 0X269);
            goto L_8022A64C;
    }
    // 0x8022A58C: addiu       $v0, $zero, 0x269
    ctx->r2 = ADD32(0, 0X269);
    // 0x8022A590: addiu       $a0, $zero, -0x301
    ctx->r4 = ADD32(0, -0X301);
    // 0x8022A594: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A598: sh          $v0, 0x4DE8($at)
    MEM_H(0X4DE8, ctx->r1) = ctx->r2;
    // 0x8022A59C: addiu       $v0, $zero, 0x382
    ctx->r2 = ADD32(0, 0X382);
    // 0x8022A5A0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A5A4: sh          $v0, 0x4DEC($at)
    MEM_H(0X4DEC, ctx->r1) = ctx->r2;
    // 0x8022A5A8: lui         $v0, 0x269
    ctx->r2 = S32(0X269 << 16);
    // 0x8022A5AC: lui         $a1, 0xFCFF
    ctx->r5 = S32(0XFCFF << 16);
    // 0x8022A5B0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A5B4: sw          $v0, 0x4DD8($at)
    MEM_W(0X4DD8, ctx->r1) = ctx->r2;
    // 0x8022A5B8: lui         $v0, 0x382
    ctx->r2 = S32(0X382 << 16);
    // 0x8022A5BC: addiu       $a2, $zero, 0x800
    ctx->r6 = ADD32(0, 0X800);
    // 0x8022A5C0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A5C4: sw          $v0, 0x4DE0($at)
    MEM_W(0X4DE0, ctx->r1) = ctx->r2;
    // 0x8022A5C8: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8022A5CC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A5D0: sh          $a0, 0x4DEA($at)
    MEM_H(0X4DEA, ctx->r1) = ctx->r4;
    // 0x8022A5D4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A5D8: sw          $a1, 0x4DDC($at)
    MEM_W(0X4DDC, ctx->r1) = ctx->r5;
    // 0x8022A5DC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A5E0: sh          $a2, 0x4DF2($at)
    MEM_H(0X4DF2, ctx->r1) = ctx->r6;
    // 0x8022A5E4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A5E8: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
    // 0x8022A5EC: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x8022A5F0: addiu       $v0, $zero, 0x1A1
    ctx->r2 = ADD32(0, 0X1A1);
    // 0x8022A5F4: sh          $v0, 0x14($v1)
    MEM_H(0X14, ctx->r3) = ctx->r2;
    // 0x8022A5F8: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x8022A5FC: sh          $a0, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r4;
    // 0x8022A600: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x8022A604: addiu       $v0, $zero, 0x385
    ctx->r2 = ADD32(0, 0X385);
    // 0x8022A608: sh          $v0, 0x18($v1)
    MEM_H(0X18, ctx->r3) = ctx->r2;
    // 0x8022A60C: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x8022A610: lui         $v0, 0x1A1
    ctx->r2 = S32(0X1A1 << 16);
    // 0x8022A614: sw          $v0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r2;
    // 0x8022A618: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x8022A61C: sw          $a1, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r5;
    // 0x8022A620: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x8022A624: lui         $v0, 0x385
    ctx->r2 = S32(0X385 << 16);
    // 0x8022A628: sw          $v0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r2;
    // 0x8022A62C: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x8022A630: sh          $a2, 0x56($v0)
    MEM_H(0X56, ctx->r2) = ctx->r6;
    // 0x8022A634: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x8022A638: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022A63C: sb          $v1, 0xE($v0)
    MEM_B(0XE, ctx->r2) = ctx->r3;
    // 0x8022A640: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x8022A644: jal         0x800600F8
    // 0x8022A648: sb          $v1, 0xD($v0)
    MEM_B(0XD, ctx->r2) = ctx->r3;
    func_800600F8_3B4F8(rdram, ctx);
        goto after_1;
    // 0x8022A648: sb          $v1, 0xD($v0)
    MEM_B(0XD, ctx->r2) = ctx->r3;
    after_1:
L_8022A64C:
    // 0x8022A64C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022A650: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A654: jr          $ra
    // 0x8022A658: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A658: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A314_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A314: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A318: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022A31C: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x8022A320: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A324: bne         $v1, $v0, L_8022A340
    if (ctx->r3 != ctx->r2) {
        // 0x8022A328: addiu       $v0, $zero, 0x82
        ctx->r2 = ADD32(0, 0X82);
            goto L_8022A340;
    }
    // 0x8022A328: addiu       $v0, $zero, 0x82
    ctx->r2 = ADD32(0, 0X82);
    // 0x8022A32C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A330: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
    // 0x8022A334: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022A338: jal         0x800616FC
    // 0x8022A33C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_0;
    // 0x8022A33C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
L_8022A340:
    // 0x8022A340: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022A344: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022A348: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022A34C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022A350: bne         $v0, $zero, L_8022A360
    if (ctx->r2 != 0) {
        // 0x8022A354: nop
    
            goto L_8022A360;
    }
    // 0x8022A354: nop

    // 0x8022A358: jal         0x800600F8
    // 0x8022A35C: nop

    func_800600F8_3B4F8(rdram, ctx);
        goto after_1;
    // 0x8022A35C: nop

    after_1:
L_8022A360:
    // 0x8022A360: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022A364: jr          $ra
    // 0x8022A368: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A368: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225380_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225380: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80225384: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80225388: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022538C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80225390: jal         0x80060798
    // 0x80225394: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80060798_3BB98(rdram, ctx);
        goto after_0;
    // 0x80225394: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x80225398: lui         $s0, 0x801C
    ctx->r16 = S32(0X801C << 16);
    // 0x8022539C: addiu       $s0, $s0, -0x3BC6
    ctx->r16 = ADD32(ctx->r16, -0X3BC6);
    // 0x802253A0: lb          $a1, 0x0($s0)
    ctx->r5 = MEM_B(ctx->r16, 0X0);
    // 0x802253A4: lui         $s2, 0x8024
    ctx->r18 = S32(0X8024 << 16);
    // 0x802253A8: addiu       $s2, $s2, 0x30FC
    ctx->r18 = ADD32(ctx->r18, 0X30FC);
    // 0x802253AC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x802253B0: lui         $s1, 0x8024
    ctx->r17 = S32(0X8024 << 16);
    // 0x802253B4: addiu       $s1, $s1, 0x3104
    ctx->r17 = ADD32(ctx->r17, 0X3104);
    // 0x802253B8: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x802253BC: jal         0x8006100C
    // 0x802253C0: addu        $a1, $a1, $s1
    ctx->r5 = ADD32(ctx->r5, ctx->r17);
    func_8006100C_3C40C(rdram, ctx);
        goto after_1;
    // 0x802253C0: addu        $a1, $a1, $s1
    ctx->r5 = ADD32(ctx->r5, ctx->r17);
    after_1:
    // 0x802253C4: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
    // 0x802253C8: bne         $v0, $zero, L_80225404
    if (ctx->r2 != 0) {
        // 0x802253CC: nop
    
            goto L_80225404;
    }
    // 0x802253CC: nop

    // 0x802253D0: jal         0x8006033C
    // 0x802253D4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x802253D4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x802253D8: beq         $v0, $zero, L_802253E8
    if (ctx->r2 == 0) {
        // 0x802253DC: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_802253E8;
    }
    // 0x802253DC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x802253E0: j           L_802253FC
    // 0x802253E4: addiu       $a1, $s1, 0x68
    ctx->r5 = ADD32(ctx->r17, 0X68);
        goto L_802253FC;
    // 0x802253E4: addiu       $a1, $s1, 0x68
    ctx->r5 = ADD32(ctx->r17, 0X68);
L_802253E8:
    // 0x802253E8: jal         0x8006033C
    // 0x802253EC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_8006033C_3B73C(rdram, ctx);
        goto after_3;
    // 0x802253EC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_3:
    // 0x802253F0: beq         $v0, $zero, L_80225404
    if (ctx->r2 == 0) {
        // 0x802253F4: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_80225404;
    }
    // 0x802253F4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x802253F8: addiu       $a1, $s1, 0x60
    ctx->r5 = ADD32(ctx->r17, 0X60);
L_802253FC:
    // 0x802253FC: jal         0x8006100C
    // 0x80225400: nop

    func_8006100C_3C40C(rdram, ctx);
        goto after_4;
    // 0x80225400: nop

    after_4:
L_80225404:
    // 0x80225404: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80225408: sw          $zero, -0x359C($at)
    MEM_W(-0X359C, ctx->r1) = 0;
    // 0x8022540C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80225410: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80225414: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80225418: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022541C: jr          $ra
    // 0x80225420: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80225420: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802310F4_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802310F4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802310F8: lw          $v0, 0x4B34($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4B34);
    // 0x802310FC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80231100: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80231104: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80231108: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8023110C: lui         $s3, 0x8020
    ctx->r19 = S32(0X8020 << 16);
    // 0x80231110: addiu       $s3, $s3, 0x49B0
    ctx->r19 = ADD32(ctx->r19, 0X49B0);
    // 0x80231114: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80231118: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8023111C: bne         $v0, $s1, L_80231200
    if (ctx->r2 != ctx->r17) {
        // 0x80231120: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_80231200;
    }
    // 0x80231120: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231124: addiu       $s0, $s1, 0x14
    ctx->r16 = ADD32(ctx->r17, 0X14);
    // 0x80231128: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023112C: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x80231130: addiu       $s2, $s3, 0x14
    ctx->r18 = ADD32(ctx->r19, 0X14);
    // 0x80231134: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80231138: jal         0x8004F820
    // 0x8023113C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8023113C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_0:
    // 0x80231140: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80231144: bgez        $v0, L_80231170
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80231148: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80231170;
    }
    // 0x80231148: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023114C: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x80231150: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80231154: jal         0x8004F820
    // 0x80231158: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x80231158: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_1:
    // 0x8023115C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80231160: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80231164: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80231168: j           L_80231188
    // 0x8023116C: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_80231188;
    // 0x8023116C: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_80231170:
    // 0x80231170: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x80231174: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80231178: jal         0x8004F820
    // 0x8023117C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x8023117C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x80231180: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80231184: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_80231188:
    // 0x80231188: sh          $v0, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r2;
    // 0x8023118C: lbu         $v0, 0x0($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X0);
    // 0x80231190: lbu         $v1, 0xBD($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0XBD);
    // 0x80231194: sw          $zero, 0x184($s3)
    MEM_W(0X184, ctx->r19) = 0;
    // 0x80231198: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8023119C: ori         $v1, $v1, 0x40
    ctx->r3 = ctx->r3 | 0X40;
    // 0x802311A0: sb          $v0, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r2;
    // 0x802311A4: sb          $v1, 0xBD($s3)
    MEM_B(0XBD, ctx->r19) = ctx->r3;
    // 0x802311A8: lh          $v0, 0x180($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X180);
    // 0x802311AC: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x802311B0: addiu       $s0, $s0, 0x7470
    ctx->r16 = ADD32(ctx->r16, 0X7470);
    // 0x802311B4: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x802311B8: lh          $v0, 0x182($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X182);
    // 0x802311BC: addiu       $v0, $v0, -0x20
    ctx->r2 = ADD32(ctx->r2, -0X20);
    // 0x802311C0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802311C4: sw          $v0, 0x7474($at)
    MEM_W(0X7474, ctx->r1) = ctx->r2;
    // 0x802311C8: lh          $v0, 0x184($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X184);
    // 0x802311CC: addiu       $a0, $s3, 0x14
    ctx->r4 = ADD32(ctx->r19, 0X14);
    // 0x802311D0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802311D4: sw          $v0, 0x7478($at)
    MEM_W(0X7478, ctx->r1) = ctx->r2;
    // 0x802311D8: jal         0x8004EC38
    // 0x802311DC: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8004EC38_2A038(rdram, ctx);
        goto after_3;
    // 0x802311DC: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_3:
    // 0x802311E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802311E4: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x802311E8: lw          $a3, 0x435C($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X435C);
    // 0x802311EC: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x802311F0: jal         0x80034FCC
    // 0x802311F4: addiu       $a2, $v0, 0x800
    ctx->r6 = ADD32(ctx->r2, 0X800);
    func_80034FCC_103CC(rdram, ctx);
        goto after_4;
    // 0x802311F4: addiu       $a2, $v0, 0x800
    ctx->r6 = ADD32(ctx->r2, 0X800);
    after_4:
    // 0x802311F8: j           L_80231204
    // 0x802311FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80231204;
    // 0x802311FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80231200:
    // 0x80231200: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80231204:
    // 0x80231204: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80231208: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8023120C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80231210: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80231214: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231218: jr          $ra
    // 0x8023121C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8023121C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022EEA0_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EEA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022EEA4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022EEA8: lbu         $v0, 0x34B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34B);
    // 0x8022EEAC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022EEB0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022EEB4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022EEB8: lw          $v0, 0x5BD4($at)
    ctx->r2 = MEM_W(ctx->r1, 0X5BD4);
    // 0x8022EEBC: jalr        $v0
    // 0x8022EEC0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022EEC0: nop

    after_0:
    // 0x8022EEC4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022EEC8: jr          $ra
    // 0x8022EECC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022EECC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80236AF4_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236AF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80236AF8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80236AFC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80236B00: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80236B04: lh          $a0, 0x74F0($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X74F0);
    // 0x80236B08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80236B0C: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80236B10: jal         0x8004FA7C
    // 0x80236B14: lh          $a2, 0x64($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X64);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x80236B14: lh          $a2, 0x64($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X64);
    after_0:
    // 0x80236B18: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80236B1C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80236B20: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80236B24: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80236B28: bne         $v0, $zero, L_80236B78
    if (ctx->r2 != 0) {
        // 0x80236B2C: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_80236B78;
    }
    // 0x80236B2C: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80236B30: jal         0x8003516C
    // 0x80236B34: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_1;
    // 0x80236B34: nop

    after_1:
    // 0x80236B38: bne         $v0, $zero, L_80236B78
    if (ctx->r2 != 0) {
        // 0x80236B3C: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80236B78;
    }
    // 0x80236B3C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80236B40: lb          $a3, 0xC($s0)
    ctx->r7 = MEM_B(ctx->r16, 0XC);
    // 0x80236B44: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80236B48: jal         0x800610AC
    // 0x80236B4C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_2;
    // 0x80236B4C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x80236B50: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236B54: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80236B58: jal         0x80050294
    // 0x80236B5C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x80236B5C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x80236B60: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80236B64: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80236B68: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    // 0x80236B6C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80236B70: j           L_80236B80
    // 0x80236B74: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_80236B80;
    // 0x80236B74: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80236B78:
    // 0x80236B78: jal         0x8005044C
    // 0x80236B7C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_4;
    // 0x80236B7C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
L_80236B80:
    // 0x80236B80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80236B84: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80236B88: jr          $ra
    // 0x80236B8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80236B8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229D6C_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229D6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229D70: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229D74: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229D78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80229D7C: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x80229D80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229D84: bne         $v1, $v0, L_80229DA4
    if (ctx->r3 != ctx->r2) {
        // 0x80229D88: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_80229DA4;
    }
    // 0x80229D88: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80229D8C: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x80229D90: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80229D94: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80229D98: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80229D9C: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x80229DA0: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
L_80229DA4:
    // 0x80229DA4: bne         $v1, $v0, L_80229DCC
    if (ctx->r3 != ctx->r2) {
        // 0x80229DA8: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_80229DCC;
    }
    // 0x80229DA8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80229DAC: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x80229DB0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80229DB4: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
    // 0x80229DB8: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x80229DBC: addiu       $a1, $zero, 0x38
    ctx->r5 = ADD32(0, 0X38);
    // 0x80229DC0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229DC4: jal         0x800616FC
    // 0x80229DC8: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
    func_800616FC_3CAFC(rdram, ctx);
        goto after_0;
    // 0x80229DC8: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
    after_0:
L_80229DCC:
    // 0x80229DCC: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x80229DD0: slti        $v0, $v0, 0x20
    ctx->r2 = SIGNED(ctx->r2) < 0X20 ? 1 : 0;
    // 0x80229DD4: bne         $v0, $zero, L_80229DF8
    if (ctx->r2 != 0) {
        // 0x80229DD8: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_80229DF8;
    }
    // 0x80229DD8: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80229DDC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80229DE0: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80229DE4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80229DE8: bne         $v0, $zero, L_80229DF8
    if (ctx->r2 != 0) {
        // 0x80229DEC: nop
    
            goto L_80229DF8;
    }
    // 0x80229DEC: nop

    // 0x80229DF0: jal         0x800600F8
    // 0x80229DF4: nop

    func_800600F8_3B4F8(rdram, ctx);
        goto after_1;
    // 0x80229DF4: nop

    after_1:
L_80229DF8:
    // 0x80229DF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80229DFC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229E00: jr          $ra
    // 0x80229E04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229E04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
