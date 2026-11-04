#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80231B10_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231B10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231B14: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231B18: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80231B1C: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80231B20: lh          $a0, 0x7490($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X7490);
    // 0x80231B24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80231B28: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80231B2C: jal         0x8004FA7C
    // 0x80231B30: lh          $a2, 0x64($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X64);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x80231B30: lh          $a2, 0x64($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X64);
    after_0:
    // 0x80231B34: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80231B38: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80231B3C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80231B40: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80231B44: bne         $v0, $zero, L_80231C78
    if (ctx->r2 != 0) {
        // 0x80231B48: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_80231C78;
    }
    // 0x80231B48: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80231B4C: jal         0x8003516C
    // 0x80231B50: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_1;
    // 0x80231B50: nop

    after_1:
    // 0x80231B54: bne         $v0, $zero, L_80231C78
    if (ctx->r2 != 0) {
        // 0x80231B58: nop
    
            goto L_80231C78;
    }
    // 0x80231B58: nop

    // 0x80231B5C: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80231B60: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x80231B64: beq         $v0, $zero, L_80231BB8
    if (ctx->r2 == 0) {
        // 0x80231B68: nop
    
            goto L_80231BB8;
    }
    // 0x80231B68: nop

    // 0x80231B6C: jal         0x802322E4
    // 0x80231B70: nop

    func_802322E4_ovl5(rdram, ctx);
        goto after_2;
    // 0x80231B70: nop

    after_2:
    // 0x80231B74: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80231B78: beq         $v0, $zero, L_80231B90
    if (ctx->r2 == 0) {
        // 0x80231B7C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80231B90;
    }
    // 0x80231B7C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80231B80: jal         0x800616FC
    // 0x80231B84: addiu       $a1, $zero, 0x48
    ctx->r5 = ADD32(0, 0X48);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_3;
    // 0x80231B84: addiu       $a1, $zero, 0x48
    ctx->r5 = ADD32(0, 0X48);
    after_3:
    // 0x80231B88: j           L_80231C40
    // 0x80231B8C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
        goto L_80231C40;
    // 0x80231B8C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_80231B90:
    // 0x80231B90: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80231B94: lh          $v0, 0x5CF4($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X5CF4);
    // 0x80231B98: bne         $v0, $zero, L_80231BA8
    if (ctx->r2 != 0) {
        // 0x80231B9C: addiu       $a1, $zero, 0x7D
        ctx->r5 = ADD32(0, 0X7D);
            goto L_80231BA8;
    }
    // 0x80231B9C: addiu       $a1, $zero, 0x7D
    ctx->r5 = ADD32(0, 0X7D);
    // 0x80231BA0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80231BA4: addiu       $a1, $zero, 0x7C
    ctx->r5 = ADD32(0, 0X7C);
L_80231BA8:
    // 0x80231BA8: jal         0x800616FC
    // 0x80231BAC: nop

    func_800616FC_3CAFC(rdram, ctx);
        goto after_4;
    // 0x80231BAC: nop

    after_4:
    // 0x80231BB0: j           L_80231C40
    // 0x80231BB4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
        goto L_80231C40;
    // 0x80231BB4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_80231BB8:
    // 0x80231BB8: jal         0x802322E4
    // 0x80231BBC: nop

    func_802322E4_ovl5(rdram, ctx);
        goto after_5;
    // 0x80231BBC: nop

    after_5:
    // 0x80231BC0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80231BC4: beq         $v0, $zero, L_80231C08
    if (ctx->r2 == 0) {
        // 0x80231BC8: nop
    
            goto L_80231C08;
    }
    // 0x80231BC8: nop

    // 0x80231BCC: jal         0x8006033C
    // 0x80231BD0: addiu       $a0, $zero, 0x232
    ctx->r4 = ADD32(0, 0X232);
    func_8006033C_3B73C(rdram, ctx);
        goto after_6;
    // 0x80231BD0: addiu       $a0, $zero, 0x232
    ctx->r4 = ADD32(0, 0X232);
    after_6:
    // 0x80231BD4: beq         $v0, $zero, L_80231BF4
    if (ctx->r2 == 0) {
        // 0x80231BD8: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80231BF4;
    }
    // 0x80231BD8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80231BDC: jal         0x8006033C
    // 0x80231BE0: addiu       $a0, $zero, 0x233
    ctx->r4 = ADD32(0, 0X233);
    func_8006033C_3B73C(rdram, ctx);
        goto after_7;
    // 0x80231BE0: addiu       $a0, $zero, 0x233
    ctx->r4 = ADD32(0, 0X233);
    after_7:
    // 0x80231BE4: bne         $v0, $zero, L_80231BF4
    if (ctx->r2 != 0) {
        // 0x80231BE8: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80231BF4;
    }
    // 0x80231BE8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80231BEC: j           L_80231BF8
    // 0x80231BF0: addiu       $a1, $zero, 0x66
    ctx->r5 = ADD32(0, 0X66);
        goto L_80231BF8;
    // 0x80231BF0: addiu       $a1, $zero, 0x66
    ctx->r5 = ADD32(0, 0X66);
L_80231BF4:
    // 0x80231BF4: addiu       $a1, $zero, 0x65
    ctx->r5 = ADD32(0, 0X65);
L_80231BF8:
    // 0x80231BF8: jal         0x800616FC
    // 0x80231BFC: nop

    func_800616FC_3CAFC(rdram, ctx);
        goto after_8;
    // 0x80231BFC: nop

    after_8:
    // 0x80231C00: j           L_80231C44
    // 0x80231C04: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
        goto L_80231C44;
    // 0x80231C04: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_80231C08:
    // 0x80231C08: jal         0x8006033C
    // 0x80231C0C: addiu       $a0, $zero, 0x232
    ctx->r4 = ADD32(0, 0X232);
    func_8006033C_3B73C(rdram, ctx);
        goto after_9;
    // 0x80231C0C: addiu       $a0, $zero, 0x232
    ctx->r4 = ADD32(0, 0X232);
    after_9:
    // 0x80231C10: beq         $v0, $zero, L_80231C30
    if (ctx->r2 == 0) {
        // 0x80231C14: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80231C30;
    }
    // 0x80231C14: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80231C18: jal         0x8006033C
    // 0x80231C1C: addiu       $a0, $zero, 0x233
    ctx->r4 = ADD32(0, 0X233);
    func_8006033C_3B73C(rdram, ctx);
        goto after_10;
    // 0x80231C1C: addiu       $a0, $zero, 0x233
    ctx->r4 = ADD32(0, 0X233);
    after_10:
    // 0x80231C20: bne         $v0, $zero, L_80231C30
    if (ctx->r2 != 0) {
        // 0x80231C24: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80231C30;
    }
    // 0x80231C24: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80231C28: j           L_80231C34
    // 0x80231C2C: addiu       $a1, $zero, 0x61
    ctx->r5 = ADD32(0, 0X61);
        goto L_80231C34;
    // 0x80231C2C: addiu       $a1, $zero, 0x61
    ctx->r5 = ADD32(0, 0X61);
L_80231C30:
    // 0x80231C30: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
L_80231C34:
    // 0x80231C34: jal         0x800616FC
    // 0x80231C38: nop

    func_800616FC_3CAFC(rdram, ctx);
        goto after_11;
    // 0x80231C38: nop

    after_11:
    // 0x80231C3C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_80231C40:
    // 0x80231C40: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80231C44:
    // 0x80231C44: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80231C48: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80231C4C: jal         0x80050294
    // 0x80231C50: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_12;
    // 0x80231C50: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_12:
    // 0x80231C54: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80231C58: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x80231C5C: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
    // 0x80231C60: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80231C64: sb          $v1, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r3;
    // 0x80231C68: sb          $v1, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r3;
    // 0x80231C6C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231C70: j           L_80231C80
    // 0x80231C74: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_80231C80;
    // 0x80231C74: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80231C78:
    // 0x80231C78: jal         0x8005044C
    // 0x80231C7C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_13;
    // 0x80231C7C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_13:
L_80231C80:
    // 0x80231C80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80231C84: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231C88: jr          $ra
    // 0x80231C8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80231C8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229CF0_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229CF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229CF4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229CF8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229CFC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80229D00: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x80229D04: addiu       $v0, $zero, 0x1F
    ctx->r2 = ADD32(0, 0X1F);
    // 0x80229D08: bne         $v1, $v0, L_80229D30
    if (ctx->r3 != ctx->r2) {
        // 0x80229D0C: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_80229D30;
    }
    // 0x80229D0C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80229D10: lw          $v1, 0x28($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X28);
    // 0x80229D14: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80229D18: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
    // 0x80229D1C: lw          $v1, 0x28($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X28);
    // 0x80229D20: addiu       $a1, $zero, 0x37
    ctx->r5 = ADD32(0, 0X37);
    // 0x80229D24: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229D28: jal         0x800616FC
    // 0x80229D2C: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
    func_800616FC_3CAFC(rdram, ctx);
        goto after_0;
    // 0x80229D2C: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
    after_0:
L_80229D30:
    // 0x80229D30: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x80229D34: slti        $v0, $v0, 0x33
    ctx->r2 = SIGNED(ctx->r2) < 0X33 ? 1 : 0;
    // 0x80229D38: bne         $v0, $zero, L_80229D5C
    if (ctx->r2 != 0) {
        // 0x80229D3C: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_80229D5C;
    }
    // 0x80229D3C: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80229D40: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80229D44: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80229D48: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80229D4C: bne         $v0, $zero, L_80229D5C
    if (ctx->r2 != 0) {
        // 0x80229D50: nop
    
            goto L_80229D5C;
    }
    // 0x80229D50: nop

    // 0x80229D54: jal         0x800600F8
    // 0x80229D58: nop

    func_800600F8_3B4F8(rdram, ctx);
        goto after_1;
    // 0x80229D58: nop

    after_1:
L_80229D5C:
    // 0x80229D5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80229D60: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229D64: jr          $ra
    // 0x80229D68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229D68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80235E58_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235E58: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80235E5C: lw          $v0, 0x4B34($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4B34);
    // 0x80235E60: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80235E64: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80235E68: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80235E6C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80235E70: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80235E74: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x80235E78: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80235E7C: bne         $v0, $s2, L_80235F24
    if (ctx->r2 != ctx->r18) {
        // 0x80235E80: sw          $s0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r16;
            goto L_80235F24;
    }
    // 0x80235E80: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80235E84: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80235E88: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80235E8C: lbu         $v1, 0x4A6D($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X4A6D);
    // 0x80235E90: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80235E94: sw          $zero, 0x4B34($at)
    MEM_W(0X4B34, ctx->r1) = 0;
    // 0x80235E98: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80235E9C: ori         $v1, $v1, 0x80
    ctx->r3 = ctx->r3 | 0X80;
    // 0x80235EA0: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x80235EA4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80235EA8: sb          $v1, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r3;
    // 0x80235EAC: lh          $v0, 0x180($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X180);
    // 0x80235EB0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80235EB4: lh          $v0, 0x182($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X182);
    // 0x80235EB8: addiu       $s0, $s2, 0x14
    ctx->r16 = ADD32(ctx->r18, 0X14);
    // 0x80235EBC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80235EC0: addiu       $v0, $v0, -0x20
    ctx->r2 = ADD32(ctx->r2, -0X20);
    // 0x80235EC4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80235EC8: lh          $v0, 0x184($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X184);
    // 0x80235ECC: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
    // 0x80235ED0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80235ED4: jal         0x8004EC38
    // 0x80235ED8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_8004EC38_2A038(rdram, ctx);
        goto after_0;
    // 0x80235ED8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_0:
    // 0x80235EDC: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80235EE0: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x80235EE4: lw          $a3, 0x435C($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X435C);
    // 0x80235EE8: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x80235EEC: jal         0x80034FCC
    // 0x80235EF0: addiu       $a2, $v0, 0x800
    ctx->r6 = ADD32(ctx->r2, 0X800);
    func_80034FCC_103CC(rdram, ctx);
        goto after_1;
    // 0x80235EF0: addiu       $a2, $v0, 0x800
    ctx->r6 = ADD32(ctx->r2, 0X800);
    after_1:
    // 0x80235EF4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80235EF8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80235EFC: jal         0x80050294
    // 0x80235F00: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x80235F00: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x80235F04: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235F08: jal         0x8004EC38
    // 0x80235F0C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8004EC38_2A038(rdram, ctx);
        goto after_3;
    // 0x80235F0C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_3:
    // 0x80235F10: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80235F14: sh          $v0, 0x74D0($at)
    MEM_H(0X74D0, ctx->r1) = ctx->r2;
    // 0x80235F18: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80235F1C: j           L_80235F50
    // 0x80235F20: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
        goto L_80235F50;
    // 0x80235F20: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
L_80235F24:
    // 0x80235F24: lb          $v0, 0xD($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XD);
    // 0x80235F28: bne         $v0, $zero, L_80235F40
    if (ctx->r2 != 0) {
        // 0x80235F2C: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_80235F40;
    }
    // 0x80235F2C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80235F30: jal         0x8005044C
    // 0x80235F34: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_4;
    // 0x80235F34: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_4:
    // 0x80235F38: j           L_80235F50
    // 0x80235F3C: nop

        goto L_80235F50;
    // 0x80235F3C: nop

L_80235F40:
    // 0x80235F40: lb          $a1, 0xE($s2)
    ctx->r5 = MEM_B(ctx->r18, 0XE);
    // 0x80235F44: jal         0x80050294
    // 0x80235F48: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x80235F48: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x80235F4C: sb          $zero, 0xD($s2)
    MEM_B(0XD, ctx->r18) = 0;
L_80235F50:
    // 0x80235F50: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80235F54: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80235F58: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80235F5C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80235F60: jr          $ra
    // 0x80235F64: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80235F64: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_802345AC_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802345AC: lhu         $v0, 0x32C($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X32C);
    // 0x802345B0: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x802345B4: jr          $ra
    // 0x802345B8: sh          $v0, 0x32C($a0)
    MEM_H(0X32C, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x802345B8: sh          $v0, 0x32C($a0)
    MEM_H(0X32C, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_8022A0D8_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A0D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A0DC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A0E0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A0E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022A0E8: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x8022A0EC: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022A0F0: bne         $v1, $v0, L_8022A120
    if (ctx->r3 != ctx->r2) {
        // 0x8022A0F4: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8022A120;
    }
    // 0x8022A0F4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022A0F8: lw          $v0, 0x30($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X30);
    // 0x8022A0FC: sb          $v1, 0xE($v0)
    MEM_B(0XE, ctx->r2) = ctx->r3;
    // 0x8022A100: lw          $v0, 0x30($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X30);
    // 0x8022A104: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022A108: sb          $v1, 0xD($v0)
    MEM_B(0XD, ctx->r2) = ctx->r3;
    // 0x8022A10C: lw          $v1, 0x30($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X30);
    // 0x8022A110: addiu       $a1, $zero, 0x3D
    ctx->r5 = ADD32(0, 0X3D);
    // 0x8022A114: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x8022A118: jal         0x800616FC
    // 0x8022A11C: sh          $v0, 0x44($v1)
    MEM_H(0X44, ctx->r3) = ctx->r2;
    func_800616FC_3CAFC(rdram, ctx);
        goto after_0;
    // 0x8022A11C: sh          $v0, 0x44($v1)
    MEM_H(0X44, ctx->r3) = ctx->r2;
    after_0:
L_8022A120:
    // 0x8022A120: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x8022A124: slti        $v0, $v0, 0x56
    ctx->r2 = SIGNED(ctx->r2) < 0X56 ? 1 : 0;
    // 0x8022A128: bne         $v0, $zero, L_8022A14C
    if (ctx->r2 != 0) {
        // 0x8022A12C: nop
    
            goto L_8022A14C;
    }
    // 0x8022A12C: nop

    // 0x8022A130: lw          $v0, 0x30($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X30);
    // 0x8022A134: sb          $zero, 0xE($v0)
    MEM_B(0XE, ctx->r2) = 0;
    // 0x8022A138: lw          $v1, 0x30($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X30);
    // 0x8022A13C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A140: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
    // 0x8022A144: lw          $v0, 0x30($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X30);
    // 0x8022A148: sh          $zero, 0x44($v0)
    MEM_H(0X44, ctx->r2) = 0;
L_8022A14C:
    // 0x8022A14C: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x8022A150: slti        $v0, $v0, 0x57
    ctx->r2 = SIGNED(ctx->r2) < 0X57 ? 1 : 0;
    // 0x8022A154: bne         $v0, $zero, L_8022A178
    if (ctx->r2 != 0) {
        // 0x8022A158: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_8022A178;
    }
    // 0x8022A158: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022A15C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022A160: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022A164: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022A168: bne         $v0, $zero, L_8022A178
    if (ctx->r2 != 0) {
        // 0x8022A16C: nop
    
            goto L_8022A178;
    }
    // 0x8022A16C: nop

    // 0x8022A170: jal         0x800600F8
    // 0x8022A174: nop

    func_800600F8_3B4F8(rdram, ctx);
        goto after_1;
    // 0x8022A174: nop

    after_1:
L_8022A178:
    // 0x8022A178: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022A17C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A180: jr          $ra
    // 0x8022A184: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A184: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023C94C_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023C94C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8023C950: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8023C954: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8023C958: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8023C95C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8023C960: lhu         $v0, 0x14($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X14);
    // 0x8023C964: addiu       $t0, $a0, 0xD0
    ctx->r8 = ADD32(ctx->r4, 0XD0);
    // 0x8023C968: lbu         $s1, 0xDD($a0)
    ctx->r17 = MEM_BU(ctx->r4, 0XDD);
    // 0x8023C96C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023C970: sra         $a2, $v0, 25
    ctx->r6 = S32(SIGNED(ctx->r2) >> 25);
    // 0x8023C974: addu        $v1, $s1, $zero
    ctx->r3 = ADD32(ctx->r17, 0);
    // 0x8023C978: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023C97C: bne         $v1, $v0, L_8023C990
    if (ctx->r3 != ctx->r2) {
        // 0x8023C980: addiu       $a3, $a2, 0x40
        ctx->r7 = ADD32(ctx->r6, 0X40);
            goto L_8023C990;
    }
    // 0x8023C980: addiu       $a3, $a2, 0x40
    ctx->r7 = ADD32(ctx->r6, 0X40);
    // 0x8023C984: addiu       $v0, $a2, 0x41
    ctx->r2 = ADD32(ctx->r6, 0X41);
    // 0x8023C988: j           L_8023C994
    // 0x8023C98C: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
        goto L_8023C994;
    // 0x8023C98C: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
L_8023C990:
    // 0x8023C990: sh          $a3, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r7;
L_8023C994:
    // 0x8023C994: lhu         $v0, 0x18($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X18);
    // 0x8023C998: addu        $v1, $s1, $zero
    ctx->r3 = ADD32(ctx->r17, 0);
    // 0x8023C99C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023C9A0: sra         $a0, $v0, 25
    ctx->r4 = S32(SIGNED(ctx->r2) >> 25);
    // 0x8023C9A4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023C9A8: bne         $v1, $v0, L_8023C9BC
    if (ctx->r3 != ctx->r2) {
        // 0x8023C9AC: addiu       $a2, $a0, 0x40
        ctx->r6 = ADD32(ctx->r4, 0X40);
            goto L_8023C9BC;
    }
    // 0x8023C9AC: addiu       $a2, $a0, 0x40
    ctx->r6 = ADD32(ctx->r4, 0X40);
    // 0x8023C9B0: addiu       $v0, $a0, 0x41
    ctx->r2 = ADD32(ctx->r4, 0X41);
    // 0x8023C9B4: j           L_8023C9C0
    // 0x8023C9B8: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
        goto L_8023C9C0;
    // 0x8023C9B8: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
L_8023C9BC:
    // 0x8023C9BC: sh          $a2, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r6;
L_8023C9C0:
    // 0x8023C9C0: lhu         $v0, 0x14($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X14);
    // 0x8023C9C4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023C9C8: sra         $v0, $v0, 25
    ctx->r2 = S32(SIGNED(ctx->r2) >> 25);
    // 0x8023C9CC: addiu       $v0, $v0, 0x40
    ctx->r2 = ADD32(ctx->r2, 0X40);
    // 0x8023C9D0: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x8023C9D4: lhu         $v0, 0x18($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X18);
    // 0x8023C9D8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023C9DC: sra         $v0, $v0, 25
    ctx->r2 = S32(SIGNED(ctx->r2) >> 25);
    // 0x8023C9E0: addiu       $v0, $v0, 0x40
    ctx->r2 = ADD32(ctx->r2, 0X40);
    // 0x8023C9E4: sh          $v0, 0x16($sp)
    MEM_H(0X16, ctx->r29) = ctx->r2;
    // 0x8023C9E8: lbu         $v0, 0xE($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0XE);
    // 0x8023C9EC: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x8023C9F0: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8023C9F4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023C9F8: lbu         $s0, 0x3($v0)
    ctx->r16 = MEM_BU(ctx->r2, 0X3);
    // 0x8023C9FC: andi        $v0, $s0, 0x1
    ctx->r2 = ctx->r16 & 0X1;
    // 0x8023CA00: beq         $v0, $zero, L_8023CA28
    if (ctx->r2 == 0) {
        // 0x8023CA04: addiu       $s2, $zero, 0x1
        ctx->r18 = ADD32(0, 0X1);
            goto L_8023CA28;
    }
    // 0x8023CA04: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x8023CA08: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8023CA0C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023CA10: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8023CA14: jal         0x8023CB70
    // 0x8023CA18: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    func_8023CB70_ovl5(rdram, ctx);
        goto after_0;
    // 0x8023CA18: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_0:
    // 0x8023CA1C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023CA20: beql        $v0, $zero, L_8023CB54
    if (ctx->r2 == 0) {
        // 0x8023CA24: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_8023CB54;
    }
    goto skip_0;
    // 0x8023CA24: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    skip_0:
L_8023CA28:
    // 0x8023CA28: andi        $v0, $s0, 0x10
    ctx->r2 = ctx->r16 & 0X10;
    // 0x8023CA2C: beq         $v0, $zero, L_8023CA54
    if (ctx->r2 == 0) {
        // 0x8023CA30: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_8023CA54;
    }
    // 0x8023CA30: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8023CA34: addiu       $a1, $s1, 0x2
    ctx->r5 = ADD32(ctx->r17, 0X2);
    // 0x8023CA38: andi        $a1, $a1, 0x3
    ctx->r5 = ctx->r5 & 0X3;
    // 0x8023CA3C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x8023CA40: jal         0x8023CB70
    // 0x8023CA44: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    func_8023CB70_ovl5(rdram, ctx);
        goto after_1;
    // 0x8023CA44: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_1:
    // 0x8023CA48: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023CA4C: beql        $v0, $zero, L_8023CB54
    if (ctx->r2 == 0) {
        // 0x8023CA50: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_8023CB54;
    }
    goto skip_1;
    // 0x8023CA50: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    skip_1:
L_8023CA54:
    // 0x8023CA54: andi        $v0, $s0, 0x2
    ctx->r2 = ctx->r16 & 0X2;
    // 0x8023CA58: beq         $v0, $zero, L_8023CA7C
    if (ctx->r2 == 0) {
        // 0x8023CA5C: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_8023CA7C;
    }
    // 0x8023CA5C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8023CA60: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023CA64: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x8023CA68: jal         0x8023CB70
    // 0x8023CA6C: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    func_8023CB70_ovl5(rdram, ctx);
        goto after_2;
    // 0x8023CA6C: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_2:
    // 0x8023CA70: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023CA74: beql        $v0, $zero, L_8023CB54
    if (ctx->r2 == 0) {
        // 0x8023CA78: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_8023CB54;
    }
    goto skip_2;
    // 0x8023CA78: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    skip_2:
L_8023CA7C:
    // 0x8023CA7C: andi        $v0, $s0, 0x20
    ctx->r2 = ctx->r16 & 0X20;
    // 0x8023CA80: beq         $v0, $zero, L_8023CAA8
    if (ctx->r2 == 0) {
        // 0x8023CA84: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_8023CAA8;
    }
    // 0x8023CA84: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8023CA88: addiu       $a1, $s1, 0x2
    ctx->r5 = ADD32(ctx->r17, 0X2);
    // 0x8023CA8C: andi        $a1, $a1, 0x3
    ctx->r5 = ctx->r5 & 0X3;
    // 0x8023CA90: addiu       $a2, $zero, -0x2
    ctx->r6 = ADD32(0, -0X2);
    // 0x8023CA94: jal         0x8023CB70
    // 0x8023CA98: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    func_8023CB70_ovl5(rdram, ctx);
        goto after_3;
    // 0x8023CA98: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_3:
    // 0x8023CA9C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023CAA0: beql        $v0, $zero, L_8023CB54
    if (ctx->r2 == 0) {
        // 0x8023CAA4: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_8023CB54;
    }
    goto skip_3;
    // 0x8023CAA4: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    skip_3:
L_8023CAA8:
    // 0x8023CAA8: andi        $v0, $s0, 0x4
    ctx->r2 = ctx->r16 & 0X4;
    // 0x8023CAAC: beq         $v0, $zero, L_8023CAD0
    if (ctx->r2 == 0) {
        // 0x8023CAB0: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_8023CAD0;
    }
    // 0x8023CAB0: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8023CAB4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023CAB8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x8023CABC: jal         0x8023CB70
    // 0x8023CAC0: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    func_8023CB70_ovl5(rdram, ctx);
        goto after_4;
    // 0x8023CAC0: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_4:
    // 0x8023CAC4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023CAC8: beql        $v0, $zero, L_8023CB54
    if (ctx->r2 == 0) {
        // 0x8023CACC: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_8023CB54;
    }
    goto skip_4;
    // 0x8023CACC: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    skip_4:
L_8023CAD0:
    // 0x8023CAD0: andi        $v0, $s0, 0x40
    ctx->r2 = ctx->r16 & 0X40;
    // 0x8023CAD4: beq         $v0, $zero, L_8023CAFC
    if (ctx->r2 == 0) {
        // 0x8023CAD8: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_8023CAFC;
    }
    // 0x8023CAD8: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8023CADC: addiu       $a1, $s1, 0x2
    ctx->r5 = ADD32(ctx->r17, 0X2);
    // 0x8023CAE0: andi        $a1, $a1, 0x3
    ctx->r5 = ctx->r5 & 0X3;
    // 0x8023CAE4: addiu       $a2, $zero, -0x3
    ctx->r6 = ADD32(0, -0X3);
    // 0x8023CAE8: jal         0x8023CB70
    // 0x8023CAEC: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    func_8023CB70_ovl5(rdram, ctx);
        goto after_5;
    // 0x8023CAEC: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_5:
    // 0x8023CAF0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023CAF4: beql        $v0, $zero, L_8023CB54
    if (ctx->r2 == 0) {
        // 0x8023CAF8: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_8023CB54;
    }
    goto skip_5;
    // 0x8023CAF8: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    skip_5:
L_8023CAFC:
    // 0x8023CAFC: andi        $v0, $s0, 0x8
    ctx->r2 = ctx->r16 & 0X8;
    // 0x8023CB00: beq         $v0, $zero, L_8023CB28
    if (ctx->r2 == 0) {
        // 0x8023CB04: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_8023CB28;
    }
    // 0x8023CB04: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8023CB08: addiu       $a1, $s1, 0x3
    ctx->r5 = ADD32(ctx->r17, 0X3);
    // 0x8023CB0C: andi        $a1, $a1, 0x3
    ctx->r5 = ctx->r5 & 0X3;
    // 0x8023CB10: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x8023CB14: jal         0x8023CB70
    // 0x8023CB18: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    func_8023CB70_ovl5(rdram, ctx);
        goto after_6;
    // 0x8023CB18: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_6:
    // 0x8023CB1C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023CB20: beql        $v0, $zero, L_8023CB54
    if (ctx->r2 == 0) {
        // 0x8023CB24: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_8023CB54;
    }
    goto skip_6;
    // 0x8023CB24: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    skip_6:
L_8023CB28:
    // 0x8023CB28: andi        $v0, $s0, 0x80
    ctx->r2 = ctx->r16 & 0X80;
    // 0x8023CB2C: beq         $v0, $zero, L_8023CB54
    if (ctx->r2 == 0) {
        // 0x8023CB30: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_8023CB54;
    }
    // 0x8023CB30: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8023CB34: addiu       $a1, $s1, 0x3
    ctx->r5 = ADD32(ctx->r17, 0X3);
    // 0x8023CB38: andi        $a1, $a1, 0x3
    ctx->r5 = ctx->r5 & 0X3;
    // 0x8023CB3C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023CB40: jal         0x8023CB70
    // 0x8023CB44: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8023CB70_ovl5(rdram, ctx);
        goto after_7;
    // 0x8023CB44: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_7:
    // 0x8023CB48: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023CB4C: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x8023CB50: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
L_8023CB54:
    // 0x8023CB54: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x8023CB58: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8023CB5C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8023CB60: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8023CB64: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023CB68: jr          $ra
    // 0x8023CB6C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8023CB6C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8023637C_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023637C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80236380: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80236384: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80236388: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023638C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80236390: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80236394: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80236398: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x8023639C: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x802363A0: beq         $v0, $zero, L_802364A4
    if (ctx->r2 == 0) {
        // 0x802363A4: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_802364A4;
    }
    // 0x802363A4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802363A8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802363AC: addu        $at, $at, $v0
    gpr jr_addend_802363B4 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802363B0: lw          $v0, 0x7308($at)
    ctx->r2 = ADD32(ctx->r1, 0X7308);
    // 0x802363B4: jr          $v0
    // 0x802363B8: nop

    switch (jr_addend_802363B4 >> 2) {
        case 0: goto L_802363BC; break;
        case 1: goto L_802363D0; break;
        case 2: goto L_802363EC; break;
        case 3: goto L_80236448; break;
        case 4: goto L_80236474; break;
        default: switch_error(__func__, 0x802363B4, 0x80247308);
    }
    // 0x802363B8: nop

L_802363BC:
    // 0x802363BC: jal         0x802364CC
    // 0x802363C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802364CC_ovl5(rdram, ctx);
        goto after_0;
    // 0x802363C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x802363C4: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802363C8: j           L_802364A0
    // 0x802363CC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_802364A0;
    // 0x802363CC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_802363D0:
    // 0x802363D0: jal         0x80236554
    // 0x802363D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80236554_ovl5(rdram, ctx);
        goto after_1;
    // 0x802363D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802363D8: beq         $v0, $zero, L_802364A8
    if (ctx->r2 == 0) {
        // 0x802363DC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802364A8;
    }
    // 0x802363DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802363E0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802363E4: j           L_802364A0
    // 0x802363E8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_802364A0;
    // 0x802363E8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_802363EC:
    // 0x802363EC: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802363F0: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x802363F4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802363F8: jal         0x8004F820
    // 0x802363FC: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x802363FC: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_2:
    // 0x80236400: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80236404: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80236408: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8023640C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80236410: bne         $v0, $zero, L_802364A4
    if (ctx->r2 != 0) {
        // 0x80236414: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_802364A4;
    }
    // 0x80236414: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80236418: jal         0x8003516C
    // 0x8023641C: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_3;
    // 0x8023641C: nop

    after_3:
    // 0x80236420: bne         $v0, $zero, L_802364A8
    if (ctx->r2 != 0) {
        // 0x80236424: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802364A8;
    }
    // 0x80236424: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236428: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8023642C: jal         0x800616FC
    // 0x80236430: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_4;
    // 0x80236430: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    after_4:
    // 0x80236434: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80236438: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x8023643C: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x80236440: j           L_802364A0
    // 0x80236444: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_802364A0;
    // 0x80236444: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80236448:
    // 0x80236448: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8023644C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80236450: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80236454: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80236458: bne         $v0, $zero, L_802364A8
    if (ctx->r2 != 0) {
        // 0x8023645C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802364A8;
    }
    // 0x8023645C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236460: jal         0x80034E3C
    // 0x80236464: nop

    func_80034E3C_1023C(rdram, ctx);
        goto after_5;
    // 0x80236464: nop

    after_5:
    // 0x80236468: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8023646C: j           L_802364A0
    // 0x80236470: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_802364A0;
    // 0x80236470: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80236474:
    // 0x80236474: jal         0x8003516C
    // 0x80236478: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_6;
    // 0x80236478: nop

    after_6:
    // 0x8023647C: bne         $v0, $zero, L_802364A8
    if (ctx->r2 != 0) {
        // 0x80236480: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802364A8;
    }
    // 0x80236480: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236484: lbu         $v0, 0xBD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XBD);
    // 0x80236488: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x8023648C: andi        $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 & 0X7F;
    // 0x80236490: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80236494: sb          $v0, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r2;
    // 0x80236498: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023649C: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
L_802364A0:
    // 0x802364A0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_802364A4:
    // 0x802364A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_802364A8:
    // 0x802364A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802364AC: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x802364B0: jal         0x80047284
    // 0x802364B4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_7;
    // 0x802364B4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_7:
    // 0x802364B8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802364BC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802364C0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802364C4: jr          $ra
    // 0x802364C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802364C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802412E0_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802412E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802412E4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802412E8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x802412EC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802412F0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802412F4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802412F8: lw          $v0, 0x6E50($at)
    ctx->r2 = MEM_W(ctx->r1, 0X6E50);
    // 0x802412FC: jalr        $v0
    // 0x80241300: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80241300: nop

    after_0:
    // 0x80241304: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80241308: jr          $ra
    // 0x8024130C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8024130C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225EB8_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225EB8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80225EBC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80225EC0: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80225EC4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80225EC8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80225ECC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225ED0: lbu         $v1, 0x5($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X5);
    // 0x80225ED4: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80225ED8: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x80225EDC: beq         $v1, $zero, L_80225EF4
    if (ctx->r3 == 0) {
        // 0x80225EE0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80225EF4;
    }
    // 0x80225EE0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225EE4: beq         $v1, $v0, L_80225F68
    if (ctx->r3 == ctx->r2) {
        // 0x80225EE8: nop
    
            goto L_80225F68;
    }
    // 0x80225EE8: nop

    // 0x80225EEC: j           L_80225FF0
    // 0x80225EF0: nop

        goto L_80225FF0;
    // 0x80225EF0: nop

L_80225EF4:
    // 0x80225EF4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80225EF8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80225EFC: jal         0x8005F6B4
    // 0x80225F00: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_0;
    // 0x80225F00: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80225F04: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80225F08: lw          $v0, 0x32F8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X32F8);
    // 0x80225F0C: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x80225F10: addiu       $s0, $s0, 0x3180
    ctx->r16 = ADD32(ctx->r16, 0X3180);
    // 0x80225F14: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80225F18: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80225F1C: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x80225F20: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80225F24: addiu       $v0, $v0, 0x31A8
    ctx->r2 = ADD32(ctx->r2, 0X31A8);
    // 0x80225F28: jal         0x8005FA7C
    // 0x80225F2C: sw          $v0, 0xA4($s2)
    MEM_W(0XA4, ctx->r18) = ctx->r2;
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_1;
    // 0x80225F2C: sw          $v0, 0xA4($s2)
    MEM_W(0XA4, ctx->r18) = ctx->r2;
    after_1:
    // 0x80225F30: jal         0x8005FA7C
    // 0x80225F34: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_2;
    // 0x80225F34: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_2:
    // 0x80225F38: lw          $v0, 0x24($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X24);
    // 0x80225F3C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80225F40: sw          $v0, 0x7940($at)
    MEM_W(0X7940, ctx->r1) = ctx->r2;
    // 0x80225F44: lw          $v0, 0x28($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X28);
    // 0x80225F48: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80225F4C: sw          $v0, 0x7944($at)
    MEM_W(0X7944, ctx->r1) = ctx->r2;
    // 0x80225F50: lbu         $v0, 0x5($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X5);
    // 0x80225F54: sb          $zero, 0xA($s2)
    MEM_B(0XA, ctx->r18) = 0;
    // 0x80225F58: sb          $zero, 0xB($s2)
    MEM_B(0XB, ctx->r18) = 0;
    // 0x80225F5C: sw          $zero, 0xC($s2)
    MEM_W(0XC, ctx->r18) = 0;
    // 0x80225F60: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225F64: sb          $v0, 0x5($s2)
    MEM_B(0X5, ctx->r18) = ctx->r2;
L_80225F68:
    // 0x80225F68: jal         0x8006FF84
    // 0x80225F6C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_3;
    // 0x80225F6C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
    // 0x80225F70: beq         $v0, $zero, L_80225FF0
    if (ctx->r2 == 0) {
        // 0x80225F74: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80225FF0;
    }
    // 0x80225F74: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80225F78: lbu         $v1, 0xBD($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XBD);
    // 0x80225F7C: sh          $zero, 0x438($s1)
    MEM_H(0X438, ctx->r17) = 0;
    // 0x80225F80: lh          $a0, 0x438($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X438);
    // 0x80225F84: sh          $v0, 0x43A($s1)
    MEM_H(0X43A, ctx->r17) = ctx->r2;
    // 0x80225F88: lh          $a1, 0x43A($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X43A);
    // 0x80225F8C: addiu       $v0, $zero, -0x8C
    ctx->r2 = ADD32(0, -0X8C);
    // 0x80225F90: sh          $v0, 0x43C($s1)
    MEM_H(0X43C, ctx->r17) = ctx->r2;
    // 0x80225F94: lh          $a2, 0x43C($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X43C);
    // 0x80225F98: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80225F9C: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x80225FA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225FA4: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x80225FA8: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80225FAC: sh          $v0, 0x442($s1)
    MEM_H(0X442, ctx->r17) = ctx->r2;
    // 0x80225FB0: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80225FB4: sh          $zero, 0x440($s1)
    MEM_H(0X440, ctx->r17) = 0;
    // 0x80225FB8: sh          $zero, 0x444($s1)
    MEM_H(0X444, ctx->r17) = 0;
    // 0x80225FBC: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
    // 0x80225FC0: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
    // 0x80225FC4: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80225FC8: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x80225FCC: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x80225FD0: sb          $v1, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r3;
    // 0x80225FD4: sw          $a0, 0x428($s1)
    MEM_W(0X428, ctx->r17) = ctx->r4;
    // 0x80225FD8: sw          $a1, 0x42C($s1)
    MEM_W(0X42C, ctx->r17) = ctx->r5;
    // 0x80225FDC: sw          $a2, 0x430($s1)
    MEM_W(0X430, ctx->r17) = ctx->r6;
    // 0x80225FE0: lbu         $v0, 0x4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4);
    // 0x80225FE4: sb          $zero, 0x5($s2)
    MEM_B(0X5, ctx->r18) = 0;
    // 0x80225FE8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225FEC: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
L_80225FF0:
    // 0x80225FF0: jal         0x8005FB90
    // 0x80225FF4: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_4;
    // 0x80225FF4: nop

    after_4:
    // 0x80225FF8: jal         0x80060018
    // 0x80225FFC: nop

    func_80060018_3B418(rdram, ctx);
        goto after_5;
    // 0x80225FFC: nop

    after_5:
    // 0x80226000: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80226004: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80226008: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022600C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226010: jr          $ra
    // 0x80226014: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80226014: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80226544_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226544: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226548: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022654C: jal         0x8005FB90
    // 0x80226550: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_0;
    // 0x80226550: nop

    after_0:
    // 0x80226554: jal         0x80060018
    // 0x80226558: nop

    func_80060018_3B418(rdram, ctx);
        goto after_1;
    // 0x80226558: nop

    after_1:
    // 0x8022655C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80226560: jr          $ra
    // 0x80226564: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226564: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80226568: nop

    // 0x8022656C: nop

;}
RECOMP_FUNC void func_80230658_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230658: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x8023065C: beq         $a1, $zero, L_80230670
    if (ctx->r5 == 0) {
        // 0x80230660: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80230670;
    }
    // 0x80230660: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80230664: sb          $zero, 0xFF($a0)
    MEM_B(0XFF, ctx->r4) = 0;
    // 0x80230668: j           L_80230678
    // 0x8023066C: sb          $zero, 0x103($a0)
    MEM_B(0X103, ctx->r4) = 0;
        goto L_80230678;
    // 0x8023066C: sb          $zero, 0x103($a0)
    MEM_B(0X103, ctx->r4) = 0;
L_80230670:
    // 0x80230670: sb          $v0, 0xFF($a0)
    MEM_B(0XFF, ctx->r4) = ctx->r2;
    // 0x80230674: sb          $v0, 0x103($a0)
    MEM_B(0X103, ctx->r4) = ctx->r2;
L_80230678:
    // 0x80230678: jr          $ra
    // 0x8023067C: nop

    TRACE_RETURN()
    return;
    // 0x8023067C: nop

;}
RECOMP_FUNC void func_8022EC84_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EC84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022EC88: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022EC8C: lbu         $v0, 0x34B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34B);
    // 0x8022EC90: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022EC94: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022EC98: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022EC9C: lw          $v0, 0x5BBC($at)
    ctx->r2 = MEM_W(ctx->r1, 0X5BBC);
    // 0x8022ECA0: jalr        $v0
    // 0x8022ECA4: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022ECA4: nop

    after_0:
    // 0x8022ECA8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022ECAC: jr          $ra
    // 0x8022ECB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022ECB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80238DD4_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238DD4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80238DD8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80238DDC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80238DE0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80238DE4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80238DE8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80238DEC: bne         $v0, $zero, L_80238E1C
    if (ctx->r2 != 0) {
        // 0x80238DF0: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_80238E1C;
    }
    // 0x80238DF0: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x80238DF4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80238DF8: jal         0x80050294
    // 0x80238DFC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80238DFC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80238E00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238E04: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80238E08: jal         0x80239590
    // 0x80238E0C: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_80239590_ovl5(rdram, ctx);
        goto after_1;
    // 0x80238E0C: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_1:
    // 0x80238E10: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80238E14: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80238E18: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80238E1C:
    // 0x80238E1C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80238E20: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x80238E24: addiu       $v0, $zero, 0x23A
    ctx->r2 = ADD32(0, 0X23A);
    // 0x80238E28: bne         $v1, $v0, L_80238E3C
    if (ctx->r3 != ctx->r2) {
        // 0x80238E2C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80238E3C;
    }
    // 0x80238E2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238E30: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80238E34: jal         0x80239590
    // 0x80238E38: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    func_80239590_ovl5(rdram, ctx);
        goto after_2;
    // 0x80238E38: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    after_2:
L_80238E3C:
    // 0x80238E3C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80238E40: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80238E44: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80238E48: jr          $ra
    // 0x80238E4C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80238E4C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802272B8_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802272B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802272BC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802272C0: jal         0x8005FB90
    // 0x802272C4: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_0;
    // 0x802272C4: nop

    after_0:
    // 0x802272C8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802272CC: jr          $ra
    // 0x802272D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802272D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80233990_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233990: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80233994: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80233998: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023399C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x802339A0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802339A4: lbu         $v1, 0xB($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XB);
    // 0x802339A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802339AC: beq         $v1, $v0, L_80233A0C
    if (ctx->r3 == ctx->r2) {
        // 0x802339B0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80233A0C;
    }
    // 0x802339B0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802339B4: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x802339B8: beql        $v0, $zero, L_802339D0
    if (ctx->r2 == 0) {
        // 0x802339BC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802339D0;
    }
    goto skip_0;
    // 0x802339BC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x802339C0: beq         $v1, $zero, L_802339E0
    if (ctx->r3 == 0) {
        // 0x802339C4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802339E0;
    }
    // 0x802339C4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802339C8: j           L_80233AFC
    // 0x802339CC: nop

        goto L_80233AFC;
    // 0x802339CC: nop

L_802339D0:
    // 0x802339D0: beq         $v1, $v0, L_80233ABC
    if (ctx->r3 == ctx->r2) {
        // 0x802339D4: addiu       $a0, $zero, 0x3
        ctx->r4 = ADD32(0, 0X3);
            goto L_80233ABC;
    }
    // 0x802339D4: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x802339D8: j           L_80233AFC
    // 0x802339DC: nop

        goto L_80233AFC;
    // 0x802339DC: nop

L_802339E0:
    // 0x802339E0: lhu         $v1, 0x32C($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X32C);
    // 0x802339E4: lbu         $a0, 0xB($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0XB);
    // 0x802339E8: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x802339EC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802339F0: sh          $zero, 0x46($s1)
    MEM_H(0X46, ctx->r17) = 0;
    // 0x802339F4: sh          $v0, 0x330($s1)
    MEM_H(0X330, ctx->r17) = ctx->r2;
    // 0x802339F8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x802339FC: ori         $v1, $v1, 0x8
    ctx->r3 = ctx->r3 | 0X8;
    // 0x80233A00: sh          $v1, 0x32C($s1)
    MEM_H(0X32C, ctx->r17) = ctx->r3;
    // 0x80233A04: j           L_80233AFC
    // 0x80233A08: sb          $a0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r4;
        goto L_80233AFC;
    // 0x80233A08: sb          $a0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r4;
L_80233A0C:
    // 0x80233A0C: lh          $v1, 0x330($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X330);
    // 0x80233A10: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x80233A14: beq         $v1, $zero, L_80233A28
    if (ctx->r3 == 0) {
        // 0x80233A18: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_80233A28;
    }
    // 0x80233A18: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x80233A1C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80233A20: j           L_80233A34
    // 0x80233A24: sh          $v0, 0x330($s1)
    MEM_H(0X330, ctx->r17) = ctx->r2;
        goto L_80233A34;
    // 0x80233A24: sh          $v0, 0x330($s1)
    MEM_H(0X330, ctx->r17) = ctx->r2;
L_80233A28:
    // 0x80233A28: lhu         $v0, 0x46($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X46);
    // 0x80233A2C: addiu       $v0, $v0, 0x30
    ctx->r2 = ADD32(ctx->r2, 0X30);
    // 0x80233A30: sh          $v0, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r2;
L_80233A34:
    // 0x80233A34: lh          $a1, 0x44($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X44);
    // 0x80233A38: lh          $a2, 0x46($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X46);
    // 0x80233A3C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80233A40: jal         0x8004DA90
    // 0x80233A44: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x80233A44: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x80233A48: jal         0x8003E934
    // 0x80233A4C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x80233A4C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x80233A50: addu        $t0, $v0, $zero
    ctx->r8 = ADD32(ctx->r2, 0);
    // 0x80233A54: lh          $v1, 0x16($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X16);
    // 0x80233A58: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80233A5C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80233A60: slt         $v1, $v0, $v1
    ctx->r3 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80233A64: beq         $v1, $zero, L_80233AFC
    if (ctx->r3 == 0) {
        // 0x80233A68: addiu       $a0, $zero, 0x10
        ctx->r4 = ADD32(0, 0X10);
            goto L_80233AFC;
    }
    // 0x80233A68: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x80233A6C: addiu       $a1, $zero, 0x400
    ctx->r5 = ADD32(0, 0X400);
    // 0x80233A70: addiu       $a2, $zero, 0x2000
    ctx->r6 = ADD32(0, 0X2000);
    // 0x80233A74: lbu         $v1, 0xB($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XB);
    // 0x80233A78: addiu       $s0, $s1, 0x14
    ctx->r16 = ADD32(ctx->r17, 0X14);
    // 0x80233A7C: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x80233A80: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80233A84: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x80233A88: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80233A8C: sh          $t0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r8;
    // 0x80233A90: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x80233A94: sh          $zero, 0x46($s1)
    MEM_H(0X46, ctx->r17) = 0;
    // 0x80233A98: sh          $zero, 0x44($s1)
    MEM_H(0X44, ctx->r17) = 0;
    // 0x80233A9C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80233AA0: jal         0x8003491C
    // 0x80233AA4: sb          $v1, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r3;
    func_8003491C_FD1C(rdram, ctx);
        goto after_2;
    // 0x80233AA4: sb          $v1, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r3;
    after_2:
    // 0x80233AA8: addiu       $a0, $zero, 0xEF
    ctx->r4 = ADD32(0, 0XEF);
    // 0x80233AAC: jal         0x8002A33C
    // 0x80233AB0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_3;
    // 0x80233AB0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80233AB4: j           L_80233AFC
    // 0x80233AB8: nop

        goto L_80233AFC;
    // 0x80233AB8: nop

L_80233ABC:
    // 0x80233ABC: lb          $v1, 0xA7($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XA7);
    // 0x80233AC0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80233AC4: bne         $v1, $v0, L_80233AFC
    if (ctx->r3 != ctx->r2) {
        // 0x80233AC8: sb          $a0, 0xAC($s1)
        MEM_B(0XAC, ctx->r17) = ctx->r4;
            goto L_80233AFC;
    }
    // 0x80233AC8: sb          $a0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r4;
    // 0x80233ACC: lbu         $v0, 0xC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XC);
    // 0x80233AD0: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x80233AD4: beq         $v0, $zero, L_80233AE8
    if (ctx->r2 == 0) {
        // 0x80233AD8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80233AE8;
    }
    // 0x80233AD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80233ADC: sb          $a0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r4;
    // 0x80233AE0: j           L_80233AF8
    // 0x80233AE4: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
        goto L_80233AF8;
    // 0x80233AE4: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
L_80233AE8:
    // 0x80233AE8: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x80233AEC: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x80233AF0: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
    // 0x80233AF4: sh          $v0, 0x330($s1)
    MEM_H(0X330, ctx->r17) = ctx->r2;
L_80233AF8:
    // 0x80233AF8: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
L_80233AFC:
    // 0x80233AFC: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80233B00: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80233B04: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80233B08: jr          $ra
    // 0x80233B0C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80233B0C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802386C8_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802386C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802386CC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802386D0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802386D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802386D8: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x802386DC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802386E0: jal         0x8004DA90
    // 0x802386E4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x802386E4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x802386E8: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x802386EC: bne         $v0, $zero, L_80238704
    if (ctx->r2 != 0) {
        // 0x802386F0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80238704;
    }
    // 0x802386F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802386F4: jal         0x8005044C
    // 0x802386F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x802386F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802386FC: j           L_80238714
    // 0x80238700: nop

        goto L_80238714;
    // 0x80238700: nop

L_80238704:
    // 0x80238704: lb          $a1, 0xE($s0)
    ctx->r5 = MEM_B(ctx->r16, 0XE);
    // 0x80238708: jal         0x80050294
    // 0x8023870C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x8023870C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x80238710: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
L_80238714:
    // 0x80238714: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80238718: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023871C: jr          $ra
    // 0x80238720: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80238720: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80238724: nop

    // 0x80238728: nop

    // 0x8023872C: nop

;}
RECOMP_FUNC void func_802308F0_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802308F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802308F4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802308F8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802308FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80230900: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80230904: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80230908: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8023090C: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80230910: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80230914: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x80230918: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8023091C: jal         0x8004D5D4
    // 0x80230920: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80230920: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x80230924: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230928: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8023092C: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80230930: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80230934: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80230938: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8023093C: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80230940: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80230944: addiu       $v0, $v0, 0x5C50
    ctx->r2 = ADD32(ctx->r2, 0X5C50);
    // 0x80230948: jal         0x8003E934
    // 0x8023094C: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x8023094C: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    after_1:
    // 0x80230950: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80230954: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80230958: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8023095C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80230960: sh          $v0, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r2;
    // 0x80230964: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80230968: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8023096C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80230970: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x80230974: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
    // 0x80230978: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x8023097C: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x80230980: sh          $zero, 0x362($s0)
    MEM_H(0X362, ctx->r16) = 0;
    // 0x80230984: sh          $zero, 0x364($s0)
    MEM_H(0X364, ctx->r16) = 0;
    // 0x80230988: sb          $zero, 0x74($s0)
    MEM_B(0X74, ctx->r16) = 0;
    // 0x8023098C: sw          $zero, 0x348($s0)
    MEM_W(0X348, ctx->r16) = 0;
    // 0x80230990: sw          $zero, 0x34C($s0)
    MEM_W(0X34C, ctx->r16) = 0;
    // 0x80230994: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80230998: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8023099C: sw          $zero, 0x350($s0)
    MEM_W(0X350, ctx->r16) = 0;
    // 0x802309A0: sw          $v0, 0x354($s0)
    MEM_W(0X354, ctx->r16) = ctx->r2;
    // 0x802309A4: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x802309A8: jal         0x800A3450
    // 0x802309AC: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x802309AC: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    after_2:
    // 0x802309B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802309B4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802309B8: jal         0x80050294
    // 0x802309BC: andi        $a2, $v0, 0x3
    ctx->r6 = ctx->r2 & 0X3;
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x802309BC: andi        $a2, $v0, 0x3
    ctx->r6 = ctx->r2 & 0X3;
    after_3:
    // 0x802309C0: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x802309C4: lbu         $a2, 0x8($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X8);
    // 0x802309C8: addiu       $a0, $zero, 0x109
    ctx->r4 = ADD32(0, 0X109);
    // 0x802309CC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x802309D0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802309D4: sb          $v0, 0x107($s0)
    MEM_B(0X107, ctx->r16) = ctx->r2;
    // 0x802309D8: addiu       $v0, $zero, -0x10
    ctx->r2 = ADD32(0, -0X10);
    // 0x802309DC: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x802309E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802309E4: sb          $zero, 0xFF($s0)
    MEM_B(0XFF, ctx->r16) = 0;
    // 0x802309E8: sb          $zero, 0x103($s0)
    MEM_B(0X103, ctx->r16) = 0;
    // 0x802309EC: sb          $v0, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r2;
    // 0x802309F0: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x802309F4: addiu       $v1, $v1, -0x50
    ctx->r3 = ADD32(ctx->r3, -0X50);
    // 0x802309F8: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
    // 0x802309FC: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80230A00: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80230A04: jal         0x8002A33C
    // 0x80230A08: sb          $a2, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r6;
    func_8002A33C_573C(rdram, ctx);
        goto after_4;
    // 0x80230A08: sb          $a2, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r6;
    after_4:
    // 0x80230A0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80230A10: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80230A14: jr          $ra
    // 0x80230A18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80230A18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023250C_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023250C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80232510: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232514: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232518: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023251C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80232520: bne         $v0, $zero, L_8023253C
    if (ctx->r2 != 0) {
        // 0x80232524: nop
    
            goto L_8023253C;
    }
    // 0x80232524: nop

    // 0x80232528: jal         0x8023269C
    // 0x8023252C: nop

    func_8023269C_ovl5(rdram, ctx);
        goto after_0;
    // 0x8023252C: nop

    after_0:
    // 0x80232530: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80232534: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232538: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8023253C:
    // 0x8023253C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80232540: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232544: jr          $ra
    // 0x80232548: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80232548: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802341F8_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802341F8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802341FC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80234200: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80234204: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80234208: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023420C: lhu         $v0, 0x32C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X32C);
    // 0x80234210: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80234214: beq         $v0, $zero, L_80234224
    if (ctx->r2 == 0) {
        // 0x80234218: addiu       $s1, $s0, 0x328
        ctx->r17 = ADD32(ctx->r16, 0X328);
            goto L_80234224;
    }
    // 0x80234218: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x8023421C: jal         0x80234FBC
    // 0x80234220: nop

    func_80234FBC_ovl5(rdram, ctx);
        goto after_0;
    // 0x80234220: nop

    after_0:
L_80234224:
    // 0x80234224: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80234228: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023422C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234230: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80234234: lw          $v0, 0x5E7C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X5E7C);
    // 0x80234238: jalr        $v0
    // 0x8023423C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x8023423C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80234240: lhu         $a0, 0x32C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X32C);
    // 0x80234244: andi        $v0, $a0, 0x200
    ctx->r2 = ctx->r4 & 0X200;
    // 0x80234248: bne         $v0, $zero, L_8023428C
    if (ctx->r2 != 0) {
        // 0x8023424C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8023428C;
    }
    // 0x8023424C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80234250: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80234254: beq         $v1, $v0, L_8023428C
    if (ctx->r3 == ctx->r2) {
        // 0x80234258: andi        $v0, $a0, 0x80
        ctx->r2 = ctx->r4 & 0X80;
            goto L_8023428C;
    }
    // 0x80234258: andi        $v0, $a0, 0x80
    ctx->r2 = ctx->r4 & 0X80;
    // 0x8023425C: beq         $v0, $zero, L_80234284
    if (ctx->r2 == 0) {
        // 0x80234260: nop
    
            goto L_80234284;
    }
    // 0x80234260: nop

    // 0x80234264: lw          $v0, 0x360($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X360);
    // 0x80234268: sltiu       $v0, $v0, 0x800
    ctx->r2 = ctx->r2 < 0X800 ? 1 : 0;
    // 0x8023426C: beq         $v0, $zero, L_80234284
    if (ctx->r2 == 0) {
        // 0x80234270: nop
    
            goto L_80234284;
    }
    // 0x80234270: nop

    // 0x80234274: jal         0x80234C7C
    // 0x80234278: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80234C7C_ovl5(rdram, ctx);
        goto after_2;
    // 0x80234278: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8023427C: j           L_8023428C
    // 0x80234280: nop

        goto L_8023428C;
    // 0x80234280: nop

L_80234284:
    // 0x80234284: jal         0x80234D1C
    // 0x80234288: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80234D1C_ovl5(rdram, ctx);
        goto after_3;
    // 0x80234288: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
L_8023428C:
    // 0x8023428C: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80234290: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80234294: beql        $v0, $zero, L_802342B8
    if (ctx->r2 == 0) {
        // 0x80234298: sw          $zero, 0x18($s1)
        MEM_W(0X18, ctx->r17) = 0;
            goto L_802342B8;
    }
    goto skip_0;
    // 0x80234298: sw          $zero, 0x18($s1)
    MEM_W(0X18, ctx->r17) = 0;
    skip_0:
    // 0x8023429C: jal         0x80234EC8
    // 0x802342A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80234EC8_ovl5(rdram, ctx);
        goto after_4;
    // 0x802342A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x802342A4: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x802342A8: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x802342AC: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
    // 0x802342B0: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x802342B4: sw          $zero, 0x18($s1)
    MEM_W(0X18, ctx->r17) = 0;
L_802342B8:
    // 0x802342B8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802342BC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802342C0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802342C4: jr          $ra
    // 0x802342C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802342C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80239B60_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239B60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80239B64: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80239B68: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80239B6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80239B70: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80239B74: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80239B78: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80239B7C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80239B80: lw          $v0, 0x6430($at)
    ctx->r2 = MEM_W(ctx->r1, 0X6430);
    // 0x80239B84: jalr        $v0
    // 0x80239B88: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80239B88: nop

    after_0:
    // 0x80239B8C: sw          $zero, 0x458($s0)
    MEM_W(0X458, ctx->r16) = 0;
    // 0x80239B90: sw          $zero, 0x4A0($s0)
    MEM_W(0X4A0, ctx->r16) = 0;
    // 0x80239B94: sw          $zero, 0x4B0($s0)
    MEM_W(0X4B0, ctx->r16) = 0;
    // 0x80239B98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80239B9C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80239BA0: jr          $ra
    // 0x80239BA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80239BA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023EE88_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023EE88: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8023EE8C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023EE90: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023EE94: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8023EE98: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x8023EE9C: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8023EEA0: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8023EEA4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8023EEA8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023EEAC: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x8023EEB0: lw          $v1, 0xD4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XD4);
    // 0x8023EEB4: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8023EEB8: addu        $a0, $v0, $v1
    ctx->r4 = ADD32(ctx->r2, ctx->r3);
    // 0x8023EEBC: lbu         $v1, 0x4($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X4);
    // 0x8023EEC0: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8023EEC4: bne         $v1, $v0, L_8023EF4C
    if (ctx->r3 != ctx->r2) {
        // 0x8023EEC8: addiu       $s2, $s0, 0xD0
        ctx->r18 = ADD32(ctx->r16, 0XD0);
            goto L_8023EF4C;
    }
    // 0x8023EEC8: addiu       $s2, $s0, 0xD0
    ctx->r18 = ADD32(ctx->r16, 0XD0);
    // 0x8023EECC: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8023EED0: bne         $v0, $zero, L_8023EEE0
    if (ctx->r2 != 0) {
        // 0x8023EED4: nop
    
            goto L_8023EEE0;
    }
    // 0x8023EED4: nop

    // 0x8023EED8: lbu         $v0, 0x5($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X5);
    // 0x8023EEDC: sh          $v0, 0xEA($s0)
    MEM_H(0XEA, ctx->r16) = ctx->r2;
L_8023EEE0:
    // 0x8023EEE0: lh          $v1, 0xEA($s0)
    ctx->r3 = MEM_H(ctx->r16, 0XEA);
    // 0x8023EEE4: lw          $v0, 0xD8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD8);
    // 0x8023EEE8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023EEEC: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x8023EEF0: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x8023EEF4: sb          $v0, 0xDE($s0)
    MEM_B(0XDE, ctx->r16) = ctx->r2;
    // 0x8023EEF8: lh          $v0, 0xEA($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XEA);
    // 0x8023EEFC: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8023EF00: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023EF04: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8023EF08: lh          $v1, 0x67F4($at)
    ctx->r3 = MEM_H(ctx->r1, 0X67F4);
    // 0x8023EF0C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023EF10: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x8023EF14: bne         $v1, $zero, L_8023EF20
    if (ctx->r3 != 0) {
        // 0x8023EF18: nop
    
            goto L_8023EF20;
    }
    // 0x8023EF18: nop

    // 0x8023EF1C: break       7
    do_break(2149838620);
L_8023EF20:
    // 0x8023EF20: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8023EF24: bne         $v1, $at, L_8023EF38
    if (ctx->r3 != ctx->r1) {
        // 0x8023EF28: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8023EF38;
    }
    // 0x8023EF28: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8023EF2C: bne         $v0, $at, L_8023EF38
    if (ctx->r2 != ctx->r1) {
        // 0x8023EF30: nop
    
            goto L_8023EF38;
    }
    // 0x8023EF30: nop

    // 0x8023EF34: break       6
    do_break(2149838644);
L_8023EF38:
    // 0x8023EF38: mfhi        $v1
    ctx->r3 = hi;
    // 0x8023EF3C: nop

    // 0x8023EF40: nop

    // 0x8023EF44: j           L_8023F018
    // 0x8023EF48: sh          $v1, 0xEA($s0)
    MEM_H(0XEA, ctx->r16) = ctx->r3;
        goto L_8023F018;
    // 0x8023EF48: sh          $v1, 0xEA($s0)
    MEM_H(0XEA, ctx->r16) = ctx->r3;
L_8023EF4C:
    // 0x8023EF4C: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x8023EF50: addiu       $s5, $zero, 0x2
    ctx->r21 = ADD32(0, 0X2);
    // 0x8023EF54: addiu       $s4, $zero, 0x3
    ctx->r20 = ADD32(0, 0X3);
L_8023EF58:
    // 0x8023EF58: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8023EF5C: bne         $v0, $zero, L_8023EF94
    if (ctx->r2 != 0) {
        // 0x8023EF60: nop
    
            goto L_8023EF94;
    }
    // 0x8023EF60: nop

    // 0x8023EF64: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x8023EF68: lw          $v1, 0x4($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X4);
    // 0x8023EF6C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8023EF70: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023EF74: sll         $v1, $s1, 16
    ctx->r3 = S32(ctx->r17 << 16);
    // 0x8023EF78: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8023EF7C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023EF80: lbu         $s3, 0x5($v0)
    ctx->r19 = MEM_BU(ctx->r2, 0X5);
    // 0x8023EF84: beql        $v1, $s5, L_8023F018
    if (ctx->r3 == ctx->r21) {
        // 0x8023EF88: sb          $s3, 0xE($s2)
        MEM_B(0XE, ctx->r18) = ctx->r19;
            goto L_8023F018;
    }
    goto skip_0;
    // 0x8023EF88: sb          $s3, 0xE($s2)
    MEM_B(0XE, ctx->r18) = ctx->r19;
    skip_0:
    // 0x8023EF8C: j           L_8023EFBC
    // 0x8023EF90: nop

        goto L_8023EFBC;
    // 0x8023EF90: nop

L_8023EF94:
    // 0x8023EF94: lbu         $v0, 0xE($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XE);
    // 0x8023EF98: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x8023EF9C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8023EFA0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023EFA4: sll         $v1, $s1, 16
    ctx->r3 = S32(ctx->r17 << 16);
    // 0x8023EFA8: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8023EFAC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023EFB0: lbu         $s3, 0x4($v0)
    ctx->r19 = MEM_BU(ctx->r2, 0X4);
    // 0x8023EFB4: beql        $v1, $s4, L_8023F018
    if (ctx->r3 == ctx->r20) {
        // 0x8023EFB8: sb          $s3, 0xE($s2)
        MEM_B(0XE, ctx->r18) = ctx->r19;
            goto L_8023F018;
    }
    goto skip_1;
    // 0x8023EFB8: sb          $s3, 0xE($s2)
    MEM_B(0XE, ctx->r18) = ctx->r19;
    skip_1:
L_8023EFBC:
    // 0x8023EFBC: jal         0x800A3450
    // 0x8023EFC0: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8023EFC0: nop

    after_0:
    // 0x8023EFC4: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
    // 0x8023EFC8: sll         $a0, $s1, 16
    ctx->r4 = S32(ctx->r17 << 16);
    // 0x8023EFCC: sll         $v1, $s3, 3
    ctx->r3 = S32(ctx->r19 << 3);
    // 0x8023EFD0: sra         $a0, $a0, 14
    ctx->r4 = S32(SIGNED(ctx->r4) >> 14);
    // 0x8023EFD4: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x8023EFD8: lbu         $v1, 0x2($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X2);
    // 0x8023EFDC: srav        $v0, $v0, $a0
    ctx->r2 = S32(SIGNED(ctx->r2) >> (ctx->r4 & 31));
    // 0x8023EFE0: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8023EFE4: andi        $v1, $v1, 0xF
    ctx->r3 = ctx->r3 & 0XF;
    // 0x8023EFE8: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8023EFEC: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x8023EFF0: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8023EFF4: bne         $v0, $zero, L_8023F014
    if (ctx->r2 != 0) {
        // 0x8023EFF8: addiu       $v0, $s1, 0x1
        ctx->r2 = ADD32(ctx->r17, 0X1);
            goto L_8023F014;
    }
    // 0x8023EFF8: addiu       $v0, $s1, 0x1
    ctx->r2 = ADD32(ctx->r17, 0X1);
    // 0x8023EFFC: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8023F000: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023F004: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023F008: slti        $v0, $v0, 0x4
    ctx->r2 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x8023F00C: bne         $v0, $zero, L_8023EF58
    if (ctx->r2 != 0) {
        // 0x8023F010: nop
    
            goto L_8023EF58;
    }
    // 0x8023F010: nop

L_8023F014:
    // 0x8023F014: sb          $s3, 0xE($s2)
    MEM_B(0XE, ctx->r18) = ctx->r19;
L_8023F018:
    // 0x8023F018: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8023F01C: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x8023F020: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8023F024: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8023F028: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8023F02C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023F030: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023F034: jr          $ra
    // 0x8023F038: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8023F038: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8023F03C: nop

;}
RECOMP_FUNC void func_80236704_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236704: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80236708: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023670C: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80236710: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80236714: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80236718: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023671C: lw          $v0, 0x5F70($at)
    ctx->r2 = MEM_W(ctx->r1, 0X5F70);
    // 0x80236720: jalr        $v0
    // 0x80236724: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80236724: nop

    after_0:
    // 0x80236728: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023672C: jr          $ra
    // 0x80236730: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80236730: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023A11C_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A11C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023A120: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023A124: jal         0x8004F488
    // 0x8023A128: nop

    func_8004F488_2A888(rdram, ctx);
        goto after_0;
    // 0x8023A128: nop

    after_0:
    // 0x8023A12C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023A130: jr          $ra
    // 0x8023A134: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023A134: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023DDE8_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023DDE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023DDEC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023DDF0: addiu       $a1, $a0, 0x14
    ctx->r5 = ADD32(ctx->r4, 0X14);
    // 0x8023DDF4: jal         0x8002A33C
    // 0x8023DDF8: addiu       $a0, $zero, 0x144
    ctx->r4 = ADD32(0, 0X144);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x8023DDF8: addiu       $a0, $zero, 0x144
    ctx->r4 = ADD32(0, 0X144);
    after_0:
    // 0x8023DDFC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023DE00: jr          $ra
    // 0x8023DE04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023DE04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80236680_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236680: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80236684: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80236688: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023668C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80236690: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80236694: addiu       $v1, $zero, 0x4210
    ctx->r3 = ADD32(0, 0X4210);
    // 0x80236698: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8023669C: beq         $v0, $zero, L_802366B4
    if (ctx->r2 == 0) {
        // 0x802366A0: sh          $v1, 0x15E($s0)
        MEM_H(0X15E, ctx->r16) = ctx->r3;
            goto L_802366B4;
    }
    // 0x802366A0: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x802366A4: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x802366A8: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x802366AC: jal         0x8003B564
    // 0x802366B0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_0;
    // 0x802366B0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
L_802366B4:
    // 0x802366B4: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x802366B8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802366BC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802366C0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802366C4: lw          $v0, 0x5F90($at)
    ctx->r2 = MEM_W(ctx->r1, 0X5F90);
    // 0x802366C8: jalr        $v0
    // 0x802366CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x802366CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802366D0: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802366D4: beq         $v0, $zero, L_802366E4
    if (ctx->r2 == 0) {
        // 0x802366D8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802366E4;
    }
    // 0x802366D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802366DC: j           L_802366E8
    // 0x802366E0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
        goto L_802366E8;
    // 0x802366E0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
L_802366E4:
    // 0x802366E4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_802366E8:
    // 0x802366E8: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x802366EC: jal         0x80047284
    // 0x802366F0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_2;
    // 0x802366F0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x802366F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802366F8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802366FC: jr          $ra
    // 0x80236700: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80236700: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022D4E8_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D4E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D4EC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D4F0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D4F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022D4F8: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x8022D4FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022D500: sh          $zero, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = 0;
    // 0x8022D504: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022D508: sh          $v0, 0x366($s0)
    MEM_H(0X366, ctx->r16) = ctx->r2;
    // 0x8022D50C: jal         0x8022F5C8
    // 0x8022D510: sh          $v0, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r2;
    func_8022F5C8_ovl5(rdram, ctx);
        goto after_0;
    // 0x8022D510: sh          $v0, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022D514: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022D518: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022D51C: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8022D520: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8022D524: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022D528: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8022D52C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022D530: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D534: jr          $ra
    // 0x8022D538: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022D538: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023E4F0_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023E4F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023E4F4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023E4F8: jal         0x8004F4F8
    // 0x8023E4FC: nop

    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_0;
    // 0x8023E4FC: nop

    after_0:
    // 0x8023E500: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023E504: jr          $ra
    // 0x8023E508: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023E508: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022F744_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F744: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F748: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022F74C: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8022F750: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022F754: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022F758: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022F75C: lw          $v0, 0x5C00($at)
    ctx->r2 = MEM_W(ctx->r1, 0X5C00);
    // 0x8022F760: jalr        $v0
    // 0x8022F764: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022F764: nop

    after_0:
    // 0x8022F768: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022F76C: jr          $ra
    // 0x8022F770: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F770: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802373A4_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802373A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802373A8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802373AC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802373B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802373B4: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802373B8: bnel        $v0, $zero, L_80237450
    if (ctx->r2 != 0) {
        // 0x802373BC: addiu       $a0, $s0, 0x2C
        ctx->r4 = ADD32(ctx->r16, 0X2C);
            goto L_80237450;
    }
    goto skip_0;
    // 0x802373BC: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    skip_0:
    // 0x802373C0: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x802373C4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802373C8: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x802373CC: jal         0x8004D5D4
    // 0x802373D0: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x802373D0: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x802373D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802373D8: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x802373DC: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x802373E0: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x802373E4: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x802373E8: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x802373EC: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x802373F0: jal         0x8003E934
    // 0x802373F4: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x802373F4: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    after_1:
    // 0x802373F8: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x802373FC: lbu         $a0, 0x8($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X8);
    // 0x80237400: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80237404: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
    // 0x80237408: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8023740C: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x80237410: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80237414: addiu       $v0, $v0, 0x6018
    ctx->r2 = ADD32(ctx->r2, 0X6018);
    // 0x80237418: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8023741C: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80237420: lbu         $a1, 0x0($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X0);
    // 0x80237424: lbu         $a2, 0x1($a0)
    ctx->r6 = MEM_BU(ctx->r4, 0X1);
    // 0x80237428: jal         0x80050294
    // 0x8023742C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x8023742C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80237430: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80237434: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237438: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x8023743C: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x80237440: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    // 0x80237444: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80237448: j           L_802374A8
    // 0x8023744C: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
        goto L_802374A8;
    // 0x8023744C: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
L_80237450:
    // 0x80237450: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80237454: jal         0x8009A3B4
    // 0x80237458: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80237458: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x8023745C: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80237460: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80237464: jal         0x8009A3B4
    // 0x80237468: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x80237468: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_4:
    // 0x8023746C: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80237470: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80237474: jal         0x8009A3B4
    // 0x80237478: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x80237478: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x8023747C: jal         0x8005044C
    // 0x80237480: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_6;
    // 0x80237480: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x80237484: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80237488: lbu         $v1, -0x3A47($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3A47);
    // 0x8023748C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237490: bne         $v1, $v0, L_802374AC
    if (ctx->r3 != ctx->r2) {
        // 0x80237494: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802374AC;
    }
    // 0x80237494: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237498: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8023749C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x802374A0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802374A4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_802374A8:
    // 0x802374A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_802374AC:
    // 0x802374AC: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x802374B0: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x802374B4: jal         0x8003B564
    // 0x802374B8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_7;
    // 0x802374B8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_7:
    // 0x802374BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802374C0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802374C4: jr          $ra
    // 0x802374C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802374C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80237760_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237760: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80237764: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x80237768: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023776C: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80237770: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x80237774: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x80237778: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8023777C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80237780: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x80237784: jal         0x8004D5D4
    // 0x80237788: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80237788: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x8023778C: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80237790: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x80237794: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80237798: lhu         $v1, 0x54($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X54);
    // 0x8023779C: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x802377A0: addiu       $s2, $s2, 0x4D58
    ctx->r18 = ADD32(ctx->r18, 0X4D58);
    // 0x802377A4: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x802377A8: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x802377AC: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802377B0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802377B4: addiu       $a3, $zero, 0x200
    ctx->r7 = ADD32(0, 0X200);
    // 0x802377B8: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x802377BC: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x802377C0: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x802377C4: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x802377C8: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x802377CC: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x802377D0: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x802377D4: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x802377D8: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x802377DC: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x802377E0: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x802377E4: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x802377E8: jal         0x8004F820
    // 0x802377EC: sh          $v1, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r3;
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x802377EC: sh          $v1, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r3;
    after_1:
    // 0x802377F0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802377F4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802377F8: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x802377FC: addiu       $a2, $zero, 0xC00
    ctx->r6 = ADD32(0, 0XC00);
    // 0x80237800: addiu       $a3, $zero, 0x400
    ctx->r7 = ADD32(0, 0X400);
    // 0x80237804: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80237808: jal         0x8004F978
    // 0x8023780C: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    func_8004F978_2AD78(rdram, ctx);
        goto after_2;
    // 0x8023780C: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    after_2:
    // 0x80237810: addiu       $a0, $s0, 0x2C8
    ctx->r4 = ADD32(ctx->r16, 0X2C8);
    // 0x80237814: lhu         $v1, 0x54($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X54);
    // 0x80237818: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023781C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80237820: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80237824: jal         0x8009A3B4
    // 0x80237828: sh          $v1, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r3;
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80237828: sh          $v1, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r3;
    after_3:
    // 0x8023782C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237830: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80237834: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80237838: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023783C: sw          $zero, 0x2D8($s0)
    MEM_W(0X2D8, ctx->r16) = 0;
    // 0x80237840: sw          $zero, 0x2DC($s0)
    MEM_W(0X2DC, ctx->r16) = 0;
    // 0x80237844: sw          $zero, 0x2D0($s0)
    MEM_W(0X2D0, ctx->r16) = 0;
    // 0x80237848: sw          $zero, 0x2D4($s0)
    MEM_W(0X2D4, ctx->r16) = 0;
    // 0x8023784C: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x80237850: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80237854: jal         0x800502EC
    // 0x80237858: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    func_800502EC_2B6EC(rdram, ctx);
        goto after_4;
    // 0x80237858: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    after_4:
    // 0x8023785C: jal         0x8005129C
    // 0x80237860: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005129C_2C69C(rdram, ctx);
        goto after_5;
    // 0x80237860: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80237864: addiu       $a0, $s0, 0x160
    ctx->r4 = ADD32(ctx->r16, 0X160);
    // 0x80237868: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8023786C: addiu       $s1, $sp, 0x28
    ctx->r17 = ADD32(ctx->r29, 0X28);
    // 0x80237870: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x80237874: addiu       $v0, $zero, -0x1000
    ctx->r2 = ADD32(0, -0X1000);
    // 0x80237878: sh          $zero, 0x10($sp)
    MEM_H(0X10, ctx->r29) = 0;
    // 0x8023787C: sh          $zero, 0x12($sp)
    MEM_H(0X12, ctx->r29) = 0;
    // 0x80237880: jal         0x800308E8
    // 0x80237884: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    func_800308E8_BCE8(rdram, ctx);
        goto after_6;
    // 0x80237884: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    after_6:
    // 0x80237888: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023788C: jal         0x80032308
    // 0x80237890: addiu       $a1, $s0, 0x44
    ctx->r5 = ADD32(ctx->r16, 0X44);
    func_80032308_D708(rdram, ctx);
        goto after_7;
    // 0x80237890: addiu       $a1, $s0, 0x44
    ctx->r5 = ADD32(ctx->r16, 0X44);
    after_7:
    // 0x80237894: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80237898: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x8023789C: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x802378A0: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x802378A4: jr          $ra
    // 0x802378A8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x802378A8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8023C488_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023C488: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8023C48C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8023C490: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x8023C494: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x8023C498: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8023C49C: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8023C4A0: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8023C4A4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8023C4A8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8023C4AC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8023C4B0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8023C4B4: lbu         $v0, 0x3($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X3);
    // 0x8023C4B8: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8023C4BC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023C4C0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023C4C4: lh          $v0, 0x65C0($at)
    ctx->r2 = MEM_H(ctx->r1, 0X65C0);
    // 0x8023C4C8: addu        $s5, $zero, $zero
    ctx->r21 = ADD32(0, 0);
    // 0x8023C4CC: blez        $v0, L_8023C700
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8023C4D0: addu        $s6, $zero, $zero
        ctx->r22 = ADD32(0, 0);
            goto L_8023C700;
    }
    // 0x8023C4D0: addu        $s6, $zero, $zero
    ctx->r22 = ADD32(0, 0);
    // 0x8023C4D4: lui         $s7, 0x8021
    ctx->r23 = S32(0X8021 << 16);
    // 0x8023C4D8: addiu       $s7, $s7, -0x2100
    ctx->r23 = ADD32(ctx->r23, -0X2100);
    // 0x8023C4DC: sll         $v0, $s6, 16
    ctx->r2 = S32(ctx->r22 << 16);
L_8023C4E0:
    // 0x8023C4E0: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023C4E4: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8023C4E8: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8023C4EC: lbu         $v1, 0x75A0($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X75A0);
    // 0x8023C4F0: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x8023C4F4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023C4F8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023C4FC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8023C500: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8023C504: addu        $s2, $v0, $s7
    ctx->r18 = ADD32(ctx->r2, ctx->r23);
    // 0x8023C508: lbu         $v0, 0xDF($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XDF);
    // 0x8023C50C: andi        $v0, $v0, 0xF9
    ctx->r2 = ctx->r2 & 0XF9;
    // 0x8023C510: sb          $v0, 0xDF($s2)
    MEM_B(0XDF, ctx->r18) = ctx->r2;
    // 0x8023C514: lbu         $v0, 0x3($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X3);
    // 0x8023C518: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8023C51C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023C520: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023C524: lh          $v0, 0x65C0($at)
    ctx->r2 = MEM_H(ctx->r1, 0X65C0);
    // 0x8023C528: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x8023C52C: blez        $v0, L_8023C5A0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8023C530: addiu       $s1, $s2, 0xD0
        ctx->r17 = ADD32(ctx->r18, 0XD0);
            goto L_8023C5A0;
    }
    // 0x8023C530: addiu       $s1, $s2, 0xD0
    ctx->r17 = ADD32(ctx->r18, 0XD0);
    // 0x8023C534: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x8023C538: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
L_8023C53C:
    // 0x8023C53C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023C540: beq         $s3, $v0, L_8023C570
    if (ctx->r19 == ctx->r2) {
        // 0x8023C544: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_8023C570;
    }
    // 0x8023C544: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8023C548: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023C54C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023C550: lbu         $v0, 0x75A0($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X75A0);
    // 0x8023C554: sll         $a1, $v0, 3
    ctx->r5 = S32(ctx->r2 << 3);
    // 0x8023C558: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x8023C55C: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x8023C560: subu        $a1, $a1, $v0
    ctx->r5 = SUB32(ctx->r5, ctx->r2);
    // 0x8023C564: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x8023C568: jal         0x8023C72C
    // 0x8023C56C: addu        $a1, $a1, $s7
    ctx->r5 = ADD32(ctx->r5, ctx->r23);
    func_8023C72C_ovl5(rdram, ctx);
        goto after_0;
    // 0x8023C56C: addu        $a1, $a1, $s7
    ctx->r5 = ADD32(ctx->r5, ctx->r23);
    after_0:
L_8023C570:
    // 0x8023C570: lbu         $v0, 0x3($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X3);
    // 0x8023C574: addiu       $v1, $s0, 0x1
    ctx->r3 = ADD32(ctx->r16, 0X1);
    // 0x8023C578: addu        $s0, $v1, $zero
    ctx->r16 = ADD32(ctx->r3, 0);
    // 0x8023C57C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8023C580: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023C584: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023C588: lh          $v0, 0x65C0($at)
    ctx->r2 = MEM_H(ctx->r1, 0X65C0);
    // 0x8023C58C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8023C590: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8023C594: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8023C598: bne         $v1, $zero, L_8023C53C
    if (ctx->r3 != 0) {
        // 0x8023C59C: sll         $v0, $s0, 16
        ctx->r2 = S32(ctx->r16 << 16);
            goto L_8023C53C;
    }
    // 0x8023C59C: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
L_8023C5A0:
    // 0x8023C5A0: lbu         $a0, 0xF($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0XF);
    // 0x8023C5A4: andi        $v0, $a0, 0x20
    ctx->r2 = ctx->r4 & 0X20;
    // 0x8023C5A8: beq         $v0, $zero, L_8023C6D0
    if (ctx->r2 == 0) {
        // 0x8023C5AC: andi        $v1, $a0, 0x50
        ctx->r3 = ctx->r4 & 0X50;
            goto L_8023C6D0;
    }
    // 0x8023C5AC: andi        $v1, $a0, 0x50
    ctx->r3 = ctx->r4 & 0X50;
    // 0x8023C5B0: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x8023C5B4: bne         $v1, $v0, L_8023C5E4
    if (ctx->r3 != ctx->r2) {
        // 0x8023C5B8: nop
    
            goto L_8023C5E4;
    }
    // 0x8023C5B8: nop

    // 0x8023C5BC: lh          $v0, 0x1C($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X1C);
    // 0x8023C5C0: blez        $v0, L_8023C5D4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8023C5C4: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8023C5D4;
    }
    // 0x8023C5C4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023C5C8: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8023C5CC: j           L_8023C6D0
    // 0x8023C5D0: sh          $v0, 0x1C($s1)
    MEM_H(0X1C, ctx->r17) = ctx->r2;
        goto L_8023C6D0;
    // 0x8023C5D0: sh          $v0, 0x1C($s1)
    MEM_H(0X1C, ctx->r17) = ctx->r2;
L_8023C5D4:
    // 0x8023C5D4: andi        $v0, $a0, 0xEF
    ctx->r2 = ctx->r4 & 0XEF;
    // 0x8023C5D8: sb          $v0, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r2;
    // 0x8023C5DC: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x8023C5E0: sh          $v0, 0x1C($s1)
    MEM_H(0X1C, ctx->r17) = ctx->r2;
L_8023C5E4:
    // 0x8023C5E4: lbu         $v0, 0x3($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X3);
    // 0x8023C5E8: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8023C5EC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023C5F0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023C5F4: lh          $v0, 0x65C0($at)
    ctx->r2 = MEM_H(ctx->r1, 0X65C0);
    // 0x8023C5F8: blez        $v0, L_8023C680
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8023C5FC: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_8023C680;
    }
    // 0x8023C5FC: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x8023C600: sll         $v0, $s6, 16
    ctx->r2 = S32(ctx->r22 << 16);
    // 0x8023C604: sra         $s3, $v0, 16
    ctx->r19 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023C608: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
L_8023C60C:
    // 0x8023C60C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023C610: beq         $s3, $v0, L_8023C650
    if (ctx->r19 == ctx->r2) {
        // 0x8023C614: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_8023C650;
    }
    // 0x8023C614: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8023C618: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023C61C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023C620: lbu         $v0, 0x75A0($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X75A0);
    // 0x8023C624: sll         $a1, $v0, 3
    ctx->r5 = S32(ctx->r2 << 3);
    // 0x8023C628: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x8023C62C: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x8023C630: subu        $a1, $a1, $v0
    ctx->r5 = SUB32(ctx->r5, ctx->r2);
    // 0x8023C634: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x8023C638: jal         0x8023C94C
    // 0x8023C63C: addu        $a1, $a1, $s7
    ctx->r5 = ADD32(ctx->r5, ctx->r23);
    func_8023C94C_ovl5(rdram, ctx);
        goto after_1;
    // 0x8023C63C: addu        $a1, $a1, $s7
    ctx->r5 = ADD32(ctx->r5, ctx->r23);
    after_1:
    // 0x8023C640: addu        $s5, $v0, $zero
    ctx->r21 = ADD32(ctx->r2, 0);
    // 0x8023C644: sll         $v0, $s5, 16
    ctx->r2 = S32(ctx->r21 << 16);
    // 0x8023C648: beql        $v0, $zero, L_8023C6D0
    if (ctx->r2 == 0) {
        // 0x8023C64C: sh          $zero, 0x1C($s1)
        MEM_H(0X1C, ctx->r17) = 0;
            goto L_8023C6D0;
    }
    goto skip_0;
    // 0x8023C64C: sh          $zero, 0x1C($s1)
    MEM_H(0X1C, ctx->r17) = 0;
    skip_0:
L_8023C650:
    // 0x8023C650: lbu         $v0, 0x3($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X3);
    // 0x8023C654: addiu       $v1, $s0, 0x1
    ctx->r3 = ADD32(ctx->r16, 0X1);
    // 0x8023C658: addu        $s0, $v1, $zero
    ctx->r16 = ADD32(ctx->r3, 0);
    // 0x8023C65C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8023C660: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023C664: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023C668: lh          $v0, 0x65C0($at)
    ctx->r2 = MEM_H(ctx->r1, 0X65C0);
    // 0x8023C66C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8023C670: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8023C674: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8023C678: bne         $v1, $zero, L_8023C60C
    if (ctx->r3 != 0) {
        // 0x8023C67C: sll         $v0, $s0, 16
        ctx->r2 = S32(ctx->r16 << 16);
            goto L_8023C60C;
    }
    // 0x8023C67C: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
L_8023C680:
    // 0x8023C680: sll         $v0, $s5, 16
    ctx->r2 = S32(ctx->r21 << 16);
    // 0x8023C684: beql        $v0, $zero, L_8023C6D0
    if (ctx->r2 == 0) {
        // 0x8023C688: sh          $zero, 0x1C($s1)
        MEM_H(0X1C, ctx->r17) = 0;
            goto L_8023C6D0;
    }
    goto skip_1;
    // 0x8023C688: sh          $zero, 0x1C($s1)
    MEM_H(0X1C, ctx->r17) = 0;
    skip_1:
    // 0x8023C68C: lhu         $v0, 0x1C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X1C);
    // 0x8023C690: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023C694: sh          $v0, 0x1C($s1)
    MEM_H(0X1C, ctx->r17) = ctx->r2;
    // 0x8023C698: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023C69C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023C6A0: slti        $v0, $v0, 0x10
    ctx->r2 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x8023C6A4: bne         $v0, $zero, L_8023C6D0
    if (ctx->r2 != 0) {
        // 0x8023C6A8: nop
    
            goto L_8023C6D0;
    }
    // 0x8023C6A8: nop

    // 0x8023C6AC: lbu         $v1, 0xF($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XF);
    // 0x8023C6B0: andi        $v0, $v1, 0x40
    ctx->r2 = ctx->r3 & 0X40;
    // 0x8023C6B4: bne         $v0, $zero, L_8023C6C4
    if (ctx->r2 != 0) {
        // 0x8023C6B8: sh          $zero, 0x1C($s1)
        MEM_H(0X1C, ctx->r17) = 0;
            goto L_8023C6C4;
    }
    // 0x8023C6B8: sh          $zero, 0x1C($s1)
    MEM_H(0X1C, ctx->r17) = 0;
    // 0x8023C6BC: ori         $v0, $v1, 0x1
    ctx->r2 = ctx->r3 | 0X1;
    // 0x8023C6C0: sb          $v0, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r2;
L_8023C6C4:
    // 0x8023C6C4: lbu         $v0, 0xF($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XF);
    // 0x8023C6C8: andi        $v0, $v0, 0xCF
    ctx->r2 = ctx->r2 & 0XCF;
    // 0x8023C6CC: sb          $v0, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r2;
L_8023C6D0:
    // 0x8023C6D0: lbu         $v0, 0x3($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X3);
    // 0x8023C6D4: addiu       $v1, $s6, 0x1
    ctx->r3 = ADD32(ctx->r22, 0X1);
    // 0x8023C6D8: addu        $s6, $v1, $zero
    ctx->r22 = ADD32(ctx->r3, 0);
    // 0x8023C6DC: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8023C6E0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023C6E4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023C6E8: lh          $v0, 0x65C0($at)
    ctx->r2 = MEM_H(ctx->r1, 0X65C0);
    // 0x8023C6EC: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8023C6F0: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8023C6F4: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8023C6F8: bne         $v1, $zero, L_8023C4E0
    if (ctx->r3 != 0) {
        // 0x8023C6FC: sll         $v0, $s6, 16
        ctx->r2 = S32(ctx->r22 << 16);
            goto L_8023C4E0;
    }
    // 0x8023C6FC: sll         $v0, $s6, 16
    ctx->r2 = S32(ctx->r22 << 16);
L_8023C700:
    // 0x8023C700: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x8023C704: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8023C708: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8023C70C: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8023C710: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8023C714: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8023C718: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8023C71C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8023C720: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023C724: jr          $ra
    // 0x8023C728: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8023C728: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80238034_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238034: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80238038: lw          $v1, -0x3A2C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A2C);
    // 0x8023803C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80238040: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80238044: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80238048: lw          $v0, 0x1C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1C);
    // 0x8023804C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80238050: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80238054: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x80238058: lw          $v1, 0x24($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X24);
    // 0x8023805C: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x80238060: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    // 0x80238064: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80238068: beq         $v0, $zero, L_8023807C
    if (ctx->r2 == 0) {
        // 0x8023806C: sw          $v1, 0x24($s0)
        MEM_W(0X24, ctx->r16) = ctx->r3;
            goto L_8023807C;
    }
    // 0x8023806C: sw          $v1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r3;
    // 0x80238070: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x80238074: j           L_80238084
    // 0x80238078: lui         $v1, 0xFFF8
    ctx->r3 = S32(0XFFF8 << 16);
        goto L_80238084;
    // 0x80238078: lui         $v1, 0xFFF8
    ctx->r3 = S32(0XFFF8 << 16);
L_8023807C:
    // 0x8023807C: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x80238080: lui         $v1, 0x8
    ctx->r3 = S32(0X8 << 16);
L_80238084:
    // 0x80238084: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80238088: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8023808C: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80238090: jal         0x8004DD04
    // 0x80238094: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_0;
    // 0x80238094: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x80238098: jal         0x8005044C
    // 0x8023809C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x8023809C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802380A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802380A4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802380A8: jr          $ra
    // 0x802380AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802380AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023B5A0_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B5A0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023B5A4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023B5A8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023B5AC: addiu       $a0, $s1, 0x38
    ctx->r4 = ADD32(ctx->r17, 0X38);
    // 0x8023B5B0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023B5B4: jal         0x8003E6BC
    // 0x8023B5B8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_0;
    // 0x8023B5B8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x8023B5BC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8023B5C0: addiu       $a0, $a0, 0x49C4
    ctx->r4 = ADD32(ctx->r4, 0X49C4);
    // 0x8023B5C4: jal         0x8003E6BC
    // 0x8023B5C8: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_1;
    // 0x8023B5C8: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_1:
    // 0x8023B5CC: bne         $s0, $v0, L_8023B5F4
    if (ctx->r16 != ctx->r2) {
        // 0x8023B5D0: nop
    
            goto L_8023B5F4;
    }
    // 0x8023B5D0: nop

    // 0x8023B5D4: jal         0x8006033C
    // 0x8023B5D8: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x8023B5D8: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    after_2:
    // 0x8023B5DC: beq         $v0, $zero, L_8023B5F4
    if (ctx->r2 == 0) {
        // 0x8023B5E0: addiu       $v1, $zero, 0x18
        ctx->r3 = ADD32(0, 0X18);
            goto L_8023B5F4;
    }
    // 0x8023B5E0: addiu       $v1, $zero, 0x18
    ctx->r3 = ADD32(0, 0X18);
    // 0x8023B5E4: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x8023B5E8: sb          $v1, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r3;
    // 0x8023B5EC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023B5F0: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_8023B5F4:
    // 0x8023B5F4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023B5F8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023B5FC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023B600: jr          $ra
    // 0x8023B604: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023B604: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80229EA8_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229EA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229EAC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229EB0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229EB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80229EB8: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x80229EBC: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80229EC0: bne         $v1, $v0, L_80229EE8
    if (ctx->r3 != ctx->r2) {
        // 0x80229EC4: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_80229EE8;
    }
    // 0x80229EC4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80229EC8: lw          $v1, 0x28($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X28);
    // 0x80229ECC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80229ED0: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
    // 0x80229ED4: lw          $v1, 0x28($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X28);
    // 0x80229ED8: addiu       $a1, $zero, 0x3A
    ctx->r5 = ADD32(0, 0X3A);
    // 0x80229EDC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229EE0: jal         0x800616FC
    // 0x80229EE4: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
    func_800616FC_3CAFC(rdram, ctx);
        goto after_0;
    // 0x80229EE4: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
    after_0:
L_80229EE8:
    // 0x80229EE8: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x80229EEC: slti        $v0, $v0, 0x20
    ctx->r2 = SIGNED(ctx->r2) < 0X20 ? 1 : 0;
    // 0x80229EF0: bne         $v0, $zero, L_80229F14
    if (ctx->r2 != 0) {
        // 0x80229EF4: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_80229F14;
    }
    // 0x80229EF4: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80229EF8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80229EFC: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80229F00: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80229F04: bne         $v0, $zero, L_80229F14
    if (ctx->r2 != 0) {
        // 0x80229F08: nop
    
            goto L_80229F14;
    }
    // 0x80229F08: nop

    // 0x80229F0C: jal         0x800600F8
    // 0x80229F10: nop

    func_800600F8_3B4F8(rdram, ctx);
        goto after_1;
    // 0x80229F10: nop

    after_1:
L_80229F14:
    // 0x80229F14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80229F18: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229F1C: jr          $ra
    // 0x80229F20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229F20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228AAC_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228AAC: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80228AB0: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x80228AB4: bne         $v1, $v0, L_80228ACC
    if (ctx->r3 != ctx->r2) {
        // 0x80228AB8: addiu       $v1, $zero, 0x12
        ctx->r3 = ADD32(0, 0X12);
            goto L_80228ACC;
    }
    // 0x80228AB8: addiu       $v1, $zero, 0x12
    ctx->r3 = ADD32(0, 0X12);
    // 0x80228ABC: lw          $v0, 0x28($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X28);
    // 0x80228AC0: sb          $v1, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r3;
    // 0x80228AC4: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
    // 0x80228AC8: sb          $zero, 0xD($v0)
    MEM_B(0XD, ctx->r2) = 0;
L_80228ACC:
    // 0x80228ACC: jr          $ra
    // 0x80228AD0: nop

    TRACE_RETURN()
    return;
    // 0x80228AD0: nop

;}
RECOMP_FUNC void func_8023AEE0_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023AEE0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8023AEE4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8023AEE8: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x8023AEEC: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8023AEF0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8023AEF4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8023AEF8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8023AEFC: lhu         $v0, 0x4C2($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X4C2);
    // 0x8023AF00: bne         $v0, $zero, L_8023AF80
    if (ctx->r2 != 0) {
        // 0x8023AF04: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8023AF80;
    }
    // 0x8023AF04: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8023AF08: addiu       $s1, $s3, 0x478
    ctx->r17 = ADD32(ctx->r19, 0X478);
    // 0x8023AF0C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023AF10: addiu       $s2, $s3, 0x14
    ctx->r18 = ADD32(ctx->r19, 0X14);
    // 0x8023AF14: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8023AF18: jal         0x8009A3B4
    // 0x8023AF1C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8023AF1C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8023AF20: addiu       $s0, $s3, 0x480
    ctx->r16 = ADD32(ctx->r19, 0X480);
    // 0x8023AF24: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023AF28: addiu       $a1, $s3, 0x1C
    ctx->r5 = ADD32(ctx->r19, 0X1C);
    // 0x8023AF2C: jal         0x8009A3B4
    // 0x8023AF30: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8023AF30: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8023AF34: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023AF38: lh          $a2, 0x56($s3)
    ctx->r6 = MEM_H(ctx->r19, 0X56);
    // 0x8023AF3C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8023AF40: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x8023AF44: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8023AF48: jal         0x8004DBA0
    // 0x8023AF4C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_2;
    // 0x8023AF4C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_2:
    // 0x8023AF50: lw          $a2, 0x78($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X78);
    // 0x8023AF54: lbu         $a3, 0x1($s3)
    ctx->r7 = MEM_BU(ctx->r19, 0X1);
    // 0x8023AF58: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023AF5C: jal         0x8003F780
    // 0x8023AF60: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_8003F780_1AB80(rdram, ctx);
        goto after_3;
    // 0x8023AF60: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_3:
    // 0x8023AF64: beq         $v0, $zero, L_8023AF7C
    if (ctx->r2 == 0) {
        // 0x8023AF68: sw          $v0, 0x4BC($s3)
        MEM_W(0X4BC, ctx->r19) = ctx->r2;
            goto L_8023AF7C;
    }
    // 0x8023AF68: sw          $v0, 0x4BC($s3)
    MEM_W(0X4BC, ctx->r19) = ctx->r2;
    // 0x8023AF6C: jal         0x800715F8
    // 0x8023AF70: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_800715F8_4C9F8(rdram, ctx);
        goto after_4;
    // 0x8023AF70: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_4:
    // 0x8023AF74: bgtz        $v0, L_8023AF80
    if (SIGNED(ctx->r2) > 0) {
        // 0x8023AF78: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023AF80;
    }
    // 0x8023AF78: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8023AF7C:
    // 0x8023AF7C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8023AF80:
    // 0x8023AF80: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8023AF84: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8023AF88: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8023AF8C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8023AF90: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023AF94: jr          $ra
    // 0x8023AF98: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8023AF98: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022DF58_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DF58: lhu         $v0, 0x350($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X350);
    // 0x8022DF5C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022DF60: sh          $v0, 0x350($a0)
    MEM_H(0X350, ctx->r4) = ctx->r2;
    // 0x8022DF64: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022DF68: bne         $v0, $zero, L_8022DF74
    if (ctx->r2 != 0) {
        // 0x8022DF6C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022DF74;
    }
    // 0x8022DF6C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022DF70: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_8022DF74:
    // 0x8022DF74: jr          $ra
    // 0x8022DF78: nop

    TRACE_RETURN()
    return;
    // 0x8022DF78: nop

;}
RECOMP_FUNC void func_8023FDB8_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023FDB8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8023FDBC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8023FDC0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023FDC4: addiu       $a0, $s0, 0xAC
    ctx->r4 = ADD32(ctx->r16, 0XAC);
    // 0x8023FDC8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8023FDCC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8023FDD0: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8023FDD4: jal         0x8009A3B4
    // 0x8023FDD8: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8023FDD8: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    after_0:
    // 0x8023FDDC: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8023FDE0: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x8023FDE4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023FDE8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023FDEC: sw          $zero, 0x54($s0)
    MEM_W(0X54, ctx->r16) = 0;
    // 0x8023FDF0: sw          $zero, 0x58($s0)
    MEM_W(0X58, ctx->r16) = 0;
    // 0x8023FDF4: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x8023FDF8: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
    // 0x8023FDFC: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x8023FE00: sw          $zero, 0x70($s0)
    MEM_W(0X70, ctx->r16) = 0;
    // 0x8023FE04: sw          $zero, 0x74($s0)
    MEM_W(0X74, ctx->r16) = 0;
    // 0x8023FE08: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8023FE0C: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8023FE10: ori         $v1, $v1, 0x4
    ctx->r3 = ctx->r3 | 0X4;
    // 0x8023FE14: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x8023FE18: andi        $v0, $v0, 0xE00
    ctx->r2 = ctx->r2 & 0XE00;
    // 0x8023FE1C: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    // 0x8023FE20: jal         0x8004D5D4
    // 0x8023FE24: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_1;
    // 0x8023FE24: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_1:
    // 0x8023FE28: addiu       $a0, $s0, 0x54
    ctx->r4 = ADD32(ctx->r16, 0X54);
    // 0x8023FE2C: addiu       $s1, $s0, 0x8C
    ctx->r17 = ADD32(ctx->r16, 0X8C);
    // 0x8023FE30: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023FE34: sh          $zero, 0xC0($s0)
    MEM_H(0XC0, ctx->r16) = 0;
    // 0x8023FE38: jal         0x80031600
    // 0x8023FE3C: sw          $zero, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = 0;
    func_80031600_CA00(rdram, ctx);
        goto after_2;
    // 0x8023FE3C: sw          $zero, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = 0;
    after_2:
    // 0x8023FE40: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023FE44: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8023FE48: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8023FE4C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8023FE50: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8023FE54: jal         0x80031DA8
    // 0x8023FE58: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_3;
    // 0x8023FE58: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_3:
    // 0x8023FE5C: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x8023FE60: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x8023FE64: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x8023FE68: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    // 0x8023FE6C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8023FE70: addiu       $v0, $v0, 0x6CB4
    ctx->r2 = ADD32(ctx->r2, 0X6CB4);
    // 0x8023FE74: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x8023FE78: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023FE7C: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x8023FE80: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8023FE84: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8023FE88: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8023FE8C: sw          $v1, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r3;
    // 0x8023FE90: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8023FE94: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8023FE98: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8023FE9C: jr          $ra
    // 0x8023FEA0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8023FEA0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8023701C_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023701C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80237020: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80237024: jal         0x8004F418
    // 0x80237028: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x80237028: nop

    after_0:
    // 0x8023702C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80237030: jr          $ra
    // 0x80237034: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80237034: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80237038: nop

    // 0x8023703C: nop

;}
RECOMP_FUNC void func_8023DE3C_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023DE3C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023DE40: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023DE44: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023DE48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023DE4C: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x8023DE50: beq         $v1, $zero, L_8023DE74
    if (ctx->r3 == 0) {
        // 0x8023DE54: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023DE74;
    }
    // 0x8023DE54: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023DE58: bne         $v1, $v0, L_8023DE68
    if (ctx->r3 != ctx->r2) {
        // 0x8023DE5C: addiu       $a0, $zero, 0x142
        ctx->r4 = ADD32(0, 0X142);
            goto L_8023DE68;
    }
    // 0x8023DE5C: addiu       $a0, $zero, 0x142
    ctx->r4 = ADD32(0, 0X142);
    // 0x8023DE60: jal         0x8002A33C
    // 0x8023DE64: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x8023DE64: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_0:
L_8023DE68:
    // 0x8023DE68: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x8023DE6C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023DE70: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
L_8023DE74:
    // 0x8023DE74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023DE78: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023DE7C: jr          $ra
    // 0x8023DE80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023DE80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80238FC0_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238FC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80238FC4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80238FC8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80238FCC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80238FD0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80238FD4: bne         $v0, $zero, L_80239008
    if (ctx->r2 != 0) {
        // 0x80238FD8: addiu       $a1, $s0, 0x4E0
        ctx->r5 = ADD32(ctx->r16, 0X4E0);
            goto L_80239008;
    }
    // 0x80238FD8: addiu       $a1, $s0, 0x4E0
    ctx->r5 = ADD32(ctx->r16, 0X4E0);
    // 0x80238FDC: addiu       $v0, $zero, -0x39
    ctx->r2 = ADD32(0, -0X39);
    // 0x80238FE0: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x80238FE4: addiu       $v0, $zero, 0x1D
    ctx->r2 = ADD32(0, 0X1D);
    // 0x80238FE8: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80238FEC: addiu       $v0, $zero, -0x352
    ctx->r2 = ADD32(0, -0X352);
    // 0x80238FF0: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x80238FF4: jal         0x80239590
    // 0x80238FF8: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    func_80239590_ovl5(rdram, ctx);
        goto after_0;
    // 0x80238FF8: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    after_0:
    // 0x80238FFC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80239000: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80239004: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80239008:
    // 0x80239008: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023900C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80239010: jr          $ra
    // 0x80239014: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80239014: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80234F1C_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234F1C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80234F20: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80234F24: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80234F28: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x80234F2C: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80234F30: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80234F34: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80234F38: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x80234F3C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80234F40: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80234F44: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80234F48: addiu       $s1, $s0, 0x338
    ctx->r17 = ADD32(ctx->r16, 0X338);
    // 0x80234F4C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80234F50: lbu         $v0, 0xA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XA);
    // 0x80234F54: addiu       $a1, $s0, 0x180
    ctx->r5 = ADD32(ctx->r16, 0X180);
    // 0x80234F58: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80234F5C: jal         0x8009A3B4
    // 0x80234F60: sh          $v0, 0x334($s0)
    MEM_H(0X334, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80234F60: sh          $v0, 0x334($s0)
    MEM_H(0X334, ctx->r16) = ctx->r2;
    after_0:
    // 0x80234F64: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80234F68: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80234F6C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x80234F70: addiu       $v0, $s0, 0x340
    ctx->r2 = ADD32(ctx->r16, 0X340);
    // 0x80234F74: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80234F78: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80234F7C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x80234F80: lhu         $v1, 0x334($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X334);
    // 0x80234F84: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x80234F88: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x80234F8C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80234F90: lui         $v0, 0x488
    ctx->r2 = S32(0X488 << 16);
    // 0x80234F94: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80234F98: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80234F9C: jal         0x80051E18
    // 0x80234FA0: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_1;
    // 0x80234FA0: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_1:
    // 0x80234FA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80234FA8: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x80234FAC: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80234FB0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80234FB4: jr          $ra
    // 0x80234FB8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80234FB8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80232850_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232850: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80232854: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232858: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023285C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80232860: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80232864: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80232868: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x8023286C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80232870: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80232874: jal         0x8009A3B4
    // 0x80232878: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80232878: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    after_0:
    // 0x8023287C: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80232880: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80232884: jal         0x8009A3B4
    // 0x80232888: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80232888: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8023288C: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80232890: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80232894: jal         0x8009A3B4
    // 0x80232898: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80232898: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8023289C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x802328A0: jal         0x800A3450
    // 0x802328A4: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x802328A4: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    after_3:
    // 0x802328A8: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x802328AC: sh          $v0, 0x32E($s0)
    MEM_H(0X32E, ctx->r16) = ctx->r2;
    // 0x802328B0: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x802328B4: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802328B8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802328BC: lw          $v0, 0x5D20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X5D20);
    // 0x802328C0: jalr        $v0
    // 0x802328C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x802328C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x802328C8: lhu         $v0, 0x32C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X32C);
    // 0x802328CC: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x802328D0: beq         $v0, $zero, L_802329BC
    if (ctx->r2 == 0) {
        // 0x802328D4: addiu       $s1, $s0, 0x328
        ctx->r17 = ADD32(ctx->r16, 0X328);
            goto L_802329BC;
    }
    // 0x802328D4: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x802328D8: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x802328DC: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x802328E0: beq         $v0, $a1, L_802328F8
    if (ctx->r2 == ctx->r5) {
        // 0x802328E4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802328F8;
    }
    // 0x802328E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802328E8: jal         0x800502EC
    // 0x802328EC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800502EC_2B6EC(rdram, ctx);
        goto after_5;
    // 0x802328EC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x802328F0: j           L_80232900
    // 0x802328F4: nop

        goto L_80232900;
    // 0x802328F4: nop

L_802328F8:
    // 0x802328F8: jal         0x800504EC
    // 0x802328FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800504EC_2B8EC(rdram, ctx);
        goto after_6;
    // 0x802328FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
L_80232900:
    // 0x80232900: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80232904: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80232908: beq         $v1, $v0, L_802329AC
    if (ctx->r3 == ctx->r2) {
        // 0x8023290C: nop
    
            goto L_802329AC;
    }
    // 0x8023290C: nop

    // 0x80232910: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80232914: andi        $v0, $v0, 0x100
    ctx->r2 = ctx->r2 & 0X100;
    // 0x80232918: beq         $v0, $zero, L_8023295C
    if (ctx->r2 == 0) {
        // 0x8023291C: nop
    
            goto L_8023295C;
    }
    // 0x8023291C: nop

    // 0x80232920: lb          $v1, 0x3D($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X3D);
    // 0x80232924: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80232928: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023292C: lhu         $v1, 0x38($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X38);
    // 0x80232930: lb          $a0, 0x3D($s1)
    ctx->r4 = MEM_B(ctx->r17, 0X3D);
    // 0x80232934: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80232938: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023293C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80232940: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x80232944: sh          $v1, 0x38($s1)
    MEM_H(0X38, ctx->r17) = ctx->r3;
    // 0x80232948: lhu         $v1, 0x3A($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X3A);
    // 0x8023294C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80232950: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80232954: j           L_8023298C
    // 0x80232958: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
        goto L_8023298C;
    // 0x80232958: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
L_8023295C:
    // 0x8023295C: lhu         $v0, 0x44($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X44);
    // 0x80232960: lhu         $v1, 0x38($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X38);
    // 0x80232964: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80232968: sra         $v0, $v0, 17
    ctx->r2 = S32(SIGNED(ctx->r2) >> 17);
    // 0x8023296C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80232970: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80232974: sh          $v1, 0x38($s1)
    MEM_H(0X38, ctx->r17) = ctx->r3;
    // 0x80232978: lhu         $v0, 0x44($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X44);
    // 0x8023297C: lhu         $v1, 0x3A($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X3A);
    // 0x80232980: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80232984: sra         $v0, $v0, 17
    ctx->r2 = S32(SIGNED(ctx->r2) >> 17);
    // 0x80232988: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
L_8023298C:
    // 0x8023298C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80232990: sh          $v1, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r3;
    // 0x80232994: lhu         $v0, 0x38($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X38);
    // 0x80232998: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8023299C: sh          $v0, -0x3D68($at)
    MEM_H(-0X3D68, ctx->r1) = ctx->r2;
    // 0x802329A0: lhu         $v0, 0x3A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3A);
    // 0x802329A4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x802329A8: sh          $v0, -0x3D60($at)
    MEM_H(-0X3D60, ctx->r1) = ctx->r2;
L_802329AC:
    // 0x802329AC: jal         0x80051248
    // 0x802329B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80051248_2C648(rdram, ctx);
        goto after_7;
    // 0x802329B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x802329B4: j           L_802329CC
    // 0x802329B8: nop

        goto L_802329CC;
    // 0x802329B8: nop

L_802329BC:
    // 0x802329BC: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x802329C0: lbu         $a2, 0xA4($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0XA4);
    // 0x802329C4: jal         0x80050294
    // 0x802329C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_8;
    // 0x802329C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
L_802329CC:
    // 0x802329CC: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x802329D0: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x802329D4: beq         $v0, $zero, L_802329E8
    if (ctx->r2 == 0) {
        // 0x802329D8: addiu       $a0, $s0, 0x180
        ctx->r4 = ADD32(ctx->r16, 0X180);
            goto L_802329E8;
    }
    // 0x802329D8: addiu       $a0, $s0, 0x180
    ctx->r4 = ADD32(ctx->r16, 0X180);
    // 0x802329DC: jal         0x80233E84
    // 0x802329E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80233E84_ovl5(rdram, ctx);
        goto after_9;
    // 0x802329E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
    // 0x802329E4: addiu       $a0, $s0, 0x180
    ctx->r4 = ADD32(ctx->r16, 0X180);
L_802329E8:
    // 0x802329E8: addiu       $a1, $zero, 0xC0
    ctx->r5 = ADD32(0, 0XC0);
    // 0x802329EC: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x802329F0: jal         0x8003B6B8
    // 0x802329F4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B6B8_16AB8(rdram, ctx);
        goto after_10;
    // 0x802329F4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_10:
    // 0x802329F8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802329FC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80232A00: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232A04: jr          $ra
    // 0x80232A08: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80232A08: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802289E0_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802289E0: jr          $ra
    // 0x802289E4: nop

    TRACE_RETURN()
    return;
    // 0x802289E4: nop

;}
RECOMP_FUNC void func_80241F14_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80241F14: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80241F18: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80241F1C: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80241F20: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80241F24: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80241F28: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80241F2C: lb          $v1, 0xF($s2)
    ctx->r3 = MEM_B(ctx->r18, 0XF);
    // 0x80241F30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80241F34: bne         $v1, $v0, L_80242000
    if (ctx->r3 != ctx->r2) {
        // 0x80241F38: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_80242000;
    }
    // 0x80241F38: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
L_80241F3C:
    // 0x80241F3C: jal         0x800A3450
    // 0x80241F40: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80241F40: nop

    after_0:
    // 0x80241F44: lb          $v1, 0xE($s2)
    ctx->r3 = MEM_B(ctx->r18, 0XE);
    // 0x80241F48: andi        $a1, $s1, 0xFF
    ctx->r5 = ctx->r17 & 0XFF;
    // 0x80241F4C: sll         $s0, $a1, 3
    ctx->r16 = S32(ctx->r5 << 3);
    // 0x80241F50: sll         $a0, $v1, 7
    ctx->r4 = S32(ctx->r3 << 7);
    // 0x80241F54: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80241F58: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80241F5C: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80241F60: lhu         $v1, 0x6E98($at)
    ctx->r3 = MEM_HU(ctx->r1, 0X6E98);
    // 0x80241F64: andi        $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 & 0X7F;
    // 0x80241F68: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    // 0x80241F6C: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80241F70: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80241F74: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x80241F78: sh          $v1, 0x7640($at)
    MEM_H(0X7640, ctx->r1) = ctx->r3;
    // 0x80241F7C: lb          $v1, 0xE($s2)
    ctx->r3 = MEM_B(ctx->r18, 0XE);
    // 0x80241F80: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // 0x80241F84: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80241F88: sll         $a0, $v1, 7
    ctx->r4 = S32(ctx->r3 << 7);
    // 0x80241F8C: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80241F90: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80241F94: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80241F98: lhu         $v1, 0x6E9A($at)
    ctx->r3 = MEM_HU(ctx->r1, 0X6E9A);
    // 0x80241F9C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80241FA0: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    // 0x80241FA4: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80241FA8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80241FAC: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x80241FB0: sh          $v1, 0x7642($at)
    MEM_H(0X7642, ctx->r1) = ctx->r3;
    // 0x80241FB4: jal         0x800A3450
    // 0x80241FB8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x80241FB8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    after_1:
    // 0x80241FBC: lb          $v1, 0xE($s2)
    ctx->r3 = MEM_B(ctx->r18, 0XE);
    // 0x80241FC0: sll         $a0, $v1, 7
    ctx->r4 = S32(ctx->r3 << 7);
    // 0x80241FC4: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80241FC8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80241FCC: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80241FD0: lhu         $v1, 0x6E9C($at)
    ctx->r3 = MEM_HU(ctx->r1, 0X6E9C);
    // 0x80241FD4: andi        $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 & 0X7F;
    // 0x80241FD8: addu        $s0, $s0, $a0
    ctx->r16 = ADD32(ctx->r16, ctx->r4);
    // 0x80241FDC: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80241FE0: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
    // 0x80241FE4: sltiu       $v0, $v0, 0x10
    ctx->r2 = ctx->r2 < 0X10 ? 1 : 0;
    // 0x80241FE8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80241FEC: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x80241FF0: sh          $v1, 0x7644($at)
    MEM_H(0X7644, ctx->r1) = ctx->r3;
    // 0x80241FF4: bne         $v0, $zero, L_80241F3C
    if (ctx->r2 != 0) {
        // 0x80241FF8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80241F3C;
    }
    // 0x80241FF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80241FFC: sb          $v0, 0xD($s2)
    MEM_B(0XD, ctx->r18) = ctx->r2;
L_80242000:
    // 0x80242000: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80242004: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80242008: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8024200C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80242010: jr          $ra
    // 0x80242014: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80242014: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802282BC_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802282BC: jr          $ra
    // 0x802282C0: nop

    TRACE_RETURN()
    return;
    // 0x802282C0: nop

;}
RECOMP_FUNC void func_8022E624_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E624: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E628: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022E62C: lbu         $v0, 0x34B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34B);
    // 0x8022E630: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022E634: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022E638: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022E63C: lw          $v0, 0x5BA0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X5BA0);
    // 0x8022E640: jalr        $v0
    // 0x8022E644: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022E644: nop

    after_0:
    // 0x8022E648: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022E64C: jr          $ra
    // 0x8022E650: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E650: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80232E98_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232E98: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80232E9C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80232EA0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232EA4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80232EA8: lh          $v0, 0x330($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X330);
    // 0x80232EAC: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x80232EB0: beq         $v0, $zero, L_80232EC4
    if (ctx->r2 == 0) {
        // 0x80232EB4: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80232EC4;
    }
    // 0x80232EB4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80232EB8: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80232EBC: j           L_80232EE4
    // 0x80232EC0: sh          $v0, 0x330($s0)
    MEM_H(0X330, ctx->r16) = ctx->r2;
        goto L_80232EE4;
    // 0x80232EC0: sh          $v0, 0x330($s0)
    MEM_H(0X330, ctx->r16) = ctx->r2;
L_80232EC4:
    // 0x80232EC4: jal         0x8003E934
    // 0x80232EC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_0;
    // 0x80232EC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80232ECC: lhu         $v1, 0x32C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X32C);
    // 0x80232ED0: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80232ED4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80232ED8: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80232EDC: ori         $v1, $v1, 0x81
    ctx->r3 = ctx->r3 | 0X81;
    // 0x80232EE0: sh          $v1, 0x32C($s0)
    MEM_H(0X32C, ctx->r16) = ctx->r3;
L_80232EE4:
    // 0x80232EE4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80232EE8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80232EEC: jr          $ra
    // 0x80232EF0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80232EF0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023D600_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023D600: slti        $v0, $a0, 0x9C
    ctx->r2 = SIGNED(ctx->r4) < 0X9C ? 1 : 0;
    // 0x8023D604: beq         $v0, $zero, L_8023D618
    if (ctx->r2 == 0) {
        // 0x8023D608: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023D618;
    }
    // 0x8023D608: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023D60C: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8023D610: lw          $v1, 0x75C0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X75C0);
    // 0x8023D614: sb          $v0, 0xF($v1)
    MEM_B(0XF, ctx->r3) = ctx->r2;
L_8023D618:
    // 0x8023D618: slti        $v0, $a0, 0x7D
    ctx->r2 = SIGNED(ctx->r4) < 0X7D ? 1 : 0;
    // 0x8023D61C: beq         $v0, $zero, L_8023D630
    if (ctx->r2 == 0) {
        // 0x8023D620: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023D630;
    }
    // 0x8023D620: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023D624: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8023D628: lw          $v1, 0x75C4($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X75C4);
    // 0x8023D62C: sb          $v0, 0xF($v1)
    MEM_B(0XF, ctx->r3) = ctx->r2;
L_8023D630:
    // 0x8023D630: slti        $v0, $a0, 0x5E
    ctx->r2 = SIGNED(ctx->r4) < 0X5E ? 1 : 0;
    // 0x8023D634: beq         $v0, $zero, L_8023D648
    if (ctx->r2 == 0) {
        // 0x8023D638: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023D648;
    }
    // 0x8023D638: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023D63C: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8023D640: lw          $v1, 0x75C8($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X75C8);
    // 0x8023D644: sb          $v0, 0xF($v1)
    MEM_B(0XF, ctx->r3) = ctx->r2;
L_8023D648:
    // 0x8023D648: slti        $v0, $a0, 0x3E
    ctx->r2 = SIGNED(ctx->r4) < 0X3E ? 1 : 0;
    // 0x8023D64C: beq         $v0, $zero, L_8023D660
    if (ctx->r2 == 0) {
        // 0x8023D650: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023D660;
    }
    // 0x8023D650: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023D654: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8023D658: lw          $v1, 0x75CC($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X75CC);
    // 0x8023D65C: sb          $v0, 0xF($v1)
    MEM_B(0XF, ctx->r3) = ctx->r2;
L_8023D660:
    // 0x8023D660: slti        $v0, $a0, 0x1F
    ctx->r2 = SIGNED(ctx->r4) < 0X1F ? 1 : 0;
    // 0x8023D664: beq         $v0, $zero, L_8023D678
    if (ctx->r2 == 0) {
        // 0x8023D668: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023D678;
    }
    // 0x8023D668: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023D66C: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8023D670: lw          $v1, 0x75D0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X75D0);
    // 0x8023D674: sb          $v0, 0xF($v1)
    MEM_B(0XF, ctx->r3) = ctx->r2;
L_8023D678:
    // 0x8023D678: bne         $a0, $zero, L_8023D6B4
    if (ctx->r4 != 0) {
        // 0x8023D67C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023D6B4;
    }
    // 0x8023D67C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023D680: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023D684: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8023D688: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8023D68C: lw          $v1, 0x75D4($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X75D4);
    // 0x8023D690: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8023D694: addiu       $a0, $a0, 0x75C0
    ctx->r4 = ADD32(ctx->r4, 0X75C0);
    // 0x8023D698: sb          $v0, 0xF($v1)
    MEM_B(0XF, ctx->r3) = ctx->r2;
L_8023D69C:
    // 0x8023D69C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8023D6A0: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8023D6A4: sh          $a2, 0x26($v0)
    MEM_H(0X26, ctx->r2) = ctx->r6;
    // 0x8023D6A8: slti        $v0, $a1, 0x6
    ctx->r2 = SIGNED(ctx->r5) < 0X6 ? 1 : 0;
    // 0x8023D6AC: bne         $v0, $zero, L_8023D69C
    if (ctx->r2 != 0) {
        // 0x8023D6B0: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_8023D69C;
    }
    // 0x8023D6B0: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
L_8023D6B4:
    // 0x8023D6B4: jr          $ra
    // 0x8023D6B8: nop

    TRACE_RETURN()
    return;
    // 0x8023D6B8: nop

    // 0x8023D6BC: nop

;}
RECOMP_FUNC void func_802322E4_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802322E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802322E8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802322EC: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x802322F0: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x802322F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802322F8: jal         0x80072168
    // 0x802322FC: addiu       $a1, $zero, 0x205
    ctx->r5 = ADD32(0, 0X205);
    func_80072168_4D568(rdram, ctx);
        goto after_0;
    // 0x802322FC: addiu       $a1, $zero, 0x205
    ctx->r5 = ADD32(0, 0X205);
    after_0:
    // 0x80232300: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x80232304: beq         $v0, $v1, L_80232328
    if (ctx->r2 == ctx->r3) {
        // 0x80232308: addiu       $v0, $zero, 0x1F4
        ctx->r2 = ADD32(0, 0X1F4);
            goto L_80232328;
    }
    // 0x80232308: addiu       $v0, $zero, 0x1F4
    ctx->r2 = ADD32(0, 0X1F4);
    // 0x8023230C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80232310: lw          $v1, -0x3BF0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3BF0);
    // 0x80232314: beq         $v1, $v0, L_8023232C
    if (ctx->r3 == ctx->r2) {
        // 0x80232318: addiu       $a0, $zero, 0x6
        ctx->r4 = ADD32(0, 0X6);
            goto L_8023232C;
    }
    // 0x80232318: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x8023231C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x80232320: jal         0x8006036C
    // 0x80232324: addiu       $a0, $zero, 0x23D
    ctx->r4 = ADD32(0, 0X23D);
    func_8006036C_3B76C(rdram, ctx);
        goto after_1;
    // 0x80232324: addiu       $a0, $zero, 0x23D
    ctx->r4 = ADD32(0, 0X23D);
    after_1:
L_80232328:
    // 0x80232328: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
L_8023232C:
    // 0x8023232C: jal         0x80072168
    // 0x80232330: addiu       $a1, $zero, 0xFC
    ctx->r5 = ADD32(0, 0XFC);
    func_80072168_4D568(rdram, ctx);
        goto after_2;
    // 0x80232330: addiu       $a1, $zero, 0xFC
    ctx->r5 = ADD32(0, 0XFC);
    after_2:
    // 0x80232334: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x80232338: beq         $v0, $v1, L_8023235C
    if (ctx->r2 == ctx->r3) {
        // 0x8023233C: addiu       $v0, $zero, 0xC8
        ctx->r2 = ADD32(0, 0XC8);
            goto L_8023235C;
    }
    // 0x8023233C: addiu       $v0, $zero, 0xC8
    ctx->r2 = ADD32(0, 0XC8);
    // 0x80232340: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80232344: lw          $v1, -0x3BEC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3BEC);
    // 0x80232348: beq         $v1, $v0, L_80232360
    if (ctx->r3 == ctx->r2) {
        // 0x8023234C: addiu       $a0, $zero, 0x6
        ctx->r4 = ADD32(0, 0X6);
            goto L_80232360;
    }
    // 0x8023234C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x80232350: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x80232354: jal         0x8006036C
    // 0x80232358: addiu       $a0, $zero, 0x23E
    ctx->r4 = ADD32(0, 0X23E);
    func_8006036C_3B76C(rdram, ctx);
        goto after_3;
    // 0x80232358: addiu       $a0, $zero, 0x23E
    ctx->r4 = ADD32(0, 0X23E);
    after_3:
L_8023235C:
    // 0x8023235C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
L_80232360:
    // 0x80232360: jal         0x80072168
    // 0x80232364: addiu       $a1, $zero, 0x120
    ctx->r5 = ADD32(0, 0X120);
    func_80072168_4D568(rdram, ctx);
        goto after_4;
    // 0x80232364: addiu       $a1, $zero, 0x120
    ctx->r5 = ADD32(0, 0X120);
    after_4:
    // 0x80232368: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8023236C: beq         $v0, $v1, L_80232390
    if (ctx->r2 == ctx->r3) {
        // 0x80232370: addiu       $v0, $zero, 0xFA
        ctx->r2 = ADD32(0, 0XFA);
            goto L_80232390;
    }
    // 0x80232370: addiu       $v0, $zero, 0xFA
    ctx->r2 = ADD32(0, 0XFA);
    // 0x80232374: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80232378: lw          $v1, -0x3BE8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3BE8);
    // 0x8023237C: beq         $v1, $v0, L_80232394
    if (ctx->r3 == ctx->r2) {
        // 0x80232380: addiu       $a0, $zero, 0x5
        ctx->r4 = ADD32(0, 0X5);
            goto L_80232394;
    }
    // 0x80232380: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x80232384: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x80232388: jal         0x8006036C
    // 0x8023238C: addiu       $a0, $zero, 0x23F
    ctx->r4 = ADD32(0, 0X23F);
    func_8006036C_3B76C(rdram, ctx);
        goto after_5;
    // 0x8023238C: addiu       $a0, $zero, 0x23F
    ctx->r4 = ADD32(0, 0X23F);
    after_5:
L_80232390:
    // 0x80232390: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
L_80232394:
    // 0x80232394: jal         0x80072168
    // 0x80232398: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
    func_80072168_4D568(rdram, ctx);
        goto after_6;
    // 0x80232398: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
    after_6:
    // 0x8023239C: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x802323A0: beq         $v0, $v1, L_802323C4
    if (ctx->r2 == ctx->r3) {
        // 0x802323A4: addiu       $v0, $zero, 0xC8
        ctx->r2 = ADD32(0, 0XC8);
            goto L_802323C4;
    }
    // 0x802323A4: addiu       $v0, $zero, 0xC8
    ctx->r2 = ADD32(0, 0XC8);
    // 0x802323A8: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x802323AC: lw          $v1, -0x3BE4($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3BE4);
    // 0x802323B0: beq         $v1, $v0, L_802323C4
    if (ctx->r3 == ctx->r2) {
        // 0x802323B4: nop
    
            goto L_802323C4;
    }
    // 0x802323B4: nop

    // 0x802323B8: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x802323BC: jal         0x8006036C
    // 0x802323C0: addiu       $a0, $zero, 0x240
    ctx->r4 = ADD32(0, 0X240);
    func_8006036C_3B76C(rdram, ctx);
        goto after_7;
    // 0x802323C0: addiu       $a0, $zero, 0x240
    ctx->r4 = ADD32(0, 0X240);
    after_7:
L_802323C4:
    // 0x802323C4: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x802323C8: lbu         $v0, -0x3BB1($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3BB1);
    // 0x802323CC: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x802323D0: lw          $a0, -0x3BDC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3BDC);
    // 0x802323D4: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x802323D8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802323DC: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
    // 0x802323E0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x802323E4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802323E8: beq         $a0, $v0, L_802323FC
    if (ctx->r4 == ctx->r2) {
        // 0x802323EC: nop
    
            goto L_802323FC;
    }
    // 0x802323EC: nop

    // 0x802323F0: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x802323F4: jal         0x8006036C
    // 0x802323F8: addiu       $a0, $zero, 0x241
    ctx->r4 = ADD32(0, 0X241);
    func_8006036C_3B76C(rdram, ctx);
        goto after_8;
    // 0x802323F8: addiu       $a0, $zero, 0x241
    ctx->r4 = ADD32(0, 0X241);
    after_8:
L_802323FC:
    // 0x802323FC: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80232400: lbu         $v0, -0x3BB2($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3BB2);
    // 0x80232404: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x80232408: lw          $a0, -0x3BE0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3BE0);
    // 0x8023240C: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x80232410: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80232414: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
    // 0x80232418: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8023241C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80232420: beq         $a0, $v0, L_80232438
    if (ctx->r4 == ctx->r2) {
        // 0x80232424: addu        $v0, $s0, $zero
        ctx->r2 = ADD32(ctx->r16, 0);
            goto L_80232438;
    }
    // 0x80232424: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x80232428: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x8023242C: jal         0x8006036C
    // 0x80232430: addiu       $a0, $zero, 0x242
    ctx->r4 = ADD32(0, 0X242);
    func_8006036C_3B76C(rdram, ctx);
        goto after_9;
    // 0x80232430: addiu       $a0, $zero, 0x242
    ctx->r4 = ADD32(0, 0X242);
    after_9:
    // 0x80232434: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_80232438:
    // 0x80232438: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023243C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232440: jr          $ra
    // 0x80232444: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80232444: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80232448: nop

    // 0x8023244C: nop

;}
