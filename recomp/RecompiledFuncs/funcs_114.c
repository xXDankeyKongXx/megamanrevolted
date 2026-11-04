#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_802259DC_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802259DC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802259E0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802259E4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802259E8: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x802259EC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802259F0: lbu         $v0, 0xF0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XF0);
    // 0x802259F4: addiu       $v1, $v0, -0x2
    ctx->r3 = ADD32(ctx->r2, -0X2);
    // 0x802259F8: sltiu       $v0, $v1, 0xC
    ctx->r2 = ctx->r3 < 0XC ? 1 : 0;
    // 0x802259FC: beq         $v0, $zero, L_80225DF8
    if (ctx->r2 == 0) {
        // 0x80225A00: addiu       $s0, $s1, 0xD0
        ctx->r16 = ADD32(ctx->r17, 0XD0);
            goto L_80225DF8;
    }
    // 0x80225A00: addiu       $s0, $s1, 0xD0
    ctx->r16 = ADD32(ctx->r17, 0XD0);
    // 0x80225A04: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80225A08: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80225A0C: addu        $at, $at, $v0
    gpr jr_addend_80225A14 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80225A10: lw          $v0, 0x1BE0($at)
    ctx->r2 = ADD32(ctx->r1, 0X1BE0);
    // 0x80225A14: jr          $v0
    // 0x80225A18: nop

    switch (jr_addend_80225A14 >> 2) {
        case 0: goto L_80225A1C; break;
        case 1: goto L_80225DF8; break;
        case 2: goto L_80225DF8; break;
        case 3: goto L_80225AF8; break;
        case 4: goto L_80225DF8; break;
        case 5: goto L_80225B10; break;
        case 6: goto L_80225DF8; break;
        case 7: goto L_80225DF8; break;
        case 8: goto L_80225BD0; break;
        case 9: goto L_80225DF8; break;
        case 10: goto L_80225C9C; break;
        case 11: goto L_80225D9C; break;
        default: switch_error(__func__, 0x80225A14, 0x80231BE0);
    }
    // 0x80225A18: nop

L_80225A1C:
    // 0x80225A1C: lbu         $a0, 0xA($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0XA);
    // 0x80225A20: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x80225A24: bne         $v1, $zero, L_80225A58
    if (ctx->r3 != 0) {
        // 0x80225A28: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80225A58;
    }
    // 0x80225A28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225A2C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80225A30: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80225A34: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80225A38: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80225A3C: bne         $v0, $zero, L_80225E48
    if (ctx->r2 != 0) {
        // 0x80225A40: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80225E48;
    }
    // 0x80225A40: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80225A44: jal         0x800616FC
    // 0x80225A48: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_0;
    // 0x80225A48: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    after_0:
    // 0x80225A4C: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80225A50: j           L_80225D54
    // 0x80225A54: sh          $zero, 0x44($s1)
    MEM_H(0X44, ctx->r17) = 0;
        goto L_80225D54;
    // 0x80225A54: sh          $zero, 0x44($s1)
    MEM_H(0X44, ctx->r17) = 0;
L_80225A58:
    // 0x80225A58: bne         $v1, $v0, L_80225A98
    if (ctx->r3 != ctx->r2) {
        // 0x80225A5C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80225A98;
    }
    // 0x80225A5C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80225A60: lbu         $v0, 0x22($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X22);
    // 0x80225A64: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80225A68: bne         $v0, $zero, L_80225E48
    if (ctx->r2 != 0) {
        // 0x80225A6C: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_80225E48;
    }
    // 0x80225A6C: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80225A70: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80225A74: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80225A78: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80225A7C: bne         $v0, $zero, L_80225E48
    if (ctx->r2 != 0) {
        // 0x80225A80: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_80225E48;
    }
    // 0x80225A80: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x80225A84: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x80225A88: jal         0x80036B38
    // 0x80225A8C: lui         $a0, 0x8000
    ctx->r4 = S32(0X8000 << 16);
    func_80036B38_11F38(rdram, ctx);
        goto after_1;
    // 0x80225A8C: lui         $a0, 0x8000
    ctx->r4 = S32(0X8000 << 16);
    after_1:
    // 0x80225A90: j           L_80225E48
    // 0x80225A94: nop

        goto L_80225E48;
    // 0x80225A94: nop

L_80225A98:
    // 0x80225A98: bne         $v1, $v0, L_80225AB4
    if (ctx->r3 != ctx->r2) {
        // 0x80225A9C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80225AB4;
    }
    // 0x80225A9C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80225AA0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80225AA4: jal         0x800616FC
    // 0x80225AA8: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_2;
    // 0x80225AA8: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    after_2:
    // 0x80225AAC: j           L_80225D50
    // 0x80225AB0: nop

        goto L_80225D50;
    // 0x80225AB0: nop

L_80225AB4:
    // 0x80225AB4: bne         $v1, $v0, L_80225E48
    if (ctx->r3 != ctx->r2) {
        // 0x80225AB8: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_80225E48;
    }
    // 0x80225AB8: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80225ABC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80225AC0: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80225AC4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80225AC8: bne         $v0, $zero, L_80225E48
    if (ctx->r2 != 0) {
        // 0x80225ACC: addiu       $a0, $zero, 0x17C
        ctx->r4 = ADD32(0, 0X17C);
            goto L_80225E48;
    }
    // 0x80225ACC: addiu       $a0, $zero, 0x17C
    ctx->r4 = ADD32(0, 0X17C);
    // 0x80225AD0: addiu       $s0, $s1, 0x14
    ctx->r16 = ADD32(ctx->r17, 0X14);
    // 0x80225AD4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80225AD8: jal         0x8002A33C
    // 0x80225ADC: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
    func_8002A33C_573C(rdram, ctx);
        goto after_3;
    // 0x80225ADC: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
    after_3:
    // 0x80225AE0: lbu         $a1, 0xF0($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0XF0);
    // 0x80225AE4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80225AE8: lui         $s0, 0x8023
    ctx->r16 = S32(0X8023 << 16);
    // 0x80225AEC: addiu       $s0, $s0, 0xC50
    ctx->r16 = ADD32(ctx->r16, 0XC50);
    // 0x80225AF0: j           L_80225B8C
    // 0x80225AF4: sh          $zero, 0x44($s1)
    MEM_H(0X44, ctx->r17) = 0;
        goto L_80225B8C;
    // 0x80225AF4: sh          $zero, 0x44($s1)
    MEM_H(0X44, ctx->r17) = 0;
L_80225AF8:
    // 0x80225AF8: lbu         $v0, 0x22($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X22);
    // 0x80225AFC: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80225B00: beq         $v0, $zero, L_80225B20
    if (ctx->r2 == 0) {
        // 0x80225B04: nop
    
            goto L_80225B20;
    }
    // 0x80225B04: nop

    // 0x80225B08: j           L_80225B30
    // 0x80225B0C: nop

        goto L_80225B30;
    // 0x80225B0C: nop

L_80225B10:
    // 0x80225B10: lbu         $v0, 0x22($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X22);
    // 0x80225B14: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x80225B18: bne         $v0, $zero, L_80225B30
    if (ctx->r2 != 0) {
        // 0x80225B1C: nop
    
            goto L_80225B30;
    }
    // 0x80225B1C: nop

L_80225B20:
    // 0x80225B20: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80225B24: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225B28: j           L_80225B54
    // 0x80225B2C: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_80225B54;
    // 0x80225B2C: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_80225B30:
    // 0x80225B30: lbu         $v0, 0x23($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X23);
    // 0x80225B34: bnel        $v0, $zero, L_80225B54
    if (ctx->r2 != 0) {
        // 0x80225B38: sh          $zero, 0x44($s1)
        MEM_H(0X44, ctx->r17) = 0;
            goto L_80225B54;
    }
    goto skip_0;
    // 0x80225B38: sh          $zero, 0x44($s1)
    MEM_H(0X44, ctx->r17) = 0;
    skip_0:
    // 0x80225B3C: addiu       $a0, $zero, 0x17D
    ctx->r4 = ADD32(0, 0X17D);
    // 0x80225B40: jal         0x8002A33C
    // 0x80225B44: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_4;
    // 0x80225B44: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_4:
    // 0x80225B48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225B4C: sb          $v0, 0x23($s0)
    MEM_B(0X23, ctx->r16) = ctx->r2;
    // 0x80225B50: sh          $zero, 0x44($s1)
    MEM_H(0X44, ctx->r17) = 0;
L_80225B54:
    // 0x80225B54: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80225B58: beq         $v0, $zero, L_80225E48
    if (ctx->r2 == 0) {
        // 0x80225B5C: nop
    
            goto L_80225E48;
    }
    // 0x80225B5C: nop

    // 0x80225B60: lh          $v0, 0x44($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X44);
    // 0x80225B64: bne         $v0, $zero, L_80225B78
    if (ctx->r2 != 0) {
        // 0x80225B68: sb          $zero, 0x9($s1)
        MEM_B(0X9, ctx->r17) = 0;
            goto L_80225B78;
    }
    // 0x80225B68: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
    // 0x80225B6C: addiu       $a0, $zero, 0x17C
    ctx->r4 = ADD32(0, 0X17C);
    // 0x80225B70: jal         0x8002A33C
    // 0x80225B74: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_5;
    // 0x80225B74: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_5:
L_80225B78:
    // 0x80225B78: sb          $zero, 0x23($s0)
    MEM_B(0X23, ctx->r16) = 0;
    // 0x80225B7C: lbu         $a1, 0xF0($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0XF0);
    // 0x80225B80: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x80225B84: lui         $s0, 0x8023
    ctx->r16 = S32(0X8023 << 16);
    // 0x80225B88: addiu       $s0, $s0, 0xC50
    ctx->r16 = ADD32(ctx->r16, 0XC50);
L_80225B8C:
    // 0x80225B8C: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x80225B90: jal         0x8004EC38
    // 0x80225B94: addu        $a1, $a1, $s0
    ctx->r5 = ADD32(ctx->r5, ctx->r16);
    func_8004EC38_2A038(rdram, ctx);
        goto after_6;
    // 0x80225B94: addu        $a1, $a1, $s0
    ctx->r5 = ADD32(ctx->r5, ctx->r16);
    after_6:
    // 0x80225B98: lbu         $a1, 0xF0($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0XF0);
    // 0x80225B9C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80225BA0: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
    // 0x80225BA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225BA8: addiu       $a0, $s0, -0x8
    ctx->r4 = ADD32(ctx->r16, -0X8);
    // 0x80225BAC: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x80225BB0: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x80225BB4: addu        $a0, $a1, $a0
    ctx->r4 = ADD32(ctx->r5, ctx->r4);
    // 0x80225BB8: jal         0x8004DE68
    // 0x80225BBC: addu        $a1, $a1, $s0
    ctx->r5 = ADD32(ctx->r5, ctx->r16);
    func_8004DE68_29268(rdram, ctx);
        goto after_7;
    // 0x80225BBC: addu        $a1, $a1, $s0
    ctx->r5 = ADD32(ctx->r5, ctx->r16);
    after_7:
    // 0x80225BC0: sw          $v0, 0xE0($s1)
    MEM_W(0XE0, ctx->r17) = ctx->r2;
    // 0x80225BC4: sw          $v0, 0xE4($s1)
    MEM_W(0XE4, ctx->r17) = ctx->r2;
    // 0x80225BC8: j           L_80225E48
    // 0x80225BCC: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
        goto L_80225E48;
    // 0x80225BCC: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
L_80225BD0:
    // 0x80225BD0: lbu         $v0, 0x22($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X22);
    // 0x80225BD4: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x80225BD8: bne         $v0, $zero, L_80225BF0
    if (ctx->r2 != 0) {
        // 0x80225BDC: nop
    
            goto L_80225BF0;
    }
    // 0x80225BDC: nop

    // 0x80225BE0: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80225BE4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225BE8: j           L_80225C14
    // 0x80225BEC: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_80225C14;
    // 0x80225BEC: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_80225BF0:
    // 0x80225BF0: lbu         $v0, 0x23($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X23);
    // 0x80225BF4: bnel        $v0, $zero, L_80225C14
    if (ctx->r2 != 0) {
        // 0x80225BF8: sh          $zero, 0x44($s1)
        MEM_H(0X44, ctx->r17) = 0;
            goto L_80225C14;
    }
    goto skip_1;
    // 0x80225BF8: sh          $zero, 0x44($s1)
    MEM_H(0X44, ctx->r17) = 0;
    skip_1:
    // 0x80225BFC: addiu       $a0, $zero, 0x17D
    ctx->r4 = ADD32(0, 0X17D);
    // 0x80225C00: jal         0x8002A33C
    // 0x80225C04: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_8;
    // 0x80225C04: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_8:
    // 0x80225C08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225C0C: sb          $v0, 0x23($s0)
    MEM_B(0X23, ctx->r16) = ctx->r2;
    // 0x80225C10: sh          $zero, 0x44($s1)
    MEM_H(0X44, ctx->r17) = 0;
L_80225C14:
    // 0x80225C14: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80225C18: beq         $v0, $zero, L_80225E48
    if (ctx->r2 == 0) {
        // 0x80225C1C: nop
    
            goto L_80225E48;
    }
    // 0x80225C1C: nop

    // 0x80225C20: lh          $v0, 0x44($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X44);
    // 0x80225C24: bne         $v0, $zero, L_80225C38
    if (ctx->r2 != 0) {
        // 0x80225C28: sb          $zero, 0x9($s1)
        MEM_B(0X9, ctx->r17) = 0;
            goto L_80225C38;
    }
    // 0x80225C28: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
    // 0x80225C2C: addiu       $a0, $zero, 0x17C
    ctx->r4 = ADD32(0, 0X17C);
    // 0x80225C30: jal         0x8002A33C
    // 0x80225C34: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_9;
    // 0x80225C34: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_9:
L_80225C38:
    // 0x80225C38: sb          $zero, 0x23($s0)
    MEM_B(0X23, ctx->r16) = 0;
    // 0x80225C3C: lbu         $a1, 0xF0($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0XF0);
    // 0x80225C40: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x80225C44: lui         $s0, 0x8023
    ctx->r16 = S32(0X8023 << 16);
    // 0x80225C48: addiu       $s0, $s0, 0xC50
    ctx->r16 = ADD32(ctx->r16, 0XC50);
    // 0x80225C4C: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x80225C50: jal         0x8004EC38
    // 0x80225C54: addu        $a1, $a1, $s0
    ctx->r5 = ADD32(ctx->r5, ctx->r16);
    func_8004EC38_2A038(rdram, ctx);
        goto after_10;
    // 0x80225C54: addu        $a1, $a1, $s0
    ctx->r5 = ADD32(ctx->r5, ctx->r16);
    after_10:
    // 0x80225C58: lbu         $a1, 0xF0($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0XF0);
    // 0x80225C5C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80225C60: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
    // 0x80225C64: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225C68: addiu       $a0, $s0, -0x8
    ctx->r4 = ADD32(ctx->r16, -0X8);
    // 0x80225C6C: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x80225C70: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x80225C74: addu        $a0, $a1, $a0
    ctx->r4 = ADD32(ctx->r5, ctx->r4);
    // 0x80225C78: jal         0x8004DE68
    // 0x80225C7C: addu        $a1, $a1, $s0
    ctx->r5 = ADD32(ctx->r5, ctx->r16);
    func_8004DE68_29268(rdram, ctx);
        goto after_11;
    // 0x80225C7C: addu        $a1, $a1, $s0
    ctx->r5 = ADD32(ctx->r5, ctx->r16);
    after_11:
    // 0x80225C80: lui         $a0, 0x8000
    ctx->r4 = S32(0X8000 << 16);
    // 0x80225C84: sw          $v0, 0xE0($s1)
    MEM_W(0XE0, ctx->r17) = ctx->r2;
    // 0x80225C88: sw          $v0, 0xE4($s1)
    MEM_W(0XE4, ctx->r17) = ctx->r2;
    // 0x80225C8C: jal         0x80036B38
    // 0x80225C90: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    func_80036B38_11F38(rdram, ctx);
        goto after_12;
    // 0x80225C90: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    after_12:
    // 0x80225C94: j           L_80225E48
    // 0x80225C98: nop

        goto L_80225E48;
    // 0x80225C98: nop

L_80225C9C:
    // 0x80225C9C: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x80225CA0: bne         $v1, $zero, L_80225D20
    if (ctx->r3 != 0) {
        // 0x80225CA4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80225D20;
    }
    // 0x80225CA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225CA8: lbu         $v0, 0x23($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X23);
    // 0x80225CAC: bne         $v0, $zero, L_80225CC4
    if (ctx->r2 != 0) {
        // 0x80225CB0: addiu       $a0, $zero, 0x17D
        ctx->r4 = ADD32(0, 0X17D);
            goto L_80225CC4;
    }
    // 0x80225CB0: addiu       $a0, $zero, 0x17D
    ctx->r4 = ADD32(0, 0X17D);
    // 0x80225CB4: jal         0x8002A33C
    // 0x80225CB8: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_13;
    // 0x80225CB8: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_13:
    // 0x80225CBC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225CC0: sb          $v0, 0x23($s0)
    MEM_B(0X23, ctx->r16) = ctx->r2;
L_80225CC4:
    // 0x80225CC4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80225CC8: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80225CCC: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80225CD0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80225CD4: bne         $v0, $zero, L_80225E48
    if (ctx->r2 != 0) {
        // 0x80225CD8: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80225E48;
    }
    // 0x80225CD8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80225CDC: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80225CE0: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    // 0x80225CE4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225CE8: jal         0x800616FC
    // 0x80225CEC: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    func_800616FC_3CAFC(rdram, ctx);
        goto after_14;
    // 0x80225CEC: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    after_14:
    // 0x80225CF0: lbu         $v0, 0x20($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X20);
    // 0x80225CF4: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x80225CF8: addiu       $a1, $a1, 0xC48
    ctx->r5 = ADD32(ctx->r5, 0XC48);
    // 0x80225CFC: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80225D00: addu        $a0, $v0, $a1
    ctx->r4 = ADD32(ctx->r2, ctx->r5);
    // 0x80225D04: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x80225D08: jal         0x8004DE68
    // 0x80225D0C: addu        $a1, $v0, $a1
    ctx->r5 = ADD32(ctx->r2, ctx->r5);
    func_8004DE68_29268(rdram, ctx);
        goto after_15;
    // 0x80225D0C: addu        $a1, $v0, $a1
    ctx->r5 = ADD32(ctx->r2, ctx->r5);
    after_15:
    // 0x80225D10: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x80225D14: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x80225D18: j           L_80225E48
    // 0x80225D1C: sh          $zero, 0x44($s1)
    MEM_H(0X44, ctx->r17) = 0;
        goto L_80225E48;
    // 0x80225D1C: sh          $zero, 0x44($s1)
    MEM_H(0X44, ctx->r17) = 0;
L_80225D20:
    // 0x80225D20: bne         $v1, $v0, L_80225D60
    if (ctx->r3 != ctx->r2) {
        // 0x80225D24: nop
    
            goto L_80225D60;
    }
    // 0x80225D24: nop

    // 0x80225D28: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80225D2C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80225D30: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80225D34: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80225D38: bne         $v0, $zero, L_80225E48
    if (ctx->r2 != 0) {
        // 0x80225D3C: addiu       $a0, $zero, 0x17B
        ctx->r4 = ADD32(0, 0X17B);
            goto L_80225E48;
    }
    // 0x80225D3C: addiu       $a0, $zero, 0x17B
    ctx->r4 = ADD32(0, 0X17B);
    // 0x80225D40: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x80225D44: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80225D48: jal         0x8002A33C
    // 0x80225D4C: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_16;
    // 0x80225D4C: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    after_16:
L_80225D50:
    // 0x80225D50: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
L_80225D54:
    // 0x80225D54: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225D58: j           L_80225E48
    // 0x80225D5C: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_80225E48;
    // 0x80225D5C: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_80225D60:
    // 0x80225D60: lb          $v0, 0x21($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X21);
    // 0x80225D64: beq         $v0, $zero, L_80225D78
    if (ctx->r2 == 0) {
        // 0x80225D68: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80225D78;
    }
    // 0x80225D68: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80225D6C: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80225D70: j           L_80225E48
    // 0x80225D74: sb          $v0, 0x21($s0)
    MEM_B(0X21, ctx->r16) = ctx->r2;
        goto L_80225E48;
    // 0x80225D74: sb          $v0, 0x21($s0)
    MEM_B(0X21, ctx->r16) = ctx->r2;
L_80225D78:
    // 0x80225D78: addiu       $a0, $zero, 0x17E
    ctx->r4 = ADD32(0, 0X17E);
    // 0x80225D7C: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x80225D80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225D84: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x80225D88: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x80225D8C: jal         0x8002A33C
    // 0x80225D90: sh          $v0, 0x4C($s1)
    MEM_H(0X4C, ctx->r17) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_17;
    // 0x80225D90: sh          $v0, 0x4C($s1)
    MEM_H(0X4C, ctx->r17) = ctx->r2;
    after_17:
    // 0x80225D94: j           L_80225E48
    // 0x80225D98: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
        goto L_80225E48;
    // 0x80225D98: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
L_80225D9C:
    // 0x80225D9C: lh          $a1, 0x44($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X44);
    // 0x80225DA0: blez        $a1, L_80225DC8
    if (SIGNED(ctx->r5) <= 0) {
        // 0x80225DA4: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80225DC8;
    }
    // 0x80225DA4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80225DA8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80225DAC: jal         0x8004DA90
    // 0x80225DB0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_18;
    // 0x80225DB0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_18:
    // 0x80225DB4: lhu         $v0, 0x44($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X44);
    // 0x80225DB8: lhu         $v1, 0x4C($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X4C);
    // 0x80225DBC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80225DC0: j           L_80225E48
    // 0x80225DC4: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
        goto L_80225E48;
    // 0x80225DC4: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
L_80225DC8:
    // 0x80225DC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225DCC: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    // 0x80225DD0: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80225DD4: sh          $zero, 0x44($s1)
    MEM_H(0X44, ctx->r17) = 0;
    // 0x80225DD8: sb          $zero, 0x8($s1)
    MEM_B(0X8, ctx->r17) = 0;
    // 0x80225DDC: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
    // 0x80225DE0: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    // 0x80225DE4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80225DE8: sb          $v0, -0x3B9F($at)
    MEM_B(-0X3B9F, ctx->r1) = ctx->r2;
    // 0x80225DEC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80225DF0: j           L_80225E48
    // 0x80225DF4: sb          $zero, -0x3B9E($at)
    MEM_B(-0X3B9E, ctx->r1) = 0;
        goto L_80225E48;
    // 0x80225DF4: sb          $zero, -0x3B9E($at)
    MEM_B(-0X3B9E, ctx->r1) = 0;
L_80225DF8:
    // 0x80225DF8: lbu         $a1, 0xF0($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0XF0);
    // 0x80225DFC: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x80225E00: lui         $s0, 0x8023
    ctx->r16 = S32(0X8023 << 16);
    // 0x80225E04: addiu       $s0, $s0, 0xC50
    ctx->r16 = ADD32(ctx->r16, 0XC50);
    // 0x80225E08: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
    // 0x80225E0C: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x80225E10: jal         0x8004EC38
    // 0x80225E14: addu        $a1, $a1, $s0
    ctx->r5 = ADD32(ctx->r5, ctx->r16);
    func_8004EC38_2A038(rdram, ctx);
        goto after_19;
    // 0x80225E14: addu        $a1, $a1, $s0
    ctx->r5 = ADD32(ctx->r5, ctx->r16);
    after_19:
    // 0x80225E18: lbu         $a1, 0xF0($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0XF0);
    // 0x80225E1C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80225E20: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
    // 0x80225E24: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225E28: addiu       $a0, $s0, -0x8
    ctx->r4 = ADD32(ctx->r16, -0X8);
    // 0x80225E2C: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x80225E30: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x80225E34: addu        $a0, $a1, $a0
    ctx->r4 = ADD32(ctx->r5, ctx->r4);
    // 0x80225E38: jal         0x8004DE68
    // 0x80225E3C: addu        $a1, $a1, $s0
    ctx->r5 = ADD32(ctx->r5, ctx->r16);
    func_8004DE68_29268(rdram, ctx);
        goto after_20;
    // 0x80225E3C: addu        $a1, $a1, $s0
    ctx->r5 = ADD32(ctx->r5, ctx->r16);
    after_20:
    // 0x80225E40: sw          $v0, 0xE0($s1)
    MEM_W(0XE0, ctx->r17) = ctx->r2;
    // 0x80225E44: sw          $v0, 0xE4($s1)
    MEM_W(0XE4, ctx->r17) = ctx->r2;
L_80225E48:
    // 0x80225E48: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80225E4C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80225E50: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80225E54: jr          $ra
    // 0x80225E58: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80225E58: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80228DA8_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228DA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228DAC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228DB0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228DB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228DB8: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x80228DBC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80228DC0: sh          $zero, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = 0;
    // 0x80228DC4: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80228DC8: sh          $v0, 0x366($s0)
    MEM_H(0X366, ctx->r16) = ctx->r2;
    // 0x80228DCC: jal         0x8022AE88
    // 0x80228DD0: sh          $v0, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r2;
    func_8022AE88_ovl14(rdram, ctx);
        goto after_0;
    // 0x80228DD0: sh          $v0, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r2;
    after_0:
    // 0x80228DD4: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80228DD8: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80228DDC: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80228DE0: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80228DE4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80228DE8: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x80228DEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80228DF0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228DF4: jr          $ra
    // 0x80228DF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228DF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229010_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229010: lhu         $v0, 0x350($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X350);
    // 0x80229014: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80229018: sh          $v0, 0x350($a0)
    MEM_H(0X350, ctx->r4) = ctx->r2;
    // 0x8022901C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229020: bne         $v0, $zero, L_8022902C
    if (ctx->r2 != 0) {
        // 0x80229024: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022902C;
    }
    // 0x80229024: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229028: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_8022902C:
    // 0x8022902C: jr          $ra
    // 0x80229030: nop

    TRACE_RETURN()
    return;
    // 0x80229030: nop

;}
RECOMP_FUNC void func_8022DCFC_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DCFC: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    // 0x8022DD00: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8022DD04: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8022DD08: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x8022DD0C: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022DD10: subu        $v0, $a1, $v1
    ctx->r2 = SUB32(ctx->r5, ctx->r3);
    // 0x8022DD14: bltzl       $v0, L_8022DD1C
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022DD18: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_8022DD1C;
    }
    goto skip_0;
    // 0x8022DD18: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_0:
L_8022DD1C:
    // 0x8022DD1C: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x8022DD20: bnel        $v0, $zero, L_8022DD44
    if (ctx->r2 != 0) {
        // 0x8022DD24: sh          $a3, 0x328($a0)
        MEM_H(0X328, ctx->r4) = ctx->r7;
            goto L_8022DD44;
    }
    goto skip_1;
    // 0x8022DD24: sh          $a3, 0x328($a0)
    MEM_H(0X328, ctx->r4) = ctx->r7;
    skip_1:
    // 0x8022DD28: slt         $v0, $v1, $a1
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8022DD2C: beq         $v0, $zero, L_8022DD3C
    if (ctx->r2 == 0) {
        // 0x8022DD30: addiu       $v0, $a2, 0x20
        ctx->r2 = ADD32(ctx->r6, 0X20);
            goto L_8022DD3C;
    }
    // 0x8022DD30: addiu       $v0, $a2, 0x20
    ctx->r2 = ADD32(ctx->r6, 0X20);
    // 0x8022DD34: j           L_8022DD44
    // 0x8022DD38: sh          $v0, 0x328($a0)
    MEM_H(0X328, ctx->r4) = ctx->r2;
        goto L_8022DD44;
    // 0x8022DD38: sh          $v0, 0x328($a0)
    MEM_H(0X328, ctx->r4) = ctx->r2;
L_8022DD3C:
    // 0x8022DD3C: addiu       $v0, $a2, -0x20
    ctx->r2 = ADD32(ctx->r6, -0X20);
    // 0x8022DD40: sh          $v0, 0x328($a0)
    MEM_H(0X328, ctx->r4) = ctx->r2;
L_8022DD44:
    // 0x8022DD44: jr          $ra
    // 0x8022DD48: nop

    TRACE_RETURN()
    return;
    // 0x8022DD48: nop

;}
RECOMP_FUNC void func_8022E1D0_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E1D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E1D4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E1D8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E1DC: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022E1E0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022E1E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022E1E8: jal         0x8009A3B4
    // 0x8022E1EC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022E1EC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022E1F0: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022E1F4: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022E1F8: jal         0x8009A3B4
    // 0x8022E1FC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022E1FC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022E200: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022E204: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022E208: jal         0x8009A3B4
    // 0x8022E20C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022E20C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022E210: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022E214: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022E218: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022E21C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022E220: lw          $v0, 0x1A38($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1A38);
    // 0x8022E224: jalr        $v0
    // 0x8022E228: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x8022E228: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022E22C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022E230: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E234: jr          $ra
    // 0x8022E238: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E238: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228C0C_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228C0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228C10: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80228C14: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80228C18: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80228C1C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80228C20: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80228C24: lw          $v0, 0x176C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X176C);
    // 0x80228C28: jalr        $v0
    // 0x80228C2C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80228C2C: nop

    after_0:
    // 0x80228C30: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80228C34: jr          $ra
    // 0x80228C38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228C38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022CE0C_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CE0C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022CE10: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022CE14: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022CE18: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022CE1C: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8022CE20: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x8022CE24: addiu       $a0, $s2, 0xC4
    ctx->r4 = ADD32(ctx->r18, 0XC4);
    // 0x8022CE28: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x8022CE2C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022CE30: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8022CE34: jal         0x8009A3B4
    // 0x8022CE38: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022CE38: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    after_0:
    // 0x8022CE3C: addiu       $a0, $s0, 0xC4
    ctx->r4 = ADD32(ctx->r16, 0XC4);
    // 0x8022CE40: addiu       $a1, $s0, 0x188
    ctx->r5 = ADD32(ctx->r16, 0X188);
    // 0x8022CE44: jal         0x8009A3B4
    // 0x8022CE48: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022CE48: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x8022CE4C: lui         $v0, 0x7F
    ctx->r2 = S32(0X7F << 16);
    // 0x8022CE50: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x8022CE54: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8022CE58: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8022CE5C: bne         $v0, $zero, L_8022CEF0
    if (ctx->r2 != 0) {
        // 0x8022CE60: addiu       $s1, $s0, 0x2E8
        ctx->r17 = ADD32(ctx->r16, 0X2E8);
            goto L_8022CEF0;
    }
    // 0x8022CE60: addiu       $s1, $s0, 0x2E8
    ctx->r17 = ADD32(ctx->r16, 0X2E8);
    // 0x8022CE64: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x8022CE68: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x8022CE6C: beq         $v0, $zero, L_8022CEF0
    if (ctx->r2 == 0) {
        // 0x8022CE70: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022CEF0;
    }
    // 0x8022CE70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CE74: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022CE78: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022CE7C: lhu         $v1, 0x32C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X32C);
    // 0x8022CE80: addiu       $a2, $s0, 0x310
    ctx->r6 = ADD32(ctx->r16, 0X310);
    // 0x8022CE84: addiu       $a3, $s0, 0x318
    ctx->r7 = ADD32(ctx->r16, 0X318);
    // 0x8022CE88: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022CE8C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022CE90: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022CE94: jal         0x8004E150
    // 0x8022CE98: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_8004E150_29550(rdram, ctx);
        goto after_2;
    // 0x8022CE98: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_2:
    // 0x8022CE9C: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022CEA0: beq         $v0, $zero, L_8022CED8
    if (ctx->r2 == 0) {
        // 0x8022CEA4: nop
    
            goto L_8022CED8;
    }
    // 0x8022CEA4: nop

    // 0x8022CEA8: lbu         $v0, 0x33B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X33B);
    // 0x8022CEAC: bne         $v0, $zero, L_8022CEE4
    if (ctx->r2 != 0) {
        // 0x8022CEB0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022CEE4;
    }
    // 0x8022CEB0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022CEB4: lbu         $a0, 0x9($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X9);
    // 0x8022CEB8: lbu         $a1, 0xA($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XA);
    // 0x8022CEBC: lbu         $v1, 0x336($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X336);
    // 0x8022CEC0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022CEC4: ori         $v1, $v1, 0x4
    ctx->r3 = ctx->r3 | 0X4;
    // 0x8022CEC8: sb          $a0, 0x334($s0)
    MEM_B(0X334, ctx->r16) = ctx->r4;
    // 0x8022CECC: sb          $a1, 0x335($s0)
    MEM_B(0X335, ctx->r16) = ctx->r5;
    // 0x8022CED0: j           L_8022CEF0
    // 0x8022CED4: sb          $v1, 0x336($s0)
    MEM_B(0X336, ctx->r16) = ctx->r3;
        goto L_8022CEF0;
    // 0x8022CED4: sb          $v1, 0x336($s0)
    MEM_B(0X336, ctx->r16) = ctx->r3;
L_8022CED8:
    // 0x8022CED8: lbu         $v0, 0x33B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X33B);
    // 0x8022CEDC: beq         $v0, $zero, L_8022CEF0
    if (ctx->r2 == 0) {
        // 0x8022CEE0: nop
    
            goto L_8022CEF0;
    }
    // 0x8022CEE0: nop

L_8022CEE4:
    // 0x8022CEE4: lbu         $v0, 0x53($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X53);
    // 0x8022CEE8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022CEEC: sb          $v0, 0x53($s1)
    MEM_B(0X53, ctx->r17) = ctx->r2;
L_8022CEF0:
    // 0x8022CEF0: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8022CEF4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022CEF8: beq         $v1, $v0, L_8022CF64
    if (ctx->r3 == ctx->r2) {
        // 0x8022CEFC: addiu       $a0, $s0, 0xC4
        ctx->r4 = ADD32(ctx->r16, 0XC4);
            goto L_8022CF64;
    }
    // 0x8022CEFC: addiu       $a0, $s0, 0xC4
    ctx->r4 = ADD32(ctx->r16, 0XC4);
    // 0x8022CF00: addiu       $a1, $s0, 0x180
    ctx->r5 = ADD32(ctx->r16, 0X180);
    // 0x8022CF04: jal         0x8009A3B4
    // 0x8022CF08: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8022CF08: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x8022CF0C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CF10: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022CF14: addiu       $a2, $s1, 0x28
    ctx->r6 = ADD32(ctx->r17, 0X28);
    // 0x8022CF18: jal         0x8004DF78
    // 0x8022CF1C: addiu       $a3, $s1, 0x30
    ctx->r7 = ADD32(ctx->r17, 0X30);
    func_8004DF78_29378(rdram, ctx);
        goto after_4;
    // 0x8022CF1C: addiu       $a3, $s1, 0x30
    ctx->r7 = ADD32(ctx->r17, 0X30);
    after_4:
    // 0x8022CF20: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022CF24: beq         $v0, $zero, L_8022CF54
    if (ctx->r2 == 0) {
        // 0x8022CF28: nop
    
            goto L_8022CF54;
    }
    // 0x8022CF28: nop

    // 0x8022CF2C: lbu         $v1, 0x4E($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X4E);
    // 0x8022CF30: andi        $v0, $v1, 0xA
    ctx->r2 = ctx->r3 & 0XA;
    // 0x8022CF34: bne         $v0, $zero, L_8022CF54
    if (ctx->r2 != 0) {
        // 0x8022CF38: ori         $v0, $v1, 0x2
        ctx->r2 = ctx->r3 | 0X2;
            goto L_8022CF54;
    }
    // 0x8022CF38: ori         $v0, $v1, 0x2
    ctx->r2 = ctx->r3 | 0X2;
    // 0x8022CF3C: sb          $v0, 0x4E($s1)
    MEM_B(0X4E, ctx->r17) = ctx->r2;
    // 0x8022CF40: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x8022CF44: sb          $v0, 0x50($s1)
    MEM_B(0X50, ctx->r17) = ctx->r2;
    // 0x8022CF48: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022CF4C: sb          $v0, 0x4F($s1)
    MEM_B(0X4F, ctx->r17) = ctx->r2;
    // 0x8022CF50: sb          $zero, 0x51($s1)
    MEM_B(0X51, ctx->r17) = 0;
L_8022CF54:
    // 0x8022CF54: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8022CF58: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022CF5C: bne         $v1, $v0, L_8022CF94
    if (ctx->r3 != ctx->r2) {
        // 0x8022CF60: nop
    
            goto L_8022CF94;
    }
    // 0x8022CF60: nop

L_8022CF64:
    // 0x8022CF64: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CF68: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022CF6C: lbu         $v1, 0x4E($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X4E);
    // 0x8022CF70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CF74: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022CF78: sb          $v0, 0x52($s1)
    MEM_B(0X52, ctx->r17) = ctx->r2;
    // 0x8022CF7C: sb          $zero, 0x53($s1)
    MEM_B(0X53, ctx->r17) = 0;
    // 0x8022CF80: andi        $v1, $v1, 0xF5
    ctx->r3 = ctx->r3 & 0XF5;
    // 0x8022CF84: jal         0x8022C7F4
    // 0x8022CF88: sb          $v1, 0x4E($s1)
    MEM_B(0X4E, ctx->r17) = ctx->r3;
    func_8022C7F4_ovl14(rdram, ctx);
        goto after_5;
    // 0x8022CF88: sb          $v1, 0x4E($s1)
    MEM_B(0X4E, ctx->r17) = ctx->r3;
    after_5:
    // 0x8022CF8C: j           L_8022CF9C
    // 0x8022CF90: nop

        goto L_8022CF9C;
    // 0x8022CF90: nop

L_8022CF94:
    // 0x8022CF94: jal         0x8022CFB4
    // 0x8022CF98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022CFB4_ovl14(rdram, ctx);
        goto after_6;
    // 0x8022CF98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
L_8022CF9C:
    // 0x8022CF9C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8022CFA0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022CFA4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022CFA8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022CFAC: jr          $ra
    // 0x8022CFB0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022CFB0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80226740_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226740: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226744: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226748: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022674C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226750: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x80226754: bne         $v0, $zero, L_802267D4
    if (ctx->r2 != 0) {
        // 0x80226758: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_802267D4;
    }
    // 0x80226758: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x8022675C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80226760: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x80226764: bne         $v1, $v0, L_80226784
    if (ctx->r3 != ctx->r2) {
        // 0x80226768: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80226784;
    }
    // 0x80226768: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022676C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80226770: lbu         $v1, -0x3BC8($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3BC8);
    // 0x80226774: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226778: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x8022677C: j           L_80226798
    // 0x80226780: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
        goto L_80226798;
    // 0x80226780: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_80226784:
    // 0x80226784: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80226788: lbu         $v1, -0x3BC8($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3BC8);
    // 0x8022678C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226790: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x80226794: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80226798:
    // 0x80226798: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022679C: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x802267A0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802267A4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802267A8: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x802267AC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802267B0: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x802267B4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802267B8: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x802267BC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802267C0: sb          $v1, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r3;
    // 0x802267C4: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x802267C8: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x802267CC: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x802267D0: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
L_802267D4:
    // 0x802267D4: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x802267D8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802267DC: bne         $v1, $v0, L_80226834
    if (ctx->r3 != ctx->r2) {
        // 0x802267E0: addiu       $v0, $zero, 0x72
        ctx->r2 = ADD32(0, 0X72);
            goto L_80226834;
    }
    // 0x802267E0: addiu       $v0, $zero, 0x72
    ctx->r2 = ADD32(0, 0X72);
    // 0x802267E4: jal         0x8004F144
    // 0x802267E8: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x802267E8: nop

    after_0:
    // 0x802267EC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802267F0: beq         $v1, $zero, L_8022682C
    if (ctx->r3 == 0) {
        // 0x802267F4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022682C;
    }
    // 0x802267F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802267F8: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x802267FC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80226800: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x80226804: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
    // 0x80226808: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022680C: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
    // 0x80226810: addiu       $v0, $zero, 0x85
    ctx->r2 = ADD32(0, 0X85);
    // 0x80226814: sh          $v0, 0x1C($v1)
    MEM_H(0X1C, ctx->r3) = ctx->r2;
    // 0x80226818: addiu       $v0, $zero, -0x16E
    ctx->r2 = ADD32(0, -0X16E);
    // 0x8022681C: sh          $v0, 0x1E($v1)
    MEM_H(0X1E, ctx->r3) = ctx->r2;
    // 0x80226820: addiu       $v0, $zero, -0xC8
    ctx->r2 = ADD32(0, -0XC8);
    // 0x80226824: sb          $zero, 0xD($v1)
    MEM_B(0XD, ctx->r3) = 0;
    // 0x80226828: sh          $v0, 0x20($v1)
    MEM_H(0X20, ctx->r3) = ctx->r2;
L_8022682C:
    // 0x8022682C: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x80226830: addiu       $v0, $zero, 0x72
    ctx->r2 = ADD32(0, 0X72);
L_80226834:
    // 0x80226834: bne         $v1, $v0, L_80226844
    if (ctx->r3 != ctx->r2) {
        // 0x80226838: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80226844;
    }
    // 0x80226838: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022683C: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x80226840: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
L_80226844:
    // 0x80226844: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x80226848: addiu       $v0, $zero, 0xAC
    ctx->r2 = ADD32(0, 0XAC);
    // 0x8022684C: bne         $v1, $v0, L_8022685C
    if (ctx->r3 != ctx->r2) {
        // 0x80226850: nop
    
            goto L_8022685C;
    }
    // 0x80226850: nop

    // 0x80226854: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x80226858: sb          $zero, 0x9($v1)
    MEM_B(0X9, ctx->r3) = 0;
L_8022685C:
    // 0x8022685C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226860: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226864: jr          $ra
    // 0x80226868: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226868: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022F4B0_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F4B0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022F4B4: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8022F4B8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8022F4BC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8022F4C0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022F4C4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022F4C8: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x8022F4CC: lbu         $v1, 0x3($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X3);
    // 0x8022F4D0: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022F4D4: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x8022F4D8: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x8022F4DC: beq         $v0, $zero, L_8022F72C
    if (ctx->r2 == 0) {
        // 0x8022F4E0: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8022F72C;
    }
    // 0x8022F4E0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022F4E4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022F4E8: addu        $at, $at, $v0
    gpr jr_addend_8022F4F0 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022F4EC: lw          $v0, 0x1CD0($at)
    ctx->r2 = ADD32(ctx->r1, 0X1CD0);
    // 0x8022F4F0: jr          $v0
    // 0x8022F4F4: nop

    switch (jr_addend_8022F4F0 >> 2) {
        case 0: goto L_8022F4F8; break;
        case 1: goto L_8022F53C; break;
        case 2: goto L_8022F5EC; break;
        case 3: goto L_8022F63C; break;
        case 4: goto L_8022F6DC; break;
        default: switch_error(__func__, 0x8022F4F0, 0x80231CD0);
    }
    // 0x8022F4F4: nop

L_8022F4F8:
    // 0x8022F4F8: lui         $v0, 0x3D48
    ctx->r2 = S32(0X3D48 << 16);
    // 0x8022F4FC: ori         $v0, $v0, 0xE
    ctx->r2 = ctx->r2 | 0XE;
    // 0x8022F500: lui         $v1, 0x2E80
    ctx->r3 = S32(0X2E80 << 16);
    // 0x8022F504: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x8022F508: sw          $v0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r2;
    // 0x8022F50C: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022F510: sb          $v0, 0x22($s2)
    MEM_B(0X22, ctx->r18) = ctx->r2;
    // 0x8022F514: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8022F518: sb          $v0, 0x23($s2)
    MEM_B(0X23, ctx->r18) = ctx->r2;
    // 0x8022F51C: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x8022F520: sh          $v0, 0x24($s2)
    MEM_H(0X24, ctx->r18) = ctx->r2;
    // 0x8022F524: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F528: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x8022F52C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022F530: sw          $v1, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r3;
    // 0x8022F534: j           L_8022F72C
    // 0x8022F538: sb          $v0, 0xB($s2)
    MEM_B(0XB, ctx->r18) = ctx->r2;
        goto L_8022F72C;
    // 0x8022F538: sb          $v0, 0xB($s2)
    MEM_B(0XB, ctx->r18) = ctx->r2;
L_8022F53C:
    // 0x8022F53C: lui         $v1, 0x3D48
    ctx->r3 = S32(0X3D48 << 16);
    // 0x8022F540: lb          $a0, 0xC($s2)
    ctx->r4 = MEM_B(ctx->r18, 0XC);
    // 0x8022F544: ori         $v1, $v1, 0xE
    ctx->r3 = ctx->r3 | 0XE;
    // 0x8022F548: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F54C: sh          $v0, 0x24($s2)
    MEM_H(0X24, ctx->r18) = ctx->r2;
    // 0x8022F550: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022F554: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x8022F558: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F55C: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
    // 0x8022F560: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022F564: sb          $v0, 0x22($s2)
    MEM_B(0X22, ctx->r18) = ctx->r2;
    // 0x8022F568: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8022F56C: sb          $v0, 0x23($s2)
    MEM_B(0X23, ctx->r18) = ctx->r2;
    // 0x8022F570: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F574: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
    // 0x8022F578: beq         $a0, $v0, L_8022F5C0
    if (ctx->r4 == ctx->r2) {
        // 0x8022F57C: sw          $v1, 0x14($s2)
        MEM_W(0X14, ctx->r18) = ctx->r3;
            goto L_8022F5C0;
    }
    // 0x8022F57C: sw          $v1, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r3;
    // 0x8022F580: slti        $v0, $a0, 0x2
    ctx->r2 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    // 0x8022F584: beql        $v0, $zero, L_8022F59C
    if (ctx->r2 == 0) {
        // 0x8022F588: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022F59C;
    }
    goto skip_0;
    // 0x8022F588: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022F58C: beq         $a0, $zero, L_8022F5AC
    if (ctx->r4 == 0) {
        // 0x8022F590: lui         $v0, 0x2E00
        ctx->r2 = S32(0X2E00 << 16);
            goto L_8022F5AC;
    }
    // 0x8022F590: lui         $v0, 0x2E00
    ctx->r2 = S32(0X2E00 << 16);
    // 0x8022F594: j           L_8022F72C
    // 0x8022F598: nop

        goto L_8022F72C;
    // 0x8022F598: nop

L_8022F59C:
    // 0x8022F59C: beq         $a0, $v0, L_8022F5D8
    if (ctx->r4 == ctx->r2) {
        // 0x8022F5A0: lui         $v0, 0x2E00
        ctx->r2 = S32(0X2E00 << 16);
            goto L_8022F5D8;
    }
    // 0x8022F5A0: lui         $v0, 0x2E00
    ctx->r2 = S32(0X2E00 << 16);
    // 0x8022F5A4: j           L_8022F72C
    // 0x8022F5A8: nop

        goto L_8022F72C;
    // 0x8022F5A8: nop

L_8022F5AC:
    // 0x8022F5AC: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x8022F5B0: sw          $v0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r2;
    // 0x8022F5B4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022F5B8: j           L_8022F72C
    // 0x8022F5BC: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
        goto L_8022F72C;
    // 0x8022F5BC: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
L_8022F5C0:
    // 0x8022F5C0: lui         $v0, 0x2E00
    ctx->r2 = S32(0X2E00 << 16);
    // 0x8022F5C4: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x8022F5C8: sw          $v0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r2;
    // 0x8022F5CC: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x8022F5D0: j           L_8022F72C
    // 0x8022F5D4: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
        goto L_8022F72C;
    // 0x8022F5D4: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
L_8022F5D8:
    // 0x8022F5D8: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x8022F5DC: sw          $v0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r2;
    // 0x8022F5E0: addiu       $v0, $zero, 0x808
    ctx->r2 = ADD32(0, 0X808);
    // 0x8022F5E4: j           L_8022F72C
    // 0x8022F5E8: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
        goto L_8022F72C;
    // 0x8022F5E8: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
L_8022F5EC:
    // 0x8022F5EC: lui         $v0, 0x3D48
    ctx->r2 = S32(0X3D48 << 16);
    // 0x8022F5F0: ori         $v0, $v0, 0xE
    ctx->r2 = ctx->r2 | 0XE;
    // 0x8022F5F4: lbu         $a0, 0x3($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X3);
    // 0x8022F5F8: lui         $v1, 0x2E00
    ctx->r3 = S32(0X2E00 << 16);
    // 0x8022F5FC: ori         $v1, $v1, 0x80
    ctx->r3 = ctx->r3 | 0X80;
    // 0x8022F600: sw          $v0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r2;
    // 0x8022F604: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022F608: sb          $v0, 0x22($s2)
    MEM_B(0X22, ctx->r18) = ctx->r2;
    // 0x8022F60C: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8022F610: sb          $v0, 0x23($s2)
    MEM_B(0X23, ctx->r18) = ctx->r2;
    // 0x8022F614: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022F618: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x8022F61C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022F620: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
    // 0x8022F624: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x8022F628: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
    // 0x8022F62C: sw          $v1, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r3;
    // 0x8022F630: sh          $v0, 0x24($s2)
    MEM_H(0X24, ctx->r18) = ctx->r2;
    // 0x8022F634: j           L_8022F72C
    // 0x8022F638: sb          $a0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r4;
        goto L_8022F72C;
    // 0x8022F638: sb          $a0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r4;
L_8022F63C:
    // 0x8022F63C: lui         $v0, 0x3D48
    ctx->r2 = S32(0X3D48 << 16);
    // 0x8022F640: ori         $v0, $v0, 0x2E
    ctx->r2 = ctx->r2 | 0X2E;
    // 0x8022F644: lui         $v1, 0x2E80
    ctx->r3 = S32(0X2E80 << 16);
    // 0x8022F648: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x8022F64C: addiu       $s1, $sp, 0x10
    ctx->r17 = ADD32(ctx->r29, 0X10);
    // 0x8022F650: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022F654: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x8022F658: addiu       $a1, $a1, 0x1CC8
    ctx->r5 = ADD32(ctx->r5, 0X1CC8);
    // 0x8022F65C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x8022F660: sw          $v0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r2;
    // 0x8022F664: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
    // 0x8022F668: sb          $v0, 0x22($s2)
    MEM_B(0X22, ctx->r18) = ctx->r2;
    // 0x8022F66C: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x8022F670: sb          $v0, 0x23($s2)
    MEM_B(0X23, ctx->r18) = ctx->r2;
    // 0x8022F674: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022F678: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x8022F67C: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8022F680: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
    // 0x8022F684: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
    // 0x8022F688: sw          $v1, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r3;
    // 0x8022F68C: jal         0x8009A3B4
    // 0x8022F690: sh          $zero, 0x26($s2)
    MEM_H(0X26, ctx->r18) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022F690: sh          $zero, 0x26($s2)
    MEM_H(0X26, ctx->r18) = 0;
    after_0:
    // 0x8022F694: addiu       $s0, $sp, 0x18
    ctx->r16 = ADD32(ctx->r29, 0X18);
    // 0x8022F698: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F69C: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x8022F6A0: addiu       $a1, $a1, 0x1CCC
    ctx->r5 = ADD32(ctx->r5, 0X1CCC);
    // 0x8022F6A4: jal         0x8009A3B4
    // 0x8022F6A8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022F6A8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_1:
    // 0x8022F6AC: lb          $v0, 0xC($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XC);
    // 0x8022F6B0: lb          $v1, 0xC($s2)
    ctx->r3 = MEM_B(ctx->r18, 0XC);
    // 0x8022F6B4: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
    // 0x8022F6B8: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8022F6BC: addu        $s0, $s0, $v1
    ctx->r16 = ADD32(ctx->r16, ctx->r3);
    // 0x8022F6C0: sh          $v0, 0x24($s2)
    MEM_H(0X24, ctx->r18) = ctx->r2;
    // 0x8022F6C4: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x8022F6C8: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8022F6CC: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x8022F6D0: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x8022F6D4: j           L_8022F72C
    // 0x8022F6D8: sb          $v1, 0xC($s2)
    MEM_B(0XC, ctx->r18) = ctx->r3;
        goto L_8022F72C;
    // 0x8022F6D8: sb          $v1, 0xC($s2)
    MEM_B(0XC, ctx->r18) = ctx->r3;
L_8022F6DC:
    // 0x8022F6DC: lui         $v0, 0x3D08
    ctx->r2 = S32(0X3D08 << 16);
    // 0x8022F6E0: ori         $v0, $v0, 0xE
    ctx->r2 = ctx->r2 | 0XE;
    // 0x8022F6E4: lbu         $v1, 0x0($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X0);
    // 0x8022F6E8: lui         $a0, 0x2E00
    ctx->r4 = S32(0X2E00 << 16);
    // 0x8022F6EC: ori         $a0, $a0, 0x80
    ctx->r4 = ctx->r4 | 0X80;
    // 0x8022F6F0: sw          $v0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r2;
    // 0x8022F6F4: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
    // 0x8022F6F8: sb          $v0, 0x22($s2)
    MEM_B(0X22, ctx->r18) = ctx->r2;
    // 0x8022F6FC: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8022F700: sb          $v0, 0x23($s2)
    MEM_B(0X23, ctx->r18) = ctx->r2;
    // 0x8022F704: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022F708: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x8022F70C: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x8022F710: sb          $zero, 0x9($s2)
    MEM_B(0X9, ctx->r18) = 0;
    // 0x8022F714: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
    // 0x8022F718: sw          $a0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r4;
    // 0x8022F71C: sh          $zero, 0x26($s2)
    MEM_H(0X26, ctx->r18) = 0;
    // 0x8022F720: sh          $v0, 0x24($s2)
    MEM_H(0X24, ctx->r18) = ctx->r2;
    // 0x8022F724: ori         $v1, $v1, 0x20
    ctx->r3 = ctx->r3 | 0X20;
    // 0x8022F728: sb          $v1, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r3;
L_8022F72C:
    // 0x8022F72C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8022F730: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8022F734: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022F738: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022F73C: jr          $ra
    // 0x8022F740: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022F740: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022AB20_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AB20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022AB24: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022AB28: lbu         $v0, 0x34B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34B);
    // 0x8022AB2C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022AB30: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022AB34: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022AB38: lw          $v0, 0x1968($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1968);
    // 0x8022AB3C: jalr        $v0
    // 0x8022AB40: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022AB40: nop

    after_0:
    // 0x8022AB44: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022AB48: jr          $ra
    // 0x8022AB4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022AB4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022C69C_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C69C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022C6A0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022C6A4: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8022C6A8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022C6AC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022C6B0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C6B4: lh          $v0, 0x32E($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X32E);
    // 0x8022C6B8: beq         $v0, $zero, L_8022C788
    if (ctx->r2 == 0) {
        // 0x8022C6BC: addiu       $v1, $zero, 0x18
        ctx->r3 = ADD32(0, 0X18);
            goto L_8022C788;
    }
    // 0x8022C6BC: addiu       $v1, $zero, 0x18
    ctx->r3 = ADD32(0, 0X18);
    // 0x8022C6C0: lbu         $v0, 0x333($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X333);
    // 0x8022C6C4: andi        $v0, $v0, 0x18
    ctx->r2 = ctx->r2 & 0X18;
    // 0x8022C6C8: bne         $v0, $v1, L_8022C6E0
    if (ctx->r2 != ctx->r3) {
        // 0x8022C6CC: addiu       $s1, $s2, 0x14
        ctx->r17 = ADD32(ctx->r18, 0X14);
            goto L_8022C6E0;
    }
    // 0x8022C6CC: addiu       $s1, $s2, 0x14
    ctx->r17 = ADD32(ctx->r18, 0X14);
    // 0x8022C6D0: addiu       $a0, $zero, 0xDB
    ctx->r4 = ADD32(0, 0XDB);
    // 0x8022C6D4: jal         0x8002A33C
    // 0x8022C6D8: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x8022C6D8: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    after_0:
    // 0x8022C6DC: addiu       $s1, $s2, 0x14
    ctx->r17 = ADD32(ctx->r18, 0X14);
L_8022C6E0:
    // 0x8022C6E0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022C6E4: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x8022C6E8: addiu       $s0, $s0, 0x49C4
    ctx->r16 = ADD32(ctx->r16, 0X49C4);
    // 0x8022C6EC: lhu         $a2, 0x56($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X56);
    // 0x8022C6F0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022C6F4: addiu       $a3, $zero, 0xC
    ctx->r7 = ADD32(0, 0XC);
    // 0x8022C6F8: jal         0x8004F820
    // 0x8022C6FC: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x8022C6FC: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_1:
    // 0x8022C700: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022C704: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022C708: lhu         $v1, 0x56($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X56);
    // 0x8022C70C: addiu       $a3, $zero, 0xC
    ctx->r7 = ADD32(0, 0XC);
    // 0x8022C710: lhu         $a2, 0x32C($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X32C);
    // 0x8022C714: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022C718: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022C71C: addu        $a2, $v1, $a2
    ctx->r6 = ADD32(ctx->r3, ctx->r6);
    // 0x8022C720: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    // 0x8022C724: jal         0x8004F820
    // 0x8022C728: sh          $v1, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r3;
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x8022C728: sh          $v1, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r3;
    after_2:
    // 0x8022C72C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022C730: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    // 0x8022C734: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022C738: lhu         $v1, 0x32C($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X32C);
    // 0x8022C73C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022C740: addiu       $t0, $zero, 0xA0
    ctx->r8 = ADD32(0, 0XA0);
    // 0x8022C744: sh          $t0, 0x44($s2)
    MEM_H(0X44, ctx->r18) = ctx->r8;
    // 0x8022C748: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022C74C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022C750: jal         0x8004DA90
    // 0x8022C754: sh          $v1, 0x32C($s2)
    MEM_H(0X32C, ctx->r18) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x8022C754: sh          $v1, 0x32C($s2)
    MEM_H(0X32C, ctx->r18) = ctx->r3;
    after_3:
    // 0x8022C758: lhu         $v0, 0x32E($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X32E);
    // 0x8022C75C: lbu         $v1, 0x332($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X332);
    // 0x8022C760: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022C764: andi        $v1, $v1, 0x10
    ctx->r3 = ctx->r3 & 0X10;
    // 0x8022C768: beq         $v1, $zero, L_8022C7DC
    if (ctx->r3 == 0) {
        // 0x8022C76C: sh          $v0, 0x32E($s2)
        MEM_H(0X32E, ctx->r18) = ctx->r2;
            goto L_8022C7DC;
    }
    // 0x8022C76C: sh          $v0, 0x32E($s2)
    MEM_H(0X32E, ctx->r18) = ctx->r2;
    // 0x8022C770: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C774: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
    // 0x8022C778: jal         0x8022C1B8
    // 0x8022C77C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8022C1B8_ovl14(rdram, ctx);
        goto after_4;
    // 0x8022C77C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_4:
    // 0x8022C780: j           L_8022C7DC
    // 0x8022C784: nop

        goto L_8022C7DC;
    // 0x8022C784: nop

L_8022C788:
    // 0x8022C788: lbu         $v0, 0x3($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X3);
    // 0x8022C78C: sb          $zero, 0x9($s2)
    MEM_B(0X9, ctx->r18) = 0;
    // 0x8022C790: andi        $v0, $v0, 0xF0
    ctx->r2 = ctx->r2 & 0XF0;
    // 0x8022C794: bne         $v0, $zero, L_8022C7B4
    if (ctx->r2 != 0) {
        // 0x8022C798: sb          $zero, 0x330($s2)
        MEM_B(0X330, ctx->r18) = 0;
            goto L_8022C7B4;
    }
    // 0x8022C798: sb          $zero, 0x330($s2)
    MEM_B(0X330, ctx->r18) = 0;
    // 0x8022C79C: lbu         $v0, 0x332($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X332);
    // 0x8022C7A0: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8022C7A4: beq         $v0, $zero, L_8022C7DC
    if (ctx->r2 == 0) {
        // 0x8022C7A8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022C7DC;
    }
    // 0x8022C7A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C7AC: j           L_8022C7DC
    // 0x8022C7B0: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
        goto L_8022C7DC;
    // 0x8022C7B0: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
L_8022C7B4:
    // 0x8022C7B4: lbu         $v0, 0x332($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X332);
    // 0x8022C7B8: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8022C7BC: beq         $v0, $zero, L_8022C7DC
    if (ctx->r2 == 0) {
        // 0x8022C7C0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022C7DC;
    }
    // 0x8022C7C0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022C7C4: lb          $v1, 0xD($s2)
    ctx->r3 = MEM_B(ctx->r18, 0XD);
    // 0x8022C7C8: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
    // 0x8022C7CC: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
    // 0x8022C7D0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022C7D4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022C7D8: sh          $v0, 0x32E($s2)
    MEM_H(0X32E, ctx->r18) = ctx->r2;
L_8022C7DC:
    // 0x8022C7DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022C7E0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022C7E4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022C7E8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C7EC: jr          $ra
    // 0x8022C7F0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022C7F0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022FB5C_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FB5C: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x8022FB60: beq         $v0, $zero, L_8022FB74
    if (ctx->r2 == 0) {
        // 0x8022FB64: nop
    
            goto L_8022FB74;
    }
    // 0x8022FB64: nop

    // 0x8022FB68: lhu         $v0, 0xC($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0XC);
    // 0x8022FB6C: addiu       $v0, $v0, 0x11
    ctx->r2 = ADD32(ctx->r2, 0X11);
    // 0x8022FB70: sh          $v0, 0xC($a0)
    MEM_H(0XC, ctx->r4) = ctx->r2;
L_8022FB74:
    // 0x8022FB74: jr          $ra
    // 0x8022FB78: nop

    TRACE_RETURN()
    return;
    // 0x8022FB78: nop

    // 0x8022FB7C: nop

;}
RECOMP_FUNC void func_80225150_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225150: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225154: addiu       $v0, $v0, 0x16C
    ctx->r2 = ADD32(ctx->r2, 0X16C);
    // 0x80225158: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022515C: sw          $v0, 0x4020($at)
    MEM_W(0X4020, ctx->r1) = ctx->r2;
    // 0x80225160: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225164: addiu       $v0, $v0, 0x2AC
    ctx->r2 = ADD32(ctx->r2, 0X2AC);
    // 0x80225168: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8022516C: sw          $v0, -0x22A0($at)
    MEM_W(-0X22A0, ctx->r1) = ctx->r2;
    // 0x80225170: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225174: addiu       $v0, $v0, 0x2B0
    ctx->r2 = ADD32(ctx->r2, 0X2B0);
    // 0x80225178: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x8022517C: sw          $v0, -0x26A8($at)
    MEM_W(-0X26A8, ctx->r1) = ctx->r2;
    // 0x80225180: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225184: addiu       $v0, $v0, 0x36C
    ctx->r2 = ADD32(ctx->r2, 0X36C);
    // 0x80225188: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8022518C: sw          $v0, -0xBD8($at)
    MEM_W(-0XBD8, ctx->r1) = ctx->r2;
    // 0x80225190: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225194: addiu       $v0, $v0, 0x3AC
    ctx->r2 = ADD32(ctx->r2, 0X3AC);
    // 0x80225198: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8022519C: sw          $v0, 0xC68($at)
    MEM_W(0XC68, ctx->r1) = ctx->r2;
    // 0x802251A0: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802251A4: addiu       $v0, $v0, 0x3B0
    ctx->r2 = ADD32(ctx->r2, 0X3B0);
    // 0x802251A8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x802251AC: jr          $ra
    // 0x802251B0: sw          $v0, -0x2344($at)
    MEM_W(-0X2344, ctx->r1) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x802251B0: sw          $v0, -0x2344($at)
    MEM_W(-0X2344, ctx->r1) = ctx->r2;
;}
RECOMP_FUNC void func_80227A30_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227A30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227A34: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227A38: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227A3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227A40: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80227A44: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80227A48: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80227A4C: jal         0x8004D5D4
    // 0x80227A50: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80227A50: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x80227A54: addiu       $a0, $s0, 0x36C
    ctx->r4 = ADD32(ctx->r16, 0X36C);
    // 0x80227A58: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80227A5C: addiu       $a2, $zero, -0x60
    ctx->r6 = ADD32(0, -0X60);
    // 0x80227A60: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80227A64: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80227A68: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80227A6C: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80227A70: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80227A74: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80227A78: addiu       $v0, $zero, 0x10E
    ctx->r2 = ADD32(0, 0X10E);
    // 0x80227A7C: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80227A80: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80227A84: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x80227A88: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x80227A8C: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
    // 0x80227A90: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    // 0x80227A94: sw          $zero, 0x34C($s0)
    MEM_W(0X34C, ctx->r16) = 0;
    // 0x80227A98: sw          $zero, 0x350($s0)
    MEM_W(0X350, ctx->r16) = 0;
    // 0x80227A9C: sw          $zero, 0x35C($s0)
    MEM_W(0X35C, ctx->r16) = 0;
    // 0x80227AA0: sw          $zero, 0x360($s0)
    MEM_W(0X360, ctx->r16) = 0;
    // 0x80227AA4: jal         0x800540BC
    // 0x80227AA8: sh          $zero, 0x37C($s0)
    MEM_H(0X37C, ctx->r16) = 0;
    func_800540BC_2F4BC(rdram, ctx);
        goto after_1;
    // 0x80227AA8: sh          $zero, 0x37C($s0)
    MEM_H(0X37C, ctx->r16) = 0;
    after_1:
    // 0x80227AAC: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80227AB0: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80227AB4: lw          $a0, 0x298($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X298);
    // 0x80227AB8: addiu       $v1, $zero, 0x12C
    ctx->r3 = ADD32(0, 0X12C);
    // 0x80227ABC: sh          $v1, 0x37E($s0)
    MEM_H(0X37E, ctx->r16) = ctx->r3;
    // 0x80227AC0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227AC4: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80227AC8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80227ACC: lbu         $a0, 0x3($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X3);
    // 0x80227AD0: lbu         $v1, 0x18($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X18);
    // 0x80227AD4: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80227AD8: addiu       $v0, $v0, 0x11B0
    ctx->r2 = ADD32(ctx->r2, 0X11B0);
    // 0x80227ADC: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x80227AE0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227AE4: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x80227AE8: sh          $v1, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r3;
    // 0x80227AEC: sh          $v1, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r3;
    // 0x80227AF0: beq         $a0, $v0, L_80227B3C
    if (ctx->r4 == ctx->r2) {
        // 0x80227AF4: sh          $v1, 0xB2($s0)
        MEM_H(0XB2, ctx->r16) = ctx->r3;
            goto L_80227B3C;
    }
    // 0x80227AF4: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    // 0x80227AF8: slti        $v0, $a0, 0x2
    ctx->r2 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    // 0x80227AFC: beql        $v0, $zero, L_80227B14
    if (ctx->r2 == 0) {
        // 0x80227B00: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80227B14;
    }
    goto skip_0;
    // 0x80227B00: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80227B04: beq         $a0, $zero, L_80227B24
    if (ctx->r4 == 0) {
        // 0x80227B08: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227B24;
    }
    // 0x80227B08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227B0C: j           L_80227B90
    // 0x80227B10: nop

        goto L_80227B90;
    // 0x80227B10: nop

L_80227B14:
    // 0x80227B14: beq         $a0, $v0, L_80227B70
    if (ctx->r4 == ctx->r2) {
        // 0x80227B18: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227B70;
    }
    // 0x80227B18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227B1C: j           L_80227B90
    // 0x80227B20: nop

        goto L_80227B90;
    // 0x80227B20: nop

L_80227B24:
    // 0x80227B24: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80227B28: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80227B2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227B30: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80227B34: j           L_80227B88
    // 0x80227B38: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
        goto L_80227B88;
    // 0x80227B38: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_80227B3C:
    // 0x80227B3C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227B40: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80227B44: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80227B48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227B4C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80227B50: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80227B54: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80227B58: jal         0x80050294
    // 0x80227B5C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x80227B5C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    after_2:
    // 0x80227B60: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x80227B64: andi        $v0, $v0, 0xFEFF
    ctx->r2 = ctx->r2 & 0XFEFF;
    // 0x80227B68: j           L_80227B90
    // 0x80227B6C: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
        goto L_80227B90;
    // 0x80227B6C: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
L_80227B70:
    // 0x80227B70: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80227B74: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80227B78: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227B7C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80227B80: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80227B84: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80227B88:
    // 0x80227B88: jal         0x80050294
    // 0x80227B8C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x80227B8C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    after_3:
L_80227B90:
    // 0x80227B90: jal         0x80227BA8
    // 0x80227B94: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80227BA8_ovl14(rdram, ctx);
        goto after_4;
    // 0x80227B94: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80227B98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227B9C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227BA0: jr          $ra
    // 0x80227BA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227BA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022F164_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F164: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022F168: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F16C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F170: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022F174: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022F178: jal         0x8004F144
    // 0x8022F17C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8022F17C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    after_0:
    // 0x8022F180: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022F184: beq         $a0, $zero, L_8022F230
    if (ctx->r4 == 0) {
        // 0x8022F188: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022F230;
    }
    // 0x8022F188: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F18C: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x8022F190: addiu       $v0, $zero, 0x85
    ctx->r2 = ADD32(0, 0X85);
    // 0x8022F194: sb          $v0, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r2;
    // 0x8022F198: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x8022F19C: sh          $v0, 0x1C($a0)
    MEM_H(0X1C, ctx->r4) = ctx->r2;
    // 0x8022F1A0: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x8022F1A4: sh          $v0, 0x1E($a0)
    MEM_H(0X1E, ctx->r4) = ctx->r2;
    // 0x8022F1A8: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x8022F1AC: sh          $v0, 0x20($a0)
    MEM_H(0X20, ctx->r4) = ctx->r2;
    // 0x8022F1B0: lhu         $v0, 0x44($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X44);
    // 0x8022F1B4: sh          $v0, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r2;
    // 0x8022F1B8: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x8022F1BC: sh          $v0, 0x32($a0)
    MEM_H(0X32, ctx->r4) = ctx->r2;
    // 0x8022F1C0: lhu         $v0, 0x48($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X48);
    // 0x8022F1C4: sh          $v0, 0x34($a0)
    MEM_H(0X34, ctx->r4) = ctx->r2;
    // 0x8022F1C8: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022F1CC: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022F1D0: bne         $v1, $v0, L_8022F1E8
    if (ctx->r3 != ctx->r2) {
        // 0x8022F1D4: addiu       $v0, $zero, 0x41
        ctx->r2 = ADD32(0, 0X41);
            goto L_8022F1E8;
    }
    // 0x8022F1D4: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x8022F1D8: lh          $v0, 0x64($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X64);
    // 0x8022F1DC: addiu       $v1, $s1, 0x10
    ctx->r3 = ADD32(ctx->r17, 0X10);
    // 0x8022F1E0: j           L_8022F224
    // 0x8022F1E4: sb          $v1, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r3;
        goto L_8022F224;
    // 0x8022F1E4: sb          $v1, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r3;
L_8022F1E8:
    // 0x8022F1E8: bnel        $v1, $v0, L_8022F204
    if (ctx->r3 != ctx->r2) {
        // 0x8022F1EC: addiu       $v0, $zero, 0x42
        ctx->r2 = ADD32(0, 0X42);
            goto L_8022F204;
    }
    goto skip_0;
    // 0x8022F1EC: addiu       $v0, $zero, 0x42
    ctx->r2 = ADD32(0, 0X42);
    skip_0:
    // 0x8022F1F0: lh          $v0, 0x64($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X64);
    // 0x8022F1F4: addiu       $v1, $s1, 0x10
    ctx->r3 = ADD32(ctx->r17, 0X10);
    // 0x8022F1F8: sb          $v1, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r3;
    // 0x8022F1FC: j           L_8022F228
    // 0x8022F200: addiu       $v0, $v0, -0x400
    ctx->r2 = ADD32(ctx->r2, -0X400);
        goto L_8022F228;
    // 0x8022F200: addiu       $v0, $v0, -0x400
    ctx->r2 = ADD32(ctx->r2, -0X400);
L_8022F204:
    // 0x8022F204: bne         $v1, $v0, L_8022F21C
    if (ctx->r3 != ctx->r2) {
        // 0x8022F208: ori         $v0, $zero, 0xFFFF
        ctx->r2 = 0 | 0XFFFF;
            goto L_8022F21C;
    }
    // 0x8022F208: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    // 0x8022F20C: sw          $v0, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->r2;
    // 0x8022F210: addiu       $v0, $s1, 0x10
    ctx->r2 = ADD32(ctx->r17, 0X10);
    // 0x8022F214: j           L_8022F230
    // 0x8022F218: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
        goto L_8022F230;
    // 0x8022F218: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
L_8022F21C:
    // 0x8022F21C: lh          $v0, 0x64($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X64);
    // 0x8022F220: sb          $s1, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r17;
L_8022F224:
    // 0x8022F224: addiu       $v0, $v0, 0x400
    ctx->r2 = ADD32(ctx->r2, 0X400);
L_8022F228:
    // 0x8022F228: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022F22C: sw          $v0, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->r2;
L_8022F230:
    // 0x8022F230: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022F234: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022F238: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F23C: jr          $ra
    // 0x8022F240: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022F240: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8022F244: nop

    // 0x8022F248: nop

    // 0x8022F24C: nop

;}
RECOMP_FUNC void func_8022D314_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D314: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D318: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D31C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D320: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022D324: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022D328: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022D32C: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8022D330: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8022D334: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022D338: jal         0x8004D5D4
    // 0x8022D33C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022D33C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022D340: sw          $zero, 0x328($s0)
    MEM_W(0X328, ctx->r16) = 0;
    // 0x8022D344: lhu         $a0, 0x328($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X328);
    // 0x8022D348: lw          $a1, 0x80($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X80);
    // 0x8022D34C: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x8022D350: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022D354: sw          $zero, 0x310($s0)
    MEM_W(0X310, ctx->r16) = 0;
    // 0x8022D358: sw          $zero, 0x314($s0)
    MEM_W(0X314, ctx->r16) = 0;
    // 0x8022D35C: sw          $zero, 0x318($s0)
    MEM_W(0X318, ctx->r16) = 0;
    // 0x8022D360: sw          $zero, 0x31C($s0)
    MEM_W(0X31C, ctx->r16) = 0;
    // 0x8022D364: sw          $zero, 0x320($s0)
    MEM_W(0X320, ctx->r16) = 0;
    // 0x8022D368: sw          $zero, 0x324($s0)
    MEM_W(0X324, ctx->r16) = 0;
    // 0x8022D36C: sw          $zero, 0x32C($s0)
    MEM_W(0X32C, ctx->r16) = 0;
    // 0x8022D370: sb          $v0, 0x36A($s0)
    MEM_B(0X36A, ctx->r16) = ctx->r2;
    // 0x8022D374: sb          $zero, 0x36C($s0)
    MEM_B(0X36C, ctx->r16) = 0;
    // 0x8022D378: sb          $zero, 0x36B($s0)
    MEM_B(0X36B, ctx->r16) = 0;
    // 0x8022D37C: sb          $zero, 0x370($s0)
    MEM_B(0X370, ctx->r16) = 0;
    // 0x8022D380: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x8022D384: lw          $a2, 0x298($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X298);
    // 0x8022D388: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022D38C: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022D390: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022D394: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022D398: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x8022D39C: sh          $v0, 0x366($s0)
    MEM_H(0X366, ctx->r16) = ctx->r2;
    // 0x8022D3A0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022D3A4: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
    // 0x8022D3A8: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8022D3AC: sh          $v0, 0x34E($s0)
    MEM_H(0X34E, ctx->r16) = ctx->r2;
    // 0x8022D3B0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022D3B4: sw          $zero, 0x330($s0)
    MEM_W(0X330, ctx->r16) = 0;
    // 0x8022D3B8: sw          $zero, 0x334($s0)
    MEM_W(0X334, ctx->r16) = 0;
    // 0x8022D3BC: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x8022D3C0: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022D3C4: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x8022D3C8: sh          $a0, 0x368($s0)
    MEM_H(0X368, ctx->r16) = ctx->r4;
    // 0x8022D3CC: sw          $a1, 0x348($s0)
    MEM_W(0X348, ctx->r16) = ctx->r5;
    // 0x8022D3D0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8022D3D4: addiu       $a0, $s0, 0x338
    ctx->r4 = ADD32(ctx->r16, 0X338);
    // 0x8022D3D8: lbu         $v0, 0xA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XA);
    // 0x8022D3DC: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x8022D3E0: addiu       $a2, $zero, -0x60
    ctx->r6 = ADD32(0, -0X60);
    // 0x8022D3E4: jal         0x800540BC
    // 0x8022D3E8: sh          $v0, 0x364($s0)
    MEM_H(0X364, ctx->r16) = ctx->r2;
    func_800540BC_2F4BC(rdram, ctx);
        goto after_1;
    // 0x8022D3E8: sh          $v0, 0x364($s0)
    MEM_H(0X364, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022D3EC: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8022D3F0: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8022D3F4: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x8022D3F8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D3FC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022D400: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8022D404: lbu         $v1, 0x8($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X8);
    // 0x8022D408: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D40C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022D410: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022D414: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022D418: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022D41C: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022D420: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x8022D424: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x8022D428: sh          $v1, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r3;
    // 0x8022D42C: sh          $v1, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r3;
    // 0x8022D430: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    // 0x8022D434: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022D438: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D43C: jr          $ra
    // 0x8022D440: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022D440: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802298D0_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802298D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802298D4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802298D8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802298DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802298E0: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x802298E4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802298E8: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x802298EC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802298F0: bne         $v0, $zero, L_80229944
    if (ctx->r2 != 0) {
        // 0x802298F4: addiu       $a1, $zero, 0x40
        ctx->r5 = ADD32(0, 0X40);
            goto L_80229944;
    }
    // 0x802298F4: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x802298F8: jal         0x8022AED4
    // 0x802298FC: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_8022AED4_ovl14(rdram, ctx);
        goto after_0;
    // 0x802298FC: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_0:
    // 0x80229900: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80229904: beq         $v0, $zero, L_80229940
    if (ctx->r2 == 0) {
        // 0x80229908: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80229940;
    }
    // 0x80229908: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022990C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80229910: jal         0x8022AE48
    // 0x80229914: nop

    func_8022AE48_ovl14(rdram, ctx);
        goto after_1;
    // 0x80229914: nop

    after_1:
    // 0x80229918: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022991C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80229920: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x80229924: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x80229928: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022992C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80229930: addiu       $v1, $v1, 0x800
    ctx->r3 = ADD32(ctx->r3, 0X800);
    // 0x80229934: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80229938: j           L_80229944
    // 0x8022993C: sh          $v1, 0x364($s0)
    MEM_H(0X364, ctx->r16) = ctx->r3;
        goto L_80229944;
    // 0x8022993C: sh          $v1, 0x364($s0)
    MEM_H(0X364, ctx->r16) = ctx->r3;
L_80229940:
    // 0x80229940: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80229944:
    // 0x80229944: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80229948: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022994C: jr          $ra
    // 0x80229950: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229950: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022DF64_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DF64: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022DF68: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8022DF6C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022DF70: lhu         $v0, 0x56($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X56);
    // 0x8022DF74: lhu         $a0, 0x66($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X66);
    // 0x8022DF78: lhu         $v1, 0x34C($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X34C);
    // 0x8022DF7C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022DF80: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022DF84: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8022DF88: sh          $v1, 0x34C($a1)
    MEM_H(0X34C, ctx->r5) = ctx->r3;
    // 0x8022DF8C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022DF90: bne         $v1, $zero, L_8022DFA4
    if (ctx->r3 != 0) {
        // 0x8022DF94: sh          $v0, 0x56($a1)
        MEM_H(0X56, ctx->r5) = ctx->r2;
            goto L_8022DFA4;
    }
    // 0x8022DF94: sh          $v0, 0x56($a1)
    MEM_H(0X56, ctx->r5) = ctx->r2;
    // 0x8022DF98: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022DF9C: sb          $v0, 0x8($a1)
    MEM_B(0X8, ctx->r5) = ctx->r2;
    // 0x8022DFA0: sb          $zero, 0x9($a1)
    MEM_B(0X9, ctx->r5) = 0;
L_8022DFA4:
    // 0x8022DFA4: jal         0x8022E0A8
    // 0x8022DFA8: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    func_8022E0A8_ovl14(rdram, ctx);
        goto after_0;
    // 0x8022DFA8: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    after_0:
    // 0x8022DFAC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022DFB0: jr          $ra
    // 0x8022DFB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022DFB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E23C_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E23C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022E240: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022E244: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E248: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8022E24C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022E250: lbu         $v1, 0xF($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XF);
    // 0x8022E254: sh          $zero, 0x9A($s0)
    MEM_H(0X9A, ctx->r16) = 0;
    // 0x8022E258: ori         $v0, $v0, 0x22
    ctx->r2 = ctx->r2 | 0X22;
    // 0x8022E25C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8022E260: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x8022E264: bne         $v0, $zero, L_8022E2AC
    if (ctx->r2 != 0) {
        // 0x8022E268: andi        $v0, $v1, 0x8
        ctx->r2 = ctx->r3 & 0X8;
            goto L_8022E2AC;
    }
    // 0x8022E268: andi        $v0, $v1, 0x8
    ctx->r2 = ctx->r3 & 0X8;
    // 0x8022E26C: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x8022E270: addiu       $v1, $zero, 0x40
    ctx->r3 = ADD32(0, 0X40);
    // 0x8022E274: sb          $v1, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r3;
    // 0x8022E278: addiu       $v1, $zero, 0x80
    ctx->r3 = ADD32(0, 0X80);
    // 0x8022E27C: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8022E280: bne         $v0, $zero, L_8022E294
    if (ctx->r2 != 0) {
        // 0x8022E284: sb          $v1, 0x97($s0)
        MEM_B(0X97, ctx->r16) = ctx->r3;
            goto L_8022E294;
    }
    // 0x8022E284: sb          $v1, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r3;
    // 0x8022E288: lui         $v0, 0x2C80
    ctx->r2 = S32(0X2C80 << 16);
    // 0x8022E28C: j           L_8022E29C
    // 0x8022E290: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
        goto L_8022E29C;
    // 0x8022E290: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
L_8022E294:
    // 0x8022E294: lui         $v0, 0x2C60
    ctx->r2 = S32(0X2C60 << 16);
    // 0x8022E298: ori         $v0, $v0, 0x60C0
    ctx->r2 = ctx->r2 | 0X60C0;
L_8022E29C:
    // 0x8022E29C: sw          $v0, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r2;
    // 0x8022E2A0: lui         $v0, 0x3D08
    ctx->r2 = S32(0X3D08 << 16);
    // 0x8022E2A4: j           L_8022E2FC
    // 0x8022E2A8: ori         $v0, $v0, 0xE
    ctx->r2 = ctx->r2 | 0XE;
        goto L_8022E2FC;
    // 0x8022E2A8: ori         $v0, $v0, 0xE
    ctx->r2 = ctx->r2 | 0XE;
L_8022E2AC:
    // 0x8022E2AC: bne         $v0, $zero, L_8022E2D0
    if (ctx->r2 != 0) {
        // 0x8022E2B0: nop
    
            goto L_8022E2D0;
    }
    // 0x8022E2B0: nop

    // 0x8022E2B4: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022E2B8: lbu         $v0, 0x1A20($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1A20);
    // 0x8022E2BC: sb          $v0, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r2;
    // 0x8022E2C0: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022E2C4: lbu         $v0, 0x1A21($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1A21);
    // 0x8022E2C8: j           L_8022E2E8
    // 0x8022E2CC: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
        goto L_8022E2E8;
    // 0x8022E2CC: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
L_8022E2D0:
    // 0x8022E2D0: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022E2D4: lbu         $v0, 0x1A2C($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1A2C);
    // 0x8022E2D8: sb          $v0, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r2;
    // 0x8022E2DC: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022E2E0: lbu         $v0, 0x1A2D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1A2D);
    // 0x8022E2E4: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
L_8022E2E8:
    // 0x8022E2E8: lui         $v1, 0x2C80
    ctx->r3 = S32(0X2C80 << 16);
    // 0x8022E2EC: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x8022E2F0: lui         $v0, 0x3D48
    ctx->r2 = S32(0X3D48 << 16);
    // 0x8022E2F4: ori         $v0, $v0, 0xE
    ctx->r2 = ctx->r2 | 0XE;
    // 0x8022E2F8: sw          $v1, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r3;
L_8022E2FC:
    // 0x8022E2FC: sw          $v0, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->r2;
    // 0x8022E300: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x8022E304: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    // 0x8022E308: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x8022E30C: lhu         $a1, 0x18($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X18);
    // 0x8022E310: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022E314: sh          $v1, 0x90($s0)
    MEM_H(0X90, ctx->r16) = ctx->r3;
    // 0x8022E318: sh          $a0, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r4;
    // 0x8022E31C: bne         $v0, $zero, L_8022E348
    if (ctx->r2 != 0) {
        // 0x8022E320: sh          $a1, 0x94($s0)
        MEM_H(0X94, ctx->r16) = ctx->r5;
            goto L_8022E348;
    }
    // 0x8022E320: sh          $a1, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r5;
    // 0x8022E324: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x8022E328: addiu       $v1, $zero, 0x20
    ctx->r3 = ADD32(0, 0X20);
    // 0x8022E32C: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8022E330: bne         $v0, $zero, L_8022E340
    if (ctx->r2 != 0) {
        // 0x8022E334: sh          $v1, 0x98($s0)
        MEM_H(0X98, ctx->r16) = ctx->r3;
            goto L_8022E340;
    }
    // 0x8022E334: sh          $v1, 0x98($s0)
    MEM_H(0X98, ctx->r16) = ctx->r3;
    // 0x8022E338: j           L_8022E354
    // 0x8022E33C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_8022E354;
    // 0x8022E33C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_8022E340:
    // 0x8022E340: j           L_8022E354
    // 0x8022E344: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
        goto L_8022E354;
    // 0x8022E344: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
L_8022E348:
    // 0x8022E348: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022E34C: sh          $v0, 0x98($s0)
    MEM_H(0X98, ctx->r16) = ctx->r2;
    // 0x8022E350: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_8022E354:
    // 0x8022E354: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x8022E358: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x8022E35C: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x8022E360: bne         $v0, $zero, L_8022E36C
    if (ctx->r2 != 0) {
        // 0x8022E364: addiu       $v0, $zero, 0x4B
        ctx->r2 = ADD32(0, 0X4B);
            goto L_8022E36C;
    }
    // 0x8022E364: addiu       $v0, $zero, 0x4B
    ctx->r2 = ADD32(0, 0X4B);
    // 0x8022E368: addiu       $v0, $zero, 0xF0
    ctx->r2 = ADD32(0, 0XF0);
L_8022E36C:
    // 0x8022E36C: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x8022E370: lhu         $a1, 0x98($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X98);
    // 0x8022E374: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x8022E378: addiu       $v0, $s0, 0xC0
    ctx->r2 = ADD32(ctx->r16, 0XC0);
    // 0x8022E37C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022E380: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x8022E384: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x8022E388: sw          $zero, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = 0;
    // 0x8022E38C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022E390: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022E394: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x8022E398: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x8022E39C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022E3A0: ori         $a3, $zero, 0xA000
    ctx->r7 = 0 | 0XA000;
    // 0x8022E3A4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8022E3A8: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x8022E3AC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8022E3B0: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8022E3B4: jal         0x80051E18
    // 0x8022E3B8: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_0;
    // 0x8022E3B8: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_0:
    // 0x8022E3BC: jal         0x8003F754
    // 0x8022E3C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003F754_1AB54(rdram, ctx);
        goto after_1;
    // 0x8022E3C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022E3C4: bne         $v0, $zero, L_8022E3D4
    if (ctx->r2 != 0) {
        // 0x8022E3C8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022E3D4;
    }
    // 0x8022E3C8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022E3CC: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022E3D0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022E3D4:
    // 0x8022E3D4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022E3D8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8022E3DC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022E3E0: jr          $ra
    // 0x8022E3E4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022E3E4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_802264F8_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802264F8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802264FC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80226500: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226504: addiu       $a0, $s0, 0xAC
    ctx->r4 = ADD32(ctx->r16, 0XAC);
    // 0x80226508: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022650C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80226510: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80226514: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80226518: jal         0x8009A3B4
    // 0x8022651C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022651C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    after_0:
    // 0x80226520: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226524: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80226528: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022652C: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80226530: sh          $zero, 0x56($s0)
    MEM_H(0X56, ctx->r16) = 0;
    // 0x80226534: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80226538: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x8022653C: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
    // 0x80226540: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x80226544: sw          $zero, 0x70($s0)
    MEM_W(0X70, ctx->r16) = 0;
    // 0x80226548: sw          $zero, 0x74($s0)
    MEM_W(0X74, ctx->r16) = 0;
    // 0x8022654C: jal         0x8004D5D4
    // 0x80226550: sh          $v0, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_1;
    // 0x80226550: sh          $v0, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = ctx->r2;
    after_1:
    // 0x80226554: addiu       $a0, $s0, 0x54
    ctx->r4 = ADD32(ctx->r16, 0X54);
    // 0x80226558: addiu       $s1, $s0, 0x8C
    ctx->r17 = ADD32(ctx->r16, 0X8C);
    // 0x8022655C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80226560: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x80226564: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
    // 0x80226568: sb          $s2, 0xF0($s0)
    MEM_B(0XF0, ctx->r16) = ctx->r18;
    // 0x8022656C: jal         0x80031600
    // 0x80226570: sh          $v0, 0xEE($s0)
    MEM_H(0XEE, ctx->r16) = ctx->r2;
    func_80031600_CA00(rdram, ctx);
        goto after_2;
    // 0x80226570: sh          $v0, 0xEE($s0)
    MEM_H(0XEE, ctx->r16) = ctx->r2;
    after_2:
    // 0x80226574: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80226578: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8022657C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80226580: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80226584: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80226588: jal         0x80031DA8
    // 0x8022658C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_3;
    // 0x8022658C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_3:
    // 0x80226590: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x80226594: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x80226598: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022659C: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x802265A0: sh          $v0, 0x6E($a0)
    MEM_H(0X6E, ctx->r4) = ctx->r2;
    // 0x802265A4: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802265A8: addiu       $v0, $v0, 0xC38
    ctx->r2 = ADD32(ctx->r2, 0XC38);
    // 0x802265AC: sw          $v0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->r2;
    // 0x802265B0: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802265B4: addiu       $v0, $v0, 0xC44
    ctx->r2 = ADD32(ctx->r2, 0XC44);
    // 0x802265B8: sw          $v0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r2;
    // 0x802265BC: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x802265C0: sb          $s2, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r18;
    // 0x802265C4: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    // 0x802265C8: sw          $v1, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = ctx->r3;
    // 0x802265CC: sb          $v0, 0xF2($a0)
    MEM_B(0XF2, ctx->r4) = ctx->r2;
    // 0x802265D0: sb          $zero, 0xF3($a0)
    MEM_B(0XF3, ctx->r4) = 0;
    // 0x802265D4: sb          $zero, 0xF4($a0)
    MEM_B(0XF4, ctx->r4) = 0;
    // 0x802265D8: sb          $zero, 0xF5($a0)
    MEM_B(0XF5, ctx->r4) = 0;
    // 0x802265DC: jal         0x80226180
    // 0x802265E0: sb          $zero, 0xF6($a0)
    MEM_B(0XF6, ctx->r4) = 0;
    func_80226180_ovl14(rdram, ctx);
        goto after_4;
    // 0x802265E0: sb          $zero, 0xF6($a0)
    MEM_B(0XF6, ctx->r4) = 0;
    after_4:
    // 0x802265E4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802265E8: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x802265EC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x802265F0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802265F4: jr          $ra
    // 0x802265F8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x802265F8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022A544_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A544: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A548: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022A54C: lbu         $v0, 0x34B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34B);
    // 0x8022A550: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022A554: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022A558: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022A55C: lw          $v0, 0x193C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X193C);
    // 0x8022A560: jalr        $v0
    // 0x8022A564: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022A564: nop

    after_0:
    // 0x8022A568: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022A56C: jr          $ra
    // 0x8022A570: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A570: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A0BC_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A0BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A0C0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A0C4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A0C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022A0CC: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022A0D0: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x8022A0D4: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022A0D8: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022A0DC: jal         0x8004F820
    // 0x8022A0E0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022A0E0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x8022A0E4: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022A0E8: lb          $a0, 0xA7($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XA7);
    // 0x8022A0EC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022A0F0: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022A0F4: bgez        $a0, L_8022A118
    if (SIGNED(ctx->r4) >= 0) {
        // 0x8022A0F8: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8022A118;
    }
    // 0x8022A0F8: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022A0FC: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022A100: jal         0x8022AE38
    // 0x8022A104: nop

    func_8022AE38_ovl14(rdram, ctx);
        goto after_1;
    // 0x8022A104: nop

    after_1:
    // 0x8022A108: lbu         $v1, 0x34B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022A10C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022A110: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8022A114: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
L_8022A118:
    // 0x8022A118: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022A11C: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x8022A120: bne         $v0, $zero, L_8022A144
    if (ctx->r2 != 0) {
        // 0x8022A124: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_8022A144;
    }
    // 0x8022A124: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8022A128: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022A12C: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022A130: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
    // 0x8022A134: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x8022A138: jal         0x8022AE38
    // 0x8022A13C: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    func_8022AE38_ovl14(rdram, ctx);
        goto after_2;
    // 0x8022A13C: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    after_2:
    // 0x8022A140: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022A144:
    // 0x8022A144: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022A148: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A14C: jr          $ra
    // 0x8022A150: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A150: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E834_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E834: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E838: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E83C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E840: addiu       $a0, $s0, 0xAC
    ctx->r4 = ADD32(ctx->r16, 0XAC);
    // 0x8022E844: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022E848: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022E84C: jal         0x8009A3B4
    // 0x8022E850: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022E850: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022E854: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022E858: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E85C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022E860: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8022E864: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8022E868: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x8022E86C: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
    // 0x8022E870: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x8022E874: sw          $zero, 0x70($s0)
    MEM_W(0X70, ctx->r16) = 0;
    // 0x8022E878: sw          $zero, 0x74($s0)
    MEM_W(0X74, ctx->r16) = 0;
    // 0x8022E87C: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x8022E880: jal         0x8004D5D4
    // 0x8022E884: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_1;
    // 0x8022E884: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022E888: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x8022E88C: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022E890: addiu       $v0, $v0, 0x1A68
    ctx->r2 = ADD32(ctx->r2, 0X1A68);
    // 0x8022E894: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x8022E898: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022E89C: addiu       $v0, $v0, 0x1A74
    ctx->r2 = ADD32(ctx->r2, 0X1A74);
    // 0x8022E8A0: beq         $v1, $zero, L_8022E8B0
    if (ctx->r3 == 0) {
        // 0x8022E8A4: sw          $v0, 0x10($s0)
        MEM_W(0X10, ctx->r16) = ctx->r2;
            goto L_8022E8B0;
    }
    // 0x8022E8A4: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x8022E8A8: j           L_8022E8B4
    // 0x8022E8AC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_8022E8B4;
    // 0x8022E8AC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_8022E8B0:
    // 0x8022E8B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022E8B4:
    // 0x8022E8B4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022E8B8: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8022E8BC: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x8022E8C0: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022E8C4: sw          $v0, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r2;
    // 0x8022E8C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022E8CC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E8D0: jr          $ra
    // 0x8022E8D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E8D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229E98_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229E98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229E9C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229EA0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229EA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80229EA8: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80229EAC: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80229EB0: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80229EB4: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80229EB8: jal         0x8022AE48
    // 0x80229EBC: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    func_8022AE48_ovl14(rdram, ctx);
        goto after_0;
    // 0x80229EBC: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    after_0:
    // 0x80229EC0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80229EC4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229EC8: sh          $v0, 0x366($s0)
    MEM_H(0X366, ctx->r16) = ctx->r2;
    // 0x80229ECC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80229ED0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80229ED4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80229ED8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229EDC: jr          $ra
    // 0x80229EE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229EE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022AA0C_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AA0C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022AA10: lb          $v1, -0x3C18($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3C18);
    // 0x8022AA14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022AA18: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022AA1C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022AA20: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022AA24: bne         $v1, $v0, L_8022AA4C
    if (ctx->r3 != ctx->r2) {
        // 0x8022AA28: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8022AA4C;
    }
    // 0x8022AA28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022AA2C: jal         0x80061724
    // 0x8022AA30: nop

    func_80061724_3CB24(rdram, ctx);
        goto after_0;
    // 0x8022AA30: nop

    after_0:
    // 0x8022AA34: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022AA38: jal         0x800616FC
    // 0x8022AA3C: addiu       $a1, $zero, 0xDC
    ctx->r5 = ADD32(0, 0XDC);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_1;
    // 0x8022AA3C: addiu       $a1, $zero, 0xDC
    ctx->r5 = ADD32(0, 0XDC);
    after_1:
    // 0x8022AA40: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022AA44: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022AA48: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
L_8022AA4C:
    // 0x8022AA4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022AA50: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022AA54: jr          $ra
    // 0x8022AA58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022AA58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022FAB8_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FAB8: lhu         $v0, 0x38($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X38);
    // 0x8022FABC: lhu         $v1, 0x3A($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X3A);
    // 0x8022FAC0: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
    // 0x8022FAC4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022FAC8: sh          $v1, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r3;
    // 0x8022FACC: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022FAD0: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8022FAD4: sh          $v0, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r2;
    // 0x8022FAD8: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x8022FADC: bne         $v1, $v0, L_8022FAF0
    if (ctx->r3 != ctx->r2) {
        // 0x8022FAE0: nop
    
            goto L_8022FAF0;
    }
    // 0x8022FAE0: nop

    // 0x8022FAE4: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x8022FAE8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022FAEC: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
L_8022FAF0:
    // 0x8022FAF0: jr          $ra
    // 0x8022FAF4: nop

    TRACE_RETURN()
    return;
    // 0x8022FAF4: nop

;}
RECOMP_FUNC void func_8022686C_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022686C: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80226870: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80226874: bne         $v0, $zero, L_8022691C
    if (ctx->r2 != 0) {
        // 0x80226878: addiu       $a1, $a1, 0x49B0
        ctx->r5 = ADD32(ctx->r5, 0X49B0);
            goto L_8022691C;
    }
    // 0x80226878: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x8022687C: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x80226880: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80226884: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80226888: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8022688C: lw          $v1, 0x2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X2C);
    // 0x80226890: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80226894: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80226898: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8022689C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x802268A0: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x802268A4: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x802268A8: bne         $v1, $v0, L_802268C8
    if (ctx->r3 != ctx->r2) {
        // 0x802268AC: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_802268C8;
    }
    // 0x802268AC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802268B0: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x802268B4: lbu         $v1, -0x3BC8($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3BC8);
    // 0x802268B8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802268BC: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x802268C0: j           L_802268DC
    // 0x802268C4: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
        goto L_802268DC;
    // 0x802268C4: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_802268C8:
    // 0x802268C8: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x802268CC: lbu         $v1, -0x3BC8($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3BC8);
    // 0x802268D0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802268D4: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x802268D8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_802268DC:
    // 0x802268DC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802268E0: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x802268E4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802268E8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802268EC: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x802268F0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802268F4: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x802268F8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802268FC: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x80226900: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226904: sb          $v1, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r3;
    // 0x80226908: sw          $zero, 0x428($a1)
    MEM_W(0X428, ctx->r5) = 0;
    // 0x8022690C: sw          $zero, 0x430($a1)
    MEM_W(0X430, ctx->r5) = 0;
    // 0x80226910: sw          $zero, 0x42C($a1)
    MEM_W(0X42C, ctx->r5) = 0;
    // 0x80226914: sb          $zero, 0xD($a1)
    MEM_B(0XD, ctx->r5) = 0;
    // 0x80226918: sb          $zero, 0xC($a1)
    MEM_B(0XC, ctx->r5) = 0;
L_8022691C:
    // 0x8022691C: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80226920: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x80226924: bne         $v1, $v0, L_80226954
    if (ctx->r3 != ctx->r2) {
        // 0x80226928: addiu       $v0, $zero, 0x46
        ctx->r2 = ADD32(0, 0X46);
            goto L_80226954;
    }
    // 0x80226928: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
    // 0x8022692C: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x80226930: lbu         $v0, 0x9($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X9);
    // 0x80226934: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226938: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x8022693C: lw          $v1, 0x2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X2C);
    // 0x80226940: lbu         $v0, 0x9($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X9);
    // 0x80226944: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226948: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x8022694C: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80226950: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
L_80226954:
    // 0x80226954: bne         $v1, $v0, L_80226964
    if (ctx->r3 != ctx->r2) {
        // 0x80226958: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80226964;
    }
    // 0x80226958: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022695C: sb          $v0, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r2;
    // 0x80226960: sb          $zero, 0xD($a1)
    MEM_B(0XD, ctx->r5) = 0;
L_80226964:
    // 0x80226964: jr          $ra
    // 0x80226968: nop

    TRACE_RETURN()
    return;
    // 0x80226968: nop

;}
RECOMP_FUNC void func_8022F930_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F930: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x8022F934: sw          $s2, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r18;
    // 0x8022F938: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8022F93C: sw          $ra, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r31;
    // 0x8022F940: sw          $s1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r17;
    // 0x8022F944: sw          $s0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r16;
    // 0x8022F948: lbu         $v0, 0x8($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X8);
    // 0x8022F94C: bne         $v0, $zero, L_8022F984
    if (ctx->r2 != 0) {
        // 0x8022F950: nop
    
            goto L_8022F984;
    }
    // 0x8022F950: nop

    // 0x8022F954: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x8022F958: addiu       $a1, $s2, 0x3
    ctx->r5 = ADD32(ctx->r18, 0X3);
    // 0x8022F95C: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x8022F960: jal         0x8004D5D4
    // 0x8022F964: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022F964: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    after_0:
    // 0x8022F968: lbu         $v0, 0x8($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X8);
    // 0x8022F96C: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x8022F970: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x8022F974: sh          $zero, 0x10($s2)
    MEM_H(0X10, ctx->r18) = 0;
    // 0x8022F978: sw          $v1, 0x40($s2)
    MEM_W(0X40, ctx->r18) = ctx->r3;
    // 0x8022F97C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022F980: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
L_8022F984:
    // 0x8022F984: lbu         $v0, 0x3($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X3);
    // 0x8022F988: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022F98C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022F990: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022F994: lw          $v0, 0x1B10($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1B10);
    // 0x8022F998: jalr        $v0
    // 0x8022F99C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x8022F99C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_1:
    // 0x8022F9A0: addiu       $s1, $s2, 0x18
    ctx->r17 = ADD32(ctx->r18, 0X18);
    // 0x8022F9A4: jal         0x8002C654
    // 0x8022F9A8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_2;
    // 0x8022F9A8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x8022F9AC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022F9B0: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8022F9B4: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x8022F9B8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8022F9BC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022F9C0: jal         0x80031DA8
    // 0x8022F9C4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_3;
    // 0x8022F9C4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_3:
    // 0x8022F9C8: addiu       $s0, $sp, 0x28
    ctx->r16 = ADD32(ctx->r29, 0X28);
    // 0x8022F9CC: jal         0x8002C654
    // 0x8022F9D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_4;
    // 0x8022F9D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8022F9D4: lh          $a0, 0xC($s2)
    ctx->r4 = MEM_H(ctx->r18, 0XC);
    // 0x8022F9D8: jal         0x80031BB4
    // 0x8022F9DC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80031BB4_CFB4(rdram, ctx);
        goto after_5;
    // 0x8022F9DC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8022F9E0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022F9E4: jal         0x8003077C
    // 0x8022F9E8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8003077C_BB7C(rdram, ctx);
        goto after_6;
    // 0x8022F9E8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_6:
    // 0x8022F9EC: lw          $ra, 0x94($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X94);
    // 0x8022F9F0: lw          $s2, 0x90($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X90);
    // 0x8022F9F4: lw          $s1, 0x8C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X8C);
    // 0x8022F9F8: lw          $s0, 0x88($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X88);
    // 0x8022F9FC: jr          $ra
    // 0x8022FA00: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    TRACE_RETURN()
    return;
    // 0x8022FA00: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void func_80229FFC_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229FFC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022A000: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A004: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A008: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022A00C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022A010: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022A014: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022A018: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x8022A01C: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x8022A020: bne         $v0, $zero, L_8022A07C
    if (ctx->r2 != 0) {
        // 0x8022A024: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_8022A07C;
    }
    // 0x8022A024: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022A028: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022A02C: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x8022A030: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022A034: jal         0x8004F820
    // 0x8022A038: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022A038: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_0:
    // 0x8022A03C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022A040: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022A044: lw          $a0, 0x3FF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3FF0);
    // 0x8022A048: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022A04C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022A050: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x8022A054: and         $a0, $a0, $v0
    ctx->r4 = ctx->r4 & ctx->r2;
    // 0x8022A058: beq         $a0, $zero, L_8022A07C
    if (ctx->r4 == 0) {
        // 0x8022A05C: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8022A07C;
    }
    // 0x8022A05C: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022A060: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022A064: jal         0x8022ADA0
    // 0x8022A068: nop

    func_8022ADA0_ovl14(rdram, ctx);
        goto after_1;
    // 0x8022A068: nop

    after_1:
    // 0x8022A06C: lbu         $v1, 0x34B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022A070: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022A074: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022A078: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
L_8022A07C:
    // 0x8022A07C: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022A080: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x8022A084: bne         $v0, $zero, L_8022A0A8
    if (ctx->r2 != 0) {
        // 0x8022A088: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_8022A0A8;
    }
    // 0x8022A088: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8022A08C: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022A090: sb          $v1, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r3;
    // 0x8022A094: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x8022A098: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8022A09C: jal         0x8022AE38
    // 0x8022A0A0: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_8022AE38_ovl14(rdram, ctx);
        goto after_2;
    // 0x8022A0A0: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_2:
    // 0x8022A0A4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022A0A8:
    // 0x8022A0A8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022A0AC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022A0B0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A0B4: jr          $ra
    // 0x8022A0B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022A0B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802253C8_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802253C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802253CC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802253D0: jal         0x8006033C
    // 0x802253D4: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x802253D4: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    after_0:
    // 0x802253D8: bne         $v0, $zero, L_80225404
    if (ctx->r2 != 0) {
        // 0x802253DC: nop
    
            goto L_80225404;
    }
    // 0x802253DC: nop

    // 0x802253E0: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x802253E4: lb          $v0, -0x3BC7($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC7);
    // 0x802253E8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802253EC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802253F0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802253F4: lw          $v0, 0x8C0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X8C0);
    // 0x802253F8: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x802253FC: jalr        $v0
    // 0x80225400: addiu       $a0, $a0, -0x35A0
    ctx->r4 = ADD32(ctx->r4, -0X35A0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x80225400: addiu       $a0, $a0, -0x35A0
    ctx->r4 = ADD32(ctx->r4, -0X35A0);
    after_1:
L_80225404:
    // 0x80225404: jal         0x8006033C
    // 0x80225408: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x80225408: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    after_2:
    // 0x8022540C: beq         $v0, $zero, L_8022544C
    if (ctx->r2 == 0) {
        // 0x80225410: nop
    
            goto L_8022544C;
    }
    // 0x80225410: nop

    // 0x80225414: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80225418: lb          $v1, -0x3BC6($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC6);
    // 0x8022541C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80225420: lb          $v0, -0x3BC7($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC7);
    // 0x80225424: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80225428: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022542C: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80225430: lw          $v1, 0x880($at)
    ctx->r3 = MEM_W(ctx->r1, 0X880);
    // 0x80225434: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80225438: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022543C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80225440: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80225444: jalr        $v0
    // 0x80225448: addiu       $a0, $a0, -0x35A0
    ctx->r4 = ADD32(ctx->r4, -0X35A0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x80225448: addiu       $a0, $a0, -0x35A0
    ctx->r4 = ADD32(ctx->r4, -0X35A0);
    after_3:
L_8022544C:
    // 0x8022544C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80225450: jr          $ra
    // 0x80225454: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225454: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022F8C0_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F8C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F8C4: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x8022F8C8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022F8CC: lbu         $v0, 0x9($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X9);
    // 0x8022F8D0: bne         $v0, $zero, L_8022F8E8
    if (ctx->r2 != 0) {
        // 0x8022F8D4: lui         $a2, 0xFFF5
        ctx->r6 = S32(0XFFF5 << 16);
            goto L_8022F8E8;
    }
    // 0x8022F8D4: lui         $a2, 0xFFF5
    ctx->r6 = S32(0XFFF5 << 16);
    // 0x8022F8D8: jal         0x8004F5C4
    // 0x8022F8DC: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x8022F8DC: nop

    after_0:
    // 0x8022F8E0: j           L_8022F91C
    // 0x8022F8E4: nop

        goto L_8022F91C;
    // 0x8022F8E4: nop

L_8022F8E8:
    // 0x8022F8E8: lbu         $a0, 0xC($a3)
    ctx->r4 = MEM_BU(ctx->r7, 0XC);
    // 0x8022F8EC: ori         $a2, $a2, 0xF5F6
    ctx->r6 = ctx->r6 | 0XF5F6;
    // 0x8022F8F0: lbu         $a1, 0x9($a3)
    ctx->r5 = MEM_BU(ctx->r7, 0X9);
    // 0x8022F8F4: lw          $v0, 0x18($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X18);
    // 0x8022F8F8: lhu         $v1, 0x24($a3)
    ctx->r3 = MEM_HU(ctx->r7, 0X24);
    // 0x8022F8FC: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x8022F900: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x8022F904: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x8022F908: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x8022F90C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8022F910: sw          $v0, 0x18($a3)
    MEM_W(0X18, ctx->r7) = ctx->r2;
    // 0x8022F914: sh          $v1, 0x24($a3)
    MEM_H(0X24, ctx->r7) = ctx->r3;
    // 0x8022F918: sb          $a1, 0x9($a3)
    MEM_B(0X9, ctx->r7) = ctx->r5;
L_8022F91C:
    // 0x8022F91C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022F920: jr          $ra
    // 0x8022F924: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F924: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022F928: nop

    // 0x8022F92C: nop

;}
RECOMP_FUNC void func_8022DDD0_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DDD0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022DDD4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022DDD8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022DDDC: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022DDE0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022DDE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022DDE8: jal         0x8009A3B4
    // 0x8022DDEC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022DDEC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022DDF0: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022DDF4: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022DDF8: jal         0x8009A3B4
    // 0x8022DDFC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022DDFC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022DE00: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022DE04: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022DE08: jal         0x8009A3B4
    // 0x8022DE0C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022DE0C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022DE10: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022DE14: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022DE18: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022DE1C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022DE20: lw          $v0, 0x1A00($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1A00);
    // 0x8022DE24: jalr        $v0
    // 0x8022DE28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x8022DE28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022DE2C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022DE30: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022DE34: beq         $v0, $zero, L_8022DE4C
    if (ctx->r2 == 0) {
        // 0x8022DE38: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022DE4C;
    }
    // 0x8022DE38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022DE3C: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x8022DE40: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8022DE44: jal         0x8003B564
    // 0x8022DE48: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_4;
    // 0x8022DE48: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_4:
L_8022DE4C:
    // 0x8022DE4C: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8022DE50: beq         $v0, $zero, L_8022DE68
    if (ctx->r2 == 0) {
        // 0x8022DE54: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_8022DE68;
    }
    // 0x8022DE54: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022DE58: jal         0x8005044C
    // 0x8022DE5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_5;
    // 0x8022DE5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8022DE60: j           L_8022DE6C
    // 0x8022DE64: nop

        goto L_8022DE6C;
    // 0x8022DE64: nop

L_8022DE68:
    // 0x8022DE68: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_8022DE6C:
    // 0x8022DE6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022DE70: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022DE74: jr          $ra
    // 0x8022DE78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022DE78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225838_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225838: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022583C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225840: jal         0x8006036C
    // 0x80225844: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    func_8006036C_3B76C(rdram, ctx);
        goto after_0;
    // 0x80225844: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    after_0:
    // 0x80225848: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022584C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80225850: jr          $ra
    // 0x80225854: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225854: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228514_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228514: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80228518: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022851C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80228520: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80228524: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80228528: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022852C: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x80228530: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80228534: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x80228538: beq         $v1, $zero, L_80228554
    if (ctx->r3 == 0) {
        // 0x8022853C: addiu       $s2, $s1, 0x348
        ctx->r18 = ADD32(ctx->r17, 0X348);
            goto L_80228554;
    }
    // 0x8022853C: addiu       $s2, $s1, 0x348
    ctx->r18 = ADD32(ctx->r17, 0X348);
    // 0x80228540: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228544: beq         $v1, $v0, L_80228578
    if (ctx->r3 == ctx->r2) {
        // 0x80228548: addiu       $a0, $a0, 0x14
        ctx->r4 = ADD32(ctx->r4, 0X14);
            goto L_80228578;
    }
    // 0x80228548: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x8022854C: j           L_80228650
    // 0x80228550: nop

        goto L_80228650;
    // 0x80228550: nop

L_80228554:
    // 0x80228554: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228558: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x8022855C: addiu       $v0, $zero, 0xC0
    ctx->r2 = ADD32(0, 0XC0);
    // 0x80228560: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x80228564: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x80228568: sh          $v0, 0x66($s1)
    MEM_H(0X66, ctx->r17) = ctx->r2;
    // 0x8022856C: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80228570: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x80228574: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
L_80228578:
    // 0x80228578: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x8022857C: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x80228580: jal         0x8004F820
    // 0x80228584: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80228584: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    after_0:
    // 0x80228588: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022858C: lh          $a1, 0x44($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X44);
    // 0x80228590: lhu         $v1, 0x56($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X56);
    // 0x80228594: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80228598: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022859C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802285A0: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x802285A4: jal         0x8004DA90
    // 0x802285A8: sh          $v1, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x802285A8: sh          $v1, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r3;
    after_1:
    // 0x802285AC: jal         0x80040F30
    // 0x802285B0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_2;
    // 0x802285B0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x802285B4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802285B8: jal         0x8003E934
    // 0x802285BC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_3;
    // 0x802285BC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_3:
    // 0x802285C0: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x802285C4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802285C8: andi        $s0, $s0, 0xF00
    ctx->r16 = ctx->r16 & 0XF00;
    // 0x802285CC: bne         $s0, $zero, L_80228608
    if (ctx->r16 != 0) {
        // 0x802285D0: sw          $v0, 0x20($s1)
        MEM_W(0X20, ctx->r17) = ctx->r2;
            goto L_80228608;
    }
    // 0x802285D0: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x802285D4: lh          $a0, 0x16($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X16);
    // 0x802285D8: lh          $v1, 0x2E($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X2E);
    // 0x802285DC: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x802285E0: bltz        $v0, L_802285F8
    if (SIGNED(ctx->r2) < 0) {
        // 0x802285E4: slti        $v0, $v0, 0x11
        ctx->r2 = SIGNED(ctx->r2) < 0X11 ? 1 : 0;
            goto L_802285F8;
    }
    // 0x802285E4: slti        $v0, $v0, 0x11
    ctx->r2 = SIGNED(ctx->r2) < 0X11 ? 1 : 0;
    // 0x802285E8: beq         $v0, $zero, L_8022860C
    if (ctx->r2 == 0) {
        // 0x802285EC: addiu       $a0, $s1, 0x14
        ctx->r4 = ADD32(ctx->r17, 0X14);
            goto L_8022860C;
    }
    // 0x802285EC: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x802285F0: j           L_80228638
    // 0x802285F4: nop

        goto L_80228638;
    // 0x802285F4: nop

L_802285F8:
    // 0x802285F8: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x802285FC: slti        $v0, $v0, 0x11
    ctx->r2 = SIGNED(ctx->r2) < 0X11 ? 1 : 0;
    // 0x80228600: bne         $v0, $zero, L_80228638
    if (ctx->r2 != 0) {
        // 0x80228604: nop
    
            goto L_80228638;
    }
    // 0x80228604: nop

L_80228608:
    // 0x80228608: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
L_8022860C:
    // 0x8022860C: addiu       $a1, $s1, 0x2C
    ctx->r5 = ADD32(ctx->r17, 0X2C);
    // 0x80228610: jal         0x8009A3B4
    // 0x80228614: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x80228614: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x80228618: addiu       $a0, $s1, 0x1C
    ctx->r4 = ADD32(ctx->r17, 0X1C);
    // 0x8022861C: addiu       $a1, $s1, 0x34
    ctx->r5 = ADD32(ctx->r17, 0X34);
    // 0x80228620: jal         0x8009A3B4
    // 0x80228624: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x80228624: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_5:
    // 0x80228628: lhu         $v0, 0x56($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X56);
    // 0x8022862C: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80228630: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80228634: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
L_80228638:
    // 0x80228638: lhu         $v0, 0x2($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X2);
    // 0x8022863C: andi        $v0, $v0, 0x1FF
    ctx->r2 = ctx->r2 & 0X1FF;
    // 0x80228640: bne         $v0, $zero, L_80228650
    if (ctx->r2 != 0) {
        // 0x80228644: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80228650;
    }
    // 0x80228644: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228648: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x8022864C: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
L_80228650:
    // 0x80228650: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80228654: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80228658: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022865C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228660: jr          $ra
    // 0x80228664: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80228664: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80225798_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225798: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022579C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802257A0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802257A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802257A8: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802257AC: bne         $v0, $zero, L_802257D0
    if (ctx->r2 != 0) {
        // 0x802257B0: nop
    
            goto L_802257D0;
    }
    // 0x802257B0: nop

    // 0x802257B4: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802257B8: jal         0x800607C4
    // 0x802257BC: addiu       $a0, $a0, 0xBA0
    ctx->r4 = ADD32(ctx->r4, 0XBA0);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x802257BC: addiu       $a0, $a0, 0xBA0
    ctx->r4 = ADD32(ctx->r4, 0XBA0);
    after_0:
    // 0x802257C0: jal         0x800712C4
    // 0x802257C4: addiu       $a0, $zero, 0x173
    ctx->r4 = ADD32(0, 0X173);
    func_800712C4_4C6C4(rdram, ctx);
        goto after_1;
    // 0x802257C4: addiu       $a0, $zero, 0x173
    ctx->r4 = ADD32(0, 0X173);
    after_1:
    // 0x802257C8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
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
RECOMP_FUNC void func_8022E74C_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E74C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022E750: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022E754: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E758: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8022E75C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8022E760: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022E764: lbu         $s1, 0xA($s0)
    ctx->r17 = MEM_BU(ctx->r16, 0XA);
    // 0x8022E768: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8022E76C: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x8022E770: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E774: beq         $s1, $v0, L_8022E7DC
    if (ctx->r17 == ctx->r2) {
        // 0x8022E778: slti        $v0, $s1, 0x2
        ctx->r2 = SIGNED(ctx->r17) < 0X2 ? 1 : 0;
            goto L_8022E7DC;
    }
    // 0x8022E778: slti        $v0, $s1, 0x2
    ctx->r2 = SIGNED(ctx->r17) < 0X2 ? 1 : 0;
    // 0x8022E77C: beql        $v0, $zero, L_8022E794
    if (ctx->r2 == 0) {
        // 0x8022E780: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022E794;
    }
    goto skip_0;
    // 0x8022E780: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022E784: beq         $s1, $zero, L_8022E7A4
    if (ctx->r17 == 0) {
        // 0x8022E788: nop
    
            goto L_8022E7A4;
    }
    // 0x8022E788: nop

    // 0x8022E78C: j           L_8022E904
    // 0x8022E790: nop

        goto L_8022E904;
    // 0x8022E790: nop

L_8022E794:
    // 0x8022E794: beq         $s1, $v0, L_8022E8CC
    if (ctx->r17 == ctx->r2) {
        // 0x8022E798: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_8022E8CC;
    }
    // 0x8022E798: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022E79C: j           L_8022E904
    // 0x8022E7A0: nop

        goto L_8022E904;
    // 0x8022E7A0: nop

L_8022E7A4:
    // 0x8022E7A4: jal         0x8006FF84
    // 0x8022E7A8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x8022E7A8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_0:
    // 0x8022E7AC: beq         $v0, $zero, L_8022E904
    if (ctx->r2 == 0) {
        // 0x8022E7B0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022E904;
    }
    // 0x8022E7B0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022E7B4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022E7B8: sb          $v0, 0x49B8($at)
    MEM_B(0X49B8, ctx->r1) = ctx->r2;
    // 0x8022E7BC: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x8022E7C0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022E7C4: sb          $zero, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = 0;
    // 0x8022E7C8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022E7CC: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
    // 0x8022E7D0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022E7D4: j           L_8022E8BC
    // 0x8022E7D8: sw          $zero, 0x49BC($at)
    MEM_W(0X49BC, ctx->r1) = 0;
        goto L_8022E8BC;
    // 0x8022E7D8: sw          $zero, 0x49BC($at)
    MEM_W(0X49BC, ctx->r1) = 0;
L_8022E7DC:
    // 0x8022E7DC: jal         0x8022ED54
    // 0x8022E7E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022ED54_ovl15(rdram, ctx);
        goto after_1;
    // 0x8022E7E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022E7E4: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022E7E8: beql        $v0, $zero, L_8022E8AC
    if (ctx->r2 == 0) {
        // 0x8022E7EC: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8022E8AC;
    }
    goto skip_1;
    // 0x8022E7EC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    skip_1:
    // 0x8022E7F0: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x8022E7F4: bne         $v0, $zero, L_8022E818
    if (ctx->r2 != 0) {
        // 0x8022E7F8: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_8022E818;
    }
    // 0x8022E7F8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022E7FC: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x8022E800: lb          $a3, 0xE($s0)
    ctx->r7 = MEM_B(ctx->r16, 0XE);
    // 0x8022E804: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022E808: jal         0x800610AC
    // 0x8022E80C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_2;
    // 0x8022E80C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x8022E810: j           L_8022E8BC
    // 0x8022E814: nop

        goto L_8022E8BC;
    // 0x8022E814: nop

L_8022E818:
    // 0x8022E818: beq         $v0, $s1, L_8022E8BC
    if (ctx->r2 == ctx->r17) {
        // 0x8022E81C: andi        $v0, $v0, 0x80
        ctx->r2 = ctx->r2 & 0X80;
            goto L_8022E8BC;
    }
    // 0x8022E81C: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x8022E820: beq         $v0, $zero, L_8022E86C
    if (ctx->r2 == 0) {
        // 0x8022E824: andi        $v0, $a0, 0x7F
        ctx->r2 = ctx->r4 & 0X7F;
            goto L_8022E86C;
    }
    // 0x8022E824: andi        $v0, $a0, 0x7F
    ctx->r2 = ctx->r4 & 0X7F;
    // 0x8022E828: lbu         $v1, 0xE($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XE);
    // 0x8022E82C: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8022E830: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8022E834: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x8022E838: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022E83C: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8022E840: lui         $v0, 0xCCCC
    ctx->r2 = S32(0XCCCC << 16);
    // 0x8022E844: ori         $v0, $v0, 0xCCCD
    ctx->r2 = ctx->r2 | 0XCCCD;
    // 0x8022E848: multu       $v1, $v0
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022E84C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022E850: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022E854: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022E858: mfhi        $t0
    ctx->r8 = hi;
    // 0x8022E85C: nop

    // 0x8022E860: nop

    // 0x8022E864: j           L_8022E88C
    // 0x8022E868: srl         $a2, $t0, 3
    ctx->r6 = S32(U32(ctx->r8) >> 3);
        goto L_8022E88C;
    // 0x8022E868: srl         $a2, $t0, 3
    ctx->r6 = S32(U32(ctx->r8) >> 3);
L_8022E86C:
    // 0x8022E86C: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x8022E870: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022E874: beq         $v1, $v0, L_8022E8A8
    if (ctx->r3 == ctx->r2) {
        // 0x8022E878: addu        $a2, $v1, $zero
        ctx->r6 = ADD32(ctx->r3, 0);
            goto L_8022E8A8;
    }
    // 0x8022E878: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    // 0x8022E87C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022E880: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022E884: andi        $a2, $a2, 0xFF
    ctx->r6 = ctx->r6 & 0XFF;
    // 0x8022E888: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
L_8022E88C:
    // 0x8022E88C: jal         0x80069754
    // 0x8022E890: nop

    func_80069754_44B54(rdram, ctx);
        goto after_3;
    // 0x8022E890: nop

    after_3:
    // 0x8022E894: lb          $a0, 0xC($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XC);
    // 0x8022E898: jal         0x8006036C
    // 0x8022E89C: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    func_8006036C_3B76C(rdram, ctx);
        goto after_4;
    // 0x8022E89C: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    after_4:
    // 0x8022E8A0: j           L_8022E8BC
    // 0x8022E8A4: nop

        goto L_8022E8BC;
    // 0x8022E8A4: nop

L_8022E8A8:
    // 0x8022E8A8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_8022E8AC:
    // 0x8022E8AC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022E8B0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022E8B4: jal         0x80069754
    // 0x8022E8B8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80069754_44B54(rdram, ctx);
        goto after_5;
    // 0x8022E8B8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_5:
L_8022E8BC:
    // 0x8022E8BC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022E8C0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022E8C4: j           L_8022E904
    // 0x8022E8C8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8022E904;
    // 0x8022E8C8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022E8CC:
    // 0x8022E8CC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022E8D0: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022E8D4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022E8D8: bne         $v0, $zero, L_8022E904
    if (ctx->r2 != 0) {
        // 0x8022E8DC: nop
    
            goto L_8022E904;
    }
    // 0x8022E8DC: nop

    // 0x8022E8E0: jal         0x80070050
    // 0x8022E8E4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_80070050_4B450(rdram, ctx);
        goto after_6;
    // 0x8022E8E4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_6:
    // 0x8022E8E8: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x8022E8EC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022E8F0: sw          $zero, 0x4B34($at)
    MEM_W(0X4B34, ctx->r1) = 0;
    // 0x8022E8F4: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022E8F8: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x8022E8FC: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022E900: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_8022E904:
    // 0x8022E904: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8022E908: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8022E90C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022E910: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022E914: jr          $ra
    // 0x8022E918: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022E918: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_802289A4_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802289A4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802289A8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802289AC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802289B0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802289B4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802289B8: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x802289BC: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x802289C0: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x802289C4: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x802289C8: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x802289CC: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x802289D0: bne         $v1, $v0, L_802289E8
    if (ctx->r3 != ctx->r2) {
        // 0x802289D4: addu        $s1, $a1, $zero
        ctx->r17 = ADD32(ctx->r5, 0);
            goto L_802289E8;
    }
    // 0x802289D4: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x802289D8: jal         0x8004D5FC
    // 0x802289DC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8004D5FC_289FC(rdram, ctx);
        goto after_0;
    // 0x802289DC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x802289E0: j           L_802289F8
    // 0x802289E4: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
        goto L_802289F8;
    // 0x802289E4: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
L_802289E8:
    // 0x802289E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802289EC: jal         0x8004D5D4
    // 0x802289F0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_1;
    // 0x802289F0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_1:
    // 0x802289F4: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
L_802289F8:
    // 0x802289F8: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x802289FC: sw          $v0, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r2;
    // 0x80228A00: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x80228A04: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
    // 0x80228A08: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x80228A0C: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
    // 0x80228A10: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x80228A14: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80228A18: jal         0x8004F144
    // 0x80228A1C: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    func_8004F144_2A544(rdram, ctx);
        goto after_2;
    // 0x80228A1C: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    after_2:
    // 0x80228A20: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80228A24: beq         $a0, $zero, L_80228A54
    if (ctx->r4 == 0) {
        // 0x80228A28: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80228A54;
    }
    // 0x80228A28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228A2C: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x80228A30: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
    // 0x80228A34: sb          $v0, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r2;
    // 0x80228A38: sb          $zero, 0x3($a0)
    MEM_B(0X3, ctx->r4) = 0;
    // 0x80228A3C: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80228A40: lbu         $v0, 0x6($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X6);
    // 0x80228A44: sb          $zero, 0xD($a0)
    MEM_B(0XD, ctx->r4) = 0;
    // 0x80228A48: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x80228A4C: sb          $v1, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r3;
    // 0x80228A50: sb          $v0, 0x6($a0)
    MEM_B(0X6, ctx->r4) = ctx->r2;
L_80228A54:
    // 0x80228A54: jal         0x8004F144
    // 0x80228A58: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_3;
    // 0x80228A58: nop

    after_3:
    // 0x80228A5C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80228A60: beq         $a0, $zero, L_80228A8C
    if (ctx->r4 == 0) {
        // 0x80228A64: addiu       $v0, $zero, 0x15
        ctx->r2 = ADD32(0, 0X15);
            goto L_80228A8C;
    }
    // 0x80228A64: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
    // 0x80228A68: sb          $v0, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r2;
    // 0x80228A6C: lbu         $v0, 0x6($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X6);
    // 0x80228A70: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80228A74: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
    // 0x80228A78: sb          $v1, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r3;
    // 0x80228A7C: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80228A80: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x80228A84: sb          $v1, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r3;
    // 0x80228A88: sb          $v0, 0x6($a0)
    MEM_B(0X6, ctx->r4) = ctx->r2;
L_80228A8C:
    // 0x80228A8C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80228A90: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228A94: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80228A98: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80228A9C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80228AA0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228AA4: jr          $ra
    // 0x80228AA8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80228AA8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80226300_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226300: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80226304: addiu       $v1, $v1, 0x47B8
    ctx->r3 = ADD32(ctx->r3, 0X47B8);
    // 0x80226308: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022630C: beq         $a0, $v0, L_80226358
    if (ctx->r4 == ctx->r2) {
        // 0x80226310: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80226358;
    }
    // 0x80226310: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226314: slti        $v0, $a0, 0x2
    ctx->r2 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    // 0x80226318: beql        $v0, $zero, L_80226330
    if (ctx->r2 == 0) {
        // 0x8022631C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80226330;
    }
    goto skip_0;
    // 0x8022631C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80226320: beq         $a0, $zero, L_80226340
    if (ctx->r4 == 0) {
        // 0x80226324: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80226340;
    }
    // 0x80226324: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80226328: j           L_8022638C
    // 0x8022632C: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
        goto L_8022638C;
    // 0x8022632C: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
L_80226330:
    // 0x80226330: beq         $a0, $v0, L_80226368
    if (ctx->r4 == ctx->r2) {
        // 0x80226334: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80226368;
    }
    // 0x80226334: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226338: j           L_8022638C
    // 0x8022633C: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
        goto L_8022638C;
    // 0x8022633C: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
L_80226340:
    // 0x80226340: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226344: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x80226348: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022634C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226350: j           L_80226380
    // 0x80226354: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
        goto L_80226380;
    // 0x80226354: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
L_80226358:
    // 0x80226358: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022635C: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x80226360: j           L_80226374
    // 0x80226364: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_80226374;
    // 0x80226364: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_80226368:
    // 0x80226368: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022636C: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x80226370: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_80226374:
    // 0x80226374: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226378: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x8022637C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80226380:
    // 0x80226380: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226384: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x80226388: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
L_8022638C:
    // 0x8022638C: sb          $v0, 0x16($v1)
    MEM_B(0X16, ctx->r3) = ctx->r2;
    // 0x80226390: addiu       $v0, $zero, 0x708
    ctx->r2 = ADD32(0, 0X708);
    // 0x80226394: sh          $v0, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r2;
    // 0x80226398: addiu       $v0, $zero, -0x81
    ctx->r2 = ADD32(0, -0X81);
    // 0x8022639C: sh          $v0, 0xA($v1)
    MEM_H(0XA, ctx->r3) = ctx->r2;
    // 0x802263A0: addiu       $v0, $zero, -0x28
    ctx->r2 = ADD32(0, -0X28);
    // 0x802263A4: sb          $a1, 0x17($v1)
    MEM_B(0X17, ctx->r3) = ctx->r5;
    // 0x802263A8: sh          $v0, 0xC($v1)
    MEM_H(0XC, ctx->r3) = ctx->r2;
    // 0x802263AC: sh          $zero, 0x12($v1)
    MEM_H(0X12, ctx->r3) = 0;
    // 0x802263B0: jr          $ra
    // 0x802263B4: sb          $zero, 0x15($v1)
    MEM_B(0X15, ctx->r3) = 0;
    TRACE_RETURN()
    return;
    // 0x802263B4: sb          $zero, 0x15($v1)
    MEM_B(0X15, ctx->r3) = 0;
    // 0x802263B8: nop

    // 0x802263BC: nop

;}
RECOMP_FUNC void func_80225410_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225410: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225414: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225418: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022541C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225420: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x80225424: bne         $v0, $zero, L_80225474
    if (ctx->r2 != 0) {
        // 0x80225428: nop
    
            goto L_80225474;
    }
    // 0x80225428: nop

    // 0x8022542C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225430: jal         0x800607C4
    // 0x80225434: addiu       $a0, $a0, 0x93C
    ctx->r4 = ADD32(ctx->r4, 0X93C);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x80225434: addiu       $a0, $a0, 0x93C
    ctx->r4 = ADD32(ctx->r4, 0X93C);
    after_0:
    // 0x80225438: jal         0x8006033C
    // 0x8022543C: addiu       $a0, $zero, 0x31
    ctx->r4 = ADD32(0, 0X31);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x8022543C: addiu       $a0, $zero, 0x31
    ctx->r4 = ADD32(0, 0X31);
    after_1:
    // 0x80225440: bne         $v0, $zero, L_80225450
    if (ctx->r2 != 0) {
        // 0x80225444: nop
    
            goto L_80225450;
    }
    // 0x80225444: nop

    // 0x80225448: jal         0x8006036C
    // 0x8022544C: addiu       $a0, $zero, 0x7E1
    ctx->r4 = ADD32(0, 0X7E1);
    func_8006036C_3B76C(rdram, ctx);
        goto after_2;
    // 0x8022544C: addiu       $a0, $zero, 0x7E1
    ctx->r4 = ADD32(0, 0X7E1);
    after_2:
L_80225450:
    // 0x80225450: jal         0x8006033C
    // 0x80225454: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    func_8006033C_3B73C(rdram, ctx);
        goto after_3;
    // 0x80225454: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    after_3:
    // 0x80225458: bne         $v0, $zero, L_80225468
    if (ctx->r2 != 0) {
        // 0x8022545C: nop
    
            goto L_80225468;
    }
    // 0x8022545C: nop

    // 0x80225460: jal         0x8006036C
    // 0x80225464: addiu       $a0, $zero, 0x7E3
    ctx->r4 = ADD32(0, 0X7E3);
    func_8006036C_3B76C(rdram, ctx);
        goto after_4;
    // 0x80225464: addiu       $a0, $zero, 0x7E3
    ctx->r4 = ADD32(0, 0X7E3);
    after_4:
L_80225468:
    // 0x80225468: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x8022546C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225470: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_80225474:
    // 0x80225474: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225478: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022547C: jr          $ra
    // 0x80225480: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225480: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225690_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225690: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225694: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225698: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022569C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802256A0: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x802256A4: beq         $v1, $zero, L_802256BC
    if (ctx->r3 == 0) {
        // 0x802256A8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802256BC;
    }
    // 0x802256A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802256AC: beq         $v1, $v0, L_802256D8
    if (ctx->r3 == ctx->r2) {
        // 0x802256B0: nop
    
            goto L_802256D8;
    }
    // 0x802256B0: nop

    // 0x802256B4: j           L_802256F8
    // 0x802256B8: nop

        goto L_802256F8;
    // 0x802256B8: nop

L_802256BC:
    // 0x802256BC: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802256C0: jal         0x800607C4
    // 0x802256C4: addiu       $a0, $a0, 0x94C
    ctx->r4 = ADD32(ctx->r4, 0X94C);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x802256C4: addiu       $a0, $a0, 0x94C
    ctx->r4 = ADD32(ctx->r4, 0X94C);
    after_0:
    // 0x802256C8: jal         0x80225A4C
    // 0x802256CC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80225A4C_ovl15(rdram, ctx);
        goto after_1;
    // 0x802256CC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_1:
    // 0x802256D0: j           L_802256F4
    // 0x802256D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802256F4;
    // 0x802256D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802256D8:
    // 0x802256D8: jal         0x8006033C
    // 0x802256DC: addiu       $a0, $zero, 0x605
    ctx->r4 = ADD32(0, 0X605);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x802256DC: addiu       $a0, $zero, 0x605
    ctx->r4 = ADD32(0, 0X605);
    after_2:
    // 0x802256E0: beq         $v0, $zero, L_802256F8
    if (ctx->r2 == 0) {
        // 0x802256E4: nop
    
            goto L_802256F8;
    }
    // 0x802256E4: nop

    // 0x802256E8: jal         0x80060690
    // 0x802256EC: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    func_80060690_3BA90(rdram, ctx);
        goto after_3;
    // 0x802256EC: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    after_3:
    // 0x802256F0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_802256F4:
    // 0x802256F4: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_802256F8:
    // 0x802256F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802256FC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225700: jr          $ra
    // 0x80225704: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225704: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225858_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225858: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022585C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225860: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225864: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225868: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x8022586C: bne         $v0, $zero, L_8022588C
    if (ctx->r2 != 0) {
        // 0x80225870: nop
    
            goto L_8022588C;
    }
    // 0x80225870: nop

    // 0x80225874: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225878: jal         0x800607C4
    // 0x8022587C: addiu       $a0, $a0, 0x964
    ctx->r4 = ADD32(ctx->r4, 0X964);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x8022587C: addiu       $a0, $a0, 0x964
    ctx->r4 = ADD32(ctx->r4, 0X964);
    after_0:
    // 0x80225880: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x80225884: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225888: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_8022588C:
    // 0x8022588C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225890: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225894: jr          $ra
    // 0x80225898: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225898: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226920_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226920: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226924: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226928: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022692C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226930: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x80226934: bne         $v0, $zero, L_80226974
    if (ctx->r2 != 0) {
        // 0x80226938: nop
    
            goto L_80226974;
    }
    // 0x80226938: nop

    // 0x8022693C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80226940: addiu       $v1, $v1, 0x49B0
    ctx->r3 = ADD32(ctx->r3, 0X49B0);
    // 0x80226944: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80226948: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8022694C: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80226950: jal         0x8004F418
    // 0x80226954: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x80226954: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    after_0:
    // 0x80226958: jal         0x8004F418
    // 0x8022695C: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    func_8004F418_2A818(rdram, ctx);
        goto after_1;
    // 0x8022695C: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    after_1:
    // 0x80226960: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80226964: jal         0x8005FA7C
    // 0x80226968: addiu       $a0, $a0, 0x1150
    ctx->r4 = ADD32(ctx->r4, 0X1150);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_2;
    // 0x80226968: addiu       $a0, $a0, 0x1150
    ctx->r4 = ADD32(ctx->r4, 0X1150);
    after_2:
    // 0x8022696C: jal         0x80226B04
    // 0x80226970: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_80226B04_ovl15(rdram, ctx);
        goto after_3;
    // 0x80226970: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_3:
L_80226974:
    // 0x80226974: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226978: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022697C: jr          $ra
    // 0x80226980: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226980: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022EBA4_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EBA4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022EBA8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022EBAC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022EBB0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022EBB4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022EBB8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022EBBC: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x8022EBC0: lw          $s2, 0x44($s1)
    ctx->r18 = MEM_W(ctx->r17, 0X44);
    // 0x8022EBC4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022EBC8: beq         $v1, $v0, L_8022EC10
    if (ctx->r3 == ctx->r2) {
        // 0x8022EBCC: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8022EC10;
    }
    // 0x8022EBCC: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022EBD0: beql        $v0, $zero, L_8022EBE8
    if (ctx->r2 == 0) {
        // 0x8022EBD4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022EBE8;
    }
    goto skip_0;
    // 0x8022EBD4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022EBD8: beq         $v1, $zero, L_8022EBF8
    if (ctx->r3 == 0) {
        // 0x8022EBDC: lui         $v1, 0x20
        ctx->r3 = S32(0X20 << 16);
            goto L_8022EBF8;
    }
    // 0x8022EBDC: lui         $v1, 0x20
    ctx->r3 = S32(0X20 << 16);
    // 0x8022EBE0: j           L_8022ED3C
    // 0x8022EBE4: nop

        goto L_8022ED3C;
    // 0x8022EBE4: nop

L_8022EBE8:
    // 0x8022EBE8: beq         $v1, $v0, L_8022EC44
    if (ctx->r3 == ctx->r2) {
        // 0x8022EBEC: nop
    
            goto L_8022EC44;
    }
    // 0x8022EBEC: nop

    // 0x8022EBF0: j           L_8022ED3C
    // 0x8022EBF4: nop

        goto L_8022ED3C;
    // 0x8022EBF4: nop

L_8022EBF8:
    // 0x8022EBF8: lh          $v0, 0x3A($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X3A);
    // 0x8022EBFC: sw          $v1, 0x50($s1)
    MEM_W(0X50, ctx->r17) = ctx->r3;
    // 0x8022EC00: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022EC04: sb          $v1, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r3;
    // 0x8022EC08: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022EC0C: sw          $v0, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = ctx->r2;
L_8022EC10:
    // 0x8022EC10: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x8022EC14: ori         $v0, $v0, 0xFF00
    ctx->r2 = ctx->r2 | 0XFF00;
    // 0x8022EC18: lw          $v1, 0xC($s2)
    ctx->r3 = MEM_W(ctx->r18, 0XC);
    // 0x8022EC1C: lui         $a0, 0x1
    ctx->r4 = S32(0X1 << 16);
    // 0x8022EC20: ori         $a0, $a0, 0x1000
    ctx->r4 = ctx->r4 | 0X1000;
    // 0x8022EC24: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8022EC28: bne         $v1, $a0, L_8022EC38
    if (ctx->r3 != ctx->r4) {
        // 0x8022EC2C: nop
    
            goto L_8022EC38;
    }
    // 0x8022EC2C: nop

    // 0x8022EC30: jal         0x8022EDD8
    // 0x8022EC34: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8022EDD8_ovl15(rdram, ctx);
        goto after_0;
    // 0x8022EC34: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_0:
L_8022EC38:
    // 0x8022EC38: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x8022EC3C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022EC40: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_8022EC44:
    // 0x8022EC44: lw          $v0, 0x4C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4C);
    // 0x8022EC48: lw          $a0, 0x50($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X50);
    // 0x8022EC4C: lhu         $v1, 0x3A($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X3A);
    // 0x8022EC50: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8022EC54: sw          $v0, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = ctx->r2;
    // 0x8022EC58: lw          $v0, 0x50($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X50);
    // 0x8022EC5C: lhu         $a1, 0x4C($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X4C);
    // 0x8022EC60: lui         $a0, 0xFFFC
    ctx->r4 = S32(0XFFFC << 16);
    // 0x8022EC64: addiu       $v1, $v1, -0x50
    ctx->r3 = ADD32(ctx->r3, -0X50);
    // 0x8022EC68: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022EC6C: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8022EC70: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022EC74: sh          $a1, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r5;
    // 0x8022EC78: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8022EC7C: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8022EC80: slt         $v1, $v1, $a1
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8022EC84: beq         $v1, $zero, L_8022ECF4
    if (ctx->r3 == 0) {
        // 0x8022EC88: sw          $v0, 0x50($s1)
        MEM_W(0X50, ctx->r17) = ctx->r2;
            goto L_8022ECF4;
    }
    // 0x8022EC88: sw          $v0, 0x50($s1)
    MEM_W(0X50, ctx->r17) = ctx->r2;
    // 0x8022EC8C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022EC90: addiu       $a1, $s2, 0x3
    ctx->r5 = ADD32(ctx->r18, 0X3);
    // 0x8022EC94: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022EC98: sb          $zero, 0x3($s2)
    MEM_B(0X3, ctx->r18) = 0;
    // 0x8022EC9C: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x8022ECA0: sb          $zero, 0x9($s2)
    MEM_B(0X9, ctx->r18) = 0;
    // 0x8022ECA4: sw          $zero, 0x4C($s2)
    MEM_W(0X4C, ctx->r18) = 0;
    // 0x8022ECA8: jal         0x8004D5D4
    // 0x8022ECAC: sw          $zero, 0x50($s2)
    MEM_W(0X50, ctx->r18) = 0;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_1;
    // 0x8022ECAC: sw          $zero, 0x50($s2)
    MEM_W(0X50, ctx->r18) = 0;
    after_1:
    // 0x8022ECB0: addiu       $s0, $s2, 0x18
    ctx->r16 = ADD32(ctx->r18, 0X18);
    // 0x8022ECB4: jal         0x8002C654
    // 0x8022ECB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_2;
    // 0x8022ECB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022ECBC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022ECC0: jal         0x800317C0
    // 0x8022ECC4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_800317C0_CBC0(rdram, ctx);
        goto after_3;
    // 0x8022ECC4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022ECC8: lbu         $a0, 0xB($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0XB);
    // 0x8022ECCC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022ECD0: jal         0x800319B4
    // 0x8022ECD4: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    func_800319B4_CDB4(rdram, ctx);
        goto after_4;
    // 0x8022ECD4: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    after_4:
    // 0x8022ECD8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022ECDC: jal         0x80031BB4
    // 0x8022ECE0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80031BB4_CFB4(rdram, ctx);
        goto after_5;
    // 0x8022ECE0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8022ECE4: jal         0x8004F684
    // 0x8022ECE8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F684_2AA84(rdram, ctx);
        goto after_6;
    // 0x8022ECE8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
    // 0x8022ECEC: j           L_8022ED3C
    // 0x8022ECF0: nop

        goto L_8022ED3C;
    // 0x8022ECF0: nop

L_8022ECF4:
    // 0x8022ECF4: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x8022ECF8: jal         0x8002C654
    // 0x8022ECFC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_7;
    // 0x8022ECFC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x8022ED00: lbu         $v0, 0xB($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XB);
    // 0x8022ED04: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8022ED08: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022ED0C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8022ED10: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8022ED14: lh          $a0, 0x2A20($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X2A20);
    // 0x8022ED18: jal         0x80031BB4
    // 0x8022ED1C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80031BB4_CFB4(rdram, ctx);
        goto after_8;
    // 0x8022ED1C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_8:
    // 0x8022ED20: lb          $a0, 0xF($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XF);
    // 0x8022ED24: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022ED28: jal         0x800319B4
    // 0x8022ED2C: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    func_800319B4_CDB4(rdram, ctx);
        goto after_9;
    // 0x8022ED2C: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    after_9:
    // 0x8022ED30: lbu         $v0, 0xB($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XB);
    // 0x8022ED34: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022ED38: sb          $v0, 0xB($s2)
    MEM_B(0XB, ctx->r18) = ctx->r2;
L_8022ED3C:
    // 0x8022ED3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022ED40: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022ED44: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022ED48: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022ED4C: jr          $ra
    // 0x8022ED50: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022ED50: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022B4E4_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B4E4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022B4E8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B4EC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B4F0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022B4F4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022B4F8: lh          $a0, 0x34C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X34C);
    // 0x8022B4FC: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022B500: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    // 0x8022B504: jal         0x8004FA7C
    // 0x8022B508: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x8022B508: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    after_0:
    // 0x8022B50C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022B510: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x8022B514: beq         $v0, $zero, L_8022B5A8
    if (ctx->r2 == 0) {
        // 0x8022B518: nop
    
            goto L_8022B5A8;
    }
    // 0x8022B518: nop

    // 0x8022B51C: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022B520: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x8022B524: bne         $v0, $zero, L_8022B5A8
    if (ctx->r2 != 0) {
        // 0x8022B528: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022B5A8;
    }
    // 0x8022B528: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B52C: lbu         $v1, 0x34A($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34A);
    // 0x8022B530: beq         $v1, $v0, L_8022B548
    if (ctx->r3 == ctx->r2) {
        // 0x8022B534: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022B548;
    }
    // 0x8022B534: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022B538: beq         $v1, $v0, L_8022B578
    if (ctx->r3 == ctx->r2) {
        // 0x8022B53C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022B578;
    }
    // 0x8022B53C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022B540: j           L_8022B59C
    // 0x8022B544: nop

        goto L_8022B59C;
    // 0x8022B544: nop

L_8022B548:
    // 0x8022B548: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022B54C: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x8022B550: bne         $v0, $zero, L_8022B59C
    if (ctx->r2 != 0) {
        // 0x8022B554: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022B59C;
    }
    // 0x8022B554: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022B558: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x8022B55C: bne         $v0, $zero, L_8022B59C
    if (ctx->r2 != 0) {
        // 0x8022B560: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022B59C;
    }
    // 0x8022B560: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B564: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022B568: bne         $v1, $v0, L_8022B59C
    if (ctx->r3 != ctx->r2) {
        // 0x8022B56C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022B59C;
    }
    // 0x8022B56C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022B570: j           L_8022B59C
    // 0x8022B574: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022B59C;
    // 0x8022B574: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022B578:
    // 0x8022B578: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022B57C: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x8022B580: beq         $v0, $zero, L_8022B598
    if (ctx->r2 == 0) {
        // 0x8022B584: slti        $v0, $v1, 0x4
        ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
            goto L_8022B598;
    }
    // 0x8022B584: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x8022B588: bne         $v0, $zero, L_8022B59C
    if (ctx->r2 != 0) {
        // 0x8022B58C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022B59C;
    }
    // 0x8022B58C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022B590: j           L_8022B59C
    // 0x8022B594: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022B59C;
    // 0x8022B594: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022B598:
    // 0x8022B598: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8022B59C:
    // 0x8022B59C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022B5A0: beq         $v0, $zero, L_8022B5CC
    if (ctx->r2 == 0) {
        // 0x8022B5A4: nop
    
            goto L_8022B5CC;
    }
    // 0x8022B5A4: nop

L_8022B5A8:
    // 0x8022B5A8: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x8022B5AC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022B5B0: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022B5B4: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022B5B8: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8022B5BC: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022B5C0: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8022B5C4: j           L_8022B5DC
    // 0x8022B5C8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022B5DC;
    // 0x8022B5C8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022B5CC:
    // 0x8022B5CC: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022B5D0: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022B5D4: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022B5D8: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8022B5DC:
    // 0x8022B5DC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022B5E0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022B5E4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B5E8: jr          $ra
    // 0x8022B5EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022B5EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022BC74_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BC74: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022BC78: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022BC7C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022BC80: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8022BC84: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x8022BC88: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022BC8C: jal         0x8003516C
    // 0x8022BC90: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8003516C_1056C(rdram, ctx);
        goto after_0;
    // 0x8022BC90: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x8022BC94: bne         $v0, $zero, L_8022BCB8
    if (ctx->r2 != 0) {
        // 0x8022BC98: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022BCB8;
    }
    // 0x8022BC98: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022BC9C: lbu         $a3, 0xC($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XC);
    // 0x8022BCA0: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x8022BCA4: jal         0x800610AC
    // 0x8022BCA8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_1;
    // 0x8022BCA8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x8022BCAC: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022BCB0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022BCB4: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
L_8022BCB8:
    // 0x8022BCB8: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022BCBC: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x8022BCC0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022BCC4: jal         0x8004F820
    // 0x8022BCC8: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x8022BCC8: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_2:
    // 0x8022BCCC: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022BCD0: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8022BCD4: sb          $a0, 0x11B($s0)
    MEM_B(0X11B, ctx->r16) = ctx->r4;
    // 0x8022BCD8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022BCDC: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022BCE0: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022BCE4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022BCE8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022BCEC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022BCF0: jr          $ra
    // 0x8022BCF4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022BCF4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80225F48_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225F48: jr          $ra
    // 0x80225F4C: nop

    TRACE_RETURN()
    return;
    // 0x80225F4C: nop

;}
RECOMP_FUNC void func_802283A0_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802283A0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802283A4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802283A8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802283AC: addiu       $a0, $s1, 0x2C
    ctx->r4 = ADD32(ctx->r17, 0X2C);
    // 0x802283B0: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x802283B4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802283B8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802283BC: jal         0x8009A3B4
    // 0x802283C0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x802283C0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x802283C4: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
    // 0x802283C8: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x802283CC: jal         0x8009A3B4
    // 0x802283D0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802283D0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x802283D4: addiu       $a0, $s1, 0x5C
    ctx->r4 = ADD32(ctx->r17, 0X5C);
    // 0x802283D8: addiu       $a1, $s1, 0x54
    ctx->r5 = ADD32(ctx->r17, 0X54);
    // 0x802283DC: jal         0x8009A3B4
    // 0x802283E0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x802283E0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x802283E4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802283E8: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x802283EC: addiu       $a1, $a1, -0x3A50
    ctx->r5 = ADD32(ctx->r5, -0X3A50);
    // 0x802283F0: lbu         $v0, 0xAC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XAC);
    // 0x802283F4: addiu       $s0, $s1, 0x4E0
    ctx->r16 = ADD32(ctx->r17, 0X4E0);
    // 0x802283F8: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x802283FC: jal         0x8022844C
    // 0x80228400: sb          $v0, 0xAD($s1)
    MEM_B(0XAD, ctx->r17) = ctx->r2;
    func_8022844C_ovl15(rdram, ctx);
        goto after_3;
    // 0x80228400: sb          $v0, 0xAD($s1)
    MEM_B(0XAD, ctx->r17) = ctx->r2;
    after_3:
    // 0x80228404: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80228408: jal         0x802287C8
    // 0x8022840C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_802287C8_ovl15(rdram, ctx);
        goto after_4;
    // 0x8022840C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80228410: lbu         $a1, 0xAC($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0XAC);
    // 0x80228414: lbu         $v0, 0xAD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XAD);
    // 0x80228418: beq         $a1, $v0, L_80228430
    if (ctx->r5 == ctx->r2) {
        // 0x8022841C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80228430;
    }
    // 0x8022841C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80228420: jal         0x80050294
    // 0x80228424: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x80228424: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x80228428: j           L_80228438
    // 0x8022842C: nop

        goto L_80228438;
    // 0x8022842C: nop

L_80228430:
    // 0x80228430: jal         0x8005044C
    // 0x80228434: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_6;
    // 0x80228434: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
L_80228438:
    // 0x80228438: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022843C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80228440: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228444: jr          $ra
    // 0x80228448: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80228448: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802260E8_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802260E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802260EC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802260F0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802260F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802260F8: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x802260FC: bne         $v0, $zero, L_80226118
    if (ctx->r2 != 0) {
        // 0x80226100: nop
    
            goto L_80226118;
    }
    // 0x80226100: nop

    // 0x80226104: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80226108: jal         0x8005FA7C
    // 0x8022610C: addiu       $a0, $a0, 0xA58
    ctx->r4 = ADD32(ctx->r4, 0XA58);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_0;
    // 0x8022610C: addiu       $a0, $a0, 0xA58
    ctx->r4 = ADD32(ctx->r4, 0XA58);
    after_0:
    // 0x80226110: jal         0x80036E48
    // 0x80226114: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80036E48_12248(rdram, ctx);
        goto after_1;
    // 0x80226114: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_1:
L_80226118:
    // 0x80226118: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022611C: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80226120: bne         $v0, $zero, L_80226134
    if (ctx->r2 != 0) {
        // 0x80226124: nop
    
            goto L_80226134;
    }
    // 0x80226124: nop

    // 0x80226128: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022612C: andi        $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 & 0X7F;
    // 0x80226130: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80226134:
    // 0x80226134: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226138: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022613C: jr          $ra
    // 0x80226140: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226140: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B44C_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B44C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B450: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B454: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B458: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022B45C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022B460: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x8022B464: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022B468: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022B46C: jal         0x8004F820
    // 0x8022B470: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022B470: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x8022B474: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022B478: lb          $a0, 0xA7($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XA7);
    // 0x8022B47C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022B480: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022B484: bgez        $a0, L_8022B4A8
    if (SIGNED(ctx->r4) >= 0) {
        // 0x8022B488: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8022B4A8;
    }
    // 0x8022B488: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022B48C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022B490: jal         0x8022C1C8
    // 0x8022B494: nop

    func_8022C1C8_ovl15(rdram, ctx);
        goto after_1;
    // 0x8022B494: nop

    after_1:
    // 0x8022B498: lbu         $v1, 0x34B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022B49C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022B4A0: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8022B4A4: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
L_8022B4A8:
    // 0x8022B4A8: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022B4AC: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x8022B4B0: bne         $v0, $zero, L_8022B4D4
    if (ctx->r2 != 0) {
        // 0x8022B4B4: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_8022B4D4;
    }
    // 0x8022B4B4: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8022B4B8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022B4BC: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022B4C0: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
    // 0x8022B4C4: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x8022B4C8: jal         0x8022C1C8
    // 0x8022B4CC: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    func_8022C1C8_ovl15(rdram, ctx);
        goto after_2;
    // 0x8022B4CC: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    after_2:
    // 0x8022B4D0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022B4D4:
    // 0x8022B4D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022B4D8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B4DC: jr          $ra
    // 0x8022B4E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B4E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022F014_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F014: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022F018: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022F01C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022F020: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8022F024: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8022F028: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022F02C: lbu         $s0, 0x9($s1)
    ctx->r16 = MEM_BU(ctx->r17, 0X9);
    // 0x8022F030: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8022F034: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x8022F038: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F03C: beq         $s0, $v0, L_8022F0A4
    if (ctx->r16 == ctx->r2) {
        // 0x8022F040: slti        $v0, $s0, 0x2
        ctx->r2 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
            goto L_8022F0A4;
    }
    // 0x8022F040: slti        $v0, $s0, 0x2
    ctx->r2 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
    // 0x8022F044: beql        $v0, $zero, L_8022F05C
    if (ctx->r2 == 0) {
        // 0x8022F048: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022F05C;
    }
    goto skip_0;
    // 0x8022F048: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022F04C: beq         $s0, $zero, L_8022F06C
    if (ctx->r16 == 0) {
        // 0x8022F050: nop
    
            goto L_8022F06C;
    }
    // 0x8022F050: nop

    // 0x8022F054: j           L_8022F1D4
    // 0x8022F058: nop

        goto L_8022F1D4;
    // 0x8022F058: nop

L_8022F05C:
    // 0x8022F05C: beq         $s0, $v0, L_8022F198
    if (ctx->r16 == ctx->r2) {
        // 0x8022F060: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_8022F198;
    }
    // 0x8022F060: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022F064: j           L_8022F1D4
    // 0x8022F068: nop

        goto L_8022F1D4;
    // 0x8022F068: nop

L_8022F06C:
    // 0x8022F06C: jal         0x8006FF84
    // 0x8022F070: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x8022F070: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_0:
    // 0x8022F074: beq         $v0, $zero, L_8022F1D4
    if (ctx->r2 == 0) {
        // 0x8022F078: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022F1D4;
    }
    // 0x8022F078: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022F07C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022F080: sb          $v0, 0x49B8($at)
    MEM_B(0X49B8, ctx->r1) = ctx->r2;
    // 0x8022F084: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x8022F088: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022F08C: sb          $zero, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = 0;
    // 0x8022F090: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022F094: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
    // 0x8022F098: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022F09C: j           L_8022F188
    // 0x8022F0A0: sw          $zero, 0x49BC($at)
    MEM_W(0X49BC, ctx->r1) = 0;
        goto L_8022F188;
    // 0x8022F0A0: sw          $zero, 0x49BC($at)
    MEM_W(0X49BC, ctx->r1) = 0;
L_8022F0A4:
    // 0x8022F0A4: jal         0x8022F25C
    // 0x8022F0A8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8022F25C_ovl15(rdram, ctx);
        goto after_1;
    // 0x8022F0A8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x8022F0AC: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022F0B0: beql        $v0, $zero, L_8022F178
    if (ctx->r2 == 0) {
        // 0x8022F0B4: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_8022F178;
    }
    goto skip_1;
    // 0x8022F0B4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    skip_1:
    // 0x8022F0B8: lb          $v0, 0xD($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XD);
    // 0x8022F0BC: bne         $v0, $zero, L_8022F0E0
    if (ctx->r2 != 0) {
        // 0x8022F0C0: addu        $a1, $v0, $zero
        ctx->r5 = ADD32(ctx->r2, 0);
            goto L_8022F0E0;
    }
    // 0x8022F0C0: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8022F0C4: addiu       $a0, $s1, 0x38
    ctx->r4 = ADD32(ctx->r17, 0X38);
    // 0x8022F0C8: lb          $a3, 0xE($s1)
    ctx->r7 = MEM_B(ctx->r17, 0XE);
    // 0x8022F0CC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022F0D0: jal         0x800610AC
    // 0x8022F0D4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_2;
    // 0x8022F0D4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x8022F0D8: j           L_8022F188
    // 0x8022F0DC: nop

        goto L_8022F188;
    // 0x8022F0DC: nop

L_8022F0E0:
    // 0x8022F0E0: beq         $v0, $s0, L_8022F188
    if (ctx->r2 == ctx->r16) {
        // 0x8022F0E4: andi        $v0, $v0, 0x80
        ctx->r2 = ctx->r2 & 0X80;
            goto L_8022F188;
    }
    // 0x8022F0E4: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x8022F0E8: beq         $v0, $zero, L_8022F138
    if (ctx->r2 == 0) {
        // 0x8022F0EC: lui         $a0, 0x6666
        ctx->r4 = S32(0X6666 << 16);
            goto L_8022F138;
    }
    // 0x8022F0EC: lui         $a0, 0x6666
    ctx->r4 = S32(0X6666 << 16);
    // 0x8022F0F0: ori         $a0, $a0, 0x6667
    ctx->r4 = ctx->r4 | 0X6667;
    // 0x8022F0F4: lbu         $v1, 0xE($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XE);
    // 0x8022F0F8: andi        $v0, $a1, 0x7F
    ctx->r2 = ctx->r5 & 0X7F;
    // 0x8022F0FC: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8022F100: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8022F104: sll         $a2, $v0, 2
    ctx->r6 = S32(ctx->r2 << 2);
    // 0x8022F108: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8022F10C: sll         $a2, $a2, 1
    ctx->r6 = S32(ctx->r6 << 1);
    // 0x8022F110: mult        $a2, $a0
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022F114: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022F118: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022F11C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8022F120: sra         $a2, $a2, 31
    ctx->r6 = S32(SIGNED(ctx->r6) >> 31);
    // 0x8022F124: mfhi        $t0
    ctx->r8 = hi;
    // 0x8022F128: sra         $v0, $t0, 2
    ctx->r2 = S32(SIGNED(ctx->r8) >> 2);
    // 0x8022F12C: nop

    // 0x8022F130: j           L_8022F158
    // 0x8022F134: subu        $a2, $v0, $a2
    ctx->r6 = SUB32(ctx->r2, ctx->r6);
        goto L_8022F158;
    // 0x8022F134: subu        $a2, $v0, $a2
    ctx->r6 = SUB32(ctx->r2, ctx->r6);
L_8022F138:
    // 0x8022F138: lb          $v1, 0xE($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XE);
    // 0x8022F13C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022F140: beq         $v1, $v0, L_8022F174
    if (ctx->r3 == ctx->r2) {
        // 0x8022F144: addu        $a2, $v1, $zero
        ctx->r6 = ADD32(ctx->r3, 0);
            goto L_8022F174;
    }
    // 0x8022F144: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    // 0x8022F148: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8022F14C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022F150: andi        $a2, $a2, 0xFF
    ctx->r6 = ctx->r6 & 0XFF;
    // 0x8022F154: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
L_8022F158:
    // 0x8022F158: jal         0x80069754
    // 0x8022F15C: nop

    func_80069754_44B54(rdram, ctx);
        goto after_3;
    // 0x8022F15C: nop

    after_3:
    // 0x8022F160: lb          $a0, 0xC($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XC);
    // 0x8022F164: jal         0x8006036C
    // 0x8022F168: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    func_8006036C_3B76C(rdram, ctx);
        goto after_4;
    // 0x8022F168: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    after_4:
    // 0x8022F16C: j           L_8022F188
    // 0x8022F170: nop

        goto L_8022F188;
    // 0x8022F170: nop

L_8022F174:
    // 0x8022F174: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_8022F178:
    // 0x8022F178: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022F17C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022F180: jal         0x80069754
    // 0x8022F184: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80069754_44B54(rdram, ctx);
        goto after_5;
    // 0x8022F184: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_5:
L_8022F188:
    // 0x8022F188: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x8022F18C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022F190: j           L_8022F1D4
    // 0x8022F194: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
        goto L_8022F1D4;
    // 0x8022F194: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_8022F198:
    // 0x8022F198: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022F19C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022F1A0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022F1A4: bne         $v0, $zero, L_8022F1D4
    if (ctx->r2 != 0) {
        // 0x8022F1A8: nop
    
            goto L_8022F1D4;
    }
    // 0x8022F1A8: nop

    // 0x8022F1AC: jal         0x80070050
    // 0x8022F1B0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_80070050_4B450(rdram, ctx);
        goto after_6;
    // 0x8022F1B0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_6:
    // 0x8022F1B4: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x8022F1B8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022F1BC: sw          $zero, 0x4B34($at)
    MEM_W(0X4B34, ctx->r1) = 0;
    // 0x8022F1C0: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022F1C4: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x8022F1C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F1CC: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x8022F1D0: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
L_8022F1D4:
    // 0x8022F1D4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8022F1D8: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8022F1DC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022F1E0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022F1E4: jr          $ra
    // 0x8022F1E8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022F1E8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
