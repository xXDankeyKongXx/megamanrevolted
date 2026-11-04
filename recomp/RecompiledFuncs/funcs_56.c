#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80228A90_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228A90: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80228A94: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228A98: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228A9C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80228AA0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80228AA4: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80228AA8: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x80228AAC: beq         $v0, $zero, L_80228CC4
    if (ctx->r2 == 0) {
        // 0x80228AB0: addiu       $s1, $s0, 0x328
        ctx->r17 = ADD32(ctx->r16, 0X328);
            goto L_80228CC4;
    }
    // 0x80228AB0: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x80228AB4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80228AB8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80228ABC: addu        $at, $at, $v0
    gpr jr_addend_80228AC4 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80228AC0: lw          $v0, 0x1540($at)
    ctx->r2 = ADD32(ctx->r1, 0X1540);
    // 0x80228AC4: jr          $v0
    // 0x80228AC8: nop

    switch (jr_addend_80228AC4 >> 2) {
        case 0: goto L_80228ACC; break;
        case 1: goto L_80228AF4; break;
        case 2: goto L_80228B78; break;
        case 3: goto L_80228BB8; break;
        case 4: goto L_80228BF4; break;
        default: switch_error(__func__, 0x80228AC4, 0x80241540);
    }
    // 0x80228AC8: nop

L_80228ACC:
    // 0x80228ACC: addiu       $a0, $zero, 0xB1
    ctx->r4 = ADD32(0, 0XB1);
    // 0x80228AD0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80228AD4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228AD8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80228ADC: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
    // 0x80228AE0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80228AE4: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x80228AE8: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80228AEC: jal         0x8002A33C
    // 0x80228AF0: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x80228AF0: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
    after_0:
L_80228AF4:
    // 0x80228AF4: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80228AF8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80228AFC: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80228B00: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228B04: bgez        $v0, L_80228B30
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80228B08: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80228B30;
    }
    // 0x80228B08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228B0C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80228B10: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80228B14: lh          $v0, 0x6($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X6);
    // 0x80228B18: beq         $v0, $zero, L_80228B28
    if (ctx->r2 == 0) {
        // 0x80228B1C: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_80228B28;
    }
    // 0x80228B1C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80228B20: j           L_80228B78
    // 0x80228B24: sh          $zero, 0x4($s1)
    MEM_H(0X4, ctx->r17) = 0;
        goto L_80228B78;
    // 0x80228B24: sh          $zero, 0x4($s1)
    MEM_H(0X4, ctx->r17) = 0;
L_80228B28:
    // 0x80228B28: j           L_80228B78
    // 0x80228B2C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
        goto L_80228B78;
    // 0x80228B2C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_80228B30:
    // 0x80228B30: addiu       $a1, $zero, -0x70
    ctx->r5 = ADD32(0, -0X70);
L_80228B34:
    // 0x80228B34: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80228B38: jal         0x8004DA90
    // 0x80228B3C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x80228B3C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x80228B40: jal         0x80040F30
    // 0x80228B44: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_2;
    // 0x80228B44: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80228B48: jal         0x8003E934
    // 0x80228B4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_3;
    // 0x80228B4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80228B50: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80228B54: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x80228B58: lh          $v1, 0x2E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2E);
    // 0x80228B5C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228B60: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80228B64: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x80228B68: bgez        $v0, L_80228C88
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80228B6C: slti        $v0, $v0, 0x21
        ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
            goto L_80228C88;
    }
    // 0x80228B6C: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x80228B70: j           L_80228C9C
    // 0x80228B74: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
        goto L_80228C9C;
    // 0x80228B74: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
L_80228B78:
    // 0x80228B78: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80228B7C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80228B80: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80228B84: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228B88: bgtz        $v0, L_80228CC4
    if (SIGNED(ctx->r2) > 0) {
        // 0x80228B8C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80228CC4;
    }
    // 0x80228B8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228B90: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x80228B94: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x80228B98: sb          $v1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r3;
    // 0x80228B9C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228BA0: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x80228BA4: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x80228BA8: jal         0x802299C0
    // 0x80228BAC: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    func_802299C0_ovl4(rdram, ctx);
        goto after_4;
    // 0x80228BAC: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    after_4:
    // 0x80228BB0: j           L_80228CC4
    // 0x80228BB4: nop

        goto L_80228CC4;
    // 0x80228BB4: nop

L_80228BB8:
    // 0x80228BB8: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80228BBC: addiu       $a1, $v0, -0x1
    ctx->r5 = ADD32(ctx->r2, -0X1);
    // 0x80228BC0: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
    // 0x80228BC4: bgez        $v0, L_80228BE0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80228BC8: sh          $a1, 0x4($s1)
        MEM_H(0X4, ctx->r17) = ctx->r5;
            goto L_80228BE0;
    }
    // 0x80228BC8: sh          $a1, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r5;
    // 0x80228BCC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80228BD0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80228BD4: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80228BD8: j           L_80228BF4
    // 0x80228BDC: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
        goto L_80228BF4;
    // 0x80228BDC: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_80228BE0:
    // 0x80228BE0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228BE4: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    // 0x80228BE8: sll         $a1, $a1, 21
    ctx->r5 = S32(ctx->r5 << 21);
    // 0x80228BEC: j           L_80228B34
    // 0x80228BF0: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
        goto L_80228B34;
    // 0x80228BF0: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
L_80228BF4:
    // 0x80228BF4: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80228BF8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80228BFC: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80228C00: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228C04: bgez        $v0, L_80228C48
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80228C08: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80228C48;
    }
    // 0x80228C08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228C0C: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80228C10: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80228C14: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x80228C18: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80228C1C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80228C20: lh          $v1, 0x6($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X6);
    // 0x80228C24: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80228C28: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x80228C2C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80228C30: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80228C34: lbu         $v1, 0xC($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0XC);
    // 0x80228C38: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80228C3C: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x80228C40: j           L_80228CC4
    // 0x80228C44: sh          $v1, 0x34($s1)
    MEM_H(0X34, ctx->r17) = ctx->r3;
        goto L_80228CC4;
    // 0x80228C44: sh          $v1, 0x34($s1)
    MEM_H(0X34, ctx->r17) = ctx->r3;
L_80228C48:
    // 0x80228C48: addiu       $a1, $zero, 0xE0
    ctx->r5 = ADD32(0, 0XE0);
    // 0x80228C4C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80228C50: jal         0x8004DA90
    // 0x80228C54: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_5;
    // 0x80228C54: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_5:
    // 0x80228C58: jal         0x80040F30
    // 0x80228C5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_6;
    // 0x80228C5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x80228C60: jal         0x8003E934
    // 0x80228C64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_7;
    // 0x80228C64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x80228C68: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80228C6C: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x80228C70: lh          $v1, 0x2E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2E);
    // 0x80228C74: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228C78: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80228C7C: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x80228C80: bltz        $v0, L_80228C98
    if (SIGNED(ctx->r2) < 0) {
        // 0x80228C84: slti        $v0, $v0, 0x21
        ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
            goto L_80228C98;
    }
    // 0x80228C84: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
L_80228C88:
    // 0x80228C88: beq         $v0, $zero, L_80228CA8
    if (ctx->r2 == 0) {
        // 0x80228C8C: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80228CA8;
    }
    // 0x80228C8C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80228C90: j           L_80228CC4
    // 0x80228C94: nop

        goto L_80228CC4;
    // 0x80228C94: nop

L_80228C98:
    // 0x80228C98: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
L_80228C9C:
    // 0x80228C9C: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x80228CA0: bne         $v0, $zero, L_80228CC4
    if (ctx->r2 != 0) {
        // 0x80228CA4: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80228CC4;
    }
    // 0x80228CA4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_80228CA8:
    // 0x80228CA8: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x80228CAC: jal         0x8009A3B4
    // 0x80228CB0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x80228CB0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_8:
    // 0x80228CB4: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80228CB8: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x80228CBC: jal         0x8009A3B4
    // 0x80228CC0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_9;
    // 0x80228CC0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_9:
L_80228CC4:
    // 0x80228CC4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80228CC8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80228CCC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228CD0: jr          $ra
    // 0x80228CD4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80228CD4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802258D4_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802258D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802258D8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802258DC: jal         0x8005FB90
    // 0x802258E0: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_0;
    // 0x802258E0: nop

    after_0:
    // 0x802258E4: jal         0x80060018
    // 0x802258E8: nop

    func_80060018_3B418(rdram, ctx);
        goto after_1;
    // 0x802258E8: nop

    after_1:
    // 0x802258EC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802258F0: jr          $ra
    // 0x802258F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802258F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B01C_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B01C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022B020: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B024: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B028: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022B02C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022B030: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022B034: beq         $v1, $zero, L_8022B050
    if (ctx->r3 == 0) {
        // 0x8022B038: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_8022B050;
    }
    // 0x8022B038: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022B03C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B040: beq         $v1, $v0, L_8022B064
    if (ctx->r3 == ctx->r2) {
        // 0x8022B044: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022B064;
    }
    // 0x8022B044: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022B048: j           L_8022B0C4
    // 0x8022B04C: nop

        goto L_8022B0C4;
    // 0x8022B04C: nop

L_8022B050:
    // 0x8022B050: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B054: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022B058: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022B05C: sh          $zero, 0x350($s0)
    MEM_H(0X350, ctx->r16) = 0;
    // 0x8022B060: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_8022B064:
    // 0x8022B064: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022B068: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022B06C: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022B070: jal         0x8004F820
    // 0x8022B074: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022B074: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_0:
    // 0x8022B078: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022B07C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022B080: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022B084: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B088: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022B08C: bltz        $v0, L_8022B0A8
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022B090: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8022B0A8;
    }
    // 0x8022B090: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022B094: slti        $v0, $v0, 0x20
    ctx->r2 = SIGNED(ctx->r2) < 0X20 ? 1 : 0;
    // 0x8022B098: beq         $v0, $zero, L_8022B0C4
    if (ctx->r2 == 0) {
        // 0x8022B09C: nop
    
            goto L_8022B0C4;
    }
    // 0x8022B09C: nop

    // 0x8022B0A0: j           L_8022B0B8
    // 0x8022B0A4: nop

        goto L_8022B0B8;
    // 0x8022B0A4: nop

L_8022B0A8:
    // 0x8022B0A8: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8022B0AC: slti        $v0, $v0, 0x20
    ctx->r2 = SIGNED(ctx->r2) < 0X20 ? 1 : 0;
    // 0x8022B0B0: beq         $v0, $zero, L_8022B0C4
    if (ctx->r2 == 0) {
        // 0x8022B0B4: nop
    
            goto L_8022B0C4;
    }
    // 0x8022B0B4: nop

L_8022B0B8:
    // 0x8022B0B8: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022B0BC: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022B0C0: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8022B0C4:
    // 0x8022B0C4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022B0C8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022B0CC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B0D0: jr          $ra
    // 0x8022B0D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022B0D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802258F8_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802258F8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802258FC: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x80225900: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80225904: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x80225908: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8022590C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80225910: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80225914: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80225918: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022591C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80225920: sw          $zero, 0x690($at)
    MEM_W(0X690, ctx->r1) = 0;
    // 0x80225924: bne         $a0, $zero, L_802259BC
    if (ctx->r4 != 0) {
        // 0x80225928: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_802259BC;
    }
    // 0x80225928: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x8022592C: lui         $s5, 0x8024
    ctx->r21 = S32(0X8024 << 16);
    // 0x80225930: addiu       $s5, $s5, 0x698
    ctx->r21 = ADD32(ctx->r21, 0X698);
    // 0x80225934: lui         $s4, 0x8024
    ctx->r20 = S32(0X8024 << 16);
    // 0x80225938: addiu       $s4, $s4, 0x1920
    ctx->r20 = ADD32(ctx->r20, 0X1920);
    // 0x8022593C: lui         $s3, 0x801C
    ctx->r19 = S32(0X801C << 16);
    // 0x80225940: addiu       $s3, $s3, -0x3A2C
    ctx->r19 = ADD32(ctx->r19, -0X3A2C);
    // 0x80225944: lui         $s2, 0x8000
    ctx->r18 = S32(0X8000 << 16);
    // 0x80225948: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
L_8022594C:
    // 0x8022594C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80225950: sll         $a0, $v0, 2
    ctx->r4 = S32(ctx->r2 << 2);
    // 0x80225954: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80225958: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x8022595C: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x80225960: addu        $s0, $s0, $a0
    ctx->r16 = ADD32(ctx->r16, ctx->r4);
    // 0x80225964: lbu         $s0, 0x698($s0)
    ctx->r16 = MEM_BU(ctx->r16, 0X698);
    // 0x80225968: jal         0x8005FA7C
    // 0x8022596C: addu        $a0, $a0, $s5
    ctx->r4 = ADD32(ctx->r4, ctx->r21);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_0;
    // 0x8022596C: addu        $a0, $a0, $s5
    ctx->r4 = ADD32(ctx->r4, ctx->r21);
    after_0:
    // 0x80225970: sll         $v1, $s0, 2
    ctx->r3 = S32(ctx->r16 << 2);
    // 0x80225974: addu        $v0, $v1, $s3
    ctx->r2 = ADD32(ctx->r3, ctx->r19);
    // 0x80225978: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x8022597C: addu        $v1, $v1, $s4
    ctx->r3 = ADD32(ctx->r3, ctx->r20);
    // 0x80225980: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
    // 0x80225984: lbu         $v0, 0x6($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X6);
    // 0x80225988: srlv        $s0, $s2, $s0
    ctx->r16 = S32(U32(ctx->r18) >> (ctx->r16 & 31));
    // 0x8022598C: andi        $v0, $v0, 0xDF
    ctx->r2 = ctx->r2 & 0XDF;
    // 0x80225990: sb          $v0, 0x6($a0)
    MEM_B(0X6, ctx->r4) = ctx->r2;
    // 0x80225994: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80225998: lw          $v1, 0x690($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X690);
    // 0x8022599C: addiu       $v0, $s1, 0x1
    ctx->r2 = ADD32(ctx->r17, 0X1);
    // 0x802259A0: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x802259A4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802259A8: or          $v1, $v1, $s0
    ctx->r3 = ctx->r3 | ctx->r16;
    // 0x802259AC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802259B0: sw          $v1, 0x690($at)
    MEM_W(0X690, ctx->r1) = ctx->r3;
    // 0x802259B4: blez        $v0, L_8022594C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x802259B8: sll         $v0, $s1, 16
        ctx->r2 = S32(ctx->r17 << 16);
            goto L_8022594C;
    }
    // 0x802259B8: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
L_802259BC:
    // 0x802259BC: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x802259C0: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x802259C4: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x802259C8: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x802259CC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802259D0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802259D4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802259D8: jr          $ra
    // 0x802259DC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x802259DC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022B410_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B410: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8022B414: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8022B418: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8022B41C: addiu       $a0, $s2, 0x2C
    ctx->r4 = ADD32(ctx->r18, 0X2C);
    // 0x8022B420: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x8022B424: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x8022B428: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x8022B42C: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x8022B430: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x8022B434: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x8022B438: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x8022B43C: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8022B440: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022B444: lbu         $v0, 0xAC($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XAC);
    // 0x8022B448: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x8022B44C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022B450: jal         0x8009A3B4
    // 0x8022B454: sb          $v0, 0xAD($s2)
    MEM_B(0XAD, ctx->r18) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022B454: sb          $v0, 0xAD($s2)
    MEM_B(0XAD, ctx->r18) = ctx->r2;
    after_0:
    // 0x8022B458: addiu       $a0, $s2, 0x34
    ctx->r4 = ADD32(ctx->r18, 0X34);
    // 0x8022B45C: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    // 0x8022B460: jal         0x8009A3B4
    // 0x8022B464: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022B464: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022B468: addiu       $a0, $s2, 0x5C
    ctx->r4 = ADD32(ctx->r18, 0X5C);
    // 0x8022B46C: addiu       $a1, $s2, 0x54
    ctx->r5 = ADD32(ctx->r18, 0X54);
    // 0x8022B470: jal         0x8009A3B4
    // 0x8022B474: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022B474: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022B478: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022B47C: jal         0x800A3450
    // 0x8022B480: sh          $v0, 0x15E($s2)
    MEM_H(0X15E, ctx->r18) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x8022B480: sh          $v0, 0x15E($s2)
    MEM_H(0X15E, ctx->r18) = ctx->r2;
    after_3:
    // 0x8022B484: lbu         $v1, 0x8($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X8);
    // 0x8022B488: sh          $v0, 0x32A($s2)
    MEM_H(0X32A, ctx->r18) = ctx->r2;
    // 0x8022B48C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022B490: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022B494: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022B498: lw          $v0, 0x860($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X860);
    // 0x8022B49C: jalr        $v0
    // 0x8022B4A0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x8022B4A0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_4:
    // 0x8022B4A4: addiu       $a0, $s2, 0x35C
    ctx->r4 = ADD32(ctx->r18, 0X35C);
    // 0x8022B4A8: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8022B4AC: addiu       $a1, $a1, -0x3D98
    ctx->r5 = ADD32(ctx->r5, -0X3D98);
    // 0x8022B4B0: jal         0x8003BD00
    // 0x8022B4B4: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_8003BD00_17100(rdram, ctx);
        goto after_5;
    // 0x8022B4B4: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_5:
    // 0x8022B4B8: jal         0x80051248
    // 0x8022B4BC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_80051248_2C648(rdram, ctx);
        goto after_6;
    // 0x8022B4BC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_6:
    // 0x8022B4C0: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x8022B4C4: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022B4C8: beq         $v0, $zero, L_8022B4E4
    if (ctx->r2 == 0) {
        // 0x8022B4CC: addiu       $s6, $s2, 0x328
        ctx->r22 = ADD32(ctx->r18, 0X328);
            goto L_8022B4E4;
    }
    // 0x8022B4CC: addiu       $s6, $s2, 0x328
    ctx->r22 = ADD32(ctx->r18, 0X328);
    // 0x8022B4D0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022B4D4: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x8022B4D8: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8022B4DC: jal         0x8003B564
    // 0x8022B4E0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_7;
    // 0x8022B4E0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_7:
L_8022B4E4:
    // 0x8022B4E4: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x8022B4E8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022B4EC: beql        $v0, $zero, L_8022B6A8
    if (ctx->r2 == 0) {
        // 0x8022B4F0: sw          $zero, 0x14($s6)
        MEM_W(0X14, ctx->r22) = 0;
            goto L_8022B6A8;
    }
    goto skip_0;
    // 0x8022B4F0: sw          $zero, 0x14($s6)
    MEM_W(0X14, ctx->r22) = 0;
    skip_0:
    // 0x8022B4F4: lhu         $v0, 0x328($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X328);
    // 0x8022B4F8: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x8022B4FC: beq         $v0, $zero, L_8022B554
    if (ctx->r2 == 0) {
        // 0x8022B500: addiu       $s0, $s2, 0x334
        ctx->r16 = ADD32(ctx->r18, 0X334);
            goto L_8022B554;
    }
    // 0x8022B500: addiu       $s0, $s2, 0x334
    ctx->r16 = ADD32(ctx->r18, 0X334);
    // 0x8022B504: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B508: addiu       $a1, $s2, 0x188
    ctx->r5 = ADD32(ctx->r18, 0X188);
    // 0x8022B50C: jal         0x8009A3B4
    // 0x8022B510: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x8022B510: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_8:
    // 0x8022B514: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B518: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x8022B51C: lbu         $v1, 0x1($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X1);
    // 0x8022B520: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022B524: addiu       $v0, $s2, 0x33C
    ctx->r2 = ADD32(ctx->r18, 0X33C);
    // 0x8022B528: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022B52C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x8022B530: lhu         $v1, 0x330($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X330);
    // 0x8022B534: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8022B538: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8022B53C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8022B540: lui         $v0, 0x488
    ctx->r2 = S32(0X488 << 16);
    // 0x8022B544: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8022B548: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8022B54C: jal         0x80051E18
    // 0x8022B550: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_9;
    // 0x8022B550: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_9:
L_8022B554:
    // 0x8022B554: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x8022B558: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022B55C: beql        $v0, $zero, L_8022B6A8
    if (ctx->r2 == 0) {
        // 0x8022B560: sw          $zero, 0x14($s6)
        MEM_W(0X14, ctx->r22) = 0;
            goto L_8022B6A8;
    }
    goto skip_1;
    // 0x8022B560: sw          $zero, 0x14($s6)
    MEM_W(0X14, ctx->r22) = 0;
    skip_1:
    // 0x8022B564: lbu         $v1, 0xF($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0XF);
    // 0x8022B568: andi        $v0, $v1, 0x40
    ctx->r2 = ctx->r3 & 0X40;
    // 0x8022B56C: bnel        $v0, $zero, L_8022B6A8
    if (ctx->r2 != 0) {
        // 0x8022B570: sw          $zero, 0x14($s6)
        MEM_W(0X14, ctx->r22) = 0;
            goto L_8022B6A8;
    }
    goto skip_2;
    // 0x8022B570: sw          $zero, 0x14($s6)
    MEM_W(0X14, ctx->r22) = 0;
    skip_2:
    // 0x8022B574: andi        $v0, $v1, 0x2
    ctx->r2 = ctx->r3 & 0X2;
    // 0x8022B578: bne         $v0, $zero, L_8022B594
    if (ctx->r2 != 0) {
        // 0x8022B57C: andi        $v0, $v1, 0x1
        ctx->r2 = ctx->r3 & 0X1;
            goto L_8022B594;
    }
    // 0x8022B57C: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x8022B580: lw          $a0, 0x374($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X374);
    // 0x8022B584: jal         0x80225BE0
    // 0x8022B588: nop

    func_80225BE0_ovl4(rdram, ctx);
        goto after_10;
    // 0x8022B588: nop

    after_10:
    // 0x8022B58C: lbu         $v1, 0xF($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0XF);
    // 0x8022B590: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
L_8022B594:
    // 0x8022B594: beq         $v0, $zero, L_8022B5C0
    if (ctx->r2 == 0) {
        // 0x8022B598: andi        $v0, $v1, 0x4
        ctx->r2 = ctx->r3 & 0X4;
            goto L_8022B5C0;
    }
    // 0x8022B598: andi        $v0, $v1, 0x4
    ctx->r2 = ctx->r3 & 0X4;
    // 0x8022B59C: bne         $v0, $zero, L_8022B5B4
    if (ctx->r2 != 0) {
        // 0x8022B5A0: nop
    
            goto L_8022B5B4;
    }
    // 0x8022B5A0: nop

    // 0x8022B5A4: lw          $v0, 0x378($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X378);
    // 0x8022B5A8: sb          $zero, 0x9($v0)
    MEM_B(0X9, ctx->r2) = 0;
    // 0x8022B5AC: lw          $v0, 0x37C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X37C);
    // 0x8022B5B0: sb          $zero, 0x9($v0)
    MEM_B(0X9, ctx->r2) = 0;
L_8022B5B4:
    // 0x8022B5B4: lbu         $v0, 0xF($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XF);
    // 0x8022B5B8: andi        $v0, $v0, 0xFE
    ctx->r2 = ctx->r2 & 0XFE;
    // 0x8022B5BC: sb          $v0, 0xF($s2)
    MEM_B(0XF, ctx->r18) = ctx->r2;
L_8022B5C0:
    // 0x8022B5C0: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x8022B5C4: lui         $fp, 0x8024
    ctx->r30 = S32(0X8024 << 16);
    // 0x8022B5C8: addiu       $fp, $fp, 0x17F0
    ctx->r30 = ADD32(ctx->r30, 0X17F0);
    // 0x8022B5CC: addiu       $s5, $s2, 0x14
    ctx->r21 = ADD32(ctx->r18, 0X14);
    // 0x8022B5D0: lui         $s7, 0x8024
    ctx->r23 = S32(0X8024 << 16);
    // 0x8022B5D4: addiu       $s7, $s7, 0x17F8
    ctx->r23 = ADD32(ctx->r23, 0X17F8);
    // 0x8022B5D8: addiu       $s4, $s2, 0x1C
    ctx->r20 = ADD32(ctx->r18, 0X1C);
L_8022B5DC:
    // 0x8022B5DC: addu        $a0, $fp, $zero
    ctx->r4 = ADD32(ctx->r30, 0);
    // 0x8022B5E0: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x8022B5E4: jal         0x8009A3B4
    // 0x8022B5E8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_11;
    // 0x8022B5E8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_11:
    // 0x8022B5EC: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    // 0x8022B5F0: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x8022B5F4: jal         0x8009A3B4
    // 0x8022B5F8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_12;
    // 0x8022B5F8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_12:
    // 0x8022B5FC: lhu         $s1, 0x56($s2)
    ctx->r17 = MEM_HU(ctx->r18, 0X56);
    // 0x8022B600: lhu         $v0, 0x46($s6)
    ctx->r2 = MEM_HU(ctx->r22, 0X46);
    // 0x8022B604: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022B608: sll         $s0, $s3, 16
    ctx->r16 = S32(ctx->r19 << 16);
    // 0x8022B60C: sra         $s0, $s0, 16
    ctx->r16 = S32(SIGNED(ctx->r16) >> 16);
    // 0x8022B610: lui         $t0, 0x8024
    ctx->r8 = S32(0X8024 << 16);
    // 0x8022B614: addiu       $t0, $t0, 0x884
    ctx->r8 = ADD32(ctx->r8, 0X884);
    // 0x8022B618: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x8022B61C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022B620: sh          $v0, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r2;
    // 0x8022B624: sll         $v0, $s0, 1
    ctx->r2 = S32(ctx->r16 << 1);
    // 0x8022B628: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x8022B62C: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x8022B630: addiu       $a2, $zero, -0x8A0
    ctx->r6 = ADD32(0, -0X8A0);
    // 0x8022B634: jal         0x8004DA90
    // 0x8022B638: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_13;
    // 0x8022B638: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_13:
    // 0x8022B63C: sll         $s0, $s0, 2
    ctx->r16 = S32(ctx->r16 << 2);
    // 0x8022B640: addu        $s0, $s0, $s6
    ctx->r16 = ADD32(ctx->r16, ctx->r22);
    // 0x8022B644: lw          $v1, 0x50($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X50);
    // 0x8022B648: lhu         $v0, 0x14($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X14);
    // 0x8022B64C: sh          $v0, 0x1C($v1)
    MEM_H(0X1C, ctx->r3) = ctx->r2;
    // 0x8022B650: lw          $v1, 0x50($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X50);
    // 0x8022B654: lhu         $v0, 0x16($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X16);
    // 0x8022B658: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x8022B65C: sh          $v0, 0x1E($v1)
    MEM_H(0X1E, ctx->r3) = ctx->r2;
    // 0x8022B660: lw          $v1, 0x50($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X50);
    // 0x8022B664: lhu         $v0, 0x18($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X18);
    // 0x8022B668: addu        $a1, $fp, $zero
    ctx->r5 = ADD32(ctx->r30, 0);
    // 0x8022B66C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022B670: jal         0x8009A3B4
    // 0x8022B674: sh          $v0, 0x20($v1)
    MEM_H(0X20, ctx->r3) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_14;
    // 0x8022B674: sh          $v0, 0x20($v1)
    MEM_H(0X20, ctx->r3) = ctx->r2;
    after_14:
    // 0x8022B678: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x8022B67C: addu        $a1, $s7, $zero
    ctx->r5 = ADD32(ctx->r23, 0);
    // 0x8022B680: jal         0x8009A3B4
    // 0x8022B684: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_15;
    // 0x8022B684: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_15:
    // 0x8022B688: addiu       $v0, $s3, 0x1
    ctx->r2 = ADD32(ctx->r19, 0X1);
    // 0x8022B68C: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x8022B690: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B694: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022B698: slti        $v0, $v0, 0x2
    ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x8022B69C: bne         $v0, $zero, L_8022B5DC
    if (ctx->r2 != 0) {
        // 0x8022B6A0: sh          $s1, 0x56($s2)
        MEM_H(0X56, ctx->r18) = ctx->r17;
            goto L_8022B5DC;
    }
    // 0x8022B6A0: sh          $s1, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r17;
    // 0x8022B6A4: sw          $zero, 0x14($s6)
    MEM_W(0X14, ctx->r22) = 0;
L_8022B6A8:
    // 0x8022B6A8: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x8022B6AC: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x8022B6B0: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x8022B6B4: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x8022B6B8: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x8022B6BC: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x8022B6C0: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x8022B6C4: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8022B6C8: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022B6CC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022B6D0: jr          $ra
    // 0x8022B6D4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x8022B6D4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_802324EC_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802324EC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802324F0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802324F4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802324F8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802324FC: addiu       $s2, $s0, 0x14
    ctx->r18 = ADD32(ctx->r16, 0X14);
    // 0x80232500: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80232504: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80232508: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023250C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80232510: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80232514: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x80232518: jal         0x8004F820
    // 0x8023251C: addiu       $a3, $zero, 0x34
    ctx->r7 = ADD32(0, 0X34);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8023251C: addiu       $a3, $zero, 0x34
    ctx->r7 = ADD32(0, 0X34);
    after_0:
    // 0x80232520: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80232524: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80232528: lbu         $a0, 0xA4($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA4);
    // 0x8023252C: addu        $v1, $v1, $s1
    ctx->r3 = ADD32(ctx->r3, ctx->r17);
    // 0x80232530: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80232534: xori        $v0, $a0, 0x5
    ctx->r2 = ctx->r4 ^ 0X5;
    // 0x80232538: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8023253C: xori        $a0, $a0, 0x14
    ctx->r4 = ctx->r4 ^ 0X14;
    // 0x80232540: sltiu       $a0, $a0, 0x1
    ctx->r4 = ctx->r4 < 0X1 ? 1 : 0;
    // 0x80232544: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x80232548: beq         $v0, $zero, L_8023255C
    if (ctx->r2 == 0) {
        // 0x8023254C: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8023255C;
    }
    // 0x8023254C: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80232550: addiu       $a0, $zero, 0x1B6
    ctx->r4 = ADD32(0, 0X1B6);
    // 0x80232554: jal         0x8002A33C
    // 0x80232558: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x80232558: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_1:
L_8023255C:
    // 0x8023255C: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x80232560: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80232564: bltzl       $v0, L_80232580
    if (SIGNED(ctx->r2) < 0) {
        // 0x80232568: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_80232580;
    }
    goto skip_0;
    // 0x80232568: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_0:
    // 0x8023256C: slti        $v0, $v0, 0x34
    ctx->r2 = SIGNED(ctx->r2) < 0X34 ? 1 : 0;
    // 0x80232570: beq         $v0, $zero, L_802325A0
    if (ctx->r2 == 0) {
        // 0x80232574: nop
    
            goto L_802325A0;
    }
    // 0x80232574: nop

    // 0x80232578: j           L_8023258C
    // 0x8023257C: nop

        goto L_8023258C;
    // 0x8023257C: nop

L_80232580:
    // 0x80232580: slti        $v0, $v0, 0x34
    ctx->r2 = SIGNED(ctx->r2) < 0X34 ? 1 : 0;
    // 0x80232584: beq         $v0, $zero, L_802325A0
    if (ctx->r2 == 0) {
        // 0x80232588: nop
    
            goto L_802325A0;
    }
    // 0x80232588: nop

L_8023258C:
    // 0x8023258C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80232590: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x80232594: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x80232598: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023259C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_802325A0:
    // 0x802325A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802325A4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802325A8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802325AC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802325B0: jr          $ra
    // 0x802325B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802325B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802352E4_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802352E4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802352E8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802352EC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802352F0: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x802352F4: sw          $fp, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r30;
    // 0x802352F8: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x802352FC: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x80235300: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x80235304: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80235308: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8023530C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80235310: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80235314: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x80235318: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x8023531C: beq         $v0, $zero, L_80235564
    if (ctx->r2 == 0) {
        // 0x80235320: addiu       $s0, $s1, 0x4E0
        ctx->r16 = ADD32(ctx->r17, 0X4E0);
            goto L_80235564;
    }
    // 0x80235320: addiu       $s0, $s1, 0x4E0
    ctx->r16 = ADD32(ctx->r17, 0X4E0);
    // 0x80235324: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80235328: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023532C: addu        $at, $at, $v0
    gpr jr_addend_80235334 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80235330: lw          $v0, 0x16A0($at)
    ctx->r2 = ADD32(ctx->r1, 0X16A0);
    // 0x80235334: jr          $v0
    // 0x80235338: nop

    switch (jr_addend_80235334 >> 2) {
        case 0: goto L_8023533C; break;
        case 1: goto L_80235364; break;
        case 2: goto L_802353AC; break;
        case 3: goto L_802353E8; break;
        case 4: goto L_802354DC; break;
        case 5: goto L_8023550C; break;
        default: switch_error(__func__, 0x80235334, 0x802416A0);
    }
    // 0x80235338: nop

L_8023533C:
    // 0x8023533C: addiu       $a0, $zero, 0xBF
    ctx->r4 = ADD32(0, 0XBF);
    // 0x80235340: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x80235344: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80235348: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x8023534C: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x80235350: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x80235354: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x80235358: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x8023535C: jal         0x8002A33C
    // 0x80235360: sh          $zero, 0x8($s0)
    MEM_H(0X8, ctx->r16) = 0;
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x80235360: sh          $zero, 0x8($s0)
    MEM_H(0X8, ctx->r16) = 0;
    after_0:
L_80235364:
    // 0x80235364: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x80235368: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023536C: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x80235370: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80235374: bgez        $v0, L_80235564
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80235378: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80235564;
    }
    // 0x80235378: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023537C: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x80235380: lw          $a0, 0x34($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X34);
    // 0x80235384: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80235388: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8023538C: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x80235390: sb          $v1, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r3;
    // 0x80235394: lw          $v0, 0x38($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X38);
    // 0x80235398: sb          $v1, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r3;
    // 0x8023539C: lw          $v0, 0x34($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X34);
    // 0x802353A0: sh          $zero, 0xA($v0)
    MEM_H(0XA, ctx->r2) = 0;
    // 0x802353A4: lw          $v0, 0x38($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X38);
    // 0x802353A8: sh          $zero, 0xA($v0)
    MEM_H(0XA, ctx->r2) = 0;
L_802353AC:
    // 0x802353AC: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x802353B0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802353B4: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x802353B8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802353BC: bgez        $v0, L_80235564
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802353C0: addiu       $a0, $zero, 0xC0
        ctx->r4 = ADD32(0, 0XC0);
            goto L_80235564;
    }
    // 0x802353C0: addiu       $a0, $zero, 0xC0
    ctx->r4 = ADD32(0, 0XC0);
    // 0x802353C4: lbu         $v0, 0xAC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XAC);
    // 0x802353C8: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x802353CC: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x802353D0: sb          $v1, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r3;
    // 0x802353D4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802353D8: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x802353DC: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x802353E0: jal         0x8002A33C
    // 0x802353E4: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x802353E4: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    after_1:
L_802353E8:
    // 0x802353E8: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x802353EC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802353F0: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x802353F4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802353F8: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802353FC: bgez        $v1, L_80235418
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80235400: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80235418;
    }
    // 0x80235400: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80235404: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80235408: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x8023540C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80235410: j           L_802354DC
    // 0x80235414: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
        goto L_802354DC;
    // 0x80235414: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_80235418:
    // 0x80235418: bne         $v1, $v0, L_80235564
    if (ctx->r3 != ctx->r2) {
        // 0x8023541C: addu        $s3, $zero, $zero
        ctx->r19 = ADD32(0, 0);
            goto L_80235564;
    }
    // 0x8023541C: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x80235420: addiu       $fp, $zero, 0x5
    ctx->r30 = ADD32(0, 0X5);
    // 0x80235424: addiu       $s7, $zero, 0x80
    ctx->r23 = ADD32(0, 0X80);
    // 0x80235428: addiu       $s6, $zero, 0x42
    ctx->r22 = ADD32(0, 0X42);
    // 0x8023542C: addiu       $s5, $zero, 0x2
    ctx->r21 = ADD32(0, 0X2);
    // 0x80235430: addiu       $s4, $s1, 0x14
    ctx->r20 = ADD32(ctx->r17, 0X14);
    // 0x80235434: lui         $s2, 0x8024
    ctx->r18 = S32(0X8024 << 16);
    // 0x80235438: addiu       $s2, $s2, 0xD2C
    ctx->r18 = ADD32(ctx->r18, 0XD2C);
L_8023543C:
    // 0x8023543C: jal         0x8004F144
    // 0x80235440: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_2;
    // 0x80235440: nop

    after_2:
    // 0x80235444: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80235448: beq         $s0, $zero, L_802354A0
    if (ctx->r16 == 0) {
        // 0x8023544C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_802354A0;
    }
    // 0x8023544C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80235450: sb          $fp, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r30;
    // 0x80235454: sb          $s7, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r23;
    // 0x80235458: sb          $s6, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r22;
    // 0x8023545C: sb          $s5, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r21;
    // 0x80235460: lh          $a1, 0x0($s2)
    ctx->r5 = MEM_H(ctx->r18, 0X0);
    // 0x80235464: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80235468: jal         0x8004DA90
    // 0x8023546C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x8023546C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_3:
    // 0x80235470: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x80235474: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x80235478: jal         0x8009A3B4
    // 0x8023547C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8023547C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x80235480: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x80235484: addiu       $a1, $s1, 0x2C
    ctx->r5 = ADD32(ctx->r17, 0X2C);
    // 0x80235488: jal         0x8009A3B4
    // 0x8023548C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8023548C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x80235490: addiu       $a0, $s1, 0x1C
    ctx->r4 = ADD32(ctx->r17, 0X1C);
    // 0x80235494: addiu       $a1, $s1, 0x34
    ctx->r5 = ADD32(ctx->r17, 0X34);
    // 0x80235498: jal         0x8009A3B4
    // 0x8023549C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x8023549C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_6:
L_802354A0:
    // 0x802354A0: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x802354A4: slti        $v0, $s3, 0x3
    ctx->r2 = SIGNED(ctx->r19) < 0X3 ? 1 : 0;
    // 0x802354A8: bne         $v0, $zero, L_8023543C
    if (ctx->r2 != 0) {
        // 0x802354AC: addiu       $s2, $s2, 0x2
        ctx->r18 = ADD32(ctx->r18, 0X2);
            goto L_8023543C;
    }
    // 0x802354AC: addiu       $s2, $s2, 0x2
    ctx->r18 = ADD32(ctx->r18, 0X2);
    // 0x802354B0: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    // 0x802354B4: addiu       $a1, $zero, 0x7D0
    ctx->r5 = ADD32(0, 0X7D0);
    // 0x802354B8: addiu       $a2, $zero, 0x1388
    ctx->r6 = ADD32(0, 0X1388);
    // 0x802354BC: addiu       $s0, $s1, 0x14
    ctx->r16 = ADD32(ctx->r17, 0X14);
    // 0x802354C0: jal         0x8003491C
    // 0x802354C4: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_8003491C_FD1C(rdram, ctx);
        goto after_7;
    // 0x802354C4: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_7:
    // 0x802354C8: addiu       $a0, $zero, 0xC1
    ctx->r4 = ADD32(0, 0XC1);
    // 0x802354CC: jal         0x8002A33C
    // 0x802354D0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_8;
    // 0x802354D0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_8:
    // 0x802354D4: j           L_80235564
    // 0x802354D8: nop

        goto L_80235564;
    // 0x802354D8: nop

L_802354DC:
    // 0x802354DC: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x802354E0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802354E4: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x802354E8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802354EC: bgez        $v0, L_80235564
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802354F0: addiu       $v1, $zero, 0x5
        ctx->r3 = ADD32(0, 0X5);
            goto L_80235564;
    }
    // 0x802354F0: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x802354F4: lbu         $v0, 0xAC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XAC);
    // 0x802354F8: sb          $v1, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r3;
    // 0x802354FC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80235500: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x80235504: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x80235508: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_8023550C:
    // 0x8023550C: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x80235510: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80235514: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x80235518: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023551C: bgez        $v0, L_80235564
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80235520: lui         $v0, 0xC
        ctx->r2 = S32(0XC << 16);
            goto L_80235564;
    }
    // 0x80235520: lui         $v0, 0xC
    ctx->r2 = S32(0XC << 16);
    // 0x80235524: lw          $v1, 0x80($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X80);
    // 0x80235528: ori         $v0, $v0, 0x7FFF
    ctx->r2 = ctx->r2 | 0X7FFF;
    // 0x8023552C: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80235530: bnel        $v0, $zero, L_8023554C
    if (ctx->r2 != 0) {
        // 0x80235534: addiu       $v1, $zero, 0xA
        ctx->r3 = ADD32(0, 0XA);
            goto L_8023554C;
    }
    goto skip_0;
    // 0x80235534: addiu       $v1, $zero, 0xA
    ctx->r3 = ADD32(0, 0XA);
    skip_0:
    // 0x80235538: lbu         $v0, 0xAD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XAD);
    // 0x8023553C: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x80235540: sb          $v1, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r3;
    // 0x80235544: j           L_80235558
    // 0x80235548: addiu       $v1, $zero, 0xD
    ctx->r3 = ADD32(0, 0XD);
        goto L_80235558;
    // 0x80235548: addiu       $v1, $zero, 0xD
    ctx->r3 = ADD32(0, 0XD);
L_8023554C:
    // 0x8023554C: lbu         $v0, 0xAD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XAD);
    // 0x80235550: sb          $v1, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r3;
    // 0x80235554: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
L_80235558:
    // 0x80235558: sb          $v1, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r3;
    // 0x8023555C: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
    // 0x80235560: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
L_80235564:
    // 0x80235564: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80235568: lw          $fp, 0x30($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X30);
    // 0x8023556C: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x80235570: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x80235574: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x80235578: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8023557C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80235580: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80235584: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80235588: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023558C: jr          $ra
    // 0x80235590: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80235590: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8022C010_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C010: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022C014: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022C018: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C01C: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8022C020: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022C024: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022C028: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022C02C: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022C030: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022C034: beq         $v1, $zero, L_8022C044
    if (ctx->r3 == 0) {
        // 0x8022C038: sb          $v0, 0x0($s0)
        MEM_B(0X0, ctx->r16) = ctx->r2;
            goto L_8022C044;
    }
    // 0x8022C038: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8022C03C: j           L_8022C04C
    // 0x8022C040: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
        goto L_8022C04C;
    // 0x8022C040: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
L_8022C044:
    // 0x8022C044: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C048: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_8022C04C:
    // 0x8022C04C: jal         0x8004D5D4
    // 0x8022C050: nop

    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022C050: nop

    after_0:
    // 0x8022C054: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8022C058: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022C05C: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022C060: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022C064: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022C068: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022C06C: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022C070: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022C074: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022C078: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x8022C07C: sw          $zero, 0x4($s1)
    MEM_W(0X4, ctx->r17) = 0;
    // 0x8022C080: sw          $zero, 0x8($s1)
    MEM_W(0X8, ctx->r17) = 0;
    // 0x8022C084: sw          $zero, 0x14($s1)
    MEM_W(0X14, ctx->r17) = 0;
    // 0x8022C088: sw          $zero, 0x18($s1)
    MEM_W(0X18, ctx->r17) = 0;
    // 0x8022C08C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022C090: jal         0x8009A3B4
    // 0x8022C094: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022C094: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    after_1:
    // 0x8022C098: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C09C: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x8022C0A0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022C0A4: addiu       $v0, $zero, 0x5905
    ctx->r2 = ADD32(0, 0X5905);
    // 0x8022C0A8: sh          $v0, 0x34($s1)
    MEM_H(0X34, ctx->r17) = ctx->r2;
    // 0x8022C0AC: addiu       $v0, $zero, 0x26A2
    ctx->r2 = ADD32(0, 0X26A2);
    // 0x8022C0B0: sh          $v0, 0x38($s1)
    MEM_H(0X38, ctx->r17) = ctx->r2;
    // 0x8022C0B4: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022C0B8: sh          $zero, 0x36($s1)
    MEM_H(0X36, ctx->r17) = 0;
    // 0x8022C0BC: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    // 0x8022C0C0: sh          $v0, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r2;
    // 0x8022C0C4: sh          $v0, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r2;
    // 0x8022C0C8: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022C0CC: addiu       $v0, $v0, 0x9D8
    ctx->r2 = ADD32(ctx->r2, 0X9D8);
    // 0x8022C0D0: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x8022C0D4: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022C0D8: addiu       $v0, $v0, 0x9E4
    ctx->r2 = ADD32(ctx->r2, 0X9E4);
    // 0x8022C0DC: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x8022C0E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C0E4: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x8022C0E8: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8022C0EC: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8022C0F0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022C0F4: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022C0F8: jal         0x80050294
    // 0x8022C0FC: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x8022C0FC: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    after_2:
    // 0x8022C100: jal         0x8022C11C
    // 0x8022C104: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022C11C_ovl4(rdram, ctx);
        goto after_3;
    // 0x8022C104: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022C108: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8022C10C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022C110: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022C114: jr          $ra
    // 0x8022C118: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022C118: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_802326CC_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802326CC: lb          $v0, 0xA7($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XA7);
    // 0x802326D0: bgez        $v0, L_80232700
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802326D4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80232700;
    }
    // 0x802326D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802326D8: lh          $v1, 0x34C($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X34C);
    // 0x802326DC: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x802326E0: bne         $v1, $zero, L_80232700
    if (ctx->r3 != 0) {
        // 0x802326E4: sb          $v0, 0x9($a0)
        MEM_B(0X9, ctx->r4) = ctx->r2;
            goto L_80232700;
    }
    // 0x802326E4: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x802326E8: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x802326EC: bne         $v0, $zero, L_802326F8
    if (ctx->r2 != 0) {
        // 0x802326F0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802326F8;
    }
    // 0x802326F0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802326F4: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_802326F8:
    // 0x802326F8: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
    // 0x802326FC: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
L_80232700:
    // 0x80232700: jr          $ra
    // 0x80232704: nop

    TRACE_RETURN()
    return;
    // 0x80232704: nop

;}
RECOMP_FUNC void func_8023C814_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023C814: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8023C818: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x8023C81C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023C820: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x8023C824: jal         0x8006033C
    // 0x8023C828: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8023C828: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    after_0:
    // 0x8023C82C: beq         $v0, $zero, L_8023C86C
    if (ctx->r2 == 0) {
        // 0x8023C830: nop
    
            goto L_8023C86C;
    }
    // 0x8023C830: nop

    // 0x8023C834: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8023C838: jal         0x8003E6BC
    // 0x8023C83C: addiu       $a0, $a0, 0x49C4
    ctx->r4 = ADD32(ctx->r4, 0X49C4);
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_1;
    // 0x8023C83C: addiu       $a0, $a0, 0x49C4
    ctx->r4 = ADD32(ctx->r4, 0X49C4);
    after_1:
    // 0x8023C840: lw          $v1, 0x44($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X44);
    // 0x8023C844: bne         $v1, $v0, L_8023C86C
    if (ctx->r3 != ctx->r2) {
        // 0x8023C848: addiu       $a0, $zero, 0x7B2
        ctx->r4 = ADD32(0, 0X7B2);
            goto L_8023C86C;
    }
    // 0x8023C848: addiu       $a0, $zero, 0x7B2
    ctx->r4 = ADD32(0, 0X7B2);
    // 0x8023C84C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023C850: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8023C854: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8023C858: jal         0x8006036C
    // 0x8023C85C: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    func_8006036C_3B76C(rdram, ctx);
        goto after_2;
    // 0x8023C85C: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    after_2:
    // 0x8023C860: addiu       $a0, $zero, 0x105
    ctx->r4 = ADD32(0, 0X105);
    // 0x8023C864: jal         0x8002A33C
    // 0x8023C868: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    func_8002A33C_573C(rdram, ctx);
        goto after_3;
    // 0x8023C868: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    after_3:
L_8023C86C:
    // 0x8023C86C: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x8023C870: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x8023C874: jr          $ra
    // 0x8023C878: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x8023C878: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_8022978C_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022978C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80229790: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229794: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229798: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022979C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802297A0: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802297A4: beq         $v1, $zero, L_802297C0
    if (ctx->r3 == 0) {
        // 0x802297A8: addiu       $s1, $s0, 0x328
        ctx->r17 = ADD32(ctx->r16, 0X328);
            goto L_802297C0;
    }
    // 0x802297A8: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x802297AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802297B0: beq         $v1, $v0, L_80229804
    if (ctx->r3 == ctx->r2) {
        // 0x802297B4: nop
    
            goto L_80229804;
    }
    // 0x802297B4: nop

    // 0x802297B8: j           L_802298F4
    // 0x802297BC: nop

        goto L_802298F4;
    // 0x802297BC: nop

L_802297C0:
    // 0x802297C0: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x802297C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802297C8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802297CC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802297D0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802297D4: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x802297D8: lw          $a0, 0x298($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X298);
    // 0x802297DC: addiu       $v0, $zero, 0x2D
    ctx->r2 = ADD32(0, 0X2D);
    // 0x802297E0: sh          $v0, 0x32C($s0)
    MEM_H(0X32C, ctx->r16) = ctx->r2;
    // 0x802297E4: lh          $v0, 0x32E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X32E);
    // 0x802297E8: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x802297EC: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x802297F0: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x802297F4: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x802297F8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802297FC: lbu         $v0, 0xA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XA);
    // 0x80229800: sh          $v0, 0x330($s0)
    MEM_H(0X330, ctx->r16) = ctx->r2;
L_80229804:
    // 0x80229804: lb          $v1, 0xA6($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA6);
    // 0x80229808: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022980C: bne         $v1, $v0, L_8022981C
    if (ctx->r3 != ctx->r2) {
        // 0x80229810: addiu       $a0, $zero, 0xB5
        ctx->r4 = ADD32(0, 0XB5);
            goto L_8022981C;
    }
    // 0x80229810: addiu       $a0, $zero, 0xB5
    ctx->r4 = ADD32(0, 0XB5);
    // 0x80229814: jal         0x8002A33C
    // 0x80229818: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x80229818: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_0:
L_8022981C:
    // 0x8022981C: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80229820: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80229824: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80229828: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022982C: bgtz        $v0, L_80229848
    if (SIGNED(ctx->r2) > 0) {
        // 0x80229830: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80229848;
    }
    // 0x80229830: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80229834: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80229838: addiu       $v1, $zero, 0x2D
    ctx->r3 = ADD32(0, 0X2D);
    // 0x8022983C: sh          $v1, 0x36($s1)
    MEM_H(0X36, ctx->r17) = ctx->r3;
    // 0x80229840: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80229844: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_80229848:
    // 0x80229848: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022984C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80229850: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x80229854: jal         0x8004F820
    // 0x80229858: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x80229858: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_1:
    // 0x8022985C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229860: addiu       $a1, $zero, 0x34
    ctx->r5 = ADD32(0, 0X34);
    // 0x80229864: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x80229868: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022986C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80229870: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80229874: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80229878: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022987C: jal         0x8004DA90
    // 0x80229880: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x80229880: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    after_2:
    // 0x80229884: jal         0x80040F30
    // 0x80229888: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_3;
    // 0x80229888: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022988C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229890: jal         0x8003E934
    // 0x80229894: sw          $v0, 0x48($s1)
    MEM_W(0X48, ctx->r17) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_4;
    // 0x80229894: sw          $v0, 0x48($s1)
    MEM_W(0X48, ctx->r17) = ctx->r2;
    after_4:
    // 0x80229898: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022989C: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x802298A0: lh          $v1, 0x2E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2E);
    // 0x802298A4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802298A8: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x802298AC: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x802298B0: bltz        $v0, L_802298C8
    if (SIGNED(ctx->r2) < 0) {
        // 0x802298B4: slti        $v0, $v0, 0x21
        ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
            goto L_802298C8;
    }
    // 0x802298B4: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x802298B8: beq         $v0, $zero, L_802298D8
    if (ctx->r2 == 0) {
        // 0x802298BC: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_802298D8;
    }
    // 0x802298BC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802298C0: j           L_802298F4
    // 0x802298C4: nop

        goto L_802298F4;
    // 0x802298C4: nop

L_802298C8:
    // 0x802298C8: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x802298CC: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x802298D0: bne         $v0, $zero, L_802298F4
    if (ctx->r2 != 0) {
        // 0x802298D4: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_802298F4;
    }
    // 0x802298D4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_802298D8:
    // 0x802298D8: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x802298DC: jal         0x8009A3B4
    // 0x802298E0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x802298E0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x802298E4: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x802298E8: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x802298EC: jal         0x8009A3B4
    // 0x802298F0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x802298F0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_6:
L_802298F4:
    // 0x802298F4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802298F8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802298FC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229900: jr          $ra
    // 0x80229904: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80229904: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023B8A4_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B8A4: jr          $ra
    // 0x8023B8A8: nop

    TRACE_RETURN()
    return;
    // 0x8023B8A8: nop

;}
RECOMP_FUNC void func_802302AC_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802302AC: lb          $v1, 0xA6($a0)
    ctx->r3 = MEM_B(ctx->r4, 0XA6);
    // 0x802302B0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802302B4: bne         $v1, $v0, L_802302C0
    if (ctx->r3 != ctx->r2) {
        // 0x802302B8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802302C0;
    }
    // 0x802302B8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802302BC: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_802302C0:
    // 0x802302C0: jr          $ra
    // 0x802302C4: nop

    TRACE_RETURN()
    return;
    // 0x802302C4: nop

;}
RECOMP_FUNC void func_80229534_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229534: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80229538: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022953C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229540: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80229544: addiu       $a0, $a0, 0x49C4
    ctx->r4 = ADD32(ctx->r4, 0X49C4);
    // 0x80229548: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022954C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80229550: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80229554: jal         0x8004EC38
    // 0x80229558: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    func_8004EC38_2A038(rdram, ctx);
        goto after_0;
    // 0x80229558: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x8022955C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80229560: lhu         $v1, 0x4A06($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X4A06);
    // 0x80229564: lbu         $a0, 0xA($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA);
    // 0x80229568: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x8022956C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80229570: beq         $a0, $zero, L_8022958C
    if (ctx->r4 == 0) {
        // 0x80229574: sh          $v0, 0x36E($s0)
        MEM_H(0X36E, ctx->r16) = ctx->r2;
            goto L_8022958C;
    }
    // 0x80229574: sh          $v0, 0x36E($s0)
    MEM_H(0X36E, ctx->r16) = ctx->r2;
    // 0x80229578: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022957C: beq         $a0, $v0, L_802295A4
    if (ctx->r4 == ctx->r2) {
        // 0x80229580: nop
    
            goto L_802295A4;
    }
    // 0x80229580: nop

    // 0x80229584: j           L_80229774
    // 0x80229588: nop

        goto L_80229774;
    // 0x80229588: nop

L_8022958C:
    // 0x8022958C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229590: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80229594: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80229598: addiu       $v0, $zero, 0x5A
    ctx->r2 = ADD32(0, 0X5A);
    // 0x8022959C: sh          $v0, 0x32C($s0)
    MEM_H(0X32C, ctx->r16) = ctx->r2;
    // 0x802295A0: sh          $zero, 0x330($s0)
    MEM_H(0X330, ctx->r16) = 0;
L_802295A4:
    // 0x802295A4: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x802295A8: lui         $v0, 0x48
    ctx->r2 = S32(0X48 << 16);
    // 0x802295AC: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x802295B0: beq         $v0, $zero, L_802295C8
    if (ctx->r2 == 0) {
        // 0x802295B4: addiu       $s2, $s0, 0x14
        ctx->r18 = ADD32(ctx->r16, 0X14);
            goto L_802295C8;
    }
    // 0x802295B4: addiu       $s2, $s0, 0x14
    ctx->r18 = ADD32(ctx->r16, 0X14);
    // 0x802295B8: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x802295BC: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x802295C0: bne         $v0, $zero, L_80229754
    if (ctx->r2 != 0) {
        // 0x802295C4: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80229754;
    }
    // 0x802295C4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_802295C8:
    // 0x802295C8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x802295CC: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802295D0: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x802295D4: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x802295D8: jal         0x8004F820
    // 0x802295DC: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x802295DC: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_1:
    // 0x802295E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802295E4: addiu       $a1, $zero, 0x34
    ctx->r5 = ADD32(0, 0X34);
    // 0x802295E8: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x802295EC: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x802295F0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802295F4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x802295F8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802295FC: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80229600: jal         0x8004DA90
    // 0x80229604: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x80229604: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    after_2:
    // 0x80229608: jal         0x80040F30
    // 0x8022960C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_3;
    // 0x8022960C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80229610: sw          $v0, 0x48($s1)
    MEM_W(0X48, ctx->r17) = ctx->r2;
    // 0x80229614: lb          $v1, 0xA6($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA6);
    // 0x80229618: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022961C: bne         $v1, $v0, L_8022962C
    if (ctx->r3 != ctx->r2) {
        // 0x80229620: addiu       $a0, $zero, 0xB0
        ctx->r4 = ADD32(0, 0XB0);
            goto L_8022962C;
    }
    // 0x80229620: addiu       $a0, $zero, 0xB0
    ctx->r4 = ADD32(0, 0XB0);
    // 0x80229624: jal         0x8002A33C
    // 0x80229628: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_4;
    // 0x80229628: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_4:
L_8022962C:
    // 0x8022962C: jal         0x8003E934
    // 0x80229630: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_5;
    // 0x80229630: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80229634: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80229638: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x8022963C: lh          $v1, 0x2E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2E);
    // 0x80229640: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229644: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80229648: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x8022964C: bltz        $v0, L_80229664
    if (SIGNED(ctx->r2) < 0) {
        // 0x80229650: slti        $v0, $v0, 0x21
        ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
            goto L_80229664;
    }
    // 0x80229650: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x80229654: beq         $v0, $zero, L_80229674
    if (ctx->r2 == 0) {
        // 0x80229658: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80229674;
    }
    // 0x80229658: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022965C: j           L_80229698
    // 0x80229660: nop

        goto L_80229698;
    // 0x80229660: nop

L_80229664:
    // 0x80229664: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x80229668: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x8022966C: bne         $v0, $zero, L_80229698
    if (ctx->r2 != 0) {
        // 0x80229670: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80229698;
    }
    // 0x80229670: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_80229674:
    // 0x80229674: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x80229678: jal         0x8009A3B4
    // 0x8022967C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x8022967C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x80229680: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80229684: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x80229688: jal         0x8009A3B4
    // 0x8022968C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x8022968C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_7:
    // 0x80229690: j           L_802296A8
    // 0x80229694: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802296A8;
    // 0x80229694: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80229698:
    // 0x80229698: lw          $v0, 0x48($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X48);
    // 0x8022969C: andi        $v0, $v0, 0xF00
    ctx->r2 = ctx->r2 & 0XF00;
    // 0x802296A0: beq         $v0, $zero, L_802296BC
    if (ctx->r2 == 0) {
        // 0x802296A4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802296BC;
    }
    // 0x802296A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802296A8:
    // 0x802296A8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x802296AC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802296B0: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x802296B4: j           L_80229774
    // 0x802296B8: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
        goto L_80229774;
    // 0x802296B8: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
L_802296BC:
    // 0x802296BC: lh          $v0, 0x36($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X36);
    // 0x802296C0: bne         $v0, $zero, L_802296F0
    if (ctx->r2 != 0) {
        // 0x802296C4: lui         $v0, 0x1
        ctx->r2 = S32(0X1 << 16);
            goto L_802296F0;
    }
    // 0x802296C4: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x802296C8: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x802296CC: ori         $v0, $v0, 0x1FFF
    ctx->r2 = ctx->r2 | 0X1FFF;
    // 0x802296D0: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x802296D4: bne         $v0, $zero, L_802296F0
    if (ctx->r2 != 0) {
        // 0x802296D8: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_802296F0;
    }
    // 0x802296D8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x802296DC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x802296E0: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x802296E4: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x802296E8: j           L_80229770
    // 0x802296EC: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
        goto L_80229770;
    // 0x802296EC: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
L_802296F0:
    // 0x802296F0: lh          $v0, 0x34($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X34);
    // 0x802296F4: bne         $v0, $zero, L_80229760
    if (ctx->r2 != 0) {
        // 0x802296F8: lui         $v0, 0x11
        ctx->r2 = S32(0X11 << 16);
            goto L_80229760;
    }
    // 0x802296F8: lui         $v0, 0x11
    ctx->r2 = S32(0X11 << 16);
    // 0x802296FC: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x80229700: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x80229704: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80229708: bne         $v0, $zero, L_80229760
    if (ctx->r2 != 0) {
        // 0x8022970C: nop
    
            goto L_80229760;
    }
    // 0x8022970C: nop

    // 0x80229710: lh          $v0, 0x44($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X44);
    // 0x80229714: bltzl       $v0, L_80229730
    if (SIGNED(ctx->r2) < 0) {
        // 0x80229718: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_80229730;
    }
    goto skip_0;
    // 0x80229718: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_0:
    // 0x8022971C: slti        $v0, $v0, 0x10
    ctx->r2 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x80229720: beq         $v0, $zero, L_80229760
    if (ctx->r2 == 0) {
        // 0x80229724: nop
    
            goto L_80229760;
    }
    // 0x80229724: nop

    // 0x80229728: j           L_8022973C
    // 0x8022972C: nop

        goto L_8022973C;
    // 0x8022972C: nop

L_80229730:
    // 0x80229730: slti        $v0, $v0, 0x10
    ctx->r2 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x80229734: beq         $v0, $zero, L_80229760
    if (ctx->r2 == 0) {
        // 0x80229738: nop
    
            goto L_80229760;
    }
    // 0x80229738: nop

L_8022973C:
    // 0x8022973C: lh          $v0, 0x46($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X46);
    // 0x80229740: addiu       $v0, $v0, 0x400
    ctx->r2 = ADD32(ctx->r2, 0X400);
    // 0x80229744: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80229748: slti        $v0, $v0, 0x800
    ctx->r2 = SIGNED(ctx->r2) < 0X800 ? 1 : 0;
    // 0x8022974C: beq         $v0, $zero, L_80229760
    if (ctx->r2 == 0) {
        // 0x80229750: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80229760;
    }
    // 0x80229750: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_80229754:
    // 0x80229754: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80229758: j           L_80229774
    // 0x8022975C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_80229774;
    // 0x8022975C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_80229760:
    // 0x80229760: lhu         $v1, 0x0($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X0);
    // 0x80229764: andi        $v0, $v1, 0x10
    ctx->r2 = ctx->r3 & 0X10;
    // 0x80229768: bne         $v0, $zero, L_80229774
    if (ctx->r2 != 0) {
        // 0x8022976C: ori         $v0, $v1, 0x1
        ctx->r2 = ctx->r3 | 0X1;
            goto L_80229774;
    }
    // 0x8022976C: ori         $v0, $v1, 0x1
    ctx->r2 = ctx->r3 | 0X1;
L_80229770:
    // 0x80229770: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_80229774:
    // 0x80229774: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80229778: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022977C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80229780: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229784: jr          $ra
    // 0x80229788: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80229788: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80239E24_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239E24: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80239E28: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80239E2C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80239E30: lh          $v0, 0x24($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X24);
    // 0x80239E34: bgtz        $v0, L_80239E4C
    if (SIGNED(ctx->r2) > 0) {
        // 0x80239E38: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_80239E4C;
    }
    // 0x80239E38: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80239E3C: jal         0x8004F5C4
    // 0x80239E40: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x80239E40: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    after_0:
    // 0x80239E44: j           L_80239E64
    // 0x80239E48: nop

        goto L_80239E64;
    // 0x80239E48: nop

L_80239E4C:
    // 0x80239E4C: lhu         $v0, 0x26($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X26);
    // 0x80239E50: lw          $v1, 0x18($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X18);
    // 0x80239E54: addiu       $a0, $a0, -0x8
    ctx->r4 = ADD32(ctx->r4, -0X8);
    // 0x80239E58: sh          $a0, 0x24($a1)
    MEM_H(0X24, ctx->r5) = ctx->r4;
    // 0x80239E5C: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80239E60: sw          $v1, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r3;
L_80239E64:
    // 0x80239E64: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80239E68: jr          $ra
    // 0x80239E6C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80239E6C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80238E88_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238E88: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80238E8C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80238E90: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80238E94: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80238E98: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80238E9C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80238EA0: lhu         $s2, 0x54($s0)
    ctx->r18 = MEM_HU(ctx->r16, 0X54);
    // 0x80238EA4: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80238EA8: jal         0x80040F30
    // 0x80238EAC: sw          $zero, 0xF0($s0)
    MEM_W(0XF0, ctx->r16) = 0;
    func_80040F30_1C330(rdram, ctx);
        goto after_0;
    // 0x80238EAC: sw          $zero, 0xF0($s0)
    MEM_W(0XF0, ctx->r16) = 0;
    after_0:
    // 0x80238EB0: andi        $v0, $v0, 0xF00
    ctx->r2 = ctx->r2 & 0XF00;
    // 0x80238EB4: beq         $v0, $zero, L_80238EC8
    if (ctx->r2 == 0) {
        // 0x80238EB8: addiu       $s1, $s0, 0xD0
        ctx->r17 = ADD32(ctx->r16, 0XD0);
            goto L_80238EC8;
    }
    // 0x80238EB8: addiu       $s1, $s0, 0xD0
    ctx->r17 = ADD32(ctx->r16, 0XD0);
    // 0x80238EBC: lw          $v0, 0xF0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XF0);
    // 0x80238EC0: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80238EC4: sw          $v0, 0xF0($s0)
    MEM_W(0XF0, ctx->r16) = ctx->r2;
L_80238EC8:
    // 0x80238EC8: lb          $v0, 0x74($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X74);
    // 0x80238ECC: bnel        $v0, $zero, L_80238F38
    if (ctx->r2 != 0) {
        // 0x80238ED0: sh          $s2, 0x54($s0)
        MEM_H(0X54, ctx->r16) = ctx->r18;
            goto L_80238F38;
    }
    goto skip_0;
    // 0x80238ED0: sh          $s2, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r18;
    skip_0:
    // 0x80238ED4: jal         0x8003E934
    // 0x80238ED8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x80238ED8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80238EDC: lh          $v1, 0x2E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2E);
    // 0x80238EE0: beql        $v0, $v1, L_80238F20
    if (ctx->r2 == ctx->r3) {
        // 0x80238EE4: sh          $v0, 0x16($s0)
        MEM_H(0X16, ctx->r16) = ctx->r2;
            goto L_80238F20;
    }
    goto skip_1;
    // 0x80238EE4: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    skip_1:
    // 0x80238EE8: lb          $v0, 0x75($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X75);
    // 0x80238EEC: bne         $v0, $zero, L_80238F28
    if (ctx->r2 != 0) {
        // 0x80238EF0: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80238F28;
    }
    // 0x80238EF0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80238EF4: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x80238EF8: jal         0x8009A3B4
    // 0x80238EFC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80238EFC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80238F00: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80238F04: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x80238F08: jal         0x8009A3B4
    // 0x80238F0C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80238F0C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_3:
    // 0x80238F10: lw          $v0, 0xF0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XF0);
    // 0x80238F14: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x80238F18: j           L_80238F28
    // 0x80238F1C: sw          $v0, 0xF0($s0)
    MEM_W(0XF0, ctx->r16) = ctx->r2;
        goto L_80238F28;
    // 0x80238F1C: sw          $v0, 0xF0($s0)
    MEM_W(0XF0, ctx->r16) = ctx->r2;
L_80238F20:
    // 0x80238F20: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80238F24: sw          $v0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r2;
L_80238F28:
    // 0x80238F28: lw          $v0, 0x20($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X20);
    // 0x80238F2C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80238F30: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x80238F34: sh          $s2, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r18;
L_80238F38:
    // 0x80238F38: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80238F3C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80238F40: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80238F44: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80238F48: jr          $ra
    // 0x80238F4C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80238F4C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802387B8_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802387B8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802387BC: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x802387C0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802387C4: addiu       $a0, $s1, 0x2C
    ctx->r4 = ADD32(ctx->r17, 0X2C);
    // 0x802387C8: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x802387CC: addiu       $s2, $s1, 0x14
    ctx->r18 = ADD32(ctx->r17, 0X14);
    // 0x802387D0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802387D4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802387D8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x802387DC: jal         0x8009A3B4
    // 0x802387E0: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x802387E0: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    after_0:
    // 0x802387E4: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
    // 0x802387E8: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x802387EC: jal         0x8009A3B4
    // 0x802387F0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802387F0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x802387F4: addiu       $a0, $s1, 0x5C
    ctx->r4 = ADD32(ctx->r17, 0X5C);
    // 0x802387F8: addiu       $s0, $s1, 0x54
    ctx->r16 = ADD32(ctx->r17, 0X54);
    // 0x802387FC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80238800: jal         0x8009A3B4
    // 0x80238804: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80238804: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80238808: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8023880C: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x80238810: jal         0x800A3450
    // 0x80238814: sw          $v0, 0xB4($s1)
    MEM_W(0XB4, ctx->r17) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80238814: sw          $v0, 0xB4($s1)
    MEM_W(0XB4, ctx->r17) = ctx->r2;
    after_3:
    // 0x80238818: lw          $v1, 0xC0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0XC0);
    // 0x8023881C: sh          $v0, 0xD2($s1)
    MEM_H(0XD2, ctx->r17) = ctx->r2;
    // 0x80238820: lui         $v0, 0x3900
    ctx->r2 = S32(0X3900 << 16);
    // 0x80238824: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80238828: beq         $v1, $zero, L_8023883C
    if (ctx->r3 == 0) {
        // 0x8023882C: nop
    
            goto L_8023883C;
    }
    // 0x8023882C: nop

    // 0x80238830: addiu       $a0, $zero, 0xA3
    ctx->r4 = ADD32(0, 0XA3);
    // 0x80238834: jal         0x8002A33C
    // 0x80238838: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_4;
    // 0x80238838: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_4:
L_8023883C:
    // 0x8023883C: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x80238840: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80238844: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80238848: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023884C: lw          $v0, 0xDEC($at)
    ctx->r2 = MEM_W(ctx->r1, 0XDEC);
    // 0x80238850: jalr        $v0
    // 0x80238854: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x80238854: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_5:
    // 0x80238858: addiu       $a0, $s1, 0xAC
    ctx->r4 = ADD32(ctx->r17, 0XAC);
    // 0x8023885C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80238860: jal         0x8009A3B4
    // 0x80238864: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x80238864: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x80238868: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023886C: addiu       $s0, $s1, 0x8C
    ctx->r16 = ADD32(ctx->r17, 0X8C);
    // 0x80238870: jal         0x80031428
    // 0x80238874: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80031428_C828(rdram, ctx);
        goto after_7;
    // 0x80238874: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_7:
    // 0x80238878: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x8023887C: addiu       $a1, $a1, 0x1870
    ctx->r5 = ADD32(ctx->r5, 0X1870);
    // 0x80238880: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80238884: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x80238888: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023888C: sw          $v0, 0x1874($at)
    MEM_W(0X1874, ctx->r1) = ctx->r2;
    // 0x80238890: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80238894: sw          $v0, 0x1878($at)
    MEM_W(0X1878, ctx->r1) = ctx->r2;
    // 0x80238898: jal         0x80031DA8
    // 0x8023889C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80031DA8_D1A8(rdram, ctx);
        goto after_8;
    // 0x8023889C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
    // 0x802388A0: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x802388A4: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x802388A8: beq         $v0, $zero, L_802388C0
    if (ctx->r2 == 0) {
        // 0x802388AC: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_802388C0;
    }
    // 0x802388AC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802388B0: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x802388B4: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x802388B8: jal         0x8003B564
    // 0x802388BC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_9;
    // 0x802388BC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_9:
L_802388C0:
    // 0x802388C0: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x802388C4: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802388C8: beq         $v0, $zero, L_80238914
    if (ctx->r2 == 0) {
        // 0x802388CC: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_80238914;
    }
    // 0x802388CC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x802388D0: lbu         $v1, 0x1($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X1);
    // 0x802388D4: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x802388D8: addiu       $v0, $s1, 0xC0
    ctx->r2 = ADD32(ctx->r17, 0XC0);
    // 0x802388DC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802388E0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x802388E4: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x802388E8: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x802388EC: ori         $a3, $zero, 0xE000
    ctx->r7 = 0 | 0XE000;
    // 0x802388F0: addiu       $v1, $zero, 0x80
    ctx->r3 = ADD32(0, 0X80);
    // 0x802388F4: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    // 0x802388F8: lui         $v1, 0x2900
    ctx->r3 = S32(0X2900 << 16);
    // 0x802388FC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80238900: andi        $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 & 0X7F;
    // 0x80238904: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80238908: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8023890C: jal         0x80051E18
    // 0x80238910: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80051E18_2D218(rdram, ctx);
        goto after_10;
    // 0x80238910: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_10:
L_80238914:
    // 0x80238914: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80238918: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8023891C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80238920: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80238924: jr          $ra
    // 0x80238928: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80238928: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80231BB0_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231BB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231BB4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231BB8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80231BBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80231BC0: lw          $v0, 0x35C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X35C);
    // 0x80231BC4: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80231BC8: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x80231BCC: andi        $v0, $v0, 0x5
    ctx->r2 = ctx->r2 & 0X5;
    // 0x80231BD0: bnel        $v0, $zero, L_80231BD8
    if (ctx->r2 != 0) {
        // 0x80231BD4: sh          $zero, 0x44($s0)
        MEM_H(0X44, ctx->r16) = 0;
            goto L_80231BD8;
    }
    goto skip_0;
    // 0x80231BD4: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    skip_0:
L_80231BD8:
    // 0x80231BD8: lhu         $v0, 0x382($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X382);
    // 0x80231BDC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80231BE0: sh          $v0, 0x382($s0)
    MEM_H(0X382, ctx->r16) = ctx->r2;
    // 0x80231BE4: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x80231BE8: bne         $v0, $zero, L_80231C00
    if (ctx->r2 != 0) {
        // 0x80231BEC: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80231C00;
    }
    // 0x80231BEC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80231BF0: jal         0x80231DDC
    // 0x80231BF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80231DDC_ovl4(rdram, ctx);
        goto after_0;
    // 0x80231BF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80231BF8: j           L_80231C34
    // 0x80231BFC: nop

        goto L_80231C34;
    // 0x80231BFC: nop

L_80231C00:
    // 0x80231C00: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80231C04: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    // 0x80231C08: jal         0x8004F820
    // 0x80231C0C: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x80231C0C: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    after_1:
    // 0x80231C10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80231C14: lh          $a1, 0x44($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X44);
    // 0x80231C18: lhu         $v1, 0x56($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X56);
    // 0x80231C1C: lh          $a2, 0x46($a0)
    ctx->r6 = MEM_H(ctx->r4, 0X46);
    // 0x80231C20: lh          $a3, 0x48($a0)
    ctx->r7 = MEM_H(ctx->r4, 0X48);
    // 0x80231C24: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80231C28: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80231C2C: jal         0x8004DA90
    // 0x80231C30: sh          $v1, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x80231C30: sh          $v1, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r3;
    after_2:
L_80231C34:
    // 0x80231C34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80231C38: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231C3C: jr          $ra
    // 0x80231C40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80231C40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023BE70_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023BE70: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8023BE74: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x8023BE78: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023BE7C: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x8023BE80: jal         0x8006033C
    // 0x8023BE84: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8023BE84: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    after_0:
    // 0x8023BE88: beq         $v0, $zero, L_8023BEC8
    if (ctx->r2 == 0) {
        // 0x8023BE8C: nop
    
            goto L_8023BEC8;
    }
    // 0x8023BE8C: nop

    // 0x8023BE90: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8023BE94: jal         0x8003E6BC
    // 0x8023BE98: addiu       $a0, $a0, 0x49C4
    ctx->r4 = ADD32(ctx->r4, 0X49C4);
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_1;
    // 0x8023BE98: addiu       $a0, $a0, 0x49C4
    ctx->r4 = ADD32(ctx->r4, 0X49C4);
    after_1:
    // 0x8023BE9C: lw          $v1, 0x44($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X44);
    // 0x8023BEA0: bne         $v1, $v0, L_8023BEC8
    if (ctx->r3 != ctx->r2) {
        // 0x8023BEA4: addiu       $a0, $zero, 0x7B2
        ctx->r4 = ADD32(0, 0X7B2);
            goto L_8023BEC8;
    }
    // 0x8023BEA4: addiu       $a0, $zero, 0x7B2
    ctx->r4 = ADD32(0, 0X7B2);
    // 0x8023BEA8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023BEAC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8023BEB0: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8023BEB4: jal         0x8006036C
    // 0x8023BEB8: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    func_8006036C_3B76C(rdram, ctx);
        goto after_2;
    // 0x8023BEB8: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    after_2:
    // 0x8023BEBC: addiu       $a0, $zero, 0x105
    ctx->r4 = ADD32(0, 0X105);
    // 0x8023BEC0: jal         0x8002A33C
    // 0x8023BEC4: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    func_8002A33C_573C(rdram, ctx);
        goto after_3;
    // 0x8023BEC4: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    after_3:
L_8023BEC8:
    // 0x8023BEC8: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x8023BECC: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x8023BED0: jr          $ra
    // 0x8023BED4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x8023BED4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_80236514_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236514: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80236518: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x8023651C: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x80236520: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80236524: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80236528: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8023652C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80236530: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80236534: lw          $v1, 0x9C($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X9C);
    // 0x80236538: lui         $v0, 0x2000
    ctx->r2 = S32(0X2000 << 16);
    // 0x8023653C: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x80236540: beq         $v0, $zero, L_802365AC
    if (ctx->r2 == 0) {
        // 0x80236544: nop
    
            goto L_802365AC;
    }
    // 0x80236544: nop

    // 0x80236548: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x8023654C: addiu       $s0, $s0, 0x4A06
    ctx->r16 = ADD32(ctx->r16, 0X4A06);
    // 0x80236550: jal         0x800324B4
    // 0x80236554: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    func_800324B4_D8B4(rdram, ctx);
        goto after_0;
    // 0x80236554: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    after_0:
    // 0x80236558: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8023655C: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x80236560: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x80236564: sh          $v0, 0x44($s4)
    MEM_H(0X44, ctx->r20) = ctx->r2;
    // 0x80236568: addiu       $v0, $zero, -0x1000
    ctx->r2 = ADD32(0, -0X1000);
    // 0x8023656C: sh          $v0, 0x46($s4)
    MEM_H(0X46, ctx->r20) = ctx->r2;
    // 0x80236570: jal         0x80032498
    // 0x80236574: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    func_80032498_D898(rdram, ctx);
        goto after_1;
    // 0x80236574: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    after_1:
    // 0x80236578: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8023657C: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x80236580: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x80236584: sh          $v0, 0x48($s4)
    MEM_H(0X48, ctx->r20) = ctx->r2;
    // 0x80236588: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023658C: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
    // 0x80236590: sb          $v0, 0x8($s4)
    MEM_B(0X8, ctx->r20) = ctx->r2;
    // 0x80236594: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80236598: sh          $zero, 0x4C($s4)
    MEM_H(0X4C, ctx->r20) = 0;
    // 0x8023659C: sh          $v0, 0x4E($s4)
    MEM_H(0X4E, ctx->r20) = ctx->r2;
    // 0x802365A0: sh          $zero, 0x50($s4)
    MEM_H(0X50, ctx->r20) = 0;
    // 0x802365A4: j           L_802365D4
    // 0x802365A8: sw          $zero, 0x9C($s4)
    MEM_W(0X9C, ctx->r20) = 0;
        goto L_802365D4;
    // 0x802365A8: sw          $zero, 0x9C($s4)
    MEM_W(0X9C, ctx->r20) = 0;
L_802365AC:
    // 0x802365AC: lbu         $v0, 0xA($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XA);
    // 0x802365B0: beq         $v0, $zero, L_802365CC
    if (ctx->r2 == 0) {
        // 0x802365B4: lui         $v0, 0x1C00
        ctx->r2 = S32(0X1C00 << 16);
            goto L_802365CC;
    }
    // 0x802365B4: lui         $v0, 0x1C00
    ctx->r2 = S32(0X1C00 << 16);
L_802365B8:
    // 0x802365B8: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x802365BC: beq         $v0, $zero, L_802365D4
    if (ctx->r2 == 0) {
        // 0x802365C0: nop
    
            goto L_802365D4;
    }
    // 0x802365C0: nop

    // 0x802365C4: j           L_8023672C
    // 0x802365C8: sw          $zero, 0x9C($s4)
    MEM_W(0X9C, ctx->r20) = 0;
        goto L_8023672C;
    // 0x802365C8: sw          $zero, 0x9C($s4)
    MEM_W(0X9C, ctx->r20) = 0;
L_802365CC:
    // 0x802365CC: j           L_802365B8
    // 0x802365D0: lui         $v0, 0x1A00
    ctx->r2 = S32(0X1A00 << 16);
        goto L_802365B8;
    // 0x802365D0: lui         $v0, 0x1A00
    ctx->r2 = S32(0X1A00 << 16);
L_802365D4:
    // 0x802365D4: lw          $v0, 0x44($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X44);
    // 0x802365D8: bne         $v0, $zero, L_802365EC
    if (ctx->r2 != 0) {
        // 0x802365DC: sw          $zero, 0x9C($s4)
        MEM_W(0X9C, ctx->r20) = 0;
            goto L_802365EC;
    }
    // 0x802365DC: sw          $zero, 0x9C($s4)
    MEM_W(0X9C, ctx->r20) = 0;
    // 0x802365E0: lh          $v0, 0x48($s4)
    ctx->r2 = MEM_H(ctx->r20, 0X48);
    // 0x802365E4: beq         $v0, $zero, L_80236664
    if (ctx->r2 == 0) {
        // 0x802365E8: addiu       $s2, $s4, 0x34
        ctx->r18 = ADD32(ctx->r20, 0X34);
            goto L_80236664;
    }
    // 0x802365E8: addiu       $s2, $s4, 0x34
    ctx->r18 = ADD32(ctx->r20, 0X34);
L_802365EC:
    // 0x802365EC: lbu         $v0, 0x3($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X3);
    // 0x802365F0: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x802365F4: beq         $v0, $zero, L_80236630
    if (ctx->r2 == 0) {
        // 0x802365F8: nop
    
            goto L_80236630;
    }
    // 0x802365F8: nop

    // 0x802365FC: lb          $v0, 0xF($s4)
    ctx->r2 = MEM_B(ctx->r20, 0XF);
    // 0x80236600: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80236604: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80236608: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023660C: lhu         $v1, 0xD58($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0XD58);
    // 0x80236610: lb          $v0, 0xF($s4)
    ctx->r2 = MEM_B(ctx->r20, 0XF);
    // 0x80236614: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80236618: sb          $v1, 0x96($s4)
    MEM_B(0X96, ctx->r20) = ctx->r3;
    // 0x8023661C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80236620: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80236624: lhu         $v0, 0xD5A($at)
    ctx->r2 = MEM_HU(ctx->r1, 0XD5A);
    // 0x80236628: j           L_80236660
    // 0x8023662C: sb          $v0, 0x97($s4)
    MEM_B(0X97, ctx->r20) = ctx->r2;
        goto L_80236660;
    // 0x8023662C: sb          $v0, 0x97($s4)
    MEM_B(0X97, ctx->r20) = ctx->r2;
L_80236630:
    // 0x80236630: lb          $v0, 0xF($s4)
    ctx->r2 = MEM_B(ctx->r20, 0XF);
    // 0x80236634: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80236638: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8023663C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80236640: lhu         $v1, 0xD40($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0XD40);
    // 0x80236644: lb          $v0, 0xF($s4)
    ctx->r2 = MEM_B(ctx->r20, 0XF);
    // 0x80236648: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023664C: sb          $v1, 0x96($s4)
    MEM_B(0X96, ctx->r20) = ctx->r3;
    // 0x80236650: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80236654: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80236658: lhu         $v0, 0xD42($at)
    ctx->r2 = MEM_HU(ctx->r1, 0XD42);
    // 0x8023665C: sb          $v0, 0x97($s4)
    MEM_B(0X97, ctx->r20) = ctx->r2;
L_80236660:
    // 0x80236660: addiu       $s2, $s4, 0x34
    ctx->r18 = ADD32(ctx->r20, 0X34);
L_80236664:
    // 0x80236664: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80236668: addiu       $s3, $s4, 0x1C
    ctx->r19 = ADD32(ctx->r20, 0X1C);
    // 0x8023666C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x80236670: jal         0x8009A3B4
    // 0x80236674: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80236674: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x80236678: addiu       $s0, $s4, 0x2C
    ctx->r16 = ADD32(ctx->r20, 0X2C);
    // 0x8023667C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236680: addiu       $s1, $s4, 0x14
    ctx->r17 = ADD32(ctx->r20, 0X14);
    // 0x80236684: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80236688: jal         0x8009A3B4
    // 0x8023668C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8023668C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x80236690: jal         0x80236A50
    // 0x80236694: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_80236A50_ovl4(rdram, ctx);
        goto after_4;
    // 0x80236694: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_4:
    // 0x80236698: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8023669C: jal         0x8004DD04
    // 0x802366A0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8004DD04_29104(rdram, ctx);
        goto after_5;
    // 0x802366A0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_5:
    // 0x802366A4: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x802366A8: jal         0x8004DD04
    // 0x802366AC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8004DD04_29104(rdram, ctx);
        goto after_6;
    // 0x802366AC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_6:
    // 0x802366B0: jal         0x80236898
    // 0x802366B4: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_80236898_ovl4(rdram, ctx);
        goto after_7;
    // 0x802366B4: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_7:
    // 0x802366B8: lhu         $v1, 0x14($s4)
    ctx->r3 = MEM_HU(ctx->r20, 0X14);
    // 0x802366BC: lhu         $v0, 0x16($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X16);
    // 0x802366C0: lhu         $a0, 0x18($s4)
    ctx->r4 = MEM_HU(ctx->r20, 0X18);
    // 0x802366C4: lb          $a1, 0xD($s4)
    ctx->r5 = MEM_B(ctx->r20, 0XD);
    // 0x802366C8: addiu       $v0, $v0, -0x10
    ctx->r2 = ADD32(ctx->r2, -0X10);
    // 0x802366CC: sh          $v0, 0x92($s4)
    MEM_H(0X92, ctx->r20) = ctx->r2;
    // 0x802366D0: slti        $v0, $a1, 0x1E
    ctx->r2 = SIGNED(ctx->r5) < 0X1E ? 1 : 0;
    // 0x802366D4: sh          $v1, 0x90($s4)
    MEM_H(0X90, ctx->r20) = ctx->r3;
    // 0x802366D8: beq         $v0, $zero, L_8023672C
    if (ctx->r2 == 0) {
        // 0x802366DC: sh          $a0, 0x94($s4)
        MEM_H(0X94, ctx->r20) = ctx->r4;
            goto L_8023672C;
    }
    // 0x802366DC: sh          $a0, 0x94($s4)
    MEM_H(0X94, ctx->r20) = ctx->r4;
    // 0x802366E0: slti        $v0, $a1, 0xF
    ctx->r2 = SIGNED(ctx->r5) < 0XF ? 1 : 0;
    // 0x802366E4: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x802366E8: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x802366EC: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x802366F0: and         $v0, $a1, $v0
    ctx->r2 = ctx->r5 & ctx->r2;
    // 0x802366F4: beq         $v0, $zero, L_8023671C
    if (ctx->r2 == 0) {
        // 0x802366F8: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_8023671C;
    }
    // 0x802366F8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802366FC: lbu         $v1, 0x8F($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X8F);
    // 0x80236700: bnel        $v1, $v0, L_80236714
    if (ctx->r3 != ctx->r2) {
        // 0x80236704: lui         $v0, 0x2CFF
        ctx->r2 = S32(0X2CFF << 16);
            goto L_80236714;
    }
    goto skip_0;
    // 0x80236704: lui         $v0, 0x2CFF
    ctx->r2 = S32(0X2CFF << 16);
    skip_0:
    // 0x80236708: lui         $v0, 0x2C80
    ctx->r2 = S32(0X2C80 << 16);
    // 0x8023670C: j           L_80236718
    // 0x80236710: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
        goto L_80236718;
    // 0x80236710: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
L_80236714:
    // 0x80236714: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
L_80236718:
    // 0x80236718: sw          $v0, 0x8C($s4)
    MEM_W(0X8C, ctx->r20) = ctx->r2;
L_8023671C:
    // 0x8023671C: lbu         $v0, 0xD($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XD);
    // 0x80236720: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80236724: j           L_80236750
    // 0x80236728: sb          $v0, 0xD($s4)
    MEM_B(0XD, ctx->r20) = ctx->r2;
        goto L_80236750;
    // 0x80236728: sb          $v0, 0xD($s4)
    MEM_B(0XD, ctx->r20) = ctx->r2;
L_8023672C:
    // 0x8023672C: jal         0x8004F144
    // 0x80236730: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_8;
    // 0x80236730: nop

    after_8:
    // 0x80236734: beq         $v0, $zero, L_80236744
    if (ctx->r2 == 0) {
        // 0x80236738: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_80236744;
    }
    // 0x80236738: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x8023673C: jal         0x80236B40
    // 0x80236740: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_80236B40_ovl4(rdram, ctx);
        goto after_9;
    // 0x80236740: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_9:
L_80236744:
    // 0x80236744: sb          $zero, 0x0($s4)
    MEM_B(0X0, ctx->r20) = 0;
    // 0x80236748: jal         0x8004F4F8
    // 0x8023674C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_10;
    // 0x8023674C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_10:
L_80236750:
    // 0x80236750: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80236754: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80236758: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8023675C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80236760: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80236764: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80236768: jr          $ra
    // 0x8023676C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8023676C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80236A50_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236A50: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x80236A54: lhu         $v0, 0x44($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X44);
    // 0x80236A58: lhu         $v1, 0x4C($a3)
    ctx->r3 = MEM_HU(ctx->r7, 0X4C);
    // 0x80236A5C: lhu         $a0, 0x4E($a3)
    ctx->r4 = MEM_HU(ctx->r7, 0X4E);
    // 0x80236A60: lhu         $a1, 0x50($a3)
    ctx->r5 = MEM_HU(ctx->r7, 0X50);
    // 0x80236A64: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80236A68: sh          $v0, 0x44($a3)
    MEM_H(0X44, ctx->r7) = ctx->r2;
    // 0x80236A6C: lhu         $v0, 0x46($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X46);
    // 0x80236A70: lhu         $v1, 0x48($a3)
    ctx->r3 = MEM_HU(ctx->r7, 0X48);
    // 0x80236A74: lh          $a2, 0x44($a3)
    ctx->r6 = MEM_H(ctx->r7, 0X44);
    // 0x80236A78: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80236A7C: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x80236A80: sh          $v0, 0x46($a3)
    MEM_H(0X46, ctx->r7) = ctx->r2;
    // 0x80236A84: slti        $v0, $a2, -0x6000
    ctx->r2 = SIGNED(ctx->r6) < -0X6000 ? 1 : 0;
    // 0x80236A88: beq         $v0, $zero, L_80236A98
    if (ctx->r2 == 0) {
        // 0x80236A8C: sh          $v1, 0x48($a3)
        MEM_H(0X48, ctx->r7) = ctx->r3;
            goto L_80236A98;
    }
    // 0x80236A8C: sh          $v1, 0x48($a3)
    MEM_H(0X48, ctx->r7) = ctx->r3;
    // 0x80236A90: j           L_80236AA4
    // 0x80236A94: addiu       $v0, $zero, -0x6000
    ctx->r2 = ADD32(0, -0X6000);
        goto L_80236AA4;
    // 0x80236A94: addiu       $v0, $zero, -0x6000
    ctx->r2 = ADD32(0, -0X6000);
L_80236A98:
    // 0x80236A98: slti        $v0, $a2, 0x6001
    ctx->r2 = SIGNED(ctx->r6) < 0X6001 ? 1 : 0;
    // 0x80236A9C: bne         $v0, $zero, L_80236AA8
    if (ctx->r2 != 0) {
        // 0x80236AA0: addiu       $v0, $zero, 0x6000
        ctx->r2 = ADD32(0, 0X6000);
            goto L_80236AA8;
    }
    // 0x80236AA0: addiu       $v0, $zero, 0x6000
    ctx->r2 = ADD32(0, 0X6000);
L_80236AA4:
    // 0x80236AA4: sh          $v0, 0x44($a3)
    MEM_H(0X44, ctx->r7) = ctx->r2;
L_80236AA8:
    // 0x80236AA8: lh          $v1, 0x46($a3)
    ctx->r3 = MEM_H(ctx->r7, 0X46);
    // 0x80236AAC: slti        $v0, $v1, -0x6000
    ctx->r2 = SIGNED(ctx->r3) < -0X6000 ? 1 : 0;
    // 0x80236AB0: bne         $v0, $zero, L_80236AC4
    if (ctx->r2 != 0) {
        // 0x80236AB4: addiu       $v0, $zero, -0x6000
        ctx->r2 = ADD32(0, -0X6000);
            goto L_80236AC4;
    }
    // 0x80236AB4: addiu       $v0, $zero, -0x6000
    ctx->r2 = ADD32(0, -0X6000);
    // 0x80236AB8: slti        $v0, $v1, 0x6001
    ctx->r2 = SIGNED(ctx->r3) < 0X6001 ? 1 : 0;
    // 0x80236ABC: bne         $v0, $zero, L_80236AC8
    if (ctx->r2 != 0) {
        // 0x80236AC0: addiu       $v0, $zero, 0x6000
        ctx->r2 = ADD32(0, 0X6000);
            goto L_80236AC8;
    }
    // 0x80236AC0: addiu       $v0, $zero, 0x6000
    ctx->r2 = ADD32(0, 0X6000);
L_80236AC4:
    // 0x80236AC4: sh          $v0, 0x46($a3)
    MEM_H(0X46, ctx->r7) = ctx->r2;
L_80236AC8:
    // 0x80236AC8: lh          $v1, 0x48($a3)
    ctx->r3 = MEM_H(ctx->r7, 0X48);
    // 0x80236ACC: slti        $v0, $v1, -0x6000
    ctx->r2 = SIGNED(ctx->r3) < -0X6000 ? 1 : 0;
    // 0x80236AD0: bne         $v0, $zero, L_80236AE4
    if (ctx->r2 != 0) {
        // 0x80236AD4: addiu       $v0, $zero, -0x6000
        ctx->r2 = ADD32(0, -0X6000);
            goto L_80236AE4;
    }
    // 0x80236AD4: addiu       $v0, $zero, -0x6000
    ctx->r2 = ADD32(0, -0X6000);
    // 0x80236AD8: slti        $v0, $v1, 0x6001
    ctx->r2 = SIGNED(ctx->r3) < 0X6001 ? 1 : 0;
    // 0x80236ADC: bne         $v0, $zero, L_80236AE8
    if (ctx->r2 != 0) {
        // 0x80236AE0: addiu       $v0, $zero, 0x6000
        ctx->r2 = ADD32(0, 0X6000);
            goto L_80236AE8;
    }
    // 0x80236AE0: addiu       $v0, $zero, 0x6000
    ctx->r2 = ADD32(0, 0X6000);
L_80236AE4:
    // 0x80236AE4: sh          $v0, 0x48($a3)
    MEM_H(0X48, ctx->r7) = ctx->r2;
L_80236AE8:
    // 0x80236AE8: lh          $v0, 0x44($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X44);
    // 0x80236AEC: lw          $v1, 0x1C($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X1C);
    // 0x80236AF0: lh          $a0, 0x46($a3)
    ctx->r4 = MEM_H(ctx->r7, 0X46);
    // 0x80236AF4: lw          $a1, 0x20($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X20);
    // 0x80236AF8: lhu         $a2, 0x18($a3)
    ctx->r6 = MEM_HU(ctx->r7, 0X18);
    // 0x80236AFC: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80236B00: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80236B04: lh          $v0, 0x48($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X48);
    // 0x80236B08: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x80236B0C: addu        $a1, $a1, $a0
    ctx->r5 = ADD32(ctx->r5, ctx->r4);
    // 0x80236B10: sw          $v1, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->r3;
    // 0x80236B14: lw          $v1, 0x24($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X24);
    // 0x80236B18: lhu         $a0, 0x14($a3)
    ctx->r4 = MEM_HU(ctx->r7, 0X14);
    // 0x80236B1C: sw          $a1, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->r5;
    // 0x80236B20: lhu         $a1, 0x16($a3)
    ctx->r5 = MEM_HU(ctx->r7, 0X16);
    // 0x80236B24: sh          $a2, 0x18($a3)
    MEM_H(0X18, ctx->r7) = ctx->r6;
    // 0x80236B28: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80236B2C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80236B30: sw          $v1, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->r3;
    // 0x80236B34: sh          $a0, 0x14($a3)
    MEM_H(0X14, ctx->r7) = ctx->r4;
    // 0x80236B38: jr          $ra
    // 0x80236B3C: sh          $a1, 0x16($a3)
    MEM_H(0X16, ctx->r7) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x80236B3C: sh          $a1, 0x16($a3)
    MEM_H(0X16, ctx->r7) = ctx->r5;
;}
RECOMP_FUNC void func_80230BEC_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230BEC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80230BF0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80230BF4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80230BF8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80230BFC: jal         0x8004F144
    // 0x80230C00: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80230C00: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x80230C04: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80230C08: beq         $v1, $zero, L_80230C44
    if (ctx->r3 == 0) {
        // 0x80230C0C: addiu       $a0, $v1, 0x38
        ctx->r4 = ADD32(ctx->r3, 0X38);
            goto L_80230C44;
    }
    // 0x80230C0C: addiu       $a0, $v1, 0x38
    ctx->r4 = ADD32(ctx->r3, 0X38);
    // 0x80230C10: addiu       $s0, $s1, 0x180
    ctx->r16 = ADD32(ctx->r17, 0X180);
    // 0x80230C14: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80230C18: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80230C1C: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80230C20: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80230C24: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x80230C28: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80230C2C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80230C30: jal         0x8009A3B4
    // 0x80230C34: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80230C34: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    after_1:
    // 0x80230C38: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80230C3C: jal         0x8007A1B8
    // 0x80230C40: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8007A1B8_555B8(rdram, ctx);
        goto after_2;
    // 0x80230C40: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
L_80230C44:
    // 0x80230C44: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80230C48: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80230C4C: sb          $v1, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r3;
    // 0x80230C50: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80230C54: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x80230C58: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80230C5C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80230C60: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80230C64: jr          $ra
    // 0x80230C68: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80230C68: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022BA74_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BA74: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022BA78: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022BA7C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022BA80: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022BA84: lhu         $v0, 0x328($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X328);
    // 0x8022BA88: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022BA8C: beq         $v0, $zero, L_8022BA9C
    if (ctx->r2 == 0) {
        // 0x8022BA90: nop
    
            goto L_8022BA9C;
    }
    // 0x8022BA90: nop

    // 0x8022BA94: jal         0x8022BF18
    // 0x8022BA98: nop

    func_8022BF18_ovl4(rdram, ctx);
        goto after_0;
    // 0x8022BA98: nop

    after_0:
L_8022BA9C:
    // 0x8022BA9C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022BAA0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022BAA4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022BAA8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022BAAC: lw          $v0, 0x86C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X86C);
    // 0x8022BAB0: jalr        $v0
    // 0x8022BAB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x8022BAB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022BAB8: lh          $v0, 0x332($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X332);
    // 0x8022BABC: beq         $v0, $zero, L_8022BACC
    if (ctx->r2 == 0) {
        // 0x8022BAC0: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022BACC;
    }
    // 0x8022BAC0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022BAC4: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022BAC8: sh          $v0, 0x332($s0)
    MEM_H(0X332, ctx->r16) = ctx->r2;
L_8022BACC:
    // 0x8022BACC: lhu         $v0, 0x328($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X328);
    // 0x8022BAD0: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x8022BAD4: bne         $v0, $zero, L_8022BAEC
    if (ctx->r2 != 0) {
        // 0x8022BAD8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022BAEC;
    }
    // 0x8022BAD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BADC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8022BAE0: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x8022BAE4: jal         0x80047284
    // 0x8022BAE8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_2;
    // 0x8022BAE8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
L_8022BAEC:
    // 0x8022BAEC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022BAF0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022BAF4: jr          $ra
    // 0x8022BAF8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022BAF8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802370BC_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802370BC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802370C0: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x802370C4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802370C8: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x802370CC: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x802370D0: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x802370D4: jal         0x8009A3B4
    // 0x802370D8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x802370D8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_0:
    // 0x802370DC: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x802370E0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x802370E4: jal         0x8009A3B4
    // 0x802370E8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802370E8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x802370EC: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x802370F0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802370F4: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x802370F8: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x802370FC: bne         $v0, $zero, L_80237114
    if (ctx->r2 != 0) {
        // 0x80237100: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_80237114;
    }
    // 0x80237100: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80237104: jal         0x8004F4F8
    // 0x80237108: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_2;
    // 0x80237108: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8023710C: j           L_802371F8
    // 0x80237110: nop

        goto L_802371F8;
    // 0x80237110: nop

L_80237114:
    // 0x80237114: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80237118: bne         $v1, $v0, L_80237124
    if (ctx->r3 != ctx->r2) {
        // 0x8023711C: addiu       $v0, $v1, 0x2
        ctx->r2 = ADD32(ctx->r3, 0X2);
            goto L_80237124;
    }
    // 0x8023711C: addiu       $v0, $v1, 0x2
    ctx->r2 = ADD32(ctx->r3, 0X2);
    // 0x80237120: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80237124:
    // 0x80237124: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80237128: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x8023712C: lh          $a3, 0x48($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X48);
    // 0x80237130: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80237134: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80237138: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8023713C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80237140: lbu         $v1, 0xDA4($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0XDA4);
    // 0x80237144: lbu         $t0, 0xA($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0XA);
    // 0x80237148: lhu         $v0, 0x9A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X9A);
    // 0x8023714C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237150: sb          $v1, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r3;
    // 0x80237154: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80237158: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    // 0x8023715C: lbu         $v1, 0xDA5($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0XDA5);
    // 0x80237160: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80237164: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80237168: sh          $v0, 0x9A($s0)
    MEM_H(0X9A, ctx->r16) = ctx->r2;
    // 0x8023716C: jal         0x8004DA90
    // 0x80237170: sb          $v1, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x80237170: sb          $v1, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r3;
    after_3:
    // 0x80237174: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x80237178: beq         $v0, $zero, L_80237194
    if (ctx->r2 == 0) {
        // 0x8023717C: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80237194;
    }
    // 0x8023717C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80237180: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80237184: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x80237188: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8023718C: bne         $v0, $zero, L_802371E0
    if (ctx->r2 != 0) {
        // 0x80237190: nop
    
            goto L_802371E0;
    }
    // 0x80237190: nop

L_80237194:
    // 0x80237194: jal         0x8004F144
    // 0x80237198: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_4;
    // 0x80237198: nop

    after_4:
    // 0x8023719C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802371A0: beq         $v1, $zero, L_802371E0
    if (ctx->r3 == 0) {
        // 0x802371A4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802371E0;
    }
    // 0x802371A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802371A8: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x802371AC: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x802371B0: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x802371B4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802371B8: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    // 0x802371BC: sb          $zero, 0xC($v1)
    MEM_B(0XC, ctx->r3) = 0;
    // 0x802371C0: lhu         $v0, 0x90($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X90);
    // 0x802371C4: sh          $v0, 0x1C($v1)
    MEM_H(0X1C, ctx->r3) = ctx->r2;
    // 0x802371C8: lhu         $v0, 0x92($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X92);
    // 0x802371CC: sh          $v0, 0x1E($v1)
    MEM_H(0X1E, ctx->r3) = ctx->r2;
    // 0x802371D0: lhu         $v0, 0x94($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X94);
    // 0x802371D4: sh          $v0, 0x20($v1)
    MEM_H(0X20, ctx->r3) = ctx->r2;
    // 0x802371D8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802371DC: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
L_802371E0:
    // 0x802371E0: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x802371E4: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x802371E8: lhu         $a0, 0x18($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X18);
    // 0x802371EC: sh          $v0, 0x90($s0)
    MEM_H(0X90, ctx->r16) = ctx->r2;
    // 0x802371F0: sh          $v1, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r3;
    // 0x802371F4: sh          $a0, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r4;
L_802371F8:
    // 0x802371F8: jal         0x8003F754
    // 0x802371FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003F754_1AB54(rdram, ctx);
        goto after_5;
    // 0x802371FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80237200: bne         $v0, $zero, L_8023721C
    if (ctx->r2 != 0) {
        // 0x80237204: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8023721C;
    }
    // 0x80237204: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80237208: lw          $v0, 0x9C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X9C);
    // 0x8023720C: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x80237210: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80237214: beq         $v0, $zero, L_80237230
    if (ctx->r2 == 0) {
        // 0x80237218: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80237230;
    }
    // 0x80237218: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_8023721C:
    // 0x8023721C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80237220: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80237224: sb          $zero, 0x96($s0)
    MEM_B(0X96, ctx->r16) = 0;
    // 0x80237228: j           L_80237280
    // 0x8023722C: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
        goto L_80237280;
    // 0x8023722C: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
L_80237230:
    // 0x80237230: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80237234: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80237238: beq         $v0, $zero, L_80237280
    if (ctx->r2 == 0) {
        // 0x8023723C: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80237280;
    }
    // 0x8023723C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80237240: lhu         $a1, 0x98($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X98);
    // 0x80237244: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80237248: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023724C: addiu       $v0, $s0, 0x9C
    ctx->r2 = ADD32(ctx->r16, 0X9C);
    // 0x80237250: ori         $a3, $zero, 0xA000
    ctx->r7 = 0 | 0XA000;
    // 0x80237254: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80237258: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x8023725C: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x80237260: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80237264: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x80237268: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8023726C: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x80237270: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80237274: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80237278: jal         0x80051E18
    // 0x8023727C: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_6;
    // 0x8023727C: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_6:
L_80237280:
    // 0x80237280: sw          $zero, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = 0;
    // 0x80237284: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80237288: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8023728C: jr          $ra
    // 0x80237290: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80237290: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8023055C_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023055C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80230560: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80230564: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80230568: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023056C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80230570: lh          $a3, 0x382($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X382);
    // 0x80230574: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80230578: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8023057C: jal         0x8004F820
    // 0x80230580: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80230580: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x80230584: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80230588: lb          $a0, 0xA7($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XA7);
    // 0x8023058C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80230590: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80230594: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80230598: bne         $a0, $v0, L_802305AC
    if (ctx->r4 != ctx->r2) {
        // 0x8023059C: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_802305AC;
    }
    // 0x8023059C: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x802305A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802305A4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x802305A8: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_802305AC:
    // 0x802305AC: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x802305B0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802305B4: bne         $v1, $v0, L_80230644
    if (ctx->r3 != ctx->r2) {
        // 0x802305B8: nop
    
            goto L_80230644;
    }
    // 0x802305B8: nop

    // 0x802305BC: lbu         $v1, 0x64($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X64);
    // 0x802305C0: lbu         $a0, 0x65($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X65);
    // 0x802305C4: lbu         $a1, 0x66($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X66);
    // 0x802305C8: lbu         $v0, 0x64($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X64);
    // 0x802305CC: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x802305D0: andi        $a0, $a0, 0x1F
    ctx->r4 = ctx->r4 & 0X1F;
    // 0x802305D4: andi        $a1, $a1, 0x1F
    ctx->r5 = ctx->r5 & 0X1F;
    // 0x802305D8: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x802305DC: sll         $a0, $a0, 5
    ctx->r4 = S32(ctx->r4 << 5);
    // 0x802305E0: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x802305E4: sb          $v0, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r2;
    // 0x802305E8: lbu         $v0, 0x65($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X65);
    // 0x802305EC: lb          $a0, 0x64($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X64);
    // 0x802305F0: sll         $a1, $a1, 10
    ctx->r5 = S32(ctx->r5 << 10);
    // 0x802305F4: or          $v1, $v1, $a1
    ctx->r3 = ctx->r3 | ctx->r5;
    // 0x802305F8: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x802305FC: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x80230600: bgez        $a0, L_8023061C
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80230604: sb          $v0, 0x65($s0)
        MEM_B(0X65, ctx->r16) = ctx->r2;
            goto L_8023061C;
    }
    // 0x80230604: sb          $v0, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r2;
    // 0x80230608: lhu         $v0, 0x15E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X15E);
    // 0x8023060C: sb          $zero, 0x64($s0)
    MEM_B(0X64, ctx->r16) = 0;
    // 0x80230610: sb          $zero, 0x65($s0)
    MEM_B(0X65, ctx->r16) = 0;
    // 0x80230614: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x80230618: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
L_8023061C:
    // 0x8023061C: lh          $v0, 0x15E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X15E);
    // 0x80230620: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x80230624: beq         $v0, $zero, L_80230644
    if (ctx->r2 == 0) {
        // 0x80230628: nop
    
            goto L_80230644;
    }
    // 0x80230628: nop

    // 0x8023062C: lbu         $v0, 0x66($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X66);
    // 0x80230630: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80230634: sb          $v0, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r2;
    // 0x80230638: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8023063C: bltzl       $v0, L_80230644
    if (SIGNED(ctx->r2) < 0) {
        // 0x80230640: sb          $zero, 0x66($s0)
        MEM_B(0X66, ctx->r16) = 0;
            goto L_80230644;
    }
    goto skip_0;
    // 0x80230640: sb          $zero, 0x66($s0)
    MEM_B(0X66, ctx->r16) = 0;
    skip_0:
L_80230644:
    // 0x80230644: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80230648: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023064C: jr          $ra
    // 0x80230650: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80230650: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227BF0_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227BF0: addiu       $a1, $a0, 0x328
    ctx->r5 = ADD32(ctx->r4, 0X328);
    // 0x80227BF4: lui         $a2, 0x8024
    ctx->r6 = S32(0X8024 << 16);
    // 0x80227BF8: addiu       $a2, $a2, 0x76C
    ctx->r6 = ADD32(ctx->r6, 0X76C);
    // 0x80227BFC: sh          $zero, 0x64($a0)
    MEM_H(0X64, ctx->r4) = 0;
    // 0x80227C00: sw          $zero, 0x374($a0)
    MEM_W(0X374, ctx->r4) = 0;
L_80227C04:
    // 0x80227C04: lw          $v0, 0x4C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4C);
    // 0x80227C08: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80227C0C: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x80227C10: lhu         $v0, 0x64($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X64);
    // 0x80227C14: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80227C18: sh          $v0, 0x64($a0)
    MEM_H(0X64, ctx->r4) = ctx->r2;
    // 0x80227C1C: lhu         $v1, 0x2($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X2);
    // 0x80227C20: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227C24: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80227C28: andi        $v1, $v1, 0xF
    ctx->r3 = ctx->r3 & 0XF;
    // 0x80227C2C: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80227C30: bne         $v1, $zero, L_80227C50
    if (ctx->r3 != 0) {
        // 0x80227C34: nop
    
            goto L_80227C50;
    }
    // 0x80227C34: nop

    // 0x80227C38: lw          $v0, 0x4C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4C);
    // 0x80227C3C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227C40: sw          $v0, 0x4C($a1)
    MEM_W(0X4C, ctx->r5) = ctx->r2;
    // 0x80227C44: slti        $v0, $v0, 0x2
    ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x80227C48: bne         $v0, $zero, L_80227C04
    if (ctx->r2 != 0) {
        // 0x80227C4C: nop
    
            goto L_80227C04;
    }
    // 0x80227C4C: nop

L_80227C50:
    // 0x80227C50: jr          $ra
    // 0x80227C54: lw          $v0, 0x4C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4C);
    TRACE_RETURN()
    return;
    // 0x80227C54: lw          $v0, 0x4C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4C);
;}
RECOMP_FUNC void func_8022FBB4_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FBB4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022FBB8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022FBBC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022FBC0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8022FBC4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022FBC8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022FBCC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022FBD0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022FBD4: lw          $v0, 0xAFC($at)
    ctx->r2 = MEM_W(ctx->r1, 0XAFC);
    // 0x8022FBD8: jalr        $v0
    // 0x8022FBDC: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022FBDC: nop

    after_0:
    // 0x8022FBE0: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022FBE4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022FBE8: bne         $v1, $v0, L_8022FCA4
    if (ctx->r3 != ctx->r2) {
        // 0x8022FBEC: nop
    
            goto L_8022FCA4;
    }
    // 0x8022FBEC: nop

    // 0x8022FBF0: lb          $v0, 0x387($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X387);
    // 0x8022FBF4: bne         $v0, $zero, L_8022FC88
    if (ctx->r2 != 0) {
        // 0x8022FBF8: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022FC88;
    }
    // 0x8022FBF8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022FBFC: lbu         $v0, 0x64($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X64);
    // 0x8022FC00: lbu         $v1, 0x65($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X65);
    // 0x8022FC04: lbu         $a0, 0x66($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X66);
    // 0x8022FC08: lbu         $a1, 0x66($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X66);
    // 0x8022FC0C: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x8022FC10: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x8022FC14: andi        $a0, $a0, 0x1F
    ctx->r4 = ctx->r4 & 0X1F;
    // 0x8022FC18: sll         $v1, $v1, 5
    ctx->r3 = S32(ctx->r3 << 5);
    // 0x8022FC1C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8022FC20: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    // 0x8022FC24: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x8022FC28: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022FC2C: lhu         $a0, 0x15E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X15E);
    // 0x8022FC30: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8022FC34: sb          $a1, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r5;
    // 0x8022FC38: lb          $v1, 0x66($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X66);
    // 0x8022FC3C: addiu       $v0, $zero, -0x8000
    ctx->r2 = ADD32(0, -0X8000);
    // 0x8022FC40: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x8022FC44: slti        $v1, $v1, 0x10
    ctx->r3 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
    // 0x8022FC48: bne         $v1, $zero, L_8022FCA4
    if (ctx->r3 != 0) {
        // 0x8022FC4C: sh          $v0, 0x15E($s0)
        MEM_H(0X15E, ctx->r16) = ctx->r2;
            goto L_8022FCA4;
    }
    // 0x8022FC4C: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022FC50: lb          $v1, 0x64($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X64);
    // 0x8022FC54: andi        $v0, $v0, 0x7FFF
    ctx->r2 = ctx->r2 & 0X7FFF;
    // 0x8022FC58: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022FC5C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022FC60: sb          $v0, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r2;
    // 0x8022FC64: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022FC68: beq         $v1, $v0, L_8022FCA4
    if (ctx->r3 == ctx->r2) {
        // 0x8022FC6C: addu        $a0, $v1, $zero
        ctx->r4 = ADD32(ctx->r3, 0);
            goto L_8022FCA4;
    }
    // 0x8022FC6C: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x8022FC70: lbu         $v0, 0x65($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X65);
    // 0x8022FC74: addiu       $v1, $a0, 0x4
    ctx->r3 = ADD32(ctx->r4, 0X4);
    // 0x8022FC78: sb          $v1, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r3;
    // 0x8022FC7C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8022FC80: j           L_8022FCA4
    // 0x8022FC84: sb          $v0, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r2;
        goto L_8022FCA4;
    // 0x8022FC84: sb          $v0, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r2;
L_8022FC88:
    // 0x8022FC88: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022FC8C: sb          $v0, 0x387($s0)
    MEM_B(0X387, ctx->r16) = ctx->r2;
    // 0x8022FC90: addiu       $v0, $zero, -0x8000
    ctx->r2 = ADD32(0, -0X8000);
    // 0x8022FC94: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022FC98: sb          $zero, 0x66($s0)
    MEM_B(0X66, ctx->r16) = 0;
    // 0x8022FC9C: sb          $zero, 0x65($s0)
    MEM_B(0X65, ctx->r16) = 0;
    // 0x8022FCA0: sb          $zero, 0x64($s0)
    MEM_B(0X64, ctx->r16) = 0;
L_8022FCA4:
    // 0x8022FCA4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8022FCA8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022FCAC: jr          $ra
    // 0x8022FCB0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022FCB0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80225FE8_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225FE8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80225FEC: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80225FF0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225FF4: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x80225FF8: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80225FFC: lhu         $a2, 0x56($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X56);
    // 0x80226000: lhu         $v0, 0x364($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X364);
    // 0x80226004: addiu       $a0, $s0, 0x34C
    ctx->r4 = ADD32(ctx->r16, 0X34C);
    // 0x80226008: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022600C: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x80226010: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x80226014: jal         0x800540EC
    // 0x80226018: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_800540EC_2F4EC(rdram, ctx);
        goto after_0;
    // 0x80226018: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_0:
    // 0x8022601C: beq         $v0, $zero, L_80226030
    if (ctx->r2 == 0) {
        // 0x80226020: nop
    
            goto L_80226030;
    }
    // 0x80226020: nop

    // 0x80226024: lhu         $v0, 0x328($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X328);
    // 0x80226028: j           L_80226038
    // 0x8022602C: ori         $v0, $v0, 0x100
    ctx->r2 = ctx->r2 | 0X100;
        goto L_80226038;
    // 0x8022602C: ori         $v0, $v0, 0x100
    ctx->r2 = ctx->r2 | 0X100;
L_80226030:
    // 0x80226030: lhu         $v0, 0x328($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X328);
    // 0x80226034: andi        $v0, $v0, 0xFEFF
    ctx->r2 = ctx->r2 & 0XFEFF;
L_80226038:
    // 0x80226038: sh          $v0, 0x328($s0)
    MEM_H(0X328, ctx->r16) = ctx->r2;
    // 0x8022603C: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80226040: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80226044: beq         $v0, $zero, L_80226054
    if (ctx->r2 == 0) {
        // 0x80226048: nop
    
            goto L_80226054;
    }
    // 0x80226048: nop

    // 0x8022604C: jal         0x80227C58
    // 0x80226050: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80227C58_ovl4(rdram, ctx);
        goto after_1;
    // 0x80226050: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_80226054:
    // 0x80226054: lhu         $a2, 0x56($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X56);
    // 0x80226058: lhu         $v0, 0x3C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3C);
    // 0x8022605C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80226060: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80226064: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x80226068: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    // 0x8022606C: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x80226070: jal         0x8004F820
    // 0x80226074: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x80226074: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_2:
    // 0x80226078: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022607C: sh          $v1, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r3;
    // 0x80226080: lhu         $a0, 0x3C($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X3C);
    // 0x80226084: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x80226088: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022608C: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x80226090: addiu       $v0, $v0, 0x500
    ctx->r2 = ADD32(ctx->r2, 0X500);
    // 0x80226094: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80226098: slti        $v0, $v0, 0xA00
    ctx->r2 = SIGNED(ctx->r2) < 0XA00 ? 1 : 0;
    // 0x8022609C: beq         $v0, $zero, L_802260A8
    if (ctx->r2 == 0) {
        // 0x802260A0: addu        $v0, $a0, $v1
        ctx->r2 = ADD32(ctx->r4, ctx->r3);
            goto L_802260A8;
    }
    // 0x802260A0: addu        $v0, $a0, $v1
    ctx->r2 = ADD32(ctx->r4, ctx->r3);
    // 0x802260A4: sh          $v0, 0x3C($s1)
    MEM_H(0X3C, ctx->r17) = ctx->r2;
L_802260A8:
    // 0x802260A8: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802260AC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802260B0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802260B4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802260B8: lw          $v0, 0x724($at)
    ctx->r2 = MEM_W(ctx->r1, 0X724);
    // 0x802260BC: jalr        $v0
    // 0x802260C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x802260C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x802260C4: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x802260C8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802260CC: beq         $v0, $zero, L_80226158
    if (ctx->r2 == 0) {
        // 0x802260D0: nop
    
            goto L_80226158;
    }
    // 0x802260D0: nop

    // 0x802260D4: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x802260D8: sltiu       $v0, $v1, 0xE
    ctx->r2 = ctx->r3 < 0XE ? 1 : 0;
    // 0x802260DC: beq         $v0, $zero, L_80226144
    if (ctx->r2 == 0) {
        // 0x802260E0: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80226144;
    }
    // 0x802260E0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802260E4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802260E8: addu        $at, $at, $v0
    gpr jr_addend_802260F0 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802260EC: lw          $v0, 0x1460($at)
    ctx->r2 = ADD32(ctx->r1, 0X1460);
    // 0x802260F0: jr          $v0
    // 0x802260F4: nop

    switch (jr_addend_802260F0 >> 2) {
        case 0: goto L_80226128; break;
        case 1: goto L_80226144; break;
        case 2: goto L_80226144; break;
        case 3: goto L_80226128; break;
        case 4: goto L_80226110; break;
        case 5: goto L_80226144; break;
        case 6: goto L_802260F8; break;
        case 7: goto L_80226104; break;
        case 8: goto L_80226138; break;
        case 9: goto L_80226138; break;
        case 10: goto L_80226144; break;
        case 11: goto L_80226128; break;
        case 12: goto L_8022611C; break;
        case 13: goto L_80226128; break;
        default: switch_error(__func__, 0x802260F0, 0x80241460);
    }
    // 0x802260F4: nop

L_802260F8:
    // 0x802260F8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x802260FC: j           L_80226148
    // 0x80226100: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80226148;
    // 0x80226100: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80226104:
    // 0x80226104: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80226108: j           L_80226148
    // 0x8022610C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80226148;
    // 0x8022610C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80226110:
    // 0x80226110: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226114: j           L_80226148
    // 0x80226118: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80226148;
    // 0x80226118: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022611C:
    // 0x8022611C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80226120: j           L_80226148
    // 0x80226124: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80226148;
    // 0x80226124: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80226128:
    // 0x80226128: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022612C: andi        $v0, $v0, 0x100
    ctx->r2 = ctx->r2 & 0X100;
    // 0x80226130: beql        $v0, $zero, L_80226148
    if (ctx->r2 == 0) {
        // 0x80226134: sb          $zero, 0x9($s0)
        MEM_B(0X9, ctx->r16) = 0;
            goto L_80226148;
    }
    goto skip_0;
    // 0x80226134: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    skip_0:
L_80226138:
    // 0x80226138: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022613C: j           L_80226148
    // 0x80226140: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80226148;
    // 0x80226140: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80226144:
    // 0x80226144: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_80226148:
    // 0x80226148: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8022614C: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80226150: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
    // 0x80226154: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_80226158:
    // 0x80226158: lh          $v0, 0x34($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X34);
    // 0x8022615C: beq         $v0, $zero, L_8022616C
    if (ctx->r2 == 0) {
        // 0x80226160: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022616C;
    }
    // 0x80226160: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80226164: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80226168: sh          $v0, 0x34($s1)
    MEM_H(0X34, ctx->r17) = ctx->r2;
L_8022616C:
    // 0x8022616C: lh          $v0, 0xA($s1)
    ctx->r2 = MEM_H(ctx->r17, 0XA);
    // 0x80226170: beq         $v0, $zero, L_80226180
    if (ctx->r2 == 0) {
        // 0x80226174: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80226180;
    }
    // 0x80226174: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80226178: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022617C: sh          $v0, 0xA($s1)
    MEM_H(0XA, ctx->r17) = ctx->r2;
L_80226180:
    // 0x80226180: lh          $v0, 0x36($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X36);
    // 0x80226184: beq         $v0, $zero, L_80226194
    if (ctx->r2 == 0) {
        // 0x80226188: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80226194;
    }
    // 0x80226188: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022618C: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80226190: sh          $v0, 0x36($s1)
    MEM_H(0X36, ctx->r17) = ctx->r2;
L_80226194:
    // 0x80226194: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80226198: andi        $v0, $v0, 0x800
    ctx->r2 = ctx->r2 & 0X800;
    // 0x8022619C: beq         $v0, $zero, L_80226250
    if (ctx->r2 == 0) {
        // 0x802261A0: nop
    
            goto L_80226250;
    }
    // 0x802261A0: nop

    // 0x802261A4: lhu         $v0, 0x38($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X38);
    // 0x802261A8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802261AC: sh          $v0, 0x38($s1)
    MEM_H(0X38, ctx->r17) = ctx->r2;
    // 0x802261B0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802261B4: bgez        $v0, L_80226250
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802261B8: nop
    
            goto L_80226250;
    }
    // 0x802261B8: nop

    // 0x802261BC: jal         0x8004F144
    // 0x802261C0: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_4;
    // 0x802261C0: nop

    after_4:
    // 0x802261C4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802261C8: beq         $v1, $zero, L_80226204
    if (ctx->r3 == 0) {
        // 0x802261CC: sw          $v1, 0x50($s1)
        MEM_W(0X50, ctx->r17) = ctx->r3;
            goto L_80226204;
    }
    // 0x802261CC: sw          $v1, 0x50($s1)
    MEM_W(0X50, ctx->r17) = ctx->r3;
    // 0x802261D0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802261D4: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x802261D8: lw          $v1, 0x50($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X50);
    // 0x802261DC: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x802261E0: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x802261E4: lw          $v1, 0x50($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X50);
    // 0x802261E8: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x802261EC: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    // 0x802261F0: lw          $a0, 0x50($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X50);
    // 0x802261F4: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x802261F8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802261FC: jal         0x8009A3B4
    // 0x80226200: addiu       $a0, $a0, 0x38
    ctx->r4 = ADD32(ctx->r4, 0X38);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x80226200: addiu       $a0, $a0, 0x38
    ctx->r4 = ADD32(ctx->r4, 0X38);
    after_5:
L_80226204:
    // 0x80226204: jal         0x8004F418
    // 0x80226208: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_6;
    // 0x80226208: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x8022620C: lw          $a0, 0x44($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X44);
    // 0x80226210: jal         0x8004F5C4
    // 0x80226214: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_7;
    // 0x80226214: nop

    after_7:
    // 0x80226218: jal         0x8004F5C4
    // 0x8022621C: lw          $a0, 0x48($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X48);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_8;
    // 0x8022621C: lw          $a0, 0x48($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X48);
    after_8:
    // 0x80226220: lw          $v0, 0x40($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X40);
    // 0x80226224: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226228: addiu       $s0, $a0, 0x180
    ctx->r16 = ADD32(ctx->r4, 0X180);
    // 0x8022622C: lbu         $v1, 0xF($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0XF);
    // 0x80226230: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80226234: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80226238: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022623C: jal         0x8007A290
    // 0x80226240: sb          $v1, 0xF($v0)
    MEM_B(0XF, ctx->r2) = ctx->r3;
    func_8007A290_55690(rdram, ctx);
        goto after_9;
    // 0x80226240: sb          $v1, 0xF($v0)
    MEM_B(0XF, ctx->r2) = ctx->r3;
    after_9:
    // 0x80226244: addiu       $a0, $zero, 0xA1
    ctx->r4 = ADD32(0, 0XA1);
    // 0x80226248: jal         0x8002A33C
    // 0x8022624C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_10;
    // 0x8022624C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_10:
L_80226250:
    // 0x80226250: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x80226254: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80226258: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022625C: jr          $ra
    // 0x80226260: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80226260: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_802323B0_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802323B0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802323B4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802323B8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802323BC: jal         0x80233148
    // 0x802323C0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_80233148_ovl4(rdram, ctx);
        goto after_0;
    // 0x802323C0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x802323C4: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x802323C8: bgez        $v0, L_802323DC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802323CC: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_802323DC;
    }
    // 0x802323CC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802323D0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x802323D4: j           L_80232420
    // 0x802323D8: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
        goto L_80232420;
    // 0x802323D8: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_802323DC:
    // 0x802323DC: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802323E0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802323E4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802323E8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802323EC: lw          $v0, 0xBCC($at)
    ctx->r2 = MEM_W(ctx->r1, 0XBCC);
    // 0x802323F0: jalr        $v0
    // 0x802323F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x802323F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802323F8: lh          $v0, 0x34C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X34C);
    // 0x802323FC: beq         $v0, $zero, L_8023240C
    if (ctx->r2 == 0) {
        // 0x80232400: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8023240C;
    }
    // 0x80232400: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80232404: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80232408: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
L_8023240C:
    // 0x8023240C: lh          $v0, 0x350($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X350);
    // 0x80232410: beq         $v0, $zero, L_80232420
    if (ctx->r2 == 0) {
        // 0x80232414: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80232420;
    }
    // 0x80232414: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80232418: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8023241C: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
L_80232420:
    // 0x80232420: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80232424: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80232428: jr          $ra
    // 0x8023242C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8023242C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802375A8_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802375A8: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x802375AC: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x802375B0: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x802375B4: addiu       $a0, $s5, 0x2C
    ctx->r4 = ADD32(ctx->r21, 0X2C);
    // 0x802375B8: addiu       $a1, $s5, 0x14
    ctx->r5 = ADD32(ctx->r21, 0X14);
    // 0x802375BC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802375C0: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x802375C4: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x802375C8: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x802375CC: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x802375D0: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x802375D4: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x802375D8: jal         0x8009A3B4
    // 0x802375DC: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x802375DC: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    after_0:
    // 0x802375E0: addiu       $a0, $s5, 0x34
    ctx->r4 = ADD32(ctx->r21, 0X34);
    // 0x802375E4: addiu       $a1, $s5, 0x1C
    ctx->r5 = ADD32(ctx->r21, 0X1C);
    // 0x802375E8: jal         0x8009A3B4
    // 0x802375EC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802375EC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x802375F0: addiu       $a0, $s5, 0x5C
    ctx->r4 = ADD32(ctx->r21, 0X5C);
    // 0x802375F4: addiu       $a1, $s5, 0x54
    ctx->r5 = ADD32(ctx->r21, 0X54);
    // 0x802375F8: jal         0x8009A3B4
    // 0x802375FC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x802375FC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80237600: lbu         $a0, 0xE($s5)
    ctx->r4 = MEM_BU(ctx->r21, 0XE);
    // 0x80237604: andi        $v0, $a0, 0x20
    ctx->r2 = ctx->r4 & 0X20;
    // 0x80237608: beq         $v0, $zero, L_80237628
    if (ctx->r2 == 0) {
        // 0x8023760C: addiu       $s6, $s5, 0xC0
        ctx->r22 = ADD32(ctx->r21, 0XC0);
            goto L_80237628;
    }
    // 0x8023760C: addiu       $s6, $s5, 0xC0
    ctx->r22 = ADD32(ctx->r21, 0XC0);
    // 0x80237610: lui         $v1, 0xFF
    ctx->r3 = S32(0XFF << 16);
    // 0x80237614: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x80237618: andi        $v0, $a0, 0xDF
    ctx->r2 = ctx->r4 & 0XDF;
    // 0x8023761C: sb          $v0, 0xE($s5)
    MEM_B(0XE, ctx->r21) = ctx->r2;
    // 0x80237620: j           L_80237634
    // 0x80237624: sw          $v1, 0xB4($s5)
    MEM_W(0XB4, ctx->r21) = ctx->r3;
        goto L_80237634;
    // 0x80237624: sw          $v1, 0xB4($s5)
    MEM_W(0XB4, ctx->r21) = ctx->r3;
L_80237628:
    // 0x80237628: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8023762C: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x80237630: sw          $v0, 0xB4($s5)
    MEM_W(0XB4, ctx->r21) = ctx->r2;
L_80237634:
    // 0x80237634: jal         0x800A3450
    // 0x80237638: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80237638: nop

    after_3:
    // 0x8023763C: sh          $v0, 0x2($s6)
    MEM_H(0X2, ctx->r22) = ctx->r2;
    // 0x80237640: lbu         $v0, 0x0($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0X0);
    // 0x80237644: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80237648: beq         $v0, $zero, L_802376E4
    if (ctx->r2 == 0) {
        // 0x8023764C: nop
    
            goto L_802376E4;
    }
    // 0x8023764C: nop

    // 0x80237650: lhu         $v0, 0x0($s6)
    ctx->r2 = MEM_HU(ctx->r22, 0X0);
    // 0x80237654: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x80237658: beq         $v0, $zero, L_802376E4
    if (ctx->r2 == 0) {
        // 0x8023765C: addiu       $s0, $s5, 0x14
        ctx->r16 = ADD32(ctx->r21, 0X14);
            goto L_802376E4;
    }
    // 0x8023765C: addiu       $s0, $s5, 0x14
    ctx->r16 = ADD32(ctx->r21, 0X14);
    // 0x80237660: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237664: lb          $a1, 0xD($s5)
    ctx->r5 = MEM_B(ctx->r21, 0XD);
    // 0x80237668: lw          $v0, 0x34($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X34);
    // 0x8023766C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80237670: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x80237674: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80237678: jal         0x8009A3B4
    // 0x8023767C: addiu       $a1, $a1, 0x180
    ctx->r5 = ADD32(ctx->r5, 0X180);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8023767C: addiu       $a1, $a1, 0x180
    ctx->r5 = ADD32(ctx->r5, 0X180);
    after_4:
    // 0x80237680: addiu       $a0, $s5, 0xAC
    ctx->r4 = ADD32(ctx->r21, 0XAC);
    // 0x80237684: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80237688: lh          $v0, 0x14($s5)
    ctx->r2 = MEM_H(ctx->r21, 0X14);
    // 0x8023768C: lh          $v1, 0x16($s5)
    ctx->r3 = MEM_H(ctx->r21, 0X16);
    // 0x80237690: lh          $a3, 0x18($s5)
    ctx->r7 = MEM_H(ctx->r21, 0X18);
    // 0x80237694: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80237698: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023769C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x802376A0: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x802376A4: sw          $v0, 0x1C($s5)
    MEM_W(0X1C, ctx->r21) = ctx->r2;
    // 0x802376A8: sw          $v1, 0x20($s5)
    MEM_W(0X20, ctx->r21) = ctx->r3;
    // 0x802376AC: jal         0x8009A3B4
    // 0x802376B0: sw          $a3, 0x24($s5)
    MEM_W(0X24, ctx->r21) = ctx->r7;
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x802376B0: sw          $a3, 0x24($s5)
    MEM_W(0X24, ctx->r21) = ctx->r7;
    after_5:
    // 0x802376B4: addiu       $a0, $s5, 0x8C
    ctx->r4 = ADD32(ctx->r21, 0X8C);
    // 0x802376B8: lb          $a1, 0xD($s5)
    ctx->r5 = MEM_B(ctx->r21, 0XD);
    // 0x802376BC: lw          $v0, 0x34($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X34);
    // 0x802376C0: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x802376C4: sll         $a1, $a1, 5
    ctx->r5 = S32(ctx->r5 << 5);
    // 0x802376C8: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x802376CC: jal         0x8009A3B4
    // 0x802376D0: addiu       $a1, $a1, 0x240
    ctx->r5 = ADD32(ctx->r5, 0X240);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x802376D0: addiu       $a1, $a1, 0x240
    ctx->r5 = ADD32(ctx->r5, 0X240);
    after_6:
    // 0x802376D4: lbu         $v0, 0xD($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0XD);
    // 0x802376D8: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x802376DC: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x802376E0: sh          $v0, 0xB2($s5)
    MEM_H(0XB2, ctx->r21) = ctx->r2;
L_802376E4:
    // 0x802376E4: lhu         $v0, 0x0($s6)
    ctx->r2 = MEM_HU(ctx->r22, 0X0);
    // 0x802376E8: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x802376EC: beq         $v0, $zero, L_802376FC
    if (ctx->r2 == 0) {
        // 0x802376F0: nop
    
            goto L_802376FC;
    }
    // 0x802376F0: nop

    // 0x802376F4: jal         0x802385BC
    // 0x802376F8: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    func_802385BC_ovl4(rdram, ctx);
        goto after_7;
    // 0x802376F8: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    after_7:
L_802376FC:
    // 0x802376FC: lbu         $v0, 0x9($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0X9);
    // 0x80237700: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80237704: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80237708: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023770C: lw          $v0, 0xDBC($at)
    ctx->r2 = MEM_W(ctx->r1, 0XDBC);
    // 0x80237710: jalr        $v0
    // 0x80237714: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_8;
    // 0x80237714: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    after_8:
    // 0x80237718: lhu         $v0, 0x0($s6)
    ctx->r2 = MEM_HU(ctx->r22, 0X0);
    // 0x8023771C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80237720: beq         $v0, $zero, L_8023773C
    if (ctx->r2 == 0) {
        // 0x80237724: nop
    
            goto L_8023773C;
    }
    // 0x80237724: nop

    // 0x80237728: sb          $zero, 0x9($s5)
    MEM_B(0X9, ctx->r21) = 0;
    // 0x8023772C: sh          $zero, 0xA($s5)
    MEM_H(0XA, ctx->r21) = 0;
    // 0x80237730: lhu         $v0, 0x0($s6)
    ctx->r2 = MEM_HU(ctx->r22, 0X0);
    // 0x80237734: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
    // 0x80237738: sh          $v0, 0x0($s6)
    MEM_H(0X0, ctx->r22) = ctx->r2;
L_8023773C:
    // 0x8023773C: lh          $v0, 0xA($s6)
    ctx->r2 = MEM_H(ctx->r22, 0XA);
    // 0x80237740: beq         $v0, $zero, L_80237750
    if (ctx->r2 == 0) {
        // 0x80237744: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80237750;
    }
    // 0x80237744: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80237748: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8023774C: sh          $v0, 0xA($s6)
    MEM_H(0XA, ctx->r22) = ctx->r2;
L_80237750:
    // 0x80237750: lhu         $v0, 0x0($s6)
    ctx->r2 = MEM_HU(ctx->r22, 0X0);
    // 0x80237754: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x80237758: bne         $v0, $zero, L_802377D8
    if (ctx->r2 != 0) {
        // 0x8023775C: addiu       $a1, $s5, 0x14
        ctx->r5 = ADD32(ctx->r21, 0X14);
            goto L_802377D8;
    }
    // 0x8023775C: addiu       $a1, $s5, 0x14
    ctx->r5 = ADD32(ctx->r21, 0X14);
    // 0x80237760: addiu       $a0, $s5, 0xAC
    ctx->r4 = ADD32(ctx->r21, 0XAC);
    // 0x80237764: jal         0x8009A3B4
    // 0x80237768: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_9;
    // 0x80237768: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_9:
    // 0x8023776C: lbu         $v0, 0xD($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0XD);
    // 0x80237770: lhu         $v1, 0x58($s5)
    ctx->r3 = MEM_HU(ctx->r21, 0X58);
    // 0x80237774: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80237778: addiu       $a0, $a0, 0x1840
    ctx->r4 = ADD32(ctx->r4, 0X1840);
    // 0x8023777C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80237780: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80237784: sh          $v0, 0xB2($s5)
    MEM_H(0XB2, ctx->r21) = ctx->r2;
    // 0x80237788: sh          $v1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r3;
    // 0x8023778C: lhu         $v0, 0x54($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X54);
    // 0x80237790: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80237794: sh          $v0, 0x1842($at)
    MEM_H(0X1842, ctx->r1) = ctx->r2;
    // 0x80237798: lhu         $v0, 0x56($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X56);
    // 0x8023779C: addiu       $s0, $s5, 0x8C
    ctx->r16 = ADD32(ctx->r21, 0X8C);
    // 0x802377A0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802377A4: sh          $v0, 0x1844($at)
    MEM_H(0X1844, ctx->r1) = ctx->r2;
    // 0x802377A8: jal         0x80031428
    // 0x802377AC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80031428_C828(rdram, ctx);
        goto after_10;
    // 0x802377AC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_10:
    // 0x802377B0: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x802377B4: addiu       $a1, $a1, 0x1848
    ctx->r5 = ADD32(ctx->r5, 0X1848);
    // 0x802377B8: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x802377BC: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x802377C0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802377C4: sw          $v0, 0x184C($at)
    MEM_W(0X184C, ctx->r1) = ctx->r2;
    // 0x802377C8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802377CC: sw          $v0, 0x1850($at)
    MEM_W(0X1850, ctx->r1) = ctx->r2;
    // 0x802377D0: jal         0x80031DA8
    // 0x802377D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80031DA8_D1A8(rdram, ctx);
        goto after_11;
    // 0x802377D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_11:
L_802377D8:
    // 0x802377D8: lhu         $v0, 0x0($s6)
    ctx->r2 = MEM_HU(ctx->r22, 0X0);
    // 0x802377DC: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x802377E0: beq         $v0, $zero, L_80237864
    if (ctx->r2 == 0) {
        // 0x802377E4: addiu       $s1, $s5, 0x14
        ctx->r17 = ADD32(ctx->r21, 0X14);
            goto L_80237864;
    }
    // 0x802377E4: addiu       $s1, $s5, 0x14
    ctx->r17 = ADD32(ctx->r21, 0X14);
    // 0x802377E8: lui         $s3, 0x8024
    ctx->r19 = S32(0X8024 << 16);
    // 0x802377EC: addiu       $s3, $s3, 0x1840
    ctx->r19 = ADD32(ctx->r19, 0X1840);
    // 0x802377F0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x802377F4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802377F8: jal         0x8009A3B4
    // 0x802377FC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_12;
    // 0x802377FC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_12:
    // 0x80237800: lui         $s2, 0x8024
    ctx->r18 = S32(0X8024 << 16);
    // 0x80237804: addiu       $s2, $s2, 0x1848
    ctx->r18 = ADD32(ctx->r18, 0X1848);
    // 0x80237808: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8023780C: addiu       $s0, $s5, 0x1C
    ctx->r16 = ADD32(ctx->r21, 0X1C);
    // 0x80237810: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80237814: jal         0x8009A3B4
    // 0x80237818: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_13;
    // 0x80237818: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_13:
    // 0x8023781C: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x80237820: addiu       $a1, $zero, 0x1800
    ctx->r5 = ADD32(0, 0X1800);
    // 0x80237824: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80237828: jal         0x8004DA90
    // 0x8023782C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_14;
    // 0x8023782C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_14:
    // 0x80237830: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x80237834: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x80237838: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8023783C: jal         0x8003B564
    // 0x80237840: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_15;
    // 0x80237840: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_15:
    // 0x80237844: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80237848: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x8023784C: jal         0x8009A3B4
    // 0x80237850: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_16;
    // 0x80237850: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_16:
    // 0x80237854: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237858: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8023785C: jal         0x8009A3B4
    // 0x80237860: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_17;
    // 0x80237860: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_17:
L_80237864:
    // 0x80237864: lbu         $v0, 0x0($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0X0);
    // 0x80237868: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8023786C: beq         $v0, $zero, L_80237950
    if (ctx->r2 == 0) {
        // 0x80237870: nop
    
            goto L_80237950;
    }
    // 0x80237870: nop

    // 0x80237874: lhu         $v0, 0x0($s6)
    ctx->r2 = MEM_HU(ctx->r22, 0X0);
    // 0x80237878: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x8023787C: beq         $v0, $zero, L_80237950
    if (ctx->r2 == 0) {
        // 0x80237880: addiu       $s0, $s5, 0x14
        ctx->r16 = ADD32(ctx->r21, 0X14);
            goto L_80237950;
    }
    // 0x80237880: addiu       $s0, $s5, 0x14
    ctx->r16 = ADD32(ctx->r21, 0X14);
    // 0x80237884: lui         $s4, 0x8024
    ctx->r20 = S32(0X8024 << 16);
    // 0x80237888: addiu       $s4, $s4, 0x1840
    ctx->r20 = ADD32(ctx->r20, 0X1840);
    // 0x8023788C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x80237890: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80237894: jal         0x8009A3B4
    // 0x80237898: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_18;
    // 0x80237898: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_18:
    // 0x8023789C: lui         $s3, 0x8024
    ctx->r19 = S32(0X8024 << 16);
    // 0x802378A0: addiu       $s3, $s3, 0x1848
    ctx->r19 = ADD32(ctx->r19, 0X1848);
    // 0x802378A4: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x802378A8: addiu       $s2, $s5, 0x1C
    ctx->r18 = ADD32(ctx->r21, 0X1C);
    // 0x802378AC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802378B0: jal         0x8009A3B4
    // 0x802378B4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_19;
    // 0x802378B4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_19:
    // 0x802378B8: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x802378BC: addiu       $a1, $zero, 0x1800
    ctx->r5 = ADD32(0, 0X1800);
    // 0x802378C0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802378C4: jal         0x8004DA90
    // 0x802378C8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_20;
    // 0x802378C8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_20:
    // 0x802378CC: addiu       $s1, $s6, 0xC
    ctx->r17 = ADD32(ctx->r22, 0XC);
    // 0x802378D0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802378D4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x802378D8: jal         0x8009A3B4
    // 0x802378DC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_21;
    // 0x802378DC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_21:
    // 0x802378E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802378E4: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x802378E8: jal         0x8009A3B4
    // 0x802378EC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_22;
    // 0x802378EC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_22:
    // 0x802378F0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x802378F4: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x802378F8: jal         0x8009A3B4
    // 0x802378FC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_23;
    // 0x802378FC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_23:
    // 0x80237900: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80237904: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x80237908: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8023790C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80237910: ori         $v0, $zero, 0xA000
    ctx->r2 = 0 | 0XA000;
    // 0x80237914: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80237918: lbu         $v1, 0x1($s5)
    ctx->r3 = MEM_BU(ctx->r21, 0X1);
    // 0x8023791C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x80237920: addiu       $v0, $s6, 0x14
    ctx->r2 = ADD32(ctx->r22, 0X14);
    // 0x80237924: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80237928: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x8023792C: lbu         $v1, 0x8($s6)
    ctx->r3 = MEM_BU(ctx->r22, 0X8);
    // 0x80237930: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    // 0x80237934: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x80237938: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8023793C: lui         $v0, 0x988
    ctx->r2 = S32(0X988 << 16);
    // 0x80237940: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x80237944: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80237948: jal         0x80051F9C
    // 0x8023794C: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    func_80051F9C_2D39C(rdram, ctx);
        goto after_24;
    // 0x8023794C: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    after_24:
L_80237950:
    // 0x80237950: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x80237954: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x80237958: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x8023795C: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x80237960: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x80237964: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x80237968: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x8023796C: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x80237970: jr          $ra
    // 0x80237974: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x80237974: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_8023CAFC_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023CAFC: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x8023CB00: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8023CB04: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8023CB08: lbu         $v1, 0x12F0($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X12F0);
    // 0x8023CB0C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023CB10: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8023CB14: sw          $ra, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r31;
    // 0x8023CB18: sw          $fp, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r30;
    // 0x8023CB1C: sw          $s7, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r23;
    // 0x8023CB20: sw          $s6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r22;
    // 0x8023CB24: sw          $s5, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r21;
    // 0x8023CB28: sw          $s4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r20;
    // 0x8023CB2C: sw          $s3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r19;
    // 0x8023CB30: sw          $s2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r18;
    // 0x8023CB34: sw          $s1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r17;
    // 0x8023CB38: sw          $s0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r16;
    // 0x8023CB3C: beq         $v1, $v0, L_8023CBA8
    if (ctx->r3 == ctx->r2) {
        // 0x8023CB40: sw          $t2, 0x4C($sp)
        MEM_W(0X4C, ctx->r29) = ctx->r10;
            goto L_8023CBA8;
    }
    // 0x8023CB40: sw          $t2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r10;
    // 0x8023CB44: lui         $a3, 0x801C
    ctx->r7 = S32(0X801C << 16);
    // 0x8023CB48: addiu       $a3, $a3, -0x3BC8
    ctx->r7 = ADD32(ctx->r7, -0X3BC8);
    // 0x8023CB4C: lb          $t0, 0x0($a3)
    ctx->r8 = MEM_B(ctx->r7, 0X0);
    // 0x8023CB50: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8023CB54: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8023CB58: addiu       $a0, $a0, 0x12F0
    ctx->r4 = ADD32(ctx->r4, 0X12F0);
    // 0x8023CB5C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023CB60: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
L_8023CB64:
    // 0x8023CB64: bnel        $t0, $v0, L_8023CB9C
    if (ctx->r8 != ctx->r2) {
        // 0x8023CB68: addiu       $a0, $a0, 0x8
        ctx->r4 = ADD32(ctx->r4, 0X8);
            goto L_8023CB9C;
    }
    goto skip_0;
    // 0x8023CB68: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    skip_0:
    // 0x8023CB6C: lb          $v1, 0x1($a3)
    ctx->r3 = MEM_B(ctx->r7, 0X1);
    // 0x8023CB70: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8023CB74: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8023CB78: lbu         $v0, 0x12F1($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X12F1);
    // 0x8023CB7C: bnel        $v1, $v0, L_8023CB9C
    if (ctx->r3 != ctx->r2) {
        // 0x8023CB80: addiu       $a0, $a0, 0x8
        ctx->r4 = ADD32(ctx->r4, 0X8);
            goto L_8023CB9C;
    }
    goto skip_1;
    // 0x8023CB80: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    skip_1:
    // 0x8023CB84: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023CB88: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x8023CB8C: lw          $a1, 0x12F4($at)
    ctx->r5 = MEM_W(ctx->r1, 0X12F4);
    // 0x8023CB90: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8023CB94: j           L_8023CBA8
    // 0x8023CB98: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
        goto L_8023CBA8;
    // 0x8023CB98: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
L_8023CB9C:
    // 0x8023CB9C: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x8023CBA0: bne         $v0, $t1, L_8023CB64
    if (ctx->r2 != ctx->r9) {
        // 0x8023CBA4: addiu       $a1, $a1, 0x8
        ctx->r5 = ADD32(ctx->r5, 0X8);
            goto L_8023CB64;
    }
    // 0x8023CBA4: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
L_8023CBA8:
    // 0x8023CBA8: beq         $a2, $zero, L_8023CE28
    if (ctx->r6 == 0) {
        // 0x8023CBAC: nop
    
            goto L_8023CE28;
    }
    // 0x8023CBAC: nop

    // 0x8023CBB0: lui         $t3, 0x801C
    ctx->r11 = S32(0X801C << 16);
    // 0x8023CBB4: lbu         $t3, -0x39A6($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X39A6);
    // 0x8023CBB8: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8023CBBC: addiu       $v1, $v1, -0x3B9A
    ctx->r3 = ADD32(ctx->r3, -0X3B9A);
    // 0x8023CBC0: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
    // 0x8023CBC4: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8023CBC8: lbu         $fp, 0x0($v1)
    ctx->r30 = MEM_BU(ctx->r3, 0X0);
    // 0x8023CBCC: lui         $t3, 0x801A
    ctx->r11 = S32(0X801A << 16);
    // 0x8023CBD0: lbu         $t3, 0x53D4($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X53D4);
    // 0x8023CBD4: sw          $t2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r10;
    // 0x8023CBD8: lui         $t2, 0x8020
    ctx->r10 = S32(0X8020 << 16);
    // 0x8023CBDC: lbu         $t2, 0x6B40($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X6B40);
    // 0x8023CBE0: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
    // 0x8023CBE4: lui         $t3, 0x801B
    ctx->r11 = S32(0X801B << 16);
    // 0x8023CBE8: lbu         $t3, -0x35BC($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X35BC);
    // 0x8023CBEC: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x8023CBF0: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x8023CBF4: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x8023CBF8: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x8023CBFC: slt         $v0, $t2, $t3
    ctx->r2 = SIGNED(ctx->r10) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x8023CC00: beq         $v0, $zero, L_8023CE28
    if (ctx->r2 == 0) {
        // 0x8023CC04: nop
    
            goto L_8023CE28;
    }
    // 0x8023CC04: nop

L_8023CC08:
    // 0x8023CC08: lw          $s7, 0x1C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X1C);
    // 0x8023CC0C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8023CC10: slt         $v0, $s7, $t2
    ctx->r2 = SIGNED(ctx->r23) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x8023CC14: beq         $v0, $zero, L_8023CE10
    if (ctx->r2 == 0) {
        // 0x8023CC18: nop
    
            goto L_8023CE10;
    }
    // 0x8023CC18: nop

    // 0x8023CC1C: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x8023CC20: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8023CC24: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x8023CC28: sw          $t3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r11;
L_8023CC2C:
    // 0x8023CC2C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8023CC30: lhu         $v1, 0x49AE($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X49AE);
    // 0x8023CC34: lw          $t3, 0x54($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X54);
    // 0x8023CC38: mult        $t3, $v1
    result = S64(S32(ctx->r11)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023CC3C: mflo        $v1
    ctx->r3 = lo;
    // 0x8023CC40: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8023CC44: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8023CC48: lw          $a0, -0x35C0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X35C0);
    // 0x8023CC4C: subu        $v0, $s7, $t2
    ctx->r2 = SUB32(ctx->r23, ctx->r10);
    // 0x8023CC50: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8023CC54: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8023CC58: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8023CC5C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023CC60: lh          $s6, 0x0($v1)
    ctx->r22 = MEM_H(ctx->r3, 0X0);
    // 0x8023CC64: blez        $s6, L_8023CDFC
    if (SIGNED(ctx->r22) <= 0) {
        // 0x8023CC68: sll         $v0, $s6, 1
        ctx->r2 = S32(ctx->r22 << 1);
            goto L_8023CDFC;
    }
    // 0x8023CC68: sll         $v0, $s6, 1
    ctx->r2 = S32(ctx->r22 << 1);
    // 0x8023CC6C: addu        $v0, $v0, $s6
    ctx->r2 = ADD32(ctx->r2, ctx->r22);
    // 0x8023CC70: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023CC74: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8023CC78: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023CC7C: lw          $v1, 0x5088($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X5088);
    // 0x8023CC80: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x8023CC84: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x8023CC88: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
    // 0x8023CC8C: sw          $v1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r3;
L_8023CC90:
    // 0x8023CC90: lw          $v0, 0x4($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X4);
    // 0x8023CC94: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x8023CC98: bnel        $v0, $t3, L_8023CDF0
    if (ctx->r2 != ctx->r11) {
        // 0x8023CC9C: addiu       $s5, $s5, 0x10
        ctx->r21 = ADD32(ctx->r21, 0X10);
            goto L_8023CDF0;
    }
    goto skip_2;
    // 0x8023CC9C: addiu       $s5, $s5, 0x10
    ctx->r21 = ADD32(ctx->r21, 0X10);
    skip_2:
    // 0x8023CCA0: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x8023CCA4: addu        $s2, $s5, $zero
    ctx->r18 = ADD32(ctx->r21, 0);
L_8023CCA8:
    // 0x8023CCA8: jal         0x8004F2C4
    // 0x8023CCAC: nop

    func_8004F2C4_2A6C4(rdram, ctx);
        goto after_0;
    // 0x8023CCAC: nop

    after_0:
    // 0x8023CCB0: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8023CCB4: beql        $s1, $zero, L_8023CDC8
    if (ctx->r17 == 0) {
        // 0x8023CCB8: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_8023CDC8;
    }
    goto skip_3;
    // 0x8023CCB8: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_3:
    // 0x8023CCBC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8023CCC0: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x8023CCC4: addiu       $v0, $zero, 0x2F
    ctx->r2 = ADD32(0, 0X2F);
    // 0x8023CCC8: addu        $s0, $s2, $s3
    ctx->r16 = ADD32(ctx->r18, ctx->r19);
    // 0x8023CCCC: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
    // 0x8023CCD0: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x8023CCD4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023CCD8: addiu       $a1, $s1, 0x3
    ctx->r5 = ADD32(ctx->r17, 0X3);
    // 0x8023CCDC: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
    // 0x8023CCE0: jal         0x8004D5D4
    // 0x8023CCE4: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_1;
    // 0x8023CCE4: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    after_1:
    // 0x8023CCE8: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8023CCEC: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x8023CCF0: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x8023CCF4: addiu       $a1, $a1, 0x5080
    ctx->r5 = ADD32(ctx->r5, 0X5080);
    // 0x8023CCF8: addu        $a1, $s4, $a1
    ctx->r5 = ADD32(ctx->r20, ctx->r5);
    // 0x8023CCFC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8023CD00: sb          $fp, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r30;
    // 0x8023CD04: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8023CD08: jal         0x8009A3B4
    // 0x8023CD0C: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8023CD0C: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
    after_2:
    // 0x8023CD10: lb          $v0, 0xC($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XC);
    // 0x8023CD14: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8023CD18: addu        $v1, $v1, $s4
    ctx->r3 = ADD32(ctx->r3, ctx->r20);
    // 0x8023CD1C: lhu         $v1, 0x5080($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X5080);
    // 0x8023CD20: lhu         $a0, 0x8($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X8);
    // 0x8023CD24: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023CD28: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023CD2C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023CD30: lhu         $v0, 0x1430($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X1430);
    // 0x8023CD34: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8023CD38: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023CD3C: sh          $v0, 0x38($s1)
    MEM_H(0X38, ctx->r17) = ctx->r2;
    // 0x8023CD40: lb          $v0, 0xC($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XC);
    // 0x8023CD44: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8023CD48: addu        $v1, $v1, $s4
    ctx->r3 = ADD32(ctx->r3, ctx->r20);
    // 0x8023CD4C: lhu         $v1, 0x5084($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X5084);
    // 0x8023CD50: lhu         $a0, 0xC($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0XC);
    // 0x8023CD54: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023CD58: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023CD5C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023CD60: lhu         $v0, 0x1432($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X1432);
    // 0x8023CD64: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8023CD68: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023CD6C: sh          $v0, 0x3C($s1)
    MEM_H(0X3C, ctx->r17) = ctx->r2;
    // 0x8023CD70: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8023CD74: addu        $v0, $v0, $s4
    ctx->r2 = ADD32(ctx->r2, ctx->r20);
    // 0x8023CD78: lhu         $v0, 0x5082($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X5082);
    // 0x8023CD7C: lhu         $v1, 0xA($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0XA);
    // 0x8023CD80: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x8023CD84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023CD88: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023CD8C: jal         0x8002C678
    // 0x8023CD90: sh          $v0, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r2;
    func_8002C678_7A78(rdram, ctx);
        goto after_3;
    // 0x8023CD90: sh          $v0, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r2;
    after_3:
    // 0x8023CD94: lb          $a0, 0xC($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XC);
    // 0x8023CD98: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8023CD9C: jal         0x800319B4
    // 0x8023CDA0: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    func_800319B4_CDB4(rdram, ctx);
        goto after_4;
    // 0x8023CDA0: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    after_4:
    // 0x8023CDA4: sw          $s6, 0x44($s1)
    MEM_W(0X44, ctx->r17) = ctx->r22;
    // 0x8023CDA8: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8023CDAC: addu        $v0, $v0, $s4
    ctx->r2 = ADD32(ctx->r2, ctx->r20);
    // 0x8023CDB0: lw          $v0, 0x5088($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X5088);
    // 0x8023CDB4: sw          $v0, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r2;
    // 0x8023CDB8: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x8023CDBC: jal         0x80071A70
    // 0x8023CDC0: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    func_80071A70_4CE70(rdram, ctx);
        goto after_5;
    // 0x8023CDC0: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    after_5:
    // 0x8023CDC4: sw          $v0, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r2;
L_8023CDC8:
    // 0x8023CDC8: slti        $v0, $s3, 0x2
    ctx->r2 = SIGNED(ctx->r19) < 0X2 ? 1 : 0;
    // 0x8023CDCC: bne         $v0, $zero, L_8023CCA8
    if (ctx->r2 != 0) {
        // 0x8023CDD0: nop
    
            goto L_8023CCA8;
    }
    // 0x8023CDD0: nop

    // 0x8023CDD4: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8023CDD8: lbu         $v0, -0x3B9A($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3B9A);
    // 0x8023CDDC: addiu       $fp, $fp, 0x1
    ctx->r30 = ADD32(ctx->r30, 0X1);
    // 0x8023CDE0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023CDE4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8023CDE8: sb          $v0, -0x3B9A($at)
    MEM_B(-0X3B9A, ctx->r1) = ctx->r2;
    // 0x8023CDEC: addiu       $s5, $s5, 0x10
    ctx->r21 = ADD32(ctx->r21, 0X10);
L_8023CDF0:
    // 0x8023CDF0: lw          $v0, 0x0($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X0);
    // 0x8023CDF4: bne         $v0, $zero, L_8023CC90
    if (ctx->r2 != 0) {
        // 0x8023CDF8: nop
    
            goto L_8023CC90;
    }
    // 0x8023CDF8: nop

L_8023CDFC:
    // 0x8023CDFC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8023CE00: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x8023CE04: slt         $v0, $s7, $t2
    ctx->r2 = SIGNED(ctx->r23) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x8023CE08: bne         $v0, $zero, L_8023CC2C
    if (ctx->r2 != 0) {
        // 0x8023CE0C: nop
    
            goto L_8023CC2C;
    }
    // 0x8023CE0C: nop

L_8023CE10:
    // 0x8023CE10: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x8023CE14: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8023CE18: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
    // 0x8023CE1C: slt         $v0, $t3, $t2
    ctx->r2 = SIGNED(ctx->r11) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x8023CE20: bne         $v0, $zero, L_8023CC08
    if (ctx->r2 != 0) {
        // 0x8023CE24: sw          $t3, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r11;
            goto L_8023CC08;
    }
    // 0x8023CE24: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
L_8023CE28:
    // 0x8023CE28: lw          $ra, 0x7C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X7C);
    // 0x8023CE2C: lw          $fp, 0x78($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X78);
    // 0x8023CE30: lw          $s7, 0x74($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X74);
    // 0x8023CE34: lw          $s6, 0x70($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X70);
    // 0x8023CE38: lw          $s5, 0x6C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X6C);
    // 0x8023CE3C: lw          $s4, 0x68($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X68);
    // 0x8023CE40: lw          $s3, 0x64($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X64);
    // 0x8023CE44: lw          $s2, 0x60($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X60);
    // 0x8023CE48: lw          $s1, 0x5C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X5C);
    // 0x8023CE4C: lw          $s0, 0x58($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X58);
    // 0x8023CE50: jr          $ra
    // 0x8023CE54: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    TRACE_RETURN()
    return;
    // 0x8023CE54: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    // 0x8023CE58: nop

    // 0x8023CE5C: nop

;}
RECOMP_FUNC void func_8023047C_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023047C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80230480: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80230484: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80230488: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8023048C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80230490: lh          $a3, 0x382($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X382);
    // 0x80230494: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80230498: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8023049C: jal         0x8004F820
    // 0x802304A0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x802304A0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x802304A4: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x802304A8: lb          $a0, 0xA7($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XA7);
    // 0x802304AC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802304B0: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x802304B4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802304B8: bne         $a0, $v0, L_802304C4
    if (ctx->r4 != ctx->r2) {
        // 0x802304BC: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_802304C4;
    }
    // 0x802304BC: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x802304C0: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_802304C4:
    // 0x802304C4: lbu         $v0, 0x64($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X64);
    // 0x802304C8: lbu         $v1, 0x65($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X65);
    // 0x802304CC: lbu         $a0, 0x66($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X66);
    // 0x802304D0: lbu         $a1, 0x66($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X66);
    // 0x802304D4: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x802304D8: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x802304DC: andi        $a0, $a0, 0x1F
    ctx->r4 = ctx->r4 & 0X1F;
    // 0x802304E0: sll         $v1, $v1, 5
    ctx->r3 = S32(ctx->r3 << 5);
    // 0x802304E4: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x802304E8: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    // 0x802304EC: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x802304F0: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x802304F4: lhu         $a0, 0x15E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X15E);
    // 0x802304F8: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x802304FC: sb          $a1, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r5;
    // 0x80230500: lb          $v1, 0x66($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X66);
    // 0x80230504: addiu       $v0, $zero, -0x8000
    ctx->r2 = ADD32(0, -0X8000);
    // 0x80230508: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x8023050C: slti        $v1, $v1, 0x10
    ctx->r3 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
    // 0x80230510: bne         $v1, $zero, L_8023054C
    if (ctx->r3 != 0) {
        // 0x80230514: sh          $v0, 0x15E($s0)
        MEM_H(0X15E, ctx->r16) = ctx->r2;
            goto L_8023054C;
    }
    // 0x80230514: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80230518: lb          $v1, 0x64($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X64);
    // 0x8023051C: andi        $v0, $v0, 0x7FFF
    ctx->r2 = ctx->r2 & 0X7FFF;
    // 0x80230520: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80230524: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80230528: sb          $v0, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r2;
    // 0x8023052C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80230530: beq         $v1, $v0, L_8023054C
    if (ctx->r3 == ctx->r2) {
        // 0x80230534: addu        $a0, $v1, $zero
        ctx->r4 = ADD32(ctx->r3, 0);
            goto L_8023054C;
    }
    // 0x80230534: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x80230538: lbu         $v0, 0x65($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X65);
    // 0x8023053C: addiu       $v1, $a0, 0x4
    ctx->r3 = ADD32(ctx->r4, 0X4);
    // 0x80230540: sb          $v1, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r3;
    // 0x80230544: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80230548: sb          $v0, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r2;
L_8023054C:
    // 0x8023054C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80230550: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80230554: jr          $ra
    // 0x80230558: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80230558: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023357C_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023357C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80233580: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80233584: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80233588: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8023358C: jal         0x8004EFE4
    // 0x80233590: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_0;
    // 0x80233590: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    after_0:
    // 0x80233594: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80233598: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x8023359C: beq         $v1, $zero, L_802335F4
    if (ctx->r3 == 0) {
        // 0x802335A0: sw          $v1, 0x514($s0)
        MEM_W(0X514, ctx->r16) = ctx->r3;
            goto L_802335F4;
    }
    // 0x802335A0: sw          $v1, 0x514($s0)
    MEM_W(0X514, ctx->r16) = ctx->r3;
    // 0x802335A4: addiu       $v0, $zero, 0x25
    ctx->r2 = ADD32(0, 0X25);
    // 0x802335A8: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x802335AC: lw          $v1, 0x514($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X514);
    // 0x802335B0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x802335B4: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x802335B8: lw          $v0, 0x514($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X514);
    // 0x802335BC: sb          $zero, 0x3($v0)
    MEM_B(0X3, ctx->r2) = 0;
    // 0x802335C0: lw          $v1, 0x514($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X514);
    // 0x802335C4: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x802335C8: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
    // 0x802335CC: lw          $v1, 0x514($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X514);
    // 0x802335D0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802335D4: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
    // 0x802335D8: lw          $v1, 0x514($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X514);
    // 0x802335DC: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x802335E0: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
    // 0x802335E4: lw          $v1, 0x514($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X514);
    // 0x802335E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802335EC: j           L_802335FC
    // 0x802335F0: sb          $v0, 0xF($v1)
    MEM_B(0XF, ctx->r3) = ctx->r2;
        goto L_802335FC;
    // 0x802335F0: sb          $v0, 0xF($v1)
    MEM_B(0XF, ctx->r3) = ctx->r2;
L_802335F4:
    // 0x802335F4: jal         0x8004F488
    // 0x802335F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F488_2A888(rdram, ctx);
        goto after_1;
    // 0x802335F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_802335FC:
    // 0x802335FC: jal         0x8004EFE4
    // 0x80233600: nop

    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_2;
    // 0x80233600: nop

    after_2:
    // 0x80233604: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80233608: beq         $v1, $zero, L_8023366C
    if (ctx->r3 == 0) {
        // 0x8023360C: sw          $v1, 0x38($s1)
        MEM_W(0X38, ctx->r17) = ctx->r3;
            goto L_8023366C;
    }
    // 0x8023360C: sw          $v1, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->r3;
    // 0x80233610: addiu       $v0, $zero, 0x25
    ctx->r2 = ADD32(0, 0X25);
    // 0x80233614: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80233618: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x8023361C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80233620: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x80233624: lw          $v0, 0x38($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X38);
    // 0x80233628: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8023362C: sb          $a0, 0x3($v0)
    MEM_B(0X3, ctx->r2) = ctx->r4;
    // 0x80233630: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x80233634: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x80233638: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
    // 0x8023363C: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x80233640: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80233644: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
    // 0x80233648: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8023364C: beq         $v0, $zero, L_80233660
    if (ctx->r2 == 0) {
        // 0x80233650: nop
    
            goto L_80233660;
    }
    // 0x80233650: nop

    // 0x80233654: lw          $v0, 0x38($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X38);
    // 0x80233658: j           L_80233680
    // 0x8023365C: sb          $a0, 0xE($v0)
    MEM_B(0XE, ctx->r2) = ctx->r4;
        goto L_80233680;
    // 0x8023365C: sb          $a0, 0xE($v0)
    MEM_B(0XE, ctx->r2) = ctx->r4;
L_80233660:
    // 0x80233660: lw          $v0, 0x38($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X38);
    // 0x80233664: j           L_80233680
    // 0x80233668: sb          $zero, 0xE($v0)
    MEM_B(0XE, ctx->r2) = 0;
        goto L_80233680;
    // 0x80233668: sb          $zero, 0xE($v0)
    MEM_B(0XE, ctx->r2) = 0;
L_8023366C:
    // 0x8023366C: jal         0x8004F488
    // 0x80233670: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F488_2A888(rdram, ctx);
        goto after_3;
    // 0x80233670: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80233674: lw          $a0, 0x34($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X34);
    // 0x80233678: jal         0x8004F4F8
    // 0x8023367C: nop

    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_4;
    // 0x8023367C: nop

    after_4:
L_80233680:
    // 0x80233680: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80233684: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80233688: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023368C: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80233690: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80233694: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x80233698: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8023369C: jal         0x8004D5D4
    // 0x802336A0: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_5;
    // 0x802336A0: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_5:
    // 0x802336A4: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x802336A8: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x802336AC: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x802336B0: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x802336B4: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x802336B8: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x802336BC: sw          $zero, 0x4($s1)
    MEM_W(0X4, ctx->r17) = 0;
    // 0x802336C0: sw          $zero, 0x8($s1)
    MEM_W(0X8, ctx->r17) = 0;
    // 0x802336C4: sw          $zero, 0x14($s1)
    MEM_W(0X14, ctx->r17) = 0;
    // 0x802336C8: sw          $zero, 0x18($s1)
    MEM_W(0X18, ctx->r17) = 0;
    // 0x802336CC: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x802336D0: lui         $v0, 0x8019
    ctx->r2 = S32(0X8019 << 16);
    // 0x802336D4: lw          $v0, 0x3C60($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3C60);
    // 0x802336D8: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x802336DC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802336E0: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x802336E4: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x802336E8: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x802336EC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802336F0: lbu         $a1, 0xF($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0XF);
    // 0x802336F4: addiu       $a0, $s1, 0x24
    ctx->r4 = ADD32(ctx->r17, 0X24);
    // 0x802336F8: jal         0x800540BC
    // 0x802336FC: addiu       $a2, $zero, -0x60
    ctx->r6 = ADD32(0, -0X60);
    func_800540BC_2F4BC(rdram, ctx);
        goto after_6;
    // 0x802336FC: addiu       $a2, $zero, -0x60
    ctx->r6 = ADD32(0, -0X60);
    after_6:
    // 0x80233700: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x80233704: lui         $v0, 0x8019
    ctx->r2 = S32(0X8019 << 16);
    // 0x80233708: lw          $v0, 0x3C60($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3C60);
    // 0x8023370C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80233710: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80233714: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80233718: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x8023371C: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80233720: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80233724: lbu         $v1, 0x8($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X8);
    // 0x80233728: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023372C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80233730: addiu       $v0, $v0, 0xC60
    ctx->r2 = ADD32(ctx->r2, 0XC60);
    // 0x80233734: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x80233738: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x8023373C: sll         $v1, $v1, 5
    ctx->r3 = S32(ctx->r3 << 5);
    // 0x80233740: sh          $v1, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r3;
    // 0x80233744: sh          $v1, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r3;
    // 0x80233748: jal         0x8003E934
    // 0x8023374C: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    func_8003E934_19D34(rdram, ctx);
        goto after_7;
    // 0x8023374C: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    after_7:
    // 0x80233750: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80233754: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80233758: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023375C: beq         $v1, $zero, L_802337B4
    if (ctx->r3 == 0) {
        // 0x80233760: sw          $v0, 0x20($s0)
        MEM_W(0X20, ctx->r16) = ctx->r2;
            goto L_802337B4;
    }
    // 0x80233760: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80233764: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80233768: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023376C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80233770: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80233774: sb          $v0, 0x107($s0)
    MEM_B(0X107, ctx->r16) = ctx->r2;
    // 0x80233778: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023377C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80233780: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80233784: jal         0x80050294
    // 0x80233788: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_8;
    // 0x80233788: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    after_8:
    // 0x8023378C: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x80233790: ori         $v0, $v0, 0x3050
    ctx->r2 = ctx->r2 | 0X3050;
    // 0x80233794: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80233798: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023379C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802337A0: addiu       $a3, $zero, 0x51
    ctx->r7 = ADD32(0, 0X51);
    // 0x802337A4: jal         0x8004A00C
    // 0x802337A8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_8004A00C_2540C(rdram, ctx);
        goto after_9;
    // 0x802337A8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_9:
    // 0x802337AC: j           L_802337DC
    // 0x802337B0: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
        goto L_802337DC;
    // 0x802337B0: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
L_802337B4:
    // 0x802337B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802337B8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802337BC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802337C0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802337C4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x802337C8: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x802337CC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x802337D0: jal         0x80050294
    // 0x802337D4: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_10;
    // 0x802337D4: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    after_10:
    // 0x802337D8: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
L_802337DC:
    // 0x802337DC: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x802337E0: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x802337E4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802337E8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802337EC: jr          $ra
    // 0x802337F0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802337F0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8023434C_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023434C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80234350: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80234354: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80234358: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8023435C: sw          $fp, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r30;
    // 0x80234360: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x80234364: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x80234368: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x8023436C: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80234370: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80234374: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80234378: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023437C: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x80234380: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80234384: beq         $v1, $v0, L_80234408
    if (ctx->r3 == ctx->r2) {
        // 0x80234388: addiu       $s5, $s1, 0x4E0
        ctx->r21 = ADD32(ctx->r17, 0X4E0);
            goto L_80234408;
    }
    // 0x80234388: addiu       $s5, $s1, 0x4E0
    ctx->r21 = ADD32(ctx->r17, 0X4E0);
    // 0x8023438C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80234390: beql        $v0, $zero, L_802343A8
    if (ctx->r2 == 0) {
        // 0x80234394: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802343A8;
    }
    goto skip_0;
    // 0x80234394: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80234398: beq         $v1, $zero, L_802343B8
    if (ctx->r3 == 0) {
        // 0x8023439C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802343B8;
    }
    // 0x8023439C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802343A0: j           L_80234700
    // 0x802343A4: nop

        goto L_80234700;
    // 0x802343A4: nop

L_802343A8:
    // 0x802343A8: beq         $v1, $v0, L_802345EC
    if (ctx->r3 == ctx->r2) {
        // 0x802343AC: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_802345EC;
    }
    // 0x802343AC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802343B0: j           L_80234700
    // 0x802343B4: nop

        goto L_80234700;
    // 0x802343B4: nop

L_802343B8:
    // 0x802343B8: lhu         $v1, 0x4E0($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X4E0);
    // 0x802343BC: lh          $a0, 0x56($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X56);
    // 0x802343C0: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x802343C4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802343C8: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x802343CC: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x802343D0: sh          $v0, 0x4E4($s1)
    MEM_H(0X4E4, ctx->r17) = ctx->r2;
    // 0x802343D4: sh          $zero, 0x4E8($s1)
    MEM_H(0X4E8, ctx->r17) = 0;
    // 0x802343D8: sh          $zero, 0x51E($s1)
    MEM_H(0X51E, ctx->r17) = 0;
    // 0x802343DC: andi        $v1, $v1, 0xFFFB
    ctx->r3 = ctx->r3 & 0XFFFB;
    // 0x802343E0: slti        $a0, $a0, 0x801
    ctx->r4 = SIGNED(ctx->r4) < 0X801 ? 1 : 0;
    // 0x802343E4: bne         $a0, $zero, L_802343FC
    if (ctx->r4 != 0) {
        // 0x802343E8: sh          $v1, 0x4E0($s1)
        MEM_H(0X4E0, ctx->r17) = ctx->r3;
            goto L_802343FC;
    }
    // 0x802343E8: sh          $v1, 0x4E0($s1)
    MEM_H(0X4E0, ctx->r17) = ctx->r3;
    // 0x802343EC: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802343F0: addiu       $v0, $v0, 0xC84
    ctx->r2 = ADD32(ctx->r2, 0XC84);
    // 0x802343F4: j           L_80234408
    // 0x802343F8: sw          $v0, 0x520($s1)
    MEM_W(0X520, ctx->r17) = ctx->r2;
        goto L_80234408;
    // 0x802343F8: sw          $v0, 0x520($s1)
    MEM_W(0X520, ctx->r17) = ctx->r2;
L_802343FC:
    // 0x802343FC: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80234400: addiu       $v0, $v0, 0xCB4
    ctx->r2 = ADD32(ctx->r2, 0XCB4);
    // 0x80234404: sw          $v0, 0x520($s1)
    MEM_W(0X520, ctx->r17) = ctx->r2;
L_80234408:
    // 0x80234408: lh          $a0, 0x3E($s5)
    ctx->r4 = MEM_H(ctx->r21, 0X3E);
    // 0x8023440C: lh          $v1, 0x14($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X14);
    // 0x80234410: lw          $a1, 0x40($s5)
    ctx->r5 = MEM_W(ctx->r21, 0X40);
    // 0x80234414: lh          $a2, 0x18($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X18);
    // 0x80234418: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x8023441C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80234420: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80234424: addu        $a3, $v0, $a1
    ctx->r7 = ADD32(ctx->r2, ctx->r5);
    // 0x80234428: lh          $a1, 0x4($a3)
    ctx->r5 = MEM_H(ctx->r7, 0X4);
    // 0x8023442C: lh          $v0, 0x6($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X6);
    // 0x80234430: lh          $a0, 0x8($a3)
    ctx->r4 = MEM_H(ctx->r7, 0X8);
    // 0x80234434: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x80234438: sltu        $v1, $v1, $a0
    ctx->r3 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x8023443C: beq         $v1, $zero, L_802344D8
    if (ctx->r3 == 0) {
        // 0x80234440: subu        $a2, $a2, $v0
        ctx->r6 = SUB32(ctx->r6, ctx->r2);
            goto L_802344D8;
    }
    // 0x80234440: subu        $a2, $a2, $v0
    ctx->r6 = SUB32(ctx->r6, ctx->r2);
    // 0x80234444: lh          $v0, 0xA($a3)
    ctx->r2 = MEM_H(ctx->r7, 0XA);
    // 0x80234448: sltu        $v0, $a2, $v0
    ctx->r2 = ctx->r6 < ctx->r2 ? 1 : 0;
    // 0x8023444C: beql        $v0, $zero, L_802344DC
    if (ctx->r2 == 0) {
        // 0x80234450: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_802344DC;
    }
    goto skip_1;
    // 0x80234450: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    skip_1:
    // 0x80234454: lhu         $v0, 0x4($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X4);
    // 0x80234458: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023445C: sh          $v0, 0x4($s5)
    MEM_H(0X4, ctx->r21) = ctx->r2;
    // 0x80234460: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80234464: bgez        $v0, L_802344A4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80234468: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802344A4;
    }
    // 0x80234468: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023446C: lhu         $v0, 0x3E($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X3E);
    // 0x80234470: addiu       $v1, $zero, 0x20
    ctx->r3 = ADD32(0, 0X20);
    // 0x80234474: sh          $v1, 0x4($s5)
    MEM_H(0X4, ctx->r21) = ctx->r3;
    // 0x80234478: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023447C: sh          $v0, 0x3E($s5)
    MEM_H(0X3E, ctx->r21) = ctx->r2;
    // 0x80234480: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80234484: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80234488: slti        $v0, $v0, 0x4
    ctx->r2 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x8023448C: bne         $v0, $zero, L_80234510
    if (ctx->r2 != 0) {
        // 0x80234490: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80234510;
    }
    // 0x80234490: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80234494: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x80234498: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x8023449C: j           L_802345E8
    // 0x802344A0: sh          $v1, 0x4($s5)
    MEM_H(0X4, ctx->r21) = ctx->r3;
        goto L_802345E8;
    // 0x802344A0: sh          $v1, 0x4($s5)
    MEM_H(0X4, ctx->r21) = ctx->r3;
L_802344A4:
    // 0x802344A4: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x802344A8: lh          $v1, 0x3E($s5)
    ctx->r3 = MEM_H(ctx->r21, 0X3E);
    // 0x802344AC: lw          $a0, 0x40($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X40);
    // 0x802344B0: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x802344B4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802344B8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802344BC: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x802344C0: lhu         $v1, 0x56($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X56);
    // 0x802344C4: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x802344C8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802344CC: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x802344D0: j           L_80234700
    // 0x802344D4: sh          $v1, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r3;
        goto L_80234700;
    // 0x802344D4: sh          $v1, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r3;
L_802344D8:
    // 0x802344D8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_802344DC:
    // 0x802344DC: addiu       $a1, $zero, 0x200
    ctx->r5 = ADD32(0, 0X200);
    // 0x802344E0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802344E4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x802344E8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802344EC: jal         0x8004DA90
    // 0x802344F0: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x802344F0: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    after_0:
    // 0x802344F4: jal         0x80040F30
    // 0x802344F8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_1;
    // 0x802344F8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x802344FC: jal         0x8003E934
    // 0x80234500: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_2;
    // 0x80234500: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x80234504: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x80234508: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023450C: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
L_80234510:
    // 0x80234510: lbu         $v0, 0xA6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA6);
    // 0x80234514: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80234518: beq         $v0, $zero, L_80234700
    if (ctx->r2 == 0) {
        // 0x8023451C: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_80234700;
    }
    // 0x8023451C: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x80234520: addiu       $fp, $zero, 0x5
    ctx->r30 = ADD32(0, 0X5);
    // 0x80234524: addiu       $s7, $zero, 0x80
    ctx->r23 = ADD32(0, 0X80);
    // 0x80234528: addiu       $s6, $zero, 0x42
    ctx->r22 = ADD32(0, 0X42);
    // 0x8023452C: addiu       $s5, $zero, 0x2
    ctx->r21 = ADD32(0, 0X2);
    // 0x80234530: addiu       $s4, $s1, 0x14
    ctx->r20 = ADD32(ctx->r17, 0X14);
    // 0x80234534: lui         $s3, 0x8024
    ctx->r19 = S32(0X8024 << 16);
    // 0x80234538: addiu       $s3, $s3, 0xD10
    ctx->r19 = ADD32(ctx->r19, 0XD10);
L_8023453C:
    // 0x8023453C: jal         0x8004F144
    // 0x80234540: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_3;
    // 0x80234540: nop

    after_3:
    // 0x80234544: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80234548: beq         $s0, $zero, L_802345AC
    if (ctx->r16 == 0) {
        // 0x8023454C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_802345AC;
    }
    // 0x8023454C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80234550: sb          $fp, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r30;
    // 0x80234554: sb          $s7, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r23;
    // 0x80234558: sb          $s6, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r22;
    // 0x8023455C: sb          $s5, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r21;
    // 0x80234560: lh          $a1, 0x0($s3)
    ctx->r5 = MEM_H(ctx->r19, 0X0);
    // 0x80234564: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80234568: jal         0x8004DA90
    // 0x8023456C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_4;
    // 0x8023456C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_4:
    // 0x80234570: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x80234574: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x80234578: jal         0x8009A3B4
    // 0x8023457C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8023457C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x80234580: jal         0x8003E934
    // 0x80234584: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_6;
    // 0x80234584: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
    // 0x80234588: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x8023458C: addiu       $a1, $s1, 0x2C
    ctx->r5 = ADD32(ctx->r17, 0X2C);
    // 0x80234590: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80234594: jal         0x8009A3B4
    // 0x80234598: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x80234598: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
    after_7:
    // 0x8023459C: addiu       $a0, $s1, 0x1C
    ctx->r4 = ADD32(ctx->r17, 0X1C);
    // 0x802345A0: addiu       $a1, $s1, 0x34
    ctx->r5 = ADD32(ctx->r17, 0X34);
    // 0x802345A4: jal         0x8009A3B4
    // 0x802345A8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x802345A8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_8:
L_802345AC:
    // 0x802345AC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x802345B0: slti        $v0, $s2, 0x3
    ctx->r2 = SIGNED(ctx->r18) < 0X3 ? 1 : 0;
    // 0x802345B4: bne         $v0, $zero, L_8023453C
    if (ctx->r2 != 0) {
        // 0x802345B8: addiu       $s3, $s3, 0x2
        ctx->r19 = ADD32(ctx->r19, 0X2);
            goto L_8023453C;
    }
    // 0x802345B8: addiu       $s3, $s3, 0x2
    ctx->r19 = ADD32(ctx->r19, 0X2);
    // 0x802345BC: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    // 0x802345C0: addiu       $a1, $zero, 0x7D0
    ctx->r5 = ADD32(0, 0X7D0);
    // 0x802345C4: addiu       $a2, $zero, 0x1388
    ctx->r6 = ADD32(0, 0X1388);
    // 0x802345C8: addiu       $s0, $s1, 0x14
    ctx->r16 = ADD32(ctx->r17, 0X14);
    // 0x802345CC: jal         0x8003491C
    // 0x802345D0: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_8003491C_FD1C(rdram, ctx);
        goto after_9;
    // 0x802345D0: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_9:
    // 0x802345D4: addiu       $a0, $zero, 0xC2
    ctx->r4 = ADD32(0, 0XC2);
    // 0x802345D8: jal         0x8002A33C
    // 0x802345DC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_10;
    // 0x802345DC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_10:
    // 0x802345E0: j           L_80234700
    // 0x802345E4: nop

        goto L_80234700;
    // 0x802345E4: nop

L_802345E8:
    // 0x802345E8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_802345EC:
    // 0x802345EC: addiu       $a1, $zero, 0x200
    ctx->r5 = ADD32(0, 0X200);
    // 0x802345F0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802345F4: jal         0x8004DA90
    // 0x802345F8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_11;
    // 0x802345F8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_11:
    // 0x802345FC: jal         0x80040F30
    // 0x80234600: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_12;
    // 0x80234600: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_12:
    // 0x80234604: jal         0x8003E934
    // 0x80234608: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_13;
    // 0x80234608: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_13:
    // 0x8023460C: lbu         $v1, 0xA6($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA6);
    // 0x80234610: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x80234614: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80234618: andi        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 & 0X1;
    // 0x8023461C: beq         $v1, $zero, L_802346DC
    if (ctx->r3 == 0) {
        // 0x80234620: sw          $v0, 0x20($s1)
        MEM_W(0X20, ctx->r17) = ctx->r2;
            goto L_802346DC;
    }
    // 0x80234620: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x80234624: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x80234628: addiu       $fp, $zero, 0x80
    ctx->r30 = ADD32(0, 0X80);
    // 0x8023462C: addiu       $s7, $zero, 0x42
    ctx->r23 = ADD32(0, 0X42);
    // 0x80234630: addiu       $s6, $zero, 0x2
    ctx->r22 = ADD32(0, 0X2);
    // 0x80234634: addiu       $s4, $s1, 0x14
    ctx->r20 = ADD32(ctx->r17, 0X14);
    // 0x80234638: lui         $s3, 0x8024
    ctx->r19 = S32(0X8024 << 16);
    // 0x8023463C: addiu       $s3, $s3, 0xD10
    ctx->r19 = ADD32(ctx->r19, 0XD10);
L_80234640:
    // 0x80234640: jal         0x8004F144
    // 0x80234644: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_14;
    // 0x80234644: nop

    after_14:
    // 0x80234648: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8023464C: beq         $s0, $zero, L_802346A8
    if (ctx->r16 == 0) {
        // 0x80234650: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_802346A8;
    }
    // 0x80234650: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80234654: addiu       $t0, $zero, 0x5
    ctx->r8 = ADD32(0, 0X5);
    // 0x80234658: sb          $t0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r8;
    // 0x8023465C: sb          $fp, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r30;
    // 0x80234660: sb          $s7, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r23;
    // 0x80234664: sb          $s6, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r22;
    // 0x80234668: lh          $a1, 0x0($s3)
    ctx->r5 = MEM_H(ctx->r19, 0X0);
    // 0x8023466C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80234670: jal         0x8004DA90
    // 0x80234674: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_15;
    // 0x80234674: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_15:
    // 0x80234678: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x8023467C: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x80234680: jal         0x8009A3B4
    // 0x80234684: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_16;
    // 0x80234684: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_16:
    // 0x80234688: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x8023468C: addiu       $a1, $s1, 0x2C
    ctx->r5 = ADD32(ctx->r17, 0X2C);
    // 0x80234690: jal         0x8009A3B4
    // 0x80234694: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_17;
    // 0x80234694: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_17:
    // 0x80234698: addiu       $a0, $s1, 0x1C
    ctx->r4 = ADD32(ctx->r17, 0X1C);
    // 0x8023469C: addiu       $a1, $s1, 0x34
    ctx->r5 = ADD32(ctx->r17, 0X34);
    // 0x802346A0: jal         0x8009A3B4
    // 0x802346A4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_18;
    // 0x802346A4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_18:
L_802346A8:
    // 0x802346A8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x802346AC: slti        $v0, $s2, 0x3
    ctx->r2 = SIGNED(ctx->r18) < 0X3 ? 1 : 0;
    // 0x802346B0: bne         $v0, $zero, L_80234640
    if (ctx->r2 != 0) {
        // 0x802346B4: addiu       $s3, $s3, 0x2
        ctx->r19 = ADD32(ctx->r19, 0X2);
            goto L_80234640;
    }
    // 0x802346B4: addiu       $s3, $s3, 0x2
    ctx->r19 = ADD32(ctx->r19, 0X2);
    // 0x802346B8: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    // 0x802346BC: addiu       $a1, $zero, 0x7D0
    ctx->r5 = ADD32(0, 0X7D0);
    // 0x802346C0: addiu       $a2, $zero, 0x1388
    ctx->r6 = ADD32(0, 0X1388);
    // 0x802346C4: addiu       $s0, $s1, 0x14
    ctx->r16 = ADD32(ctx->r17, 0X14);
    // 0x802346C8: jal         0x8003491C
    // 0x802346CC: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_8003491C_FD1C(rdram, ctx);
        goto after_19;
    // 0x802346CC: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_19:
    // 0x802346D0: addiu       $a0, $zero, 0xC2
    ctx->r4 = ADD32(0, 0XC2);
    // 0x802346D4: jal         0x8002A33C
    // 0x802346D8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_20;
    // 0x802346D8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_20:
L_802346DC:
    // 0x802346DC: lhu         $v0, 0x4($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X4);
    // 0x802346E0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802346E4: sh          $v0, 0x4($s5)
    MEM_H(0X4, ctx->r21) = ctx->r2;
    // 0x802346E8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802346EC: bgez        $v0, L_80234700
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802346F0: nop
    
            goto L_80234700;
    }
    // 0x802346F0: nop

    // 0x802346F4: lhu         $v0, 0x0($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X0);
    // 0x802346F8: ori         $v0, $v0, 0x5
    ctx->r2 = ctx->r2 | 0X5;
    // 0x802346FC: sh          $v0, 0x0($s5)
    MEM_H(0X0, ctx->r21) = ctx->r2;
L_80234700:
    // 0x80234700: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80234704: lw          $fp, 0x30($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X30);
    // 0x80234708: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x8023470C: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x80234710: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x80234714: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80234718: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8023471C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80234720: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80234724: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80234728: jr          $ra
    // 0x8023472C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8023472C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_802301E0_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802301E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802301E4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802301E8: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x802301EC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802301F0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802301F4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802301F8: lw          $v0, 0xB10($at)
    ctx->r2 = MEM_W(ctx->r1, 0XB10);
    // 0x802301FC: jalr        $v0
    // 0x80230200: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80230200: nop

    after_0:
    // 0x80230204: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80230208: jr          $ra
    // 0x8023020C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023020C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023283C_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023283C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80232840: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80232844: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80232848: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023284C: jal         0x80233148
    // 0x80232850: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80233148_ovl4(rdram, ctx);
        goto after_0;
    // 0x80232850: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x80232854: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80232858: bltz        $v0, L_8023291C
    if (SIGNED(ctx->r2) < 0) {
        // 0x8023285C: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_8023291C;
    }
    // 0x8023285C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80232860: lhu         $v1, 0x34C($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X34C);
    // 0x80232864: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80232868: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x8023286C: sra         $s0, $v0, 16
    ctx->r16 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80232870: slti        $v0, $s0, 0x1B
    ctx->r2 = SIGNED(ctx->r16) < 0X1B ? 1 : 0;
    // 0x80232874: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80232878: andi        $a1, $v0, 0x3
    ctx->r5 = ctx->r2 & 0X3;
    // 0x8023287C: slti        $v0, $s0, 0x15
    ctx->r2 = SIGNED(ctx->r16) < 0X15 ? 1 : 0;
    // 0x80232880: beq         $v0, $zero, L_8023288C
    if (ctx->r2 == 0) {
        // 0x80232884: sh          $v1, 0x34C($s1)
        MEM_H(0X34C, ctx->r17) = ctx->r3;
            goto L_8023288C;
    }
    // 0x80232884: sh          $v1, 0x34C($s1)
    MEM_H(0X34C, ctx->r17) = ctx->r3;
    // 0x80232888: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
L_8023288C:
    // 0x8023288C: slti        $v0, $s0, 0xF
    ctx->r2 = SIGNED(ctx->r16) < 0XF ? 1 : 0;
    // 0x80232890: bnel        $v0, $zero, L_80232898
    if (ctx->r2 != 0) {
        // 0x80232894: addiu       $a1, $zero, 0x9
        ctx->r5 = ADD32(0, 0X9);
            goto L_80232898;
    }
    goto skip_0;
    // 0x80232894: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    skip_0:
L_80232898:
    // 0x80232898: slti        $v0, $s0, 0x9
    ctx->r2 = SIGNED(ctx->r16) < 0X9 ? 1 : 0;
    // 0x8023289C: bnel        $v0, $zero, L_802328A4
    if (ctx->r2 != 0) {
        // 0x802328A0: addiu       $a1, $zero, 0x7
        ctx->r5 = ADD32(0, 0X7);
            goto L_802328A4;
    }
    goto skip_1;
    // 0x802328A0: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    skip_1:
L_802328A4:
    // 0x802328A4: lw          $a0, 0x354($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X354);
    // 0x802328A8: slti        $s0, $s0, 0x4
    ctx->r16 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x802328AC: xori        $s0, $s0, 0x1
    ctx->r16 = ctx->r16 ^ 0X1;
    // 0x802328B0: negu        $s0, $s0
    ctx->r16 = SUB32(0, ctx->r16);
    // 0x802328B4: and         $s0, $a1, $s0
    ctx->r16 = ctx->r5 & ctx->r16;
    // 0x802328B8: jal         0x800324B4
    // 0x802328BC: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    func_800324B4_D8B4(rdram, ctx);
        goto after_1;
    // 0x802328BC: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    after_1:
    // 0x802328C0: nop

    // 0x802328C4: mult        $v0, $s0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802328C8: mflo        $v0
    ctx->r2 = lo;
    // 0x802328CC: lw          $a0, 0x354($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X354);
    // 0x802328D0: lhu         $v1, 0x14($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X14);
    // 0x802328D4: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    // 0x802328D8: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x802328DC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802328E0: jal         0x80032498
    // 0x802328E4: sh          $v1, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r3;
    func_80032498_D898(rdram, ctx);
        goto after_2;
    // 0x802328E4: sh          $v1, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r3;
    after_2:
    // 0x802328E8: nop

    // 0x802328EC: mult        $v0, $s0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802328F0: mflo        $v0
    ctx->r2 = lo;
    // 0x802328F4: lhu         $v1, 0x18($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X18);
    // 0x802328F8: lb          $a0, 0xA7($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XA7);
    // 0x802328FC: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80232900: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80232904: bgez        $a0, L_80232924
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80232908: sh          $v1, 0x18($s1)
        MEM_H(0X18, ctx->r17) = ctx->r3;
            goto L_80232924;
    }
    // 0x80232908: sh          $v1, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r3;
    // 0x8023290C: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x80232910: bne         $v0, $zero, L_8023291C
    if (ctx->r2 != 0) {
        // 0x80232914: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_8023291C;
    }
    // 0x80232914: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80232918: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8023291C:
    // 0x8023291C: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x80232920: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
L_80232924:
    // 0x80232924: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80232928: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023292C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232930: jr          $ra
    // 0x80232934: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80232934: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023246C_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023246C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80232470: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232474: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232478: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023247C: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x80232480: bgez        $v0, L_802324DC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80232484: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_802324DC;
    }
    // 0x80232484: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80232488: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8023248C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80232490: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x80232494: jal         0x8004F820
    // 0x80232498: addiu       $a3, $zero, 0x400
    ctx->r7 = ADD32(0, 0X400);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80232498: addiu       $a3, $zero, 0x400
    ctx->r7 = ADD32(0, 0X400);
    after_0:
    // 0x8023249C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802324A0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802324A4: bltzl       $v0, L_802324C0
    if (SIGNED(ctx->r2) < 0) {
        // 0x802324A8: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_802324C0;
    }
    goto skip_0;
    // 0x802324A8: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_0:
    // 0x802324AC: slti        $v0, $v0, 0x69
    ctx->r2 = SIGNED(ctx->r2) < 0X69 ? 1 : 0;
    // 0x802324B0: beq         $v0, $zero, L_802324CC
    if (ctx->r2 == 0) {
        // 0x802324B4: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_802324CC;
    }
    // 0x802324B4: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x802324B8: j           L_802324D0
    // 0x802324BC: nop

        goto L_802324D0;
    // 0x802324BC: nop

L_802324C0:
    // 0x802324C0: slti        $v0, $v0, 0x69
    ctx->r2 = SIGNED(ctx->r2) < 0X69 ? 1 : 0;
    // 0x802324C4: bne         $v0, $zero, L_802324D0
    if (ctx->r2 != 0) {
        // 0x802324C8: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_802324D0;
    }
    // 0x802324C8: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
L_802324CC:
    // 0x802324CC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_802324D0:
    // 0x802324D0: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802324D4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802324D8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_802324DC:
    // 0x802324DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802324E0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802324E4: jr          $ra
    // 0x802324E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802324E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802287C4_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802287C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802287C8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802287CC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802287D0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802287D4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802287D8: lw          $v0, 0x33C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X33C);
    // 0x802287DC: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x802287E0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802287E4: beq         $v0, $zero, L_802287F0
    if (ctx->r2 == 0) {
        // 0x802287E8: addiu       $s1, $s0, 0x328
        ctx->r17 = ADD32(ctx->r16, 0X328);
            goto L_802287F0;
    }
    // 0x802287E8: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x802287EC: sh          $zero, 0x330($s0)
    MEM_H(0X330, ctx->r16) = 0;
L_802287F0:
    // 0x802287F0: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802287F4: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x802287F8: beq         $v0, $zero, L_80228A7C
    if (ctx->r2 == 0) {
        // 0x802287FC: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80228A7C;
    }
    // 0x802287FC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80228800: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80228804: addu        $at, $at, $v0
    gpr jr_addend_8022880C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80228808: lw          $v0, 0x1528($at)
    ctx->r2 = ADD32(ctx->r1, 0X1528);
    // 0x8022880C: jr          $v0
    // 0x80228810: nop

    switch (jr_addend_8022880C >> 2) {
        case 0: goto L_80228814; break;
        case 1: goto L_8022885C; break;
        case 2: goto L_80228880; break;
        case 3: goto L_802288E0; break;
        case 4: goto L_802288FC; break;
        case 5: goto L_80228A3C; break;
        default: switch_error(__func__, 0x8022880C, 0x80241528);
    }
    // 0x80228810: nop

L_80228814:
    // 0x80228814: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228818: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022881C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80228820: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80228824: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80228828: sh          $zero, 0x64($s0)
    MEM_H(0X64, ctx->r16) = 0;
    // 0x8022882C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80228830: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x80228834: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80228838: lw          $v0, 0x298($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X298);
    // 0x8022883C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80228840: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80228844: lh          $v0, 0x6($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X6);
    // 0x80228848: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x8022884C: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80228850: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80228854: lbu         $v0, 0xA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XA);
    // 0x80228858: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
L_8022885C:
    // 0x8022885C: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80228860: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80228864: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80228868: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022886C: bgez        $v0, L_80228A7C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80228870: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80228A7C;
    }
    // 0x80228870: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80228874: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80228878: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022887C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_80228880:
    // 0x80228880: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80228884: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80228888: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022888C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228890: bgtz        $v0, L_80228A7C
    if (SIGNED(ctx->r2) > 0) {
        // 0x80228894: addiu       $a0, $zero, 0xB4
        ctx->r4 = ADD32(0, 0XB4);
            goto L_80228A7C;
    }
    // 0x80228894: addiu       $a0, $zero, 0xB4
    ctx->r4 = ADD32(0, 0XB4);
    // 0x80228898: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022889C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802288A0: jal         0x8002A33C
    // 0x802288A4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x802288A4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    after_0:
    // 0x802288A8: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x802288AC: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x802288B0: beq         $v0, $zero, L_802288D8
    if (ctx->r2 == 0) {
        // 0x802288B4: addiu       $v0, $zero, 0x2D
        ctx->r2 = ADD32(0, 0X2D);
            goto L_802288D8;
    }
    // 0x802288B4: addiu       $v0, $zero, 0x2D
    ctx->r2 = ADD32(0, 0X2D);
    // 0x802288B8: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x802288BC: lhu         $v1, 0x0($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X0);
    // 0x802288C0: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x802288C4: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x802288C8: andi        $v1, $v1, 0xFFDF
    ctx->r3 = ctx->r3 & 0XFFDF;
    // 0x802288CC: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x802288D0: j           L_80228A7C
    // 0x802288D4: sh          $v1, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r3;
        goto L_80228A7C;
    // 0x802288D4: sh          $v1, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r3;
L_802288D8:
    // 0x802288D8: j           L_80228A7C
    // 0x802288DC: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
        goto L_80228A7C;
    // 0x802288DC: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_802288E0:
    // 0x802288E0: lh          $v0, 0x4($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4);
    // 0x802288E4: slti        $v0, $v0, 0x4
    ctx->r2 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x802288E8: beq         $v0, $zero, L_802288FC
    if (ctx->r2 == 0) {
        // 0x802288EC: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_802288FC;
    }
    // 0x802288EC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802288F0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802288F4: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x802288F8: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
L_802288FC:
    // 0x802288FC: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80228900: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80228904: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80228908: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022890C: bgez        $v0, L_80228938
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80228910: lui         $v1, 0x200
        ctx->r3 = S32(0X200 << 16);
            goto L_80228938;
    }
    // 0x80228910: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x80228914: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x80228918: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x8022891C: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x80228920: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228924: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80228928: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022892C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80228930: j           L_80228A3C
    // 0x80228934: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
        goto L_80228A3C;
    // 0x80228934: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
L_80228938:
    // 0x80228938: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x8022893C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80228940: beq         $v0, $zero, L_80228954
    if (ctx->r2 == 0) {
        // 0x80228944: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_80228954;
    }
    // 0x80228944: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80228948: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022894C: j           L_80228A7C
    // 0x80228950: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_80228A7C;
    // 0x80228950: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_80228954:
    // 0x80228954: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80228958: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x8022895C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80228960: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x80228964: jal         0x8004F820
    // 0x80228968: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x80228968: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_1:
    // 0x8022896C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228970: addiu       $a1, $zero, 0x300
    ctx->r5 = ADD32(0, 0X300);
    // 0x80228974: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x80228978: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022897C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80228980: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80228984: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80228988: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022898C: jal         0x8004DA90
    // 0x80228990: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x80228990: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    after_2:
    // 0x80228994: jal         0x80040F30
    // 0x80228998: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_3;
    // 0x80228998: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022899C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802289A0: jal         0x8003E934
    // 0x802289A4: sw          $v0, 0x48($s1)
    MEM_W(0X48, ctx->r17) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_4;
    // 0x802289A4: sw          $v0, 0x48($s1)
    MEM_W(0X48, ctx->r17) = ctx->r2;
    after_4:
    // 0x802289A8: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x802289AC: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x802289B0: lh          $v1, 0x2E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2E);
    // 0x802289B4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802289B8: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x802289BC: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x802289C0: bltz        $v0, L_802289D8
    if (SIGNED(ctx->r2) < 0) {
        // 0x802289C4: slti        $v0, $v0, 0x21
        ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
            goto L_802289D8;
    }
    // 0x802289C4: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x802289C8: beq         $v0, $zero, L_802289E8
    if (ctx->r2 == 0) {
        // 0x802289CC: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_802289E8;
    }
    // 0x802289CC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802289D0: j           L_80228A24
    // 0x802289D4: nop

        goto L_80228A24;
    // 0x802289D4: nop

L_802289D8:
    // 0x802289D8: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x802289DC: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x802289E0: bne         $v0, $zero, L_80228A24
    if (ctx->r2 != 0) {
        // 0x802289E4: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80228A24;
    }
    // 0x802289E4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_802289E8:
    // 0x802289E8: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x802289EC: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x802289F0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802289F4: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x802289F8: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    // 0x802289FC: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x80228A00: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x80228A04: jal         0x8009A3B4
    // 0x80228A08: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x80228A08: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    after_5:
    // 0x80228A0C: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80228A10: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x80228A14: jal         0x8009A3B4
    // 0x80228A18: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x80228A18: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_6:
    // 0x80228A1C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80228A20: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_80228A24:
    // 0x80228A24: lw          $v0, 0x48($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X48);
    // 0x80228A28: andi        $v0, $v0, 0xF00
    ctx->r2 = ctx->r2 & 0XF00;
    // 0x80228A2C: beq         $v0, $zero, L_80228A7C
    if (ctx->r2 == 0) {
        // 0x80228A30: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80228A7C;
    }
    // 0x80228A30: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80228A34: j           L_80228A7C
    // 0x80228A38: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
        goto L_80228A7C;
    // 0x80228A38: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_80228A3C:
    // 0x80228A3C: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80228A40: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x80228A44: beq         $v0, $zero, L_80228A54
    if (ctx->r2 == 0) {
        // 0x80228A48: nop
    
            goto L_80228A54;
    }
    // 0x80228A48: nop

    // 0x80228A4C: jal         0x8004F418
    // 0x80228A50: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_7;
    // 0x80228A50: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
L_80228A54:
    // 0x80228A54: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80228A58: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80228A5C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80228A60: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228A64: bgez        $v0, L_80228A7C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80228A68: addiu       $v1, $zero, 0x1E
        ctx->r3 = ADD32(0, 0X1E);
            goto L_80228A7C;
    }
    // 0x80228A68: addiu       $v1, $zero, 0x1E
    ctx->r3 = ADD32(0, 0X1E);
    // 0x80228A6C: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80228A70: sh          $v1, 0x34($s1)
    MEM_H(0X34, ctx->r17) = ctx->r3;
    // 0x80228A74: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80228A78: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_80228A7C:
    // 0x80228A7C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80228A80: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80228A84: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228A88: jr          $ra
    // 0x80228A8C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80228A8C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80235078_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235078: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8023507C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80235080: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80235084: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x80235088: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x8023508C: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x80235090: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x80235094: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80235098: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8023509C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802350A0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802350A4: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x802350A8: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x802350AC: beq         $v0, $zero, L_802352B8
    if (ctx->r2 == 0) {
        // 0x802350B0: addiu       $s0, $s1, 0x4E0
        ctx->r16 = ADD32(ctx->r17, 0X4E0);
            goto L_802352B8;
    }
    // 0x802350B0: addiu       $s0, $s1, 0x4E0
    ctx->r16 = ADD32(ctx->r17, 0X4E0);
    // 0x802350B4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802350B8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802350BC: addu        $at, $at, $v0
    gpr jr_addend_802350C4 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802350C0: lw          $v0, 0x1688($at)
    ctx->r2 = ADD32(ctx->r1, 0X1688);
    // 0x802350C4: jr          $v0
    // 0x802350C8: nop

    switch (jr_addend_802350C4 >> 2) {
        case 0: goto L_802350CC; break;
        case 1: goto L_802350F4; break;
        case 2: goto L_8023513C; break;
        case 3: goto L_80235178; break;
        case 4: goto L_80235264; break;
        case 5: goto L_80235294; break;
        default: switch_error(__func__, 0x802350C4, 0x80241688);
    }
    // 0x802350C8: nop

L_802350CC:
    // 0x802350CC: addiu       $a0, $zero, 0xBF
    ctx->r4 = ADD32(0, 0XBF);
    // 0x802350D0: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x802350D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802350D8: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x802350DC: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x802350E0: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x802350E4: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x802350E8: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x802350EC: jal         0x8002A33C
    // 0x802350F0: sh          $zero, 0x8($s0)
    MEM_H(0X8, ctx->r16) = 0;
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x802350F0: sh          $zero, 0x8($s0)
    MEM_H(0X8, ctx->r16) = 0;
    after_0:
L_802350F4:
    // 0x802350F4: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x802350F8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802350FC: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x80235100: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80235104: bgez        $v0, L_802352B8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80235108: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802352B8;
    }
    // 0x80235108: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023510C: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x80235110: lw          $a0, 0x34($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X34);
    // 0x80235114: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80235118: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8023511C: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x80235120: sb          $v1, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r3;
    // 0x80235124: lw          $v0, 0x38($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X38);
    // 0x80235128: sb          $v1, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r3;
    // 0x8023512C: lw          $v0, 0x34($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X34);
    // 0x80235130: sh          $zero, 0xA($v0)
    MEM_H(0XA, ctx->r2) = 0;
    // 0x80235134: lw          $v0, 0x38($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X38);
    // 0x80235138: sh          $zero, 0xA($v0)
    MEM_H(0XA, ctx->r2) = 0;
L_8023513C:
    // 0x8023513C: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x80235140: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80235144: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x80235148: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023514C: bgez        $v0, L_802352B8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80235150: addiu       $a0, $zero, 0xC0
        ctx->r4 = ADD32(0, 0XC0);
            goto L_802352B8;
    }
    // 0x80235150: addiu       $a0, $zero, 0xC0
    ctx->r4 = ADD32(0, 0XC0);
    // 0x80235154: lbu         $v0, 0xAC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XAC);
    // 0x80235158: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x8023515C: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x80235160: sb          $v1, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r3;
    // 0x80235164: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80235168: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x8023516C: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x80235170: jal         0x8002A33C
    // 0x80235174: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x80235174: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    after_1:
L_80235178:
    // 0x80235178: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x8023517C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80235180: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x80235184: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80235188: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023518C: bgez        $v1, L_802351A8
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80235190: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802351A8;
    }
    // 0x80235190: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80235194: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80235198: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x8023519C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x802351A0: j           L_80235264
    // 0x802351A4: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
        goto L_80235264;
    // 0x802351A4: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_802351A8:
    // 0x802351A8: bne         $v1, $v0, L_802352B8
    if (ctx->r3 != ctx->r2) {
        // 0x802351AC: addu        $s3, $zero, $zero
        ctx->r19 = ADD32(0, 0);
            goto L_802352B8;
    }
    // 0x802351AC: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x802351B0: addiu       $s7, $zero, 0x5
    ctx->r23 = ADD32(0, 0X5);
    // 0x802351B4: addiu       $s6, $zero, 0x80
    ctx->r22 = ADD32(0, 0X80);
    // 0x802351B8: addiu       $s5, $zero, 0x42
    ctx->r21 = ADD32(0, 0X42);
    // 0x802351BC: addiu       $s4, $s1, 0x14
    ctx->r20 = ADD32(ctx->r17, 0X14);
    // 0x802351C0: lui         $s2, 0x8024
    ctx->r18 = S32(0X8024 << 16);
    // 0x802351C4: addiu       $s2, $s2, 0xD24
    ctx->r18 = ADD32(ctx->r18, 0XD24);
L_802351C8:
    // 0x802351C8: jal         0x8004F144
    // 0x802351CC: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_2;
    // 0x802351CC: nop

    after_2:
    // 0x802351D0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x802351D4: beq         $s0, $zero, L_80235228
    if (ctx->r16 == 0) {
        // 0x802351D8: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80235228;
    }
    // 0x802351D8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802351DC: sb          $s7, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r23;
    // 0x802351E0: sb          $s6, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r22;
    // 0x802351E4: sb          $s5, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r21;
    // 0x802351E8: lh          $a1, 0x0($s2)
    ctx->r5 = MEM_H(ctx->r18, 0X0);
    // 0x802351EC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802351F0: jal         0x8004DA90
    // 0x802351F4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x802351F4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_3:
    // 0x802351F8: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x802351FC: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x80235200: jal         0x8009A3B4
    // 0x80235204: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x80235204: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x80235208: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x8023520C: addiu       $a1, $s1, 0x2C
    ctx->r5 = ADD32(ctx->r17, 0X2C);
    // 0x80235210: jal         0x8009A3B4
    // 0x80235214: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x80235214: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x80235218: addiu       $a0, $s1, 0x1C
    ctx->r4 = ADD32(ctx->r17, 0X1C);
    // 0x8023521C: addiu       $a1, $s1, 0x34
    ctx->r5 = ADD32(ctx->r17, 0X34);
    // 0x80235220: jal         0x8009A3B4
    // 0x80235224: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x80235224: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_6:
L_80235228:
    // 0x80235228: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x8023522C: slti        $v0, $s3, 0x3
    ctx->r2 = SIGNED(ctx->r19) < 0X3 ? 1 : 0;
    // 0x80235230: bne         $v0, $zero, L_802351C8
    if (ctx->r2 != 0) {
        // 0x80235234: addiu       $s2, $s2, 0x2
        ctx->r18 = ADD32(ctx->r18, 0X2);
            goto L_802351C8;
    }
    // 0x80235234: addiu       $s2, $s2, 0x2
    ctx->r18 = ADD32(ctx->r18, 0X2);
    // 0x80235238: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    // 0x8023523C: addiu       $a1, $zero, 0x7D0
    ctx->r5 = ADD32(0, 0X7D0);
    // 0x80235240: addiu       $a2, $zero, 0x1388
    ctx->r6 = ADD32(0, 0X1388);
    // 0x80235244: addiu       $s0, $s1, 0x14
    ctx->r16 = ADD32(ctx->r17, 0X14);
    // 0x80235248: jal         0x8003491C
    // 0x8023524C: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_8003491C_FD1C(rdram, ctx);
        goto after_7;
    // 0x8023524C: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_7:
    // 0x80235250: addiu       $a0, $zero, 0xC1
    ctx->r4 = ADD32(0, 0XC1);
    // 0x80235254: jal         0x8002A33C
    // 0x80235258: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_8;
    // 0x80235258: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_8:
    // 0x8023525C: j           L_802352B8
    // 0x80235260: nop

        goto L_802352B8;
    // 0x80235260: nop

L_80235264:
    // 0x80235264: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x80235268: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023526C: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x80235270: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80235274: bgez        $v0, L_802352B8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80235278: addiu       $v1, $zero, 0x5
        ctx->r3 = ADD32(0, 0X5);
            goto L_802352B8;
    }
    // 0x80235278: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x8023527C: lbu         $v0, 0xAC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XAC);
    // 0x80235280: sb          $v1, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r3;
    // 0x80235284: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80235288: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x8023528C: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x80235290: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_80235294:
    // 0x80235294: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x80235298: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023529C: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x802352A0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802352A4: bgez        $v0, L_802352B8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802352A8: nop
    
            goto L_802352B8;
    }
    // 0x802352A8: nop

    // 0x802352AC: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x802352B0: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x802352B4: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
L_802352B8:
    // 0x802352B8: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x802352BC: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x802352C0: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x802352C4: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x802352C8: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x802352CC: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x802352D0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802352D4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802352D8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802352DC: jr          $ra
    // 0x802352E0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x802352E0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80237C54_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237C54: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80237C58: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80237C5C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80237C60: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80237C64: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80237C68: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80237C6C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237C70: beq         $v1, $v0, L_80237CE0
    if (ctx->r3 == ctx->r2) {
        // 0x80237C74: addiu       $s1, $s0, 0xC0
        ctx->r17 = ADD32(ctx->r16, 0XC0);
            goto L_80237CE0;
    }
    // 0x80237C74: addiu       $s1, $s0, 0xC0
    ctx->r17 = ADD32(ctx->r16, 0XC0);
    // 0x80237C78: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80237C7C: beql        $v0, $zero, L_80237C94
    if (ctx->r2 == 0) {
        // 0x80237C80: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80237C94;
    }
    goto skip_0;
    // 0x80237C80: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80237C84: beq         $v1, $zero, L_80237CA4
    if (ctx->r3 == 0) {
        // 0x80237C88: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80237CA4;
    }
    // 0x80237C88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237C8C: j           L_80237DA4
    // 0x80237C90: nop

        goto L_80237DA4;
    // 0x80237C90: nop

L_80237C94:
    // 0x80237C94: beq         $v1, $v0, L_80237D48
    if (ctx->r3 == ctx->r2) {
        // 0x80237C98: nop
    
            goto L_80237D48;
    }
    // 0x80237C98: nop

    // 0x80237C9C: j           L_80237DA4
    // 0x80237CA0: nop

        goto L_80237DA4;
    // 0x80237CA0: nop

L_80237CA4:
    // 0x80237CA4: lw          $v1, 0xF4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XF4);
    // 0x80237CA8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80237CAC: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80237CB0: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80237CB4: lhu         $a0, 0x56($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X56);
    // 0x80237CB8: lhu         $v1, 0xC0($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XC0);
    // 0x80237CBC: addiu       $v0, $zero, 0xC00
    ctx->r2 = ADD32(0, 0XC00);
    // 0x80237CC0: sh          $v0, 0x58($s0)
    MEM_H(0X58, ctx->r16) = ctx->r2;
    // 0x80237CC4: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80237CC8: sh          $v0, 0xC4($s0)
    MEM_H(0XC4, ctx->r16) = ctx->r2;
    // 0x80237CCC: sb          $zero, 0xC8($s0)
    MEM_B(0XC8, ctx->r16) = 0;
    // 0x80237CD0: andi        $v1, $v1, 0xFFEF
    ctx->r3 = ctx->r3 & 0XFFEF;
    // 0x80237CD4: ori         $v1, $v1, 0x40
    ctx->r3 = ctx->r3 | 0X40;
    // 0x80237CD8: sh          $v1, 0xC0($s0)
    MEM_H(0XC0, ctx->r16) = ctx->r3;
    // 0x80237CDC: sh          $a0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r4;
L_80237CE0:
    // 0x80237CE0: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80237CE4: addiu       $a1, $v0, -0x1
    ctx->r5 = ADD32(ctx->r2, -0X1);
    // 0x80237CE8: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
    // 0x80237CEC: bltz        $v0, L_80237D40
    if (SIGNED(ctx->r2) < 0) {
        // 0x80237CF0: sh          $a1, 0x4($s1)
        MEM_H(0X4, ctx->r17) = ctx->r5;
            goto L_80237D40;
    }
    // 0x80237CF0: sh          $a1, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r5;
    // 0x80237CF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237CF8: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80237CFC: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x80237D00: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x80237D04: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80237D08: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x80237D0C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80237D10: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
    // 0x80237D14: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80237D18: jal         0x80040F30
    // 0x80237D1C: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    func_80040F30_1C330(rdram, ctx);
        goto after_0;
    // 0x80237D1C: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    after_0:
    // 0x80237D20: andi        $v0, $v0, 0x3F00
    ctx->r2 = ctx->r2 & 0X3F00;
    // 0x80237D24: bne         $v0, $zero, L_80237D44
    if (ctx->r2 != 0) {
        // 0x80237D28: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80237D44;
    }
    // 0x80237D28: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80237D2C: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x80237D30: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x80237D34: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80237D38: beq         $v0, $zero, L_80237DA4
    if (ctx->r2 == 0) {
        // 0x80237D3C: nop
    
            goto L_80237DA4;
    }
    // 0x80237D3C: nop

L_80237D40:
    // 0x80237D40: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80237D44:
    // 0x80237D44: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80237D48:
    // 0x80237D48: jal         0x8004F144
    // 0x80237D4C: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_1;
    // 0x80237D4C: nop

    after_1:
    // 0x80237D50: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80237D54: beq         $v1, $zero, L_80237D7C
    if (ctx->r3 == 0) {
        // 0x80237D58: addiu       $a0, $v1, 0x38
        ctx->r4 = ADD32(ctx->r3, 0X38);
            goto L_80237D7C;
    }
    // 0x80237D58: addiu       $a0, $v1, 0x38
    ctx->r4 = ADD32(ctx->r3, 0X38);
    // 0x80237D5C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80237D60: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80237D64: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80237D68: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80237D6C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80237D70: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x80237D74: jal         0x8009A3B4
    // 0x80237D78: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80237D78: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    after_2:
L_80237D7C:
    // 0x80237D7C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80237D80: lbu         $v1, 0xE($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XE);
    // 0x80237D84: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80237D88: ori         $v1, $v1, 0x1
    ctx->r3 = ctx->r3 | 0X1;
    // 0x80237D8C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80237D90: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
    // 0x80237D94: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80237D98: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80237D9C: andi        $v0, $v0, 0xFFA1
    ctx->r2 = ctx->r2 & 0XFFA1;
    // 0x80237DA0: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_80237DA4:
    // 0x80237DA4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80237DA8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80237DAC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80237DB0: jr          $ra
    // 0x80237DB4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80237DB4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80232168_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232168: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023216C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232170: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232174: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80232178: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8023217C: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x80232180: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80232184: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80232188: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8023218C: sh          $zero, 0x64($s0)
    MEM_H(0X64, ctx->r16) = 0;
    // 0x80232190: sh          $zero, 0x66($s0)
    MEM_H(0X66, ctx->r16) = 0;
    // 0x80232194: sb          $zero, 0x74($s0)
    MEM_B(0X74, ctx->r16) = 0;
    // 0x80232198: sb          $zero, 0x75($s0)
    MEM_B(0X75, ctx->r16) = 0;
    // 0x8023219C: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x802321A0: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x802321A4: andi        $v0, $v0, 0xE00
    ctx->r2 = ctx->r2 & 0XE00;
    // 0x802321A8: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    // 0x802321AC: jal         0x8004D5D4
    // 0x802321B0: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x802321B0: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_0:
    // 0x802321B4: addiu       $a0, $s0, 0x388
    ctx->r4 = ADD32(ctx->r16, 0X388);
    // 0x802321B8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802321BC: addiu       $a2, $zero, -0xC8
    ctx->r6 = ADD32(0, -0XC8);
    // 0x802321C0: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x802321C4: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x802321C8: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x802321CC: jal         0x800540BC
    // 0x802321D0: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    func_800540BC_2F4BC(rdram, ctx);
        goto after_1;
    // 0x802321D0: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    after_1:
    // 0x802321D4: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x802321D8: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x802321DC: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x802321E0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802321E4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802321E8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x802321EC: lbu         $v1, 0x8($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X8);
    // 0x802321F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802321F4: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802321F8: addiu       $v0, $v0, 0xBA0
    ctx->r2 = ADD32(ctx->r2, 0XBA0);
    // 0x802321FC: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x80232200: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x80232204: sh          $v1, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r3;
    // 0x80232208: sh          $v1, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r3;
    // 0x8023220C: jal         0x8003E934
    // 0x80232210: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    func_8003E934_19D34(rdram, ctx);
        goto after_2;
    // 0x80232210: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    after_2:
    // 0x80232214: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232218: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x8023221C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80232220: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80232224: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80232228: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8023222C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80232230: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80232234: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80232238: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8023223C: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80232240: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x80232244: jal         0x80050294
    // 0x80232248: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x80232248: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    after_3:
    // 0x8023224C: lhu         $a0, 0x348($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X348);
    // 0x80232250: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x80232254: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80232258: lw          $a1, 0x298($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X298);
    // 0x8023225C: addiu       $v0, $zero, 0xB4
    ctx->r2 = ADD32(0, 0XB4);
    // 0x80232260: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
    // 0x80232264: sh          $zero, 0x34E($s0)
    MEM_H(0X34E, ctx->r16) = 0;
    // 0x80232268: ori         $a0, $a0, 0x1
    ctx->r4 = ctx->r4 | 0X1;
    // 0x8023226C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80232270: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x80232274: sh          $a0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r4;
    // 0x80232278: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8023227C: lbu         $v1, 0xB($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0XB);
    // 0x80232280: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80232284: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80232288: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8023228C: sh          $v1, 0x358($s0)
    MEM_H(0X358, ctx->r16) = ctx->r3;
    // 0x80232290: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80232294: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80232298: lbu         $v0, 0xC($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XC);
    // 0x8023229C: addiu       $a0, $s0, 0x398
    ctx->r4 = ADD32(ctx->r16, 0X398);
    // 0x802322A0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x802322A4: sh          $zero, 0x35A($s0)
    MEM_H(0X35A, ctx->r16) = 0;
    // 0x802322A8: sh          $zero, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = 0;
    // 0x802322AC: sw          $zero, 0x368($s0)
    MEM_W(0X368, ctx->r16) = 0;
    // 0x802322B0: sw          $zero, 0x36C($s0)
    MEM_W(0X36C, ctx->r16) = 0;
    // 0x802322B4: sw          $zero, 0x378($s0)
    MEM_W(0X378, ctx->r16) = 0;
    // 0x802322B8: sw          $zero, 0x37C($s0)
    MEM_W(0X37C, ctx->r16) = 0;
    // 0x802322BC: sh          $zero, 0x350($s0)
    MEM_H(0X350, ctx->r16) = 0;
    // 0x802322C0: jal         0x8009A3B4
    // 0x802322C4: sh          $v0, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x802322C4: sh          $v0, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = ctx->r2;
    after_4:
    // 0x802322C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802322CC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802322D0: jr          $ra
    // 0x802322D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802322D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B0D8_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B0D8: lhu         $v0, 0x34A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X34A);
    // 0x8022B0DC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022B0E0: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x8022B0E4: andi        $a2, $v0, 0xF
    ctx->r6 = ctx->r2 & 0XF;
    // 0x8022B0E8: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
L_8022B0EC:
    // 0x8022B0EC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022B0F0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022B0F4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022B0F8: lbu         $v0, 0x858($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X858);
    // 0x8022B0FC: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x8022B100: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8022B104: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B108: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022B10C: slt         $v0, $a2, $v0
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022B110: bne         $v0, $zero, L_8022B130
    if (ctx->r2 != 0) {
        // 0x8022B114: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_8022B130;
    }
    // 0x8022B114: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022B118: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022B11C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B120: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022B124: slti        $v0, $v0, 0x4
    ctx->r2 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x8022B128: bne         $v0, $zero, L_8022B0EC
    if (ctx->r2 != 0) {
        // 0x8022B12C: sll         $v0, $v1, 16
        ctx->r2 = S32(ctx->r3 << 16);
            goto L_8022B0EC;
    }
    // 0x8022B12C: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
L_8022B130:
    // 0x8022B130: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022B134: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x8022B138: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x8022B13C: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022B140: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B144: beql        $v1, $v0, L_8022B184
    if (ctx->r3 == ctx->r2) {
        // 0x8022B148: sh          $zero, 0x66($a0)
        MEM_H(0X66, ctx->r4) = 0;
            goto L_8022B184;
    }
    goto skip_0;
    // 0x8022B148: sh          $zero, 0x66($a0)
    MEM_H(0X66, ctx->r4) = 0;
    skip_0:
    // 0x8022B14C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022B150: beql        $v0, $zero, L_8022B168
    if (ctx->r2 == 0) {
        // 0x8022B154: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022B168;
    }
    goto skip_1;
    // 0x8022B154: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_1:
    // 0x8022B158: beql        $v1, $zero, L_8022B18C
    if (ctx->r3 == 0) {
        // 0x8022B15C: sb          $zero, 0x9($a0)
        MEM_B(0X9, ctx->r4) = 0;
            goto L_8022B18C;
    }
    goto skip_2;
    // 0x8022B15C: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    skip_2:
    // 0x8022B160: j           L_8022B18C
    // 0x8022B164: nop

        goto L_8022B18C;
    // 0x8022B164: nop

L_8022B168:
    // 0x8022B168: beq         $v1, $v0, L_8022B188
    if (ctx->r3 == ctx->r2) {
        // 0x8022B16C: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_8022B188;
    }
    // 0x8022B16C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022B170: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022B174: beql        $v1, $v0, L_8022B188
    if (ctx->r3 == ctx->r2) {
        // 0x8022B178: addiu       $v0, $zero, -0x10
        ctx->r2 = ADD32(0, -0X10);
            goto L_8022B188;
    }
    goto skip_3;
    // 0x8022B178: addiu       $v0, $zero, -0x10
    ctx->r2 = ADD32(0, -0X10);
    skip_3:
    // 0x8022B17C: j           L_8022B18C
    // 0x8022B180: nop

        goto L_8022B18C;
    // 0x8022B180: nop

L_8022B184:
    // 0x8022B184: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
L_8022B188:
    // 0x8022B188: sh          $v0, 0x66($a0)
    MEM_H(0X66, ctx->r4) = ctx->r2;
L_8022B18C:
    // 0x8022B18C: jr          $ra
    // 0x8022B190: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x8022B190: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_8023B888_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B888: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023B88C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023B890: jal         0x8004F684
    // 0x8023B894: nop

    func_8004F684_2AA84(rdram, ctx);
        goto after_0;
    // 0x8023B894: nop

    after_0:
    // 0x8023B898: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023B89C: jr          $ra
    // 0x8023B8A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023B8A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023C0C8_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023C0C8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023C0CC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023C0D0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023C0D4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023C0D8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023C0DC: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x8023C0E0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023C0E4: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    // 0x8023C0E8: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8023C0EC: bne         $v0, $zero, L_8023C11C
    if (ctx->r2 != 0) {
        // 0x8023C0F0: addiu       $s0, $s1, 0x18
        ctx->r16 = ADD32(ctx->r17, 0X18);
            goto L_8023C11C;
    }
    // 0x8023C0F0: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x8023C0F4: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x8023C0F8: addiu       $a0, $zero, 0x186
    ctx->r4 = ADD32(0, 0X186);
    // 0x8023C0FC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023C100: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023C104: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023C108: jal         0x8002A2F8
    // 0x8023C10C: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    func_8002A2F8_56F8(rdram, ctx);
        goto after_0;
    // 0x8023C10C: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    after_0:
    // 0x8023C110: jal         0x80060590
    // 0x8023C114: addiu       $a0, $zero, 0x7B2
    ctx->r4 = ADD32(0, 0X7B2);
    func_80060590_3B990(rdram, ctx);
        goto after_1;
    // 0x8023C114: addiu       $a0, $zero, 0x7B2
    ctx->r4 = ADD32(0, 0X7B2);
    after_1:
    // 0x8023C118: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
L_8023C11C:
    // 0x8023C11C: jal         0x8002C678
    // 0x8023C120: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C678_7A78(rdram, ctx);
        goto after_2;
    // 0x8023C120: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8023C124: lb          $a0, 0xC($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XC);
    // 0x8023C128: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8023C12C: lbu         $v1, 0xB($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XB);
    // 0x8023C130: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8023C134: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    // 0x8023C138: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8023C13C: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8023C140: jal         0x800319B4
    // 0x8023C144: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
    func_800319B4_CDB4(rdram, ctx);
        goto after_3;
    // 0x8023C144: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
    after_3:
    // 0x8023C148: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023C14C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023C150: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023C154: jr          $ra
    // 0x8023C158: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023C158: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802308D8_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802308D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802308DC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802308E0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802308E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802308E8: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x802308EC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802308F0: bne         $v1, $v0, L_80230934
    if (ctx->r3 != ctx->r2) {
        // 0x802308F4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80230934;
    }
    // 0x802308F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802308F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802308FC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80230900: jal         0x80050294
    // 0x80230904: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80230904: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_0:
    // 0x80230908: lbu         $v1, 0xCA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XCA);
    // 0x8023090C: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x80230910: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80230914: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x80230918: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8023091C: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80230920: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    // 0x80230924: sb          $v0, 0x385($s0)
    MEM_B(0X385, ctx->r16) = ctx->r2;
    // 0x80230928: sb          $zero, 0x384($s0)
    MEM_B(0X384, ctx->r16) = 0;
    // 0x8023092C: andi        $v1, $v1, 0xFC
    ctx->r3 = ctx->r3 & 0XFC;
    // 0x80230930: sb          $v1, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r3;
L_80230934:
    // 0x80230934: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80230938: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023093C: jr          $ra
    // 0x80230940: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80230940: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023BED8_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023BED8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8023BEDC: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8023BEE0: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8023BEE4: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8023BEE8: addiu       $s1, $sp, 0x10
    ctx->r17 = ADD32(ctx->r29, 0X10);
    // 0x8023BEEC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023BEF0: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x8023BEF4: addiu       $a1, $a1, 0x17A8
    ctx->r5 = ADD32(ctx->r5, 0X17A8);
    // 0x8023BEF8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x8023BEFC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8023BF00: jal         0x8009A3B4
    // 0x8023BF04: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8023BF04: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    after_0:
    // 0x8023BF08: addiu       $s0, $s2, 0x18
    ctx->r16 = ADD32(ctx->r18, 0X18);
    // 0x8023BF0C: jal         0x8002C678
    // 0x8023BF10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C678_7A78(rdram, ctx);
        goto after_1;
    // 0x8023BF10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8023BF14: lbu         $v0, 0xB($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XB);
    // 0x8023BF18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023BF1C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023BF20: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8023BF24: jal         0x80031DA8
    // 0x8023BF28: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_2;
    // 0x8023BF28: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_2:
    // 0x8023BF2C: lb          $a0, 0xC($s2)
    ctx->r4 = MEM_B(ctx->r18, 0XC);
    // 0x8023BF30: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8023BF34: jal         0x800319B4
    // 0x8023BF38: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    func_800319B4_CDB4(rdram, ctx);
        goto after_3;
    // 0x8023BF38: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    after_3:
    // 0x8023BF3C: lbu         $v0, 0xB($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XB);
    // 0x8023BF40: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023BF44: sb          $v0, 0xB($s2)
    MEM_B(0XB, ctx->r18) = ctx->r2;
    // 0x8023BF48: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8023BF4C: bne         $v0, $zero, L_8023BFA0
    if (ctx->r2 != 0) {
        // 0x8023BF50: addiu       $a0, $zero, 0x185
        ctx->r4 = ADD32(0, 0X185);
            goto L_8023BFA0;
    }
    // 0x8023BF50: addiu       $a0, $zero, 0x185
    ctx->r4 = ADD32(0, 0X185);
    // 0x8023BF54: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023BF58: lbu         $v0, 0x8($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X8);
    // 0x8023BF5C: lbu         $v1, 0x0($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X0);
    // 0x8023BF60: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023BF64: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023BF68: andi        $v1, $v1, 0xFD
    ctx->r3 = ctx->r3 & 0XFD;
    // 0x8023BF6C: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x8023BF70: jal         0x8002A2F8
    // 0x8023BF74: sb          $v1, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r3;
    func_8002A2F8_56F8(rdram, ctx);
        goto after_4;
    // 0x8023BF74: sb          $v1, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r3;
    after_4:
    // 0x8023BF78: jal         0x80060590
    // 0x8023BF7C: addiu       $a0, $zero, 0x7B2
    ctx->r4 = ADD32(0, 0X7B2);
    func_80060590_3B990(rdram, ctx);
        goto after_5;
    // 0x8023BF7C: addiu       $a0, $zero, 0x7B2
    ctx->r4 = ADD32(0, 0X7B2);
    after_5:
    // 0x8023BF80: lw          $v1, 0x44($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X44);
    // 0x8023BF84: lw          $a0, 0x30($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X30);
    // 0x8023BF88: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8023BF8C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023BF90: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023BF94: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8023BF98: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023BF9C: sw          $a0, 0x5088($at)
    MEM_W(0X5088, ctx->r1) = ctx->r4;
L_8023BFA0:
    // 0x8023BFA0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8023BFA4: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8023BFA8: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8023BFAC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8023BFB0: jr          $ra
    // 0x8023BFB4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8023BFB4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022F608_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F608: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022F60C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F610: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F614: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022F618: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022F61C: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x8022F620: lui         $v0, 0x8
    ctx->r2 = S32(0X8 << 16);
    // 0x8022F624: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8022F628: beq         $v0, $zero, L_8022F64C
    if (ctx->r2 == 0) {
        // 0x8022F62C: addiu       $s1, $s0, 0x64
        ctx->r17 = ADD32(ctx->r16, 0X64);
            goto L_8022F64C;
    }
    // 0x8022F62C: addiu       $s1, $s0, 0x64
    ctx->r17 = ADD32(ctx->r16, 0X64);
    // 0x8022F630: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8022F634: lw          $v0, -0x3BC8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3BC8);
    // 0x8022F638: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x8022F63C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022F640: lui         $v1, 0x1D02
    ctx->r3 = S32(0X1D02 << 16);
    // 0x8022F644: bne         $v0, $v1, L_8022F688
    if (ctx->r2 != ctx->r3) {
        // 0x8022F648: nop
    
            goto L_8022F688;
    }
    // 0x8022F648: nop

L_8022F64C:
    // 0x8022F64C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F650: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F654: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022F658: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022F65C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022F660: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022F664: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x8022F668: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022F66C: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022F670: jal         0x80050294
    // 0x8022F674: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8022F674: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022F678: lbu         $v0, 0xCA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XCA);
    // 0x8022F67C: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x8022F680: j           L_8022F690
    // 0x8022F684: sb          $v0, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r2;
        goto L_8022F690;
    // 0x8022F684: sb          $v0, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r2;
L_8022F688:
    // 0x8022F688: jal         0x8005044C
    // 0x8022F68C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x8022F68C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_8022F690:
    // 0x8022F690: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022F694: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022F698: bne         $v1, $v0, L_8022F6B0
    if (ctx->r3 != ctx->r2) {
        // 0x8022F69C: addiu       $v0, $zero, -0x8000
        ctx->r2 = ADD32(0, -0X8000);
            goto L_8022F6B0;
    }
    // 0x8022F69C: addiu       $v0, $zero, -0x8000
    ctx->r2 = ADD32(0, -0X8000);
    // 0x8022F6A0: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022F6A4: sb          $zero, 0x2($s1)
    MEM_B(0X2, ctx->r17) = 0;
    // 0x8022F6A8: sb          $zero, 0x1($s1)
    MEM_B(0X1, ctx->r17) = 0;
    // 0x8022F6AC: sb          $zero, 0x0($s1)
    MEM_B(0X0, ctx->r17) = 0;
L_8022F6B0:
    // 0x8022F6B0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022F6B4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022F6B8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F6BC: jr          $ra
    // 0x8022F6C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022F6C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80226BFC_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226BFC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80226C00: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80226C04: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226C08: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80226C0C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80226C10: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80226C14: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x80226C18: beq         $v0, $zero, L_80226DF0
    if (ctx->r2 == 0) {
        // 0x80226C1C: addiu       $s1, $s0, 0x328
        ctx->r17 = ADD32(ctx->r16, 0X328);
            goto L_80226DF0;
    }
    // 0x80226C1C: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x80226C20: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80226C24: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80226C28: addu        $at, $at, $v0
    gpr jr_addend_80226C30 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226C2C: lw          $v0, 0x1498($at)
    ctx->r2 = ADD32(ctx->r1, 0X1498);
    // 0x80226C30: jr          $v0
    // 0x80226C34: nop

    switch (jr_addend_80226C30 >> 2) {
        case 0: goto L_80226C38; break;
        case 1: goto L_80226C88; break;
        case 2: goto L_80226CC8; break;
        case 3: goto L_80226CEC; break;
        case 4: goto L_80226D50; break;
        case 5: goto L_80226DCC; break;
        default: switch_error(__func__, 0x80226C30, 0x80241498);
    }
    // 0x80226C34: nop

L_80226C38:
    // 0x80226C38: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226C3C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80226C40: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80226C44: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80226C48: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80226C4C: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
    // 0x80226C50: andi        $v0, $v0, 0xFFDF
    ctx->r2 = ctx->r2 & 0XFFDF;
    // 0x80226C54: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x80226C58: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80226C5C: lh          $v1, 0x6E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X6E);
    // 0x80226C60: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80226C64: bgtz        $v1, L_80226C78
    if (SIGNED(ctx->r3) > 0) {
        // 0x80226C68: sh          $v0, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r2;
            goto L_80226C78;
    }
    // 0x80226C68: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80226C6C: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80226C70: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x80226C74: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_80226C78:
    // 0x80226C78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226C7C: addiu       $a1, $zero, -0x460
    ctx->r5 = ADD32(0, -0X460);
    // 0x80226C80: j           L_80226CB0
    // 0x80226C84: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
        goto L_80226CB0;
    // 0x80226C84: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_80226C88:
    // 0x80226C88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226C8C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80226C90: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80226C94: addiu       $v0, $zero, -0x190
    ctx->r2 = ADD32(0, -0X190);
    // 0x80226C98: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80226C9C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80226CA0: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80226CA4: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80226CA8: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80226CAC: addiu       $a2, $zero, -0x960
    ctx->r6 = ADD32(0, -0X960);
L_80226CB0:
    // 0x80226CB0: jal         0x8004DA90
    // 0x80226CB4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x80226CB4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x80226CB8: jal         0x80040F30
    // 0x80226CBC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_1;
    // 0x80226CBC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80226CC0: j           L_80226DF0
    // 0x80226CC4: nop

        goto L_80226DF0;
    // 0x80226CC4: nop

L_80226CC8:
    // 0x80226CC8: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80226CCC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80226CD0: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80226CD4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226CD8: bgez        $v0, L_80226CEC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80226CDC: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80226CEC;
    }
    // 0x80226CDC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80226CE0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80226CE4: addiu       $v0, $zero, 0x158
    ctx->r2 = ADD32(0, 0X158);
    // 0x80226CE8: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
L_80226CEC:
    // 0x80226CEC: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80226CF0: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x80226CF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226CF8: jal         0x8004DA90
    // 0x80226CFC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x80226CFC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x80226D00: jal         0x80040F30
    // 0x80226D04: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_3;
    // 0x80226D04: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80226D08: beq         $v0, $zero, L_80226DF0
    if (ctx->r2 == 0) {
        // 0x80226D0C: sw          $v0, 0x5C($s1)
        MEM_W(0X5C, ctx->r17) = ctx->r2;
            goto L_80226DF0;
    }
    // 0x80226D0C: sw          $v0, 0x5C($s1)
    MEM_W(0X5C, ctx->r17) = ctx->r2;
    // 0x80226D10: andi        $v0, $v0, 0xF00
    ctx->r2 = ctx->r2 & 0XF00;
    // 0x80226D14: bnel        $v0, $zero, L_80226D1C
    if (ctx->r2 != 0) {
        // 0x80226D18: sh          $zero, 0x44($s0)
        MEM_H(0X44, ctx->r16) = 0;
            goto L_80226D1C;
    }
    goto skip_0;
    // 0x80226D18: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    skip_0:
L_80226D1C:
    // 0x80226D1C: lw          $v0, 0x5C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X5C);
    // 0x80226D20: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x80226D24: beq         $v0, $zero, L_80226DF0
    if (ctx->r2 == 0) {
        // 0x80226D28: addiu       $v0, $zero, 0x21
        ctx->r2 = ADD32(0, 0X21);
            goto L_80226DF0;
    }
    // 0x80226D28: addiu       $v0, $zero, 0x21
    ctx->r2 = ADD32(0, 0X21);
    // 0x80226D2C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80226D30: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80226D34: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80226D38: addiu       $v0, $zero, -0xA0
    ctx->r2 = ADD32(0, -0XA0);
    // 0x80226D3C: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80226D40: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80226D44: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80226D48: j           L_80226DF0
    // 0x80226D4C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
        goto L_80226DF0;
    // 0x80226D4C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_80226D50:
    // 0x80226D50: lh          $v0, 0x4($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4);
    // 0x80226D54: beq         $v0, $zero, L_80226D64
    if (ctx->r2 == 0) {
        // 0x80226D58: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80226D64;
    }
    // 0x80226D58: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80226D5C: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80226D60: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_80226D64:
    // 0x80226D64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226D68: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80226D6C: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80226D70: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80226D74: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x80226D78: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80226D7C: sll         $a2, $v1, 24
    ctx->r6 = S32(ctx->r3 << 24);
    // 0x80226D80: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80226D84: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x80226D88: jal         0x8004DA90
    // 0x80226D8C: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_4;
    // 0x80226D8C: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
    after_4:
    // 0x80226D90: jal         0x80040F30
    // 0x80226D94: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_5;
    // 0x80226D94: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80226D98: beq         $v0, $zero, L_80226DF0
    if (ctx->r2 == 0) {
        // 0x80226D9C: sw          $v0, 0x5C($s1)
        MEM_W(0X5C, ctx->r17) = ctx->r2;
            goto L_80226DF0;
    }
    // 0x80226D9C: sw          $v0, 0x5C($s1)
    MEM_W(0X5C, ctx->r17) = ctx->r2;
    // 0x80226DA0: andi        $v0, $v0, 0xF00
    ctx->r2 = ctx->r2 & 0XF00;
    // 0x80226DA4: bnel        $v0, $zero, L_80226DAC
    if (ctx->r2 != 0) {
        // 0x80226DA8: sh          $zero, 0x44($s0)
        MEM_H(0X44, ctx->r16) = 0;
            goto L_80226DAC;
    }
    goto skip_1;
    // 0x80226DA8: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    skip_1:
L_80226DAC:
    // 0x80226DAC: lw          $v0, 0x5C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X5C);
    // 0x80226DB0: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x80226DB4: beq         $v0, $zero, L_80226DF0
    if (ctx->r2 == 0) {
        // 0x80226DB8: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80226DF0;
    }
    // 0x80226DB8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80226DBC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80226DC0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80226DC4: j           L_80226DF0
    // 0x80226DC8: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
        goto L_80226DF0;
    // 0x80226DC8: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_80226DCC:
    // 0x80226DCC: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80226DD0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80226DD4: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80226DD8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226DDC: bgez        $v0, L_80226DF0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80226DE0: nop
    
            goto L_80226DF0;
    }
    // 0x80226DE0: nop

    // 0x80226DE4: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80226DE8: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80226DEC: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_80226DF0:
    // 0x80226DF0: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80226DF4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80226DF8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80226DFC: jr          $ra
    // 0x80226E00: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80226E00: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022F5EC_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F5EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F5F0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022F5F4: jal         0x8004F418
    // 0x8022F5F8: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x8022F5F8: nop

    after_0:
    // 0x8022F5FC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022F600: jr          $ra
    // 0x8022F604: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F604: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802316F0_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802316F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802316F4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802316F8: lhu         $v0, 0x37C($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X37C);
    // 0x802316FC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80231700: sh          $v0, 0x37C($a0)
    MEM_H(0X37C, ctx->r4) = ctx->r2;
    // 0x80231704: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x80231708: bne         $v0, $zero, L_80231720
    if (ctx->r2 != 0) {
        // 0x8023170C: nop
    
            goto L_80231720;
    }
    // 0x8023170C: nop

    // 0x80231710: jal         0x80231DDC
    // 0x80231714: nop

    func_80231DDC_ovl4(rdram, ctx);
        goto after_0;
    // 0x80231714: nop

    after_0:
    // 0x80231718: j           L_8023174C
    // 0x8023171C: nop

        goto L_8023174C;
    // 0x8023171C: nop

L_80231720:
    // 0x80231720: lw          $v0, 0x358($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X358);
    // 0x80231724: beq         $v0, $zero, L_8023174C
    if (ctx->r2 == 0) {
        // 0x80231728: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023174C;
    }
    // 0x80231728: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023172C: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x80231730: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80231734: sh          $v0, 0x44($a0)
    MEM_H(0X44, ctx->r4) = ctx->r2;
    // 0x80231738: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023173C: sh          $zero, 0x46($a0)
    MEM_H(0X46, ctx->r4) = 0;
    // 0x80231740: sh          $zero, 0x4E($a0)
    MEM_H(0X4E, ctx->r4) = 0;
    // 0x80231744: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x80231748: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
L_8023174C:
    // 0x8023174C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80231750: jr          $ra
    // 0x80231754: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80231754: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
