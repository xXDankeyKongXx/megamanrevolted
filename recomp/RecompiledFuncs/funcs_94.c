#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80248CD4_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80248CD4: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80248CD8: lw          $v0, -0x3BC8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3BC8);
    // 0x80248CDC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80248CE0: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x80248CE4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80248CE8: lui         $v1, 0x501
    ctx->r3 = S32(0X501 << 16);
    // 0x80248CEC: bne         $v0, $v1, L_80248D0C
    if (ctx->r2 != ctx->r3) {
        // 0x80248CF0: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_80248D0C;
    }
    // 0x80248CF0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80248CF4: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x80248CF8: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x80248CFC: addiu       $a0, $a0, 0x681
    ctx->r4 = ADD32(ctx->r4, 0X681);
    // 0x80248D00: andi        $v0, $a1, 0xFF
    ctx->r2 = ctx->r5 & 0XFF;
    // 0x80248D04: jal         0x8006036C
    // 0x80248D08: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_8006036C_3B76C(rdram, ctx);
        goto after_0;
    // 0x80248D08: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_0:
L_80248D0C:
    // 0x80248D0C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80248D10: jr          $ra
    // 0x80248D14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80248D14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80248D18: nop

    // 0x80248D1C: nop

;}
RECOMP_FUNC void func_8022EFD4_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EFD4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022EFD8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022EFDC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022EFE0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022EFE4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022EFE8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022EFEC: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x8022EFF0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022EFF4: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x8022EFF8: beq         $v1, $zero, L_8022F014
    if (ctx->r3 == 0) {
        // 0x8022EFFC: addiu       $s2, $s1, 0x348
        ctx->r18 = ADD32(ctx->r17, 0X348);
            goto L_8022F014;
    }
    // 0x8022EFFC: addiu       $s2, $s1, 0x348
    ctx->r18 = ADD32(ctx->r17, 0X348);
    // 0x8022F000: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F004: beq         $v1, $v0, L_8022F038
    if (ctx->r3 == ctx->r2) {
        // 0x8022F008: addiu       $a0, $a0, 0x14
        ctx->r4 = ADD32(ctx->r4, 0X14);
            goto L_8022F038;
    }
    // 0x8022F008: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x8022F00C: j           L_8022F110
    // 0x8022F010: nop

        goto L_8022F110;
    // 0x8022F010: nop

L_8022F014:
    // 0x8022F014: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F018: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x8022F01C: addiu       $v0, $zero, 0xC0
    ctx->r2 = ADD32(0, 0XC0);
    // 0x8022F020: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x8022F024: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x8022F028: sh          $v0, 0x66($s1)
    MEM_H(0X66, ctx->r17) = ctx->r2;
    // 0x8022F02C: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8022F030: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x8022F034: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
L_8022F038:
    // 0x8022F038: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x8022F03C: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x8022F040: jal         0x8004F820
    // 0x8022F044: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022F044: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    after_0:
    // 0x8022F048: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022F04C: lh          $a1, 0x44($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X44);
    // 0x8022F050: lhu         $v1, 0x56($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X56);
    // 0x8022F054: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022F058: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022F05C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022F060: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022F064: jal         0x8004DA90
    // 0x8022F068: sh          $v1, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x8022F068: sh          $v1, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r3;
    after_1:
    // 0x8022F06C: jal         0x80040F30
    // 0x8022F070: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_2;
    // 0x8022F070: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x8022F074: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022F078: jal         0x8003E934
    // 0x8022F07C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_3;
    // 0x8022F07C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_3:
    // 0x8022F080: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x8022F084: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022F088: andi        $s0, $s0, 0xF00
    ctx->r16 = ctx->r16 & 0XF00;
    // 0x8022F08C: bne         $s0, $zero, L_8022F0C8
    if (ctx->r16 != 0) {
        // 0x8022F090: sw          $v0, 0x20($s1)
        MEM_W(0X20, ctx->r17) = ctx->r2;
            goto L_8022F0C8;
    }
    // 0x8022F090: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x8022F094: lh          $a0, 0x16($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X16);
    // 0x8022F098: lh          $v1, 0x2E($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X2E);
    // 0x8022F09C: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x8022F0A0: bltz        $v0, L_8022F0B8
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022F0A4: slti        $v0, $v0, 0x11
        ctx->r2 = SIGNED(ctx->r2) < 0X11 ? 1 : 0;
            goto L_8022F0B8;
    }
    // 0x8022F0A4: slti        $v0, $v0, 0x11
    ctx->r2 = SIGNED(ctx->r2) < 0X11 ? 1 : 0;
    // 0x8022F0A8: beq         $v0, $zero, L_8022F0CC
    if (ctx->r2 == 0) {
        // 0x8022F0AC: addiu       $a0, $s1, 0x14
        ctx->r4 = ADD32(ctx->r17, 0X14);
            goto L_8022F0CC;
    }
    // 0x8022F0AC: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x8022F0B0: j           L_8022F0F8
    // 0x8022F0B4: nop

        goto L_8022F0F8;
    // 0x8022F0B4: nop

L_8022F0B8:
    // 0x8022F0B8: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x8022F0BC: slti        $v0, $v0, 0x11
    ctx->r2 = SIGNED(ctx->r2) < 0X11 ? 1 : 0;
    // 0x8022F0C0: bne         $v0, $zero, L_8022F0F8
    if (ctx->r2 != 0) {
        // 0x8022F0C4: nop
    
            goto L_8022F0F8;
    }
    // 0x8022F0C4: nop

L_8022F0C8:
    // 0x8022F0C8: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
L_8022F0CC:
    // 0x8022F0CC: addiu       $a1, $s1, 0x2C
    ctx->r5 = ADD32(ctx->r17, 0X2C);
    // 0x8022F0D0: jal         0x8009A3B4
    // 0x8022F0D4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8022F0D4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x8022F0D8: addiu       $a0, $s1, 0x1C
    ctx->r4 = ADD32(ctx->r17, 0X1C);
    // 0x8022F0DC: addiu       $a1, $s1, 0x34
    ctx->r5 = ADD32(ctx->r17, 0X34);
    // 0x8022F0E0: jal         0x8009A3B4
    // 0x8022F0E4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8022F0E4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_5:
    // 0x8022F0E8: lhu         $v0, 0x56($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X56);
    // 0x8022F0EC: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022F0F0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022F0F4: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
L_8022F0F8:
    // 0x8022F0F8: lhu         $v0, 0x2($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X2);
    // 0x8022F0FC: andi        $v0, $v0, 0x1FF
    ctx->r2 = ctx->r2 & 0X1FF;
    // 0x8022F100: bne         $v0, $zero, L_8022F110
    if (ctx->r2 != 0) {
        // 0x8022F104: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022F110;
    }
    // 0x8022F104: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F108: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x8022F10C: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
L_8022F110:
    // 0x8022F110: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022F114: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022F118: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022F11C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F120: jr          $ra
    // 0x8022F124: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022F124: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022564C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022564C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80225650: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80225654: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225658: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022565C: addiu       $v0, $v0, 0x49B0
    ctx->r2 = ADD32(ctx->r2, 0X49B0);
    // 0x80225660: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x80225664: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80225668: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022566C: sw          $v0, 0x3320($at)
    MEM_W(0X3320, ctx->r1) = ctx->r2;
    // 0x80225670: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x80225674: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x80225678: beq         $v0, $zero, L_8022596C
    if (ctx->r2 == 0) {
        // 0x8022567C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8022596C;
    }
    // 0x8022567C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80225680: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80225684: addu        $at, $at, $v0
    gpr jr_addend_8022568C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80225688: lw          $v0, 0x2A90($at)
    ctx->r2 = ADD32(ctx->r1, 0X2A90);
    // 0x8022568C: jr          $v0
    // 0x80225690: nop

    switch (jr_addend_8022568C >> 2) {
        case 0: goto L_80225694; break;
        case 1: goto L_8022572C; break;
        case 2: goto L_8022576C; break;
        case 3: goto L_802257F4; break;
        case 4: goto L_8022581C; break;
        case 5: goto L_80225848; break;
        default: switch_error(__func__, 0x8022568C, 0x80252A90);
    }
    // 0x80225690: nop

L_80225694:
    // 0x80225694: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80225698: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022569C: jal         0x8005F6B4
    // 0x802256A0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_0;
    // 0x802256A0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x802256A4: jal         0x8006033C
    // 0x802256A8: addiu       $a0, $zero, 0x641
    ctx->r4 = ADD32(0, 0X641);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x802256A8: addiu       $a0, $zero, 0x641
    ctx->r4 = ADD32(0, 0X641);
    after_1:
    // 0x802256AC: beq         $v0, $zero, L_802256D4
    if (ctx->r2 == 0) {
        // 0x802256B0: nop
    
            goto L_802256D4;
    }
    // 0x802256B0: nop

    // 0x802256B4: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x802256B8: addiu       $v0, $v0, -0x1D10
    ctx->r2 = ADD32(ctx->r2, -0X1D10);
    // 0x802256BC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x802256C0: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x802256C4: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x802256C8: addiu       $v0, $v0, -0x1AAC
    ctx->r2 = ADD32(ctx->r2, -0X1AAC);
    // 0x802256CC: j           L_802256F0
    // 0x802256D0: sw          $v0, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r2;
        goto L_802256F0;
    // 0x802256D0: sw          $v0, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r2;
L_802256D4:
    // 0x802256D4: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x802256D8: addiu       $v0, $v0, -0x1BE0
    ctx->r2 = ADD32(ctx->r2, -0X1BE0);
    // 0x802256DC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x802256E0: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x802256E4: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x802256E8: addiu       $v0, $v0, -0x1A5C
    ctx->r2 = ADD32(ctx->r2, -0X1A5C);
    // 0x802256EC: sw          $v0, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r2;
L_802256F0:
    // 0x802256F0: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x802256F4: lw          $v0, 0x55E8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X55E8);
    // 0x802256F8: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x802256FC: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    // 0x80225700: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80225704: lw          $a0, 0x55EC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X55EC);
    // 0x80225708: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022570C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225710: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x80225714: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80225718: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    // 0x8022571C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80225720: sb          $v1, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r3;
    // 0x80225724: j           L_8022596C
    // 0x80225728: sw          $a0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r4;
        goto L_8022596C;
    // 0x80225728: sw          $a0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r4;
L_8022572C:
    // 0x8022572C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80225730: jal         0x8006FF84
    // 0x80225734: lw          $a0, 0x3320($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3320);
    func_8006FF84_4B384(rdram, ctx);
        goto after_2;
    // 0x80225734: lw          $a0, 0x3320($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3320);
    after_2:
    // 0x80225738: beq         $v0, $zero, L_8022596C
    if (ctx->r2 == 0) {
        // 0x8022573C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022596C;
    }
    // 0x8022573C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80225740: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80225744: lw          $v1, 0x3320($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3320);
    // 0x80225748: sb          $v0, 0x8($v1)
    MEM_B(0X8, ctx->r3) = ctx->r2;
    // 0x8022574C: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80225750: lw          $v0, 0x3320($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3320);
    // 0x80225754: sb          $zero, 0x9($v0)
    MEM_B(0X9, ctx->r2) = 0;
    // 0x80225758: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x8022575C: lw          $v1, 0x3320($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3320);
    // 0x80225760: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80225764: j           L_80225838
    // 0x80225768: sb          $v0, 0x448($v1)
    MEM_B(0X448, ctx->r3) = ctx->r2;
        goto L_80225838;
    // 0x80225768: sb          $v0, 0x448($v1)
    MEM_B(0X448, ctx->r3) = ctx->r2;
L_8022576C:
    // 0x8022576C: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80225770: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225774: beq         $v1, $v0, L_80225838
    if (ctx->r3 == ctx->r2) {
        // 0x80225778: nop
    
            goto L_80225838;
    }
    // 0x80225778: nop

    // 0x8022577C: jal         0x8006072C
    // 0x80225780: nop

    func_8006072C_3BB2C(rdram, ctx);
        goto after_3;
    // 0x80225780: nop

    after_3:
    // 0x80225784: beq         $v0, $zero, L_802257BC
    if (ctx->r2 == 0) {
        // 0x80225788: nop
    
            goto L_802257BC;
    }
    // 0x80225788: nop

    // 0x8022578C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80225790: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80225794: beq         $v0, $zero, L_802257BC
    if (ctx->r2 == 0) {
        // 0x80225798: nop
    
            goto L_802257BC;
    }
    // 0x80225798: nop

    // 0x8022579C: jal         0x80061798
    // 0x802257A0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80061798_3CB98(rdram, ctx);
        goto after_4;
    // 0x802257A0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_4:
    // 0x802257A4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802257A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802257AC: jal         0x80036B00
    // 0x802257B0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80036B00_11F00(rdram, ctx);
        goto after_5;
    // 0x802257B0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x802257B4: j           L_80225838
    // 0x802257B8: nop

        goto L_80225838;
    // 0x802257B8: nop

L_802257BC:
    // 0x802257BC: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x802257C0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802257C4: beq         $v1, $v0, L_802257DC
    if (ctx->r3 == ctx->r2) {
        // 0x802257C8: nop
    
            goto L_802257DC;
    }
    // 0x802257C8: nop

    // 0x802257CC: lw          $v0, 0xA4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA4);
    // 0x802257D0: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x802257D4: jalr        $v0
    // 0x802257D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_6;
    // 0x802257D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
L_802257DC:
    // 0x802257DC: jal         0x8005FB90
    // 0x802257E0: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_7;
    // 0x802257E0: nop

    after_7:
    // 0x802257E4: jal         0x80060018
    // 0x802257E8: nop

    func_80060018_3B418(rdram, ctx);
        goto after_8;
    // 0x802257E8: nop

    after_8:
    // 0x802257EC: j           L_8022596C
    // 0x802257F0: nop

        goto L_8022596C;
    // 0x802257F0: nop

L_802257F4:
    // 0x802257F4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802257F8: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x802257FC: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80225800: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80225804: bne         $v0, $zero, L_8022596C
    if (ctx->r2 != 0) {
        // 0x80225808: nop
    
            goto L_8022596C;
    }
    // 0x80225808: nop

    // 0x8022580C: jal         0x80036B58
    // 0x80225810: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_80036B58_11F58(rdram, ctx);
        goto after_9;
    // 0x80225810: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_9:
    // 0x80225814: j           L_80225838
    // 0x80225818: nop

        goto L_80225838;
    // 0x80225818: nop

L_8022581C:
    // 0x8022581C: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80225820: lbu         $v0, -0x7388($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7388);
    // 0x80225824: bne         $v0, $zero, L_8022596C
    if (ctx->r2 != 0) {
        // 0x80225828: addiu       $a0, $zero, 0x7
        ctx->r4 = ADD32(0, 0X7);
            goto L_8022596C;
    }
    // 0x80225828: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x8022582C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80225830: jal         0x8002A2F8
    // 0x80225834: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_10;
    // 0x80225834: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_10:
L_80225838:
    // 0x80225838: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022583C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225840: j           L_8022596C
    // 0x80225844: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
        goto L_8022596C;
    // 0x80225844: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225848:
    // 0x80225848: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8022584C: lw          $v0, 0x3320($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3320);
    // 0x80225850: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80225854: lui         $t0, 0x738
    ctx->r8 = S32(0X738 << 16);
    // 0x80225858: lui         $a3, 0xFFFF
    ctx->r7 = S32(0XFFFF << 16);
    // 0x8022585C: lui         $a2, 0x12E3
    ctx->r6 = S32(0X12E3 << 16);
    // 0x80225860: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225864: sb          $v1, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r3;
    // 0x80225868: addiu       $v1, $zero, 0x64
    ctx->r3 = ADD32(0, 0X64);
    // 0x8022586C: addiu       $a0, $v0, 0x428
    ctx->r4 = ADD32(ctx->r2, 0X428);
    // 0x80225870: addiu       $a1, $v0, 0x438
    ctx->r5 = ADD32(ctx->r2, 0X438);
    // 0x80225874: sw          $t0, 0x428($v0)
    MEM_W(0X428, ctx->r2) = ctx->r8;
    // 0x80225878: sw          $a3, 0x42C($v0)
    MEM_W(0X42C, ctx->r2) = ctx->r7;
    // 0x8022587C: sw          $a2, 0x430($v0)
    MEM_W(0X430, ctx->r2) = ctx->r6;
    // 0x80225880: sh          $v1, 0x442($v0)
    MEM_H(0X442, ctx->r2) = ctx->r3;
    // 0x80225884: sw          $t0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r8;
    // 0x80225888: sw          $a3, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r7;
    // 0x8022588C: sw          $a2, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r6;
    // 0x80225890: jal         0x8004DD04
    // 0x80225894: sh          $v1, 0x56($v0)
    MEM_H(0X56, ctx->r2) = ctx->r3;
    func_8004DD04_29104(rdram, ctx);
        goto after_11;
    // 0x80225894: sh          $v1, 0x56($v0)
    MEM_H(0X56, ctx->r2) = ctx->r3;
    after_11:
    // 0x80225898: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x8022589C: lw          $a1, 0x3320($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X3320);
    // 0x802258A0: addiu       $a0, $a1, 0x1C
    ctx->r4 = ADD32(ctx->r5, 0X1C);
    // 0x802258A4: jal         0x8004DD04
    // 0x802258A8: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_12;
    // 0x802258A8: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_12:
    // 0x802258AC: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x802258B0: addiu       $s1, $s1, 0x49B9
    ctx->r17 = ADD32(ctx->r17, 0X49B9);
    // 0x802258B4: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x802258B8: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x802258BC: lw          $v1, 0x3320($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3320);
    // 0x802258C0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802258C4: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x802258C8: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x802258CC: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x802258D0: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x802258D4: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x802258D8: lh          $v1, 0x49C4($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X49C4);
    // 0x802258DC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802258E0: lh          $v0, 0x49C6($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X49C6);
    // 0x802258E4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x802258E8: lh          $a0, 0x49C8($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X49C8);
    // 0x802258EC: addiu       $v0, $v0, -0x96
    ctx->r2 = ADD32(ctx->r2, -0X96);
    // 0x802258F0: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x802258F4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x802258F8: jal         0x80034E3C
    // 0x802258FC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80034E3C_1023C(rdram, ctx);
        goto after_13;
    // 0x802258FC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_13:
    // 0x80225900: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x80225904: lh          $a2, 0x4A06($a2)
    ctx->r6 = MEM_H(ctx->r6, 0X4A06);
    // 0x80225908: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8022590C: addiu       $a1, $zero, 0x258
    ctx->r5 = ADD32(0, 0X258);
    // 0x80225910: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80225914: addiu       $a2, $a2, -0x824
    ctx->r6 = ADD32(ctx->r6, -0X824);
    // 0x80225918: jal         0x80034C38
    // 0x8022591C: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_80034C38_10038(rdram, ctx);
        goto after_14;
    // 0x8022591C: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_14:
    // 0x80225920: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80225924: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x80225928: bne         $v0, $zero, L_8022593C
    if (ctx->r2 != 0) {
        // 0x8022592C: sb          $zero, 0x0($s0)
        MEM_B(0X0, ctx->r16) = 0;
            goto L_8022593C;
    }
    // 0x8022592C: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    // 0x80225930: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    // 0x80225934: jal         0x8004F488
    // 0x80225938: nop

    func_8004F488_2A888(rdram, ctx);
        goto after_15;
    // 0x80225938: nop

    after_15:
L_8022593C:
    // 0x8022593C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80225940: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x80225944: bne         $v0, $zero, L_8022595C
    if (ctx->r2 != 0) {
        // 0x80225948: addiu       $v0, $zero, 0x7F
        ctx->r2 = ADD32(0, 0X7F);
            goto L_8022595C;
    }
    // 0x80225948: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x8022594C: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    // 0x80225950: jal         0x8004F418
    // 0x80225954: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_16;
    // 0x80225954: nop

    after_16:
    // 0x80225958: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
L_8022595C:
    // 0x8022595C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80225960: sh          $v0, -0x3F82($at)
    MEM_H(-0X3F82, ctx->r1) = ctx->r2;
    // 0x80225964: jal         0x80070050
    // 0x80225968: addiu       $a0, $s1, -0x9
    ctx->r4 = ADD32(ctx->r17, -0X9);
    func_80070050_4B450(rdram, ctx);
        goto after_17;
    // 0x80225968: addiu       $a0, $s1, -0x9
    ctx->r4 = ADD32(ctx->r17, -0X9);
    after_17:
L_8022596C:
    // 0x8022596C: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x80225970: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80225974: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80225978: jr          $ra
    // 0x8022597C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022597C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8024D31C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024D31C: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x8024D320: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x8024D324: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x8024D328: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x8024D32C: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x8024D330: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x8024D334: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x8024D338: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x8024D33C: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x8024D340: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x8024D344: lbu         $v1, 0x3($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X3);
    // 0x8024D348: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x8024D34C: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8024D350: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8024D354: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8024D358: lui         $s5, 0x8025
    ctx->r21 = S32(0X8025 << 16);
    // 0x8024D35C: addu        $s5, $s5, $v0
    ctx->r21 = ADD32(ctx->r21, ctx->r2);
    // 0x8024D360: lhu         $s5, 0x29C4($s5)
    ctx->r21 = MEM_HU(ctx->r21, 0X29C4);
    // 0x8024D364: addiu       $a2, $sp, 0x1A
    ctx->r6 = ADD32(ctx->r29, 0X1A);
    // 0x8024D368: lui         $s6, 0x8025
    ctx->r22 = S32(0X8025 << 16);
    // 0x8024D36C: addu        $s6, $s6, $v0
    ctx->r22 = ADD32(ctx->r22, ctx->r2);
    // 0x8024D370: lhu         $s6, 0x29C6($s6)
    ctx->r22 = MEM_HU(ctx->r22, 0X29C6);
    // 0x8024D374: jal         0x800874D0
    // 0x8024D378: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    func_800874D0_628D0(rdram, ctx);
        goto after_0;
    // 0x8024D378: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    after_0:
    // 0x8024D37C: lh          $a1, 0x18($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X18);
    // 0x8024D380: lbu         $v0, 0x3($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X3);
    // 0x8024D384: lh          $a2, 0x1A($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X1A);
    // 0x8024D388: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8024D38C: addiu       $a0, $a0, 0x35E0
    ctx->r4 = ADD32(ctx->r4, 0X35E0);
    // 0x8024D390: sll         $a3, $s6, 16
    ctx->r7 = S32(ctx->r22 << 16);
    // 0x8024D394: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x8024D398: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024D39C: lbu         $v1, 0x2A68($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X2A68);
    // 0x8024D3A0: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    // 0x8024D3A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024D3A8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8024D3AC: sll         $v1, $v1, 5
    ctx->r3 = S32(ctx->r3 << 5);
    // 0x8024D3B0: jal         0x80086F94
    // 0x8024D3B4: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    func_80086F94_62394(rdram, ctx);
        goto after_1;
    // 0x8024D3B4: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    after_1:
    // 0x8024D3B8: lbu         $v1, 0x3($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X3);
    // 0x8024D3BC: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8024D3C0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8024D3C4: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8024D3C8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024D3CC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8024D3D0: lhu         $v0, 0x29C8($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X29C8);
    // 0x8024D3D4: beq         $v0, $zero, L_8024D5F0
    if (ctx->r2 == 0) {
        // 0x8024D3D8: addu        $s4, $zero, $zero
        ctx->r20 = ADD32(0, 0);
            goto L_8024D5F0;
    }
    // 0x8024D3D8: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
L_8024D3DC:
    // 0x8024D3DC: bgez        $s6, L_8024D3E8
    if (SIGNED(ctx->r22) >= 0) {
        // 0x8024D3E0: addu        $v0, $s6, $zero
        ctx->r2 = ADD32(ctx->r22, 0);
            goto L_8024D3E8;
    }
    // 0x8024D3E0: addu        $v0, $s6, $zero
    ctx->r2 = ADD32(ctx->r22, 0);
    // 0x8024D3E4: addiu       $v0, $s6, 0xF
    ctx->r2 = ADD32(ctx->r22, 0XF);
L_8024D3E8:
    // 0x8024D3E8: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x8024D3EC: slt         $v0, $s4, $v0
    ctx->r2 = SIGNED(ctx->r20) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8024D3F0: beq         $v0, $zero, L_8024D6AC
    if (ctx->r2 == 0) {
        // 0x8024D3F4: addiu       $a1, $sp, 0x20
        ctx->r5 = ADD32(ctx->r29, 0X20);
            goto L_8024D6AC;
    }
    // 0x8024D3F4: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8024D3F8: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    // 0x8024D3FC: lh          $v0, 0x14($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X14);
    // 0x8024D400: lh          $a0, 0x16($s3)
    ctx->r4 = MEM_H(ctx->r19, 0X16);
    // 0x8024D404: sll         $s0, $s4, 4
    ctx->r16 = S32(ctx->r20 << 4);
    // 0x8024D408: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x8024D40C: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x8024D410: jal         0x800874D0
    // 0x8024D414: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_800874D0_628D0(rdram, ctx);
        goto after_2;
    // 0x8024D414: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_2:
    // 0x8024D418: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x8024D41C: jal         0x80087248
    // 0x8024D420: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_80087248_62648(rdram, ctx);
        goto after_3;
    // 0x8024D420: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_3:
    // 0x8024D424: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8024D428: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8024D42C: lh          $v0, 0x18($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X18);
    // 0x8024D430: lh          $a0, 0x1A($s3)
    ctx->r4 = MEM_H(ctx->r19, 0X1A);
    // 0x8024D434: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    // 0x8024D438: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x8024D43C: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x8024D440: jal         0x800874D0
    // 0x8024D444: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_800874D0_628D0(rdram, ctx);
        goto after_4;
    // 0x8024D444: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_4:
    // 0x8024D448: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x8024D44C: jal         0x80087248
    // 0x8024D450: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_80087248_62648(rdram, ctx);
        goto after_5;
    // 0x8024D450: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_5:
    // 0x8024D454: addu        $v1, $s5, $zero
    ctx->r3 = ADD32(ctx->r21, 0);
    // 0x8024D458: bgez        $s5, L_8024D464
    if (SIGNED(ctx->r21) >= 0) {
        // 0x8024D45C: addu        $s2, $v0, $zero
        ctx->r18 = ADD32(ctx->r2, 0);
            goto L_8024D464;
    }
    // 0x8024D45C: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x8024D460: addiu       $v1, $s5, 0xFF
    ctx->r3 = ADD32(ctx->r21, 0XFF);
L_8024D464:
    // 0x8024D464: addu        $a0, $s5, $s0
    ctx->r4 = ADD32(ctx->r21, ctx->r16);
    // 0x8024D468: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8024D46C: jal         0x800874D0
    // 0x8024D470: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    func_800874D0_628D0(rdram, ctx);
        goto after_6;
    // 0x8024D470: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    after_6:
    // 0x8024D474: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x8024D478: jal         0x80087248
    // 0x8024D47C: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_80087248_62648(rdram, ctx);
        goto after_7;
    // 0x8024D47C: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_7:
    // 0x8024D480: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8024D484: sltiu       $v0, $s1, 0x1
    ctx->r2 = ctx->r17 < 0X1 ? 1 : 0;
    // 0x8024D488: sltiu       $v1, $s2, 0x1
    ctx->r3 = ctx->r18 < 0X1 ? 1 : 0;
    // 0x8024D48C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8024D490: bnel        $v0, $zero, L_8024D3DC
    if (ctx->r2 != 0) {
        // 0x8024D494: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_8024D3DC;
    }
    goto skip_0;
    // 0x8024D494: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    skip_0:
    // 0x8024D498: beq         $a1, $zero, L_8024D5E8
    if (ctx->r5 == 0) {
        // 0x8024D49C: addu        $t7, $zero, $zero
        ctx->r15 = ADD32(0, 0);
            goto L_8024D5E8;
    }
    // 0x8024D49C: addu        $t7, $zero, $zero
    ctx->r15 = ADD32(0, 0);
    // 0x8024D4A0: addu        $t6, $a1, $zero
    ctx->r14 = ADD32(ctx->r5, 0);
    // 0x8024D4A4: addu        $t5, $s2, $zero
    ctx->r13 = ADD32(ctx->r18, 0);
    // 0x8024D4A8: addu        $t4, $s1, $zero
    ctx->r12 = ADD32(ctx->r17, 0);
L_8024D4AC:
    // 0x8024D4AC: lhu         $t1, 0x0($t4)
    ctx->r9 = MEM_HU(ctx->r12, 0X0);
    // 0x8024D4B0: lhu         $v1, 0x0($t5)
    ctx->r3 = MEM_HU(ctx->r13, 0X0);
    // 0x8024D4B4: lb          $t3, 0xD($s3)
    ctx->r11 = MEM_B(ctx->r19, 0XD);
    // 0x8024D4B8: andi        $a2, $t1, 0xFFFF
    ctx->r6 = ctx->r9 & 0XFFFF;
    // 0x8024D4BC: srl         $t2, $a2, 11
    ctx->r10 = S32(U32(ctx->r6) >> 11);
    // 0x8024D4C0: srl         $a3, $v1, 11
    ctx->r7 = S32(U32(ctx->r3) >> 11);
    // 0x8024D4C4: subu        $a3, $a3, $t2
    ctx->r7 = SUB32(ctx->r7, ctx->r10);
    // 0x8024D4C8: mult        $a3, $t3
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8024D4CC: mflo        $a3
    ctx->r7 = lo;
    // 0x8024D4D0: lb          $a1, 0xC($s3)
    ctx->r5 = MEM_B(ctx->r19, 0XC);
    // 0x8024D4D4: nop

    // 0x8024D4D8: div         $zero, $a3, $a1
    lo = S32(S64(S32(ctx->r7)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r7)) % S64(S32(ctx->r5)));
    // 0x8024D4DC: bne         $a1, $zero, L_8024D4E8
    if (ctx->r5 != 0) {
        // 0x8024D4E0: nop
    
            goto L_8024D4E8;
    }
    // 0x8024D4E0: nop

    // 0x8024D4E4: break       7
    do_break(2149897444);
L_8024D4E8:
    // 0x8024D4E8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8024D4EC: bne         $a1, $at, L_8024D500
    if (ctx->r5 != ctx->r1) {
        // 0x8024D4F0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8024D500;
    }
    // 0x8024D4F0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8024D4F4: bne         $a3, $at, L_8024D500
    if (ctx->r7 != ctx->r1) {
        // 0x8024D4F8: nop
    
            goto L_8024D500;
    }
    // 0x8024D4F8: nop

    // 0x8024D4FC: break       6
    do_break(2149897468);
L_8024D500:
    // 0x8024D500: mflo        $a3
    ctx->r7 = lo;
    // 0x8024D504: sra         $t0, $a2, 6
    ctx->r8 = S32(SIGNED(ctx->r6) >> 6);
    // 0x8024D508: andi        $t0, $t0, 0x1F
    ctx->r8 = ctx->r8 & 0X1F;
    // 0x8024D50C: sra         $v0, $v1, 6
    ctx->r2 = S32(SIGNED(ctx->r3) >> 6);
    // 0x8024D510: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x8024D514: subu        $v0, $v0, $t0
    ctx->r2 = SUB32(ctx->r2, ctx->r8);
    // 0x8024D518: mult        $v0, $t3
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8024D51C: mflo        $v0
    ctx->r2 = lo;
    // 0x8024D520: nop

    // 0x8024D524: nop

    // 0x8024D528: div         $zero, $v0, $a1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r5)));
    // 0x8024D52C: bne         $a1, $zero, L_8024D538
    if (ctx->r5 != 0) {
        // 0x8024D530: nop
    
            goto L_8024D538;
    }
    // 0x8024D530: nop

    // 0x8024D534: break       7
    do_break(2149897524);
L_8024D538:
    // 0x8024D538: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8024D53C: bne         $a1, $at, L_8024D550
    if (ctx->r5 != ctx->r1) {
        // 0x8024D540: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8024D550;
    }
    // 0x8024D540: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8024D544: bne         $v0, $at, L_8024D550
    if (ctx->r2 != ctx->r1) {
        // 0x8024D548: nop
    
            goto L_8024D550;
    }
    // 0x8024D548: nop

    // 0x8024D54C: break       6
    do_break(2149897548);
L_8024D550:
    // 0x8024D550: mflo        $v0
    ctx->r2 = lo;
    // 0x8024D554: sra         $a2, $a2, 1
    ctx->r6 = S32(SIGNED(ctx->r6) >> 1);
    // 0x8024D558: andi        $a2, $a2, 0x1F
    ctx->r6 = ctx->r6 & 0X1F;
    // 0x8024D55C: sra         $v1, $v1, 1
    ctx->r3 = S32(SIGNED(ctx->r3) >> 1);
    // 0x8024D560: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x8024D564: subu        $v1, $v1, $a2
    ctx->r3 = SUB32(ctx->r3, ctx->r6);
    // 0x8024D568: mult        $v1, $t3
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8024D56C: mflo        $v1
    ctx->r3 = lo;
    // 0x8024D570: nop

    // 0x8024D574: nop

    // 0x8024D578: div         $zero, $v1, $a1
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r5)));
    // 0x8024D57C: bne         $a1, $zero, L_8024D588
    if (ctx->r5 != 0) {
        // 0x8024D580: nop
    
            goto L_8024D588;
    }
    // 0x8024D580: nop

    // 0x8024D584: break       7
    do_break(2149897604);
L_8024D588:
    // 0x8024D588: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8024D58C: bne         $a1, $at, L_8024D5A0
    if (ctx->r5 != ctx->r1) {
        // 0x8024D590: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8024D5A0;
    }
    // 0x8024D590: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8024D594: bne         $v1, $at, L_8024D5A0
    if (ctx->r3 != ctx->r1) {
        // 0x8024D598: nop
    
            goto L_8024D5A0;
    }
    // 0x8024D598: nop

    // 0x8024D59C: break       6
    do_break(2149897628);
L_8024D5A0:
    // 0x8024D5A0: mflo        $v1
    ctx->r3 = lo;
    // 0x8024D5A4: addiu       $t5, $t5, 0x2
    ctx->r13 = ADD32(ctx->r13, 0X2);
    // 0x8024D5A8: addiu       $t4, $t4, 0x2
    ctx->r12 = ADD32(ctx->r12, 0X2);
    // 0x8024D5AC: addiu       $t7, $t7, 0x1
    ctx->r15 = ADD32(ctx->r15, 0X1);
    // 0x8024D5B0: andi        $t1, $t1, 0x1
    ctx->r9 = ctx->r9 & 0X1;
    // 0x8024D5B4: addu        $t2, $t2, $a3
    ctx->r10 = ADD32(ctx->r10, ctx->r7);
    // 0x8024D5B8: sll         $t2, $t2, 11
    ctx->r10 = S32(ctx->r10 << 11);
    // 0x8024D5BC: or          $t1, $t1, $t2
    ctx->r9 = ctx->r9 | ctx->r10;
    // 0x8024D5C0: addu        $t0, $t0, $v0
    ctx->r8 = ADD32(ctx->r8, ctx->r2);
    // 0x8024D5C4: sll         $t0, $t0, 6
    ctx->r8 = S32(ctx->r8 << 6);
    // 0x8024D5C8: or          $t1, $t1, $t0
    ctx->r9 = ctx->r9 | ctx->r8;
    // 0x8024D5CC: slti        $v0, $t7, 0x10
    ctx->r2 = SIGNED(ctx->r15) < 0X10 ? 1 : 0;
    // 0x8024D5D0: addu        $a2, $a2, $v1
    ctx->r6 = ADD32(ctx->r6, ctx->r3);
    // 0x8024D5D4: sll         $a2, $a2, 1
    ctx->r6 = S32(ctx->r6 << 1);
    // 0x8024D5D8: or          $t1, $t1, $a2
    ctx->r9 = ctx->r9 | ctx->r6;
    // 0x8024D5DC: sh          $t1, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r9;
    // 0x8024D5E0: bne         $v0, $zero, L_8024D4AC
    if (ctx->r2 != 0) {
        // 0x8024D5E4: addiu       $t6, $t6, 0x2
        ctx->r14 = ADD32(ctx->r14, 0X2);
            goto L_8024D4AC;
    }
    // 0x8024D5E4: addiu       $t6, $t6, 0x2
    ctx->r14 = ADD32(ctx->r14, 0X2);
L_8024D5E8:
    // 0x8024D5E8: j           L_8024D3DC
    // 0x8024D5EC: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
        goto L_8024D3DC;
    // 0x8024D5EC: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_8024D5F0:
    // 0x8024D5F0: lb          $v0, 0xD($s3)
    ctx->r2 = MEM_B(ctx->r19, 0XD);
    // 0x8024D5F4: bne         $v0, $zero, L_8024D6AC
    if (ctx->r2 != 0) {
        // 0x8024D5F8: nop
    
            goto L_8024D6AC;
    }
    // 0x8024D5F8: nop

L_8024D5FC:
    // 0x8024D5FC: addu        $v0, $s6, $zero
    ctx->r2 = ADD32(ctx->r22, 0);
    // 0x8024D600: bltzl       $v0, L_8024D608
    if (SIGNED(ctx->r2) < 0) {
        // 0x8024D604: addiu       $v0, $v0, 0xF
        ctx->r2 = ADD32(ctx->r2, 0XF);
            goto L_8024D608;
    }
    goto skip_1;
    // 0x8024D604: addiu       $v0, $v0, 0xF
    ctx->r2 = ADD32(ctx->r2, 0XF);
    skip_1:
L_8024D608:
    // 0x8024D608: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x8024D60C: slt         $v0, $s4, $v0
    ctx->r2 = SIGNED(ctx->r20) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8024D610: beq         $v0, $zero, L_8024D6AC
    if (ctx->r2 == 0) {
        // 0x8024D614: addiu       $a1, $sp, 0x20
        ctx->r5 = ADD32(ctx->r29, 0X20);
            goto L_8024D6AC;
    }
    // 0x8024D614: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8024D618: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    // 0x8024D61C: lh          $v0, 0x14($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X14);
    // 0x8024D620: lh          $a0, 0x16($s3)
    ctx->r4 = MEM_H(ctx->r19, 0X16);
    // 0x8024D624: sll         $s0, $s4, 4
    ctx->r16 = S32(ctx->r20 << 4);
    // 0x8024D628: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x8024D62C: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x8024D630: jal         0x800874D0
    // 0x8024D634: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_800874D0_628D0(rdram, ctx);
        goto after_8;
    // 0x8024D634: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_8:
    // 0x8024D638: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x8024D63C: jal         0x80087248
    // 0x8024D640: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_80087248_62648(rdram, ctx);
        goto after_9;
    // 0x8024D640: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_9:
    // 0x8024D644: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8024D648: bgez        $s5, L_8024D654
    if (SIGNED(ctx->r21) >= 0) {
        // 0x8024D64C: addu        $v0, $s5, $zero
        ctx->r2 = ADD32(ctx->r21, 0);
            goto L_8024D654;
    }
    // 0x8024D64C: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
    // 0x8024D650: addiu       $v0, $s5, 0xFF
    ctx->r2 = ADD32(ctx->r21, 0XFF);
L_8024D654:
    // 0x8024D654: sra         $v0, $v0, 8
    ctx->r2 = S32(SIGNED(ctx->r2) >> 8);
    // 0x8024D658: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8024D65C: subu        $v1, $s5, $v0
    ctx->r3 = SUB32(ctx->r21, ctx->r2);
    // 0x8024D660: addu        $a0, $s0, $v1
    ctx->r4 = ADD32(ctx->r16, ctx->r3);
    // 0x8024D664: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8024D668: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8024D66C: jal         0x800874D0
    // 0x8024D670: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    func_800874D0_628D0(rdram, ctx);
        goto after_10;
    // 0x8024D670: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    after_10:
    // 0x8024D674: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x8024D678: jal         0x80087248
    // 0x8024D67C: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_80087248_62648(rdram, ctx);
        goto after_11;
    // 0x8024D67C: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_11:
    // 0x8024D680: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8024D684: sltiu       $v0, $s1, 0x1
    ctx->r2 = ctx->r17 < 0X1 ? 1 : 0;
    // 0x8024D688: sltiu       $v1, $a1, 0x1
    ctx->r3 = ctx->r5 < 0X1 ? 1 : 0;
    // 0x8024D68C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8024D690: bnel        $v0, $zero, L_8024D5FC
    if (ctx->r2 != 0) {
        // 0x8024D694: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_8024D5FC;
    }
    goto skip_2;
    // 0x8024D694: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    skip_2:
    // 0x8024D698: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8024D69C: jal         0x80099F90
    // 0x8024D6A0: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    bcopy_recomp(rdram, ctx);
        goto after_12;
    // 0x8024D6A0: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_12:
    // 0x8024D6A4: j           L_8024D5FC
    // 0x8024D6A8: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
        goto L_8024D5FC;
    // 0x8024D6A8: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_8024D6AC:
    // 0x8024D6AC: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x8024D6B0: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x8024D6B4: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x8024D6B8: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x8024D6BC: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x8024D6C0: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x8024D6C4: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x8024D6C8: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x8024D6CC: jr          $ra
    // 0x8024D6D0: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    TRACE_RETURN()
    return;
    // 0x8024D6D0: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_8022D114_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D114: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022D118: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022D11C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D120: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022D124: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022D128: lw          $v0, 0x35C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X35C);
    // 0x8022D12C: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x8022D130: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022D134: beq         $v0, $zero, L_8022D140
    if (ctx->r2 == 0) {
        // 0x8022D138: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_8022D140;
    }
    // 0x8022D138: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022D13C: sh          $zero, 0x350($s0)
    MEM_H(0X350, ctx->r16) = 0;
L_8022D140:
    // 0x8022D140: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022D144: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x8022D148: beq         $v0, $zero, L_8022D340
    if (ctx->r2 == 0) {
        // 0x8022D14C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8022D340;
    }
    // 0x8022D14C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022D150: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022D154: addu        $at, $at, $v0
    gpr jr_addend_8022D15C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022D158: lw          $v0, 0x2DA0($at)
    ctx->r2 = ADD32(ctx->r1, 0X2DA0);
    // 0x8022D15C: jr          $v0
    // 0x8022D160: nop

    switch (jr_addend_8022D15C >> 2) {
        case 0: goto L_8022D164; break;
        case 1: goto L_8022D17C; break;
        case 2: goto L_8022D1CC; break;
        case 3: goto L_8022D264; break;
        case 4: goto L_8022D31C; break;
        default: switch_error(__func__, 0x8022D15C, 0x80252DA0);
    }
    // 0x8022D160: nop

L_8022D164:
    // 0x8022D164: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x8022D168: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022D16C: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
    // 0x8022D170: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022D174: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D178: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022D17C:
    // 0x8022D17C: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022D180: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022D184: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022D188: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D18C: bgez        $v0, L_8022D340
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022D190: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022D340;
    }
    // 0x8022D190: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022D194: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022D198: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x8022D19C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022D1A0: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x8022D1A4: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022D1A8: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022D1AC: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8022D1B0: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8022D1B4: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x8022D1B8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D1BC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022D1C0: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8022D1C4: lbu         $v0, 0xA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XA);
    // 0x8022D1C8: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
L_8022D1CC:
    // 0x8022D1CC: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022D1D0: lw          $v1, 0x14($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X14);
    // 0x8022D1D4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022D1D8: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022D1DC: lui         $v0, 0x200
    ctx->r2 = S32(0X200 << 16);
    // 0x8022D1E0: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8022D1E4: bnel        $v1, $zero, L_8022D1EC
    if (ctx->r3 != 0) {
        // 0x8022D1E8: sh          $zero, 0x44($s0)
        MEM_H(0X44, ctx->r16) = 0;
            goto L_8022D1EC;
    }
    goto skip_0;
    // 0x8022D1E8: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    skip_0:
L_8022D1EC:
    // 0x8022D1EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D1F0: lhu         $a1, 0x44($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X44);
    // 0x8022D1F4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022D1F8: lhu         $v1, 0x4($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X4);
    // 0x8022D1FC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022D200: sll         $a1, $a1, 20
    ctx->r5 = S32(ctx->r5 << 20);
    // 0x8022D204: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8022D208: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022D20C: sll         $a2, $v0, 22
    ctx->r6 = S32(ctx->r2 << 22);
    // 0x8022D210: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8022D214: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D218: jal         0x8004DA90
    // 0x8022D21C: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8022D21C: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022D220: jal         0x80040F30
    // 0x8022D224: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_1;
    // 0x8022D224: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022D228: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022D22C: beq         $v1, $zero, L_8022D340
    if (ctx->r3 == 0) {
        // 0x8022D230: andi        $v0, $v1, 0xF00
        ctx->r2 = ctx->r3 & 0XF00;
            goto L_8022D340;
    }
    // 0x8022D230: andi        $v0, $v1, 0xF00
    ctx->r2 = ctx->r3 & 0XF00;
    // 0x8022D234: bnel        $v0, $zero, L_8022D23C
    if (ctx->r2 != 0) {
        // 0x8022D238: sh          $zero, 0x44($s0)
        MEM_H(0X44, ctx->r16) = 0;
            goto L_8022D23C;
    }
    goto skip_1;
    // 0x8022D238: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    skip_1:
L_8022D23C:
    // 0x8022D23C: andi        $v0, $v1, 0x1000
    ctx->r2 = ctx->r3 & 0X1000;
    // 0x8022D240: beq         $v0, $zero, L_8022D340
    if (ctx->r2 == 0) {
        // 0x8022D244: addiu       $v0, $zero, 0xF
        ctx->r2 = ADD32(0, 0XF);
            goto L_8022D340;
    }
    // 0x8022D244: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x8022D248: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022D24C: addiu       $v0, $zero, 0x17
    ctx->r2 = ADD32(0, 0X17);
    // 0x8022D250: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
    // 0x8022D254: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022D258: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022D25C: j           L_8022D340
    // 0x8022D260: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8022D340;
    // 0x8022D260: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022D264:
    // 0x8022D264: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022D268: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022D26C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022D270: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D274: bgez        $v0, L_8022D294
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022D278: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8022D294;
    }
    // 0x8022D278: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022D27C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022D280: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x8022D284: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022D288: addiu       $v0, $zero, 0x23
    ctx->r2 = ADD32(0, 0X23);
    // 0x8022D28C: j           L_8022D2A8
    // 0x8022D290: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_8022D2A8;
    // 0x8022D290: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022D294:
    // 0x8022D294: lh          $v0, 0x44($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X44);
    // 0x8022D298: beq         $v0, $zero, L_8022D2A8
    if (ctx->r2 == 0) {
        // 0x8022D29C: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022D2A8;
    }
    // 0x8022D29C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022D2A0: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022D2A4: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
L_8022D2A8:
    // 0x8022D2A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D2AC: lhu         $a1, 0x44($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X44);
    // 0x8022D2B0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022D2B4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022D2B8: sll         $a1, $a1, 20
    ctx->r5 = S32(ctx->r5 << 20);
    // 0x8022D2BC: jal         0x8004DA90
    // 0x8022D2C0: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x8022D2C0: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    after_2:
    // 0x8022D2C4: jal         0x80040F30
    // 0x8022D2C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_3;
    // 0x8022D2C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022D2CC: jal         0x8003E934
    // 0x8022D2D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_4;
    // 0x8022D2D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8022D2D4: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022D2D8: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x8022D2DC: lh          $a0, 0x2E($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X2E);
    // 0x8022D2E0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D2E4: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x8022D2E8: slti        $v1, $v1, 0x11
    ctx->r3 = SIGNED(ctx->r3) < 0X11 ? 1 : 0;
    // 0x8022D2EC: bne         $v1, $zero, L_8022D340
    if (ctx->r3 != 0) {
        // 0x8022D2F0: sw          $v0, 0x20($s0)
        MEM_W(0X20, ctx->r16) = ctx->r2;
            goto L_8022D340;
    }
    // 0x8022D2F0: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022D2F4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022D2F8: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x8022D2FC: jal         0x8009A3B4
    // 0x8022D300: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8022D300: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x8022D304: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8022D308: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x8022D30C: jal         0x8009A3B4
    // 0x8022D310: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x8022D310: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_6:
    // 0x8022D314: j           L_8022D340
    // 0x8022D318: nop

        goto L_8022D340;
    // 0x8022D318: nop

L_8022D31C:
    // 0x8022D31C: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022D320: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022D324: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022D328: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D32C: bgez        $v0, L_8022D340
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022D330: nop
    
            goto L_8022D340;
    }
    // 0x8022D330: nop

    // 0x8022D334: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022D338: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022D33C: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8022D340:
    // 0x8022D340: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022D344: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022D348: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022D34C: jr          $ra
    // 0x8022D350: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022D350: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022F5B8_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F5B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F5BC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F5C0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F5C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022F5C8: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8022F5CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F5D0: beq         $v1, $v0, L_8022F64C
    if (ctx->r3 == ctx->r2) {
        // 0x8022F5D4: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8022F64C;
    }
    // 0x8022F5D4: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022F5D8: beql        $v0, $zero, L_8022F5F0
    if (ctx->r2 == 0) {
        // 0x8022F5DC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022F5F0;
    }
    goto skip_0;
    // 0x8022F5DC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022F5E0: beq         $v1, $zero, L_8022F600
    if (ctx->r3 == 0) {
        // 0x8022F5E4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022F600;
    }
    // 0x8022F5E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F5E8: j           L_8022F688
    // 0x8022F5EC: nop

        goto L_8022F688;
    // 0x8022F5EC: nop

L_8022F5F0:
    // 0x8022F5F0: beq         $v1, $v0, L_8022F66C
    if (ctx->r3 == ctx->r2) {
        // 0x8022F5F4: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_8022F66C;
    }
    // 0x8022F5F4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022F5F8: j           L_8022F688
    // 0x8022F5FC: nop

        goto L_8022F688;
    // 0x8022F5FC: nop

L_8022F600:
    // 0x8022F600: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x8022F604: jal         0x80050294
    // 0x8022F608: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8022F608: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    after_0:
    // 0x8022F60C: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x8022F610: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8022F614: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022F618: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x8022F61C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022F620: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8022F624: bne         $v0, $v1, L_8022F634
    if (ctx->r2 != ctx->r3) {
        // 0x8022F628: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022F634;
    }
    // 0x8022F628: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022F62C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8022F630: sb          $v0, -0x3A49($at)
    MEM_B(-0X3A49, ctx->r1) = ctx->r2;
L_8022F634:
    // 0x8022F634: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x8022F638: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x8022F63C: beq         $v1, $v0, L_8022F65C
    if (ctx->r3 == ctx->r2) {
        // 0x8022F640: nop
    
            goto L_8022F65C;
    }
    // 0x8022F640: nop

    // 0x8022F644: j           L_8022F688
    // 0x8022F648: nop

        goto L_8022F688;
    // 0x8022F648: nop

L_8022F64C:
    // 0x8022F64C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F650: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x8022F654: jal         0x80050294
    // 0x8022F658: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x8022F658: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
L_8022F65C:
    // 0x8022F65C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022F660: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022F664: j           L_8022F688
    // 0x8022F668: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022F688;
    // 0x8022F668: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022F66C:
    // 0x8022F66C: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x8022F670: bne         $v1, $v0, L_8022F680
    if (ctx->r3 != ctx->r2) {
        // 0x8022F674: nop
    
            goto L_8022F680;
    }
    // 0x8022F674: nop

    // 0x8022F678: jal         0x8004F418
    // 0x8022F67C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_2;
    // 0x8022F67C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
L_8022F680:
    // 0x8022F680: jal         0x8005044C
    // 0x8022F684: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_3;
    // 0x8022F684: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
L_8022F688:
    // 0x8022F688: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022F68C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F690: jr          $ra
    // 0x8022F694: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F694: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022F698: nop

    // 0x8022F69C: nop

;}
RECOMP_FUNC void func_80238A50_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238A50: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80238A54: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80238A58: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80238A5C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80238A60: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80238A64: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80238A68: beq         $v1, $zero, L_80238A84
    if (ctx->r3 == 0) {
        // 0x80238A6C: addiu       $s1, $s0, 0x308
        ctx->r17 = ADD32(ctx->r16, 0X308);
            goto L_80238A84;
    }
    // 0x80238A6C: addiu       $s1, $s0, 0x308
    ctx->r17 = ADD32(ctx->r16, 0X308);
    // 0x80238A70: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80238A74: beq         $v1, $v0, L_80238AC0
    if (ctx->r3 == ctx->r2) {
        // 0x80238A78: nop
    
            goto L_80238AC0;
    }
    // 0x80238A78: nop

    // 0x80238A7C: j           L_80238B48
    // 0x80238A80: nop

        goto L_80238B48;
    // 0x80238A80: nop

L_80238A84:
    // 0x80238A84: lw          $v1, 0x33C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X33C);
    // 0x80238A88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80238A8C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80238A90: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x80238A94: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80238A98: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80238A9C: sh          $v0, 0x30C($s0)
    MEM_H(0X30C, ctx->r16) = ctx->r2;
    // 0x80238AA0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80238AA4: sh          $zero, 0x310($s0)
    MEM_H(0X310, ctx->r16) = 0;
    // 0x80238AA8: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80238AAC: lw          $v0, 0x33C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X33C);
    // 0x80238AB0: sh          $zero, 0xA($v0)
    MEM_H(0XA, ctx->r2) = 0;
    // 0x80238AB4: lhu         $v0, 0x308($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X308);
    // 0x80238AB8: andi        $v0, $v0, 0xFEFF
    ctx->r2 = ctx->r2 & 0XFEFF;
    // 0x80238ABC: sh          $v0, 0x308($s0)
    MEM_H(0X308, ctx->r16) = ctx->r2;
L_80238AC0:
    // 0x80238AC0: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80238AC4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80238AC8: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80238ACC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80238AD0: bgez        $v0, L_80238B48
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80238AD4: nop
    
            goto L_80238B48;
    }
    // 0x80238AD4: nop

    // 0x80238AD8: jal         0x8004F144
    // 0x80238ADC: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80238ADC: nop

    after_0:
    // 0x80238AE0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80238AE4: beq         $v1, $zero, L_80238B10
    if (ctx->r3 == 0) {
        // 0x80238AE8: addiu       $a0, $v1, 0x38
        ctx->r4 = ADD32(ctx->r3, 0X38);
            goto L_80238B10;
    }
    // 0x80238AE8: addiu       $a0, $v1, 0x38
    ctx->r4 = ADD32(ctx->r3, 0X38);
    // 0x80238AEC: addiu       $a1, $s0, 0x180
    ctx->r5 = ADD32(ctx->r16, 0X180);
    // 0x80238AF0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80238AF4: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80238AF8: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80238AFC: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x80238B00: addiu       $v0, $zero, 0x42
    ctx->r2 = ADD32(0, 0X42);
    // 0x80238B04: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80238B08: jal         0x8009A3B4
    // 0x80238B0C: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80238B0C: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    after_1:
L_80238B10:
    // 0x80238B10: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80238B14: andi        $v0, $v0, 0x200
    ctx->r2 = ctx->r2 & 0X200;
    // 0x80238B18: beq         $v0, $zero, L_80238B28
    if (ctx->r2 == 0) {
        // 0x80238B1C: nop
    
            goto L_80238B28;
    }
    // 0x80238B1C: nop

    // 0x80238B20: jal         0x8004F418
    // 0x80238B24: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_2;
    // 0x80238B24: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
L_80238B28:
    // 0x80238B28: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80238B2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238B30: addiu       $a1, $a0, 0x14
    ctx->r5 = ADD32(ctx->r4, 0X14);
    // 0x80238B34: sb          $zero, 0xE($a0)
    MEM_B(0XE, ctx->r4) = 0;
    // 0x80238B38: sb          $zero, 0xF($a0)
    MEM_B(0XF, ctx->r4) = 0;
    // 0x80238B3C: andi        $v0, $v0, 0xFC
    ctx->r2 = ctx->r2 & 0XFC;
    // 0x80238B40: jal         0x8007A1B8
    // 0x80238B44: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    func_8007A1B8_555B8(rdram, ctx);
        goto after_3;
    // 0x80238B44: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    after_3:
L_80238B48:
    // 0x80238B48: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80238B4C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80238B50: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80238B54: jr          $ra
    // 0x80238B58: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80238B58: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80245A20_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80245A20: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80245A24: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80245A28: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80245A2C: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x80245A30: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80245A34: jal         0x80053ED8
    // 0x80245A38: lbu         $a0, 0xE($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0XE);
    func_80053ED8_2F2D8(rdram, ctx);
        goto after_0;
    // 0x80245A38: lbu         $a0, 0xE($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0XE);
    after_0:
    // 0x80245A3C: lbu         $v1, 0x3($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X3);
    // 0x80245A40: sltiu       $v1, $v1, 0x4
    ctx->r3 = ctx->r3 < 0X4 ? 1 : 0;
    // 0x80245A44: beq         $v1, $zero, L_80245ADC
    if (ctx->r3 == 0) {
        // 0x80245A48: addu        $s0, $v0, $zero
        ctx->r16 = ADD32(ctx->r2, 0);
            goto L_80245ADC;
    }
    // 0x80245A48: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80245A4C: lb          $a0, 0xC($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XC);
    // 0x80245A50: lb          $v1, 0xF($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XF);
    // 0x80245A54: slt         $v0, $a0, $v1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80245A58: beq         $v0, $zero, L_80245A68
    if (ctx->r2 == 0) {
        // 0x80245A5C: lui         $v0, 0x40
        ctx->r2 = S32(0X40 << 16);
            goto L_80245A68;
    }
    // 0x80245A5C: lui         $v0, 0x40
    ctx->r2 = S32(0X40 << 16);
    // 0x80245A60: j           L_80245ABC
    // 0x80245A64: ori         $v0, $v0, 0x4040
    ctx->r2 = ctx->r2 | 0X4040;
        goto L_80245ABC;
    // 0x80245A64: ori         $v0, $v0, 0x4040
    ctx->r2 = ctx->r2 | 0X4040;
L_80245A68:
    // 0x80245A68: bne         $a0, $v1, L_80245AB8
    if (ctx->r4 != ctx->r3) {
        // 0x80245A6C: lui         $v0, 0x80
        ctx->r2 = S32(0X80 << 16);
            goto L_80245AB8;
    }
    // 0x80245A6C: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x80245A70: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x80245A74: lhu         $v1, -0x730C($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X730C);
    // 0x80245A78: andi        $v0, $v1, 0x10
    ctx->r2 = ctx->r3 & 0X10;
    // 0x80245A7C: beq         $v0, $zero, L_80245A90
    if (ctx->r2 == 0) {
        // 0x80245A80: andi        $v0, $v1, 0xF
        ctx->r2 = ctx->r3 & 0XF;
            goto L_80245A90;
    }
    // 0x80245A80: andi        $v0, $v1, 0xF
    ctx->r2 = ctx->r3 & 0XF;
    // 0x80245A84: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80245A88: j           L_80245A9C
    // 0x80245A8C: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
        goto L_80245A9C;
    // 0x80245A8C: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
L_80245A90:
    // 0x80245A90: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80245A94: addiu       $v1, $zero, -0x10
    ctx->r3 = ADD32(0, -0X10);
    // 0x80245A98: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
L_80245A9C:
    // 0x80245A9C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80245AA0: sll         $v1, $v0, 8
    ctx->r3 = S32(ctx->r2 << 8);
    // 0x80245AA4: or          $v1, $v0, $v1
    ctx->r3 = ctx->r2 | ctx->r3;
    // 0x80245AA8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80245AAC: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80245AB0: j           L_80245AC0
    // 0x80245AB4: sw          $v1, 0xB4($s1)
    MEM_W(0XB4, ctx->r17) = ctx->r3;
        goto L_80245AC0;
    // 0x80245AB4: sw          $v1, 0xB4($s1)
    MEM_W(0XB4, ctx->r17) = ctx->r3;
L_80245AB8:
    // 0x80245AB8: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
L_80245ABC:
    // 0x80245ABC: sw          $v0, 0xB4($s1)
    MEM_W(0XB4, ctx->r17) = ctx->r2;
L_80245AC0:
    // 0x80245AC0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80245AC4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80245AC8: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x80245ACC: jal         0x80047284
    // 0x80245AD0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_1;
    // 0x80245AD0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x80245AD4: j           L_80245B74
    // 0x80245AD8: nop

        goto L_80245B74;
    // 0x80245AD8: nop

L_80245ADC:
    // 0x80245ADC: lw          $v0, 0xC0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XC0);
    // 0x80245AE0: lui         $v1, 0x2200
    ctx->r3 = S32(0X2200 << 16);
    // 0x80245AE4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80245AE8: beql        $v0, $zero, L_80245B1C
    if (ctx->r2 == 0) {
        // 0x80245AEC: addiu       $s0, $sp, 0x28
        ctx->r16 = ADD32(ctx->r29, 0X28);
            goto L_80245B1C;
    }
    goto skip_0;
    // 0x80245AEC: addiu       $s0, $sp, 0x28
    ctx->r16 = ADD32(ctx->r29, 0X28);
    skip_0:
    // 0x80245AF0: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80245AF4: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x80245AF8: jal         0x8002A33C
    // 0x80245AFC: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x80245AFC: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    after_2:
    // 0x80245B00: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x80245B04: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x80245B08: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x80245B0C: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
    // 0x80245B10: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80245B14: j           L_80245B74
    // 0x80245B18: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
        goto L_80245B74;
    // 0x80245B18: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_80245B1C:
    // 0x80245B1C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80245B20: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x80245B24: jal         0x8009A3B4
    // 0x80245B28: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80245B28: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x80245B2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80245B30: lhu         $v0, 0x2A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X2A);
    // 0x80245B34: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    // 0x80245B38: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80245B3C: addiu       $v0, $v0, -0x32
    ctx->r2 = ADD32(ctx->r2, -0X32);
    // 0x80245B40: sh          $v0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r2;
    // 0x80245B44: lbu         $v1, 0x1($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X1);
    // 0x80245B48: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x80245B4C: addiu       $v0, $s1, 0xC0
    ctx->r2 = ADD32(ctx->r17, 0XC0);
    // 0x80245B50: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80245B54: lui         $v0, 0x880
    ctx->r2 = S32(0X880 << 16);
    // 0x80245B58: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80245B5C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80245B60: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80245B64: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80245B68: jal         0x80051E18
    // 0x80245B6C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_4;
    // 0x80245B6C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_4:
    // 0x80245B70: sw          $zero, 0xC0($s1)
    MEM_W(0XC0, ctx->r17) = 0;
L_80245B74:
    // 0x80245B74: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x80245B78: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80245B7C: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80245B80: jr          $ra
    // 0x80245B84: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80245B84: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80246A64_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80246A64: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80246A68: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x80246A6C: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x80246A70: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80246A74: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x80246A78: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80246A7C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80246A80: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80246A84: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80246A88: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80246A8C: lh          $v0, 0x44($s5)
    ctx->r2 = MEM_H(ctx->r21, 0X44);
    // 0x80246A90: slti        $v0, $v0, 0x20
    ctx->r2 = SIGNED(ctx->r2) < 0X20 ? 1 : 0;
    // 0x80246A94: bne         $v0, $zero, L_80246AAC
    if (ctx->r2 != 0) {
        // 0x80246A98: nop
    
            goto L_80246AAC;
    }
    // 0x80246A98: nop

    // 0x80246A9C: jal         0x80040F30
    // 0x80246AA0: nop

    func_80040F30_1C330(rdram, ctx);
        goto after_0;
    // 0x80246AA0: nop

    after_0:
    // 0x80246AA4: beq         $v0, $zero, L_80246C60
    if (ctx->r2 == 0) {
        // 0x80246AA8: nop
    
            goto L_80246C60;
    }
    // 0x80246AA8: nop

L_80246AAC:
    // 0x80246AAC: lui         $s1, 0x8025
    ctx->r17 = S32(0X8025 << 16);
    // 0x80246AB0: addiu       $s1, $s1, 0x21D8
    ctx->r17 = ADD32(ctx->r17, 0X21D8);
    // 0x80246AB4: jal         0x8005FB30
    // 0x80246AB8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8005FB30_3AF30(rdram, ctx);
        goto after_1;
    // 0x80246AB8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x80246ABC: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
    // 0x80246AC0: addiu       $a0, $s4, 0x14
    ctx->r4 = ADD32(ctx->r20, 0X14);
    // 0x80246AC4: addiu       $s6, $s5, 0x14
    ctx->r22 = ADD32(ctx->r21, 0X14);
    // 0x80246AC8: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    // 0x80246ACC: jal         0x8009A3B4
    // 0x80246AD0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80246AD0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80246AD4: addiu       $a0, $s4, 0x1C
    ctx->r4 = ADD32(ctx->r20, 0X1C);
    // 0x80246AD8: addiu       $s3, $s5, 0x1C
    ctx->r19 = ADD32(ctx->r21, 0X1C);
    // 0x80246ADC: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x80246AE0: jal         0x8009A3B4
    // 0x80246AE4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80246AE4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_3:
    // 0x80246AE8: addiu       $a0, $s4, 0x54
    ctx->r4 = ADD32(ctx->r20, 0X54);
    // 0x80246AEC: addiu       $s2, $s5, 0x54
    ctx->r18 = ADD32(ctx->r21, 0X54);
    // 0x80246AF0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80246AF4: jal         0x8009A3B4
    // 0x80246AF8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x80246AF8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x80246AFC: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80246B00: lhu         $v0, -0x730C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X730C);
    // 0x80246B04: lhu         $v1, 0x56($s4)
    ctx->r3 = MEM_HU(ctx->r20, 0X56);
    // 0x80246B08: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80246B0C: addiu       $s0, $zero, -0xC0
    ctx->r16 = ADD32(0, -0XC0);
    // 0x80246B10: sh          $s0, 0x46($s4)
    MEM_H(0X46, ctx->r20) = ctx->r16;
    // 0x80246B14: andi        $v0, $v0, 0x1FF
    ctx->r2 = ctx->r2 & 0X1FF;
    // 0x80246B18: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80246B1C: jal         0x8005FB30
    // 0x80246B20: sh          $v1, 0x56($s4)
    MEM_H(0X56, ctx->r20) = ctx->r3;
    func_8005FB30_3AF30(rdram, ctx);
        goto after_5;
    // 0x80246B20: sh          $v1, 0x56($s4)
    MEM_H(0X56, ctx->r20) = ctx->r3;
    after_5:
    // 0x80246B24: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
    // 0x80246B28: addiu       $a0, $s4, 0x14
    ctx->r4 = ADD32(ctx->r20, 0X14);
    // 0x80246B2C: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    // 0x80246B30: jal         0x8009A3B4
    // 0x80246B34: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x80246B34: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x80246B38: addiu       $a0, $s4, 0x1C
    ctx->r4 = ADD32(ctx->r20, 0X1C);
    // 0x80246B3C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x80246B40: jal         0x8009A3B4
    // 0x80246B44: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x80246B44: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_7:
    // 0x80246B48: addiu       $a0, $s4, 0x54
    ctx->r4 = ADD32(ctx->r20, 0X54);
    // 0x80246B4C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80246B50: jal         0x8009A3B4
    // 0x80246B54: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x80246B54: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_8:
    // 0x80246B58: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80246B5C: lhu         $v0, -0x730C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X730C);
    // 0x80246B60: lhu         $v1, 0x56($s4)
    ctx->r3 = MEM_HU(ctx->r20, 0X56);
    // 0x80246B64: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x80246B68: sh          $s0, 0x46($s4)
    MEM_H(0X46, ctx->r20) = ctx->r16;
    // 0x80246B6C: andi        $v0, $v0, 0x1FF
    ctx->r2 = ctx->r2 & 0X1FF;
    // 0x80246B70: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80246B74: jal         0x8005FB30
    // 0x80246B78: sh          $v1, 0x56($s4)
    MEM_H(0X56, ctx->r20) = ctx->r3;
    func_8005FB30_3AF30(rdram, ctx);
        goto after_9;
    // 0x80246B78: sh          $v1, 0x56($s4)
    MEM_H(0X56, ctx->r20) = ctx->r3;
    after_9:
    // 0x80246B7C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80246B80: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x80246B84: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    // 0x80246B88: jal         0x8009A3B4
    // 0x80246B8C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_10;
    // 0x80246B8C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_10:
    // 0x80246B90: lbu         $v0, 0x57($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0X57);
    // 0x80246B94: addiu       $a0, $s1, 0x28
    ctx->r4 = ADD32(ctx->r17, 0X28);
    // 0x80246B98: srl         $v0, $v0, 6
    ctx->r2 = S32(U32(ctx->r2) >> 6);
    // 0x80246B9C: jal         0x8005FB30
    // 0x80246BA0: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    func_8005FB30_3AF30(rdram, ctx);
        goto after_11;
    // 0x80246BA0: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    after_11:
    // 0x80246BA4: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
    // 0x80246BA8: lw          $a1, 0xB8($s5)
    ctx->r5 = MEM_W(ctx->r21, 0XB8);
    // 0x80246BAC: addiu       $a0, $s4, 0x14
    ctx->r4 = ADD32(ctx->r20, 0X14);
    // 0x80246BB0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80246BB4: jal         0x8009A3B4
    // 0x80246BB8: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    memcpy_recomp(rdram, ctx);
        goto after_12;
    // 0x80246BB8: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_12:
    // 0x80246BBC: lw          $a1, 0xB8($s5)
    ctx->r5 = MEM_W(ctx->r21, 0XB8);
    // 0x80246BC0: addiu       $a0, $s4, 0x1C
    ctx->r4 = ADD32(ctx->r20, 0X1C);
    // 0x80246BC4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80246BC8: jal         0x8009A3B4
    // 0x80246BCC: addiu       $a1, $a1, 0x1C
    ctx->r5 = ADD32(ctx->r5, 0X1C);
    memcpy_recomp(rdram, ctx);
        goto after_13;
    // 0x80246BCC: addiu       $a1, $a1, 0x1C
    ctx->r5 = ADD32(ctx->r5, 0X1C);
    after_13:
    // 0x80246BD0: lw          $a1, 0xB8($s5)
    ctx->r5 = MEM_W(ctx->r21, 0XB8);
    // 0x80246BD4: addiu       $a0, $s4, 0x54
    ctx->r4 = ADD32(ctx->r20, 0X54);
    // 0x80246BD8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80246BDC: jal         0x8009A3B4
    // 0x80246BE0: addiu       $a1, $a1, 0x54
    ctx->r5 = ADD32(ctx->r5, 0X54);
    memcpy_recomp(rdram, ctx);
        goto after_14;
    // 0x80246BE0: addiu       $a1, $a1, 0x54
    ctx->r5 = ADD32(ctx->r5, 0X54);
    after_14:
    // 0x80246BE4: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x80246BE8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80246BEC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80246BF0: jal         0x8004DA90
    // 0x80246BF4: addiu       $a3, $zero, -0xC80
    ctx->r7 = ADD32(0, -0XC80);
    func_8004DA90_28E90(rdram, ctx);
        goto after_15;
    // 0x80246BF4: addiu       $a3, $zero, -0xC80
    ctx->r7 = ADD32(0, -0XC80);
    after_15:
    // 0x80246BF8: jal         0x8004F144
    // 0x80246BFC: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_16;
    // 0x80246BFC: nop

    after_16:
    // 0x80246C00: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80246C04: beq         $s0, $zero, L_80246C7C
    if (ctx->r16 == 0) {
        // 0x80246C08: addiu       $a0, $s0, 0x38
        ctx->r4 = ADD32(ctx->r16, 0X38);
            goto L_80246C7C;
    }
    // 0x80246C08: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x80246C0C: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    // 0x80246C10: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80246C14: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80246C18: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80246C1C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80246C20: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80246C24: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x80246C28: jal         0x8009A3B4
    // 0x80246C2C: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_17;
    // 0x80246C2C: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    after_17:
    // 0x80246C30: lhu         $v0, 0x16($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X16);
    // 0x80246C34: addiu       $v0, $v0, -0x64
    ctx->r2 = ADD32(ctx->r2, -0X64);
    // 0x80246C38: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
    // 0x80246C3C: lbu         $v0, 0x0($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0X0);
    // 0x80246C40: lbu         $v1, 0xB($s5)
    ctx->r3 = MEM_BU(ctx->r21, 0XB);
    // 0x80246C44: sw          $s0, 0xB8($s5)
    MEM_W(0XB8, ctx->r21) = ctx->r16;
    // 0x80246C48: sh          $zero, 0x44($s5)
    MEM_H(0X44, ctx->r21) = 0;
    // 0x80246C4C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80246C50: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80246C54: sb          $v0, 0x0($s5)
    MEM_B(0X0, ctx->r21) = ctx->r2;
    // 0x80246C58: j           L_80246C7C
    // 0x80246C5C: sb          $v1, 0xB($s5)
    MEM_B(0XB, ctx->r21) = ctx->r3;
        goto L_80246C7C;
    // 0x80246C5C: sb          $v1, 0xB($s5)
    MEM_B(0XB, ctx->r21) = ctx->r3;
L_80246C60:
    // 0x80246C60: lhu         $v0, 0x56($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X56);
    // 0x80246C64: lhu         $v1, 0x44($s5)
    ctx->r3 = MEM_HU(ctx->r21, 0X44);
    // 0x80246C68: addiu       $v0, $v0, 0x40
    ctx->r2 = ADD32(ctx->r2, 0X40);
    // 0x80246C6C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80246C70: addiu       $v1, $v1, -0x20
    ctx->r3 = ADD32(ctx->r3, -0X20);
    // 0x80246C74: sh          $v0, 0x56($s5)
    MEM_H(0X56, ctx->r21) = ctx->r2;
    // 0x80246C78: sh          $v1, 0x44($s5)
    MEM_H(0X44, ctx->r21) = ctx->r3;
L_80246C7C:
    // 0x80246C7C: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x80246C80: jal         0x80246FC8
    // 0x80246C84: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80246FC8_ovl10(rdram, ctx);
        goto after_18;
    // 0x80246C84: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_18:
    // 0x80246C88: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80246C8C: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x80246C90: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x80246C94: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80246C98: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80246C9C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80246CA0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80246CA4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80246CA8: jr          $ra
    // 0x80246CAC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80246CAC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_802261A4_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802261A4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802261A8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802261AC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802261B0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802261B4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802261B8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802261BC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802261C0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802261C4: jal         0x8005F6B4
    // 0x802261C8: sw          $zero, 0x14($s1)
    MEM_W(0X14, ctx->r17) = 0;
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_0;
    // 0x802261C8: sw          $zero, 0x14($s1)
    MEM_W(0X14, ctx->r17) = 0;
    after_0:
    // 0x802261CC: lui         $s0, 0x8025
    ctx->r16 = S32(0X8025 << 16);
    // 0x802261D0: addiu       $s0, $s0, -0x1A00
    ctx->r16 = ADD32(ctx->r16, -0X1A00);
    // 0x802261D4: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x802261D8: addiu       $v0, $v0, -0x1900
    ctx->r2 = ADD32(ctx->r2, -0X1900);
    // 0x802261DC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x802261E0: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x802261E4: jal         0x8005FA7C
    // 0x802261E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_1;
    // 0x802261E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802261EC: jal         0x8005FA7C
    // 0x802261F0: addiu       $a0, $s0, 0x28
    ctx->r4 = ADD32(ctx->r16, 0X28);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_2;
    // 0x802261F0: addiu       $a0, $s0, 0x28
    ctx->r4 = ADD32(ctx->r16, 0X28);
    after_2:
    // 0x802261F4: jal         0x8005FA7C
    // 0x802261F8: addiu       $a0, $s0, 0x3C
    ctx->r4 = ADD32(ctx->r16, 0X3C);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_3;
    // 0x802261F8: addiu       $a0, $s0, 0x3C
    ctx->r4 = ADD32(ctx->r16, 0X3C);
    after_3:
    // 0x802261FC: jal         0x8005FA7C
    // 0x80226200: addiu       $a0, $s0, 0x50
    ctx->r4 = ADD32(ctx->r16, 0X50);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_4;
    // 0x80226200: addiu       $a0, $s0, 0x50
    ctx->r4 = ADD32(ctx->r16, 0X50);
    after_4:
    // 0x80226204: jal         0x8005FA7C
    // 0x80226208: addiu       $a0, $s0, 0x64
    ctx->r4 = ADD32(ctx->r16, 0X64);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_5;
    // 0x80226208: addiu       $a0, $s0, 0x64
    ctx->r4 = ADD32(ctx->r16, 0X64);
    after_5:
    // 0x8022620C: jal         0x8005FA7C
    // 0x80226210: addiu       $a0, $s0, 0x78
    ctx->r4 = ADD32(ctx->r16, 0X78);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_6;
    // 0x80226210: addiu       $a0, $s0, 0x78
    ctx->r4 = ADD32(ctx->r16, 0X78);
    after_6:
    // 0x80226214: lui         $s0, 0x8025
    ctx->r16 = S32(0X8025 << 16);
    // 0x80226218: addiu       $s0, $s0, 0x3340
    ctx->r16 = ADD32(ctx->r16, 0X3340);
    // 0x8022621C: jal         0x80030674
    // 0x80226220: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80030674_BA74(rdram, ctx);
        goto after_7;
    // 0x80226220: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x80226224: jal         0x80030674
    // 0x80226228: addiu       $a0, $s0, 0x10
    ctx->r4 = ADD32(ctx->r16, 0X10);
    func_80030674_BA74(rdram, ctx);
        goto after_8;
    // 0x80226228: addiu       $a0, $s0, 0x10
    ctx->r4 = ADD32(ctx->r16, 0X10);
    after_8:
    // 0x8022622C: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80226230: lbu         $v1, 0x3347($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X3347);
    // 0x80226234: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80226238: lbu         $a0, 0x3357($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X3357);
    // 0x8022623C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80226240: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80226244: sb          $v0, 0x3354($at)
    MEM_B(0X3354, ctx->r1) = ctx->r2;
    // 0x80226248: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022624C: sb          $v0, 0x3344($at)
    MEM_B(0X3344, ctx->r1) = ctx->r2;
    // 0x80226250: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80226254: sb          $v0, 0x3355($at)
    MEM_B(0X3355, ctx->r1) = ctx->r2;
    // 0x80226258: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022625C: sb          $v0, 0x3345($at)
    MEM_B(0X3345, ctx->r1) = ctx->r2;
    // 0x80226260: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80226264: sb          $v0, 0x3356($at)
    MEM_B(0X3356, ctx->r1) = ctx->r2;
    // 0x80226268: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022626C: sb          $v0, 0x3346($at)
    MEM_B(0X3346, ctx->r1) = ctx->r2;
    // 0x80226270: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
    // 0x80226274: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80226278: sh          $v0, 0x335C($at)
    MEM_H(0X335C, ctx->r1) = ctx->r2;
    // 0x8022627C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80226280: sh          $v0, 0x334C($at)
    MEM_H(0X334C, ctx->r1) = ctx->r2;
    // 0x80226284: addiu       $v0, $zero, 0xF0
    ctx->r2 = ADD32(0, 0XF0);
    // 0x80226288: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022628C: sh          $v0, 0x335E($at)
    MEM_H(0X335E, ctx->r1) = ctx->r2;
    // 0x80226290: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80226294: sh          $v0, 0x334E($at)
    MEM_H(0X334E, ctx->r1) = ctx->r2;
    // 0x80226298: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8022629C: addiu       $v0, $v0, -0x13B0
    ctx->r2 = ADD32(ctx->r2, -0X13B0);
    // 0x802262A0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802262A4: sh          $zero, 0x3358($at)
    MEM_H(0X3358, ctx->r1) = 0;
    // 0x802262A8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802262AC: sh          $zero, 0x3348($at)
    MEM_H(0X3348, ctx->r1) = 0;
    // 0x802262B0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802262B4: sh          $zero, 0x335A($at)
    MEM_H(0X335A, ctx->r1) = 0;
    // 0x802262B8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802262BC: sh          $zero, 0x334A($at)
    MEM_H(0X334A, ctx->r1) = 0;
    // 0x802262C0: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x802262C4: ori         $a0, $a0, 0x2
    ctx->r4 = ctx->r4 | 0X2;
    // 0x802262C8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802262CC: sb          $v1, 0x3347($at)
    MEM_B(0X3347, ctx->r1) = ctx->r3;
    // 0x802262D0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802262D4: sb          $a0, 0x3357($at)
    MEM_B(0X3357, ctx->r1) = ctx->r4;
    // 0x802262D8: sw          $v0, 0xA4($s1)
    MEM_W(0XA4, ctx->r17) = ctx->r2;
    // 0x802262DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802262E0: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
    // 0x802262E4: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    // 0x802262E8: sw          $zero, 0xC($s1)
    MEM_W(0XC, ctx->r17) = 0;
    // 0x802262EC: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x802262F0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802262F4: sb          $zero, 0x3378($at)
    MEM_B(0X3378, ctx->r1) = 0;
    // 0x802262F8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802262FC: sb          $zero, 0x333A($at)
    MEM_B(0X333A, ctx->r1) = 0;
    // 0x80226300: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80226304: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80226308: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022630C: jr          $ra
    // 0x80226310: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80226310: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802435E8_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802435E8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802435EC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802435F0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802435F4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802435F8: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x802435FC: sll         $a1, $s1, 16
    ctx->r5 = S32(ctx->r17 << 16);
    // 0x80243600: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80243604: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80243608: beq         $a1, $zero, L_802436FC
    if (ctx->r5 == 0) {
        // 0x8024360C: sw          $s2, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r18;
            goto L_802436FC;
    }
    // 0x8024360C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80243610: lhu         $a3, 0x14($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X14);
    // 0x80243614: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80243618: sh          $a3, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r7;
    // 0x8024361C: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x80243620: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80243624: sra         $v1, $v1, 26
    ctx->r3 = S32(SIGNED(ctx->r3) >> 26);
    // 0x80243628: addiu       $v0, $v0, -0x80
    ctx->r2 = ADD32(ctx->r2, -0X80);
    // 0x8024362C: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x80243630: lhu         $a2, 0x18($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X18);
    // 0x80243634: addu        $s3, $v1, $zero
    ctx->r19 = ADD32(ctx->r3, 0);
    // 0x80243638: andi        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 & 0X1;
    // 0x8024363C: beq         $v1, $zero, L_80243670
    if (ctx->r3 == 0) {
        // 0x80243640: sh          $a2, 0x14($sp)
        MEM_H(0X14, ctx->r29) = ctx->r6;
            goto L_80243670;
    }
    // 0x80243640: sh          $a2, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r6;
    // 0x80243644: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80243648: sra         $v0, $a1, 17
    ctx->r2 = S32(SIGNED(ctx->r5) >> 17);
    // 0x8024364C: subu        $v0, $a3, $v0
    ctx->r2 = SUB32(ctx->r7, ctx->r2);
    // 0x80243650: jal         0x8003ECF0
    // 0x80243654: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    func_8003ECF0_1A0F0(rdram, ctx);
        goto after_0;
    // 0x80243654: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x80243658: lhu         $v1, 0x10($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X10);
    // 0x8024365C: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x80243660: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80243664: addu        $v1, $v1, $s1
    ctx->r3 = ADD32(ctx->r3, ctx->r17);
    // 0x80243668: j           L_80243698
    // 0x8024366C: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
        goto L_80243698;
    // 0x8024366C: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
L_80243670:
    // 0x80243670: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80243674: sra         $v0, $a1, 17
    ctx->r2 = S32(SIGNED(ctx->r5) >> 17);
    // 0x80243678: subu        $v0, $a2, $v0
    ctx->r2 = SUB32(ctx->r6, ctx->r2);
    // 0x8024367C: jal         0x8003ECF0
    // 0x80243680: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    func_8003ECF0_1A0F0(rdram, ctx);
        goto after_1;
    // 0x80243680: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    after_1:
    // 0x80243684: lhu         $v1, 0x14($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X14);
    // 0x80243688: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x8024368C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80243690: addu        $v1, $v1, $s1
    ctx->r3 = ADD32(ctx->r3, ctx->r17);
    // 0x80243694: sh          $v1, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r3;
L_80243698:
    // 0x80243698: jal         0x8003ECF0
    // 0x8024369C: nop

    func_8003ECF0_1A0F0(rdram, ctx);
        goto after_2;
    // 0x8024369C: nop

    after_2:
    // 0x802436A0: andi        $a0, $s3, 0x2
    ctx->r4 = ctx->r19 & 0X2;
    // 0x802436A4: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x802436A8: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x802436AC: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x802436B0: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
    // 0x802436B4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802436B8: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x802436BC: mult        $a0, $v1
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802436C0: mflo        $a0
    ctx->r4 = lo;
    // 0x802436C4: lhu         $a1, 0x4C($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X4C);
    // 0x802436C8: lhu         $v1, 0x54($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X54);
    // 0x802436CC: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x802436D0: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x802436D4: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x802436D8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802436DC: sra         $v0, $a1, 16
    ctx->r2 = S32(SIGNED(ctx->r5) >> 16);
    // 0x802436E0: blez        $v0, L_802436F0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x802436E4: sh          $v1, 0x54($s0)
        MEM_H(0X54, ctx->r16) = ctx->r3;
            goto L_802436F0;
    }
    // 0x802436E4: sh          $v1, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r3;
    // 0x802436E8: j           L_802436F4
    // 0x802436EC: sra         $v0, $a1, 17
    ctx->r2 = S32(SIGNED(ctx->r5) >> 17);
        goto L_802436F4;
    // 0x802436EC: sra         $v0, $a1, 17
    ctx->r2 = S32(SIGNED(ctx->r5) >> 17);
L_802436F0:
    // 0x802436F0: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
L_802436F4:
    // 0x802436F4: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
    // 0x802436F8: sh          $v0, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r2;
L_802436FC:
    // 0x802436FC: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80243700: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80243704: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80243708: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8024370C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80243710: jr          $ra
    // 0x80243714: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80243714: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8023558C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023558C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80235590: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80235594: jal         0x802355A8
    // 0x80235598: nop

    func_802355A8_ovl10(rdram, ctx);
        goto after_0;
    // 0x80235598: nop

    after_0:
    // 0x8023559C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802355A0: jr          $ra
    // 0x802355A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802355A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80249EF8_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80249EF8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80249EFC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80249F00: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x80249F04: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x80249F08: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80249F0C: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80249F10: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80249F14: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80249F18: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80249F1C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80249F20: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80249F24: lbu         $v0, 0x3($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X3);
    // 0x80249F28: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80249F2C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80249F30: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80249F34: lh          $v0, 0x23A0($at)
    ctx->r2 = MEM_H(ctx->r1, 0X23A0);
    // 0x80249F38: addu        $s5, $zero, $zero
    ctx->r21 = ADD32(0, 0);
    // 0x80249F3C: blez        $v0, L_8024A170
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80249F40: addu        $s6, $zero, $zero
        ctx->r22 = ADD32(0, 0);
            goto L_8024A170;
    }
    // 0x80249F40: addu        $s6, $zero, $zero
    ctx->r22 = ADD32(0, 0);
    // 0x80249F44: lui         $s7, 0x8021
    ctx->r23 = S32(0X8021 << 16);
    // 0x80249F48: addiu       $s7, $s7, -0x2100
    ctx->r23 = ADD32(ctx->r23, -0X2100);
    // 0x80249F4C: sll         $v0, $s6, 16
    ctx->r2 = S32(ctx->r22 << 16);
L_80249F50:
    // 0x80249F50: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80249F54: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80249F58: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80249F5C: lbu         $v1, 0x35C0($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X35C0);
    // 0x80249F60: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x80249F64: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80249F68: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80249F6C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80249F70: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80249F74: addu        $s2, $v0, $s7
    ctx->r18 = ADD32(ctx->r2, ctx->r23);
    // 0x80249F78: lbu         $v0, 0xDF($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XDF);
    // 0x80249F7C: andi        $v0, $v0, 0xF9
    ctx->r2 = ctx->r2 & 0XF9;
    // 0x80249F80: sb          $v0, 0xDF($s2)
    MEM_B(0XDF, ctx->r18) = ctx->r2;
    // 0x80249F84: lbu         $v0, 0x3($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X3);
    // 0x80249F88: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80249F8C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80249F90: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80249F94: lh          $v0, 0x23A0($at)
    ctx->r2 = MEM_H(ctx->r1, 0X23A0);
    // 0x80249F98: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x80249F9C: blez        $v0, L_8024A010
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80249FA0: addiu       $s1, $s2, 0xD0
        ctx->r17 = ADD32(ctx->r18, 0XD0);
            goto L_8024A010;
    }
    // 0x80249FA0: addiu       $s1, $s2, 0xD0
    ctx->r17 = ADD32(ctx->r18, 0XD0);
    // 0x80249FA4: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x80249FA8: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
L_80249FAC:
    // 0x80249FAC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80249FB0: beq         $s3, $v0, L_80249FE0
    if (ctx->r19 == ctx->r2) {
        // 0x80249FB4: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_80249FE0;
    }
    // 0x80249FB4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80249FB8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80249FBC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80249FC0: lbu         $v0, 0x35C0($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X35C0);
    // 0x80249FC4: sll         $a1, $v0, 3
    ctx->r5 = S32(ctx->r2 << 3);
    // 0x80249FC8: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80249FCC: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x80249FD0: subu        $a1, $a1, $v0
    ctx->r5 = SUB32(ctx->r5, ctx->r2);
    // 0x80249FD4: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x80249FD8: jal         0x8024A19C
    // 0x80249FDC: addu        $a1, $a1, $s7
    ctx->r5 = ADD32(ctx->r5, ctx->r23);
    func_8024A19C_ovl10(rdram, ctx);
        goto after_0;
    // 0x80249FDC: addu        $a1, $a1, $s7
    ctx->r5 = ADD32(ctx->r5, ctx->r23);
    after_0:
L_80249FE0:
    // 0x80249FE0: lbu         $v0, 0x3($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X3);
    // 0x80249FE4: addiu       $v1, $s0, 0x1
    ctx->r3 = ADD32(ctx->r16, 0X1);
    // 0x80249FE8: addu        $s0, $v1, $zero
    ctx->r16 = ADD32(ctx->r3, 0);
    // 0x80249FEC: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80249FF0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80249FF4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80249FF8: lh          $v0, 0x23A0($at)
    ctx->r2 = MEM_H(ctx->r1, 0X23A0);
    // 0x80249FFC: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8024A000: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8024A004: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8024A008: bne         $v1, $zero, L_80249FAC
    if (ctx->r3 != 0) {
        // 0x8024A00C: sll         $v0, $s0, 16
        ctx->r2 = S32(ctx->r16 << 16);
            goto L_80249FAC;
    }
    // 0x8024A00C: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
L_8024A010:
    // 0x8024A010: lbu         $a0, 0xF($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0XF);
    // 0x8024A014: andi        $v0, $a0, 0x20
    ctx->r2 = ctx->r4 & 0X20;
    // 0x8024A018: beq         $v0, $zero, L_8024A140
    if (ctx->r2 == 0) {
        // 0x8024A01C: andi        $v1, $a0, 0x50
        ctx->r3 = ctx->r4 & 0X50;
            goto L_8024A140;
    }
    // 0x8024A01C: andi        $v1, $a0, 0x50
    ctx->r3 = ctx->r4 & 0X50;
    // 0x8024A020: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x8024A024: bne         $v1, $v0, L_8024A054
    if (ctx->r3 != ctx->r2) {
        // 0x8024A028: nop
    
            goto L_8024A054;
    }
    // 0x8024A028: nop

    // 0x8024A02C: lh          $v0, 0x1C($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X1C);
    // 0x8024A030: blez        $v0, L_8024A044
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8024A034: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8024A044;
    }
    // 0x8024A034: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8024A038: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8024A03C: j           L_8024A140
    // 0x8024A040: sh          $v0, 0x1C($s1)
    MEM_H(0X1C, ctx->r17) = ctx->r2;
        goto L_8024A140;
    // 0x8024A040: sh          $v0, 0x1C($s1)
    MEM_H(0X1C, ctx->r17) = ctx->r2;
L_8024A044:
    // 0x8024A044: andi        $v0, $a0, 0xEF
    ctx->r2 = ctx->r4 & 0XEF;
    // 0x8024A048: sb          $v0, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r2;
    // 0x8024A04C: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x8024A050: sh          $v0, 0x1C($s1)
    MEM_H(0X1C, ctx->r17) = ctx->r2;
L_8024A054:
    // 0x8024A054: lbu         $v0, 0x3($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X3);
    // 0x8024A058: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8024A05C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024A060: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8024A064: lh          $v0, 0x23A0($at)
    ctx->r2 = MEM_H(ctx->r1, 0X23A0);
    // 0x8024A068: blez        $v0, L_8024A0F0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8024A06C: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_8024A0F0;
    }
    // 0x8024A06C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x8024A070: sll         $v0, $s6, 16
    ctx->r2 = S32(ctx->r22 << 16);
    // 0x8024A074: sra         $s3, $v0, 16
    ctx->r19 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8024A078: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
L_8024A07C:
    // 0x8024A07C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8024A080: beq         $s3, $v0, L_8024A0C0
    if (ctx->r19 == ctx->r2) {
        // 0x8024A084: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_8024A0C0;
    }
    // 0x8024A084: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8024A088: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024A08C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8024A090: lbu         $v0, 0x35C0($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X35C0);
    // 0x8024A094: sll         $a1, $v0, 3
    ctx->r5 = S32(ctx->r2 << 3);
    // 0x8024A098: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x8024A09C: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x8024A0A0: subu        $a1, $a1, $v0
    ctx->r5 = SUB32(ctx->r5, ctx->r2);
    // 0x8024A0A4: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x8024A0A8: jal         0x8024A3BC
    // 0x8024A0AC: addu        $a1, $a1, $s7
    ctx->r5 = ADD32(ctx->r5, ctx->r23);
    func_8024A3BC_ovl10(rdram, ctx);
        goto after_1;
    // 0x8024A0AC: addu        $a1, $a1, $s7
    ctx->r5 = ADD32(ctx->r5, ctx->r23);
    after_1:
    // 0x8024A0B0: addu        $s5, $v0, $zero
    ctx->r21 = ADD32(ctx->r2, 0);
    // 0x8024A0B4: sll         $v0, $s5, 16
    ctx->r2 = S32(ctx->r21 << 16);
    // 0x8024A0B8: beql        $v0, $zero, L_8024A140
    if (ctx->r2 == 0) {
        // 0x8024A0BC: sh          $zero, 0x1C($s1)
        MEM_H(0X1C, ctx->r17) = 0;
            goto L_8024A140;
    }
    goto skip_0;
    // 0x8024A0BC: sh          $zero, 0x1C($s1)
    MEM_H(0X1C, ctx->r17) = 0;
    skip_0:
L_8024A0C0:
    // 0x8024A0C0: lbu         $v0, 0x3($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X3);
    // 0x8024A0C4: addiu       $v1, $s0, 0x1
    ctx->r3 = ADD32(ctx->r16, 0X1);
    // 0x8024A0C8: addu        $s0, $v1, $zero
    ctx->r16 = ADD32(ctx->r3, 0);
    // 0x8024A0CC: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8024A0D0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024A0D4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8024A0D8: lh          $v0, 0x23A0($at)
    ctx->r2 = MEM_H(ctx->r1, 0X23A0);
    // 0x8024A0DC: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8024A0E0: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8024A0E4: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8024A0E8: bne         $v1, $zero, L_8024A07C
    if (ctx->r3 != 0) {
        // 0x8024A0EC: sll         $v0, $s0, 16
        ctx->r2 = S32(ctx->r16 << 16);
            goto L_8024A07C;
    }
    // 0x8024A0EC: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
L_8024A0F0:
    // 0x8024A0F0: sll         $v0, $s5, 16
    ctx->r2 = S32(ctx->r21 << 16);
    // 0x8024A0F4: beql        $v0, $zero, L_8024A140
    if (ctx->r2 == 0) {
        // 0x8024A0F8: sh          $zero, 0x1C($s1)
        MEM_H(0X1C, ctx->r17) = 0;
            goto L_8024A140;
    }
    goto skip_1;
    // 0x8024A0F8: sh          $zero, 0x1C($s1)
    MEM_H(0X1C, ctx->r17) = 0;
    skip_1:
    // 0x8024A0FC: lhu         $v0, 0x1C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X1C);
    // 0x8024A100: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024A104: sh          $v0, 0x1C($s1)
    MEM_H(0X1C, ctx->r17) = ctx->r2;
    // 0x8024A108: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8024A10C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8024A110: slti        $v0, $v0, 0x10
    ctx->r2 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x8024A114: bne         $v0, $zero, L_8024A140
    if (ctx->r2 != 0) {
        // 0x8024A118: nop
    
            goto L_8024A140;
    }
    // 0x8024A118: nop

    // 0x8024A11C: lbu         $v1, 0xF($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XF);
    // 0x8024A120: andi        $v0, $v1, 0x40
    ctx->r2 = ctx->r3 & 0X40;
    // 0x8024A124: bne         $v0, $zero, L_8024A134
    if (ctx->r2 != 0) {
        // 0x8024A128: sh          $zero, 0x1C($s1)
        MEM_H(0X1C, ctx->r17) = 0;
            goto L_8024A134;
    }
    // 0x8024A128: sh          $zero, 0x1C($s1)
    MEM_H(0X1C, ctx->r17) = 0;
    // 0x8024A12C: ori         $v0, $v1, 0x1
    ctx->r2 = ctx->r3 | 0X1;
    // 0x8024A130: sb          $v0, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r2;
L_8024A134:
    // 0x8024A134: lbu         $v0, 0xF($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XF);
    // 0x8024A138: andi        $v0, $v0, 0xCF
    ctx->r2 = ctx->r2 & 0XCF;
    // 0x8024A13C: sb          $v0, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r2;
L_8024A140:
    // 0x8024A140: lbu         $v0, 0x3($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X3);
    // 0x8024A144: addiu       $v1, $s6, 0x1
    ctx->r3 = ADD32(ctx->r22, 0X1);
    // 0x8024A148: addu        $s6, $v1, $zero
    ctx->r22 = ADD32(ctx->r3, 0);
    // 0x8024A14C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8024A150: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024A154: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8024A158: lh          $v0, 0x23A0($at)
    ctx->r2 = MEM_H(ctx->r1, 0X23A0);
    // 0x8024A15C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8024A160: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8024A164: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8024A168: bne         $v1, $zero, L_80249F50
    if (ctx->r3 != 0) {
        // 0x8024A16C: sll         $v0, $s6, 16
        ctx->r2 = S32(ctx->r22 << 16);
            goto L_80249F50;
    }
    // 0x8024A16C: sll         $v0, $s6, 16
    ctx->r2 = S32(ctx->r22 << 16);
L_8024A170:
    // 0x8024A170: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x8024A174: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8024A178: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8024A17C: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8024A180: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8024A184: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8024A188: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8024A18C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8024A190: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8024A194: jr          $ra
    // 0x8024A198: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8024A198: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80226C20_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226C20: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80226C24: lw          $a1, 0x2C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X2C);
    // 0x80226C28: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x80226C2C: addiu       $a2, $a2, 0x49B0
    ctx->r6 = ADD32(ctx->r6, 0X49B0);
    // 0x80226C30: bne         $v1, $zero, L_80226C50
    if (ctx->r3 != 0) {
        // 0x80226C34: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80226C50;
    }
    // 0x80226C34: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226C38: lbu         $v0, 0xE($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XE);
    // 0x80226C3C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80226C40: sb          $v1, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r3;
    // 0x80226C44: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226C48: j           L_80226C78
    // 0x80226C4C: sb          $v0, 0xE($a1)
    MEM_B(0XE, ctx->r5) = ctx->r2;
        goto L_80226C78;
    // 0x80226C4C: sb          $v0, 0xE($a1)
    MEM_B(0XE, ctx->r5) = ctx->r2;
L_80226C50:
    // 0x80226C50: bne         $v1, $v0, L_80226C78
    if (ctx->r3 != ctx->r2) {
        // 0x80226C54: nop
    
            goto L_80226C78;
    }
    // 0x80226C54: nop

    // 0x80226C58: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80226C5C: sh          $zero, 0x3332($at)
    MEM_H(0X3332, ctx->r1) = 0;
    // 0x80226C60: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80226C64: sb          $zero, 0x3334($at)
    MEM_B(0X3334, ctx->r1) = 0;
    // 0x80226C68: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80226C6C: sh          $zero, 0x3336($at)
    MEM_H(0X3336, ctx->r1) = 0;
    // 0x80226C70: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80226C74: sh          $zero, 0x3338($at)
    MEM_H(0X3338, ctx->r1) = 0;
L_80226C78:
    // 0x80226C78: lbu         $v1, 0x9($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X9);
    // 0x80226C7C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80226C80: bne         $v1, $v0, L_80226D80
    if (ctx->r3 != ctx->r2) {
        // 0x80226C84: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80226D80;
    }
    // 0x80226C84: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80226C88: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80226C8C: bne         $v0, $zero, L_80226C98
    if (ctx->r2 != 0) {
        // 0x80226C90: addiu       $v0, $zero, 0x81
        ctx->r2 = ADD32(0, 0X81);
            goto L_80226C98;
    }
    // 0x80226C90: addiu       $v0, $zero, 0x81
    ctx->r2 = ADD32(0, 0X81);
    // 0x80226C94: sb          $v0, 0x448($a2)
    MEM_B(0X448, ctx->r6) = ctx->r2;
L_80226C98:
    // 0x80226C98: lw          $a0, 0x10($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X10);
    // 0x80226C9C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x80226CA0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80226CA4: sh          $a1, 0x3336($at)
    MEM_H(0X3336, ctx->r1) = ctx->r5;
    // 0x80226CA8: xori        $v1, $a0, 0xF
    ctx->r3 = ctx->r4 ^ 0XF;
    // 0x80226CAC: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x80226CB0: xori        $v0, $a0, 0x2D
    ctx->r2 = ctx->r4 ^ 0X2D;
    // 0x80226CB4: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80226CB8: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80226CBC: beq         $v1, $zero, L_80226CD0
    if (ctx->r3 == 0) {
        // 0x80226CC0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80226CD0;
    }
    // 0x80226CC0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226CC4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80226CC8: j           L_80226D18
    // 0x80226CCC: sb          $v0, 0x3334($at)
    MEM_B(0X3334, ctx->r1) = ctx->r2;
        goto L_80226D18;
    // 0x80226CCC: sb          $v0, 0x3334($at)
    MEM_B(0X3334, ctx->r1) = ctx->r2;
L_80226CD0:
    // 0x80226CD0: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
    // 0x80226CD4: bne         $a0, $v0, L_80226CF8
    if (ctx->r4 != ctx->r2) {
        // 0x80226CD8: addiu       $v0, $zero, 0x7D
        ctx->r2 = ADD32(0, 0X7D);
            goto L_80226CF8;
    }
    // 0x80226CD8: addiu       $v0, $zero, 0x7D
    ctx->r2 = ADD32(0, 0X7D);
    // 0x80226CDC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80226CE0: sb          $zero, 0x3334($at)
    MEM_B(0X3334, ctx->r1) = 0;
    // 0x80226CE4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80226CE8: sh          $zero, 0x3332($at)
    MEM_H(0X3332, ctx->r1) = 0;
    // 0x80226CEC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80226CF0: j           L_80226D18
    // 0x80226CF4: sh          $zero, 0x3338($at)
    MEM_H(0X3338, ctx->r1) = 0;
        goto L_80226D18;
    // 0x80226CF4: sh          $zero, 0x3338($at)
    MEM_H(0X3338, ctx->r1) = 0;
L_80226CF8:
    // 0x80226CF8: bne         $a0, $v0, L_80226D18
    if (ctx->r4 != ctx->r2) {
        // 0x80226CFC: nop
    
            goto L_80226D18;
    }
    // 0x80226CFC: nop

    // 0x80226D00: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80226D04: sb          $zero, 0x3334($at)
    MEM_B(0X3334, ctx->r1) = 0;
    // 0x80226D08: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80226D0C: sh          $zero, 0x3332($at)
    MEM_H(0X3332, ctx->r1) = 0;
    // 0x80226D10: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80226D14: sh          $a1, 0x3338($at)
    MEM_H(0X3338, ctx->r1) = ctx->r5;
L_80226D18:
    // 0x80226D18: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80226D1C: lbu         $v0, 0x3334($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3334);
    // 0x80226D20: beq         $v0, $zero, L_80226E98
    if (ctx->r2 == 0) {
        // 0x80226D24: lui         $a0, 0x5555
        ctx->r4 = S32(0X5555 << 16);
            goto L_80226E98;
    }
    // 0x80226D24: lui         $a0, 0x5555
    ctx->r4 = S32(0X5555 << 16);
    // 0x80226D28: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80226D2C: lhu         $v0, 0x3332($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X3332);
    // 0x80226D30: ori         $a0, $a0, 0x5556
    ctx->r4 = ctx->r4 | 0X5556;
    // 0x80226D34: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226D38: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80226D3C: mult        $v1, $a0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80226D40: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x80226D44: mfhi        $a3
    ctx->r7 = hi;
    // 0x80226D48: subu        $v0, $a3, $v0
    ctx->r2 = SUB32(ctx->r7, ctx->r2);
    // 0x80226D4C: andi        $v1, $v0, 0x7
    ctx->r3 = ctx->r2 & 0X7;
    // 0x80226D50: sltiu       $v0, $v1, 0x8
    ctx->r2 = ctx->r3 < 0X8 ? 1 : 0;
    // 0x80226D54: beq         $v0, $zero, L_80226E84
    if (ctx->r2 == 0) {
        // 0x80226D58: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80226E84;
    }
    // 0x80226D58: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80226D5C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80226D60: addu        $at, $at, $v0
    gpr jr_addend_80226D68 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226D64: lw          $v0, 0x2AC8($at)
    ctx->r2 = ADD32(ctx->r1, 0X2AC8);
    // 0x80226D68: jr          $v0
    // 0x80226D6C: nop

    switch (jr_addend_80226D68 >> 2) {
        case 0: goto L_80226E6C; break;
        case 1: goto L_80226E7C; break;
        case 2: goto L_80226D70; break;
        case 3: goto L_80226E7C; break;
        case 4: goto L_80226E6C; break;
        case 5: goto L_80226D70; break;
        case 6: goto L_80226E6C; break;
        case 7: goto L_80226E7C; break;
        default: switch_error(__func__, 0x80226D68, 0x80252AC8);
    }
    // 0x80226D6C: nop

L_80226D70:
    // 0x80226D70: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80226D74: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80226D78: j           L_80226E84
    // 0x80226D7C: sh          $v0, 0x3338($at)
    MEM_H(0X3338, ctx->r1) = ctx->r2;
        goto L_80226E84;
    // 0x80226D7C: sh          $v0, 0x3338($at)
    MEM_H(0X3338, ctx->r1) = ctx->r2;
L_80226D80:
    // 0x80226D80: bne         $v1, $v0, L_80226DA0
    if (ctx->r3 != ctx->r2) {
        // 0x80226D84: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_80226DA0;
    }
    // 0x80226D84: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80226D88: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80226D8C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80226D90: sh          $v0, 0x3336($at)
    MEM_H(0X3336, ctx->r1) = ctx->r2;
    // 0x80226D94: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80226D98: j           L_80226E98
    // 0x80226D9C: sh          $v0, 0x3338($at)
    MEM_H(0X3338, ctx->r1) = ctx->r2;
        goto L_80226E98;
    // 0x80226D9C: sh          $v0, 0x3338($at)
    MEM_H(0X3338, ctx->r1) = ctx->r2;
L_80226DA0:
    // 0x80226DA0: bne         $v1, $v0, L_80226E98
    if (ctx->r3 != ctx->r2) {
        // 0x80226DA4: nop
    
            goto L_80226E98;
    }
    // 0x80226DA4: nop

    // 0x80226DA8: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80226DAC: bne         $v0, $zero, L_80226DC0
    if (ctx->r2 != 0) {
        // 0x80226DB0: addiu       $v1, $zero, 0x4
        ctx->r3 = ADD32(0, 0X4);
            goto L_80226DC0;
    }
    // 0x80226DB0: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x80226DB4: addiu       $v0, $zero, 0x82
    ctx->r2 = ADD32(0, 0X82);
    // 0x80226DB8: sb          $v0, 0x448($a2)
    MEM_B(0X448, ctx->r6) = ctx->r2;
    // 0x80226DBC: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
L_80226DC0:
    // 0x80226DC0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80226DC4: sh          $v1, 0x3336($at)
    MEM_H(0X3336, ctx->r1) = ctx->r3;
    // 0x80226DC8: addiu       $v1, $zero, 0xA
    ctx->r3 = ADD32(0, 0XA);
    // 0x80226DCC: bne         $v0, $v1, L_80226DDC
    if (ctx->r2 != ctx->r3) {
        // 0x80226DD0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80226DDC;
    }
    // 0x80226DD0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226DD4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80226DD8: sb          $v0, 0x3334($at)
    MEM_B(0X3334, ctx->r1) = ctx->r2;
L_80226DDC:
    // 0x80226DDC: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80226DE0: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80226DE4: bne         $v1, $v0, L_80226E04
    if (ctx->r3 != ctx->r2) {
        // 0x80226DE8: nop
    
            goto L_80226E04;
    }
    // 0x80226DE8: nop

    // 0x80226DEC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80226DF0: sb          $zero, 0x3334($at)
    MEM_B(0X3334, ctx->r1) = 0;
    // 0x80226DF4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80226DF8: sh          $zero, 0x3332($at)
    MEM_H(0X3332, ctx->r1) = 0;
    // 0x80226DFC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80226E00: sh          $zero, 0x3338($at)
    MEM_H(0X3338, ctx->r1) = 0;
L_80226E04:
    // 0x80226E04: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80226E08: lbu         $v0, 0x3334($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3334);
    // 0x80226E0C: beq         $v0, $zero, L_80226E98
    if (ctx->r2 == 0) {
        // 0x80226E10: lui         $a0, 0x5555
        ctx->r4 = S32(0X5555 << 16);
            goto L_80226E98;
    }
    // 0x80226E10: lui         $a0, 0x5555
    ctx->r4 = S32(0X5555 << 16);
    // 0x80226E14: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80226E18: lhu         $v0, 0x3332($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X3332);
    // 0x80226E1C: ori         $a0, $a0, 0x5556
    ctx->r4 = ctx->r4 | 0X5556;
    // 0x80226E20: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226E24: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80226E28: mult        $v1, $a0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80226E2C: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x80226E30: mfhi        $a3
    ctx->r7 = hi;
    // 0x80226E34: subu        $v0, $a3, $v0
    ctx->r2 = SUB32(ctx->r7, ctx->r2);
    // 0x80226E38: andi        $v1, $v0, 0x7
    ctx->r3 = ctx->r2 & 0X7;
    // 0x80226E3C: sltiu       $v0, $v1, 0x8
    ctx->r2 = ctx->r3 < 0X8 ? 1 : 0;
    // 0x80226E40: beq         $v0, $zero, L_80226E84
    if (ctx->r2 == 0) {
        // 0x80226E44: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80226E84;
    }
    // 0x80226E44: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80226E48: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80226E4C: addu        $at, $at, $v0
    gpr jr_addend_80226E54 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226E50: lw          $v0, 0x2AE8($at)
    ctx->r2 = ADD32(ctx->r1, 0X2AE8);
    // 0x80226E54: jr          $v0
    // 0x80226E58: nop

    switch (jr_addend_80226E54 >> 2) {
        case 0: goto L_80226E5C; break;
        case 1: goto L_80226E7C; break;
        case 2: goto L_80226E6C; break;
        case 3: goto L_80226E7C; break;
        case 4: goto L_80226E5C; break;
        case 5: goto L_80226E6C; break;
        case 6: goto L_80226E5C; break;
        case 7: goto L_80226E7C; break;
        default: switch_error(__func__, 0x80226E54, 0x80252AE8);
    }
    // 0x80226E58: nop

L_80226E5C:
    // 0x80226E5C: addiu       $v0, $zero, 0x16
    ctx->r2 = ADD32(0, 0X16);
    // 0x80226E60: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80226E64: j           L_80226E84
    // 0x80226E68: sh          $v0, 0x3338($at)
    MEM_H(0X3338, ctx->r1) = ctx->r2;
        goto L_80226E84;
    // 0x80226E68: sh          $v0, 0x3338($at)
    MEM_H(0X3338, ctx->r1) = ctx->r2;
L_80226E6C:
    // 0x80226E6C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80226E70: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80226E74: j           L_80226E84
    // 0x80226E78: sh          $v0, 0x3338($at)
    MEM_H(0X3338, ctx->r1) = ctx->r2;
        goto L_80226E84;
    // 0x80226E78: sh          $v0, 0x3338($at)
    MEM_H(0X3338, ctx->r1) = ctx->r2;
L_80226E7C:
    // 0x80226E7C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80226E80: sh          $zero, 0x3338($at)
    MEM_H(0X3338, ctx->r1) = 0;
L_80226E84:
    // 0x80226E84: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80226E88: lhu         $v0, 0x3332($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X3332);
    // 0x80226E8C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226E90: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80226E94: sh          $v0, 0x3332($at)
    MEM_H(0X3332, ctx->r1) = ctx->r2;
L_80226E98:
    // 0x80226E98: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80226E9C: lhu         $v0, 0x3336($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X3336);
    // 0x80226EA0: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80226EA4: lhu         $v1, 0x3338($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X3338);
    // 0x80226EA8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226EAC: sb          $v0, 0x4B18($at)
    MEM_B(0X4B18, ctx->r1) = ctx->r2;
    // 0x80226EB0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226EB4: jr          $ra
    // 0x80226EB8: sb          $v1, 0x4B19($at)
    MEM_B(0X4B19, ctx->r1) = ctx->r3;
    TRACE_RETURN()
    return;
    // 0x80226EB8: sb          $v1, 0x4B19($at)
    MEM_B(0X4B19, ctx->r1) = ctx->r3;
;}
RECOMP_FUNC void func_80225988_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225988: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022598C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225990: jal         0x8004EF48
    // 0x80225994: nop

    func_8004EF48_2A348(rdram, ctx);
        goto after_0;
    // 0x80225994: nop

    after_0:
    // 0x80225998: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022599C: beq         $v1, $zero, L_802259F0
    if (ctx->r3 == 0) {
        // 0x802259A0: addiu       $a0, $v1, 0x1C
        ctx->r4 = ADD32(ctx->r3, 0X1C);
            goto L_802259F0;
    }
    // 0x802259A0: addiu       $a0, $v1, 0x1C
    ctx->r4 = ADD32(ctx->r3, 0X1C);
    // 0x802259A4: addiu       $a1, $v1, 0x14
    ctx->r5 = ADD32(ctx->r3, 0X14);
    // 0x802259A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802259AC: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x802259B0: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x802259B4: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x802259B8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802259BC: sb          $v0, 0x4($v1)
    MEM_B(0X4, ctx->r3) = ctx->r2;
    // 0x802259C0: lui         $v0, 0x72C
    ctx->r2 = S32(0X72C << 16);
    // 0x802259C4: sw          $v0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r2;
    // 0x802259C8: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x802259CC: sw          $v0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r2;
    // 0x802259D0: lui         $v0, 0x145F
    ctx->r2 = S32(0X145F << 16);
    // 0x802259D4: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    // 0x802259D8: sb          $zero, 0xC($v1)
    MEM_B(0XC, ctx->r3) = 0;
    // 0x802259DC: sb          $zero, 0xD($v1)
    MEM_B(0XD, ctx->r3) = 0;
    // 0x802259E0: sb          $zero, 0xE($v1)
    MEM_B(0XE, ctx->r3) = 0;
    // 0x802259E4: sb          $zero, 0xF($v1)
    MEM_B(0XF, ctx->r3) = 0;
    // 0x802259E8: jal         0x8004DD04
    // 0x802259EC: sw          $v0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r2;
    func_8004DD04_29104(rdram, ctx);
        goto after_1;
    // 0x802259EC: sw          $v0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r2;
    after_1:
L_802259F0:
    // 0x802259F0: jal         0x8004EEAC
    // 0x802259F4: nop

    func_8004EEAC_2A2AC(rdram, ctx);
        goto after_2;
    // 0x802259F4: nop

    after_2:
    // 0x802259F8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802259FC: beq         $v1, $zero, L_80225A4C
    if (ctx->r3 == 0) {
        // 0x80225A00: addiu       $a0, $v1, 0x1C
        ctx->r4 = ADD32(ctx->r3, 0X1C);
            goto L_80225A4C;
    }
    // 0x80225A00: addiu       $a0, $v1, 0x1C
    ctx->r4 = ADD32(ctx->r3, 0X1C);
    // 0x80225A04: addiu       $a1, $v1, 0x14
    ctx->r5 = ADD32(ctx->r3, 0X14);
    // 0x80225A08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225A0C: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80225A10: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x80225A14: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x80225A18: lui         $v0, 0x7EC
    ctx->r2 = S32(0X7EC << 16);
    // 0x80225A1C: sw          $v0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r2;
    // 0x80225A20: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x80225A24: sw          $v0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r2;
    // 0x80225A28: lui         $v0, 0x145F
    ctx->r2 = S32(0X145F << 16);
    // 0x80225A2C: sb          $zero, 0x4($v1)
    MEM_B(0X4, ctx->r3) = 0;
    // 0x80225A30: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    // 0x80225A34: sb          $zero, 0xC($v1)
    MEM_B(0XC, ctx->r3) = 0;
    // 0x80225A38: sb          $zero, 0xD($v1)
    MEM_B(0XD, ctx->r3) = 0;
    // 0x80225A3C: sb          $zero, 0xE($v1)
    MEM_B(0XE, ctx->r3) = 0;
    // 0x80225A40: sb          $zero, 0xF($v1)
    MEM_B(0XF, ctx->r3) = 0;
    // 0x80225A44: jal         0x8004DD04
    // 0x80225A48: sw          $v0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r2;
    func_8004DD04_29104(rdram, ctx);
        goto after_3;
    // 0x80225A48: sw          $v0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r2;
    after_3:
L_80225A4C:
    // 0x80225A4C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80225A50: jr          $ra
    // 0x80225A54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225A54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80249740_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80249740: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80249744: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80249748: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8024974C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x80249750: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80249754: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80249758: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x8024975C: jal         0x80047284
    // 0x80249760: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    func_80047284_22684(rdram, ctx);
        goto after_0;
    // 0x80249760: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    after_0:
    // 0x80249764: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80249768: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8024976C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80249770: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80249774: lw          $v0, 0x2380($at)
    ctx->r2 = MEM_W(ctx->r1, 0X2380);
    // 0x80249778: jalr        $v0
    // 0x8024977C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x8024977C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80249780: addiu       $s1, $sp, 0x28
    ctx->r17 = ADD32(ctx->r29, 0X28);
    // 0x80249784: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80249788: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    // 0x8024978C: jal         0x8009A3B4
    // 0x80249790: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80249790: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80249794: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80249798: lhu         $v0, 0x2A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X2A);
    // 0x8024979C: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    // 0x802497A0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802497A4: addiu       $v0, $v0, -0x2D
    ctx->r2 = ADD32(ctx->r2, -0X2D);
    // 0x802497A8: sh          $v0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r2;
    // 0x802497AC: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x802497B0: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x802497B4: addiu       $v0, $s0, 0x4C
    ctx->r2 = ADD32(ctx->r16, 0X4C);
    // 0x802497B8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x802497BC: lui         $v0, 0x400
    ctx->r2 = S32(0X400 << 16);
    // 0x802497C0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x802497C4: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x802497C8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802497CC: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x802497D0: jal         0x80051E18
    // 0x802497D4: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_3;
    // 0x802497D4: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_3:
    // 0x802497D8: sw          $zero, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = 0;
    // 0x802497DC: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x802497E0: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x802497E4: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x802497E8: jr          $ra
    // 0x802497EC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x802497EC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80232F80_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232F80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80232F84: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80232F88: lbu         $v0, 0x34B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34B);
    // 0x80232F8C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80232F90: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80232F94: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80232F98: lw          $v0, 0x1178($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1178);
    // 0x80232F9C: jalr        $v0
    // 0x80232FA0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80232FA0: nop

    after_0:
    // 0x80232FA4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80232FA8: jr          $ra
    // 0x80232FAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80232FAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80242A00_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80242A00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80242A04: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80242A08: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80242A0C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80242A10: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80242A14: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80242A18: lw          $v0, 0x200C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X200C);
    // 0x80242A1C: jalr        $v0
    // 0x80242A20: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80242A20: nop

    after_0:
    // 0x80242A24: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80242A28: jr          $ra
    // 0x80242A2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80242A2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80231744_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231744: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231748: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023174C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80231750: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80231754: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x80231758: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023175C: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x80231760: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80231764: bne         $v0, $zero, L_802317D0
    if (ctx->r2 != 0) {
        // 0x80231768: addiu       $a1, $zero, 0x40
        ctx->r5 = ADD32(0, 0X40);
            goto L_802317D0;
    }
    // 0x80231768: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x8023176C: jal         0x80233334
    // 0x80231770: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_80233334_ovl10(rdram, ctx);
        goto after_0;
    // 0x80231770: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_0:
    // 0x80231774: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80231778: beq         $v0, $zero, L_802317CC
    if (ctx->r2 == 0) {
        // 0x8023177C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802317CC;
    }
    // 0x8023177C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231780: lh          $v0, 0x366($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X366);
    // 0x80231784: lh          $v1, 0x35E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X35E);
    // 0x80231788: addiu       $v0, $v0, -0x5
    ctx->r2 = ADD32(ctx->r2, -0X5);
    // 0x8023178C: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80231790: bne         $v1, $zero, L_802317A0
    if (ctx->r3 != 0) {
        // 0x80231794: addiu       $v0, $zero, 0x3C
        ctx->r2 = ADD32(0, 0X3C);
            goto L_802317A0;
    }
    // 0x80231794: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80231798: j           L_802317D0
    // 0x8023179C: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
        goto L_802317D0;
    // 0x8023179C: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
L_802317A0:
    // 0x802317A0: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x802317A4: jal         0x802332A8
    // 0x802317A8: nop

    func_802332A8_ovl10(rdram, ctx);
        goto after_1;
    // 0x802317A8: nop

    after_1:
    // 0x802317AC: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x802317B0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802317B4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802317B8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802317BC: addiu       $v1, $v1, 0x800
    ctx->r3 = ADD32(ctx->r3, 0X800);
    // 0x802317C0: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x802317C4: j           L_802317D0
    // 0x802317C8: sh          $v1, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r3;
        goto L_802317D0;
    // 0x802317C8: sh          $v1, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r3;
L_802317CC:
    // 0x802317CC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802317D0:
    // 0x802317D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802317D4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802317D8: jr          $ra
    // 0x802317DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802317DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023BE28_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023BE28: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x8023BE2C: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023BE30: slti        $v0, $v1, 0x200
    ctx->r2 = SIGNED(ctx->r3) < 0X200 ? 1 : 0;
    // 0x8023BE34: beq         $v0, $zero, L_8023BEE0
    if (ctx->r2 == 0) {
        // 0x8023BE38: sll         $v0, $a2, 16
        ctx->r2 = S32(ctx->r6 << 16);
            goto L_8023BEE0;
    }
    // 0x8023BE38: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x8023BE3C: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023BE40: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023BE44: beq         $a0, $v0, L_8023BE8C
    if (ctx->r4 == ctx->r2) {
        // 0x8023BE48: slti        $v0, $a0, 0x2
        ctx->r2 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
            goto L_8023BE8C;
    }
    // 0x8023BE48: slti        $v0, $a0, 0x2
    ctx->r2 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    // 0x8023BE4C: beql        $v0, $zero, L_8023BE64
    if (ctx->r2 == 0) {
        // 0x8023BE50: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023BE64;
    }
    goto skip_0;
    // 0x8023BE50: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8023BE54: beq         $a0, $zero, L_8023BE7C
    if (ctx->r4 == 0) {
        // 0x8023BE58: slti        $v1, $v1, -0x848
        ctx->r3 = SIGNED(ctx->r3) < -0X848 ? 1 : 0;
            goto L_8023BE7C;
    }
    // 0x8023BE58: slti        $v1, $v1, -0x848
    ctx->r3 = SIGNED(ctx->r3) < -0X848 ? 1 : 0;
    // 0x8023BE5C: j           L_8023BFE8
    // 0x8023BE60: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8023BFE8;
    // 0x8023BE60: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8023BE64:
    // 0x8023BE64: beq         $a0, $v0, L_8023BEC0
    if (ctx->r4 == ctx->r2) {
        // 0x8023BE68: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8023BEC0;
    }
    // 0x8023BE68: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023BE6C: beq         $a0, $v0, L_8023BED4
    if (ctx->r4 == ctx->r2) {
        // 0x8023BE70: addiu       $v0, $a1, -0x1000
        ctx->r2 = ADD32(ctx->r5, -0X1000);
            goto L_8023BED4;
    }
    // 0x8023BE70: addiu       $v0, $a1, -0x1000
    ctx->r2 = ADD32(ctx->r5, -0X1000);
    // 0x8023BE74: j           L_8023BFE8
    // 0x8023BE78: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8023BFE8;
    // 0x8023BE78: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8023BE7C:
    // 0x8023BE7C: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
    // 0x8023BE80: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023BE84: j           L_8023BF4C
    // 0x8023BE88: slti        $v0, $v0, 0x1000
    ctx->r2 = SIGNED(ctx->r2) < 0X1000 ? 1 : 0;
        goto L_8023BF4C;
    // 0x8023BE88: slti        $v0, $v0, 0x1000
    ctx->r2 = SIGNED(ctx->r2) < 0X1000 ? 1 : 0;
L_8023BE8C:
    // 0x8023BE8C: slti        $v1, $v1, -0x848
    ctx->r3 = SIGNED(ctx->r3) < -0X848 ? 1 : 0;
    // 0x8023BE90: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
    // 0x8023BE94: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023BE98: slti        $v0, $a0, 0x20B5
    ctx->r2 = SIGNED(ctx->r4) < 0X20B5 ? 1 : 0;
    // 0x8023BE9C: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x8023BEA0: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8023BEA4: bne         $v1, $zero, L_8023BFE8
    if (ctx->r3 != 0) {
        // 0x8023BEA8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023BFE8;
    }
    // 0x8023BEA8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023BEAC: slti        $v0, $a0, 0x1000
    ctx->r2 = SIGNED(ctx->r4) < 0X1000 ? 1 : 0;
    // 0x8023BEB0: beq         $v0, $zero, L_8023BFE8
    if (ctx->r2 == 0) {
        // 0x8023BEB4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8023BFE8;
    }
    // 0x8023BEB4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8023BEB8: j           L_8023BFE8
    // 0x8023BEBC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8023BFE8;
    // 0x8023BEBC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8023BEC0:
    // 0x8023BEC0: slti        $v0, $v1, -0x848
    ctx->r2 = SIGNED(ctx->r3) < -0X848 ? 1 : 0;
    // 0x8023BEC4: sll         $v1, $a1, 16
    ctx->r3 = S32(ctx->r5 << 16);
    // 0x8023BEC8: lui         $a0, 0x20B4
    ctx->r4 = S32(0X20B4 << 16);
    // 0x8023BECC: j           L_8023BFD8
    // 0x8023BED0: slt         $v1, $a0, $v1
    ctx->r3 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
        goto L_8023BFD8;
    // 0x8023BED0: slt         $v1, $a0, $v1
    ctx->r3 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
L_8023BED4:
    // 0x8023BED4: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x8023BED8: j           L_8023BFC0
    // 0x8023BEDC: sltiu       $v0, $v0, 0x10B5
    ctx->r2 = ctx->r2 < 0X10B5 ? 1 : 0;
        goto L_8023BFC0;
    // 0x8023BEDC: sltiu       $v0, $v0, 0x10B5
    ctx->r2 = ctx->r2 < 0X10B5 ? 1 : 0;
L_8023BEE0:
    // 0x8023BEE0: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
    // 0x8023BEE4: sra         $a3, $v0, 16
    ctx->r7 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023BEE8: slti        $v0, $a3, 0x1001
    ctx->r2 = SIGNED(ctx->r7) < 0X1001 ? 1 : 0;
    // 0x8023BEEC: bne         $v0, $zero, L_8023BF60
    if (ctx->r2 != 0) {
        // 0x8023BEF0: sll         $v0, $a2, 16
        ctx->r2 = S32(ctx->r6 << 16);
            goto L_8023BF60;
    }
    // 0x8023BEF0: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x8023BEF4: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023BEF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023BEFC: beq         $a0, $v0, L_8023BF34
    if (ctx->r4 == ctx->r2) {
        // 0x8023BF00: slti        $v0, $a0, 0x2
        ctx->r2 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
            goto L_8023BF34;
    }
    // 0x8023BF00: slti        $v0, $a0, 0x2
    ctx->r2 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    // 0x8023BF04: beql        $v0, $zero, L_8023BF1C
    if (ctx->r2 == 0) {
        // 0x8023BF08: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023BF1C;
    }
    goto skip_1;
    // 0x8023BF08: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_1:
    // 0x8023BF0C: beq         $a0, $zero, L_8023BFC0
    if (ctx->r4 == 0) {
        // 0x8023BF10: slti        $v0, $v1, 0x1A01
        ctx->r2 = SIGNED(ctx->r3) < 0X1A01 ? 1 : 0;
            goto L_8023BFC0;
    }
    // 0x8023BF10: slti        $v0, $v1, 0x1A01
    ctx->r2 = SIGNED(ctx->r3) < 0X1A01 ? 1 : 0;
    // 0x8023BF14: j           L_8023BFE8
    // 0x8023BF18: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8023BFE8;
    // 0x8023BF18: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8023BF1C:
    // 0x8023BF1C: beq         $a0, $v0, L_8023BF3C
    if (ctx->r4 == ctx->r2) {
        // 0x8023BF20: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8023BF3C;
    }
    // 0x8023BF20: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023BF24: beq         $a0, $v0, L_8023BF40
    if (ctx->r4 == ctx->r2) {
        // 0x8023BF28: slti        $v1, $v1, 0x1A01
        ctx->r3 = SIGNED(ctx->r3) < 0X1A01 ? 1 : 0;
            goto L_8023BF40;
    }
    // 0x8023BF28: slti        $v1, $v1, 0x1A01
    ctx->r3 = SIGNED(ctx->r3) < 0X1A01 ? 1 : 0;
    // 0x8023BF2C: j           L_8023BFE8
    // 0x8023BF30: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8023BFE8;
    // 0x8023BF30: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8023BF34:
    // 0x8023BF34: j           L_8023BFC0
    // 0x8023BF38: slti        $v0, $a3, 0x20B5
    ctx->r2 = SIGNED(ctx->r7) < 0X20B5 ? 1 : 0;
        goto L_8023BFC0;
    // 0x8023BF38: slti        $v0, $a3, 0x20B5
    ctx->r2 = SIGNED(ctx->r7) < 0X20B5 ? 1 : 0;
L_8023BF3C:
    // 0x8023BF3C: slti        $v1, $v1, 0x1A01
    ctx->r3 = SIGNED(ctx->r3) < 0X1A01 ? 1 : 0;
L_8023BF40:
    // 0x8023BF40: xori        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 ^ 0X1;
    // 0x8023BF44: slti        $v0, $a3, 0x20B5
    ctx->r2 = SIGNED(ctx->r7) < 0X20B5 ? 1 : 0;
    // 0x8023BF48: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
L_8023BF4C:
    // 0x8023BF4C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8023BF50: beq         $v1, $zero, L_8023BFE8
    if (ctx->r3 == 0) {
        // 0x8023BF54: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8023BFE8;
    }
    // 0x8023BF54: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8023BF58: j           L_8023BFE8
    // 0x8023BF5C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8023BFE8;
    // 0x8023BF5C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8023BF60:
    // 0x8023BF60: sra         $a1, $v0, 16
    ctx->r5 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023BF64: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023BF68: beq         $a1, $v0, L_8023BFAC
    if (ctx->r5 == ctx->r2) {
        // 0x8023BF6C: slti        $v0, $a1, 0x2
        ctx->r2 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
            goto L_8023BFAC;
    }
    // 0x8023BF6C: slti        $v0, $a1, 0x2
    ctx->r2 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
    // 0x8023BF70: beql        $v0, $zero, L_8023BF88
    if (ctx->r2 == 0) {
        // 0x8023BF74: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023BF88;
    }
    goto skip_2;
    // 0x8023BF74: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_2:
    // 0x8023BF78: beq         $a1, $zero, L_8023BFA0
    if (ctx->r5 == 0) {
        // 0x8023BF7C: addiu       $v0, $a0, -0x200
        ctx->r2 = ADD32(ctx->r4, -0X200);
            goto L_8023BFA0;
    }
    // 0x8023BF7C: addiu       $v0, $a0, -0x200
    ctx->r2 = ADD32(ctx->r4, -0X200);
    // 0x8023BF80: j           L_8023BFE8
    // 0x8023BF84: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8023BFE8;
    // 0x8023BF84: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8023BF88:
    // 0x8023BF88: beq         $a1, $v0, L_8023BFB4
    if (ctx->r5 == ctx->r2) {
        // 0x8023BF8C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8023BFB4;
    }
    // 0x8023BF8C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023BF90: beq         $a1, $v0, L_8023BFD0
    if (ctx->r5 == ctx->r2) {
        // 0x8023BF94: slti        $v0, $v1, 0x1A01
        ctx->r2 = SIGNED(ctx->r3) < 0X1A01 ? 1 : 0;
            goto L_8023BFD0;
    }
    // 0x8023BF94: slti        $v0, $v1, 0x1A01
    ctx->r2 = SIGNED(ctx->r3) < 0X1A01 ? 1 : 0;
    // 0x8023BF98: j           L_8023BFE8
    // 0x8023BF9C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8023BFE8;
    // 0x8023BF9C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8023BFA0:
    // 0x8023BFA0: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x8023BFA4: j           L_8023BFD0
    // 0x8023BFA8: sltiu       $v0, $v0, 0x1801
    ctx->r2 = ctx->r2 < 0X1801 ? 1 : 0;
        goto L_8023BFD0;
    // 0x8023BFA8: sltiu       $v0, $v0, 0x1801
    ctx->r2 = ctx->r2 < 0X1801 ? 1 : 0;
L_8023BFAC:
    // 0x8023BFAC: j           L_8023BFDC
    // 0x8023BFB0: slti        $v0, $a3, -0x200
    ctx->r2 = SIGNED(ctx->r7) < -0X200 ? 1 : 0;
        goto L_8023BFDC;
    // 0x8023BFB0: slti        $v0, $a3, -0x200
    ctx->r2 = SIGNED(ctx->r7) < -0X200 ? 1 : 0;
L_8023BFB4:
    // 0x8023BFB4: addiu       $v0, $a0, -0x200
    ctx->r2 = ADD32(ctx->r4, -0X200);
    // 0x8023BFB8: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x8023BFBC: sltiu       $v0, $v0, 0x1801
    ctx->r2 = ctx->r2 < 0X1801 ? 1 : 0;
L_8023BFC0:
    // 0x8023BFC0: bne         $v0, $zero, L_8023BFE8
    if (ctx->r2 != 0) {
        // 0x8023BFC4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8023BFE8;
    }
    // 0x8023BFC4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8023BFC8: j           L_8023BFE8
    // 0x8023BFCC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8023BFE8;
    // 0x8023BFCC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8023BFD0:
    // 0x8023BFD0: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x8023BFD4: slti        $v1, $a3, -0x200
    ctx->r3 = SIGNED(ctx->r7) < -0X200 ? 1 : 0;
L_8023BFD8:
    // 0x8023BFD8: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
L_8023BFDC:
    // 0x8023BFDC: bne         $v0, $zero, L_8023BFE8
    if (ctx->r2 != 0) {
        // 0x8023BFE0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023BFE8;
    }
    // 0x8023BFE0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023BFE4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8023BFE8:
    // 0x8023BFE8: jr          $ra
    // 0x8023BFEC: nop

    TRACE_RETURN()
    return;
    // 0x8023BFEC: nop

;}
RECOMP_FUNC void func_80226F1C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226F1C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226F20: sb          $zero, 0x4B18($at)
    MEM_B(0X4B18, ctx->r1) = 0;
    // 0x80226F24: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226F28: jr          $ra
    // 0x80226F2C: sb          $zero, 0x4B19($at)
    MEM_B(0X4B19, ctx->r1) = 0;
    TRACE_RETURN()
    return;
    // 0x80226F2C: sb          $zero, 0x4B19($at)
    MEM_B(0X4B19, ctx->r1) = 0;
;}
RECOMP_FUNC void func_80233094_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233094: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80233098: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023309C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802330A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802330A4: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802330A8: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x802330AC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x802330B0: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x802330B4: jal         0x8004F820
    // 0x802330B8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x802330B8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x802330BC: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x802330C0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802330C4: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x802330C8: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x802330CC: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x802330D0: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x802330D4: bne         $v0, $zero, L_802330F8
    if (ctx->r2 != 0) {
        // 0x802330D8: addiu       $v1, $zero, 0x9
        ctx->r3 = ADD32(0, 0X9);
            goto L_802330F8;
    }
    // 0x802330D8: addiu       $v1, $zero, 0x9
    ctx->r3 = ADD32(0, 0X9);
    // 0x802330DC: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x802330E0: lbu         $a0, 0x34B($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X34B);
    // 0x802330E4: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x802330E8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x802330EC: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x802330F0: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    // 0x802330F4: sb          $a0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r4;
L_802330F8:
    // 0x802330F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802330FC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80233100: jr          $ra
    // 0x80233104: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80233104: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802319D4_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802319D4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802319D8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802319DC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802319E0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802319E4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802319E8: lh          $v0, 0x362($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X362);
    // 0x802319EC: bne         $v0, $zero, L_80231A2C
    if (ctx->r2 != 0) {
        // 0x802319F0: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_80231A2C;
    }
    // 0x802319F0: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x802319F4: lh          $v0, 0x35C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X35C);
    // 0x802319F8: bne         $v0, $zero, L_80231A20
    if (ctx->r2 != 0) {
        // 0x802319FC: nop
    
            goto L_80231A20;
    }
    // 0x802319FC: nop

    // 0x80231A00: lh          $v1, 0x360($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X360);
    // 0x80231A04: lh          $v0, 0x366($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X366);
    // 0x80231A08: bne         $v1, $v0, L_80231A20
    if (ctx->r3 != ctx->r2) {
        // 0x80231A0C: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80231A20;
    }
    // 0x80231A0C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80231A10: lhu         $v0, 0x352($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X352);
    // 0x80231A14: addiu       $a1, $s0, 0x354
    ctx->r5 = ADD32(ctx->r16, 0X354);
    // 0x80231A18: j           L_80231A5C
    // 0x80231A1C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
        goto L_80231A5C;
    // 0x80231A1C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
L_80231A20:
    // 0x80231A20: lh          $v0, 0x1A($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X1A);
    // 0x80231A24: beq         $v0, $zero, L_80231A8C
    if (ctx->r2 == 0) {
        // 0x80231A28: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80231A8C;
    }
    // 0x80231A28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80231A2C:
    // 0x80231A2C: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x80231A30: bne         $v0, $zero, L_80231A8C
    if (ctx->r2 != 0) {
        // 0x80231A34: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80231A8C;
    }
    // 0x80231A34: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80231A38: lh          $v1, 0x18($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X18);
    // 0x80231A3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231A40: bne         $v1, $v0, L_80231A8C
    if (ctx->r3 != ctx->r2) {
        // 0x80231A44: addiu       $a1, $s1, 0xC
        ctx->r5 = ADD32(ctx->r17, 0XC);
            goto L_80231A8C;
    }
    // 0x80231A44: addiu       $a1, $s1, 0xC
    ctx->r5 = ADD32(ctx->r17, 0XC);
    // 0x80231A48: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80231A4C: lhu         $v0, 0xA($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XA);
    // 0x80231A50: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80231A54: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80231A58: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
L_80231A5C:
    // 0x80231A5C: jal         0x8009A3B4
    // 0x80231A60: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80231A60: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_0:
    // 0x80231A64: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x80231A68: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x80231A6C: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x80231A70: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80231A74: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80231A78: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80231A7C: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80231A80: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80231A84: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x80231A88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80231A8C:
    // 0x80231A8C: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80231A90: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80231A94: jal         0x8004DA90
    // 0x80231A98: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x80231A98: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x80231A9C: lhu         $v0, 0x18($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X18);
    // 0x80231AA0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80231AA4: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
    // 0x80231AA8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80231AAC: bne         $v0, $zero, L_80231ADC
    if (ctx->r2 != 0) {
        // 0x80231AB0: nop
    
            goto L_80231ADC;
    }
    // 0x80231AB0: nop

    // 0x80231AB4: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80231AB8: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80231ABC: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80231AC0: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x80231AC4: lhu         $v1, 0x16($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X16);
    // 0x80231AC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231ACC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80231AD0: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x80231AD4: j           L_80231B2C
    // 0x80231AD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80231B2C;
    // 0x80231AD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80231ADC:
    // 0x80231ADC: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x80231AE0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80231AE4: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    // 0x80231AE8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80231AEC: bne         $v0, $zero, L_80231AFC
    if (ctx->r2 != 0) {
        // 0x80231AF0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80231AFC;
    }
    // 0x80231AF0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80231AF4: j           L_80231B2C
    // 0x80231AF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80231B2C;
    // 0x80231AF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80231AFC:
    // 0x80231AFC: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80231B00: jal         0x80233334
    // 0x80231B04: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_80233334_ovl10(rdram, ctx);
        goto after_2;
    // 0x80231B04: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_2:
    // 0x80231B08: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80231B0C: beq         $v0, $zero, L_80231B30
    if (ctx->r2 == 0) {
        // 0x80231B10: nop
    
            goto L_80231B30;
    }
    // 0x80231B10: nop

    // 0x80231B14: jal         0x80233298
    // 0x80231B18: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_80233298_ovl10(rdram, ctx);
        goto after_3;
    // 0x80231B18: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_3:
    // 0x80231B1C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80231B20: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80231B24: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    // 0x80231B28: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_80231B2C:
    // 0x80231B2C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80231B30:
    // 0x80231B30: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80231B34: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80231B38: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231B3C: jr          $ra
    // 0x80231B40: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80231B40: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022F7D0_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F7D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F7D4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F7D8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F7DC: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022F7E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022F7E4: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022F7E8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022F7EC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022F7F0: jal         0x8009A3B4
    // 0x8022F7F4: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022F7F4: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022F7F8: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022F7FC: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022F800: jal         0x8009A3B4
    // 0x8022F804: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022F804: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022F808: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022F80C: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022F810: jal         0x8009A3B4
    // 0x8022F814: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022F814: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022F818: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022F81C: jal         0x800A3450
    // 0x8022F820: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x8022F820: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    after_3:
    // 0x8022F824: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8022F828: sh          $v0, 0x36A($s0)
    MEM_H(0X36A, ctx->r16) = ctx->r2;
    // 0x8022F82C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022F830: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8022F834: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022F838: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X990);
    // 0x8022F83C: jalr        $v0
    // 0x8022F840: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x8022F840: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8022F844: lhu         $v0, 0x368($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X368);
    // 0x8022F848: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022F84C: beq         $v0, $zero, L_8022F868
    if (ctx->r2 == 0) {
        // 0x8022F850: nop
    
            goto L_8022F868;
    }
    // 0x8022F850: nop

    // 0x8022F854: lhu         $v0, 0x368($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X368);
    // 0x8022F858: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022F85C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8022F860: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
    // 0x8022F864: sh          $v0, 0x368($s0)
    MEM_H(0X368, ctx->r16) = ctx->r2;
L_8022F868:
    // 0x8022F868: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x8022F86C: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022F870: beq         $v0, $a1, L_8022F888
    if (ctx->r2 == ctx->r5) {
        // 0x8022F874: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022F888;
    }
    // 0x8022F874: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F878: jal         0x80050294
    // 0x8022F87C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x8022F87C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x8022F880: j           L_8022F890
    // 0x8022F884: nop

        goto L_8022F890;
    // 0x8022F884: nop

L_8022F888:
    // 0x8022F888: jal         0x8005044C
    // 0x8022F88C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_6;
    // 0x8022F88C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
L_8022F890:
    // 0x8022F890: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022F894: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022F898: beq         $v0, $zero, L_8022F8B0
    if (ctx->r2 == 0) {
        // 0x8022F89C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022F8B0;
    }
    // 0x8022F89C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F8A0: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x8022F8A4: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8022F8A8: jal         0x8003B564
    // 0x8022F8AC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_7;
    // 0x8022F8AC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_7:
L_8022F8B0:
    // 0x8022F8B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022F8B4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F8B8: jr          $ra
    // 0x8022F8BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F8BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802469D8_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802469D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802469DC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802469E0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802469E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802469E8: lw          $v0, 0xC0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC0);
    // 0x802469EC: lui         $v1, 0x8FF
    ctx->r3 = S32(0X8FF << 16);
    // 0x802469F0: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x802469F4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802469F8: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x802469FC: bne         $v0, $v1, L_80246A4C
    if (ctx->r2 != ctx->r3) {
        // 0x80246A00: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80246A4C;
    }
    // 0x80246A00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80246A04: lw          $v0, 0xB8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XB8);
    // 0x80246A08: sh          $zero, 0x4C($v0)
    MEM_H(0X4C, ctx->r2) = 0;
    // 0x80246A0C: sh          $zero, 0x44($v0)
    MEM_H(0X44, ctx->r2) = 0;
    // 0x80246A10: lw          $v1, 0xB8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XB8);
    // 0x80246A14: addiu       $a0, $zero, 0x18A
    ctx->r4 = ADD32(0, 0X18A);
    // 0x80246A18: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80246A1C: sb          $v0, 0x8($v1)
    MEM_B(0X8, ctx->r3) = ctx->r2;
    // 0x80246A20: lbu         $v1, 0xB($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XB);
    // 0x80246A24: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80246A28: addiu       $v0, $zero, 0x300
    ctx->r2 = ADD32(0, 0X300);
    // 0x80246A2C: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80246A30: sh          $zero, 0x50($s0)
    MEM_H(0X50, ctx->r16) = 0;
    // 0x80246A34: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    // 0x80246A38: sh          $zero, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = 0;
    // 0x80246A3C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80246A40: jal         0x8002A33C
    // 0x80246A44: sb          $v1, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r3;
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x80246A44: sb          $v1, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r3;
    after_0:
    // 0x80246A48: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80246A4C:
    // 0x80246A4C: jal         0x80246FC8
    // 0x80246A50: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80246FC8_ovl10(rdram, ctx);
        goto after_1;
    // 0x80246A50: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x80246A54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80246A58: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80246A5C: jr          $ra
    // 0x80246A60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80246A60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022DCFC_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DCFC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022DD00: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022DD04: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022DD08: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022DD0C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022DD10: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022DD14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022DD18: beq         $v1, $v0, L_8022DDD8
    if (ctx->r3 == ctx->r2) {
        // 0x8022DD1C: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_8022DDD8;
    }
    // 0x8022DD1C: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022DD20: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022DD24: beql        $v0, $zero, L_8022DD3C
    if (ctx->r2 == 0) {
        // 0x8022DD28: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022DD3C;
    }
    goto skip_0;
    // 0x8022DD28: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022DD2C: beq         $v1, $zero, L_8022DD54
    if (ctx->r3 == 0) {
        // 0x8022DD30: nop
    
            goto L_8022DD54;
    }
    // 0x8022DD30: nop

    // 0x8022DD34: j           L_8022DF3C
    // 0x8022DD38: nop

        goto L_8022DF3C;
    // 0x8022DD38: nop

L_8022DD3C:
    // 0x8022DD3C: beq         $v1, $v0, L_8022DEC4
    if (ctx->r3 == ctx->r2) {
        // 0x8022DD40: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022DEC4;
    }
    // 0x8022DD40: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022DD44: beq         $v1, $v0, L_8022DEF0
    if (ctx->r3 == ctx->r2) {
        // 0x8022DD48: nop
    
            goto L_8022DEF0;
    }
    // 0x8022DD48: nop

    // 0x8022DD4C: j           L_8022DF3C
    // 0x8022DD50: nop

        goto L_8022DF3C;
    // 0x8022DD50: nop

L_8022DD54:
    // 0x8022DD54: jal         0x8004EFE4
    // 0x8022DD58: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_0;
    // 0x8022DD58: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    after_0:
    // 0x8022DD5C: bne         $v0, $zero, L_8022DD7C
    if (ctx->r2 != 0) {
        // 0x8022DD60: sw          $v0, 0x380($s0)
        MEM_W(0X380, ctx->r16) = ctx->r2;
            goto L_8022DD7C;
    }
    // 0x8022DD60: sw          $v0, 0x380($s0)
    MEM_W(0X380, ctx->r16) = ctx->r2;
    // 0x8022DD64: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x8022DD68: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022DD6C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022DD70: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8022DD74: j           L_8022DF3C
    // 0x8022DD78: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
        goto L_8022DF3C;
    // 0x8022DD78: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
L_8022DD7C:
    // 0x8022DD7C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8022DD80: sb          $a0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r4;
    // 0x8022DD84: lw          $v1, 0x380($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X380);
    // 0x8022DD88: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022DD8C: sb          $v0, 0x8($v1)
    MEM_B(0X8, ctx->r3) = ctx->r2;
    // 0x8022DD90: lw          $v1, 0x380($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X380);
    // 0x8022DD94: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022DD98: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8022DD9C: lw          $v1, 0x380($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X380);
    // 0x8022DDA0: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022DDA4: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    // 0x8022DDA8: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8022DDAC: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x8022DDB0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022DDB4: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x8022DDB8: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
    // 0x8022DDBC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022DDC0: sb          $a0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r4;
    // 0x8022DDC4: sh          $zero, 0x350($s0)
    MEM_H(0X350, ctx->r16) = 0;
    // 0x8022DDC8: sb          $v0, 0x10B($s0)
    MEM_B(0X10B, ctx->r16) = ctx->r2;
    // 0x8022DDCC: sb          $v0, 0x10F($s0)
    MEM_B(0X10F, ctx->r16) = ctx->r2;
    // 0x8022DDD0: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022DDD4: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
L_8022DDD8:
    // 0x8022DDD8: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022DDDC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022DDE0: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022DDE4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022DDE8: bltz        $v0, L_8022DE84
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022DDEC: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022DE84;
    }
    // 0x8022DDEC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022DDF0: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022DDF4: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022DDF8: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022DDFC: jal         0x8004F820
    // 0x8022DE00: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x8022DE00: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    after_1:
    // 0x8022DE04: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022DE08: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    // 0x8022DE0C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022DE10: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022DE14: addiu       $a0, $a0, -0x4
    ctx->r4 = ADD32(ctx->r4, -0X4);
    // 0x8022DE18: sh          $a0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r4;
    // 0x8022DE1C: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022DE20: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022DE24: sw          $a0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r4;
    // 0x8022DE28: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x8022DE2C: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x8022DE30: sh          $v0, 0x14($v1)
    MEM_H(0X14, ctx->r3) = ctx->r2;
    // 0x8022DE34: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x8022DE38: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x8022DE3C: addiu       $v0, $v0, -0x64
    ctx->r2 = ADD32(ctx->r2, -0X64);
    // 0x8022DE40: sh          $v0, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r2;
    // 0x8022DE44: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x8022DE48: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x8022DE4C: sh          $v0, 0x18($v1)
    MEM_H(0X18, ctx->r3) = ctx->r2;
    // 0x8022DE50: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x8022DE54: lh          $v0, 0x14($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X14);
    // 0x8022DE58: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022DE5C: sw          $v0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r2;
    // 0x8022DE60: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x8022DE64: lh          $v0, 0x16($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X16);
    // 0x8022DE68: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022DE6C: sw          $v0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r2;
    // 0x8022DE70: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x8022DE74: lh          $v0, 0x18($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X18);
    // 0x8022DE78: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022DE7C: j           L_8022DF3C
    // 0x8022DE80: sw          $v0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r2;
        goto L_8022DF3C;
    // 0x8022DE80: sw          $v0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r2;
L_8022DE84:
    // 0x8022DE84: lw          $v0, 0x38($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X38);
    // 0x8022DE88: sb          $zero, 0x8($v0)
    MEM_B(0X8, ctx->r2) = 0;
    // 0x8022DE8C: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x8022DE90: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022DE94: sh          $v0, 0x64($v1)
    MEM_H(0X64, ctx->r3) = ctx->r2;
    // 0x8022DE98: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x8022DE9C: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x8022DEA0: sw          $v0, 0x9C($v1)
    MEM_W(0X9C, ctx->r3) = ctx->r2;
    // 0x8022DEA4: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x8022DEA8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022DEAC: sw          $v0, 0xA0($v1)
    MEM_W(0XA0, ctx->r3) = ctx->r2;
    // 0x8022DEB0: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022DEB4: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x8022DEB8: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022DEBC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022DEC0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022DEC4:
    // 0x8022DEC4: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022DEC8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022DECC: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022DED0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022DED4: bgez        $v0, L_8022DF3C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022DED8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022DF3C;
    }
    // 0x8022DED8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022DEDC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022DEE0: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x8022DEE4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022DEE8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022DEEC: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_8022DEF0:
    // 0x8022DEF0: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022DEF4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022DEF8: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022DEFC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022DF00: bgez        $v0, L_8022DF28
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022DF04: addiu       $v1, $zero, 0xF
        ctx->r3 = ADD32(0, 0XF);
            goto L_8022DF28;
    }
    // 0x8022DF04: addiu       $v1, $zero, 0xF
    ctx->r3 = ADD32(0, 0XF);
    // 0x8022DF08: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022DF0C: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    // 0x8022DF10: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022DF14: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8022DF18: sb          $v1, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r3;
    // 0x8022DF1C: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8022DF20: j           L_8022DF3C
    // 0x8022DF24: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
        goto L_8022DF3C;
    // 0x8022DF24: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_8022DF28:
    // 0x8022DF28: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x8022DF2C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8022DF30: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022DF34: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022DF38: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_8022DF3C:
    // 0x8022DF3C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022DF40: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022DF44: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022DF48: jr          $ra
    // 0x8022DF4C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022DF4C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8024A76C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024A76C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8024A770: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8024A774: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8024A778: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8024A77C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8024A780: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8024A784: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x8024A788: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8024A78C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024A790: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8024A794: lh          $v0, 0x23A0($at)
    ctx->r2 = MEM_H(ctx->r1, 0X23A0);
    // 0x8024A798: blez        $v0, L_8024A808
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8024A79C: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_8024A808;
    }
    // 0x8024A79C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x8024A7A0: lui         $s2, 0x8021
    ctx->r18 = S32(0X8021 << 16);
    // 0x8024A7A4: addiu       $s2, $s2, -0x2100
    ctx->r18 = ADD32(ctx->r18, -0X2100);
    // 0x8024A7A8: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
L_8024A7AC:
    // 0x8024A7AC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8024A7B0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024A7B4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8024A7B8: lbu         $v0, 0x35C0($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X35C0);
    // 0x8024A7BC: sll         $a0, $v0, 3
    ctx->r4 = S32(ctx->r2 << 3);
    // 0x8024A7C0: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8024A7C4: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x8024A7C8: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x8024A7CC: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x8024A7D0: jal         0x8024A820
    // 0x8024A7D4: addu        $a0, $a0, $s2
    ctx->r4 = ADD32(ctx->r4, ctx->r18);
    func_8024A820_ovl10(rdram, ctx);
        goto after_0;
    // 0x8024A7D4: addu        $a0, $a0, $s2
    ctx->r4 = ADD32(ctx->r4, ctx->r18);
    after_0:
    // 0x8024A7D8: lbu         $v1, 0x3($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X3);
    // 0x8024A7DC: addiu       $v0, $s0, 0x1
    ctx->r2 = ADD32(ctx->r16, 0X1);
    // 0x8024A7E0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8024A7E4: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8024A7E8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024A7EC: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8024A7F0: lh          $v1, 0x23A0($at)
    ctx->r3 = MEM_H(ctx->r1, 0X23A0);
    // 0x8024A7F4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8024A7F8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8024A7FC: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8024A800: bne         $v0, $zero, L_8024A7AC
    if (ctx->r2 != 0) {
        // 0x8024A804: sll         $v0, $s0, 16
        ctx->r2 = S32(ctx->r16 << 16);
            goto L_8024A7AC;
    }
    // 0x8024A804: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
L_8024A808:
    // 0x8024A808: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8024A80C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8024A810: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8024A814: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8024A818: jr          $ra
    // 0x8024A81C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8024A81C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80238FA8_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238FA8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80238FAC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80238FB0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80238FB4: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x80238FB8: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80238FBC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80238FC0: lw          $v1, 0x31C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X31C);
    // 0x80238FC4: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x80238FC8: and         $a0, $v1, $v0
    ctx->r4 = ctx->r3 & ctx->r2;
    // 0x80238FCC: beq         $a0, $zero, L_80239094
    if (ctx->r4 == 0) {
        // 0x80238FD0: addiu       $s1, $s0, 0x308
        ctx->r17 = ADD32(ctx->r16, 0X308);
            goto L_80239094;
    }
    // 0x80238FD0: addiu       $s1, $s0, 0x308
    ctx->r17 = ADD32(ctx->r16, 0X308);
    // 0x80238FD4: lui         $v0, 0x3800
    ctx->r2 = S32(0X3800 << 16);
    // 0x80238FD8: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x80238FDC: beql        $v0, $zero, L_8023908C
    if (ctx->r2 == 0) {
        // 0x80238FE0: addiu       $a0, $zero, 0xA3
        ctx->r4 = ADD32(0, 0XA3);
            goto L_8023908C;
    }
    goto skip_0;
    // 0x80238FE0: addiu       $a0, $zero, 0xA3
    ctx->r4 = ADD32(0, 0XA3);
    skip_0:
    // 0x80238FE4: lw          $v0, 0x33C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X33C);
    // 0x80238FE8: lbu         $v1, 0xF($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0XF);
    // 0x80238FEC: ori         $v1, $v1, 0x1
    ctx->r3 = ctx->r3 | 0X1;
    // 0x80238FF0: sb          $v1, 0xF($v0)
    MEM_B(0XF, ctx->r2) = ctx->r3;
    // 0x80238FF4: lh          $v0, 0x6E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6E);
    // 0x80238FF8: blez        $v0, L_8023901C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80238FFC: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8023901C;
    }
    // 0x80238FFC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80239000: lhu         $v0, 0x6E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6E);
    // 0x80239004: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    // 0x80239008: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8023900C: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    // 0x80239010: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80239014: bgtz        $v0, L_80239068
    if (SIGNED(ctx->r2) > 0) {
        // 0x80239018: addiu       $a0, $zero, 0xA0
        ctx->r4 = ADD32(0, 0XA0);
            goto L_80239068;
    }
    // 0x80239018: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
L_8023901C:
    // 0x8023901C: lw          $v0, 0x33C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X33C);
    // 0x80239020: lb          $v0, 0xE($v0)
    ctx->r2 = MEM_B(ctx->r2, 0XE);
    // 0x80239024: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x80239028: bne         $v0, $zero, L_80239068
    if (ctx->r2 != 0) {
        // 0x8023902C: addiu       $a0, $zero, 0xA0
        ctx->r4 = ADD32(0, 0XA0);
            goto L_80239068;
    }
    // 0x8023902C: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x80239030: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
    // 0x80239034: jal         0x8002A33C
    // 0x80239038: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x80239038: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x8023903C: lhu         $v1, 0x308($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X308);
    // 0x80239040: lw          $a0, 0x33C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X33C);
    // 0x80239044: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80239048: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8023904C: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80239050: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x80239054: andi        $v1, $v1, 0xFFFD
    ctx->r3 = ctx->r3 & 0XFFFD;
    // 0x80239058: ori         $v1, $v1, 0x4
    ctx->r3 = ctx->r3 | 0X4;
    // 0x8023905C: sh          $v1, 0x308($s0)
    MEM_H(0X308, ctx->r16) = ctx->r3;
    // 0x80239060: j           L_80239070
    // 0x80239064: sb          $v0, 0xE($a0)
    MEM_B(0XE, ctx->r4) = ctx->r2;
        goto L_80239070;
    // 0x80239064: sb          $v0, 0xE($a0)
    MEM_B(0XE, ctx->r4) = ctx->r2;
L_80239068:
    // 0x80239068: jal         0x8002A33C
    // 0x8023906C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x8023906C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_1:
L_80239070:
    // 0x80239070: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x80239074: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80239078: lw          $v1, 0x34($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X34);
    // 0x8023907C: lbu         $v0, 0xF($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XF);
    // 0x80239080: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80239084: j           L_80239094
    // 0x80239088: sb          $v0, 0xF($v1)
    MEM_B(0XF, ctx->r3) = ctx->r2;
        goto L_80239094;
    // 0x80239088: sb          $v0, 0xF($v1)
    MEM_B(0XF, ctx->r3) = ctx->r2;
L_8023908C:
    // 0x8023908C: jal         0x8002A33C
    // 0x80239090: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x80239090: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_2:
L_80239094:
    // 0x80239094: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80239098: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8023909C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802390A0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802390A4: jr          $ra
    // 0x802390A8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802390A8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80231E3C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231E3C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80231E40: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231E44: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80231E48: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80231E4C: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80231E50: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80231E54: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80231E58: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80231E5C: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x80231E60: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x80231E64: bne         $v1, $v0, L_80231E80
    if (ctx->r3 != ctx->r2) {
        // 0x80231E68: addiu       $s2, $s0, 0x348
        ctx->r18 = ADD32(ctx->r16, 0X348);
            goto L_80231E80;
    }
    // 0x80231E68: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x80231E6C: lui         $s1, 0x8025
    ctx->r17 = S32(0X8025 << 16);
    // 0x80231E70: addiu       $s1, $s1, 0x10F0
    ctx->r17 = ADD32(ctx->r17, 0X10F0);
    // 0x80231E74: lui         $s3, 0x8025
    ctx->r19 = S32(0X8025 << 16);
    // 0x80231E78: j           L_80231E90
    // 0x80231E7C: addiu       $s3, $s3, 0x1110
    ctx->r19 = ADD32(ctx->r19, 0X1110);
        goto L_80231E90;
    // 0x80231E7C: addiu       $s3, $s3, 0x1110
    ctx->r19 = ADD32(ctx->r19, 0X1110);
L_80231E80:
    // 0x80231E80: lui         $s1, 0x8025
    ctx->r17 = S32(0X8025 << 16);
    // 0x80231E84: addiu       $s1, $s1, 0x10E0
    ctx->r17 = ADD32(ctx->r17, 0X10E0);
    // 0x80231E88: lui         $s3, 0x8025
    ctx->r19 = S32(0X8025 << 16);
    // 0x80231E8C: addiu       $s3, $s3, 0x1100
    ctx->r19 = ADD32(ctx->r19, 0X1100);
L_80231E90:
    // 0x80231E90: lui         $s4, 0x8025
    ctx->r20 = S32(0X8025 << 16);
    // 0x80231E94: jal         0x800A3450
    // 0x80231E98: addiu       $s4, $s4, 0x1120
    ctx->r20 = ADD32(ctx->r20, 0X1120);
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80231E98: addiu       $s4, $s4, 0x1120
    ctx->r20 = ADD32(ctx->r20, 0X1120);
    after_0:
    // 0x80231E9C: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80231EA0: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x80231EA4: lbu         $s1, 0x0($v0)
    ctx->r17 = MEM_BU(ctx->r2, 0X0);
    // 0x80231EA8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231EAC: andi        $v1, $s1, 0xFF
    ctx->r3 = ctx->r17 & 0XFF;
    // 0x80231EB0: beq         $v1, $v0, L_80231F3C
    if (ctx->r3 == ctx->r2) {
        // 0x80231EB4: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80231F3C;
    }
    // 0x80231EB4: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80231EB8: beql        $v0, $zero, L_80231ED0
    if (ctx->r2 == 0) {
        // 0x80231EBC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80231ED0;
    }
    goto skip_0;
    // 0x80231EBC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80231EC0: beq         $v1, $zero, L_80231EE0
    if (ctx->r3 == 0) {
        // 0x80231EC4: nop
    
            goto L_80231EE0;
    }
    // 0x80231EC4: nop

    // 0x80231EC8: j           L_80231FCC
    // 0x80231ECC: nop

        goto L_80231FCC;
    // 0x80231ECC: nop

L_80231ED0:
    // 0x80231ED0: beq         $v1, $v0, L_80231F50
    if (ctx->r3 == ctx->r2) {
        // 0x80231ED4: nop
    
            goto L_80231F50;
    }
    // 0x80231ED4: nop

    // 0x80231ED8: j           L_80231FCC
    // 0x80231EDC: nop

        goto L_80231FCC;
    // 0x80231EDC: nop

L_80231EE0:
    // 0x80231EE0: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80231EE4: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x80231EE8: bne         $v0, $zero, L_80231F0C
    if (ctx->r2 != 0) {
        // 0x80231EEC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80231F0C;
    }
    // 0x80231EEC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80231EF0: jal         0x800A3450
    // 0x80231EF4: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x80231EF4: nop

    after_1:
    // 0x80231EF8: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80231EFC: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x80231F00: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80231F04: beq         $v0, $zero, L_80231F18
    if (ctx->r2 == 0) {
        // 0x80231F08: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80231F18;
    }
    // 0x80231F08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80231F0C:
    // 0x80231F0C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80231F10: j           L_80231F2C
    // 0x80231F14: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80231F2C;
    // 0x80231F14: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80231F18:
    // 0x80231F18: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80231F1C: jal         0x802332A8
    // 0x80231F20: nop

    func_802332A8_ovl10(rdram, ctx);
        goto after_2;
    // 0x80231F20: nop

    after_2:
    // 0x80231F24: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80231F28: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_80231F2C:
    // 0x80231F2C: jal         0x802332E8
    // 0x80231F30: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_802332E8_ovl10(rdram, ctx);
        goto after_3;
    // 0x80231F30: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_3:
    // 0x80231F34: j           L_80231FF0
    // 0x80231F38: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
        goto L_80231FF0;
    // 0x80231F38: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
L_80231F3C:
    // 0x80231F3C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80231F40: jal         0x80233298
    // 0x80231F44: nop

    func_80233298_ovl10(rdram, ctx);
        goto after_4;
    // 0x80231F44: nop

    after_4:
    // 0x80231F48: j           L_80231FF0
    // 0x80231F4C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_80231FF0;
    // 0x80231F4C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80231F50:
    // 0x80231F50: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x80231F54: lhu         $v0, 0xC($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XC);
    // 0x80231F58: lhu         $a2, 0x14($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X14);
    // 0x80231F5C: lhu         $a1, 0x18($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X18);
    // 0x80231F60: lhu         $a0, 0x16($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X16);
    // 0x80231F64: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80231F68: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x80231F6C: sra         $a3, $a2, 17
    ctx->r7 = S32(SIGNED(ctx->r6) >> 17);
    // 0x80231F70: lhu         $v0, 0x10($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X10);
    // 0x80231F74: addu        $v1, $v1, $a3
    ctx->r3 = ADD32(ctx->r3, ctx->r7);
    // 0x80231F78: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80231F7C: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80231F80: andi        $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 & 0XFFFF;
    // 0x80231F84: slt         $v1, $v1, $a2
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x80231F88: subu        $a1, $a1, $v0
    ctx->r5 = SUB32(ctx->r5, ctx->r2);
    // 0x80231F8C: sra         $v0, $a0, 17
    ctx->r2 = S32(SIGNED(ctx->r4) >> 17);
    // 0x80231F90: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x80231F94: beq         $v1, $zero, L_80231FC4
    if (ctx->r3 == 0) {
        // 0x80231F98: sra         $a0, $a0, 16
        ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
            goto L_80231FC4;
    }
    // 0x80231F98: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80231F9C: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x80231FA0: slt         $v0, $v0, $a0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80231FA4: beq         $v0, $zero, L_80231FC4
    if (ctx->r2 == 0) {
        // 0x80231FA8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80231FC4;
    }
    // 0x80231FA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80231FAC: jal         0x802332E8
    // 0x80231FB0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_802332E8_ovl10(rdram, ctx);
        goto after_5;
    // 0x80231FB0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x80231FB4: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80231FB8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80231FBC: j           L_80231FF0
    // 0x80231FC0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_80231FF0;
    // 0x80231FC0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80231FC4:
    // 0x80231FC4: j           L_80231FF0
    // 0x80231FC8: addiu       $s1, $zero, 0xFF
    ctx->r17 = ADD32(0, 0XFF);
        goto L_80231FF0;
    // 0x80231FC8: addiu       $s1, $zero, 0xFF
    ctx->r17 = ADD32(0, 0XFF);
L_80231FCC:
    // 0x80231FCC: jal         0x800A3450
    // 0x80231FD0: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_6;
    // 0x80231FD0: nop

    after_6:
    // 0x80231FD4: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80231FD8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80231FDC: jal         0x802332A8
    // 0x80231FE0: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    func_802332A8_ovl10(rdram, ctx);
        goto after_7;
    // 0x80231FE0: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    after_7:
    // 0x80231FE4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80231FE8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231FEC: sh          $v0, 0x1E($s2)
    MEM_H(0X1E, ctx->r18) = ctx->r2;
L_80231FF0:
    // 0x80231FF0: jal         0x800A3450
    // 0x80231FF4: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_8;
    // 0x80231FF4: nop

    after_8:
    // 0x80231FF8: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80231FFC: addu        $v0, $s4, $v0
    ctx->r2 = ADD32(ctx->r20, ctx->r2);
    // 0x80232000: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80232004: andi        $v1, $s1, 0xFF
    ctx->r3 = ctx->r17 & 0XFF;
    // 0x80232008: sh          $v0, 0x8($s2)
    MEM_H(0X8, ctx->r18) = ctx->r2;
    // 0x8023200C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80232010: beq         $v1, $v0, L_80232028
    if (ctx->r3 == ctx->r2) {
        // 0x80232014: nop
    
            goto L_80232028;
    }
    // 0x80232014: nop

    // 0x80232018: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023201C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232020: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x80232024: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80232028:
    // 0x80232028: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8023202C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80232030: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80232034: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80232038: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023203C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232040: jr          $ra
    // 0x80232044: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80232044: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8023C11C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023C11C: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8023C120: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x8023C124: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x8023C128: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x8023C12C: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x8023C130: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x8023C134: sw          $ra, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r31;
    // 0x8023C138: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x8023C13C: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x8023C140: lh          $a1, 0x56($s3)
    ctx->r5 = MEM_H(ctx->r19, 0X56);
    // 0x8023C144: addiu       $a2, $zero, 0x600
    ctx->r6 = ADD32(0, 0X600);
    // 0x8023C148: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8023C14C: jal         0x8004DC2C
    // 0x8023C150: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8004DC2C_2902C(rdram, ctx);
        goto after_0;
    // 0x8023C150: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x8023C154: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x8023C158: jal         0x8004DD04
    // 0x8023C15C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_8004DD04_29104(rdram, ctx);
        goto after_1;
    // 0x8023C15C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_1:
    // 0x8023C160: jal         0x8004EFE4
    // 0x8023C164: nop

    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_2;
    // 0x8023C164: nop

    after_2:
    // 0x8023C168: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x8023C16C: beq         $s2, $zero, L_8023C234
    if (ctx->r18 == 0) {
        // 0x8023C170: addiu       $a2, $zero, 0xC80
        ctx->r6 = ADD32(0, 0XC80);
            goto L_8023C234;
    }
    // 0x8023C170: addiu       $a2, $zero, 0xC80
    ctx->r6 = ADD32(0, 0XC80);
    // 0x8023C174: addiu       $s1, $sp, 0x30
    ctx->r17 = ADD32(ctx->r29, 0X30);
    // 0x8023C178: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023C17C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023C180: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x8023C184: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023C188: sb          $v0, 0x2($s2)
    MEM_B(0X2, ctx->r18) = ctx->r2;
    // 0x8023C18C: addiu       $v0, $zero, 0x24
    ctx->r2 = ADD32(0, 0X24);
    // 0x8023C190: sb          $zero, 0x4($s2)
    MEM_B(0X4, ctx->r18) = 0;
    // 0x8023C194: sb          $v0, 0xF($s2)
    MEM_B(0XF, ctx->r18) = ctx->r2;
    // 0x8023C198: lh          $a1, 0x56($s3)
    ctx->r5 = MEM_H(ctx->r19, 0X56);
    // 0x8023C19C: addiu       $a3, $zero, 0x1900
    ctx->r7 = ADD32(0, 0X1900);
    // 0x8023C1A0: addiu       $v0, $zero, 0x480
    ctx->r2 = ADD32(0, 0X480);
    // 0x8023C1A4: jal         0x8004DC2C
    // 0x8023C1A8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_8004DC2C_2902C(rdram, ctx);
        goto after_3;
    // 0x8023C1A8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_3:
    // 0x8023C1AC: addiu       $s0, $s2, 0x1C
    ctx->r16 = ADD32(ctx->r18, 0X1C);
    // 0x8023C1B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023C1B4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023C1B8: jal         0x8009A3B4
    // 0x8023C1BC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8023C1BC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_4:
    // 0x8023C1C0: lw          $v0, 0x1C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X1C);
    // 0x8023C1C4: lw          $v1, 0x1C($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X1C);
    // 0x8023C1C8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023C1CC: sw          $v0, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->r2;
    // 0x8023C1D0: lw          $v0, 0x20($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X20);
    // 0x8023C1D4: lw          $v1, 0x20($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X20);
    // 0x8023C1D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023C1DC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023C1E0: sw          $v0, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->r2;
    // 0x8023C1E4: lw          $v0, 0x24($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X24);
    // 0x8023C1E8: lw          $v1, 0x24($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X24);
    // 0x8023C1EC: addiu       $s0, $s2, 0x14
    ctx->r16 = ADD32(ctx->r18, 0X14);
    // 0x8023C1F0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8023C1F4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023C1F8: jal         0x8004DD04
    // 0x8023C1FC: sw          $v0, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->r2;
    func_8004DD04_29104(rdram, ctx);
        goto after_5;
    // 0x8023C1FC: sw          $v0, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->r2;
    after_5:
    // 0x8023C200: lhu         $v0, 0x28($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X28);
    // 0x8023C204: addiu       $v1, $zero, 0x6000
    ctx->r3 = ADD32(0, 0X6000);
    // 0x8023C208: sh          $v1, 0x46($s2)
    MEM_H(0X46, ctx->r18) = ctx->r3;
    // 0x8023C20C: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8023C210: sh          $v0, 0x44($s2)
    MEM_H(0X44, ctx->r18) = ctx->r2;
    // 0x8023C214: lhu         $v0, 0x2C($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X2C);
    // 0x8023C218: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x8023C21C: sh          $zero, 0x4A($s2)
    MEM_H(0X4A, ctx->r18) = 0;
    // 0x8023C220: sh          $zero, 0x50($s2)
    MEM_H(0X50, ctx->r18) = 0;
    // 0x8023C224: sh          $zero, 0x4E($s2)
    MEM_H(0X4E, ctx->r18) = 0;
    // 0x8023C228: sh          $zero, 0x4C($s2)
    MEM_H(0X4C, ctx->r18) = 0;
    // 0x8023C22C: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8023C230: sh          $v0, 0x48($s2)
    MEM_H(0X48, ctx->r18) = ctx->r2;
L_8023C234:
    // 0x8023C234: jal         0x8004EFE4
    // 0x8023C238: nop

    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_6;
    // 0x8023C238: nop

    after_6:
    // 0x8023C23C: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x8023C240: beq         $s2, $zero, L_8023C308
    if (ctx->r18 == 0) {
        // 0x8023C244: addiu       $a2, $zero, 0xC80
        ctx->r6 = ADD32(0, 0XC80);
            goto L_8023C308;
    }
    // 0x8023C244: addiu       $a2, $zero, 0xC80
    ctx->r6 = ADD32(0, 0XC80);
    // 0x8023C248: addiu       $s1, $sp, 0x30
    ctx->r17 = ADD32(ctx->r29, 0X30);
    // 0x8023C24C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023C250: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023C254: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x8023C258: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023C25C: sb          $v0, 0x2($s2)
    MEM_B(0X2, ctx->r18) = ctx->r2;
    // 0x8023C260: addiu       $v0, $zero, 0x24
    ctx->r2 = ADD32(0, 0X24);
    // 0x8023C264: sb          $zero, 0x4($s2)
    MEM_B(0X4, ctx->r18) = 0;
    // 0x8023C268: sb          $v0, 0xF($s2)
    MEM_B(0XF, ctx->r18) = ctx->r2;
    // 0x8023C26C: lh          $a1, 0x56($s3)
    ctx->r5 = MEM_H(ctx->r19, 0X56);
    // 0x8023C270: addiu       $a3, $zero, 0x1900
    ctx->r7 = ADD32(0, 0X1900);
    // 0x8023C274: addiu       $v0, $zero, -0x480
    ctx->r2 = ADD32(0, -0X480);
    // 0x8023C278: jal         0x8004DC2C
    // 0x8023C27C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_8004DC2C_2902C(rdram, ctx);
        goto after_7;
    // 0x8023C27C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_7:
    // 0x8023C280: addiu       $s0, $s2, 0x1C
    ctx->r16 = ADD32(ctx->r18, 0X1C);
    // 0x8023C284: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023C288: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023C28C: jal         0x8009A3B4
    // 0x8023C290: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x8023C290: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_8:
    // 0x8023C294: lw          $v0, 0x1C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X1C);
    // 0x8023C298: lw          $v1, 0x1C($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X1C);
    // 0x8023C29C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023C2A0: sw          $v0, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->r2;
    // 0x8023C2A4: lw          $v0, 0x20($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X20);
    // 0x8023C2A8: lw          $v1, 0x20($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X20);
    // 0x8023C2AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023C2B0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023C2B4: sw          $v0, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->r2;
    // 0x8023C2B8: lw          $v0, 0x24($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X24);
    // 0x8023C2BC: lw          $v1, 0x24($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X24);
    // 0x8023C2C0: addiu       $s0, $s2, 0x14
    ctx->r16 = ADD32(ctx->r18, 0X14);
    // 0x8023C2C4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8023C2C8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023C2CC: jal         0x8004DD04
    // 0x8023C2D0: sw          $v0, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->r2;
    func_8004DD04_29104(rdram, ctx);
        goto after_9;
    // 0x8023C2D0: sw          $v0, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->r2;
    after_9:
    // 0x8023C2D4: lhu         $v0, 0x28($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X28);
    // 0x8023C2D8: addiu       $v1, $zero, 0x6000
    ctx->r3 = ADD32(0, 0X6000);
    // 0x8023C2DC: sh          $v1, 0x46($s2)
    MEM_H(0X46, ctx->r18) = ctx->r3;
    // 0x8023C2E0: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8023C2E4: sh          $v0, 0x44($s2)
    MEM_H(0X44, ctx->r18) = ctx->r2;
    // 0x8023C2E8: lhu         $v0, 0x2C($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X2C);
    // 0x8023C2EC: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x8023C2F0: sh          $zero, 0x4A($s2)
    MEM_H(0X4A, ctx->r18) = 0;
    // 0x8023C2F4: sh          $zero, 0x50($s2)
    MEM_H(0X50, ctx->r18) = 0;
    // 0x8023C2F8: sh          $zero, 0x4E($s2)
    MEM_H(0X4E, ctx->r18) = 0;
    // 0x8023C2FC: sh          $zero, 0x4C($s2)
    MEM_H(0X4C, ctx->r18) = 0;
    // 0x8023C300: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8023C304: sh          $v0, 0x48($s2)
    MEM_H(0X48, ctx->r18) = ctx->r2;
L_8023C308:
    // 0x8023C308: beq         $s1, $zero, L_8023C318
    if (ctx->r17 == 0) {
        // 0x8023C30C: addiu       $a0, $zero, 0xD0
        ctx->r4 = ADD32(0, 0XD0);
            goto L_8023C318;
    }
    // 0x8023C30C: addiu       $a0, $zero, 0xD0
    ctx->r4 = ADD32(0, 0XD0);
    // 0x8023C310: jal         0x8002A33C
    // 0x8023C314: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_10;
    // 0x8023C314: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_10:
L_8023C318:
    // 0x8023C318: lw          $ra, 0x50($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X50);
    // 0x8023C31C: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x8023C320: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x8023C324: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x8023C328: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x8023C32C: jr          $ra
    // 0x8023C330: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x8023C330: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_8024B6F8_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024B6F8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8024B6FC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8024B700: lb          $a2, 0xF($a0)
    ctx->r6 = MEM_B(ctx->r4, 0XF);
    // 0x8024B704: sll         $v0, $a2, 1
    ctx->r2 = S32(ctx->r6 << 1);
    // 0x8024B708: addu        $a1, $v0, $a2
    ctx->r5 = ADD32(ctx->r2, ctx->r6);
    // 0x8024B70C: sll         $v0, $a1, 4
    ctx->r2 = S32(ctx->r5 << 4);
    // 0x8024B710: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8024B714: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024B718: lw          $v1, -0x3B88($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3B88);
    // 0x8024B71C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8024B720: bne         $v1, $v0, L_8024B784
    if (ctx->r3 != ctx->r2) {
        // 0x8024B724: sll         $v0, $a1, 2
        ctx->r2 = S32(ctx->r5 << 2);
            goto L_8024B784;
    }
    // 0x8024B724: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // 0x8024B728: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x8024B72C: addu        $a1, $a1, $a2
    ctx->r5 = ADD32(ctx->r5, ctx->r6);
    // 0x8024B730: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x8024B734: lw          $v0, 0x4C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4C);
    // 0x8024B738: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8024B73C: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x8024B740: lw          $a0, 0x26BC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X26BC);
    // 0x8024B744: addiu       $v1, $zero, -0x4
    ctx->r3 = ADD32(0, -0X4);
    // 0x8024B748: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8024B74C: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x8024B750: lui         $v0, 0x8888
    ctx->r2 = S32(0X8888 << 16);
    // 0x8024B754: ori         $v0, $v0, 0x8889
    ctx->r2 = ctx->r2 | 0X8889;
    // 0x8024B758: multu       $a0, $v0
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8024B75C: mfhi        $a3
    ctx->r7 = hi;
    // 0x8024B760: srl         $a0, $a3, 3
    ctx->r4 = S32(U32(ctx->r7) >> 3);
    // 0x8024B764: nop

    // 0x8024B768: mult        $a0, $a0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8024B76C: mflo        $a0
    ctx->r4 = lo;
    // 0x8024B770: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8024B774: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8024B778: lw          $v0, 0x26CC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X26CC);
    // 0x8024B77C: j           L_8024B7A4
    // 0x8024B780: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
        goto L_8024B7A4;
    // 0x8024B780: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
L_8024B784:
    // 0x8024B784: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x8024B788: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8024B78C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8024B790: addiu       $a0, $a0, 0x26C0
    ctx->r4 = ADD32(ctx->r4, 0X26C0);
    // 0x8024B794: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8024B798: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8024B79C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024B7A0: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
L_8024B7A4:
    // 0x8024B7A4: jal         0x8006982C
    // 0x8024B7A8: nop

    func_8006982C_44C2C(rdram, ctx);
        goto after_0;
    // 0x8024B7A8: nop

    after_0:
    // 0x8024B7AC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8024B7B0: jr          $ra
    // 0x8024B7B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8024B7B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802467AC_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802467AC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802467B0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802467B4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802467B8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802467BC: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802467C0: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x802467C4: addiu       $v0, $v0, 0x2168
    ctx->r2 = ADD32(ctx->r2, 0X2168);
    // 0x802467C8: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x802467CC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802467D0: lbu         $v0, 0x3($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X3);
    // 0x802467D4: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x802467D8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802467DC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802467E0: lbu         $v0, 0x2150($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X2150);
    // 0x802467E4: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x802467E8: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x802467EC: lbu         $v0, 0x3($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X3);
    // 0x802467F0: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x802467F4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802467F8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802467FC: lbu         $v0, 0x2151($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X2151);
    // 0x80246800: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80246804: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x80246808: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x8024680C: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x80246810: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80246814: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x80246818: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8024681C: jal         0x8004F820
    // 0x80246820: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80246820: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_0:
    // 0x80246824: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80246828: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8024682C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80246830: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80246834: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80246838: bne         $v0, $zero, L_80246864
    if (ctx->r2 != 0) {
        // 0x8024683C: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_80246864;
    }
    // 0x8024683C: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80246840: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80246844: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80246848: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8024684C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80246850: sltiu       $v0, $v0, 0xE
    ctx->r2 = ctx->r2 < 0XE ? 1 : 0;
    // 0x80246854: beql        $v0, $zero, L_8024685C
    if (ctx->r2 == 0) {
        // 0x80246858: sb          $zero, 0xA($s0)
        MEM_B(0XA, ctx->r16) = 0;
            goto L_8024685C;
    }
    goto skip_0;
    // 0x80246858: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    skip_0:
L_8024685C:
    // 0x8024685C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80246860: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80246864:
    // 0x80246864: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80246868: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8024686C: jr          $ra
    // 0x80246870: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80246870: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8024243C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024243C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80242440: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80242444: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80242448: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8024244C: jal         0x8004F144
    // 0x80242450: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80242450: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x80242454: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80242458: beq         $s0, $zero, L_802424B4
    if (ctx->r16 == 0) {
        // 0x8024245C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802424B4;
    }
    // 0x8024245C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80242460: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80242464: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x80242468: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x8024246C: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    // 0x80242470: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x80242474: jal         0x800A3450
    // 0x80242478: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x80242478: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    after_1:
    // 0x8024247C: lhu         $a0, 0x14($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X14);
    // 0x80242480: addiu       $v1, $zero, -0x84
    ctx->r3 = ADD32(0, -0X84);
    // 0x80242484: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80242488: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
    // 0x8024248C: sh          $v1, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r3;
    // 0x80242490: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80242494: jal         0x800A3450
    // 0x80242498: sh          $a0, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r4;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x80242498: sh          $a0, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r4;
    after_2:
    // 0x8024249C: lhu         $v1, 0x18($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X18);
    // 0x802424A0: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802424A4: addiu       $v0, $v0, -0xF
    ctx->r2 = ADD32(ctx->r2, -0XF);
    // 0x802424A8: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x802424AC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802424B0: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
L_802424B4:
    // 0x802424B4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802424B8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802424BC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802424C0: jr          $ra
    // 0x802424C4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802424C4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802424C8: nop

    // 0x802424CC: nop

;}
RECOMP_FUNC void func_8023B954_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B954: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023B958: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023B95C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023B960: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023B964: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023B968: lb          $s1, 0xC($s0)
    ctx->r17 = MEM_B(ctx->r16, 0XC);
    // 0x8023B96C: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    // 0x8023B970: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8023B974: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    // 0x8023B978: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023B97C: sh          $zero, 0x4($v1)
    MEM_H(0X4, ctx->r3) = 0;
    // 0x8023B980: sh          $zero, 0x6($v1)
    MEM_H(0X6, ctx->r3) = 0;
    // 0x8023B984: sh          $zero, 0x8($v1)
    MEM_H(0X8, ctx->r3) = 0;
    // 0x8023B988: sh          $v0, 0xC($v1)
    MEM_H(0XC, ctx->r3) = ctx->r2;
    // 0x8023B98C: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8023B990: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x8023B994: lw          $a0, 0x298($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X298);
    // 0x8023B998: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023B99C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8023B9A0: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8023B9A4: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x8023B9A8: addiu       $a0, $v1, 0x28
    ctx->r4 = ADD32(ctx->r3, 0X28);
    // 0x8023B9AC: lbu         $a2, 0xA($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0XA);
    // 0x8023B9B0: sll         $s1, $s1, 3
    ctx->r17 = S32(ctx->r17 << 3);
    // 0x8023B9B4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8023B9B8: sh          $v0, 0x14($v1)
    MEM_H(0X14, ctx->r3) = ctx->r2;
    // 0x8023B9BC: sh          $v0, 0x12($v1)
    MEM_H(0X12, ctx->r3) = ctx->r2;
    // 0x8023B9C0: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8023B9C4: addiu       $v0, $v0, 0x17BC
    ctx->r2 = ADD32(ctx->r2, 0X17BC);
    // 0x8023B9C8: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
    // 0x8023B9CC: sw          $zero, 0x20($v1)
    MEM_W(0X20, ctx->r3) = 0;
    // 0x8023B9D0: sw          $zero, 0x24($v1)
    MEM_W(0X24, ctx->r3) = 0;
    // 0x8023B9D4: sw          $zero, 0x18($v1)
    MEM_W(0X18, ctx->r3) = 0;
    // 0x8023B9D8: sw          $zero, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = 0;
    // 0x8023B9DC: sh          $a2, 0x10($v1)
    MEM_H(0X10, ctx->r3) = ctx->r6;
    // 0x8023B9E0: jal         0x800540BC
    // 0x8023B9E4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800540BC_2F4BC(rdram, ctx);
        goto after_0;
    // 0x8023B9E4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8023B9E8: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8023B9EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023B9F0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023B9F4: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8023B9F8: jal         0x8004D5D4
    // 0x8023B9FC: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_1;
    // 0x8023B9FC: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_1:
    // 0x8023BA00: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8023BA04: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8023BA08: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8023BA0C: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8023BA10: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8023BA14: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8023BA18: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8023BA1C: lhu         $v0, 0x6($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X6);
    // 0x8023BA20: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8023BA24: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8023BA28: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8023BA2C: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x8023BA30: lhu         $v0, 0x2($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X2);
    // 0x8023BA34: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8023BA38: lhu         $v1, 0x4($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X4);
    // 0x8023BA3C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8023BA40: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x8023BA44: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x8023BA48: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x8023BA4C: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x8023BA50: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x8023BA54: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x8023BA58: lw          $a2, 0x298($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X298);
    // 0x8023BA5C: sh          $v1, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r3;
    // 0x8023BA60: lh          $a1, 0x18($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X18);
    // 0x8023BA64: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x8023BA68: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023BA6C: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8023BA70: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8023BA74: sw          $a0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r4;
    // 0x8023BA78: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8023BA7C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8023BA80: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x8023BA84: sw          $a1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r5;
    // 0x8023BA88: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8023BA8C: lbu         $v1, 0x8($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X8);
    // 0x8023BA90: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8023BA94: addiu       $v0, $v0, 0x17CC
    ctx->r2 = ADD32(ctx->r2, 0X17CC);
    // 0x8023BA98: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x8023BA9C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023BAA0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8023BAA4: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8023BAA8: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x8023BAAC: sh          $v1, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r3;
    // 0x8023BAB0: sh          $v1, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r3;
    // 0x8023BAB4: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    // 0x8023BAB8: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8023BABC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023BAC0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023BAC4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023BAC8: jr          $ra
    // 0x8023BACC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023BACC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80230D20_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230D20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80230D24: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80230D28: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80230D2C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80230D30: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80230D34: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80230D38: lw          $v0, 0xF4C($at)
    ctx->r2 = MEM_W(ctx->r1, 0XF4C);
    // 0x80230D3C: jalr        $v0
    // 0x80230D40: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80230D40: nop

    after_0:
    // 0x80230D44: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80230D48: jr          $ra
    // 0x80230D4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80230D4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B444_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B444: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B448: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B44C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B450: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022B454: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022B458: bne         $v0, $zero, L_8022B4A4
    if (ctx->r2 != 0) {
        // 0x8022B45C: nop
    
            goto L_8022B4A4;
    }
    // 0x8022B45C: nop

    // 0x8022B460: jal         0x8022BE40
    // 0x8022B464: nop

    func_8022BE40_ovl10(rdram, ctx);
        goto after_0;
    // 0x8022B464: nop

    after_0:
    // 0x8022B468: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022B46C: bne         $v0, $zero, L_8022B4A0
    if (ctx->r2 != 0) {
        // 0x8022B470: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_8022B4A0;
    }
    // 0x8022B470: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022B474: jal         0x80229F50
    // 0x8022B478: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80229F50_ovl10(rdram, ctx);
        goto after_1;
    // 0x8022B478: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_1:
    // 0x8022B47C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022B480: jal         0x8003E87C
    // 0x8022B484: addiu       $a0, $a0, 0x7C8
    ctx->r4 = ADD32(ctx->r4, 0X7C8);
    func_8003E87C_19C7C(rdram, ctx);
        goto after_2;
    // 0x8022B484: addiu       $a0, $a0, 0x7C8
    ctx->r4 = ADD32(ctx->r4, 0X7C8);
    after_2:
    // 0x8022B488: addiu       $v1, $zero, 0x100
    ctx->r3 = ADD32(0, 0X100);
    // 0x8022B48C: bne         $v0, $v1, L_8022B4A0
    if (ctx->r2 != ctx->r3) {
        // 0x8022B490: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_8022B4A0;
    }
    // 0x8022B490: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022B494: jal         0x8022A170
    // 0x8022B498: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_8022A170_ovl10(rdram, ctx);
        goto after_3;
    // 0x8022B498: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_3:
    // 0x8022B49C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_8022B4A0:
    // 0x8022B4A0: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8022B4A4:
    // 0x8022B4A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022B4A8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B4AC: jr          $ra
    // 0x8022B4B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B4B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022CAD8_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CAD8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022CADC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022CAE0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022CAE4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8022CAE8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022CAEC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022CAF0: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022CAF4: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8022CAF8: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x8022CAFC: beq         $v1, $zero, L_8022CB18
    if (ctx->r3 == 0) {
        // 0x8022CB00: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_8022CB18;
    }
    // 0x8022CB00: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022CB04: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CB08: beq         $v1, $v0, L_8022CB58
    if (ctx->r3 == ctx->r2) {
        // 0x8022CB0C: nop
    
            goto L_8022CB58;
    }
    // 0x8022CB0C: nop

    // 0x8022CB10: j           L_8022CCDC
    // 0x8022CB14: nop

        goto L_8022CCDC;
    // 0x8022CB14: nop

L_8022CB18:
    // 0x8022CB18: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x8022CB1C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CB20: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022CB24: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022CB28: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022CB2C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022CB30: beq         $v1, $zero, L_8022CB48
    if (ctx->r3 == 0) {
        // 0x8022CB34: sh          $v0, 0x66($s0)
        MEM_H(0X66, ctx->r16) = ctx->r2;
            goto L_8022CB48;
    }
    // 0x8022CB34: sh          $v0, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r2;
    // 0x8022CB38: lui         $v0, 0x8
    ctx->r2 = S32(0X8 << 16);
    // 0x8022CB3C: sw          $v0, 0x37C($s0)
    MEM_W(0X37C, ctx->r16) = ctx->r2;
    // 0x8022CB40: j           L_8022CB54
    // 0x8022CB44: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
        goto L_8022CB54;
    // 0x8022CB44: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_8022CB48:
    // 0x8022CB48: ori         $v0, $zero, 0x8000
    ctx->r2 = 0 | 0X8000;
    // 0x8022CB4C: sw          $v0, 0x37C($s0)
    MEM_W(0X37C, ctx->r16) = ctx->r2;
    // 0x8022CB50: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8022CB54:
    // 0x8022CB54: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022CB58:
    // 0x8022CB58: lhu         $v1, 0x0($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X0);
    // 0x8022CB5C: andi        $v0, $v1, 0x10
    ctx->r2 = ctx->r3 & 0X10;
    // 0x8022CB60: bne         $v0, $zero, L_8022CB74
    if (ctx->r2 != 0) {
        // 0x8022CB64: addiu       $a0, $s2, 0x1C
        ctx->r4 = ADD32(ctx->r18, 0X1C);
            goto L_8022CB74;
    }
    // 0x8022CB64: addiu       $a0, $s2, 0x1C
    ctx->r4 = ADD32(ctx->r18, 0X1C);
    // 0x8022CB68: ori         $v0, $v1, 0x1
    ctx->r2 = ctx->r3 | 0X1;
    // 0x8022CB6C: j           L_8022CCDC
    // 0x8022CB70: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
        goto L_8022CCDC;
    // 0x8022CB70: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8022CB74:
    // 0x8022CB74: addiu       $a2, $zero, 0x800
    ctx->r6 = ADD32(0, 0X800);
    // 0x8022CB78: lh          $a1, 0x56($s2)
    ctx->r5 = MEM_H(ctx->r18, 0X56);
    // 0x8022CB7C: lh          $v1, 0x56($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X56);
    // 0x8022CB80: addiu       $a3, $s0, 0x1C
    ctx->r7 = ADD32(ctx->r16, 0X1C);
    // 0x8022CB84: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x8022CB88: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022CB8C: jal         0x8004FC28
    // 0x8022CB90: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_8004FC28_2B028(rdram, ctx);
        goto after_0;
    // 0x8022CB90: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_0:
    // 0x8022CB94: beq         $v0, $zero, L_8022CBB0
    if (ctx->r2 == 0) {
        // 0x8022CB98: addiu       $v1, $zero, 0x80
        ctx->r3 = ADD32(0, 0X80);
            goto L_8022CBB0;
    }
    // 0x8022CB98: addiu       $v1, $zero, 0x80
    ctx->r3 = ADD32(0, 0X80);
    // 0x8022CB9C: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x8022CBA0: sh          $v1, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r3;
    // 0x8022CBA4: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x8022CBA8: j           L_8022CC24
    // 0x8022CBAC: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
        goto L_8022CC24;
    // 0x8022CBAC: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
L_8022CBB0:
    // 0x8022CBB0: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022CBB4: lh          $a3, 0x66($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X66);
    // 0x8022CBB8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022CBBC: jal         0x8004F820
    // 0x8022CBC0: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x8022CBC0: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    after_1:
    // 0x8022CBC4: addu        $t0, $v0, $zero
    ctx->r8 = ADD32(ctx->r2, 0);
    // 0x8022CBC8: sll         $v0, $t0, 16
    ctx->r2 = S32(ctx->r8 << 16);
    // 0x8022CBCC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022CBD0: bltzl       $v0, L_8022CBEC
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022CBD4: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_8022CBEC;
    }
    goto skip_0;
    // 0x8022CBD4: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_0:
    // 0x8022CBD8: slti        $v0, $v0, 0x10
    ctx->r2 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x8022CBDC: bne         $v0, $zero, L_8022CBF8
    if (ctx->r2 != 0) {
        // 0x8022CBE0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022CBF8;
    }
    // 0x8022CBE0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CBE4: j           L_8022CC30
    // 0x8022CBE8: nop

        goto L_8022CC30;
    // 0x8022CBE8: nop

L_8022CBEC:
    // 0x8022CBEC: slti        $v0, $v0, 0x10
    ctx->r2 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x8022CBF0: beq         $v0, $zero, L_8022CC30
    if (ctx->r2 == 0) {
        // 0x8022CBF4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022CC30;
    }
    // 0x8022CBF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022CBF8:
    // 0x8022CBF8: lw          $v0, 0x80($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X80);
    // 0x8022CBFC: lw          $v1, 0x34($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X34);
    // 0x8022CC00: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8022CC04: beq         $v0, $zero, L_8022CC30
    if (ctx->r2 == 0) {
        // 0x8022CC08: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022CC30;
    }
    // 0x8022CC08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CC0C: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x8022CC10: bne         $v0, $zero, L_8022CC1C
    if (ctx->r2 != 0) {
        // 0x8022CC14: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_8022CC1C;
    }
    // 0x8022CC14: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022CC18: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_8022CC1C:
    // 0x8022CC1C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022CC20: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
L_8022CC24:
    // 0x8022CC24: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8022CC28: j           L_8022CCDC
    // 0x8022CC2C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_8022CCDC;
    // 0x8022CC2C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022CC30:
    // 0x8022CC30: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022CC34: lhu         $a1, 0x44($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X44);
    // 0x8022CC38: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022CC3C: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022CC40: sll         $a1, $a1, 20
    ctx->r5 = S32(ctx->r5 << 20);
    // 0x8022CC44: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8022CC48: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x8022CC4C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022CC50: jal         0x8004DA90
    // 0x8022CC54: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x8022CC54: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_2:
    // 0x8022CC58: jal         0x80040F30
    // 0x8022CC5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_3;
    // 0x8022CC5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022CC60: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CC64: jal         0x8003E934
    // 0x8022CC68: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_4;
    // 0x8022CC68: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    after_4:
    // 0x8022CC6C: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022CC70: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x8022CC74: lh          $a0, 0x2E($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X2E);
    // 0x8022CC78: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022CC7C: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x8022CC80: slti        $v1, $v1, 0x11
    ctx->r3 = SIGNED(ctx->r3) < 0X11 ? 1 : 0;
    // 0x8022CC84: bne         $v1, $zero, L_8022CCC0
    if (ctx->r3 != 0) {
        // 0x8022CC88: sw          $v0, 0x20($s0)
        MEM_W(0X20, ctx->r16) = ctx->r2;
            goto L_8022CCC0;
    }
    // 0x8022CC88: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022CC8C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022CC90: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x8022CC94: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022CC98: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8022CC9C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022CCA0: jal         0x8009A3B4
    // 0x8022CCA4: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8022CCA4: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    after_5:
    // 0x8022CCA8: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8022CCAC: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x8022CCB0: jal         0x8009A3B4
    // 0x8022CCB4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x8022CCB4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_6:
    // 0x8022CCB8: j           L_8022CCDC
    // 0x8022CCBC: nop

        goto L_8022CCDC;
    // 0x8022CCBC: nop

L_8022CCC0:
    // 0x8022CCC0: andi        $v0, $s1, 0xF00
    ctx->r2 = ctx->r17 & 0XF00;
    // 0x8022CCC4: beq         $v0, $zero, L_8022CCDC
    if (ctx->r2 == 0) {
        // 0x8022CCC8: nop
    
            goto L_8022CCDC;
    }
    // 0x8022CCC8: nop

    // 0x8022CCCC: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022CCD0: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022CCD4: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022CCD8: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8022CCDC:
    // 0x8022CCDC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8022CCE0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022CCE4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022CCE8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022CCEC: jr          $ra
    // 0x8022CCF0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022CCF0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80239B3C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239B3C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80239B40: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80239B44: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80239B48: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80239B4C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80239B50: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80239B54: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80239B58: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80239B5C: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x80239B60: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x80239B64: beq         $v0, $zero, L_80239CB4
    if (ctx->r2 == 0) {
        // 0x80239B68: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80239CB4;
    }
    // 0x80239B68: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80239B6C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80239B70: addu        $at, $at, $v0
    gpr jr_addend_80239B78 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80239B74: lw          $v0, 0x2F90($at)
    ctx->r2 = ADD32(ctx->r1, 0X2F90);
    // 0x80239B78: jr          $v0
    // 0x80239B7C: nop

    switch (jr_addend_80239B78 >> 2) {
        case 0: goto L_80239B80; break;
        case 1: goto L_80239B94; break;
        case 2: goto L_80239BB0; break;
        case 3: goto L_80239C2C; break;
        case 4: goto L_80239C84; break;
        default: switch_error(__func__, 0x80239B78, 0x80252F90);
    }
    // 0x80239B7C: nop

L_80239B80:
    // 0x80239B80: jal         0x80239CE0
    // 0x80239B84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80239CE0_ovl10(rdram, ctx);
        goto after_0;
    // 0x80239B84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80239B88: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80239B8C: j           L_80239CB0
    // 0x80239B90: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80239CB0;
    // 0x80239B90: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80239B94:
    // 0x80239B94: jal         0x80239D78
    // 0x80239B98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80239D78_ovl10(rdram, ctx);
        goto after_1;
    // 0x80239B98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80239B9C: beq         $v0, $zero, L_80239CB8
    if (ctx->r2 == 0) {
        // 0x80239BA0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80239CB8;
    }
    // 0x80239BA0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239BA4: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80239BA8: j           L_80239CB0
    // 0x80239BAC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80239CB0;
    // 0x80239BAC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80239BB0:
    // 0x80239BB0: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80239BB4: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x80239BB8: addiu       $s2, $s0, 0x14
    ctx->r18 = ADD32(ctx->r16, 0X14);
    // 0x80239BBC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80239BC0: jal         0x8004F820
    // 0x80239BC4: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x80239BC4: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_2:
    // 0x80239BC8: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80239BCC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80239BD0: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80239BD4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80239BD8: bne         $v0, $zero, L_80239CB4
    if (ctx->r2 != 0) {
        // 0x80239BDC: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_80239CB4;
    }
    // 0x80239BDC: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80239BE0: jal         0x8003516C
    // 0x80239BE4: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_3;
    // 0x80239BE4: nop

    after_3:
    // 0x80239BE8: bne         $v0, $zero, L_80239CB8
    if (ctx->r2 != 0) {
        // 0x80239BEC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80239CB8;
    }
    // 0x80239BEC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239BF0: jal         0x80239EA4
    // 0x80239BF4: nop

    func_80239EA4_ovl10(rdram, ctx);
        goto after_4;
    // 0x80239BF4: nop

    after_4:
    // 0x80239BF8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80239BFC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80239C00: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80239C04: jal         0x800610AC
    // 0x80239C08: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_5;
    // 0x80239C08: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    after_5:
    // 0x80239C0C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239C10: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80239C14: jal         0x80050294
    // 0x80239C18: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_6;
    // 0x80239C18: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_6:
    // 0x80239C1C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80239C20: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80239C24: j           L_80239CB0
    // 0x80239C28: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80239CB0;
    // 0x80239C28: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80239C2C:
    // 0x80239C2C: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80239C30: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x80239C34: bne         $v0, $zero, L_80239CB8
    if (ctx->r2 != 0) {
        // 0x80239C38: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80239CB8;
    }
    // 0x80239C38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239C3C: jal         0x80034E3C
    // 0x80239C40: nop

    func_80034E3C_1023C(rdram, ctx);
        goto after_7;
    // 0x80239C40: nop

    after_7:
    // 0x80239C44: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80239C48: lbu         $v1, -0x240F($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X240F);
    // 0x80239C4C: addiu       $v0, $zero, 0x48
    ctx->r2 = ADD32(0, 0X48);
    // 0x80239C50: bne         $v1, $v0, L_80239C78
    if (ctx->r3 != ctx->r2) {
        // 0x80239C54: nop
    
            goto L_80239C78;
    }
    // 0x80239C54: nop

    // 0x80239C58: jal         0x80060590
    // 0x80239C5C: addiu       $a0, $zero, 0x546
    ctx->r4 = ADD32(0, 0X546);
    func_80060590_3B990(rdram, ctx);
        goto after_8;
    // 0x80239C5C: addiu       $a0, $zero, 0x546
    ctx->r4 = ADD32(0, 0X546);
    after_8:
    // 0x80239C60: jal         0x80060590
    // 0x80239C64: addiu       $a0, $zero, 0x235
    ctx->r4 = ADD32(0, 0X235);
    func_80060590_3B990(rdram, ctx);
        goto after_9;
    // 0x80239C64: addiu       $a0, $zero, 0x235
    ctx->r4 = ADD32(0, 0X235);
    after_9:
    // 0x80239C68: jal         0x8006036C
    // 0x80239C6C: addiu       $a0, $zero, 0x213
    ctx->r4 = ADD32(0, 0X213);
    func_8006036C_3B76C(rdram, ctx);
        goto after_10;
    // 0x80239C6C: addiu       $a0, $zero, 0x213
    ctx->r4 = ADD32(0, 0X213);
    after_10:
    // 0x80239C70: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80239C74: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80239C78:
    // 0x80239C78: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80239C7C: j           L_80239CB0
    // 0x80239C80: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80239CB0;
    // 0x80239C80: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80239C84:
    // 0x80239C84: jal         0x8003516C
    // 0x80239C88: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_11;
    // 0x80239C88: nop

    after_11:
    // 0x80239C8C: bne         $v0, $zero, L_80239CB8
    if (ctx->r2 != 0) {
        // 0x80239C90: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80239CB8;
    }
    // 0x80239C90: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239C94: lbu         $v0, 0xBD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XBD);
    // 0x80239C98: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x80239C9C: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x80239CA0: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80239CA4: sb          $v0, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r2;
    // 0x80239CA8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80239CAC: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
L_80239CB0:
    // 0x80239CB0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80239CB4:
    // 0x80239CB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80239CB8:
    // 0x80239CB8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80239CBC: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x80239CC0: jal         0x80047284
    // 0x80239CC4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_12;
    // 0x80239CC4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_12:
    // 0x80239CC8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80239CCC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80239CD0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80239CD4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80239CD8: jr          $ra
    // 0x80239CDC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80239CDC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80237624_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237624: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80237628: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8023762C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80237630: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80237634: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80237638: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8023763C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237640: beq         $v1, $v0, L_80237690
    if (ctx->r3 == ctx->r2) {
        // 0x80237644: addiu       $s1, $s0, 0x308
        ctx->r17 = ADD32(ctx->r16, 0X308);
            goto L_80237690;
    }
    // 0x80237644: addiu       $s1, $s0, 0x308
    ctx->r17 = ADD32(ctx->r16, 0X308);
    // 0x80237648: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8023764C: beql        $v0, $zero, L_80237664
    if (ctx->r2 == 0) {
        // 0x80237650: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80237664;
    }
    goto skip_0;
    // 0x80237650: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80237654: beq         $v1, $zero, L_8023767C
    if (ctx->r3 == 0) {
        // 0x80237658: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023767C;
    }
    // 0x80237658: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023765C: j           L_802377D0
    // 0x80237660: nop

        goto L_802377D0;
    // 0x80237660: nop

L_80237664:
    // 0x80237664: beq         $v1, $v0, L_80237738
    if (ctx->r3 == ctx->r2) {
        // 0x80237668: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80237738;
    }
    // 0x80237668: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023766C: beq         $v1, $v0, L_8023776C
    if (ctx->r3 == ctx->r2) {
        // 0x80237670: nop
    
            goto L_8023776C;
    }
    // 0x80237670: nop

    // 0x80237674: j           L_802377D0
    // 0x80237678: nop

        goto L_802377D0;
    // 0x80237678: nop

L_8023767C:
    // 0x8023767C: lhu         $v1, 0x308($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X308);
    // 0x80237680: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80237684: sh          $zero, 0x310($s0)
    MEM_H(0X310, ctx->r16) = 0;
    // 0x80237688: andi        $v1, $v1, 0xFEFF
    ctx->r3 = ctx->r3 & 0XFEFF;
    // 0x8023768C: sh          $v1, 0x308($s0)
    MEM_H(0X308, ctx->r16) = ctx->r3;
L_80237690:
    // 0x80237690: lw          $a0, 0x3C($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X3C);
    // 0x80237694: lh          $a1, 0x14($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X14);
    // 0x80237698: lhu         $v0, 0x8($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8);
    // 0x8023769C: lh          $a2, 0x18($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X18);
    // 0x802376A0: lh          $v1, 0x4($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X4);
    // 0x802376A4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802376A8: sra         $a3, $v0, 16
    ctx->r7 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802376AC: sra         $v0, $v0, 17
    ctx->r2 = S32(SIGNED(ctx->r2) >> 17);
    // 0x802376B0: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x802376B4: subu        $a1, $a1, $v1
    ctx->r5 = SUB32(ctx->r5, ctx->r3);
    // 0x802376B8: lhu         $v0, 0xA($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0XA);
    // 0x802376BC: lh          $v1, 0x6($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X6);
    // 0x802376C0: sltu        $a1, $a1, $a3
    ctx->r5 = ctx->r5 < ctx->r7 ? 1 : 0;
    // 0x802376C4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802376C8: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802376CC: sra         $v0, $v0, 17
    ctx->r2 = S32(SIGNED(ctx->r2) >> 17);
    // 0x802376D0: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x802376D4: beq         $a1, $zero, L_802376F0
    if (ctx->r5 == 0) {
        // 0x802376D8: subu        $v0, $a2, $v1
        ctx->r2 = SUB32(ctx->r6, ctx->r3);
            goto L_802376F0;
    }
    // 0x802376D8: subu        $v0, $a2, $v1
    ctx->r2 = SUB32(ctx->r6, ctx->r3);
    // 0x802376DC: sltu        $v0, $v0, $a0
    ctx->r2 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x802376E0: beq         $v0, $zero, L_802376F0
    if (ctx->r2 == 0) {
        // 0x802376E4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802376F0;
    }
    // 0x802376E4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802376E8: j           L_80237738
    // 0x802376EC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_80237738;
    // 0x802376EC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802376F0:
    // 0x802376F0: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x802376F4: lhu         $v0, 0x1630($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X1630);
    // 0x802376F8: lh          $v1, 0x44($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X44);
    // 0x802376FC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80237700: sra         $v0, $v0, 17
    ctx->r2 = S32(SIGNED(ctx->r2) >> 17);
    // 0x80237704: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80237708: beq         $v0, $zero, L_8023771C
    if (ctx->r2 == 0) {
        // 0x8023770C: addu        $a0, $v1, $zero
        ctx->r4 = ADD32(ctx->r3, 0);
            goto L_8023771C;
    }
    // 0x8023770C: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x80237710: lhu         $v0, 0x4C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4C);
    // 0x80237714: subu        $v0, $a0, $v0
    ctx->r2 = SUB32(ctx->r4, ctx->r2);
    // 0x80237718: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
L_8023771C:
    // 0x8023771C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237720: lh          $a1, 0x44($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X44);
    // 0x80237724: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80237728: jal         0x8004DA90
    // 0x8023772C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8023772C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x80237730: j           L_802377D0
    // 0x80237734: nop

        goto L_802377D0;
    // 0x80237734: nop

L_80237738:
    // 0x80237738: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8023773C: jal         0x8004EC38
    // 0x80237740: addiu       $a1, $s1, 0x40
    ctx->r5 = ADD32(ctx->r17, 0X40);
    func_8004EC38_2A038(rdram, ctx);
        goto after_1;
    // 0x80237740: addiu       $a1, $s1, 0x40
    ctx->r5 = ADD32(ctx->r17, 0X40);
    after_1:
    // 0x80237744: lh          $v1, 0x56($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X56);
    // 0x80237748: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023774C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80237750: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80237754: addiu       $v1, $v1, 0x200
    ctx->r3 = ADD32(ctx->r3, 0X200);
    // 0x80237758: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8023775C: slti        $v1, $v1, 0x400
    ctx->r3 = SIGNED(ctx->r3) < 0X400 ? 1 : 0;
    // 0x80237760: beq         $v1, $zero, L_8023776C
    if (ctx->r3 == 0) {
        // 0x80237764: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8023776C;
    }
    // 0x80237764: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80237768: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8023776C:
    // 0x8023776C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80237770: lh          $a3, 0x66($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X66);
    // 0x80237774: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80237778: jal         0x8004F820
    // 0x8023777C: addiu       $a1, $s1, 0x40
    ctx->r5 = ADD32(ctx->r17, 0X40);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x8023777C: addiu       $a1, $s1, 0x40
    ctx->r5 = ADD32(ctx->r17, 0X40);
    after_2:
    // 0x80237780: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237784: lh          $a1, 0x44($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X44);
    // 0x80237788: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023778C: lhu         $v1, 0x56($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X56);
    // 0x80237790: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80237794: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80237798: addu        $v1, $v1, $s0
    ctx->r3 = ADD32(ctx->r3, ctx->r16);
    // 0x8023779C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x802377A0: jal         0x8004DA90
    // 0x802377A4: sh          $v1, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x802377A4: sh          $v1, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r3;
    after_3:
    // 0x802377A8: sll         $s0, $s0, 16
    ctx->r16 = S32(ctx->r16 << 16);
    // 0x802377AC: bne         $s0, $zero, L_802377D0
    if (ctx->r16 != 0) {
        // 0x802377B0: nop
    
            goto L_802377D0;
    }
    // 0x802377B0: nop

    // 0x802377B4: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x802377B8: lw          $v1, 0x34($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X34);
    // 0x802377BC: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x802377C0: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x802377C4: lbu         $v0, 0xE($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XE);
    // 0x802377C8: andi        $v0, $v0, 0xFB
    ctx->r2 = ctx->r2 & 0XFB;
    // 0x802377CC: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
L_802377D0:
    // 0x802377D0: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x802377D4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802377D8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802377DC: jr          $ra
    // 0x802377E0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802377E0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80242064_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80242064: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80242068: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8024206C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80242070: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80242074: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80242078: bne         $v0, $zero, L_802420B4
    if (ctx->r2 != 0) {
        // 0x8024207C: addu        $a0, $a1, $zero
        ctx->r4 = ADD32(ctx->r5, 0);
            goto L_802420B4;
    }
    // 0x8024207C: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x80242080: jal         0x802420E4
    // 0x80242084: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_802420E4_ovl10(rdram, ctx);
        goto after_0;
    // 0x80242084: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x80242088: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8024208C: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80242090: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80242094: lbu         $a1, 0x1A70($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X1A70);
    // 0x80242098: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8024209C: jal         0x80050294
    // 0x802420A0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x802420A0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x802420A4: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802420A8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802420AC: j           L_802420D4
    // 0x802420B0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_802420D4;
    // 0x802420B0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_802420B4:
    // 0x802420B4: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x802420B8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802420BC: bne         $v1, $v0, L_802420CC
    if (ctx->r3 != ctx->r2) {
        // 0x802420C0: nop
    
            goto L_802420CC;
    }
    // 0x802420C0: nop

    // 0x802420C4: jal         0x8004F488
    // 0x802420C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F488_2A888(rdram, ctx);
        goto after_2;
    // 0x802420C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
L_802420CC:
    // 0x802420CC: jal         0x8005044C
    // 0x802420D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_3;
    // 0x802420D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
L_802420D4:
    // 0x802420D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802420D8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802420DC: jr          $ra
    // 0x802420E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802420E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80247140_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80247140: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80247144: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80247148: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8024714C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80247150: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80247154: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80247158: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024715C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80247160: lw          $v0, 0x228C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X228C);
    // 0x80247164: jalr        $v0
    // 0x80247168: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80247168: nop

    after_0:
    // 0x8024716C: jal         0x800472C0
    // 0x80247170: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800472C0_226C0(rdram, ctx);
        goto after_1;
    // 0x80247170: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80247174: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80247178: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8024717C: jr          $ra
    // 0x80247180: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80247180: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023DEB4_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023DEB4: jr          $ra
    // 0x8023DEB8: nop

    TRACE_RETURN()
    return;
    // 0x8023DEB8: nop

;}
RECOMP_FUNC void func_8024BFF0_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024BFF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8024BFF4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8024BFF8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8024BFFC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8024C000: lbu         $v1, 0xB($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XB);
    // 0x8024C004: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024C008: beq         $v1, $v0, L_8024C0A8
    if (ctx->r3 == ctx->r2) {
        // 0x8024C00C: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8024C0A8;
    }
    // 0x8024C00C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8024C010: beql        $v0, $zero, L_8024C028
    if (ctx->r2 == 0) {
        // 0x8024C014: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8024C028;
    }
    goto skip_0;
    // 0x8024C014: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8024C018: beq         $v1, $zero, L_8024C040
    if (ctx->r3 == 0) {
        // 0x8024C01C: nop
    
            goto L_8024C040;
    }
    // 0x8024C01C: nop

    // 0x8024C020: j           L_8024C180
    // 0x8024C024: nop

        goto L_8024C180;
    // 0x8024C024: nop

L_8024C028:
    // 0x8024C028: beq         $v1, $v0, L_8024C0FC
    if (ctx->r3 == ctx->r2) {
        // 0x8024C02C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8024C0FC;
    }
    // 0x8024C02C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8024C030: beq         $v1, $v0, L_8024C138
    if (ctx->r3 == ctx->r2) {
        // 0x8024C034: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_8024C138;
    }
    // 0x8024C034: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8024C038: j           L_8024C180
    // 0x8024C03C: nop

        goto L_8024C180;
    // 0x8024C03C: nop

L_8024C040:
    // 0x8024C040: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8024C044: jal         0x8006FF84
    // 0x8024C048: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x8024C048: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_0:
    // 0x8024C04C: beq         $v0, $zero, L_8024C180
    if (ctx->r2 == 0) {
        // 0x8024C050: nop
    
            goto L_8024C180;
    }
    // 0x8024C050: nop

    // 0x8024C054: jal         0x8024B6F8
    // 0x8024C058: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8024B6F8_ovl10(rdram, ctx);
        goto after_1;
    // 0x8024C058: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8024C05C: jal         0x80060D38
    // 0x8024C060: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_80060D38_3C138(rdram, ctx);
        goto after_2;
    // 0x8024C060: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_2:
    // 0x8024C064: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8024C068: jal         0x800616FC
    // 0x8024C06C: addiu       $a1, $zero, 0x35
    ctx->r5 = ADD32(0, 0X35);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_3;
    // 0x8024C06C: addiu       $a1, $zero, 0x35
    ctx->r5 = ADD32(0, 0X35);
    after_3:
    // 0x8024C070: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x8024C074: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x8024C078: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024C07C: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x8024C080: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8024C084: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x8024C088: lw          $a0, -0x3B88($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3B88);
    // 0x8024C08C: sltiu       $v0, $a0, 0x3
    ctx->r2 = ctx->r4 < 0X3 ? 1 : 0;
    // 0x8024C090: beq         $v0, $zero, L_8024C128
    if (ctx->r2 == 0) {
        // 0x8024C094: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_8024C128;
    }
    // 0x8024C094: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8024C098: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8024C09C: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8024C0A0: j           L_8024C128
    // 0x8024C0A4: sw          $v0, -0x3B88($at)
    MEM_W(-0X3B88, ctx->r1) = ctx->r2;
        goto L_8024C128;
    // 0x8024C0A4: sw          $v0, -0x3B88($at)
    MEM_W(-0X3B88, ctx->r1) = ctx->r2;
L_8024C0A8:
    // 0x8024C0A8: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x8024C0AC: lbu         $a1, 0x35D0($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X35D0);
    // 0x8024C0B0: sltiu       $v0, $a1, 0x3
    ctx->r2 = ctx->r5 < 0X3 ? 1 : 0;
    // 0x8024C0B4: beq         $v0, $zero, L_8024C0F0
    if (ctx->r2 == 0) {
        // 0x8024C0B8: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_8024C0F0;
    }
    // 0x8024C0B8: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8024C0BC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8024C0C0: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8024C0C4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8024C0C8: bne         $v0, $zero, L_8024C180
    if (ctx->r2 != 0) {
        // 0x8024C0CC: nop
    
            goto L_8024C180;
    }
    // 0x8024C0CC: nop

    // 0x8024C0D0: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x8024C0D4: sll         $a0, $v0, 1
    ctx->r4 = S32(ctx->r2 << 1);
    // 0x8024C0D8: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8024C0DC: jal         0x80069850
    // 0x8024C0E0: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    func_80069850_44C50(rdram, ctx);
        goto after_4;
    // 0x8024C0E0: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    after_4:
    // 0x8024C0E4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8024C0E8: j           L_8024C120
    // 0x8024C0EC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
        goto L_8024C120;
    // 0x8024C0EC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
L_8024C0F0:
    // 0x8024C0F0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8024C0F4: j           L_8024C180
    // 0x8024C0F8: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
        goto L_8024C180;
    // 0x8024C0F8: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_8024C0FC:
    // 0x8024C0FC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8024C100: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8024C104: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8024C108: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8024C10C: bne         $v0, $zero, L_8024C180
    if (ctx->r2 != 0) {
        // 0x8024C110: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8024C180;
    }
    // 0x8024C110: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8024C114: lbu         $a1, 0xF($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XF);
    // 0x8024C118: addiu       $a1, $a1, 0x3
    ctx->r5 = ADD32(ctx->r5, 0X3);
    // 0x8024C11C: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
L_8024C120:
    // 0x8024C120: jal         0x800616FC
    // 0x8024C124: nop

    func_800616FC_3CAFC(rdram, ctx);
        goto after_5;
    // 0x8024C124: nop

    after_5:
L_8024C128:
    // 0x8024C128: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8024C12C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024C130: j           L_8024C180
    // 0x8024C134: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
        goto L_8024C180;
    // 0x8024C134: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_8024C138:
    // 0x8024C138: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8024C13C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8024C140: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8024C144: bne         $v0, $zero, L_8024C180
    if (ctx->r2 != 0) {
        // 0x8024C148: nop
    
            goto L_8024C180;
    }
    // 0x8024C148: nop

    // 0x8024C14C: jal         0x8002A398
    // 0x8024C150: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_8002A398_5798(rdram, ctx);
        goto after_6;
    // 0x8024C150: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_6:
    // 0x8024C154: bne         $v0, $zero, L_8024C180
    if (ctx->r2 != 0) {
        // 0x8024C158: addiu       $a0, $zero, 0x19
        ctx->r4 = ADD32(0, 0X19);
            goto L_8024C180;
    }
    // 0x8024C158: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    // 0x8024C15C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8024C160: jal         0x8002A2F8
    // 0x8024C164: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_7;
    // 0x8024C164: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_7:
    // 0x8024C168: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x8024C16C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8024C170: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8024C174: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x8024C178: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024C17C: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
L_8024C180:
    // 0x8024C180: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8024C184: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8024C188: jr          $ra
    // 0x8024C18C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8024C18C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802399B4_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802399B4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802399B8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802399BC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802399C0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802399C4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802399C8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802399CC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x802399D0: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x802399D4: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x802399D8: beq         $v1, $zero, L_802399F4
    if (ctx->r3 == 0) {
        // 0x802399DC: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_802399F4;
    }
    // 0x802399DC: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x802399E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802399E4: beq         $v1, $v0, L_80239A08
    if (ctx->r3 == ctx->r2) {
        // 0x802399E8: nop
    
            goto L_80239A08;
    }
    // 0x802399E8: nop

    // 0x802399EC: j           L_80239A38
    // 0x802399F0: nop

        goto L_80239A38;
    // 0x802399F0: nop

L_802399F4:
    // 0x802399F4: lhu         $v1, 0xC($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XC);
    // 0x802399F8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802399FC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80239A00: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x80239A04: sh          $v1, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r3;
L_80239A08:
    // 0x80239A08: lhu         $a2, 0x56($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X56);
    // 0x80239A0C: lhu         $v0, 0xA($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XA);
    // 0x80239A10: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80239A14: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x80239A18: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    // 0x80239A1C: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x80239A20: jal         0x8004F820
    // 0x80239A24: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80239A24: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_0:
    // 0x80239A28: lhu         $v1, 0xA($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0XA);
    // 0x80239A2C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80239A30: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80239A34: sh          $v1, 0xA($s1)
    MEM_H(0XA, ctx->r17) = ctx->r3;
L_80239A38:
    // 0x80239A38: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x80239A3C: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80239A40: beq         $v0, $zero, L_80239A70
    if (ctx->r2 == 0) {
        // 0x80239A44: lui         $v1, 0x20
        ctx->r3 = S32(0X20 << 16);
            goto L_80239A70;
    }
    // 0x80239A44: lui         $v1, 0x20
    ctx->r3 = S32(0X20 << 16);
    // 0x80239A48: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80239A4C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80239A50: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80239A54: beq         $v0, $zero, L_80239A64
    if (ctx->r2 == 0) {
        // 0x80239A58: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_80239A64;
    }
    // 0x80239A58: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80239A5C: j           L_80239A70
    // 0x80239A60: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_80239A70;
    // 0x80239A60: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80239A64:
    // 0x80239A64: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x80239A68: bltzl       $v0, L_80239A70
    if (SIGNED(ctx->r2) < 0) {
        // 0x80239A6C: sb          $zero, 0xAC($s0)
        MEM_B(0XAC, ctx->r16) = 0;
            goto L_80239A70;
    }
    goto skip_0;
    // 0x80239A6C: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    skip_0:
L_80239A70:
    // 0x80239A70: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80239A74: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80239A78: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80239A7C: jr          $ra
    // 0x80239A80: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80239A80: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80239A84: nop

    // 0x80239A88: nop

    // 0x80239A8C: nop

;}
RECOMP_FUNC void func_80225DC0_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225DC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225DC4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225DC8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225DCC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225DD0: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x80225DD4: bne         $v0, $zero, L_80225E1C
    if (ctx->r2 != 0) {
        // 0x80225DD8: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80225E1C;
    }
    // 0x80225DD8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80225DDC: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80225DE0: lw          $v1, 0x3320($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3320);
    // 0x80225DE4: addiu       $v0, $zero, 0x81
    ctx->r2 = ADD32(0, 0X81);
    // 0x80225DE8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80225DEC: jal         0x800616FC
    // 0x80225DF0: sb          $v0, 0x448($v1)
    MEM_B(0X448, ctx->r3) = ctx->r2;
    func_800616FC_3CAFC(rdram, ctx);
        goto after_0;
    // 0x80225DF0: sb          $v0, 0x448($v1)
    MEM_B(0X448, ctx->r3) = ctx->r2;
    after_0:
    // 0x80225DF4: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    // 0x80225DF8: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x80225DFC: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80225E00: beq         $v0, $zero, L_80225E1C
    if (ctx->r2 == 0) {
        // 0x80225E04: nop
    
            goto L_80225E1C;
    }
    // 0x80225E04: nop

    // 0x80225E08: jal         0x8004F488
    // 0x80225E0C: nop

    func_8004F488_2A888(rdram, ctx);
        goto after_1;
    // 0x80225E0C: nop

    after_1:
    // 0x80225E10: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80225E14: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x80225E18: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80225E1C:
    // 0x80225E1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225E20: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225E24: jr          $ra
    // 0x80225E28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225E28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80242990_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80242990: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80242994: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80242998: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8024299C: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x802429A0: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x802429A4: sb          $v0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r2;
    // 0x802429A8: addiu       $v0, $zero, 0x42
    ctx->r2 = ADD32(0, 0X42);
    // 0x802429AC: sb          $v0, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r2;
    // 0x802429B0: addiu       $v0, $a0, 0x14
    ctx->r2 = ADD32(ctx->r4, 0X14);
    // 0x802429B4: addiu       $a0, $a1, 0x38
    ctx->r4 = ADD32(ctx->r5, 0X38);
    // 0x802429B8: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x802429BC: jal         0x8009A3B4
    // 0x802429C0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x802429C0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x802429C4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802429C8: jr          $ra
    // 0x802429CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802429CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A820_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A820: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A824: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A828: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A82C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022A830: lbu         $a0, 0x4($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X4);
    // 0x8022A834: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A838: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x8022A83C: beq         $v1, $v0, L_8022A884
    if (ctx->r3 == ctx->r2) {
        // 0x8022A840: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8022A884;
    }
    // 0x8022A840: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022A844: beql        $v0, $zero, L_8022A85C
    if (ctx->r2 == 0) {
        // 0x8022A848: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022A85C;
    }
    goto skip_0;
    // 0x8022A848: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022A84C: beq         $v1, $zero, L_8022A86C
    if (ctx->r3 == 0) {
        // 0x8022A850: nop
    
            goto L_8022A86C;
    }
    // 0x8022A850: nop

    // 0x8022A854: j           L_8022A90C
    // 0x8022A858: nop

        goto L_8022A90C;
    // 0x8022A858: nop

L_8022A85C:
    // 0x8022A85C: beq         $v1, $v0, L_8022A89C
    if (ctx->r3 == ctx->r2) {
        // 0x8022A860: addiu       $v1, $zero, 0x2
        ctx->r3 = ADD32(0, 0X2);
            goto L_8022A89C;
    }
    // 0x8022A860: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x8022A864: j           L_8022A90C
    // 0x8022A868: nop

        goto L_8022A90C;
    // 0x8022A868: nop

L_8022A86C:
    // 0x8022A86C: jal         0x80036E48
    // 0x8022A870: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80036E48_12248(rdram, ctx);
        goto after_0;
    // 0x8022A870: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_0:
    // 0x8022A874: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022A878: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022A87C: j           L_8022A90C
    // 0x8022A880: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
        goto L_8022A90C;
    // 0x8022A880: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8022A884:
    // 0x8022A884: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022A888: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8022A88C: bne         $v0, $zero, L_8022A90C
    if (ctx->r2 != 0) {
        // 0x8022A890: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_8022A90C;
    }
    // 0x8022A890: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8022A894: j           L_8022A90C
    // 0x8022A898: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
        goto L_8022A90C;
    // 0x8022A898: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8022A89C:
    // 0x8022A89C: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x8022A8A0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A8A4: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x8022A8A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A8AC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A8B0: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x8022A8B4: addiu       $v0, $zero, -0x40
    ctx->r2 = ADD32(0, -0X40);
    // 0x8022A8B8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A8BC: sh          $v0, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = ctx->r2;
    // 0x8022A8C0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022A8C4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A8C8: sh          $v0, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = ctx->r2;
    // 0x8022A8CC: addiu       $v0, $zero, 0xD0
    ctx->r2 = ADD32(0, 0XD0);
    // 0x8022A8D0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A8D4: sh          $v0, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = ctx->r2;
    // 0x8022A8D8: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x8022A8DC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A8E0: sh          $v0, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = ctx->r2;
    // 0x8022A8E4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022A8E8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A8EC: sb          $v1, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r3;
    // 0x8022A8F0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A8F4: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x8022A8F8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A8FC: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x8022A900: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A904: sb          $v1, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r3;
    // 0x8022A908: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
L_8022A90C:
    // 0x8022A90C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022A910: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A914: jr          $ra
    // 0x8022A918: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A918: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802426E8_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802426E8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802426EC: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802426F0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802426F4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802426F8: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x802426FC: lbu         $a1, 0xF($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XF);
    // 0x80242700: addiu       $v1, $v0, -0x1
    ctx->r3 = ADD32(ctx->r2, -0X1);
    // 0x80242704: andi        $v0, $a1, 0x1
    ctx->r2 = ctx->r5 & 0X1;
    // 0x80242708: bne         $v0, $zero, L_80242724
    if (ctx->r2 != 0) {
        // 0x8024270C: sb          $v1, 0xB($s0)
        MEM_B(0XB, ctx->r16) = ctx->r3;
            goto L_80242724;
    }
    // 0x8024270C: sb          $v1, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r3;
    // 0x80242710: lhu         $v0, 0x9A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X9A);
    // 0x80242714: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80242718: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x8024271C: j           L_802427C8
    // 0x80242720: sh          $v0, 0x9A($s0)
    MEM_H(0X9A, ctx->r16) = ctx->r2;
        goto L_802427C8;
    // 0x80242720: sh          $v0, 0x9A($s0)
    MEM_H(0X9A, ctx->r16) = ctx->r2;
L_80242724:
    // 0x80242724: lui         $a0, 0x2AAA
    ctx->r4 = S32(0X2AAA << 16);
    // 0x80242728: ori         $a0, $a0, 0xAAAB
    ctx->r4 = ctx->r4 | 0XAAAB;
    // 0x8024272C: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x80242730: addiu       $v1, $zero, 0xF0
    ctx->r3 = ADD32(0, 0XF0);
    // 0x80242734: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80242738: mult        $v1, $a0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8024273C: sra         $v0, $v1, 31
    ctx->r2 = S32(SIGNED(ctx->r3) >> 31);
    // 0x80242740: mfhi        $t2
    ctx->r10 = hi;
    // 0x80242744: subu        $a0, $t2, $v0
    ctx->r4 = SUB32(ctx->r10, ctx->r2);
    // 0x80242748: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x8024274C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80242750: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80242754: subu        $a0, $v1, $v0
    ctx->r4 = SUB32(ctx->r3, ctx->r2);
    // 0x80242758: andi        $v0, $a1, 0x8
    ctx->r2 = ctx->r5 & 0X8;
    // 0x8024275C: bne         $v0, $zero, L_80242788
    if (ctx->r2 != 0) {
        // 0x80242760: sll         $v0, $a0, 1
        ctx->r2 = S32(ctx->r4 << 1);
            goto L_80242788;
    }
    // 0x80242760: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80242764: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80242768: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024276C: lbu         $v1, 0x1BA0($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X1BA0);
    // 0x80242770: sb          $v1, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r3;
    // 0x80242774: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80242778: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8024277C: lbu         $v0, 0x1BA1($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X1BA1);
    // 0x80242780: j           L_802427A8
    // 0x80242784: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
        goto L_802427A8;
    // 0x80242784: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
L_80242788:
    // 0x80242788: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x8024278C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80242790: lbu         $v1, 0x1BAC($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X1BAC);
    // 0x80242794: sb          $v1, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r3;
    // 0x80242798: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024279C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802427A0: lbu         $v0, 0x1BAD($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X1BAD);
    // 0x802427A4: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
L_802427A8:
    // 0x802427A8: lui         $v0, 0x2C80
    ctx->r2 = S32(0X2C80 << 16);
    // 0x802427AC: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x802427B0: sw          $v0, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r2;
    // 0x802427B4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802427B8: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x802427BC: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x802427C0: jal         0x8003B6B8
    // 0x802427C4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B6B8_16AB8(rdram, ctx);
        goto after_0;
    // 0x802427C4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
L_802427C8:
    // 0x802427C8: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x802427CC: beql        $v0, $zero, L_80242874
    if (ctx->r2 == 0) {
        // 0x802427D0: sb          $zero, 0x0($s0)
        MEM_B(0X0, ctx->r16) = 0;
            goto L_80242874;
    }
    goto skip_0;
    // 0x802427D0: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    skip_0:
    // 0x802427D4: lh          $v0, 0x16($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X16);
    // 0x802427D8: bgezl       $v0, L_80242874
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802427DC: sb          $zero, 0x0($s0)
        MEM_B(0X0, ctx->r16) = 0;
            goto L_80242874;
    }
    goto skip_1;
    // 0x802427DC: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    skip_1:
    // 0x802427E0: lhu         $v0, 0x44($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X44);
    // 0x802427E4: lhu         $v1, 0x4C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X4C);
    // 0x802427E8: lhu         $t0, 0x4E($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X4E);
    // 0x802427EC: lhu         $t1, 0x50($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X50);
    // 0x802427F0: lw          $a3, 0x1C($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X1C);
    // 0x802427F4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802427F8: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x802427FC: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x80242800: lhu         $v1, 0x48($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X48);
    // 0x80242804: lh          $a2, 0x44($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X44);
    // 0x80242808: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x8024280C: addu        $v1, $v1, $t1
    ctx->r3 = ADD32(ctx->r3, ctx->r9);
    // 0x80242810: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x80242814: lh          $v0, 0x46($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X46);
    // 0x80242818: sll         $a2, $a2, 8
    ctx->r6 = S32(ctx->r6 << 8);
    // 0x8024281C: addu        $a3, $a3, $a2
    ctx->r7 = ADD32(ctx->r7, ctx->r6);
    // 0x80242820: sh          $v1, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r3;
    // 0x80242824: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x80242828: lh          $a2, 0x48($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X48);
    // 0x8024282C: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80242830: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80242834: sw          $a3, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r7;
    // 0x80242838: lw          $a3, 0x24($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X24);
    // 0x8024283C: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80242840: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80242844: sll         $a2, $a2, 8
    ctx->r6 = S32(ctx->r6 << 8);
    // 0x80242848: addu        $a3, $a3, $a2
    ctx->r7 = ADD32(ctx->r7, ctx->r6);
    // 0x8024284C: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80242850: jal         0x8004DD04
    // 0x80242854: sw          $a3, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r7;
    func_8004DD04_29104(rdram, ctx);
        goto after_1;
    // 0x80242854: sw          $a3, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r7;
    after_1:
    // 0x80242858: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x8024285C: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x80242860: lhu         $a0, 0x18($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X18);
    // 0x80242864: sh          $v0, 0x90($s0)
    MEM_H(0X90, ctx->r16) = ctx->r2;
    // 0x80242868: sh          $v1, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r3;
    // 0x8024286C: j           L_8024287C
    // 0x80242870: sh          $a0, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r4;
        goto L_8024287C;
    // 0x80242870: sh          $a0, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r4;
L_80242874:
    // 0x80242874: jal         0x8004F4F8
    // 0x80242878: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_2;
    // 0x80242878: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
L_8024287C:
    // 0x8024287C: lw          $v0, 0xC0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC0);
    // 0x80242880: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x80242884: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80242888: beq         $v0, $zero, L_802428A4
    if (ctx->r2 == 0) {
        // 0x8024288C: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_802428A4;
    }
    // 0x8024288C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80242890: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80242894: sw          $zero, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = 0;
    // 0x80242898: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024289C: j           L_8024291C
    // 0x802428A0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_8024291C;
    // 0x802428A0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_802428A4:
    // 0x802428A4: lhu         $a1, 0x98($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X98);
    // 0x802428A8: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x802428AC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802428B0: addiu       $v0, $s0, 0xC0
    ctx->r2 = ADD32(ctx->r16, 0XC0);
    // 0x802428B4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x802428B8: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x802428BC: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x802428C0: ori         $a3, $zero, 0xA000
    ctx->r7 = 0 | 0XA000;
    // 0x802428C4: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x802428C8: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x802428CC: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x802428D0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802428D4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x802428D8: jal         0x80051E18
    // 0x802428DC: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_3;
    // 0x802428DC: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_3:
    // 0x802428E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802428E4: jal         0x8003F754
    // 0x802428E8: sw          $zero, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = 0;
    func_8003F754_1AB54(rdram, ctx);
        goto after_4;
    // 0x802428E8: sw          $zero, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = 0;
    after_4:
    // 0x802428EC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x802428F0: beq         $a0, $zero, L_80242904
    if (ctx->r4 == 0) {
        // 0x802428F4: nop
    
            goto L_80242904;
    }
    // 0x802428F4: nop

    // 0x802428F8: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802428FC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80242900: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80242904:
    // 0x80242904: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x80242908: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x8024290C: bne         $v0, $zero, L_8024291C
    if (ctx->r2 != 0) {
        // 0x80242910: nop
    
            goto L_8024291C;
    }
    // 0x80242910: nop

    // 0x80242914: jal         0x800711A8
    // 0x80242918: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    func_800711A8_4C5A8(rdram, ctx);
        goto after_5;
    // 0x80242918: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    after_5:
L_8024291C:
    // 0x8024291C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80242920: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80242924: jr          $ra
    // 0x80242928: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80242928: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022D354_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D354: lbu         $v1, 0xA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA);
    // 0x8022D358: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D35C: beq         $v1, $v0, L_8022D3BC
    if (ctx->r3 == ctx->r2) {
        // 0x8022D360: addiu       $a1, $a0, 0x348
        ctx->r5 = ADD32(ctx->r4, 0X348);
            goto L_8022D3BC;
    }
    // 0x8022D360: addiu       $a1, $a0, 0x348
    ctx->r5 = ADD32(ctx->r4, 0X348);
    // 0x8022D364: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022D368: beql        $v0, $zero, L_8022D380
    if (ctx->r2 == 0) {
        // 0x8022D36C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022D380;
    }
    goto skip_0;
    // 0x8022D36C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022D370: beq         $v1, $zero, L_8022D390
    if (ctx->r3 == 0) {
        // 0x8022D374: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_8022D390;
    }
    // 0x8022D374: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022D378: j           L_8022D40C
    // 0x8022D37C: nop

        goto L_8022D40C;
    // 0x8022D37C: nop

L_8022D380:
    // 0x8022D380: beq         $v1, $v0, L_8022D3E8
    if (ctx->r3 == ctx->r2) {
        // 0x8022D384: nop
    
            goto L_8022D3E8;
    }
    // 0x8022D384: nop

    // 0x8022D388: j           L_8022D40C
    // 0x8022D38C: nop

        goto L_8022D40C;
    // 0x8022D38C: nop

L_8022D390:
    // 0x8022D390: lhu         $v1, 0x348($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X348);
    // 0x8022D394: sh          $v0, 0x34C($a0)
    MEM_H(0X34C, ctx->r4) = ctx->r2;
    // 0x8022D398: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D39C: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x8022D3A0: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8022D3A4: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x8022D3A8: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8022D3AC: sh          $zero, 0x350($a0)
    MEM_H(0X350, ctx->r4) = 0;
    // 0x8022D3B0: sb          $v0, 0x110($a0)
    MEM_B(0X110, ctx->r4) = ctx->r2;
    // 0x8022D3B4: andi        $v1, $v1, 0xFFF7
    ctx->r3 = ctx->r3 & 0XFFF7;
    // 0x8022D3B8: sh          $v1, 0x348($a0)
    MEM_H(0X348, ctx->r4) = ctx->r3;
L_8022D3BC:
    // 0x8022D3BC: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x8022D3C0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022D3C4: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x8022D3C8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D3CC: bgez        $v0, L_8022D3E8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022D3D0: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_8022D3E8;
    }
    // 0x8022D3D0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022D3D4: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x8022D3D8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022D3DC: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x8022D3E0: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022D3E4: sb          $v0, 0x110($a0)
    MEM_B(0X110, ctx->r4) = ctx->r2;
L_8022D3E8:
    // 0x8022D3E8: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x8022D3EC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022D3F0: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x8022D3F4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D3F8: bgez        $v0, L_8022D40C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022D3FC: nop
    
            goto L_8022D40C;
    }
    // 0x8022D3FC: nop

    // 0x8022D400: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x8022D404: ori         $v0, $v0, 0x9
    ctx->r2 = ctx->r2 | 0X9;
    // 0x8022D408: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
L_8022D40C:
    // 0x8022D40C: jr          $ra
    // 0x8022D410: nop

    TRACE_RETURN()
    return;
    // 0x8022D410: nop

;}
RECOMP_FUNC void func_802334FC_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802334FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80233500: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80233504: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80233508: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8023350C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80233510: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x80233514: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80233518: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8023351C: jal         0x8009A3B4
    // 0x80233520: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80233520: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    after_0:
    // 0x80233524: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80233528: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8023352C: jal         0x8009A3B4
    // 0x80233530: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80233530: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80233534: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80233538: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8023353C: jal         0x8009A3B4
    // 0x80233540: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80233540: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80233544: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80233548: jal         0x800A3450
    // 0x8023354C: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x8023354C: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    after_3:
    // 0x80233550: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80233554: sh          $v0, 0x36A($s0)
    MEM_H(0X36A, ctx->r16) = ctx->r2;
    // 0x80233558: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8023355C: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80233560: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80233564: lw          $v0, 0x119C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X119C);
    // 0x80233568: jalr        $v0
    // 0x8023356C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x8023356C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80233570: lhu         $v0, 0x368($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X368);
    // 0x80233574: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80233578: beq         $v0, $zero, L_80233598
    if (ctx->r2 == 0) {
        // 0x8023357C: nop
    
            goto L_80233598;
    }
    // 0x8023357C: nop

    // 0x80233580: jal         0x8004F418
    // 0x80233584: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_5;
    // 0x80233584: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80233588: lhu         $v0, 0x368($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X368);
    // 0x8023358C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x80233590: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
    // 0x80233594: sh          $v0, 0x368($s0)
    MEM_H(0X368, ctx->r16) = ctx->r2;
L_80233598:
    // 0x80233598: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x8023359C: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x802335A0: beq         $v0, $a1, L_802335B8
    if (ctx->r2 == ctx->r5) {
        // 0x802335A4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802335B8;
    }
    // 0x802335A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802335A8: jal         0x800502EC
    // 0x802335AC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800502EC_2B6EC(rdram, ctx);
        goto after_6;
    // 0x802335AC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_6:
    // 0x802335B0: j           L_802335C0
    // 0x802335B4: nop

        goto L_802335C0;
    // 0x802335B4: nop

L_802335B8:
    // 0x802335B8: jal         0x800504EC
    // 0x802335BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800504EC_2B8EC(rdram, ctx);
        goto after_7;
    // 0x802335BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
L_802335C0:
    // 0x802335C0: lhu         $v0, 0x372($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X372);
    // 0x802335C4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x802335C8: sh          $v0, -0x3D86($at)
    MEM_H(-0X3D86, ctx->r1) = ctx->r2;
    // 0x802335CC: jal         0x80051248
    // 0x802335D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80051248_2C648(rdram, ctx);
        goto after_8;
    // 0x802335D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
    // 0x802335D4: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x802335D8: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x802335DC: beq         $v0, $zero, L_802335F4
    if (ctx->r2 == 0) {
        // 0x802335E0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802335F4;
    }
    // 0x802335E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802335E4: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x802335E8: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x802335EC: jal         0x8003B564
    // 0x802335F0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_9;
    // 0x802335F0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_9:
L_802335F4:
    // 0x802335F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802335F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802335FC: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x80233600: jal         0x80047284
    // 0x80233604: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_10;
    // 0x80233604: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_10:
    // 0x80233608: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023360C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80233610: jr          $ra
    // 0x80233614: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80233614: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
