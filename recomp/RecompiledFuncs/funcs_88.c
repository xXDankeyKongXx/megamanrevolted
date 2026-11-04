#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80232BF0_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232BF0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80232BF4: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80232BF8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80232BFC: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80232C00: addiu       $s1, $sp, 0x20
    ctx->r17 = ADD32(ctx->r29, 0X20);
    // 0x80232C04: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80232C08: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x80232C0C: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x80232C10: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80232C14: lhu         $v0, 0x56($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X56);
    // 0x80232C18: lbu         $v1, 0xAC($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0XAC);
    // 0x80232C1C: addiu       $s3, $s2, 0x14
    ctx->r19 = ADD32(ctx->r18, 0X14);
    // 0x80232C20: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x80232C24: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80232C28: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x80232C2C: sh          $v0, 0x34C($s2)
    MEM_H(0X34C, ctx->r18) = ctx->r2;
    // 0x80232C30: sb          $v1, 0x34A($s2)
    MEM_B(0X34A, ctx->r18) = ctx->r3;
    // 0x80232C34: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80232C38: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80232C3C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80232C40: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80232C44: sb          $v0, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = ctx->r2;
    // 0x80232C48: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80232C4C: sb          $zero, 0x49BA($at)
    MEM_B(0X49BA, ctx->r1) = 0;
    // 0x80232C50: andi        $v1, $v1, 0xFD
    ctx->r3 = ctx->r3 & 0XFD;
    // 0x80232C54: jal         0x8009A3B4
    // 0x80232C58: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80232C58: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x80232C5C: lh          $v0, 0x14($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X14);
    // 0x80232C60: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80232C64: lh          $v0, 0x16($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X16);
    // 0x80232C68: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80232C6C: addiu       $v0, $v0, -0x30
    ctx->r2 = ADD32(ctx->r2, -0X30);
    // 0x80232C70: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80232C74: lh          $v0, 0x18($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X18);
    // 0x80232C78: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    // 0x80232C7C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80232C80: jal         0x8004EC38
    // 0x80232C84: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_8004EC38_2A038(rdram, ctx);
        goto after_1;
    // 0x80232C84: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_1:
    // 0x80232C88: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80232C8C: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x80232C90: lw          $a3, 0x435C($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X435C);
    // 0x80232C94: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x80232C98: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x80232C9C: jal         0x80034FCC
    // 0x80232CA0: addiu       $a3, $a3, 0x6C
    ctx->r7 = ADD32(ctx->r7, 0X6C);
    func_80034FCC_103CC(rdram, ctx);
        goto after_2;
    // 0x80232CA0: addiu       $a3, $a3, 0x6C
    ctx->r7 = ADD32(ctx->r7, 0X6C);
    after_2:
    // 0x80232CA4: lbu         $a0, 0x2($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X2);
    // 0x80232CA8: jal         0x80233298
    // 0x80232CAC: addiu       $s1, $s2, 0x348
    ctx->r17 = ADD32(ctx->r18, 0X348);
    func_80233298_ovl10(rdram, ctx);
        goto after_3;
    // 0x80232CAC: addiu       $s1, $s2, 0x348
    ctx->r17 = ADD32(ctx->r18, 0X348);
    after_3:
    // 0x80232CB0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80232CB4: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x80232CB8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80232CBC: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x80232CC0: jal         0x8004F820
    // 0x80232CC4: sb          $v0, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_4;
    // 0x80232CC4: sb          $v0, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = ctx->r2;
    after_4:
    // 0x80232CC8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80232CCC: bgez        $v0, L_80232CF8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80232CD0: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_80232CF8;
    }
    // 0x80232CD0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80232CD4: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x80232CD8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80232CDC: jal         0x8004F820
    // 0x80232CE0: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_5;
    // 0x80232CE0: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_5:
    // 0x80232CE4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80232CE8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80232CEC: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80232CF0: j           L_80232D10
    // 0x80232CF4: srl         $v1, $v0, 3
    ctx->r3 = S32(U32(ctx->r2) >> 3);
        goto L_80232D10;
    // 0x80232CF4: srl         $v1, $v0, 3
    ctx->r3 = S32(U32(ctx->r2) >> 3);
L_80232CF8:
    // 0x80232CF8: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x80232CFC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80232D00: jal         0x8004F820
    // 0x80232D04: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_6;
    // 0x80232D04: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_6:
    // 0x80232D08: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80232D0C: sra         $v1, $v0, 19
    ctx->r3 = S32(SIGNED(ctx->r2) >> 19);
L_80232D10:
    // 0x80232D10: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x80232D14: sh          $v1, 0x6($s1)
    MEM_H(0X6, ctx->r17) = ctx->r3;
    // 0x80232D18: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232D1C: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    // 0x80232D20: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80232D24: sb          $v0, 0x11B($s2)
    MEM_B(0X11B, ctx->r18) = ctx->r2;
    // 0x80232D28: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x80232D2C: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x80232D30: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80232D34: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80232D38: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80232D3C: jr          $ra
    // 0x80232D40: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80232D40: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80239A90_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239A90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80239A94: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80239A98: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80239A9C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80239AA0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80239AA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80239AA8: jal         0x8009A3B4
    // 0x80239AAC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80239AAC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80239AB0: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80239AB4: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80239AB8: jal         0x8009A3B4
    // 0x80239ABC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80239ABC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80239AC0: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80239AC4: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80239AC8: jal         0x8009A3B4
    // 0x80239ACC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80239ACC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80239AD0: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80239AD4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80239AD8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80239ADC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80239AE0: lw          $v0, 0x16C0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X16C0);
    // 0x80239AE4: jalr        $v0
    // 0x80239AE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x80239AE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80239AEC: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80239AF0: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80239AF4: beq         $v0, $zero, L_80239B0C
    if (ctx->r2 == 0) {
        // 0x80239AF8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80239B0C;
    }
    // 0x80239AF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239AFC: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x80239B00: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x80239B04: jal         0x8003B564
    // 0x80239B08: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_4;
    // 0x80239B08: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_4:
L_80239B0C:
    // 0x80239B0C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80239B10: beq         $v0, $zero, L_80239B28
    if (ctx->r2 == 0) {
        // 0x80239B14: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_80239B28;
    }
    // 0x80239B14: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80239B18: jal         0x8005044C
    // 0x80239B1C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_5;
    // 0x80239B1C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80239B20: j           L_80239B2C
    // 0x80239B24: nop

        goto L_80239B2C;
    // 0x80239B24: nop

L_80239B28:
    // 0x80239B28: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80239B2C:
    // 0x80239B2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80239B30: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80239B34: jr          $ra
    // 0x80239B38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80239B38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8024A19C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024A19C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8024A1A0: addu        $t0, $a0, $zero
    ctx->r8 = ADD32(ctx->r4, 0);
    // 0x8024A1A4: addiu       $t1, $t0, 0xD0
    ctx->r9 = ADD32(ctx->r8, 0XD0);
    // 0x8024A1A8: lbu         $v1, 0xDC($t0)
    ctx->r3 = MEM_BU(ctx->r8, 0XDC);
    // 0x8024A1AC: addiu       $t5, $a1, 0xD0
    ctx->r13 = ADD32(ctx->r5, 0XD0);
    // 0x8024A1B0: lbu         $a0, 0xDD($t0)
    ctx->r4 = MEM_BU(ctx->r8, 0XDD);
    // 0x8024A1B4: lbu         $v0, 0xDD($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XDD);
    // 0x8024A1B8: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8024A1BC: or          $a0, $a0, $v1
    ctx->r4 = ctx->r4 | ctx->r3;
    // 0x8024A1C0: lbu         $v1, 0xDC($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0XDC);
    // 0x8024A1C4: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8024A1C8: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x8024A1CC: sll         $v1, $v1, 6
    ctx->r3 = S32(ctx->r3 << 6);
    // 0x8024A1D0: or          $a2, $a0, $v1
    ctx->r6 = ctx->r4 | ctx->r3;
    // 0x8024A1D4: andi        $v0, $a2, 0x1
    ctx->r2 = ctx->r6 & 0X1;
    // 0x8024A1D8: beq         $v0, $zero, L_8024A248
    if (ctx->r2 == 0) {
        // 0x8024A1DC: addu        $t2, $a2, $zero
        ctx->r10 = ADD32(ctx->r6, 0);
            goto L_8024A248;
    }
    // 0x8024A1DC: addu        $t2, $a2, $zero
    ctx->r10 = ADD32(ctx->r6, 0);
    // 0x8024A1E0: lhu         $v0, 0x18($t0)
    ctx->r2 = MEM_HU(ctx->r8, 0X18);
    // 0x8024A1E4: lhu         $v1, 0x18($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X18);
    // 0x8024A1E8: lbu         $a0, 0x9($t0)
    ctx->r4 = MEM_BU(ctx->r8, 0X9);
    // 0x8024A1EC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8024A1F0: sra         $t3, $v0, 25
    ctx->r11 = S32(SIGNED(ctx->r2) >> 25);
    // 0x8024A1F4: addiu       $t4, $t3, 0x40
    ctx->r12 = ADD32(ctx->r11, 0X40);
    // 0x8024A1F8: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8024A1FC: sra         $v1, $v1, 25
    ctx->r3 = S32(SIGNED(ctx->r3) >> 25);
    // 0x8024A200: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8024A204: bne         $a0, $v0, L_8024A21C
    if (ctx->r4 != ctx->r2) {
        // 0x8024A208: addiu       $a3, $v1, 0x40
        ctx->r7 = ADD32(ctx->r3, 0X40);
            goto L_8024A21C;
    }
    // 0x8024A208: addiu       $a3, $v1, 0x40
    ctx->r7 = ADD32(ctx->r3, 0X40);
    // 0x8024A20C: andi        $v1, $a2, 0xC
    ctx->r3 = ctx->r6 & 0XC;
    // 0x8024A210: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8024A214: beql        $v1, $v0, L_8024A21C
    if (ctx->r3 == ctx->r2) {
        // 0x8024A218: addiu       $t4, $t3, 0x41
        ctx->r12 = ADD32(ctx->r11, 0X41);
            goto L_8024A21C;
    }
    goto skip_0;
    // 0x8024A218: addiu       $t4, $t3, 0x41
    ctx->r12 = ADD32(ctx->r11, 0X41);
    skip_0:
L_8024A21C:
    // 0x8024A21C: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x8024A220: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8024A224: bnel        $v1, $v0, L_8024A2C8
    if (ctx->r3 != ctx->r2) {
        // 0x8024A228: sll         $v1, $t4, 16
        ctx->r3 = S32(ctx->r12 << 16);
            goto L_8024A2C8;
    }
    goto skip_1;
    // 0x8024A228: sll         $v1, $t4, 16
    ctx->r3 = S32(ctx->r12 << 16);
    skip_1:
    // 0x8024A22C: andi        $v0, $t2, 0x30
    ctx->r2 = ctx->r10 & 0X30;
    // 0x8024A230: beq         $v0, $zero, L_8024A2C0
    if (ctx->r2 == 0) {
        // 0x8024A234: andi        $v0, $t2, 0xF3
        ctx->r2 = ctx->r10 & 0XF3;
            goto L_8024A2C0;
    }
    // 0x8024A234: andi        $v0, $t2, 0xF3
    ctx->r2 = ctx->r10 & 0XF3;
    // 0x8024A238: xori        $v1, $v0, 0xB3
    ctx->r3 = ctx->r2 ^ 0XB3;
    // 0x8024A23C: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x8024A240: j           L_8024A2B0
    // 0x8024A244: xori        $v0, $v0, 0x91
    ctx->r2 = ctx->r2 ^ 0X91;
        goto L_8024A2B0;
    // 0x8024A244: xori        $v0, $v0, 0x91
    ctx->r2 = ctx->r2 ^ 0X91;
L_8024A248:
    // 0x8024A248: lhu         $v0, 0x14($t0)
    ctx->r2 = MEM_HU(ctx->r8, 0X14);
    // 0x8024A24C: lhu         $v1, 0x14($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X14);
    // 0x8024A250: lbu         $a0, 0x9($t0)
    ctx->r4 = MEM_BU(ctx->r8, 0X9);
    // 0x8024A254: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8024A258: sra         $t3, $v0, 25
    ctx->r11 = S32(SIGNED(ctx->r2) >> 25);
    // 0x8024A25C: addiu       $t4, $t3, 0x40
    ctx->r12 = ADD32(ctx->r11, 0X40);
    // 0x8024A260: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8024A264: sra         $v1, $v1, 25
    ctx->r3 = S32(SIGNED(ctx->r3) >> 25);
    // 0x8024A268: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8024A26C: bne         $a0, $v0, L_8024A284
    if (ctx->r4 != ctx->r2) {
        // 0x8024A270: addiu       $a3, $v1, 0x40
        ctx->r7 = ADD32(ctx->r3, 0X40);
            goto L_8024A284;
    }
    // 0x8024A270: addiu       $a3, $v1, 0x40
    ctx->r7 = ADD32(ctx->r3, 0X40);
    // 0x8024A274: andi        $v1, $a2, 0xC
    ctx->r3 = ctx->r6 & 0XC;
    // 0x8024A278: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8024A27C: beql        $v1, $v0, L_8024A284
    if (ctx->r3 == ctx->r2) {
        // 0x8024A280: addiu       $t4, $t3, 0x41
        ctx->r12 = ADD32(ctx->r11, 0X41);
            goto L_8024A284;
    }
    goto skip_2;
    // 0x8024A280: addiu       $t4, $t3, 0x41
    ctx->r12 = ADD32(ctx->r11, 0X41);
    skip_2:
L_8024A284:
    // 0x8024A284: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x8024A288: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8024A28C: bne         $v1, $v0, L_8024A2C8
    if (ctx->r3 != ctx->r2) {
        // 0x8024A290: sll         $v1, $t4, 16
        ctx->r3 = S32(ctx->r12 << 16);
            goto L_8024A2C8;
    }
    // 0x8024A290: sll         $v1, $t4, 16
    ctx->r3 = S32(ctx->r12 << 16);
    // 0x8024A294: andi        $v1, $t2, 0x30
    ctx->r3 = ctx->r10 & 0X30;
    // 0x8024A298: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8024A29C: beq         $v1, $v0, L_8024A2C0
    if (ctx->r3 == ctx->r2) {
        // 0x8024A2A0: andi        $v0, $t2, 0xF3
        ctx->r2 = ctx->r10 & 0XF3;
            goto L_8024A2C0;
    }
    // 0x8024A2A0: andi        $v0, $t2, 0xF3
    ctx->r2 = ctx->r10 & 0XF3;
    // 0x8024A2A4: xori        $v1, $v0, 0xE2
    ctx->r3 = ctx->r2 ^ 0XE2;
    // 0x8024A2A8: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x8024A2AC: xori        $v0, $v0, 0xC0
    ctx->r2 = ctx->r2 ^ 0XC0;
L_8024A2B0:
    // 0x8024A2B0: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8024A2B4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8024A2B8: beq         $v1, $zero, L_8024A2C8
    if (ctx->r3 == 0) {
        // 0x8024A2BC: sll         $v1, $t4, 16
        ctx->r3 = S32(ctx->r12 << 16);
            goto L_8024A2C8;
    }
    // 0x8024A2BC: sll         $v1, $t4, 16
    ctx->r3 = S32(ctx->r12 << 16);
L_8024A2C0:
    // 0x8024A2C0: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x8024A2C4: sll         $v1, $t4, 16
    ctx->r3 = S32(ctx->r12 << 16);
L_8024A2C8:
    // 0x8024A2C8: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8024A2CC: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
    // 0x8024A2D0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8024A2D4: bne         $v1, $v0, L_8024A3B4
    if (ctx->r3 != ctx->r2) {
        // 0x8024A2D8: nop
    
            goto L_8024A3B4;
    }
    // 0x8024A2D8: nop

    // 0x8024A2DC: lh          $a0, 0x44($t0)
    ctx->r4 = MEM_H(ctx->r8, 0X44);
    // 0x8024A2E0: lh          $v1, 0x44($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X44);
    // 0x8024A2E4: subu        $v1, $a0, $v1
    ctx->r3 = SUB32(ctx->r4, ctx->r3);
    // 0x8024A2E8: sra         $v0, $v1, 4
    ctx->r2 = S32(SIGNED(ctx->r3) >> 4);
    // 0x8024A2EC: addiu       $v0, $v0, 0x6
    ctx->r2 = ADD32(ctx->r2, 0X6);
    // 0x8024A2F0: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8024A2F4: mflo        $v1
    ctx->r3 = lo;
    // 0x8024A2F8: slti        $v0, $a0, 0x101
    ctx->r2 = SIGNED(ctx->r4) < 0X101 ? 1 : 0;
    // 0x8024A2FC: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x8024A300: sltiu       $a0, $a0, 0x1
    ctx->r4 = ctx->r4 < 0X1 ? 1 : 0;
    // 0x8024A304: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x8024A308: beq         $v0, $zero, L_8024A318
    if (ctx->r2 == 0) {
        // 0x8024A30C: sra         $a2, $v1, 4
        ctx->r6 = S32(SIGNED(ctx->r3) >> 4);
            goto L_8024A318;
    }
    // 0x8024A30C: sra         $a2, $v1, 4
    ctx->r6 = S32(SIGNED(ctx->r3) >> 4);
    // 0x8024A310: j           L_8024A31C
    // 0x8024A314: addiu       $a2, $a2, 0x600
    ctx->r6 = ADD32(ctx->r6, 0X600);
        goto L_8024A31C;
    // 0x8024A314: addiu       $a2, $a2, 0x600
    ctx->r6 = ADD32(ctx->r6, 0X600);
L_8024A318:
    // 0x8024A318: addiu       $a2, $a2, 0x400
    ctx->r6 = ADD32(ctx->r6, 0X400);
L_8024A31C:
    // 0x8024A31C: andi        $v0, $t2, 0x1
    ctx->r2 = ctx->r10 & 0X1;
    // 0x8024A320: beq         $v0, $zero, L_8024A338
    if (ctx->r2 == 0) {
        // 0x8024A324: andi        $v0, $t2, 0x3
        ctx->r2 = ctx->r10 & 0X3;
            goto L_8024A338;
    }
    // 0x8024A324: andi        $v0, $t2, 0x3
    ctx->r2 = ctx->r10 & 0X3;
    // 0x8024A328: lh          $v1, 0x14($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X14);
    // 0x8024A32C: lh          $a0, 0x14($t0)
    ctx->r4 = MEM_H(ctx->r8, 0X14);
    // 0x8024A330: j           L_8024A344
    // 0x8024A334: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
        goto L_8024A344;
    // 0x8024A334: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
L_8024A338:
    // 0x8024A338: lh          $v1, 0x18($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X18);
    // 0x8024A33C: lh          $a0, 0x18($t0)
    ctx->r4 = MEM_H(ctx->r8, 0X18);
    // 0x8024A340: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_8024A344:
    // 0x8024A344: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x8024A348: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8024A34C: mflo        $a3
    ctx->r7 = lo;
    // 0x8024A350: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
    // 0x8024A354: sra         $a1, $v0, 16
    ctx->r5 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8024A358: bltz        $a1, L_8024A3B4
    if (SIGNED(ctx->r5) < 0) {
        // 0x8024A35C: slt         $v0, $a1, $a2
        ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r6) ? 1 : 0;
            goto L_8024A3B4;
    }
    // 0x8024A35C: slt         $v0, $a1, $a2
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x8024A360: beq         $v0, $zero, L_8024A3B4
    if (ctx->r2 == 0) {
        // 0x8024A364: nop
    
            goto L_8024A3B4;
    }
    // 0x8024A364: nop

    // 0x8024A368: lh          $v0, 0x14($t1)
    ctx->r2 = MEM_H(ctx->r9, 0X14);
    // 0x8024A36C: slt         $v0, $a1, $v0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8024A370: beq         $v0, $zero, L_8024A3B4
    if (ctx->r2 == 0) {
        // 0x8024A374: nop
    
            goto L_8024A3B4;
    }
    // 0x8024A374: nop

    // 0x8024A378: lh          $v1, 0x44($t0)
    ctx->r3 = MEM_H(ctx->r8, 0X44);
    // 0x8024A37C: lh          $v0, 0x10($t5)
    ctx->r2 = MEM_H(ctx->r13, 0X10);
    // 0x8024A380: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8024A384: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8024A388: bnel        $v0, $zero, L_8024A390
    if (ctx->r2 != 0) {
        // 0x8024A38C: sh          $a0, 0x10($t1)
        MEM_H(0X10, ctx->r9) = ctx->r4;
            goto L_8024A390;
    }
    goto skip_3;
    // 0x8024A38C: sh          $a0, 0x10($t1)
    MEM_H(0X10, ctx->r9) = ctx->r4;
    skip_3:
L_8024A390:
    // 0x8024A390: lbu         $v1, 0xF($t1)
    ctx->r3 = MEM_BU(ctx->r9, 0XF);
    // 0x8024A394: ori         $v0, $v1, 0x2
    ctx->r2 = ctx->r3 | 0X2;
    // 0x8024A398: sb          $v0, 0xF($t1)
    MEM_B(0XF, ctx->r9) = ctx->r2;
    // 0x8024A39C: slti        $v0, $a1, 0x3C0
    ctx->r2 = SIGNED(ctx->r5) < 0X3C0 ? 1 : 0;
    // 0x8024A3A0: beq         $v0, $zero, L_8024A3B0
    if (ctx->r2 == 0) {
        // 0x8024A3A4: ori         $v0, $v1, 0x6
        ctx->r2 = ctx->r3 | 0X6;
            goto L_8024A3B0;
    }
    // 0x8024A3A4: ori         $v0, $v1, 0x6
    ctx->r2 = ctx->r3 | 0X6;
    // 0x8024A3A8: sb          $v0, 0xF($t1)
    MEM_B(0XF, ctx->r9) = ctx->r2;
    // 0x8024A3AC: sh          $zero, 0x10($t1)
    MEM_H(0X10, ctx->r9) = 0;
L_8024A3B0:
    // 0x8024A3B0: sh          $a3, 0x14($t1)
    MEM_H(0X14, ctx->r9) = ctx->r7;
L_8024A3B4:
    // 0x8024A3B4: jr          $ra
    // 0x8024A3B8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x8024A3B8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80233C90_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233C90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80233C94: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80233C98: lh          $v1, 0x4($a2)
    ctx->r3 = MEM_H(ctx->r6, 0X4);
    // 0x80233C9C: lhu         $v0, 0x16($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X16);
    // 0x80233CA0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80233CA4: sh          $v0, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r2;
    // 0x80233CA8: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x80233CAC: lw          $v1, 0x4($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X4);
    // 0x80233CB0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80233CB4: sw          $v0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r2;
    // 0x80233CB8: lhu         $v0, 0x0($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X0);
    // 0x80233CBC: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x80233CC0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80233CC4: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
    // 0x80233CC8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80233CCC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80233CD0: bne         $v0, $v1, L_80233CE8
    if (ctx->r2 != ctx->r3) {
        // 0x80233CD4: ori         $v1, $zero, 0x8000
        ctx->r3 = 0 | 0X8000;
            goto L_80233CE8;
    }
    // 0x80233CD4: ori         $v1, $zero, 0x8000
    ctx->r3 = 0 | 0X8000;
    // 0x80233CD8: lw          $v0, 0x4($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X4);
    // 0x80233CDC: sh          $zero, 0x0($a2)
    MEM_H(0X0, ctx->r6) = 0;
    // 0x80233CE0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80233CE4: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
L_80233CE8:
    // 0x80233CE8: jal         0x8005044C
    // 0x80233CEC: nop

    func_8005044C_2B84C(rdram, ctx);
        goto after_0;
    // 0x80233CEC: nop

    after_0:
    // 0x80233CF0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80233CF4: jr          $ra
    // 0x80233CF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80233CF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80233CFC: nop

;}
RECOMP_FUNC void func_80227CA4_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227CA4: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x80227CA8: lbu         $v0, 0x8($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X8);
    // 0x80227CAC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227CB0: sb          $v0, 0x8($v1)
    MEM_B(0X8, ctx->r3) = ctx->r2;
    // 0x80227CB4: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x80227CB8: jr          $ra
    // 0x80227CBC: sb          $zero, 0x9($v0)
    MEM_B(0X9, ctx->r2) = 0;
    TRACE_RETURN()
    return;
    // 0x80227CBC: sb          $zero, 0x9($v0)
    MEM_B(0X9, ctx->r2) = 0;
;}
RECOMP_FUNC void func_80249444_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80249444: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80249448: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8024944C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80249450: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80249454: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80249458: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8024945C: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x80249460: lw          $s2, 0x44($s1)
    ctx->r18 = MEM_W(ctx->r17, 0X44);
    // 0x80249464: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80249468: beq         $v1, $v0, L_802494B0
    if (ctx->r3 == ctx->r2) {
        // 0x8024946C: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_802494B0;
    }
    // 0x8024946C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80249470: beql        $v0, $zero, L_80249488
    if (ctx->r2 == 0) {
        // 0x80249474: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80249488;
    }
    goto skip_0;
    // 0x80249474: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80249478: beq         $v1, $zero, L_80249498
    if (ctx->r3 == 0) {
        // 0x8024947C: lui         $v1, 0x20
        ctx->r3 = S32(0X20 << 16);
            goto L_80249498;
    }
    // 0x8024947C: lui         $v1, 0x20
    ctx->r3 = S32(0X20 << 16);
    // 0x80249480: j           L_802495DC
    // 0x80249484: nop

        goto L_802495DC;
    // 0x80249484: nop

L_80249488:
    // 0x80249488: beq         $v1, $v0, L_802494E4
    if (ctx->r3 == ctx->r2) {
        // 0x8024948C: nop
    
            goto L_802494E4;
    }
    // 0x8024948C: nop

    // 0x80249490: j           L_802495DC
    // 0x80249494: nop

        goto L_802495DC;
    // 0x80249494: nop

L_80249498:
    // 0x80249498: lh          $v0, 0x3A($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X3A);
    // 0x8024949C: sw          $v1, 0x50($s1)
    MEM_W(0X50, ctx->r17) = ctx->r3;
    // 0x802494A0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802494A4: sb          $v1, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r3;
    // 0x802494A8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802494AC: sw          $v0, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = ctx->r2;
L_802494B0:
    // 0x802494B0: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x802494B4: ori         $v0, $v0, 0xFF00
    ctx->r2 = ctx->r2 | 0XFF00;
    // 0x802494B8: lw          $v1, 0xC($s2)
    ctx->r3 = MEM_W(ctx->r18, 0XC);
    // 0x802494BC: lui         $a0, 0x1
    ctx->r4 = S32(0X1 << 16);
    // 0x802494C0: ori         $a0, $a0, 0x1000
    ctx->r4 = ctx->r4 | 0X1000;
    // 0x802494C4: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x802494C8: bne         $v1, $a0, L_802494D8
    if (ctx->r3 != ctx->r4) {
        // 0x802494CC: nop
    
            goto L_802494D8;
    }
    // 0x802494CC: nop

    // 0x802494D0: jal         0x80249678
    // 0x802494D4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_80249678_ovl10(rdram, ctx);
        goto after_0;
    // 0x802494D4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_0:
L_802494D8:
    // 0x802494D8: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x802494DC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802494E0: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_802494E4:
    // 0x802494E4: lw          $v0, 0x4C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4C);
    // 0x802494E8: lw          $a0, 0x50($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X50);
    // 0x802494EC: lhu         $v1, 0x3A($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X3A);
    // 0x802494F0: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x802494F4: sw          $v0, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = ctx->r2;
    // 0x802494F8: lw          $v0, 0x50($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X50);
    // 0x802494FC: lhu         $a1, 0x4C($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X4C);
    // 0x80249500: lui         $a0, 0xFFFC
    ctx->r4 = S32(0XFFFC << 16);
    // 0x80249504: addiu       $v1, $v1, -0x50
    ctx->r3 = ADD32(ctx->r3, -0X50);
    // 0x80249508: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8024950C: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80249510: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80249514: sh          $a1, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r5;
    // 0x80249518: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8024951C: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x80249520: slt         $v1, $v1, $a1
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80249524: beq         $v1, $zero, L_80249594
    if (ctx->r3 == 0) {
        // 0x80249528: sw          $v0, 0x50($s1)
        MEM_W(0X50, ctx->r17) = ctx->r2;
            goto L_80249594;
    }
    // 0x80249528: sw          $v0, 0x50($s1)
    MEM_W(0X50, ctx->r17) = ctx->r2;
    // 0x8024952C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80249530: addiu       $a1, $s2, 0x3
    ctx->r5 = ADD32(ctx->r18, 0X3);
    // 0x80249534: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80249538: sb          $zero, 0x3($s2)
    MEM_B(0X3, ctx->r18) = 0;
    // 0x8024953C: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x80249540: sb          $zero, 0x9($s2)
    MEM_B(0X9, ctx->r18) = 0;
    // 0x80249544: sw          $zero, 0x4C($s2)
    MEM_W(0X4C, ctx->r18) = 0;
    // 0x80249548: jal         0x8004D5D4
    // 0x8024954C: sw          $zero, 0x50($s2)
    MEM_W(0X50, ctx->r18) = 0;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_1;
    // 0x8024954C: sw          $zero, 0x50($s2)
    MEM_W(0X50, ctx->r18) = 0;
    after_1:
    // 0x80249550: addiu       $s0, $s2, 0x18
    ctx->r16 = ADD32(ctx->r18, 0X18);
    // 0x80249554: jal         0x8002C654
    // 0x80249558: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_2;
    // 0x80249558: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8024955C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80249560: jal         0x800317C0
    // 0x80249564: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_800317C0_CBC0(rdram, ctx);
        goto after_3;
    // 0x80249564: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80249568: lbu         $a0, 0xB($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0XB);
    // 0x8024956C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80249570: jal         0x800319B4
    // 0x80249574: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    func_800319B4_CDB4(rdram, ctx);
        goto after_4;
    // 0x80249574: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    after_4:
    // 0x80249578: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8024957C: jal         0x80031BB4
    // 0x80249580: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80031BB4_CFB4(rdram, ctx);
        goto after_5;
    // 0x80249580: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80249584: jal         0x8004F684
    // 0x80249588: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F684_2AA84(rdram, ctx);
        goto after_6;
    // 0x80249588: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
    // 0x8024958C: j           L_802495DC
    // 0x80249590: nop

        goto L_802495DC;
    // 0x80249590: nop

L_80249594:
    // 0x80249594: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x80249598: jal         0x8002C654
    // 0x8024959C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_7;
    // 0x8024959C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x802495A0: lbu         $v0, 0xB($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XB);
    // 0x802495A4: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x802495A8: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x802495AC: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802495B0: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x802495B4: lh          $a0, 0x2370($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X2370);
    // 0x802495B8: jal         0x80031BB4
    // 0x802495BC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80031BB4_CFB4(rdram, ctx);
        goto after_8;
    // 0x802495BC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_8:
    // 0x802495C0: lb          $a0, 0xF($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XF);
    // 0x802495C4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x802495C8: jal         0x800319B4
    // 0x802495CC: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    func_800319B4_CDB4(rdram, ctx);
        goto after_9;
    // 0x802495CC: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    after_9:
    // 0x802495D0: lbu         $v0, 0xB($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XB);
    // 0x802495D4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802495D8: sb          $v0, 0xB($s2)
    MEM_B(0XB, ctx->r18) = ctx->r2;
L_802495DC:
    // 0x802495DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802495E0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802495E4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802495E8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802495EC: jr          $ra
    // 0x802495F0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802495F0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802268AC_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802268AC: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x802268B0: lw          $v0, 0x10($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X10);
    // 0x802268B4: lw          $v1, 0x24($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X24);
    // 0x802268B8: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x802268BC: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x802268C0: bne         $v0, $zero, L_8022698C
    if (ctx->r2 != 0) {
        // 0x802268C4: slti        $v0, $v0, 0x1A
        ctx->r2 = SIGNED(ctx->r2) < 0X1A ? 1 : 0;
            goto L_8022698C;
    }
    // 0x802268C4: slti        $v0, $v0, 0x1A
    ctx->r2 = SIGNED(ctx->r2) < 0X1A ? 1 : 0;
    // 0x802268C8: sb          $zero, 0x9($v1)
    MEM_B(0X9, ctx->r3) = 0;
    // 0x802268CC: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x802268D0: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x802268D4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802268D8: sh          $v0, 0x4DE8($at)
    MEM_H(0X4DE8, ctx->r1) = ctx->r2;
    // 0x802268DC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802268E0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802268E4: sh          $v0, 0x4DEA($at)
    MEM_H(0X4DEA, ctx->r1) = ctx->r2;
    // 0x802268E8: addiu       $v0, $zero, 0x1F00
    ctx->r2 = ADD32(0, 0X1F00);
    // 0x802268EC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802268F0: sh          $v0, 0x4DEC($at)
    MEM_H(0X4DEC, ctx->r1) = ctx->r2;
    // 0x802268F4: lui         $v0, 0x400
    ctx->r2 = S32(0X400 << 16);
    // 0x802268F8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802268FC: sw          $v0, 0x4DD8($at)
    MEM_W(0X4DD8, ctx->r1) = ctx->r2;
    // 0x80226900: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x80226904: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226908: sw          $v0, 0x4DDC($at)
    MEM_W(0X4DDC, ctx->r1) = ctx->r2;
    // 0x8022690C: lui         $v0, 0x1F00
    ctx->r2 = S32(0X1F00 << 16);
    // 0x80226910: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226914: sw          $v0, 0x4DE0($at)
    MEM_W(0X4DE0, ctx->r1) = ctx->r2;
    // 0x80226918: addiu       $v0, $zero, 0xC00
    ctx->r2 = ADD32(0, 0XC00);
    // 0x8022691C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226920: sh          $v0, 0x4DF2($at)
    MEM_H(0X4DF2, ctx->r1) = ctx->r2;
    // 0x80226924: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80226928: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022692C: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
    // 0x80226930: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226934: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80226938: sb          $v0, 0x333A($at)
    MEM_B(0X333A, ctx->r1) = ctx->r2;
    // 0x8022693C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80226940: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226944: sh          $zero, 0x4DF0($at)
    MEM_H(0X4DF0, ctx->r1) = 0;
    // 0x80226948: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022694C: sh          $zero, 0x4DF4($at)
    MEM_H(0X4DF4, ctx->r1) = 0;
    // 0x80226950: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80226954: sb          $v0, 0x3354($at)
    MEM_B(0X3354, ctx->r1) = ctx->r2;
    // 0x80226958: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022695C: sb          $v0, 0x3344($at)
    MEM_B(0X3344, ctx->r1) = ctx->r2;
    // 0x80226960: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80226964: sb          $v0, 0x3355($at)
    MEM_B(0X3355, ctx->r1) = ctx->r2;
    // 0x80226968: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022696C: sb          $v0, 0x3345($at)
    MEM_B(0X3345, ctx->r1) = ctx->r2;
    // 0x80226970: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80226974: sb          $v0, 0x3356($at)
    MEM_B(0X3356, ctx->r1) = ctx->r2;
    // 0x80226978: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022697C: sb          $v0, 0x3346($at)
    MEM_B(0X3346, ctx->r1) = ctx->r2;
    // 0x80226980: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80226984: j           L_802269E8
    // 0x80226988: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
        goto L_802269E8;
    // 0x80226988: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
L_8022698C:
    // 0x8022698C: beq         $v0, $zero, L_802269E8
    if (ctx->r2 == 0) {
        // 0x80226990: nop
    
            goto L_802269E8;
    }
    // 0x80226990: nop

    // 0x80226994: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80226998: lbu         $v0, 0x3354($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3354);
    // 0x8022699C: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x802269A0: lbu         $v1, 0x3355($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X3355);
    // 0x802269A4: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802269A8: lbu         $a0, 0x3356($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X3356);
    // 0x802269AC: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    // 0x802269B0: addiu       $v1, $v1, 0x3
    ctx->r3 = ADD32(ctx->r3, 0X3);
    // 0x802269B4: addiu       $a0, $a0, 0x3
    ctx->r4 = ADD32(ctx->r4, 0X3);
    // 0x802269B8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802269BC: sb          $v0, 0x3354($at)
    MEM_B(0X3354, ctx->r1) = ctx->r2;
    // 0x802269C0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802269C4: sb          $v0, 0x3344($at)
    MEM_B(0X3344, ctx->r1) = ctx->r2;
    // 0x802269C8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802269CC: sb          $v1, 0x3355($at)
    MEM_B(0X3355, ctx->r1) = ctx->r3;
    // 0x802269D0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802269D4: sb          $v1, 0x3345($at)
    MEM_B(0X3345, ctx->r1) = ctx->r3;
    // 0x802269D8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802269DC: sb          $a0, 0x3356($at)
    MEM_B(0X3356, ctx->r1) = ctx->r4;
    // 0x802269E0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802269E4: sb          $a0, 0x3346($at)
    MEM_B(0X3346, ctx->r1) = ctx->r4;
L_802269E8:
    // 0x802269E8: lw          $v0, 0x10($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X10);
    // 0x802269EC: slti        $v0, $v0, 0x41
    ctx->r2 = SIGNED(ctx->r2) < 0X41 ? 1 : 0;
    // 0x802269F0: beq         $v0, $zero, L_80226A0C
    if (ctx->r2 == 0) {
        // 0x802269F4: addiu       $v0, $zero, 0xC
        ctx->r2 = ADD32(0, 0XC);
            goto L_80226A0C;
    }
    // 0x802269F4: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x802269F8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802269FC: sb          $zero, 0x4B18($at)
    MEM_B(0X4B18, ctx->r1) = 0;
    // 0x80226A00: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226A04: j           L_80226A1C
    // 0x80226A08: sb          $zero, 0x4B19($at)
    MEM_B(0X4B19, ctx->r1) = 0;
        goto L_80226A1C;
    // 0x80226A08: sb          $zero, 0x4B19($at)
    MEM_B(0X4B19, ctx->r1) = 0;
L_80226A0C:
    // 0x80226A0C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226A10: sb          $v0, 0x4B18($at)
    MEM_B(0X4B18, ctx->r1) = ctx->r2;
    // 0x80226A14: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226A18: sb          $v0, 0x4B19($at)
    MEM_B(0X4B19, ctx->r1) = ctx->r2;
L_80226A1C:
    // 0x80226A1C: jr          $ra
    // 0x80226A20: nop

    TRACE_RETURN()
    return;
    // 0x80226A20: nop

;}
RECOMP_FUNC void func_80230028_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230028: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8023002C: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x80230030: beq         $v1, $zero, L_8023004C
    if (ctx->r3 == 0) {
        // 0x80230034: addiu       $a1, $a0, 0x348
        ctx->r5 = ADD32(ctx->r4, 0X348);
            goto L_8023004C;
    }
    // 0x80230034: addiu       $a1, $a0, 0x348
    ctx->r5 = ADD32(ctx->r4, 0X348);
    // 0x80230038: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023003C: beq         $v1, $v0, L_80230058
    if (ctx->r3 == ctx->r2) {
        // 0x80230040: nop
    
            goto L_80230058;
    }
    // 0x80230040: nop

    // 0x80230044: j           L_80230084
    // 0x80230048: nop

        goto L_80230084;
    // 0x80230048: nop

L_8023004C:
    // 0x8023004C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230050: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x80230054: sb          $zero, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = 0;
L_80230058:
    // 0x80230058: lhu         $a0, 0x0($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X0);
    // 0x8023005C: andi        $v0, $a0, 0x10
    ctx->r2 = ctx->r4 & 0X10;
    // 0x80230060: bne         $v0, $zero, L_80230080
    if (ctx->r2 != 0) {
        // 0x80230064: ori         $v0, $a0, 0x1
        ctx->r2 = ctx->r4 | 0X1;
            goto L_80230080;
    }
    // 0x80230064: ori         $v0, $a0, 0x1
    ctx->r2 = ctx->r4 | 0X1;
    // 0x80230068: lw          $v0, 0x14($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X14);
    // 0x8023006C: lui         $v1, 0xFF
    ctx->r3 = S32(0XFF << 16);
    // 0x80230070: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x80230074: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80230078: beq         $v0, $zero, L_80230084
    if (ctx->r2 == 0) {
        // 0x8023007C: ori         $v0, $a0, 0x1
        ctx->r2 = ctx->r4 | 0X1;
            goto L_80230084;
    }
    // 0x8023007C: ori         $v0, $a0, 0x1
    ctx->r2 = ctx->r4 | 0X1;
L_80230080:
    // 0x80230080: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
L_80230084:
    // 0x80230084: jr          $ra
    // 0x80230088: nop

    TRACE_RETURN()
    return;
    // 0x80230088: nop

;}
RECOMP_FUNC void func_80233FF0_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233FF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80233FF4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80233FF8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80233FFC: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80234000: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80234004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80234008: jal         0x8009A3B4
    // 0x8023400C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8023400C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80234010: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80234014: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80234018: jal         0x8009A3B4
    // 0x8023401C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8023401C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80234020: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80234024: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80234028: jal         0x8009A3B4
    // 0x8023402C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8023402C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80234030: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80234034: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80234038: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8023403C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80234040: lw          $v0, 0x11FC($at)
    ctx->r2 = MEM_W(ctx->r1, 0X11FC);
    // 0x80234044: jalr        $v0
    // 0x80234048: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x80234048: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8023404C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80234050: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80234054: beq         $v0, $zero, L_8023406C
    if (ctx->r2 == 0) {
        // 0x80234058: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023406C;
    }
    // 0x80234058: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023405C: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x80234060: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x80234064: jal         0x8003B564
    // 0x80234068: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_4;
    // 0x80234068: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_4:
L_8023406C:
    // 0x8023406C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80234070: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80234074: jr          $ra
    // 0x80234078: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80234078: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023AC94_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023AC94: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8023AC98: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023AC9C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023ACA0: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8023ACA4: lui         $s3, 0x8020
    ctx->r19 = S32(0X8020 << 16);
    // 0x8023ACA8: addiu       $s3, $s3, 0x49B0
    ctx->r19 = ADD32(ctx->r19, 0X49B0);
    // 0x8023ACAC: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8023ACB0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8023ACB4: jal         0x8003516C
    // 0x8023ACB8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    func_8003516C_1056C(rdram, ctx);
        goto after_0;
    // 0x8023ACB8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x8023ACBC: bne         $v0, $zero, L_8023AD2C
    if (ctx->r2 != 0) {
        // 0x8023ACC0: addiu       $s2, $s3, 0x14
        ctx->r18 = ADD32(ctx->r19, 0X14);
            goto L_8023AD2C;
    }
    // 0x8023ACC0: addiu       $s2, $s3, 0x14
    ctx->r18 = ADD32(ctx->r19, 0X14);
    // 0x8023ACC4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8023ACC8: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x8023ACCC: jal         0x8023B728
    // 0x8023ACD0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8023B728_ovl10(rdram, ctx);
        goto after_1;
    // 0x8023ACD0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x8023ACD4: sltiu       $v0, $v0, 0x80
    ctx->r2 = ctx->r2 < 0X80 ? 1 : 0;
    // 0x8023ACD8: bne         $v0, $zero, L_8023AD2C
    if (ctx->r2 != 0) {
        // 0x8023ACDC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023AD2C;
    }
    // 0x8023ACDC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023ACE0: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8023ACE4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023ACE8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8023ACEC: addiu       $v0, $zero, 0x82
    ctx->r2 = ADD32(0, 0X82);
    // 0x8023ACF0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023ACF4: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
    // 0x8023ACF8: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    // 0x8023ACFC: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x8023AD00: lw          $a1, 0x1738($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1738);
    // 0x8023AD04: jal         0x80050294
    // 0x8023AD08: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x8023AD08: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x8023AD0C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8023AD10: jal         0x8004EC38
    // 0x8023AD14: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8004EC38_2A038(rdram, ctx);
        goto after_3;
    // 0x8023AD14: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_3:
    // 0x8023AD18: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023AD1C: sh          $v0, 0x4DF2($at)
    MEM_H(0X4DF2, ctx->r1) = ctx->r2;
    // 0x8023AD20: addiu       $v0, $v0, -0x800
    ctx->r2 = ADD32(ctx->r2, -0X800);
    // 0x8023AD24: j           L_8023AE34
    // 0x8023AD28: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
        goto L_8023AE34;
    // 0x8023AD28: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8023AD2C:
    // 0x8023AD2C: jal         0x8003516C
    // 0x8023AD30: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_4;
    // 0x8023AD30: nop

    after_4:
    // 0x8023AD34: beq         $v0, $zero, L_8023ADB4
    if (ctx->r2 == 0) {
        // 0x8023AD38: addiu       $s1, $s0, 0x14
        ctx->r17 = ADD32(ctx->r16, 0X14);
            goto L_8023ADB4;
    }
    // 0x8023AD38: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x8023AD3C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023AD40: addiu       $s2, $s3, 0x14
    ctx->r18 = ADD32(ctx->r19, 0X14);
    // 0x8023AD44: jal         0x8004EC38
    // 0x8023AD48: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_8004EC38_2A038(rdram, ctx);
        goto after_5;
    // 0x8023AD48: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_5:
    // 0x8023AD4C: lh          $v1, 0x56($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X56);
    // 0x8023AD50: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8023AD54: bgez        $v1, L_8023AD84
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8023AD58: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8023AD84;
    }
    // 0x8023AD58: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023AD5C: jal         0x8004EC38
    // 0x8023AD60: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_8004EC38_2A038(rdram, ctx);
        goto after_6;
    // 0x8023AD60: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_6:
    // 0x8023AD64: lh          $v1, 0x56($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X56);
    // 0x8023AD68: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8023AD6C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8023AD70: slti        $v0, $v0, 0x83
    ctx->r2 = SIGNED(ctx->r2) < 0X83 ? 1 : 0;
    // 0x8023AD74: bne         $v0, $zero, L_8023ADB8
    if (ctx->r2 != 0) {
        // 0x8023AD78: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8023ADB8;
    }
    // 0x8023AD78: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8023AD7C: j           L_8023ADA4
    // 0x8023AD80: nop

        goto L_8023ADA4;
    // 0x8023AD80: nop

L_8023AD84:
    // 0x8023AD84: jal         0x8004EC38
    // 0x8023AD88: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_8004EC38_2A038(rdram, ctx);
        goto after_7;
    // 0x8023AD88: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_7:
    // 0x8023AD8C: lh          $v1, 0x56($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X56);
    // 0x8023AD90: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8023AD94: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8023AD98: slti        $v1, $v1, 0x83
    ctx->r3 = SIGNED(ctx->r3) < 0X83 ? 1 : 0;
    // 0x8023AD9C: bne         $v1, $zero, L_8023ADB8
    if (ctx->r3 != 0) {
        // 0x8023ADA0: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8023ADB8;
    }
    // 0x8023ADA0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_8023ADA4:
    // 0x8023ADA4: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8023ADA8: lhu         $v1, 0xB4($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XB4);
    // 0x8023ADAC: j           L_8023ADC0
    // 0x8023ADB0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
        goto L_8023ADC0;
    // 0x8023ADB0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
L_8023ADB4:
    // 0x8023ADB4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_8023ADB8:
    // 0x8023ADB8: jal         0x8004EC38
    // 0x8023ADBC: addiu       $a1, $s3, 0x14
    ctx->r5 = ADD32(ctx->r19, 0X14);
    func_8004EC38_2A038(rdram, ctx);
        goto after_8;
    // 0x8023ADBC: addiu       $a1, $s3, 0x14
    ctx->r5 = ADD32(ctx->r19, 0X14);
    after_8:
L_8023ADC0:
    // 0x8023ADC0: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8023ADC4: addiu       $s1, $s3, 0x14
    ctx->r17 = ADD32(ctx->r19, 0X14);
    // 0x8023ADC8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023ADCC: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    // 0x8023ADD0: jal         0x8023B728
    // 0x8023ADD4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8023B728_ovl10(rdram, ctx);
        goto after_9;
    // 0x8023ADD4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_9:
    // 0x8023ADD8: sltiu       $v0, $v0, 0x80
    ctx->r2 = ctx->r2 < 0X80 ? 1 : 0;
    // 0x8023ADDC: beq         $v0, $zero, L_8023AE34
    if (ctx->r2 == 0) {
        // 0x8023ADE0: addiu       $a0, $s3, 0x428
        ctx->r4 = ADD32(ctx->r19, 0X428);
            goto L_8023AE34;
    }
    // 0x8023ADE0: addiu       $a0, $s3, 0x428
    ctx->r4 = ADD32(ctx->r19, 0X428);
    // 0x8023ADE4: addiu       $a1, $s3, 0x438
    ctx->r5 = ADD32(ctx->r19, 0X438);
    // 0x8023ADE8: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8023ADEC: lw          $v0, 0x5674($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X5674);
    // 0x8023ADF0: lw          $v1, 0x428($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X428);
    // 0x8023ADF4: lui         $a2, 0x8025
    ctx->r6 = S32(0X8025 << 16);
    // 0x8023ADF8: lw          $a2, 0x5670($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X5670);
    // 0x8023ADFC: lw          $a3, 0x430($s3)
    ctx->r7 = MEM_W(ctx->r19, 0X430);
    // 0x8023AE00: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8023AE04: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023AE08: sll         $a2, $a2, 8
    ctx->r6 = S32(ctx->r6 << 8);
    // 0x8023AE0C: addu        $a3, $a3, $a2
    ctx->r7 = ADD32(ctx->r7, ctx->r6);
    // 0x8023AE10: sw          $v1, 0x428($s3)
    MEM_W(0X428, ctx->r19) = ctx->r3;
    // 0x8023AE14: jal         0x8004DD04
    // 0x8023AE18: sw          $a3, 0x430($s3)
    MEM_W(0X430, ctx->r19) = ctx->r7;
    func_8004DD04_29104(rdram, ctx);
        goto after_10;
    // 0x8023AE18: sw          $a3, 0x430($s3)
    MEM_W(0X430, ctx->r19) = ctx->r7;
    after_10:
    // 0x8023AE1C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023AE20: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8023AE24: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x8023AE28: jal         0x8004EC38
    // 0x8023AE2C: sb          $v0, 0x448($s3)
    MEM_B(0X448, ctx->r19) = ctx->r2;
    func_8004EC38_2A038(rdram, ctx);
        goto after_11;
    // 0x8023AE2C: sb          $v0, 0x448($s3)
    MEM_B(0X448, ctx->r19) = ctx->r2;
    after_11:
    // 0x8023AE30: sh          $v0, 0x442($s3)
    MEM_H(0X442, ctx->r19) = ctx->r2;
L_8023AE34:
    // 0x8023AE34: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8023AE38: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8023AE3C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8023AE40: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023AE44: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023AE48: jr          $ra
    // 0x8023AE4C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8023AE4C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80237E38_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237E38: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80237E3C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80237E40: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80237E44: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80237E48: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80237E4C: lbu         $v1, 0xB($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XB);
    // 0x80237E50: beq         $v1, $zero, L_80237E6C
    if (ctx->r3 == 0) {
        // 0x80237E54: addiu       $s1, $s0, 0x308
        ctx->r17 = ADD32(ctx->r16, 0X308);
            goto L_80237E6C;
    }
    // 0x80237E54: addiu       $s1, $s0, 0x308
    ctx->r17 = ADD32(ctx->r16, 0X308);
    // 0x80237E58: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237E5C: beq         $v1, $v0, L_80237EA4
    if (ctx->r3 == ctx->r2) {
        // 0x80237E60: nop
    
            goto L_80237EA4;
    }
    // 0x80237E60: nop

    // 0x80237E64: j           L_80237FF4
    // 0x80237E68: nop

        goto L_80237FF4;
    // 0x80237E68: nop

L_80237E6C:
    // 0x80237E6C: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80237E70: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80237E74: sb          $v1, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r3;
    // 0x80237E78: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80237E7C: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80237E80: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80237E84: lhu         $v1, 0x1638($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X1638);
    // 0x80237E88: lhu         $v0, 0x308($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X308);
    // 0x80237E8C: sh          $zero, 0x310($s0)
    MEM_H(0X310, ctx->r16) = 0;
    // 0x80237E90: andi        $v0, $v0, 0xFEFF
    ctx->r2 = ctx->r2 & 0XFEFF;
    // 0x80237E94: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80237E98: sra         $v1, $v1, 17
    ctx->r3 = S32(SIGNED(ctx->r3) >> 17);
    // 0x80237E9C: sh          $v0, 0x308($s0)
    MEM_H(0X308, ctx->r16) = ctx->r2;
    // 0x80237EA0: sh          $v1, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = ctx->r3;
L_80237EA4:
    // 0x80237EA4: lw          $a0, 0x38($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X38);
    // 0x80237EA8: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x80237EAC: lh          $v1, 0x4($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X4);
    // 0x80237EB0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80237EB4: mult        $v0, $v0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80237EB8: mflo        $v0
    ctx->r2 = lo;
    // 0x80237EBC: lh          $a0, 0x6($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X6);
    // 0x80237EC0: lh          $v1, 0x18($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X18);
    // 0x80237EC4: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x80237EC8: mult        $v1, $v1
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80237ECC: mflo        $v1
    ctx->r3 = lo;
    // 0x80237ED0: lui         $a0, 0x1F
    ctx->r4 = S32(0X1F << 16);
    // 0x80237ED4: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x80237ED8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80237EDC: slt         $a0, $a0, $v0
    ctx->r4 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80237EE0: bnel        $a0, $zero, L_80237F8C
    if (ctx->r4 != 0) {
        // 0x80237EE4: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80237F8C;
    }
    goto skip_0;
    // 0x80237EE4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    skip_0:
    // 0x80237EE8: jal         0x80238C08
    // 0x80237EEC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80238C08_ovl10(rdram, ctx);
        goto after_0;
    // 0x80237EEC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80237EF0: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x80237EF4: lw          $a0, 0x38($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X38);
    // 0x80237EF8: lhu         $v1, 0x0($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X0);
    // 0x80237EFC: sw          $a0, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->r4;
    // 0x80237F00: lw          $a0, 0x38($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X38);
    // 0x80237F04: sb          $v1, 0x49($s1)
    MEM_B(0X49, ctx->r17) = ctx->r3;
    // 0x80237F08: lbu         $a1, 0x3($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X3);
    // 0x80237F0C: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x80237F10: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80237F14: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x80237F18: lb          $a2, 0xC($a0)
    ctx->r6 = MEM_B(ctx->r4, 0XC);
    // 0x80237F1C: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x80237F20: sll         $v1, $a2, 2
    ctx->r3 = S32(ctx->r6 << 2);
    // 0x80237F24: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80237F28: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x80237F2C: lw          $a0, 0x1624($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1624);
    // 0x80237F30: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x80237F34: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80237F38: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x80237F3C: sw          $a0, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->r4;
    // 0x80237F40: lhu         $v1, 0x4($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X4);
    // 0x80237F44: lw          $a0, 0x38($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X38);
    // 0x80237F48: sh          $zero, 0x42($s1)
    MEM_H(0X42, ctx->r17) = 0;
    // 0x80237F4C: sh          $v1, 0x40($s1)
    MEM_H(0X40, ctx->r17) = ctx->r3;
    // 0x80237F50: lhu         $v1, 0x6($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X6);
    // 0x80237F54: sh          $v1, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r3;
    // 0x80237F58: lb          $v1, 0x4A($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X4A);
    // 0x80237F5C: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80237F60: beq         $v1, $v0, L_80237F84
    if (ctx->r3 == ctx->r2) {
        // 0x80237F64: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_80237F84;
    }
    // 0x80237F64: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80237F68: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80237F6C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80237F70: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x80237F74: lw          $v1, 0x34($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X34);
    // 0x80237F78: lbu         $v0, 0xE($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XE);
    // 0x80237F7C: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x80237F80: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
L_80237F84:
    // 0x80237F84: j           L_80237FAC
    // 0x80237F88: sb          $a0, 0x4A($s1)
    MEM_B(0X4A, ctx->r17) = ctx->r4;
        goto L_80237FAC;
    // 0x80237F88: sb          $a0, 0x4A($s1)
    MEM_B(0X4A, ctx->r17) = ctx->r4;
L_80237F8C:
    // 0x80237F8C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80237F90: addiu       $a1, $s1, 0x40
    ctx->r5 = ADD32(ctx->r17, 0X40);
    // 0x80237F94: jal         0x8004F820
    // 0x80237F98: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x80237F98: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_1:
    // 0x80237F9C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80237FA0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80237FA4: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80237FA8: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_80237FAC:
    // 0x80237FAC: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80237FB0: lh          $v1, 0x44($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X44);
    // 0x80237FB4: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80237FB8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80237FBC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80237FC0: lh          $v0, 0x1630($at)
    ctx->r2 = MEM_H(ctx->r1, 0X1630);
    // 0x80237FC4: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x80237FC8: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80237FCC: beql        $v1, $zero, L_80237FE4
    if (ctx->r3 == 0) {
        // 0x80237FD0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80237FE4;
    }
    goto skip_1;
    // 0x80237FD0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    skip_1:
    // 0x80237FD4: lhu         $v0, 0x4C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4C);
    // 0x80237FD8: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x80237FDC: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80237FE0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80237FE4:
    // 0x80237FE4: lh          $a1, 0x44($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X44);
    // 0x80237FE8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80237FEC: jal         0x8004DA90
    // 0x80237FF0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x80237FF0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
L_80237FF4:
    // 0x80237FF4: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80237FF8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80237FFC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80238000: jr          $ra
    // 0x80238004: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80238004: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022F3EC_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F3EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F3F0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F3F4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F3F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022F3FC: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022F400: bne         $v0, $zero, L_8022F4A8
    if (ctx->r2 != 0) {
        // 0x8022F404: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_8022F4A8;
    }
    // 0x8022F404: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022F408: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022F40C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022F410: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022F414: jal         0x8004D5D4
    // 0x8022F418: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022F418: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022F41C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F420: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022F424: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022F428: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022F42C: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022F430: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022F434: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x8022F438: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022F43C: jal         0x8003E934
    // 0x8022F440: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x8022F440: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    after_1:
    // 0x8022F444: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022F448: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x8022F44C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022F450: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022F454: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022F458: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
    // 0x8022F45C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022F460: jal         0x8009A3B4
    // 0x8022F464: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022F464: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    after_2:
    // 0x8022F468: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022F46C: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022F470: jal         0x8009A3B4
    // 0x8022F474: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8022F474: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_3:
    // 0x8022F478: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022F47C: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022F480: jal         0x8009A3B4
    // 0x8022F484: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8022F484: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x8022F488: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F48C: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x8022F490: jal         0x80050294
    // 0x8022F494: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x8022F494: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x8022F498: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022F49C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022F4A0: j           L_8022F4CC
    // 0x8022F4A4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022F4CC;
    // 0x8022F4A4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022F4A8:
    // 0x8022F4A8: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x8022F4AC: bne         $v1, $v0, L_8022F4C4
    if (ctx->r3 != ctx->r2) {
        // 0x8022F4B0: nop
    
            goto L_8022F4C4;
    }
    // 0x8022F4B0: nop

    // 0x8022F4B4: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022F4B8: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022F4BC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022F4C0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022F4C4:
    // 0x8022F4C4: jal         0x8005044C
    // 0x8022F4C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_6;
    // 0x8022F4C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
L_8022F4CC:
    // 0x8022F4CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022F4D0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F4D4: jr          $ra
    // 0x8022F4D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F4D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B4F0_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B4F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B4F4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B4F8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B4FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022B500: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022B504: bne         $v0, $zero, L_8022B550
    if (ctx->r2 != 0) {
        // 0x8022B508: nop
    
            goto L_8022B550;
    }
    // 0x8022B508: nop

    // 0x8022B50C: jal         0x8022BE40
    // 0x8022B510: nop

    func_8022BE40_ovl10(rdram, ctx);
        goto after_0;
    // 0x8022B510: nop

    after_0:
    // 0x8022B514: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022B518: bne         $v0, $zero, L_8022B54C
    if (ctx->r2 != 0) {
        // 0x8022B51C: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_8022B54C;
    }
    // 0x8022B51C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022B520: jal         0x80229F50
    // 0x8022B524: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80229F50_ovl10(rdram, ctx);
        goto after_1;
    // 0x8022B524: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_1:
    // 0x8022B528: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022B52C: jal         0x8003E87C
    // 0x8022B530: addiu       $a0, $a0, 0x7C8
    ctx->r4 = ADD32(ctx->r4, 0X7C8);
    func_8003E87C_19C7C(rdram, ctx);
        goto after_2;
    // 0x8022B530: addiu       $a0, $a0, 0x7C8
    ctx->r4 = ADD32(ctx->r4, 0X7C8);
    after_2:
    // 0x8022B534: addiu       $v1, $zero, 0x100
    ctx->r3 = ADD32(0, 0X100);
    // 0x8022B538: bne         $v0, $v1, L_8022B54C
    if (ctx->r2 != ctx->r3) {
        // 0x8022B53C: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_8022B54C;
    }
    // 0x8022B53C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022B540: jal         0x8022A170
    // 0x8022B544: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_8022A170_ovl10(rdram, ctx);
        goto after_3;
    // 0x8022B544: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_3:
    // 0x8022B548: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_8022B54C:
    // 0x8022B54C: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8022B550:
    // 0x8022B550: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022B554: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B558: jr          $ra
    // 0x8022B55C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B55C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226B3C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226B3C: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80226B40: lw          $a2, 0x24($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X24);
    // 0x80226B44: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80226B48: bne         $v0, $zero, L_80226B7C
    if (ctx->r2 != 0) {
        // 0x80226B4C: addiu       $a1, $a1, 0x49B0
        ctx->r5 = ADD32(ctx->r5, 0X49B0);
            goto L_80226B7C;
    }
    // 0x80226B4C: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x80226B50: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x80226B54: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80226B58: lh          $v1, 0x4DEC($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X4DEC);
    // 0x80226B5C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226B60: sb          $zero, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = 0;
    // 0x80226B64: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80226B68: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80226B6C: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x80226B70: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226B74: sw          $v1, 0x4DE0($at)
    MEM_W(0X4DE0, ctx->r1) = ctx->r3;
    // 0x80226B78: sh          $zero, 0x6($a0)
    MEM_H(0X6, ctx->r4) = 0;
L_80226B7C:
    // 0x80226B7C: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80226B80: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
    // 0x80226B84: bne         $v1, $v0, L_80226B90
    if (ctx->r3 != ctx->r2) {
        // 0x80226B88: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_80226B90;
    }
    // 0x80226B88: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80226B8C: sb          $v0, 0x9($a2)
    MEM_B(0X9, ctx->r6) = ctx->r2;
L_80226B90:
    // 0x80226B90: jr          $ra
    // 0x80226B94: nop

    TRACE_RETURN()
    return;
    // 0x80226B94: nop

;}
RECOMP_FUNC void func_8024B7B8_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024B7B8: addu        $t0, $a0, $zero
    ctx->r8 = ADD32(ctx->r4, 0);
    // 0x8024B7BC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8024B7C0: lui         $t1, 0x801C
    ctx->r9 = S32(0X801C << 16);
    // 0x8024B7C4: addiu       $t1, $t1, -0x3B90
    ctx->r9 = ADD32(ctx->r9, -0X3B90);
L_8024B7C8:
    // 0x8024B7C8: lb          $v1, 0xF($t0)
    ctx->r3 = MEM_B(ctx->r8, 0XF);
    // 0x8024B7CC: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8024B7D0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8024B7D4: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x8024B7D8: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8024B7DC: lw          $v1, 0x4C($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X4C);
    // 0x8024B7E0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8024B7E4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8024B7E8: lw          $v0, -0x3B94($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3B94);
    // 0x8024B7EC: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8024B7F0: bnel        $v0, $zero, L_8024B8C0
    if (ctx->r2 != 0) {
        // 0x8024B7F4: addiu       $a3, $a3, 0x1
        ctx->r7 = ADD32(ctx->r7, 0X1);
            goto L_8024B8C0;
    }
    goto skip_0;
    // 0x8024B7F4: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    skip_0:
    // 0x8024B7F8: slti        $v0, $a3, 0x2
    ctx->r2 = SIGNED(ctx->r7) < 0X2 ? 1 : 0;
    // 0x8024B7FC: beq         $v0, $zero, L_8024B894
    if (ctx->r2 == 0) {
        // 0x8024B800: addiu       $a2, $zero, 0x2
        ctx->r6 = ADD32(0, 0X2);
            goto L_8024B894;
    }
    // 0x8024B800: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
L_8024B804:
    // 0x8024B804: lb          $v0, 0xF($t0)
    ctx->r2 = MEM_B(ctx->r8, 0XF);
    // 0x8024B808: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x8024B80C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024B810: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x8024B814: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8024B818: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8024B81C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8024B820: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8024B824: lw          $v0, -0x3B94($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3B94);
    // 0x8024B828: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8024B82C: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x8024B830: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8024B834: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8024B838: sw          $v0, -0x3B94($at)
    MEM_W(-0X3B94, ctx->r1) = ctx->r2;
L_8024B83C:
    // 0x8024B83C: lb          $v1, 0xF($t0)
    ctx->r3 = MEM_B(ctx->r8, 0XF);
    // 0x8024B840: sll         $a0, $a1, 1
    ctx->r4 = S32(ctx->r5 << 1);
    // 0x8024B844: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8024B848: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8024B84C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8024B850: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x8024B854: sll         $v1, $v0, 4
    ctx->r3 = S32(ctx->r2 << 4);
    // 0x8024B858: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8024B85C: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8024B860: addu        $v0, $v0, $t1
    ctx->r2 = ADD32(ctx->r2, ctx->r9);
    // 0x8024B864: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x8024B868: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x8024B86C: addu        $v1, $v1, $t1
    ctx->r3 = ADD32(ctx->r3, ctx->r9);
    // 0x8024B870: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x8024B874: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x8024B878: slti        $v0, $a1, 0x4
    ctx->r2 = SIGNED(ctx->r5) < 0X4 ? 1 : 0;
    // 0x8024B87C: bne         $v0, $zero, L_8024B83C
    if (ctx->r2 != 0) {
        // 0x8024B880: nop
    
            goto L_8024B83C;
    }
    // 0x8024B880: nop

    // 0x8024B884: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x8024B888: slt         $v0, $a3, $a2
    ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x8024B88C: bne         $v0, $zero, L_8024B804
    if (ctx->r2 != 0) {
        // 0x8024B890: nop
    
            goto L_8024B804;
    }
    // 0x8024B890: nop

L_8024B894:
    // 0x8024B894: lb          $v1, 0xF($t0)
    ctx->r3 = MEM_B(ctx->r8, 0XF);
    // 0x8024B898: sll         $a0, $v1, 1
    ctx->r4 = S32(ctx->r3 << 1);
    // 0x8024B89C: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x8024B8A0: lw          $v1, 0x4C($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X4C);
    // 0x8024B8A4: addu        $a0, $a0, $a3
    ctx->r4 = ADD32(ctx->r4, ctx->r7);
    // 0x8024B8A8: sll         $a0, $a0, 4
    ctx->r4 = S32(ctx->r4 << 4);
    // 0x8024B8AC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8024B8B0: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x8024B8B4: sw          $v1, -0x3B94($at)
    MEM_W(-0X3B94, ctx->r1) = ctx->r3;
    // 0x8024B8B8: j           L_8024B8CC
    // 0x8024B8BC: andi        $v0, $a3, 0xFF
    ctx->r2 = ctx->r7 & 0XFF;
        goto L_8024B8CC;
    // 0x8024B8BC: andi        $v0, $a3, 0xFF
    ctx->r2 = ctx->r7 & 0XFF;
L_8024B8C0:
    // 0x8024B8C0: slti        $v0, $a3, 0x3
    ctx->r2 = SIGNED(ctx->r7) < 0X3 ? 1 : 0;
    // 0x8024B8C4: bne         $v0, $zero, L_8024B7C8
    if (ctx->r2 != 0) {
        // 0x8024B8C8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8024B7C8;
    }
    // 0x8024B8C8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_8024B8CC:
    // 0x8024B8CC: jr          $ra
    // 0x8024B8D0: nop

    TRACE_RETURN()
    return;
    // 0x8024B8D0: nop

;}
RECOMP_FUNC void func_802265B0_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802265B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802265B4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802265B8: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x802265BC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x802265C0: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x802265C4: bne         $v0, $zero, L_802265F8
    if (ctx->r2 != 0) {
        // 0x802265C8: addiu       $v1, $zero, 0x300
        ctx->r3 = ADD32(0, 0X300);
            goto L_802265F8;
    }
    // 0x802265C8: addiu       $v1, $zero, 0x300
    ctx->r3 = ADD32(0, 0X300);
    // 0x802265CC: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x802265D0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802265D4: sh          $v1, 0x49B8($at)
    MEM_H(0X49B8, ctx->r1) = ctx->r3;
    // 0x802265D8: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x802265DC: jal         0x8004D80C
    // 0x802265E0: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    func_8004D80C_28C0C(rdram, ctx);
        goto after_0;
    // 0x802265E0: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    after_0:
    // 0x802265E4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x802265E8: jal         0x80036340
    // 0x802265EC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_80036340_11740(rdram, ctx);
        goto after_1;
    // 0x802265EC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_1:
    // 0x802265F0: jal         0x8021D9D0
    // 0x802265F4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_8021D9D0(rdram, ctx);
        goto after_2;
    // 0x802265F4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_2:
L_802265F8:
    // 0x802265F8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802265FC: jr          $ra
    // 0x80226600: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226600: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80248388_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80248388: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8024838C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80248390: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80248394: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80248398: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8024839C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802483A0: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x802483A4: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x802483A8: sltiu       $v0, $v1, 0x16
    ctx->r2 = ctx->r3 < 0X16 ? 1 : 0;
    // 0x802483AC: beq         $v0, $zero, L_80248628
    if (ctx->r2 == 0) {
        // 0x802483B0: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80248628;
    }
    // 0x802483B0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802483B4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802483B8: addu        $at, $at, $v0
    gpr jr_addend_802483C0 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802483BC: lw          $v0, 0x3178($at)
    ctx->r2 = ADD32(ctx->r1, 0X3178);
    // 0x802483C0: jr          $v0
    // 0x802483C4: nop

    switch (jr_addend_802483C0 >> 2) {
        case 0: goto L_802483C8; break;
        case 1: goto L_802483D8; break;
        case 2: goto L_80248400; break;
        case 3: goto L_80248428; break;
        case 4: goto L_80248470; break;
        case 5: goto L_80248480; break;
        case 6: goto L_80248498; break;
        case 7: goto L_802484C0; break;
        case 8: goto L_802484F4; break;
        case 9: goto L_80248560; break;
        case 10: goto L_80248574; break;
        case 11: goto L_802485AC; break;
        case 12: goto L_80248628; break;
        case 13: goto L_80248628; break;
        case 14: goto L_80248628; break;
        case 15: goto L_80248628; break;
        case 16: goto L_80248628; break;
        case 17: goto L_80248628; break;
        case 18: goto L_80248628; break;
        case 19: goto L_80248628; break;
        case 20: goto L_802485D8; break;
        case 21: goto L_80248600; break;
        default: switch_error(__func__, 0x802483C0, 0x80253178);
    }
    // 0x802483C4: nop

L_802483C8:
    // 0x802483C8: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x802483CC: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x802483D0: j           L_802485F0
    // 0x802483D4: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
        goto L_802485F0;
    // 0x802483D4: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
L_802483D8:
    // 0x802483D8: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x802483DC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802483E0: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x802483E4: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x802483E8: lw          $a1, 0x27EC($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X27EC);
    // 0x802483EC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802483F0: jal         0x80061510
    // 0x802483F4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_80061510_3C910(rdram, ctx);
        goto after_0;
    // 0x802483F4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_0:
    // 0x802483F8: j           L_802485F0
    // 0x802483FC: nop

        goto L_802485F0;
    // 0x802483FC: nop

L_80248400:
    // 0x80248400: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80248404: lw          $v1, 0x3FF0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3FF0);
    // 0x80248408: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x8024840C: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x80248410: bne         $v0, $zero, L_80248628
    if (ctx->r2 != 0) {
        // 0x80248414: andi        $v0, $v1, 0xFF
        ctx->r2 = ctx->r3 & 0XFF;
            goto L_80248628;
    }
    // 0x80248414: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x80248418: beq         $v0, $zero, L_802485F0
    if (ctx->r2 == 0) {
        // 0x8024841C: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_802485F0;
    }
    // 0x8024841C: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x80248420: j           L_802485D0
    // 0x80248424: nop

        goto L_802485D0;
    // 0x80248424: nop

L_80248428:
    // 0x80248428: jal         0x80070E80
    // 0x8024842C: addiu       $a0, $zero, -0xA
    ctx->r4 = ADD32(0, -0XA);
    func_80070E80_4C280(rdram, ctx);
        goto after_1;
    // 0x8024842C: addiu       $a0, $zero, -0xA
    ctx->r4 = ADD32(0, -0XA);
    after_1:
    // 0x80248430: bgez        $v0, L_80248454
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80248434: addiu       $a0, $zero, -0xA
        ctx->r4 = ADD32(0, -0XA);
            goto L_80248454;
    }
    // 0x80248434: addiu       $a0, $zero, -0xA
    ctx->r4 = ADD32(0, -0XA);
    // 0x80248438: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8024843C: lw          $a1, 0x2B28($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2B28);
    // 0x80248440: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80248444: jal         0x80061510
    // 0x80248448: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_80061510_3C910(rdram, ctx);
        goto after_2;
    // 0x80248448: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_2:
    // 0x8024844C: j           L_802485D0
    // 0x80248450: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
        goto L_802485D0;
    // 0x80248450: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
L_80248454:
    // 0x80248454: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80248458: jal         0x80070E98
    // 0x8024845C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80070E98_4C298(rdram, ctx);
        goto after_3;
    // 0x8024845C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x80248460: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80248464: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    // 0x80248468: j           L_802485F4
    // 0x8024846C: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
        goto L_802485F4;
    // 0x8024846C: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
L_80248470:
    // 0x80248470: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x80248474: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x80248478: j           L_802485F0
    // 0x8024847C: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
        goto L_802485F0;
    // 0x8024847C: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
L_80248480:
    // 0x80248480: lb          $v0, 0xA7($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XA7);
    // 0x80248484: bgez        $v0, L_80248628
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80248488: addiu       $v1, $zero, 0x10
        ctx->r3 = ADD32(0, 0X10);
            goto L_80248628;
    }
    // 0x80248488: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    // 0x8024848C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80248490: j           L_802485F4
    // 0x80248494: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
        goto L_802485F4;
    // 0x80248494: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
L_80248498:
    // 0x80248498: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x8024849C: bne         $v0, $zero, L_802484CC
    if (ctx->r2 != 0) {
        // 0x802484A0: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_802484CC;
    }
    // 0x802484A0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802484A4: addiu       $a0, $zero, 0x13E
    ctx->r4 = ADD32(0, 0X13E);
    // 0x802484A8: jal         0x8002A33C
    // 0x802484AC: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    func_8002A33C_573C(rdram, ctx);
        goto after_4;
    // 0x802484AC: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    after_4:
    // 0x802484B0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802484B4: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    // 0x802484B8: j           L_802485F4
    // 0x802484BC: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
        goto L_802485F4;
    // 0x802484BC: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
L_802484C0:
    // 0x802484C0: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x802484C4: beq         $v0, $zero, L_802484D8
    if (ctx->r2 == 0) {
        // 0x802484C8: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_802484D8;
    }
    // 0x802484C8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
L_802484CC:
    // 0x802484CC: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x802484D0: j           L_80248628
    // 0x802484D4: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
        goto L_80248628;
    // 0x802484D4: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
L_802484D8:
    // 0x802484D8: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x802484DC: lw          $a1, 0x2B20($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2B20);
    // 0x802484E0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802484E4: jal         0x80061510
    // 0x802484E8: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_80061510_3C910(rdram, ctx);
        goto after_5;
    // 0x802484E8: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_5:
    // 0x802484EC: j           L_802485F0
    // 0x802484F0: nop

        goto L_802485F0;
    // 0x802484F0: nop

L_802484F4:
    // 0x802484F4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802484F8: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x802484FC: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80248500: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80248504: bne         $v0, $zero, L_80248628
    if (ctx->r2 != 0) {
        // 0x80248508: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80248628;
    }
    // 0x80248508: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8024850C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80248510: lw          $a1, 0x2B24($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2B24);
    // 0x80248514: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x80248518: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x8024851C: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x80248520: jal         0x80061510
    // 0x80248524: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    func_80061510_3C910(rdram, ctx);
        goto after_6;
    // 0x80248524: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    after_6:
    // 0x80248528: addiu       $a0, $zero, 0x13F
    ctx->r4 = ADD32(0, 0X13F);
    // 0x8024852C: jal         0x8002A33C
    // 0x80248530: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    func_8002A33C_573C(rdram, ctx);
        goto after_7;
    // 0x80248530: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    after_7:
    // 0x80248534: lh          $a0, 0xB0($s1)
    ctx->r4 = MEM_H(ctx->r17, 0XB0);
    // 0x80248538: jal         0x80070F38
    // 0x8024853C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_80070F38_4C338(rdram, ctx);
        goto after_8;
    // 0x8024853C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_8:
    // 0x80248540: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x80248544: lbu         $a0, 0xD($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XD);
    // 0x80248548: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8024854C: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80248550: jal         0x80248CD4
    // 0x80248554: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    func_80248CD4_ovl10(rdram, ctx);
        goto after_9;
    // 0x80248554: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    after_9:
    // 0x80248558: j           L_802485F0
    // 0x8024855C: nop

        goto L_802485F0;
    // 0x8024855C: nop

L_80248560:
    // 0x80248560: lb          $v0, 0xA7($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XA7);
    // 0x80248564: bltz        $v0, L_802485F0
    if (SIGNED(ctx->r2) < 0) {
        // 0x80248568: nop
    
            goto L_802485F0;
    }
    // 0x80248568: nop

    // 0x8024856C: j           L_80248628
    // 0x80248570: nop

        goto L_80248628;
    // 0x80248570: nop

L_80248574:
    // 0x80248574: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80248578: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8024857C: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80248580: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80248584: bne         $v0, $zero, L_80248628
    if (ctx->r2 != 0) {
        // 0x80248588: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80248628;
    }
    // 0x80248588: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8024858C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80248590: lw          $a1, 0x2B5C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2B5C);
    // 0x80248594: jal         0x80061510
    // 0x80248598: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_80061510_3C910(rdram, ctx);
        goto after_10;
    // 0x80248598: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_10:
    // 0x8024859C: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
    // 0x802485A0: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x802485A4: j           L_802485F0
    // 0x802485A8: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
        goto L_802485F0;
    // 0x802485A8: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
L_802485AC:
    // 0x802485AC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802485B0: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x802485B4: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x802485B8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802485BC: bne         $v0, $zero, L_80248628
    if (ctx->r2 != 0) {
        // 0x802485C0: nop
    
            goto L_80248628;
    }
    // 0x802485C0: nop

    // 0x802485C4: lb          $v0, 0xA7($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XA7);
    // 0x802485C8: bgez        $v0, L_80248628
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802485CC: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_80248628;
    }
    // 0x802485CC: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
L_802485D0:
    // 0x802485D0: j           L_80248628
    // 0x802485D4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_80248628;
    // 0x802485D4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802485D8:
    // 0x802485D8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802485DC: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x802485E0: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x802485E4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802485E8: bne         $v0, $zero, L_80248628
    if (ctx->r2 != 0) {
        // 0x802485EC: nop
    
            goto L_80248628;
    }
    // 0x802485EC: nop

L_802485F0:
    // 0x802485F0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
L_802485F4:
    // 0x802485F4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802485F8: j           L_80248628
    // 0x802485FC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_80248628;
    // 0x802485FC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80248600:
    // 0x80248600: jal         0x8003516C
    // 0x80248604: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_11;
    // 0x80248604: nop

    after_11:
    // 0x80248608: bne         $v0, $zero, L_80248628
    if (ctx->r2 != 0) {
        // 0x8024860C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80248628;
    }
    // 0x8024860C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80248610: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
    // 0x80248614: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    // 0x80248618: sw          $zero, 0x184($s1)
    MEM_W(0X184, ctx->r17) = 0;
    // 0x8024861C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80248620: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80248624: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_80248628:
    // 0x80248628: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x8024862C: addiu       $v0, $v0, -0xB
    ctx->r2 = ADD32(ctx->r2, -0XB);
    // 0x80248630: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x80248634: beq         $v0, $zero, L_80248658
    if (ctx->r2 == 0) {
        // 0x80248638: nop
    
            goto L_80248658;
    }
    // 0x80248638: nop

    // 0x8024863C: jal         0x80061724
    // 0x80248640: nop

    func_80061724_3CB24(rdram, ctx);
        goto after_12;
    // 0x80248640: nop

    after_12:
    // 0x80248644: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80248648: sw          $zero, 0x184($s1)
    MEM_W(0X184, ctx->r17) = 0;
    // 0x8024864C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80248650: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80248654: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_80248658:
    // 0x80248658: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8024865C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80248660: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80248664: jr          $ra
    // 0x80248668: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80248668: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80232344_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232344: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80232348: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023234C: lbu         $v0, 0x34B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34B);
    // 0x80232350: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80232354: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80232358: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023235C: lw          $v0, 0x1130($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1130);
    // 0x80232360: jalr        $v0
    // 0x80232364: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80232364: nop

    after_0:
    // 0x80232368: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023236C: jr          $ra
    // 0x80232370: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80232370: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80239680_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239680: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80239684: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80239688: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8023968C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80239690: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80239694: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80239698: lw          $v0, 0x1690($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1690);
    // 0x8023969C: jalr        $v0
    // 0x802396A0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802396A0: nop

    after_0:
    // 0x802396A4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802396A8: jr          $ra
    // 0x802396AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802396AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80231880_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231880: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80231884: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231888: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023188C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80231890: lui         $s1, 0x8025
    ctx->r17 = S32(0X8025 << 16);
    // 0x80231894: addiu       $s1, $s1, 0x1094
    ctx->r17 = ADD32(ctx->r17, 0X1094);
    // 0x80231898: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8023189C: jal         0x800A3450
    // 0x802318A0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x802318A0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    after_0:
    // 0x802318A4: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x802318A8: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x802318AC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802318B0: lbu         $v1, 0x1084($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X1084);
    // 0x802318B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802318B8: beq         $v1, $v0, L_80231958
    if (ctx->r3 == ctx->r2) {
        // 0x802318BC: addiu       $s2, $s0, 0x348
        ctx->r18 = ADD32(ctx->r16, 0X348);
            goto L_80231958;
    }
    // 0x802318BC: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x802318C0: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x802318C4: beql        $v0, $zero, L_802318DC
    if (ctx->r2 == 0) {
        // 0x802318C8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802318DC;
    }
    goto skip_0;
    // 0x802318C8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x802318CC: beq         $v1, $zero, L_802318EC
    if (ctx->r3 == 0) {
        // 0x802318D0: nop
    
            goto L_802318EC;
    }
    // 0x802318D0: nop

    // 0x802318D4: j           L_802319A4
    // 0x802318D8: nop

        goto L_802319A4;
    // 0x802318D8: nop

L_802318DC:
    // 0x802318DC: beq         $v1, $v0, L_80231978
    if (ctx->r3 == ctx->r2) {
        // 0x802318E0: nop
    
            goto L_80231978;
    }
    // 0x802318E0: nop

    // 0x802318E4: j           L_802319A4
    // 0x802318E8: nop

        goto L_802319A4;
    // 0x802318E8: nop

L_802318EC:
    // 0x802318EC: lh          $v0, 0x35E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X35E);
    // 0x802318F0: bne         $v0, $zero, L_80231904
    if (ctx->r2 != 0) {
        // 0x802318F4: nop
    
            goto L_80231904;
    }
    // 0x802318F4: nop

    // 0x802318F8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802318FC: j           L_8023190C
    // 0x80231900: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8023190C;
    // 0x80231900: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80231904:
    // 0x80231904: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80231908: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
L_8023190C:
    // 0x8023190C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80231910: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80231914: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x80231918: beq         $v0, $zero, L_80231934
    if (ctx->r2 == 0) {
        // 0x8023191C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80231934;
    }
    // 0x8023191C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80231920: jal         0x802332E8
    // 0x80231924: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_802332E8_ovl10(rdram, ctx);
        goto after_1;
    // 0x80231924: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x80231928: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8023192C: j           L_80231948
    // 0x80231930: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80231948;
    // 0x80231930: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80231934:
    // 0x80231934: jal         0x802332E8
    // 0x80231938: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_802332E8_ovl10(rdram, ctx);
        goto after_2;
    // 0x80231938: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x8023193C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80231940: jal         0x802332A8
    // 0x80231944: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    func_802332A8_ovl10(rdram, ctx);
        goto after_3;
    // 0x80231944: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    after_3:
L_80231948:
    // 0x80231948: lui         $s1, 0x8025
    ctx->r17 = S32(0X8025 << 16);
    // 0x8023194C: addiu       $s1, $s1, 0x1094
    ctx->r17 = ADD32(ctx->r17, 0X1094);
    // 0x80231950: j           L_802319A4
    // 0x80231954: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_802319A4;
    // 0x80231954: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80231958:
    // 0x80231958: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8023195C: jal         0x80233298
    // 0x80231960: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    func_80233298_ovl10(rdram, ctx);
        goto after_4;
    // 0x80231960: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    after_4:
    // 0x80231964: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80231968: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8023196C: addiu       $v1, $v1, 0x3
    ctx->r3 = ADD32(ctx->r3, 0X3);
    // 0x80231970: j           L_802319A4
    // 0x80231974: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
        goto L_802319A4;
    // 0x80231974: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_80231978:
    // 0x80231978: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8023197C: jal         0x802332A8
    // 0x80231980: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
    func_802332A8_ovl10(rdram, ctx);
        goto after_5;
    // 0x80231980: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
    after_5:
    // 0x80231984: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80231988: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8023198C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80231990: addiu       $v1, $v1, 0x800
    ctx->r3 = ADD32(ctx->r3, 0X800);
    // 0x80231994: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80231998: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8023199C: sh          $v1, 0x364($s0)
    MEM_H(0X364, ctx->r16) = ctx->r3;
    // 0x802319A0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802319A4:
    // 0x802319A4: jal         0x800A3450
    // 0x802319A8: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_6;
    // 0x802319A8: nop

    after_6:
    // 0x802319AC: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x802319B0: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x802319B4: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x802319B8: sh          $v0, 0x8($s2)
    MEM_H(0X8, ctx->r18) = ctx->r2;
    // 0x802319BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802319C0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802319C4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802319C8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802319CC: jr          $ra
    // 0x802319D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802319D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80226848_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226848: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022684C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80226850: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80226854: lw          $a1, 0x24($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X24);
    // 0x80226858: lw          $v1, 0x2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X2C);
    // 0x8022685C: bne         $v0, $zero, L_80226880
    if (ctx->r2 != 0) {
        // 0x80226860: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_80226880;
    }
    // 0x80226860: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80226864: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80226868: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8022686C: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80226870: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226874: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x80226878: jal         0x80226F30
    // 0x8022687C: sh          $zero, 0xA($a1)
    MEM_H(0XA, ctx->r5) = 0;
    func_80226F30_ovl10(rdram, ctx);
        goto after_0;
    // 0x8022687C: sh          $zero, 0xA($a1)
    MEM_H(0XA, ctx->r5) = 0;
    after_0:
L_80226880:
    // 0x80226880: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80226884: jr          $ra
    // 0x80226888: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226888: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80244CD0_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80244CD0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80244CD4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80244CD8: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x80244CDC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80244CE0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80244CE4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80244CE8: lw          $v0, 0x20B0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X20B0);
    // 0x80244CEC: jalr        $v0
    // 0x80244CF0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80244CF0: nop

    after_0:
    // 0x80244CF4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80244CF8: jr          $ra
    // 0x80244CFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80244CFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80247C78_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80247C78: jr          $ra
    // 0x80247C7C: nop

    TRACE_RETURN()
    return;
    // 0x80247C7C: nop

;}
RECOMP_FUNC void func_80226604_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226604: lw          $a3, 0x34($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X34);
    // 0x80226608: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x8022660C: lw          $a1, 0x38($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X38);
    // 0x80226610: lw          $a2, 0x3C($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X3C);
    // 0x80226614: bne         $v0, $zero, L_80226668
    if (ctx->r2 != 0) {
        // 0x80226618: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80226668;
    }
    // 0x80226618: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022661C: sh          $zero, 0xA($a3)
    MEM_H(0XA, ctx->r7) = 0;
    // 0x80226620: sh          $zero, 0xA($a1)
    MEM_H(0XA, ctx->r5) = 0;
    // 0x80226624: sh          $zero, 0xA($a2)
    MEM_H(0XA, ctx->r6) = 0;
    // 0x80226628: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022662C: sb          $v0, 0x333A($at)
    MEM_B(0X333A, ctx->r1) = ctx->r2;
    // 0x80226630: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80226634: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80226638: sb          $v0, 0x3346($at)
    MEM_B(0X3346, ctx->r1) = ctx->r2;
    // 0x8022663C: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80226640: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80226644: sb          $zero, 0x3344($at)
    MEM_B(0X3344, ctx->r1) = 0;
    // 0x80226648: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022664C: sb          $zero, 0x3345($at)
    MEM_B(0X3345, ctx->r1) = 0;
    // 0x80226650: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80226654: sb          $v0, 0x3354($at)
    MEM_B(0X3354, ctx->r1) = ctx->r2;
    // 0x80226658: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022665C: sb          $v0, 0x3355($at)
    MEM_B(0X3355, ctx->r1) = ctx->r2;
    // 0x80226660: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80226664: sb          $v0, 0x3356($at)
    MEM_B(0X3356, ctx->r1) = ctx->r2;
L_80226668:
    // 0x80226668: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x8022666C: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x80226670: bne         $v1, $v0, L_80226688
    if (ctx->r3 != ctx->r2) {
        // 0x80226674: addiu       $v0, $zero, 0x6C
        ctx->r2 = ADD32(0, 0X6C);
            goto L_80226688;
    }
    // 0x80226674: addiu       $v0, $zero, 0x6C
    ctx->r2 = ADD32(0, 0X6C);
    // 0x80226678: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x8022667C: sh          $v0, 0xA($a1)
    MEM_H(0XA, ctx->r5) = ctx->r2;
    // 0x80226680: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80226684: addiu       $v0, $zero, 0x6C
    ctx->r2 = ADD32(0, 0X6C);
L_80226688:
    // 0x80226688: bne         $v1, $v0, L_80226698
    if (ctx->r3 != ctx->r2) {
        // 0x8022668C: addiu       $v0, $zero, 0x100
        ctx->r2 = ADD32(0, 0X100);
            goto L_80226698;
    }
    // 0x8022668C: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x80226690: sh          $v0, 0xA($a3)
    MEM_H(0XA, ctx->r7) = ctx->r2;
    // 0x80226694: sh          $v0, 0xA($a2)
    MEM_H(0XA, ctx->r6) = ctx->r2;
L_80226698:
    // 0x80226698: jr          $ra
    // 0x8022669C: nop

    TRACE_RETURN()
    return;
    // 0x8022669C: nop

;}
RECOMP_FUNC void func_80244BD4_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80244BD4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80244BD8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80244BDC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80244BE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80244BE4: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80244BE8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80244BEC: beq         $v1, $v0, L_80244C24
    if (ctx->r3 == ctx->r2) {
        // 0x80244BF0: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80244C24;
    }
    // 0x80244BF0: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80244BF4: beq         $v0, $zero, L_80244C70
    if (ctx->r2 == 0) {
        // 0x80244BF8: nop
    
            goto L_80244C70;
    }
    // 0x80244BF8: nop

    // 0x80244BFC: bne         $v1, $zero, L_80244C70
    if (ctx->r3 != 0) {
        // 0x80244C00: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80244C70;
    }
    // 0x80244C00: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80244C04: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80244C08: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80244C0C: addiu       $v0, $zero, -0x32
    ctx->r2 = ADD32(0, -0X32);
    // 0x80244C10: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x80244C14: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80244C18: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
    // 0x80244C1C: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80244C20: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
L_80244C24:
    // 0x80244C24: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x80244C28: lhu         $a0, 0x46($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X46);
    // 0x80244C2C: lhu         $v1, 0x46($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X46);
    // 0x80244C30: lhu         $a1, 0x4E($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X4E);
    // 0x80244C34: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80244C38: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80244C3C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80244C40: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x80244C44: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80244C48: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80244C4C: jal         0x80040F30
    // 0x80244C50: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
    func_80040F30_1C330(rdram, ctx);
        goto after_0;
    // 0x80244C50: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
    after_0:
    // 0x80244C54: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x80244C58: beq         $v0, $zero, L_80244C70
    if (ctx->r2 == 0) {
        // 0x80244C5C: addiu       $v1, $zero, 0x2
        ctx->r3 = ADD32(0, 0X2);
            goto L_80244C70;
    }
    // 0x80244C5C: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80244C60: lhu         $v0, 0xC0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XC0);
    // 0x80244C64: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x80244C68: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80244C6C: sh          $v0, 0xC0($s0)
    MEM_H(0XC0, ctx->r16) = ctx->r2;
L_80244C70:
    // 0x80244C70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80244C74: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80244C78: jr          $ra
    // 0x80244C7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80244C7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023A590_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A590: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8023A594: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8023A598: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023A59C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8023A5A0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8023A5A4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8023A5A8: lbu         $v1, 0xE($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XE);
    // 0x8023A5AC: lb          $a0, 0xD($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XD);
    // 0x8023A5B0: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8023A5B4: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x8023A5B8: lui         $s1, 0x8025
    ctx->r17 = S32(0X8025 << 16);
    // 0x8023A5BC: addiu       $s1, $s1, 0x173C
    ctx->r17 = ADD32(ctx->r17, 0X173C);
    // 0x8023A5C0: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8023A5C4: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x8023A5C8: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
    // 0x8023A5CC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8023A5D0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023A5D4: lw          $v0, 0x173C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X173C);
    // 0x8023A5D8: sll         $v1, $v1, 24
    ctx->r3 = S32(ctx->r3 << 24);
    // 0x8023A5DC: sra         $v1, $v1, 24
    ctx->r3 = S32(SIGNED(ctx->r3) >> 24);
    // 0x8023A5E0: bne         $v1, $v0, L_8023A6F4
    if (ctx->r3 != ctx->r2) {
        // 0x8023A5E4: lui         $v0, 0xFF
        ctx->r2 = S32(0XFF << 16);
            goto L_8023A6F4;
    }
    // 0x8023A5E4: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x8023A5E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023A5EC: beq         $a0, $v0, L_8023A678
    if (ctx->r4 == ctx->r2) {
        // 0x8023A5F0: slti        $v0, $a0, 0x2
        ctx->r2 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
            goto L_8023A678;
    }
    // 0x8023A5F0: slti        $v0, $a0, 0x2
    ctx->r2 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    // 0x8023A5F4: beql        $v0, $zero, L_8023A60C
    if (ctx->r2 == 0) {
        // 0x8023A5F8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023A60C;
    }
    goto skip_0;
    // 0x8023A5F8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8023A5FC: beq         $a0, $zero, L_8023A624
    if (ctx->r4 == 0) {
        // 0x8023A600: nop
    
            goto L_8023A624;
    }
    // 0x8023A600: nop

    // 0x8023A604: j           L_8023A720
    // 0x8023A608: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
        goto L_8023A720;
    // 0x8023A608: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
L_8023A60C:
    // 0x8023A60C: beq         $a0, $v0, L_8023A690
    if (ctx->r4 == ctx->r2) {
        // 0x8023A610: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8023A690;
    }
    // 0x8023A610: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023A614: beql        $a0, $v0, L_8023A6CC
    if (ctx->r4 == ctx->r2) {
        // 0x8023A618: sb          $zero, 0xD($s0)
        MEM_B(0XD, ctx->r16) = 0;
            goto L_8023A6CC;
    }
    goto skip_1;
    // 0x8023A618: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    skip_1:
    // 0x8023A61C: j           L_8023A720
    // 0x8023A620: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
        goto L_8023A720;
    // 0x8023A620: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
L_8023A624:
    // 0x8023A624: jal         0x800A3450
    // 0x8023A628: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8023A628: nop

    after_0:
    // 0x8023A62C: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8023A630: bne         $v0, $zero, L_8023A64C
    if (ctx->r2 != 0) {
        // 0x8023A634: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023A64C;
    }
    // 0x8023A634: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023A638: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x8023A63C: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x8023A640: lw          $a1, 0x1740($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1740);
    // 0x8023A644: j           L_8023A6BC
    // 0x8023A648: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_8023A6BC;
    // 0x8023A648: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8023A64C:
    // 0x8023A64C: jal         0x800A3450
    // 0x8023A650: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x8023A650: nop

    after_1:
    // 0x8023A654: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8023A658: bne         $v0, $zero, L_8023A6E4
    if (ctx->r2 != 0) {
        // 0x8023A65C: addiu       $a0, $zero, 0x16F
        ctx->r4 = ADD32(0, 0X16F);
            goto L_8023A6E4;
    }
    // 0x8023A65C: addiu       $a0, $zero, 0x16F
    ctx->r4 = ADD32(0, 0X16F);
    // 0x8023A660: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8023A664: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x8023A668: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x8023A66C: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x8023A670: j           L_8023A6AC
    // 0x8023A674: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
        goto L_8023A6AC;
    // 0x8023A674: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
L_8023A678:
    // 0x8023A678: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023A67C: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x8023A680: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x8023A684: lw          $a1, 0x1748($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1748);
    // 0x8023A688: j           L_8023A6BC
    // 0x8023A68C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_8023A6BC;
    // 0x8023A68C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8023A690:
    // 0x8023A690: jal         0x800A3450
    // 0x8023A694: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x8023A694: nop

    after_2:
    // 0x8023A698: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8023A69C: bne         $v0, $zero, L_8023A6A8
    if (ctx->r2 != 0) {
        // 0x8023A6A0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8023A6A8;
    }
    // 0x8023A6A0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023A6A4: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
L_8023A6A8:
    // 0x8023A6A8: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
L_8023A6AC:
    // 0x8023A6AC: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8023A6B0: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x8023A6B4: lw          $a1, -0x4($v0)
    ctx->r5 = MEM_W(ctx->r2, -0X4);
    // 0x8023A6B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8023A6BC:
    // 0x8023A6BC: jal         0x80050294
    // 0x8023A6C0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x8023A6C0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x8023A6C4: j           L_8023A720
    // 0x8023A6C8: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
        goto L_8023A720;
    // 0x8023A6C8: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
L_8023A6CC:
    // 0x8023A6CC: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x8023A6D0: lw          $a1, 0x1738($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1738);
    // 0x8023A6D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023A6D8: jal         0x80050294
    // 0x8023A6DC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_4;
    // 0x8023A6DC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x8023A6E0: addiu       $a0, $zero, 0x16F
    ctx->r4 = ADD32(0, 0X16F);
L_8023A6E4:
    // 0x8023A6E4: jal         0x8002A33C
    // 0x8023A6E8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_5;
    // 0x8023A6E8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_5:
    // 0x8023A6EC: j           L_8023A720
    // 0x8023A6F0: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
        goto L_8023A720;
    // 0x8023A6F0: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
L_8023A6F4:
    // 0x8023A6F4: ori         $v0, $v0, 0xFF00
    ctx->r2 = ctx->r2 | 0XFF00;
    // 0x8023A6F8: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x8023A6FC: lui         $a0, 0x2
    ctx->r4 = S32(0X2 << 16);
    // 0x8023A700: ori         $a0, $a0, 0x800
    ctx->r4 = ctx->r4 | 0X800;
    // 0x8023A704: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8023A708: bne         $v1, $a0, L_8023A718
    if (ctx->r3 != ctx->r4) {
        // 0x8023A70C: addiu       $a0, $zero, 0x171
        ctx->r4 = ADD32(0, 0X171);
            goto L_8023A718;
    }
    // 0x8023A70C: addiu       $a0, $zero, 0x171
    ctx->r4 = ADD32(0, 0X171);
    // 0x8023A710: jal         0x8002A33C
    // 0x8023A714: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_6;
    // 0x8023A714: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_6:
L_8023A718:
    // 0x8023A718: jal         0x8005044C
    // 0x8023A71C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_7;
    // 0x8023A71C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
L_8023A720:
    // 0x8023A720: lw          $v0, 0x184($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X184);
    // 0x8023A724: bne         $v0, $s0, L_8023A784
    if (ctx->r2 != ctx->r16) {
        // 0x8023A728: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023A784;
    }
    // 0x8023A728: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023A72C: sw          $zero, 0x184($s2)
    MEM_W(0X184, ctx->r18) = 0;
    // 0x8023A730: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x8023A734: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x8023A738: lw          $a1, 0x1738($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1738);
    // 0x8023A73C: jal         0x80050294
    // 0x8023A740: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_8;
    // 0x8023A740: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_8:
    // 0x8023A744: jal         0x8006033C
    // 0x8023A748: addiu       $a0, $zero, 0x640
    ctx->r4 = ADD32(0, 0X640);
    func_8006033C_3B73C(rdram, ctx);
        goto after_9;
    // 0x8023A748: addiu       $a0, $zero, 0x640
    ctx->r4 = ADD32(0, 0X640);
    after_9:
    // 0x8023A74C: beq         $v0, $zero, L_8023A760
    if (ctx->r2 == 0) {
        // 0x8023A750: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8023A760;
    }
    // 0x8023A750: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8023A754: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8023A758: j           L_8023A774
    // 0x8023A75C: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
        goto L_8023A774;
    // 0x8023A75C: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
L_8023A760:
    // 0x8023A760: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023A764: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8023A768: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x8023A76C: xori        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 ^ 0X2;
    // 0x8023A770: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
L_8023A774:
    // 0x8023A774: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8023A778: lbu         $v0, 0xBD($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XBD);
    // 0x8023A77C: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x8023A780: sb          $v0, 0xBD($s2)
    MEM_B(0XBD, ctx->r18) = ctx->r2;
L_8023A784:
    // 0x8023A784: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8023A788: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8023A78C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8023A790: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023A794: jr          $ra
    // 0x8023A798: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8023A798: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80238C08_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238C08: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80238C0C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80238C10: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80238C14: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80238C18: addiu       $s0, $sp, 0x10
    ctx->r16 = ADD32(ctx->r29, 0X10);
    // 0x80238C1C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238C20: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80238C24: addiu       $a1, $a1, 0x2F88
    ctx->r5 = ADD32(ctx->r5, 0X2F88);
    // 0x80238C28: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x80238C2C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80238C30: jal         0x8009A3B4
    // 0x80238C34: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80238C34: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    after_0:
    // 0x80238C38: lbu         $v1, 0x3($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X3);
    // 0x80238C3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80238C40: bne         $v1, $v0, L_80238CB0
    if (ctx->r3 != ctx->r2) {
        // 0x80238C44: addiu       $s2, $s1, 0x308
        ctx->r18 = ADD32(ctx->r17, 0X308);
            goto L_80238CB0;
    }
    // 0x80238C44: addiu       $s2, $s1, 0x308
    ctx->r18 = ADD32(ctx->r17, 0X308);
    // 0x80238C48: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80238C4C: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x80238C50: jal         0x8004EC38
    // 0x80238C54: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    func_8004EC38_2A038(rdram, ctx);
        goto after_1;
    // 0x80238C54: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    after_1:
    // 0x80238C58: addiu       $v0, $v0, 0x200
    ctx->r2 = ADD32(ctx->r2, 0X200);
    // 0x80238C5C: lw          $v1, 0x340($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X340);
    // 0x80238C60: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80238C64: srl         $a0, $v0, 10
    ctx->r4 = S32(U32(ctx->r2) >> 10);
    // 0x80238C68: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80238C6C: lb          $v1, 0xC($v1)
    ctx->r3 = MEM_B(ctx->r3, 0XC);
    // 0x80238C70: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80238C74: beql        $v1, $v0, L_80238CB4
    if (ctx->r3 == ctx->r2) {
        // 0x80238C78: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_80238CB4;
    }
    goto skip_0;
    // 0x80238C78: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_0:
    // 0x80238C7C: lb          $v0, 0x351($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X351);
    // 0x80238C80: beq         $v0, $v1, L_80238CB0
    if (ctx->r2 == ctx->r3) {
        // 0x80238C84: ori         $v0, $zero, 0x8000
        ctx->r2 = 0 | 0X8000;
            goto L_80238CB0;
    }
    // 0x80238C84: ori         $v0, $zero, 0x8000
    ctx->r2 = 0 | 0X8000;
    // 0x80238C88: lhu         $v1, 0x358($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X358);
    // 0x80238C8C: srav        $v0, $v0, $a0
    ctx->r2 = S32(SIGNED(ctx->r2) >> (ctx->r4 & 31));
    // 0x80238C90: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80238C94: bnel        $v1, $zero, L_80238CB4
    if (ctx->r3 != 0) {
        // 0x80238C98: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_80238CB4;
    }
    goto skip_1;
    // 0x80238C98: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_1:
    // 0x80238C9C: addu        $v1, $s0, $a0
    ctx->r3 = ADD32(ctx->r16, ctx->r4);
    // 0x80238CA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80238CA4: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80238CA8: j           L_80238D80
    // 0x80238CAC: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
        goto L_80238D80;
    // 0x80238CAC: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_80238CB0:
    // 0x80238CB0: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_80238CB4:
    // 0x80238CB4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80238CB8: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x80238CBC: ori         $t0, $zero, 0x8000
    ctx->r8 = 0 | 0X8000;
    // 0x80238CC0: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    // 0x80238CC4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
L_80238CC8:
    // 0x80238CC8: lw          $v1, 0x38($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X38);
    // 0x80238CCC: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
    // 0x80238CD0: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80238CD4: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80238CD8: lb          $v1, 0xC($v1)
    ctx->r3 = MEM_B(ctx->r3, 0XC);
    // 0x80238CDC: beq         $v1, $t1, L_80238D10
    if (ctx->r3 == ctx->r9) {
        // 0x80238CE0: addiu       $v0, $a1, 0x1
        ctx->r2 = ADD32(ctx->r5, 0X1);
            goto L_80238D10;
    }
    // 0x80238CE0: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    // 0x80238CE4: lb          $v0, 0x49($s2)
    ctx->r2 = MEM_B(ctx->r18, 0X49);
    // 0x80238CE8: beq         $v0, $v1, L_80238D0C
    if (ctx->r2 == ctx->r3) {
        // 0x80238CEC: srav        $v1, $t0, $a0
        ctx->r3 = S32(SIGNED(ctx->r8) >> (ctx->r4 & 31));
            goto L_80238D0C;
    }
    // 0x80238CEC: srav        $v1, $t0, $a0
    ctx->r3 = S32(SIGNED(ctx->r8) >> (ctx->r4 & 31));
    // 0x80238CF0: lhu         $v0, 0x50($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X50);
    // 0x80238CF4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80238CF8: bne         $v0, $zero, L_80238D10
    if (ctx->r2 != 0) {
        // 0x80238CFC: addiu       $v0, $a1, 0x1
        ctx->r2 = ADD32(ctx->r5, 0X1);
            goto L_80238D10;
    }
    // 0x80238CFC: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    // 0x80238D00: addu        $v0, $a2, $a0
    ctx->r2 = ADD32(ctx->r6, ctx->r4);
    // 0x80238D04: sb          $a3, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r7;
    // 0x80238D08: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_80238D0C:
    // 0x80238D0C: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
L_80238D10:
    // 0x80238D10: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x80238D14: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80238D18: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80238D1C: slti        $v0, $v0, 0x4
    ctx->r2 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x80238D20: bne         $v0, $zero, L_80238CC8
    if (ctx->r2 != 0) {
        // 0x80238D24: nop
    
            goto L_80238CC8;
    }
    // 0x80238D24: nop

    // 0x80238D28: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x80238D2C: bne         $v0, $zero, L_80238D84
    if (ctx->r2 != 0) {
        // 0x80238D30: sll         $v0, $s0, 16
        ctx->r2 = S32(ctx->r16 << 16);
            goto L_80238D84;
    }
    // 0x80238D30: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
    // 0x80238D34: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80238D38: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x80238D3C: jal         0x8004EC38
    // 0x80238D40: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    func_8004EC38_2A038(rdram, ctx);
        goto after_2;
    // 0x80238D40: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    after_2:
    // 0x80238D44: addiu       $v0, $v0, 0x200
    ctx->r2 = ADD32(ctx->r2, 0X200);
    // 0x80238D48: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80238D4C: srl         $v0, $v0, 10
    ctx->r2 = S32(U32(ctx->r2) >> 10);
    // 0x80238D50: addiu       $v1, $sp, 0x10
    ctx->r3 = ADD32(ctx->r29, 0X10);
    // 0x80238D54: addu        $a1, $v1, $v0
    ctx->r5 = ADD32(ctx->r3, ctx->r2);
    // 0x80238D58: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x80238D5C: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
    // 0x80238D60: lui         $a0, 0x1
    ctx->r4 = S32(0X1 << 16);
    // 0x80238D64: slt         $v0, $a0, $v0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80238D68: sltu        $v1, $zero, $v1
    ctx->r3 = 0 < ctx->r3 ? 1 : 0;
    // 0x80238D6C: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80238D70: beq         $v1, $zero, L_80238D84
    if (ctx->r3 == 0) {
        // 0x80238D74: sll         $v0, $s0, 16
        ctx->r2 = S32(ctx->r16 << 16);
            goto L_80238D84;
    }
    // 0x80238D74: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
    // 0x80238D78: sb          $zero, 0x0($a1)
    MEM_B(0X0, ctx->r5) = 0;
    // 0x80238D7C: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
L_80238D80:
    // 0x80238D80: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
L_80238D84:
    // 0x80238D84: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80238D88: bne         $v1, $zero, L_80238D98
    if (ctx->r3 != 0) {
        // 0x80238D8C: sh          $zero, 0x50($s2)
        MEM_H(0X50, ctx->r18) = 0;
            goto L_80238D98;
    }
    // 0x80238D8C: sh          $zero, 0x50($s2)
    MEM_H(0X50, ctx->r18) = 0;
    // 0x80238D90: j           L_80238E2C
    // 0x80238D94: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_80238E2C;
    // 0x80238D94: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_80238D98:
    // 0x80238D98: lhu         $v0, 0x2($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X2);
    // 0x80238D9C: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80238DA0: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x80238DA4: bne         $v1, $zero, L_80238DB0
    if (ctx->r3 != 0) {
        // 0x80238DA8: nop
    
            goto L_80238DB0;
    }
    // 0x80238DA8: nop

    // 0x80238DAC: break       7
    do_break(2149813676);
L_80238DB0:
    // 0x80238DB0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80238DB4: bne         $v1, $at, L_80238DC8
    if (ctx->r3 != ctx->r1) {
        // 0x80238DB8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80238DC8;
    }
    // 0x80238DB8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80238DBC: bne         $v0, $at, L_80238DC8
    if (ctx->r2 != ctx->r1) {
        // 0x80238DC0: nop
    
            goto L_80238DC8;
    }
    // 0x80238DC0: nop

    // 0x80238DC4: break       6
    do_break(2149813700);
L_80238DC8:
    // 0x80238DC8: mfhi        $v1
    ctx->r3 = hi;
    // 0x80238DCC: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x80238DD0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80238DD4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80238DD8: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80238DDC: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80238DE0: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
L_80238DE4:
    // 0x80238DE4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80238DE8: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x80238DEC: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80238DF0: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x80238DF4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80238DF8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80238DFC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80238E00: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80238E04: bne         $v0, $zero, L_80238E24
    if (ctx->r2 != 0) {
        // 0x80238E08: addiu       $v0, $a1, 0x1
        ctx->r2 = ADD32(ctx->r5, 0X1);
            goto L_80238E24;
    }
    // 0x80238E08: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    // 0x80238E0C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x80238E10: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80238E14: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80238E18: slti        $v0, $v0, 0x4
    ctx->r2 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x80238E1C: bne         $v0, $zero, L_80238DE4
    if (ctx->r2 != 0) {
        // 0x80238E20: sll         $v0, $a1, 16
        ctx->r2 = S32(ctx->r5 << 16);
            goto L_80238DE4;
    }
    // 0x80238E20: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
L_80238E24:
    // 0x80238E24: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
    // 0x80238E28: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
L_80238E2C:
    // 0x80238E2C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80238E30: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80238E34: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80238E38: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80238E3C: jr          $ra
    // 0x80238E40: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80238E40: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802295E4_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802295E4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802295E8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802295EC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802295F0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802295F4: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x802295F8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802295FC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80229600: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80229604: lw          $v0, -0xD8C($at)
    ctx->r2 = MEM_W(ctx->r1, -0XD8C);
    // 0x80229608: lui         $s0, 0x8025
    ctx->r16 = S32(0X8025 << 16);
    // 0x8022960C: jalr        $v0
    // 0x80229610: addiu       $s0, $s0, 0x33A0
    ctx->r16 = ADD32(ctx->r16, 0X33A0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80229610: addiu       $s0, $s0, 0x33A0
    ctx->r16 = ADD32(ctx->r16, 0X33A0);
    after_0:
    // 0x80229614: addiu       $v1, $s0, 0x60
    ctx->r3 = ADD32(ctx->r16, 0X60);
    // 0x80229618: sltu        $v0, $s0, $v1
    ctx->r2 = ctx->r16 < ctx->r3 ? 1 : 0;
    // 0x8022961C: beq         $v0, $zero, L_80229654
    if (ctx->r2 == 0) {
        // 0x80229620: nop
    
            goto L_80229654;
    }
    // 0x80229620: nop

    // 0x80229624: addu        $s1, $v1, $zero
    ctx->r17 = ADD32(ctx->r3, 0);
L_80229628:
    // 0x80229628: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022962C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80229630: beql        $v0, $zero, L_80229648
    if (ctx->r2 == 0) {
        // 0x80229634: addiu       $s0, $s0, 0xC
        ctx->r16 = ADD32(ctx->r16, 0XC);
            goto L_80229648;
    }
    goto skip_0;
    // 0x80229634: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    skip_0:
    // 0x80229638: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x8022963C: jalr        $v0
    // 0x80229640: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x80229640: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80229644: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
L_80229648:
    // 0x80229648: sltu        $v0, $s0, $s1
    ctx->r2 = ctx->r16 < ctx->r17 ? 1 : 0;
    // 0x8022964C: bne         $v0, $zero, L_80229628
    if (ctx->r2 != 0) {
        // 0x80229650: nop
    
            goto L_80229628;
    }
    // 0x80229650: nop

L_80229654:
    // 0x80229654: jal         0x80060590
    // 0x80229658: addiu       $a0, $zero, 0x619
    ctx->r4 = ADD32(0, 0X619);
    func_80060590_3B990(rdram, ctx);
        goto after_2;
    // 0x80229658: addiu       $a0, $zero, 0x619
    ctx->r4 = ADD32(0, 0X619);
    after_2:
    // 0x8022965C: jal         0x80060590
    // 0x80229660: addiu       $a0, $zero, 0x61A
    ctx->r4 = ADD32(0, 0X61A);
    func_80060590_3B990(rdram, ctx);
        goto after_3;
    // 0x80229660: addiu       $a0, $zero, 0x61A
    ctx->r4 = ADD32(0, 0X61A);
    after_3:
    // 0x80229664: jal         0x80060590
    // 0x80229668: addiu       $a0, $zero, 0x61B
    ctx->r4 = ADD32(0, 0X61B);
    func_80060590_3B990(rdram, ctx);
        goto after_4;
    // 0x80229668: addiu       $a0, $zero, 0x61B
    ctx->r4 = ADD32(0, 0X61B);
    after_4:
    // 0x8022966C: jal         0x80060590
    // 0x80229670: addiu       $a0, $zero, 0x61C
    ctx->r4 = ADD32(0, 0X61C);
    func_80060590_3B990(rdram, ctx);
        goto after_5;
    // 0x80229670: addiu       $a0, $zero, 0x61C
    ctx->r4 = ADD32(0, 0X61C);
    after_5:
    // 0x80229674: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80229678: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022967C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229680: jr          $ra
    // 0x80229684: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80229684: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022B2E4_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B2E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B2E8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B2EC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B2F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022B2F4: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022B2F8: bne         $v0, $zero, L_8022B344
    if (ctx->r2 != 0) {
        // 0x8022B2FC: nop
    
            goto L_8022B344;
    }
    // 0x8022B2FC: nop

    // 0x8022B300: jal         0x8022BE40
    // 0x8022B304: nop

    func_8022BE40_ovl10(rdram, ctx);
        goto after_0;
    // 0x8022B304: nop

    after_0:
    // 0x8022B308: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022B30C: bne         $v0, $zero, L_8022B340
    if (ctx->r2 != 0) {
        // 0x8022B310: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_8022B340;
    }
    // 0x8022B310: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022B314: jal         0x80229F50
    // 0x8022B318: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    func_80229F50_ovl10(rdram, ctx);
        goto after_1;
    // 0x8022B318: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_1:
    // 0x8022B31C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022B320: jal         0x8003E87C
    // 0x8022B324: addiu       $a0, $a0, 0x7C8
    ctx->r4 = ADD32(ctx->r4, 0X7C8);
    func_8003E87C_19C7C(rdram, ctx);
        goto after_2;
    // 0x8022B324: addiu       $a0, $a0, 0x7C8
    ctx->r4 = ADD32(ctx->r4, 0X7C8);
    after_2:
    // 0x8022B328: addiu       $v1, $zero, 0x100
    ctx->r3 = ADD32(0, 0X100);
    // 0x8022B32C: bne         $v0, $v1, L_8022B340
    if (ctx->r2 != ctx->r3) {
        // 0x8022B330: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_8022B340;
    }
    // 0x8022B330: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022B334: jal         0x8022A170
    // 0x8022B338: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_8022A170_ovl10(rdram, ctx);
        goto after_3;
    // 0x8022B338: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_3:
    // 0x8022B33C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_8022B340:
    // 0x8022B340: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8022B344:
    // 0x8022B344: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022B348: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B34C: jr          $ra
    // 0x8022B350: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B350: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227C9C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227C9C: jr          $ra
    // 0x80227CA0: nop

    TRACE_RETURN()
    return;
    // 0x80227CA0: nop

;}
RECOMP_FUNC void func_80241CDC_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80241CDC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80241CE0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80241CE4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80241CE8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80241CEC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80241CF0: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80241CF4: bne         $v0, $zero, L_80241D30
    if (ctx->r2 != 0) {
        // 0x80241CF8: addu        $s1, $a1, $zero
        ctx->r17 = ADD32(ctx->r5, 0);
            goto L_80241D30;
    }
    // 0x80241CF8: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x80241CFC: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80241D00: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80241D04: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80241D08: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80241D0C: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x80241D10: lbu         $a1, 0x1A70($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X1A70);
    // 0x80241D14: jal         0x80050294
    // 0x80241D18: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80241D18: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80241D1C: sb          $zero, 0x14($s1)
    MEM_B(0X14, ctx->r17) = 0;
    // 0x80241D20: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80241D24: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80241D28: j           L_80241D8C
    // 0x80241D2C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80241D8C;
    // 0x80241D2C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80241D30:
    // 0x80241D30: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x80241D34: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x80241D38: beq         $v0, $zero, L_80241D68
    if (ctx->r2 == 0) {
        // 0x80241D3C: lui         $v0, 0x4
        ctx->r2 = S32(0X4 << 16);
            goto L_80241D68;
    }
    // 0x80241D3C: lui         $v0, 0x4
    ctx->r2 = S32(0X4 << 16);
    // 0x80241D40: lbu         $v0, 0x14($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X14);
    // 0x80241D44: beq         $v0, $zero, L_80241D60
    if (ctx->r2 == 0) {
        // 0x80241D48: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_80241D60;
    }
    // 0x80241D48: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80241D4C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80241D50: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80241D54: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80241D58: j           L_80241D84
    // 0x80241D5C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_80241D84;
    // 0x80241D5C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80241D60:
    // 0x80241D60: sb          $v0, 0x14($s1)
    MEM_B(0X14, ctx->r17) = ctx->r2;
    // 0x80241D64: lui         $v0, 0x4
    ctx->r2 = S32(0X4 << 16);
L_80241D68:
    // 0x80241D68: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x80241D6C: lhu         $a0, 0x18($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X18);
    // 0x80241D70: ori         $v0, $v0, 0x3E1D
    ctx->r2 = ctx->r2 | 0X3E1D;
    // 0x80241D74: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80241D78: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x80241D7C: sw          $v1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r3;
    // 0x80241D80: sh          $a0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r4;
L_80241D84:
    // 0x80241D84: jal         0x8005044C
    // 0x80241D88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x80241D88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_80241D8C:
    // 0x80241D8C: lb          $v0, 0xA6($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA6);
    // 0x80241D90: beq         $v0, $zero, L_80241DA4
    if (ctx->r2 == 0) {
        // 0x80241D94: addiu       $a0, $zero, 0x111
        ctx->r4 = ADD32(0, 0X111);
            goto L_80241DA4;
    }
    // 0x80241D94: addiu       $a0, $zero, 0x111
    ctx->r4 = ADD32(0, 0X111);
    // 0x80241D98: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80241D9C: jal         0x8002A2F8
    // 0x80241DA0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_2;
    // 0x80241DA0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
L_80241DA4:
    // 0x80241DA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80241DA8: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x80241DAC: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x80241DB0: jal         0x8003B564
    // 0x80241DB4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_3;
    // 0x80241DB4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_3:
    // 0x80241DB8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80241DBC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80241DC0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80241DC4: jr          $ra
    // 0x80241DC8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80241DC8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023B2D4_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B2D4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8023B2D8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8023B2DC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023B2E0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8023B2E4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8023B2E8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8023B2EC: lb          $v1, 0xF($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XF);
    // 0x8023B2F0: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8023B2F4: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x8023B2F8: beq         $v1, $zero, L_8023B310
    if (ctx->r3 == 0) {
        // 0x8023B2FC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023B310;
    }
    // 0x8023B2FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023B300: beq         $v1, $v0, L_8023B3B8
    if (ctx->r3 == ctx->r2) {
        // 0x8023B304: nop
    
            goto L_8023B3B8;
    }
    // 0x8023B304: nop

    // 0x8023B308: j           L_8023B3E0
    // 0x8023B30C: nop

        goto L_8023B3E0;
    // 0x8023B30C: nop

L_8023B310:
    // 0x8023B310: jal         0x8006036C
    // 0x8023B314: addiu       $a0, $zero, 0x42
    ctx->r4 = ADD32(0, 0X42);
    func_8006036C_3B76C(rdram, ctx);
        goto after_0;
    // 0x8023B314: addiu       $a0, $zero, 0x42
    ctx->r4 = ADD32(0, 0X42);
    after_0:
    // 0x8023B318: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023B31C: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    // 0x8023B320: jal         0x80050294
    // 0x8023B324: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x8023B324: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x8023B328: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8023B32C: jal         0x80032498
    // 0x8023B330: lh          $a0, 0x4A06($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4A06);
    func_80032498_D898(rdram, ctx);
        goto after_2;
    // 0x8023B330: lh          $a0, 0x4A06($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4A06);
    after_2:
    // 0x8023B334: sll         $v0, $v0, 10
    ctx->r2 = S32(ctx->r2 << 10);
    // 0x8023B338: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8023B33C: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x8023B340: sh          $v0, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r2;
    // 0x8023B344: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8023B348: jal         0x800324B4
    // 0x8023B34C: lh          $a0, 0x4A06($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4A06);
    func_800324B4_D8B4(rdram, ctx);
        goto after_3;
    // 0x8023B34C: lh          $a0, 0x4A06($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4A06);
    after_3:
    // 0x8023B350: sll         $v0, $v0, 10
    ctx->r2 = S32(ctx->r2 << 10);
    // 0x8023B354: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8023B358: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x8023B35C: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8023B360: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8023B364: lhu         $a0, 0x1760($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X1760);
    // 0x8023B368: lbu         $v1, 0xF($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XF);
    // 0x8023B36C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8023B370: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
    // 0x8023B374: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x8023B378: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8023B37C: sh          $a0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r4;
    // 0x8023B380: sb          $v1, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r3;
    // 0x8023B384: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8023B388: lbu         $v0, 0x4A6D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4A6D);
    // 0x8023B38C: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x8023B390: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B394: sb          $v0, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r2;
    // 0x8023B398: jal         0x80036B58
    // 0x8023B39C: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_80036B58_11F58(rdram, ctx);
        goto after_4;
    // 0x8023B39C: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_4:
    // 0x8023B3A0: jal         0x80060D38
    // 0x8023B3A4: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_80060D38_3C138(rdram, ctx);
        goto after_5;
    // 0x8023B3A4: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_5:
    // 0x8023B3A8: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x8023B3AC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8023B3B0: j           L_8023B3E0
    // 0x8023B3B4: sh          $v0, -0x3F82($at)
    MEM_H(-0X3F82, ctx->r1) = ctx->r2;
        goto L_8023B3E0;
    // 0x8023B3B4: sh          $v0, -0x3F82($at)
    MEM_H(-0X3F82, ctx->r1) = ctx->r2;
L_8023B3B8:
    // 0x8023B3B8: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8023B3BC: lbu         $v0, -0x7388($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7388);
    // 0x8023B3C0: bne         $v0, $zero, L_8023B3E0
    if (ctx->r2 != 0) {
        // 0x8023B3C4: addiu       $a0, $zero, 0xB
        ctx->r4 = ADD32(0, 0XB);
            goto L_8023B3E0;
    }
    // 0x8023B3C4: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    // 0x8023B3C8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023B3CC: jal         0x8002A2F8
    // 0x8023B3D0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_6;
    // 0x8023B3D0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_6:
    // 0x8023B3D4: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x8023B3D8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023B3DC: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
L_8023B3E0:
    // 0x8023B3E0: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x8023B3E4: beq         $v0, $zero, L_8023B47C
    if (ctx->r2 == 0) {
        // 0x8023B3E8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023B47C;
    }
    // 0x8023B3E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023B3EC: lhu         $v0, 0x54($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X54);
    // 0x8023B3F0: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8023B3F4: addiu       $v0, $v0, 0x200
    ctx->r2 = ADD32(ctx->r2, 0X200);
    // 0x8023B3F8: addiu       $v1, $v1, 0x100
    ctx->r3 = ADD32(ctx->r3, 0X100);
    // 0x8023B3FC: sh          $v0, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r2;
    // 0x8023B400: jal         0x800504EC
    // 0x8023B404: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    func_800504EC_2B8EC(rdram, ctx);
        goto after_7;
    // 0x8023B404: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    after_7:
    // 0x8023B408: jal         0x80051770
    // 0x8023B40C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80051770_2CB70(rdram, ctx);
        goto after_8;
    // 0x8023B40C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
    // 0x8023B410: lhu         $v0, 0x54($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X54);
    // 0x8023B414: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8023B418: sh          $v0, -0x3D90($at)
    MEM_H(-0X3D90, ctx->r1) = ctx->r2;
    // 0x8023B41C: jal         0x80051248
    // 0x8023B420: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80051248_2C648(rdram, ctx);
        goto after_9;
    // 0x8023B420: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
    // 0x8023B424: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x8023B428: lhu         $a3, 0x4E($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X4E);
    // 0x8023B42C: lh          $v1, 0x44($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X44);
    // 0x8023B430: lw          $a2, 0x1C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1C);
    // 0x8023B434: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x8023B438: sll         $v1, $v1, 12
    ctx->r3 = S32(ctx->r3 << 12);
    // 0x8023B43C: addu        $a2, $a2, $v1
    ctx->r6 = ADD32(ctx->r6, ctx->r3);
    // 0x8023B440: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8023B444: lh          $a3, 0x46($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X46);
    // 0x8023B448: lh          $v0, 0x48($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X48);
    // 0x8023B44C: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x8023B450: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8023B454: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8023B458: sw          $a2, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r6;
    // 0x8023B45C: lw          $a2, 0x20($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X20);
    // 0x8023B460: sll         $v0, $v0, 12
    ctx->r2 = S32(ctx->r2 << 12);
    // 0x8023B464: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023B468: sll         $a3, $a3, 12
    ctx->r7 = S32(ctx->r7 << 12);
    // 0x8023B46C: addu        $a2, $a2, $a3
    ctx->r6 = ADD32(ctx->r6, ctx->r7);
    // 0x8023B470: sw          $v1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r3;
    // 0x8023B474: jal         0x8004DD04
    // 0x8023B478: sw          $a2, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r6;
    func_8004DD04_29104(rdram, ctx);
        goto after_10;
    // 0x8023B478: sw          $a2, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r6;
    after_10:
L_8023B47C:
    // 0x8023B47C: jal         0x80040F30
    // 0x8023B480: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_11;
    // 0x8023B480: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_11:
    // 0x8023B484: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8023B488: beq         $s1, $zero, L_8023B558
    if (ctx->r17 == 0) {
        // 0x8023B48C: addiu       $a0, $zero, 0x129
        ctx->r4 = ADD32(0, 0X129);
            goto L_8023B558;
    }
    // 0x8023B48C: addiu       $a0, $zero, 0x129
    ctx->r4 = ADD32(0, 0X129);
    // 0x8023B490: jal         0x8002A33C
    // 0x8023B494: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_12;
    // 0x8023B494: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_12:
    // 0x8023B498: andi        $v0, $s1, 0x1000
    ctx->r2 = ctx->r17 & 0X1000;
    // 0x8023B49C: beq         $v0, $zero, L_8023B550
    if (ctx->r2 == 0) {
        // 0x8023B4A0: addiu       $a0, $s0, 0x44
        ctx->r4 = ADD32(ctx->r16, 0X44);
            goto L_8023B550;
    }
    // 0x8023B4A0: addiu       $a0, $s0, 0x44
    ctx->r4 = ADD32(ctx->r16, 0X44);
    // 0x8023B4A4: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x8023B4A8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023B4AC: slti        $v0, $v0, 0x2
    ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x8023B4B0: bne         $v0, $zero, L_8023B4E0
    if (ctx->r2 != 0) {
        // 0x8023B4B4: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_8023B4E0;
    }
    // 0x8023B4B4: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8023B4B8: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8023B4BC: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x8023B4C0: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x8023B4C4: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8023B4C8: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8023B4CC: sh          $zero, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = 0;
    // 0x8023B4D0: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    // 0x8023B4D4: sh          $zero, 0x50($s0)
    MEM_H(0X50, ctx->r16) = 0;
    // 0x8023B4D8: j           L_8023B58C
    // 0x8023B4DC: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
        goto L_8023B58C;
    // 0x8023B4DC: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
L_8023B4E0:
    // 0x8023B4E0: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x8023B4E4: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8023B4E8: sra         $v0, $v0, 23
    ctx->r2 = S32(SIGNED(ctx->r2) >> 23);
    // 0x8023B4EC: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8023B4F0: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8023B4F4: lhu         $a0, 0x1760($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X1760);
    // 0x8023B4F8: lh          $v0, 0x44($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X44);
    // 0x8023B4FC: lh          $v1, 0x48($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X48);
    // 0x8023B500: sra         $v0, $v0, 2
    ctx->r2 = S32(SIGNED(ctx->r2) >> 2);
    // 0x8023B504: sra         $v1, $v1, 2
    ctx->r3 = S32(SIGNED(ctx->r3) >> 2);
    // 0x8023B508: sh          $a0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r4;
    // 0x8023B50C: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8023B510: jal         0x8004F144
    // 0x8023B514: sh          $v1, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r3;
    func_8004F144_2A544(rdram, ctx);
        goto after_13;
    // 0x8023B514: sh          $v1, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r3;
    after_13:
    // 0x8023B518: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023B51C: beq         $v1, $zero, L_8023B54C
    if (ctx->r3 == 0) {
        // 0x8023B520: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023B54C;
    }
    // 0x8023B520: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023B524: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8023B528: addiu       $v0, $zero, 0x83
    ctx->r2 = ADD32(0, 0X83);
    // 0x8023B52C: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8023B530: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    // 0x8023B534: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x8023B538: sh          $v0, 0x1C($v1)
    MEM_H(0X1C, ctx->r3) = ctx->r2;
    // 0x8023B53C: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x8023B540: sh          $v0, 0x1E($v1)
    MEM_H(0X1E, ctx->r3) = ctx->r2;
    // 0x8023B544: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x8023B548: sh          $v0, 0x20($v1)
    MEM_H(0X20, ctx->r3) = ctx->r2;
L_8023B54C:
    // 0x8023B54C: addiu       $a0, $s0, 0x44
    ctx->r4 = ADD32(ctx->r16, 0X44);
L_8023B550:
    // 0x8023B550: jal         0x80040834
    // 0x8023B554: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_80040834_1BC34(rdram, ctx);
        goto after_14;
    // 0x8023B554: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_14:
L_8023B558:
    // 0x8023B558: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x8023B55C: slti        $v0, $v0, 0x3
    ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x8023B560: bne         $v0, $zero, L_8023B58C
    if (ctx->r2 != 0) {
        // 0x8023B564: nop
    
            goto L_8023B58C;
    }
    // 0x8023B564: nop

    // 0x8023B568: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x8023B56C: slti        $v0, $v0, 0x2
    ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x8023B570: bne         $v0, $zero, L_8023B58C
    if (ctx->r2 != 0) {
        // 0x8023B574: nop
    
            goto L_8023B58C;
    }
    // 0x8023B574: nop

    // 0x8023B578: jal         0x8006036C
    // 0x8023B57C: addiu       $a0, $zero, 0x642
    ctx->r4 = ADD32(0, 0X642);
    func_8006036C_3B76C(rdram, ctx);
        goto after_15;
    // 0x8023B57C: addiu       $a0, $zero, 0x642
    ctx->r4 = ADD32(0, 0X642);
    after_15:
    // 0x8023B580: lbu         $v0, 0xBD($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XBD);
    // 0x8023B584: andi        $v0, $v0, 0xDF
    ctx->r2 = ctx->r2 & 0XDF;
    // 0x8023B588: sb          $v0, 0xBD($s2)
    MEM_B(0XBD, ctx->r18) = ctx->r2;
L_8023B58C:
    // 0x8023B58C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8023B590: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8023B594: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8023B598: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023B59C: jr          $ra
    // 0x8023B5A0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8023B5A0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802266E0_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802266E0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802266E4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802266E8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802266EC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802266F0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802266F4: lw          $s2, 0x34($a0)
    ctx->r18 = MEM_W(ctx->r4, 0X34);
    // 0x802266F8: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x802266FC: lw          $s0, 0x38($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X38);
    // 0x80226700: bne         $v0, $zero, L_80226764
    if (ctx->r2 != 0) {
        // 0x80226704: lw          $s1, 0x3C($a0)
        ctx->r17 = MEM_W(ctx->r4, 0X3C);
            goto L_80226764;
    }
    // 0x80226704: lw          $s1, 0x3C($a0)
    ctx->r17 = MEM_W(ctx->r4, 0X3C);
    // 0x80226708: jal         0x80226F30
    // 0x8022670C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80226F30_ovl10(rdram, ctx);
        goto after_0;
    // 0x8022670C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x80226710: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80226714: sh          $v0, 0xA($s2)
    MEM_H(0XA, ctx->r18) = ctx->r2;
    // 0x80226718: sh          $v0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r2;
    // 0x8022671C: sh          $v0, 0xA($s1)
    MEM_H(0XA, ctx->r17) = ctx->r2;
    // 0x80226720: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226724: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80226728: sb          $v0, 0x333A($at)
    MEM_B(0X333A, ctx->r1) = ctx->r2;
    // 0x8022672C: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80226730: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80226734: sb          $v0, 0x3346($at)
    MEM_B(0X3346, ctx->r1) = ctx->r2;
    // 0x80226738: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022673C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80226740: sb          $zero, 0x3344($at)
    MEM_B(0X3344, ctx->r1) = 0;
    // 0x80226744: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80226748: sb          $zero, 0x3345($at)
    MEM_B(0X3345, ctx->r1) = 0;
    // 0x8022674C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80226750: sb          $v0, 0x3354($at)
    MEM_B(0X3354, ctx->r1) = ctx->r2;
    // 0x80226754: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80226758: sb          $v0, 0x3355($at)
    MEM_B(0X3355, ctx->r1) = ctx->r2;
    // 0x8022675C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80226760: sb          $v0, 0x3356($at)
    MEM_B(0X3356, ctx->r1) = ctx->r2;
L_80226764:
    // 0x80226764: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80226768: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022676C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80226770: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226774: jr          $ra
    // 0x80226778: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80226778: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80233880_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233880: lbu         $a1, 0xA($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0XA);
    // 0x80233884: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80233888: andi        $v1, $a1, 0xFF
    ctx->r3 = ctx->r5 & 0XFF;
    // 0x8023388C: beq         $v1, $v0, L_802338C4
    if (ctx->r3 == ctx->r2) {
        // 0x80233890: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_802338C4;
    }
    // 0x80233890: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80233894: beql        $v0, $zero, L_802338AC
    if (ctx->r2 == 0) {
        // 0x80233898: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802338AC;
    }
    goto skip_0;
    // 0x80233898: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8023389C: beq         $v1, $zero, L_802338BC
    if (ctx->r3 == 0) {
        // 0x802338A0: addiu       $v0, $a1, 0x1
        ctx->r2 = ADD32(ctx->r5, 0X1);
            goto L_802338BC;
    }
    // 0x802338A0: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    // 0x802338A4: j           L_80233904
    // 0x802338A8: nop

        goto L_80233904;
    // 0x802338A8: nop

L_802338AC:
    // 0x802338AC: beq         $v1, $v0, L_802338F0
    if (ctx->r3 == ctx->r2) {
        // 0x802338B0: nop
    
            goto L_802338F0;
    }
    // 0x802338B0: nop

    // 0x802338B4: j           L_80233904
    // 0x802338B8: nop

        goto L_80233904;
    // 0x802338B8: nop

L_802338BC:
    // 0x802338BC: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x802338C0: sb          $zero, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = 0;
L_802338C4:
    // 0x802338C4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802338C8: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x802338CC: lui         $v1, 0x20
    ctx->r3 = S32(0X20 << 16);
    // 0x802338D0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802338D4: beq         $v0, $zero, L_80233904
    if (ctx->r2 == 0) {
        // 0x802338D8: addiu       $v1, $zero, 0x8
        ctx->r3 = ADD32(0, 0X8);
            goto L_80233904;
    }
    // 0x802338D8: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x802338DC: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x802338E0: sb          $v1, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r3;
    // 0x802338E4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802338E8: j           L_80233904
    // 0x802338EC: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
        goto L_80233904;
    // 0x802338EC: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_802338F0:
    // 0x802338F0: lb          $v0, 0xA7($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XA7);
    // 0x802338F4: bgez        $v0, L_80233904
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802338F8: addiu       $v0, $a1, -0x1
        ctx->r2 = ADD32(ctx->r5, -0X1);
            goto L_80233904;
    }
    // 0x802338F8: addiu       $v0, $a1, -0x1
    ctx->r2 = ADD32(ctx->r5, -0X1);
    // 0x802338FC: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x80233900: sb          $zero, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = 0;
L_80233904:
    // 0x80233904: jr          $ra
    // 0x80233908: nop

    TRACE_RETURN()
    return;
    // 0x80233908: nop

    // 0x8023390C: nop

;}
RECOMP_FUNC void func_80233D00_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233D00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80233D04: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80233D08: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80233D0C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80233D10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80233D14: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x80233D18: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80233D1C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80233D20: jal         0x8009A3B4
    // 0x80233D24: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80233D24: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    after_0:
    // 0x80233D28: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80233D2C: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80233D30: jal         0x8009A3B4
    // 0x80233D34: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80233D34: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80233D38: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80233D3C: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80233D40: jal         0x8009A3B4
    // 0x80233D44: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80233D44: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80233D48: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80233D4C: jal         0x800A3450
    // 0x80233D50: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80233D50: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    after_3:
    // 0x80233D54: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80233D58: sh          $v0, 0x34A($s0)
    MEM_H(0X34A, ctx->r16) = ctx->r2;
    // 0x80233D5C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80233D60: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80233D64: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80233D68: lw          $v0, 0x11E0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X11E0);
    // 0x80233D6C: jalr        $v0
    // 0x80233D70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x80233D70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80233D74: lbu         $v1, 0xAD($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XAD);
    // 0x80233D78: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x80233D7C: beq         $v1, $a1, L_80233D8C
    if (ctx->r3 == ctx->r5) {
        // 0x80233D80: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80233D8C;
    }
    // 0x80233D80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80233D84: j           L_80233DB0
    // 0x80233D88: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
        goto L_80233DB0;
    // 0x80233D88: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_80233D8C:
    // 0x80233D8C: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x80233D90: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80233D94: beq         $v0, $zero, L_80233DAC
    if (ctx->r2 == 0) {
        // 0x80233D98: addu        $a1, $v1, $zero
        ctx->r5 = ADD32(ctx->r3, 0);
            goto L_80233DAC;
    }
    // 0x80233D98: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x80233D9C: jal         0x8005044C
    // 0x80233DA0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_5;
    // 0x80233DA0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80233DA4: j           L_80233DBC
    // 0x80233DA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_80233DBC;
    // 0x80233DA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80233DAC:
    // 0x80233DAC: lbu         $a2, 0xA4($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0XA4);
L_80233DB0:
    // 0x80233DB0: jal         0x80050294
    // 0x80233DB4: nop

    func_80050294_2B694(rdram, ctx);
        goto after_6;
    // 0x80233DB4: nop

    after_6:
    // 0x80233DB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80233DBC:
    // 0x80233DBC: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x80233DC0: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x80233DC4: jal         0x8003B564
    // 0x80233DC8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_7;
    // 0x80233DC8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_7:
    // 0x80233DCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80233DD0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80233DD4: jr          $ra
    // 0x80233DD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80233DD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80249AFC_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80249AFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80249B00: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80249B04: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80249B08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80249B0C: lw          $a0, 0x44($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X44);
    // 0x80249B10: beq         $a0, $zero, L_80249B28
    if (ctx->r4 == 0) {
        // 0x80249B14: nop
    
            goto L_80249B28;
    }
    // 0x80249B14: nop

    // 0x80249B18: jal         0x8006033C
    // 0x80249B1C: nop

    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80249B1C: nop

    after_0:
    // 0x80249B20: beq         $v0, $zero, L_80249B50
    if (ctx->r2 == 0) {
        // 0x80249B24: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80249B50;
    }
    // 0x80249B24: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80249B28:
    // 0x80249B28: lb          $a0, 0xC($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XC);
    // 0x80249B2C: jal         0x8006033C
    // 0x80249B30: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x80249B30: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    after_1:
    // 0x80249B34: bne         $v0, $zero, L_80249B50
    if (ctx->r2 != 0) {
        // 0x80249B38: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80249B50;
    }
    // 0x80249B38: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80249B3C: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x80249B40: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80249B44: bne         $v1, $v0, L_80249B50
    if (ctx->r3 != ctx->r2) {
        // 0x80249B48: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80249B50;
    }
    // 0x80249B48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80249B4C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80249B50:
    // 0x80249B50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80249B54: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80249B58: jr          $ra
    // 0x80249B5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80249B5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80247AF8_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80247AF8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80247AFC: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80247B00: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80247B04: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x80247B08: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80247B0C: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x80247B10: beq         $v0, $zero, L_80247B64
    if (ctx->r2 == 0) {
        // 0x80247B14: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_80247B64;
    }
    // 0x80247B14: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80247B18: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x80247B1C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80247B20: jal         0x8002C678
    // 0x80247B24: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    func_8002C678_7A78(rdram, ctx);
        goto after_0;
    // 0x80247B24: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    after_0:
    // 0x80247B28: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x80247B2C: lui         $v1, 0x2AAA
    ctx->r3 = S32(0X2AAA << 16);
    // 0x80247B30: ori         $v1, $v1, 0xAAAB
    ctx->r3 = ctx->r3 | 0XAAAB;
    // 0x80247B34: sll         $v0, $v0, 12
    ctx->r2 = S32(ctx->r2 << 12);
    // 0x80247B38: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80247B3C: lb          $a0, 0xC($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XC);
    // 0x80247B40: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80247B44: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    // 0x80247B48: mfhi        $a2
    ctx->r6 = hi;
    // 0x80247B4C: sra         $v0, $a2, 2
    ctx->r2 = S32(SIGNED(ctx->r6) >> 2);
    // 0x80247B50: nop

    // 0x80247B54: jal         0x800319B4
    // 0x80247B58: sh          $v0, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r2;
    func_800319B4_CDB4(rdram, ctx);
        goto after_1;
    // 0x80247B58: sh          $v0, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r2;
    after_1:
    // 0x80247B5C: j           L_80247B70
    // 0x80247B60: nop

        goto L_80247B70;
    // 0x80247B60: nop

L_80247B64:
    // 0x80247B64: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x80247B68: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80247B6C: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_80247B70:
    // 0x80247B70: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x80247B74: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80247B78: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80247B7C: jr          $ra
    // 0x80247B80: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80247B80: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80229F50_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229F50: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80229F54: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x80229F58: sra         $a0, $a0, 21
    ctx->r4 = S32(SIGNED(ctx->r4) >> 21);
    // 0x80229F5C: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80229F60: addiu       $v0, $v0, 0x484
    ctx->r2 = ADD32(ctx->r2, 0X484);
    // 0x80229F64: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80229F68: addu        $s2, $a0, $v0
    ctx->r18 = ADD32(ctx->r4, ctx->r2);
    // 0x80229F6C: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80229F70: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x80229F74: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80229F78: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80229F7C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80229F80: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229F84: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x80229F88: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80229F8C: sw          $zero, -0xD90($at)
    MEM_W(-0XD90, ctx->r1) = 0;
    // 0x80229F90: beq         $v0, $zero, L_8022A028
    if (ctx->r2 == 0) {
        // 0x80229F94: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_8022A028;
    }
    // 0x80229F94: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x80229F98: lui         $s5, 0x8025
    ctx->r21 = S32(0X8025 << 16);
    // 0x80229F9C: addiu       $s5, $s5, 0x55F8
    ctx->r21 = ADD32(ctx->r21, 0X55F8);
    // 0x80229FA0: lui         $s4, 0x801C
    ctx->r20 = S32(0X801C << 16);
    // 0x80229FA4: addiu       $s4, $s4, -0x3A2C
    ctx->r20 = ADD32(ctx->r20, -0X3A2C);
    // 0x80229FA8: lui         $s3, 0x8000
    ctx->r19 = S32(0X8000 << 16);
    // 0x80229FAC: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
L_80229FB0:
    // 0x80229FB0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80229FB4: lw          $v1, 0x4($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X4);
    // 0x80229FB8: sll         $a0, $v0, 2
    ctx->r4 = S32(ctx->r2 << 2);
    // 0x80229FBC: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80229FC0: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x80229FC4: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x80229FC8: jal         0x8005FA7C
    // 0x80229FCC: lbu         $s0, 0x0($a0)
    ctx->r16 = MEM_BU(ctx->r4, 0X0);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_0;
    // 0x80229FCC: lbu         $s0, 0x0($a0)
    ctx->r16 = MEM_BU(ctx->r4, 0X0);
    after_0:
    // 0x80229FD0: sll         $v1, $s0, 2
    ctx->r3 = S32(ctx->r16 << 2);
    // 0x80229FD4: addu        $v0, $v1, $s4
    ctx->r2 = ADD32(ctx->r3, ctx->r20);
    // 0x80229FD8: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x80229FDC: addu        $v1, $v1, $s5
    ctx->r3 = ADD32(ctx->r3, ctx->r21);
    // 0x80229FE0: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
    // 0x80229FE4: lbu         $v0, 0x6($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X6);
    // 0x80229FE8: srlv        $s0, $s3, $s0
    ctx->r16 = S32(U32(ctx->r19) >> (ctx->r16 & 31));
    // 0x80229FEC: andi        $v0, $v0, 0xDF
    ctx->r2 = ctx->r2 & 0XDF;
    // 0x80229FF0: sb          $v0, 0x6($a0)
    MEM_B(0X6, ctx->r4) = ctx->r2;
    // 0x80229FF4: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80229FF8: lw          $v1, -0xD90($v1)
    ctx->r3 = MEM_W(ctx->r3, -0XD90);
    // 0x80229FFC: addiu       $v0, $s1, 0x1
    ctx->r2 = ADD32(ctx->r17, 0X1);
    // 0x8022A000: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8022A004: or          $v1, $v1, $s0
    ctx->r3 = ctx->r3 | ctx->r16;
    // 0x8022A008: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022A00C: sw          $v1, -0xD90($at)
    MEM_W(-0XD90, ctx->r1) = ctx->r3;
    // 0x8022A010: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x8022A014: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A018: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022A01C: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8022A020: bne         $v0, $zero, L_80229FB0
    if (ctx->r2 != 0) {
        // 0x8022A024: sll         $v0, $s1, 16
        ctx->r2 = S32(ctx->r17 << 16);
            goto L_80229FB0;
    }
    // 0x8022A024: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
L_8022A028:
    // 0x8022A028: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8022A02C: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x8022A030: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8022A034: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022A038: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022A03C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022A040: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A044: jr          $ra
    // 0x8022A048: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022A048: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022AD50_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AD50: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022AD54: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022AD58: lui         $s0, 0x801C
    ctx->r16 = S32(0X801C << 16);
    // 0x8022AD5C: addiu       $s0, $s0, -0x3BC6
    ctx->r16 = ADD32(ctx->r16, -0X3BC6);
    // 0x8022AD60: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022AD64: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022AD68: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022AD6C: lb          $a1, 0x0($s0)
    ctx->r5 = MEM_B(ctx->r16, 0X0);
    // 0x8022AD70: lui         $s2, 0x8025
    ctx->r18 = S32(0X8025 << 16);
    // 0x8022AD74: addiu       $s2, $s2, 0x7F8
    ctx->r18 = ADD32(ctx->r18, 0X7F8);
    // 0x8022AD78: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022AD7C: lui         $s1, 0x8025
    ctx->r17 = S32(0X8025 << 16);
    // 0x8022AD80: addiu       $s1, $s1, 0x800
    ctx->r17 = ADD32(ctx->r17, 0X800);
    // 0x8022AD84: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x8022AD88: jal         0x8006100C
    // 0x8022AD8C: addu        $a1, $a1, $s1
    ctx->r5 = ADD32(ctx->r5, ctx->r17);
    func_8006100C_3C40C(rdram, ctx);
        goto after_0;
    // 0x8022AD8C: addu        $a1, $a1, $s1
    ctx->r5 = ADD32(ctx->r5, ctx->r17);
    after_0:
    // 0x8022AD90: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
    // 0x8022AD94: bne         $v0, $zero, L_8022ADD0
    if (ctx->r2 != 0) {
        // 0x8022AD98: nop
    
            goto L_8022ADD0;
    }
    // 0x8022AD98: nop

    // 0x8022AD9C: jal         0x8006033C
    // 0x8022ADA0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x8022ADA0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x8022ADA4: beq         $v0, $zero, L_8022ADB4
    if (ctx->r2 == 0) {
        // 0x8022ADA8: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_8022ADB4;
    }
    // 0x8022ADA8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022ADAC: j           L_8022ADC8
    // 0x8022ADB0: addiu       $a1, $s1, 0x68
    ctx->r5 = ADD32(ctx->r17, 0X68);
        goto L_8022ADC8;
    // 0x8022ADB0: addiu       $a1, $s1, 0x68
    ctx->r5 = ADD32(ctx->r17, 0X68);
L_8022ADB4:
    // 0x8022ADB4: jal         0x8006033C
    // 0x8022ADB8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x8022ADB8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_2:
    // 0x8022ADBC: beq         $v0, $zero, L_8022ADD0
    if (ctx->r2 == 0) {
        // 0x8022ADC0: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_8022ADD0;
    }
    // 0x8022ADC0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022ADC4: addiu       $a1, $s1, 0x60
    ctx->r5 = ADD32(ctx->r17, 0X60);
L_8022ADC8:
    // 0x8022ADC8: jal         0x8006100C
    // 0x8022ADCC: nop

    func_8006100C_3C40C(rdram, ctx);
        goto after_3;
    // 0x8022ADCC: nop

    after_3:
L_8022ADD0:
    // 0x8022ADD0: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8022ADD4: lbu         $v0, -0x3BC6($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3BC6);
    // 0x8022ADD8: addiu       $v0, $v0, -0x9
    ctx->r2 = ADD32(ctx->r2, -0X9);
    // 0x8022ADDC: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x8022ADE0: beq         $v0, $zero, L_8022AE00
    if (ctx->r2 == 0) {
        // 0x8022ADE4: nop
    
            goto L_8022AE00;
    }
    // 0x8022ADE4: nop

    // 0x8022ADE8: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8022ADEC: lb          $v0, -0x3BC7($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC7);
    // 0x8022ADF0: bne         $v0, $zero, L_8022AE00
    if (ctx->r2 != 0) {
        // 0x8022ADF4: nop
    
            goto L_8022AE00;
    }
    // 0x8022ADF4: nop

    // 0x8022ADF8: jal         0x8022BE88
    // 0x8022ADFC: nop

    func_8022BE88_ovl10(rdram, ctx);
        goto after_4;
    // 0x8022ADFC: nop

    after_4:
L_8022AE00:
    // 0x8022AE00: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8022AE04: sw          $zero, -0x359C($at)
    MEM_W(-0X359C, ctx->r1) = 0;
    // 0x8022AE08: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022AE0C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022AE10: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022AE14: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022AE18: jr          $ra
    // 0x8022AE1C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022AE1C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80226FA0_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226FA0: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80226FA4: lbu         $v0, -0x2348($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X2348);
    // 0x80226FA8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80226FAC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80226FB0: lui         $s0, 0x801A
    ctx->r16 = S32(0X801A << 16);
    // 0x80226FB4: lw          $s0, -0x5858($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X5858);
    // 0x80226FB8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x80226FBC: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80226FC0: addiu       $a0, $a0, 0x3340
    ctx->r4 = ADD32(ctx->r4, 0X3340);
    // 0x80226FC4: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80226FC8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80226FCC: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80226FD0: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    // 0x80226FD4: addiu       $v0, $s0, 0x50
    ctx->r2 = ADD32(ctx->r16, 0X50);
    // 0x80226FD8: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80226FDC: sw          $v0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r2;
    // 0x80226FE0: jal         0x8003BD6C
    // 0x80226FE4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8003BD6C_1716C(rdram, ctx);
        goto after_0;
    // 0x80226FE4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80226FE8: addiu       $s1, $s0, 0x28
    ctx->r17 = ADD32(ctx->r16, 0X28);
    // 0x80226FEC: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80226FF0: lbu         $v0, -0x2348($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X2348);
    // 0x80226FF4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80226FF8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80226FFC: sll         $a0, $v0, 1
    ctx->r4 = S32(ctx->r2 << 1);
    // 0x80227000: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80227004: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x80227008: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8022700C: addiu       $v0, $v0, 0x3360
    ctx->r2 = ADD32(ctx->r2, 0X3360);
    // 0x80227010: jal         0x8003BD6C
    // 0x80227014: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_8003BD6C_1716C(rdram, ctx);
        goto after_1;
    // 0x80227014: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_1:
    // 0x80227018: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x8022701C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80227020: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80227024: jal         0x80030284
    // 0x80227028: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80030284_B684(rdram, ctx);
        goto after_2;
    // 0x80227028: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x8022702C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80227030: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80227034: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80227038: andi        $a3, $v0, 0xFFFF
    ctx->r7 = ctx->r2 & 0XFFFF;
    // 0x8022703C: jal         0x8003055C
    // 0x80227040: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8003055C_B95C(rdram, ctx);
        goto after_3;
    // 0x80227040: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
    // 0x80227044: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80227048: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x8022704C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80227050: jal         0x8002FD30
    // 0x80227054: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    func_8002FD30_B130(rdram, ctx);
        goto after_4;
    // 0x80227054: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    after_4:
    // 0x80227058: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022705C: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x80227060: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80227064: jal         0x8002FD30
    // 0x80227068: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    func_8002FD30_B130(rdram, ctx);
        goto after_5;
    // 0x80227068: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    after_5:
    // 0x8022706C: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80227070: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80227074: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80227078: jr          $ra
    // 0x8022707C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022707C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8023922C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023922C: lw          $v0, 0x340($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X340);
    // 0x80239230: lw          $v1, 0x344($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X344);
    // 0x80239234: lw          $a1, 0x344($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X344);
    // 0x80239238: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x8023923C: sb          $v0, 0x351($a0)
    MEM_B(0X351, ctx->r4) = ctx->r2;
    // 0x80239240: lhu         $v0, 0x4($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X4);
    // 0x80239244: lw          $v1, 0x344($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X344);
    // 0x80239248: sh          $zero, 0x34A($a0)
    MEM_H(0X34A, ctx->r4) = 0;
    // 0x8023924C: sh          $v0, 0x348($a0)
    MEM_H(0X348, ctx->r4) = ctx->r2;
    // 0x80239250: lhu         $a2, 0x6($v1)
    ctx->r6 = MEM_HU(ctx->r3, 0X6);
    // 0x80239254: lw          $v1, 0x340($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X340);
    // 0x80239258: lbu         $v0, 0x352($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X352);
    // 0x8023925C: sw          $a1, 0x340($a0)
    MEM_W(0X340, ctx->r4) = ctx->r5;
    // 0x80239260: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80239264: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80239268: sw          $v1, 0x344($a0)
    MEM_W(0X344, ctx->r4) = ctx->r3;
    // 0x8023926C: sb          $v0, 0x352($a0)
    MEM_B(0X352, ctx->r4) = ctx->r2;
    // 0x80239270: jr          $ra
    // 0x80239274: sh          $a2, 0x34C($a0)
    MEM_H(0X34C, ctx->r4) = ctx->r6;
    TRACE_RETURN()
    return;
    // 0x80239274: sh          $a2, 0x34C($a0)
    MEM_H(0X34C, ctx->r4) = ctx->r6;
    // 0x80239278: nop

    // 0x8023927C: nop

;}
RECOMP_FUNC void func_8022FA5C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FA5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022FA60: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022FA64: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022FA68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022FA6C: lbu         $a0, 0xA($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA);
    // 0x8022FA70: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022FA74: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x8022FA78: beq         $v1, $v0, L_8022FAD0
    if (ctx->r3 == ctx->r2) {
        // 0x8022FA7C: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8022FAD0;
    }
    // 0x8022FA7C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022FA80: beq         $v0, $zero, L_8022FBE4
    if (ctx->r2 == 0) {
        // 0x8022FA84: nop
    
            goto L_8022FBE4;
    }
    // 0x8022FA84: nop

    // 0x8022FA88: bne         $v1, $zero, L_8022FBE4
    if (ctx->r3 != 0) {
        // 0x8022FA8C: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_8022FBE4;
    }
    // 0x8022FA8C: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8022FA90: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022FA94: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022FA98: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022FA9C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022FAA0: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022FAA4: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022FAA8: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8022FAAC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022FAB0: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8022FAB4: lhu         $v1, 0x972($at)
    ctx->r3 = MEM_HU(ctx->r1, 0X972);
    // 0x8022FAB8: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8022FABC: sb          $v0, 0x110($s0)
    MEM_B(0X110, ctx->r16) = ctx->r2;
    // 0x8022FAC0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022FAC4: sh          $v0, 0x36C($s0)
    MEM_H(0X36C, ctx->r16) = ctx->r2;
    // 0x8022FAC8: j           L_8022FBE4
    // 0x8022FACC: sh          $v1, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r3;
        goto L_8022FBE4;
    // 0x8022FACC: sh          $v1, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r3;
L_8022FAD0:
    // 0x8022FAD0: lhu         $v0, 0x36C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X36C);
    // 0x8022FAD4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022FAD8: sh          $v0, 0x36C($s0)
    MEM_H(0X36C, ctx->r16) = ctx->r2;
    // 0x8022FADC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022FAE0: bgez        $v0, L_8022FB18
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022FAE4: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_8022FB18;
    }
    // 0x8022FAE4: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8022FAE8: lbu         $v1, 0x110($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X110);
    // 0x8022FAEC: bne         $v1, $v0, L_8022FB04
    if (ctx->r3 != ctx->r2) {
        // 0x8022FAF0: addiu       $v1, $zero, 0x9
        ctx->r3 = ADD32(0, 0X9);
            goto L_8022FB04;
    }
    // 0x8022FAF0: addiu       $v1, $zero, 0x9
    ctx->r3 = ADD32(0, 0X9);
    // 0x8022FAF4: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022FAF8: sb          $v0, 0x110($s0)
    MEM_B(0X110, ctx->r16) = ctx->r2;
    // 0x8022FAFC: j           L_8022FB14
    // 0x8022FB00: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_8022FB14;
    // 0x8022FB00: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_8022FB04:
    // 0x8022FB04: lhu         $v0, 0x36A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X36A);
    // 0x8022FB08: sb          $v1, 0x110($s0)
    MEM_B(0X110, ctx->r16) = ctx->r3;
    // 0x8022FB0C: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x8022FB10: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
L_8022FB14:
    // 0x8022FB14: sh          $v0, 0x36C($s0)
    MEM_H(0X36C, ctx->r16) = ctx->r2;
L_8022FB18:
    // 0x8022FB18: lb          $v0, 0xA6($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA6);
    // 0x8022FB1C: beq         $v0, $zero, L_8022FB2C
    if (ctx->r2 == 0) {
        // 0x8022FB20: addiu       $a0, $zero, 0xD7
        ctx->r4 = ADD32(0, 0XD7);
            goto L_8022FB2C;
    }
    // 0x8022FB20: addiu       $a0, $zero, 0xD7
    ctx->r4 = ADD32(0, 0XD7);
    // 0x8022FB24: jal         0x8002A33C
    // 0x8022FB28: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x8022FB28: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_0:
L_8022FB2C:
    // 0x8022FB2C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022FB30: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8022FB34: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022FB38: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x8022FB3C: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x8022FB40: addiu       $a1, $a1, 0x96C
    ctx->r5 = ADD32(ctx->r5, 0X96C);
    // 0x8022FB44: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022FB48: jal         0x8004F820
    // 0x8022FB4C: addu        $a1, $v0, $a1
    ctx->r5 = ADD32(ctx->r2, ctx->r5);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x8022FB4C: addu        $a1, $v0, $a1
    ctx->r5 = ADD32(ctx->r2, ctx->r5);
    after_1:
    // 0x8022FB50: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FB54: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022FB58: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022FB5C: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x8022FB60: lh          $a3, 0x48($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X48);
    // 0x8022FB64: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022FB68: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022FB6C: jal         0x8004DA90
    // 0x8022FB70: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x8022FB70: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    after_2:
    // 0x8022FB74: lbu         $a0, 0x3($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X3);
    // 0x8022FB78: lh          $v1, 0x14($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X14);
    // 0x8022FB7C: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x8022FB80: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8022FB84: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022FB88: lh          $v0, 0x96C($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X96C);
    // 0x8022FB8C: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8022FB90: mult        $v1, $v1
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022FB94: mflo        $v1
    ctx->r3 = lo;
    // 0x8022FB98: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022FB9C: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x8022FBA0: lh          $a0, 0x970($at)
    ctx->r4 = MEM_H(ctx->r1, 0X970);
    // 0x8022FBA4: lh          $v0, 0x18($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X18);
    // 0x8022FBA8: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8022FBAC: mult        $v0, $v0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022FBB0: mflo        $v0
    ctx->r2 = lo;
    // 0x8022FBB4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022FBB8: slti        $v1, $v1, 0x800
    ctx->r3 = SIGNED(ctx->r3) < 0X800 ? 1 : 0;
    // 0x8022FBBC: beq         $v1, $zero, L_8022FBE4
    if (ctx->r3 == 0) {
        // 0x8022FBC0: nop
    
            goto L_8022FBE4;
    }
    // 0x8022FBC0: nop

    // 0x8022FBC4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022FBC8: lbu         $a0, 0x3($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X3);
    // 0x8022FBCC: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x8022FBD0: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x8022FBD4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022FBD8: addiu       $a0, $a0, 0x61A
    ctx->r4 = ADD32(ctx->r4, 0X61A);
    // 0x8022FBDC: jal         0x8006036C
    // 0x8022FBE0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    func_8006036C_3B76C(rdram, ctx);
        goto after_3;
    // 0x8022FBE0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    after_3:
L_8022FBE4:
    // 0x8022FBE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022FBE8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022FBEC: jr          $ra
    // 0x8022FBF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022FBF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022FBF4: nop

    // 0x8022FBF8: nop

    // 0x8022FBFC: nop

;}
RECOMP_FUNC void func_80227C38_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227C38: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227C3C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227C40: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227C44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227C48: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x80227C4C: bne         $v0, $zero, L_80227C5C
    if (ctx->r2 != 0) {
        // 0x80227C50: nop
    
            goto L_80227C5C;
    }
    // 0x80227C50: nop

    // 0x80227C54: jal         0x80227CA4
    // 0x80227C58: nop

    func_80227CA4_ovl10(rdram, ctx);
        goto after_0;
    // 0x80227C58: nop

    after_0:
L_80227C5C:
    // 0x80227C5C: lbu         $v1, 0x7($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X7);
    // 0x80227C60: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227C64: bne         $v1, $v0, L_80227C84
    if (ctx->r3 != ctx->r2) {
        // 0x80227C68: nop
    
            goto L_80227C84;
    }
    // 0x80227C68: nop

    // 0x80227C6C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80227C70: jal         0x8005FA7C
    // 0x80227C74: addiu       $a0, $a0, -0x12AC
    ctx->r4 = ADD32(ctx->r4, -0X12AC);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_1;
    // 0x80227C74: addiu       $a0, $a0, -0x12AC
    ctx->r4 = ADD32(ctx->r4, -0X12AC);
    after_1:
    // 0x80227C78: lbu         $v0, 0x7($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X7);
    // 0x80227C7C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227C80: sb          $v0, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r2;
L_80227C84:
    // 0x80227C84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227C88: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227C8C: jr          $ra
    // 0x80227C90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227C90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023A3F0_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A3F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023A3F4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8023A3F8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023A3FC: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8023A400: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8023A404: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8023A408: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8023A40C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8023A410: jal         0x8009A3B4
    // 0x8023A414: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8023A414: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    after_0:
    // 0x8023A418: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8023A41C: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8023A420: jal         0x8009A3B4
    // 0x8023A424: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8023A424: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8023A428: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8023A42C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8023A430: jal         0x8009A3B4
    // 0x8023A434: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8023A434: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8023A438: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8023A43C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023A440: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8023A444: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023A448: lw          $v0, 0x1710($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1710);
    // 0x8023A44C: jalr        $v0
    // 0x8023A450: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x8023A450: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8023A454: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8023A458: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8023A45C: beq         $v0, $zero, L_8023A474
    if (ctx->r2 == 0) {
        // 0x8023A460: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023A474;
    }
    // 0x8023A460: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023A464: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x8023A468: addiu       $a2, $zero, 0x100
    ctx->r6 = ADD32(0, 0X100);
    // 0x8023A46C: jal         0x8003B564
    // 0x8023A470: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_4;
    // 0x8023A470: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_4:
L_8023A474:
    // 0x8023A474: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023A478: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8023A47C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x8023A480: jal         0x80047284
    // 0x8023A484: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_5;
    // 0x8023A484: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_5:
    // 0x8023A488: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8023A48C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023A490: jr          $ra
    // 0x8023A494: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023A494: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8024D02C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024D02C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8024D030: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8024D034: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8024D038: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8024D03C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8024D040: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x8024D044: sltiu       $v0, $v1, 0x7
    ctx->r2 = ctx->r3 < 0X7 ? 1 : 0;
    // 0x8024D048: beq         $v0, $zero, L_8024D12C
    if (ctx->r2 == 0) {
        // 0x8024D04C: andi        $v0, $v1, 0x3
        ctx->r2 = ctx->r3 & 0X3;
            goto L_8024D12C;
    }
    // 0x8024D04C: andi        $v0, $v1, 0x3
    ctx->r2 = ctx->r3 & 0X3;
    // 0x8024D050: bne         $v0, $zero, L_8024D110
    if (ctx->r2 != 0) {
        // 0x8024D054: nop
    
            goto L_8024D110;
    }
    // 0x8024D054: nop

    // 0x8024D058: jal         0x8004F144
    // 0x8024D05C: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8024D05C: nop

    after_0:
    // 0x8024D060: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8024D064: beq         $s0, $zero, L_8024D110
    if (ctx->r16 == 0) {
        // 0x8024D068: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8024D110;
    }
    // 0x8024D068: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8024D06C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8024D070: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x8024D074: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x8024D078: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x8024D07C: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x8024D080: lbu         $v1, 0xC($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XC);
    // 0x8024D084: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024D088: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x8024D08C: jal         0x800A3450
    // 0x8024D090: sb          $v1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x8024D090: sb          $v1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r3;
    after_1:
    // 0x8024D094: lbu         $v1, 0xE($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XE);
    // 0x8024D098: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8024D09C: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8024D0A0: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
    // 0x8024D0A4: lbu         $v0, 0xF($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XF);
    // 0x8024D0A8: jal         0x800A3450
    // 0x8024D0AC: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x8024D0AC: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    after_2:
    // 0x8024D0B0: lhu         $v1, 0x1C($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X1C);
    // 0x8024D0B4: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x8024D0B8: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8024D0BC: jal         0x800A3450
    // 0x8024D0C0: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x8024D0C0: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    after_3:
    // 0x8024D0C4: lui         $a0, 0x3D48
    ctx->r4 = S32(0X3D48 << 16);
    // 0x8024D0C8: lhu         $v1, 0x20($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X20);
    // 0x8024D0CC: ori         $a0, $a0, 0x4E
    ctx->r4 = ctx->r4 | 0X4E;
    // 0x8024D0D0: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x8024D0D4: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8024D0D8: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    // 0x8024D0DC: lhu         $v1, 0x1E($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X1E);
    // 0x8024D0E0: lui         $v0, 0x2E40
    ctx->r2 = S32(0X2E40 << 16);
    // 0x8024D0E4: ori         $v0, $v0, 0x4040
    ctx->r2 = ctx->r2 | 0X4040;
    // 0x8024D0E8: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x8024D0EC: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8024D0F0: sw          $a0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r4;
    // 0x8024D0F4: sb          $v0, 0x22($s0)
    MEM_B(0X22, ctx->r16) = ctx->r2;
    // 0x8024D0F8: sb          $zero, 0x23($s0)
    MEM_B(0X23, ctx->r16) = 0;
    // 0x8024D0FC: jal         0x800A3450
    // 0x8024D100: sh          $v1, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_4;
    // 0x8024D100: sh          $v1, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r3;
    after_4:
    // 0x8024D104: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x8024D108: addiu       $v0, $v0, 0xA0
    ctx->r2 = ADD32(ctx->r2, 0XA0);
    // 0x8024D10C: sh          $v0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r2;
L_8024D110:
    // 0x8024D110: jal         0x800A3450
    // 0x8024D114: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_5;
    // 0x8024D114: nop

    after_5:
    // 0x8024D118: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x8024D11C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8024D120: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024D124: j           L_8024D134
    // 0x8024D128: sb          $v1, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r3;
        goto L_8024D134;
    // 0x8024D128: sb          $v1, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r3;
L_8024D12C:
    // 0x8024D12C: jal         0x8004F5C4
    // 0x8024D130: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_6;
    // 0x8024D130: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
L_8024D134:
    // 0x8024D134: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8024D138: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8024D13C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8024D140: jr          $ra
    // 0x8024D144: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8024D144: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80245724_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80245724: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80245728: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8024572C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80245730: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80245734: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80245738: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8024573C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80245740: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x80245744: jal         0x8004D5D4
    // 0x80245748: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80245748: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x8024574C: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80245750: addiu       $v0, $v0, 0x20E0
    ctx->r2 = ADD32(ctx->r2, 0X20E0);
    // 0x80245754: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x80245758: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024575C: sb          $v0, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r2;
    // 0x80245760: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x80245764: jal         0x800A3450
    // 0x80245768: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x80245768: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    after_1:
    // 0x8024576C: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x80245770: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x80245774: addiu       $s1, $s0, 0xD0
    ctx->r17 = ADD32(ctx->r16, 0XD0);
    // 0x80245778: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8024577C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80245780: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80245784: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80245788: lui         $v0, 0x200
    ctx->r2 = S32(0X200 << 16);
    // 0x8024578C: addiu       $a2, $zero, -0x60
    ctx->r6 = ADD32(0, -0X60);
    // 0x80245790: sw          $v1, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r3;
    // 0x80245794: jal         0x800540BC
    // 0x80245798: sw          $v0, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r2;
    func_800540BC_2F4BC(rdram, ctx);
        goto after_2;
    // 0x80245798: sw          $v0, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r2;
    after_2:
    // 0x8024579C: sw          $zero, 0xF0($s0)
    MEM_W(0XF0, ctx->r16) = 0;
    // 0x802457A0: jal         0x800A3450
    // 0x802457A4: sw          $zero, 0xEC($s0)
    MEM_W(0XEC, ctx->r16) = 0;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x802457A4: sw          $zero, 0xEC($s0)
    MEM_W(0XEC, ctx->r16) = 0;
    after_3:
    // 0x802457A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802457AC: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x802457B0: jal         0x8003E934
    // 0x802457B4: sh          $v0, 0xE0($s0)
    MEM_H(0XE0, ctx->r16) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_4;
    // 0x802457B4: sh          $v0, 0xE0($s0)
    MEM_H(0XE0, ctx->r16) = ctx->r2;
    after_4:
    // 0x802457B8: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x802457BC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x802457C0: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x802457C4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802457C8: addiu       $v0, $v0, -0x82
    ctx->r2 = ADD32(ctx->r2, -0X82);
    // 0x802457CC: sh          $a0, 0xE2($s0)
    MEM_H(0XE2, ctx->r16) = ctx->r4;
    // 0x802457D0: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x802457D4: beq         $v0, $zero, L_802457EC
    if (ctx->r2 == 0) {
        // 0x802457D8: addu        $a1, $v1, $zero
        ctx->r5 = ADD32(ctx->r3, 0);
            goto L_802457EC;
    }
    // 0x802457D8: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x802457DC: addiu       $v0, $a0, -0x82
    ctx->r2 = ADD32(ctx->r4, -0X82);
    // 0x802457E0: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x802457E4: j           L_802457F0
    // 0x802457E8: addiu       $v0, $zero, 0x82
    ctx->r2 = ADD32(0, 0X82);
        goto L_802457F0;
    // 0x802457E8: addiu       $v0, $zero, 0x82
    ctx->r2 = ADD32(0, 0X82);
L_802457EC:
    // 0x802457EC: subu        $v0, $a1, $a0
    ctx->r2 = SUB32(ctx->r5, ctx->r4);
L_802457F0:
    // 0x802457F0: sh          $v0, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r2;
    // 0x802457F4: addiu       $v0, $zero, -0x82
    ctx->r2 = ADD32(0, -0X82);
    // 0x802457F8: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x802457FC: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80245800: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80245804: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80245808: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8024580C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80245810: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80245814: jr          $ra
    // 0x80245818: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80245818: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80236744_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236744: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80236748: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023674C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80236750: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80236754: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80236758: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8023675C: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x80236760: beq         $v0, $zero, L_80236850
    if (ctx->r2 == 0) {
        // 0x80236764: addiu       $s1, $s0, 0x328
        ctx->r17 = ADD32(ctx->r16, 0X328);
            goto L_80236850;
    }
    // 0x80236764: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x80236768: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8023676C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80236770: addu        $at, $at, $v0
    gpr jr_addend_80236778 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80236774: lw          $v0, 0x2F48($at)
    ctx->r2 = ADD32(ctx->r1, 0X2F48);
    // 0x80236778: jr          $v0
    // 0x8023677C: nop

    switch (jr_addend_80236778 >> 2) {
        case 0: goto L_80236780; break;
        case 1: goto L_802367B4; break;
        case 2: goto L_802367F0; break;
        case 3: goto L_80236808; break;
        case 4: goto L_80236830; break;
        default: switch_error(__func__, 0x80236778, 0x80252F48);
    }
    // 0x8023677C: nop

L_80236780:
    // 0x80236780: lw          $v0, 0x34($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X34);
    // 0x80236784: lbu         $v1, 0xF($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0XF);
    // 0x80236788: andi        $v0, $v1, 0x20
    ctx->r2 = ctx->r3 & 0X20;
    // 0x8023678C: beq         $v0, $zero, L_802367A8
    if (ctx->r2 == 0) {
        // 0x80236790: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802367A8;
    }
    // 0x80236790: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80236794: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80236798: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023679C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x802367A0: j           L_80236850
    // 0x802367A4: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_80236850;
    // 0x802367A4: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_802367A8:
    // 0x802367A8: andi        $v0, $v1, 0x10
    ctx->r2 = ctx->r3 & 0X10;
    // 0x802367AC: beq         $v0, $zero, L_80236850
    if (ctx->r2 == 0) {
        // 0x802367B0: nop
    
            goto L_80236850;
    }
    // 0x802367B0: nop

L_802367B4:
    // 0x802367B4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802367B8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802367BC: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x802367C0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802367C4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802367C8: lw          $v1, 0x34($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X34);
    // 0x802367CC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x802367D0: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x802367D4: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
    // 0x802367D8: lbu         $v0, 0xF($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XF);
    // 0x802367DC: addiu       $a0, $zero, 0xDF
    ctx->r4 = ADD32(0, 0XDF);
    // 0x802367E0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x802367E4: andi        $v0, $v0, 0xEF
    ctx->r2 = ctx->r2 & 0XEF;
    // 0x802367E8: jal         0x8002A33C
    // 0x802367EC: sb          $v0, 0xF($v1)
    MEM_B(0XF, ctx->r3) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x802367EC: sb          $v0, 0xF($v1)
    MEM_B(0XF, ctx->r3) = ctx->r2;
    after_0:
L_802367F0:
    // 0x802367F0: lw          $a0, 0x34($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X34);
    // 0x802367F4: lbu         $v1, 0xF($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XF);
    // 0x802367F8: andi        $v0, $v1, 0x10
    ctx->r2 = ctx->r3 & 0X10;
    // 0x802367FC: beq         $v0, $zero, L_80236850
    if (ctx->r2 == 0) {
        // 0x80236800: andi        $v0, $v1, 0xEF
        ctx->r2 = ctx->r3 & 0XEF;
            goto L_80236850;
    }
    // 0x80236800: andi        $v0, $v1, 0xEF
    ctx->r2 = ctx->r3 & 0XEF;
    // 0x80236804: sb          $v0, 0xF($a0)
    MEM_B(0XF, ctx->r4) = ctx->r2;
L_80236808:
    // 0x80236808: addiu       $a0, $zero, 0xE0
    ctx->r4 = ADD32(0, 0XE0);
    // 0x8023680C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80236810: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80236814: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80236818: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023681C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80236820: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80236824: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80236828: jal         0x8002A33C
    // 0x8023682C: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x8023682C: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
    after_1:
L_80236830:
    // 0x80236830: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80236834: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80236838: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8023683C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80236840: bgez        $v0, L_80236850
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80236844: nop
    
            goto L_80236850;
    }
    // 0x80236844: nop

    // 0x80236848: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x8023684C: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_80236850:
    // 0x80236850: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80236854: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80236858: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023685C: jr          $ra
    // 0x80236860: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80236860: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80236864: nop

    // 0x80236868: nop

    // 0x8023686C: nop

;}
RECOMP_FUNC void func_80227BDC_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227BDC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227BE0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80227BE4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227BE8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227BEC: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80227BF0: bne         $v0, $zero, L_80227C24
    if (ctx->r2 != 0) {
        // 0x80227BF4: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_80227C24;
    }
    // 0x80227BF4: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x80227BF8: lui         $s0, 0x801B
    ctx->r16 = S32(0X801B << 16);
    // 0x80227BFC: addiu       $s0, $s0, -0x2290
    ctx->r16 = ADD32(ctx->r16, -0X2290);
L_80227C00:
    // 0x80227C00: jal         0x8004F5C4
    // 0x80227C04: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x80227C04: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80227C08: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80227C0C: slti        $v0, $s1, 0x40
    ctx->r2 = SIGNED(ctx->r17) < 0X40 ? 1 : 0;
    // 0x80227C10: bne         $v0, $zero, L_80227C00
    if (ctx->r2 != 0) {
        // 0x80227C14: addiu       $s0, $s0, 0x58
        ctx->r16 = ADD32(ctx->r16, 0X58);
            goto L_80227C00;
    }
    // 0x80227C14: addiu       $s0, $s0, 0x58
    ctx->r16 = ADD32(ctx->r16, 0X58);
    // 0x80227C18: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80227C1C: jal         0x8005FA7C
    // 0x80227C20: addiu       $a0, $a0, -0x12C0
    ctx->r4 = ADD32(ctx->r4, -0X12C0);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_1;
    // 0x80227C20: addiu       $a0, $a0, -0x12C0
    ctx->r4 = ADD32(ctx->r4, -0X12C0);
    after_1:
L_80227C24:
    // 0x80227C24: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80227C28: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227C2C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227C30: jr          $ra
    // 0x80227C34: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80227C34: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022DC00_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DC00: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x8022DC04: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8022DC08: jr          $ra
    // 0x8022DC0C: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x8022DC0C: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_80245DF8_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80245DF8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80245DFC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80245E00: lb          $v0, 0xC($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XC);
    // 0x80245E04: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80245E08: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80245E0C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80245E10: lw          $v0, 0x2144($at)
    ctx->r2 = MEM_W(ctx->r1, 0X2144);
    // 0x80245E14: jalr        $v0
    // 0x80245E18: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80245E18: nop

    after_0:
    // 0x80245E1C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80245E20: jr          $ra
    // 0x80245E24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80245E24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
