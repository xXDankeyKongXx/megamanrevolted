#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80225AA0_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225AA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225AA4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225AA8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225AAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225AB0: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x80225AB4: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80225AB8: beq         $v0, $zero, L_80225ADC
    if (ctx->r2 == 0) {
        // 0x80225ABC: nop
    
            goto L_80225ADC;
    }
    // 0x80225ABC: nop

    // 0x80225AC0: bltz        $v1, L_80225ADC
    if (SIGNED(ctx->r3) < 0) {
        // 0x80225AC4: nop
    
            goto L_80225ADC;
    }
    // 0x80225AC4: nop

    // 0x80225AC8: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225ACC: jal         0x800607C4
    // 0x80225AD0: addiu       $a0, $a0, -0x5CC4
    ctx->r4 = ADD32(ctx->r4, -0X5CC4);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x80225AD0: addiu       $a0, $a0, -0x5CC4
    ctx->r4 = ADD32(ctx->r4, -0X5CC4);
    after_0:
    // 0x80225AD4: addiu       $v0, $zero, 0xE1
    ctx->r2 = ADD32(0, 0XE1);
    // 0x80225AD8: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225ADC:
    // 0x80225ADC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225AE0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225AE4: jr          $ra
    // 0x80225AE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225AE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228860_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228860: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80228864: lw          $v0, 0x4B34($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4B34);
    // 0x80228868: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022886C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80228870: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80228874: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80228878: lui         $s3, 0x8020
    ctx->r19 = S32(0X8020 << 16);
    // 0x8022887C: addiu       $s3, $s3, 0x49B0
    ctx->r19 = ADD32(ctx->r19, 0X49B0);
    // 0x80228880: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80228884: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80228888: bne         $v0, $s1, L_8022896C
    if (ctx->r2 != ctx->r17) {
        // 0x8022888C: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_8022896C;
    }
    // 0x8022888C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228890: addiu       $s0, $s1, 0x14
    ctx->r16 = ADD32(ctx->r17, 0X14);
    // 0x80228894: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228898: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x8022889C: addiu       $s2, $s3, 0x14
    ctx->r18 = ADD32(ctx->r19, 0X14);
    // 0x802288A0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802288A4: jal         0x8004F820
    // 0x802288A8: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x802288A8: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_0:
    // 0x802288AC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802288B0: bgez        $v0, L_802288DC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802288B4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802288DC;
    }
    // 0x802288B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802288B8: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x802288BC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802288C0: jal         0x8004F820
    // 0x802288C4: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x802288C4: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_1:
    // 0x802288C8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802288CC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802288D0: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x802288D4: j           L_802288F4
    // 0x802288D8: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_802288F4;
    // 0x802288D8: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_802288DC:
    // 0x802288DC: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x802288E0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802288E4: jal         0x8004F820
    // 0x802288E8: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x802288E8: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x802288EC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802288F0: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_802288F4:
    // 0x802288F4: sh          $v0, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r2;
    // 0x802288F8: lbu         $v0, 0x0($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X0);
    // 0x802288FC: lbu         $v1, 0xBD($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0XBD);
    // 0x80228900: sw          $zero, 0x184($s3)
    MEM_W(0X184, ctx->r19) = 0;
    // 0x80228904: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80228908: ori         $v1, $v1, 0x40
    ctx->r3 = ctx->r3 | 0X40;
    // 0x8022890C: sb          $v0, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r2;
    // 0x80228910: sb          $v1, 0xBD($s3)
    MEM_B(0XBD, ctx->r19) = ctx->r3;
    // 0x80228914: lh          $v0, 0x180($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X180);
    // 0x80228918: lui         $s0, 0x8023
    ctx->r16 = S32(0X8023 << 16);
    // 0x8022891C: addiu       $s0, $s0, -0x5350
    ctx->r16 = ADD32(ctx->r16, -0X5350);
    // 0x80228920: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x80228924: lh          $v0, 0x182($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X182);
    // 0x80228928: addiu       $v0, $v0, -0x20
    ctx->r2 = ADD32(ctx->r2, -0X20);
    // 0x8022892C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80228930: sw          $v0, -0x534C($at)
    MEM_W(-0X534C, ctx->r1) = ctx->r2;
    // 0x80228934: lh          $v0, 0x184($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X184);
    // 0x80228938: addiu       $a0, $s3, 0x14
    ctx->r4 = ADD32(ctx->r19, 0X14);
    // 0x8022893C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80228940: sw          $v0, -0x5348($at)
    MEM_W(-0X5348, ctx->r1) = ctx->r2;
    // 0x80228944: jal         0x8004EC38
    // 0x80228948: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8004EC38_2A038(rdram, ctx);
        goto after_3;
    // 0x80228948: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_3:
    // 0x8022894C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228950: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x80228954: lw          $a3, 0x435C($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X435C);
    // 0x80228958: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x8022895C: jal         0x80034FCC
    // 0x80228960: addiu       $a2, $v0, 0x800
    ctx->r6 = ADD32(ctx->r2, 0X800);
    func_80034FCC_103CC(rdram, ctx);
        goto after_4;
    // 0x80228960: addiu       $a2, $v0, 0x800
    ctx->r6 = ADD32(ctx->r2, 0X800);
    after_4:
    // 0x80228964: j           L_80228970
    // 0x80228968: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80228970;
    // 0x80228968: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022896C:
    // 0x8022896C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80228970:
    // 0x80228970: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80228974: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80228978: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022897C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80228980: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228984: jr          $ra
    // 0x80228988: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80228988: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80225A14_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225A14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225A18: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225A1C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225A20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225A24: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225A28: bne         $v0, $zero, L_80225A44
    if (ctx->r2 != 0) {
        // 0x80225A2C: nop
    
            goto L_80225A44;
    }
    // 0x80225A2C: nop

    // 0x80225A30: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225A34: jal         0x800607C4
    // 0x80225A38: addiu       $a0, $a0, -0x5CDC
    ctx->r4 = ADD32(ctx->r4, -0X5CDC);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x80225A38: addiu       $a0, $a0, -0x5CDC
    ctx->r4 = ADD32(ctx->r4, -0X5CDC);
    after_0:
    // 0x80225A3C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225A40: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225A44:
    // 0x80225A44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225A48: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225A4C: jr          $ra
    // 0x80225A50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225A50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022577C_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022577C: jr          $ra
    // 0x80225780: nop

    TRACE_RETURN()
    return;
    // 0x80225780: nop

;}
RECOMP_FUNC void func_802261FC_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802261FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226200: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80226204: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80226208: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022620C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226210: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226214: lw          $v0, -0x5684($at)
    ctx->r2 = MEM_W(ctx->r1, -0X5684);
    // 0x80226218: jalr        $v0
    // 0x8022621C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022621C: nop

    after_0:
    // 0x80226220: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80226224: jr          $ra
    // 0x80226228: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226228: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226E2C_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226E2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226E30: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226E34: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226E38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226E3C: lh          $a0, 0x364($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X364);
    // 0x80226E40: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80226E44: jal         0x8004FA7C
    // 0x80226E48: lh          $a2, 0x350($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X350);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x80226E48: lh          $a2, 0x350($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X350);
    after_0:
    // 0x80226E4C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x80226E50: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x80226E54: bne         $v0, $zero, L_80226EA0
    if (ctx->r2 != 0) {
        // 0x80226E58: nop
    
            goto L_80226EA0;
    }
    // 0x80226E58: nop

    // 0x80226E5C: lh          $v0, 0x35E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X35E);
    // 0x80226E60: beq         $v0, $zero, L_80226E74
    if (ctx->r2 == 0) {
        // 0x80226E64: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80226E74;
    }
    // 0x80226E64: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226E68: lhu         $v1, 0x35C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X35C);
    // 0x80226E6C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80226E70: sh          $v0, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = ctx->r2;
L_80226E74:
    // 0x80226E74: lhu         $a0, 0x362($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X362);
    // 0x80226E78: lhu         $v1, 0x366($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X366);
    // 0x80226E7C: lhu         $a1, 0x360($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X360);
    // 0x80226E80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226E84: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80226E88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226E8C: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80226E90: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x80226E94: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80226E98: sh          $v0, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r2;
    // 0x80226E9C: sh          $v1, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r3;
L_80226EA0:
    // 0x80226EA0: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80226EA4: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80226EA8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80226EAC: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80226EB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226EB4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226EB8: jr          $ra
    // 0x80226EBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226EBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225B2C_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225B2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225B30: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225B34: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225B38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225B3C: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x80225B40: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80225B44: beq         $v0, $zero, L_80225B68
    if (ctx->r2 == 0) {
        // 0x80225B48: nop
    
            goto L_80225B68;
    }
    // 0x80225B48: nop

    // 0x80225B4C: bltz        $v1, L_80225B68
    if (SIGNED(ctx->r3) < 0) {
        // 0x80225B50: nop
    
            goto L_80225B68;
    }
    // 0x80225B50: nop

    // 0x80225B54: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225B58: jal         0x800607C4
    // 0x80225B5C: addiu       $a0, $a0, -0x5C94
    ctx->r4 = ADD32(ctx->r4, -0X5C94);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x80225B5C: addiu       $a0, $a0, -0x5C94
    ctx->r4 = ADD32(ctx->r4, -0X5C94);
    after_0:
    // 0x80225B60: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225B64: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225B68:
    // 0x80225B68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225B6C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225B70: jr          $ra
    // 0x80225B74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225B74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022542C_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022542C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225430: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225434: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225438: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022543C: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225440: bne         $v0, $zero, L_8022545C
    if (ctx->r2 != 0) {
        // 0x80225444: nop
    
            goto L_8022545C;
    }
    // 0x80225444: nop

    // 0x80225448: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8022544C: jal         0x800607C4
    // 0x80225450: addiu       $a0, $a0, -0x5D2C
    ctx->r4 = ADD32(ctx->r4, -0X5D2C);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x80225450: addiu       $a0, $a0, -0x5D2C
    ctx->r4 = ADD32(ctx->r4, -0X5D2C);
    after_0:
    // 0x80225454: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225458: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8022545C:
    // 0x8022545C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225460: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225464: jr          $ra
    // 0x80225468: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225468: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225424_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225424: jr          $ra
    // 0x80225428: nop

    TRACE_RETURN()
    return;
    // 0x80225428: nop

;}
RECOMP_FUNC void func_80227968_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227968: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022796C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227970: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227974: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80227978: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022797C: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80227980: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80227984: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x80227988: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x8022798C: bne         $v0, $zero, L_802279E8
    if (ctx->r2 != 0) {
        // 0x80227990: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_802279E8;
    }
    // 0x80227990: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x80227994: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80227998: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x8022799C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802279A0: jal         0x8004F820
    // 0x802279A4: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x802279A4: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_0:
    // 0x802279A8: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x802279AC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x802279B0: lw          $a0, 0x3FF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3FF0);
    // 0x802279B4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802279B8: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x802279BC: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x802279C0: and         $a0, $a0, $v0
    ctx->r4 = ctx->r4 & ctx->r2;
    // 0x802279C4: beq         $a0, $zero, L_802279E8
    if (ctx->r4 == 0) {
        // 0x802279C8: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_802279E8;
    }
    // 0x802279C8: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x802279CC: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x802279D0: jal         0x80228390
    // 0x802279D4: nop

    func_80228390_ovl17(rdram, ctx);
        goto after_1;
    // 0x802279D4: nop

    after_1:
    // 0x802279D8: lbu         $v1, 0x34B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34B);
    // 0x802279DC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802279E0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802279E4: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
L_802279E8:
    // 0x802279E8: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x802279EC: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x802279F0: bne         $v0, $zero, L_80227A14
    if (ctx->r2 != 0) {
        // 0x802279F4: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_80227A14;
    }
    // 0x802279F4: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x802279F8: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x802279FC: sb          $v1, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r3;
    // 0x80227A00: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x80227A04: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x80227A08: jal         0x80228428
    // 0x80227A0C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_80228428_ovl17(rdram, ctx);
        goto after_2;
    // 0x80227A0C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_2:
    // 0x80227A10: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80227A14:
    // 0x80227A14: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80227A18: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227A1C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227A20: jr          $ra
    // 0x80227A24: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80227A24: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80228EDC_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228EDC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228EE0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228EE4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228EE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228EEC: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80228EF0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80228EF4: addiu       $v0, $zero, 0xC00
    ctx->r2 = ADD32(0, 0XC00);
    // 0x80228EF8: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80228EFC: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80228F00: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80228F04: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80228F08: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x80228F0C: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80228F10: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80228F14: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x80228F18: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80228F1C: jal         0x8004D5D4
    // 0x80228F20: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80228F20: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x80228F24: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228F28: addiu       $v0, $zero, 0x1D7
    ctx->r2 = ADD32(0, 0X1D7);
    // 0x80228F2C: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80228F30: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80228F34: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80228F38: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80228F3C: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80228F40: jal         0x8003E934
    // 0x80228F44: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x80228F44: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    after_1:
    // 0x80228F48: addiu       $a0, $zero, 0x223
    ctx->r4 = ADD32(0, 0X223);
    // 0x80228F4C: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80228F50: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228F54: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80228F58: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80228F5C: addiu       $v0, $v0, -0x5424
    ctx->r2 = ADD32(ctx->r2, -0X5424);
    // 0x80228F60: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x80228F64: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
    // 0x80228F68: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x80228F6C: jal         0x80060590
    // 0x80228F70: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    func_80060590_3B990(rdram, ctx);
        goto after_2;
    // 0x80228F70: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    after_2:
    // 0x80228F74: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228F78: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80228F7C: jal         0x80050294
    // 0x80228F80: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x80228F80: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x80228F84: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80228F88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80228F8C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228F90: jr          $ra
    // 0x80228F94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228F94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225E90_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225E90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225E94: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225E98: jal         0x8006036C
    // 0x80225E9C: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    func_8006036C_3B76C(rdram, ctx);
        goto after_0;
    // 0x80225E9C: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    after_0:
    // 0x80225EA0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80225EA4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80225EA8: jr          $ra
    // 0x80225EAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225EAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227D50_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227D50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227D54: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80227D58: lbu         $v0, 0x34B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34B);
    // 0x80227D5C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227D60: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227D64: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227D68: lw          $v0, -0x549C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X549C);
    // 0x80227D6C: jalr        $v0
    // 0x80227D70: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80227D70: nop

    after_0:
    // 0x80227D74: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80227D78: jr          $ra
    // 0x80227D7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227D7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225300_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225300: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225304: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225308: jal         0x80060798
    // 0x8022530C: nop

    func_80060798_3BB98(rdram, ctx);
        goto after_0;
    // 0x8022530C: nop

    after_0:
    // 0x80225310: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x80225314: lb          $a1, -0x3BC6($a1)
    ctx->r5 = MEM_B(ctx->r5, -0X3BC6);
    // 0x80225318: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022531C: addiu       $v0, $v0, -0x5C74
    ctx->r2 = ADD32(ctx->r2, -0X5C74);
    // 0x80225320: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225324: addiu       $a0, $a0, -0x5C7C
    ctx->r4 = ADD32(ctx->r4, -0X5C7C);
    // 0x80225328: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x8022532C: jal         0x8006100C
    // 0x80225330: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    func_8006100C_3C40C(rdram, ctx);
        goto after_1;
    // 0x80225330: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    after_1:
    // 0x80225334: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80225338: sw          $zero, -0x359C($at)
    MEM_W(-0X359C, ctx->r1) = 0;
    // 0x8022533C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80225340: jr          $ra
    // 0x80225344: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225344: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228570_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228570: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228574: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228578: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022857C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80228580: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80228584: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228588: jal         0x8009A3B4
    // 0x8022858C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022858C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80228590: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80228594: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80228598: jal         0x8009A3B4
    // 0x8022859C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022859C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x802285A0: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x802285A4: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x802285A8: jal         0x8009A3B4
    // 0x802285AC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x802285AC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x802285B0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802285B4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802285B8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802285BC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802285C0: lw          $v0, -0x5470($at)
    ctx->r2 = MEM_W(ctx->r1, -0X5470);
    // 0x802285C4: jalr        $v0
    // 0x802285C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x802285C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x802285CC: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x802285D0: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x802285D4: beq         $v0, $zero, L_802285EC
    if (ctx->r2 == 0) {
        // 0x802285D8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802285EC;
    }
    // 0x802285D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802285DC: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x802285E0: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x802285E4: jal         0x8003B564
    // 0x802285E8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_4;
    // 0x802285E8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_4:
L_802285EC:
    // 0x802285EC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802285F0: beq         $v0, $zero, L_80228608
    if (ctx->r2 == 0) {
        // 0x802285F4: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_80228608;
    }
    // 0x802285F4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802285F8: jal         0x8005044C
    // 0x802285FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_5;
    // 0x802285FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80228600: j           L_8022860C
    // 0x80228604: nop

        goto L_8022860C;
    // 0x80228604: nop

L_80228608:
    // 0x80228608: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022860C:
    // 0x8022860C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80228610: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228614: jr          $ra
    // 0x80228618: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228618: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227A28_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227A28: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227A2C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227A30: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227A34: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80227A38: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227A3C: lh          $a0, 0x34C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X34C);
    // 0x80227A40: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80227A44: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    // 0x80227A48: jal         0x8004FA7C
    // 0x80227A4C: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x80227A4C: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    after_0:
    // 0x80227A50: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80227A54: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x80227A58: beq         $v0, $zero, L_80227AEC
    if (ctx->r2 == 0) {
        // 0x80227A5C: nop
    
            goto L_80227AEC;
    }
    // 0x80227A5C: nop

    // 0x80227A60: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80227A64: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x80227A68: bne         $v0, $zero, L_80227AEC
    if (ctx->r2 != 0) {
        // 0x80227A6C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80227AEC;
    }
    // 0x80227A6C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227A70: lbu         $v1, 0x34A($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34A);
    // 0x80227A74: beq         $v1, $v0, L_80227A8C
    if (ctx->r3 == ctx->r2) {
        // 0x80227A78: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80227A8C;
    }
    // 0x80227A78: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80227A7C: beq         $v1, $v0, L_80227ABC
    if (ctx->r3 == ctx->r2) {
        // 0x80227A80: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80227ABC;
    }
    // 0x80227A80: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80227A84: j           L_80227AE0
    // 0x80227A88: nop

        goto L_80227AE0;
    // 0x80227A88: nop

L_80227A8C:
    // 0x80227A8C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80227A90: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x80227A94: bne         $v0, $zero, L_80227AE0
    if (ctx->r2 != 0) {
        // 0x80227A98: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80227AE0;
    }
    // 0x80227A98: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80227A9C: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x80227AA0: bne         $v0, $zero, L_80227AE0
    if (ctx->r2 != 0) {
        // 0x80227AA4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80227AE0;
    }
    // 0x80227AA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227AA8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80227AAC: bne         $v1, $v0, L_80227AE0
    if (ctx->r3 != ctx->r2) {
        // 0x80227AB0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80227AE0;
    }
    // 0x80227AB0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80227AB4: j           L_80227AE0
    // 0x80227AB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80227AE0;
    // 0x80227AB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80227ABC:
    // 0x80227ABC: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80227AC0: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x80227AC4: beq         $v0, $zero, L_80227ADC
    if (ctx->r2 == 0) {
        // 0x80227AC8: slti        $v0, $v1, 0x4
        ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
            goto L_80227ADC;
    }
    // 0x80227AC8: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x80227ACC: bne         $v0, $zero, L_80227AE0
    if (ctx->r2 != 0) {
        // 0x80227AD0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80227AE0;
    }
    // 0x80227AD0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80227AD4: j           L_80227AE0
    // 0x80227AD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80227AE0;
    // 0x80227AD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80227ADC:
    // 0x80227ADC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80227AE0:
    // 0x80227AE0: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80227AE4: beq         $v0, $zero, L_80227B10
    if (ctx->r2 == 0) {
        // 0x80227AE8: nop
    
            goto L_80227B10;
    }
    // 0x80227AE8: nop

L_80227AEC:
    // 0x80227AEC: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x80227AF0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80227AF4: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80227AF8: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80227AFC: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x80227B00: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80227B04: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80227B08: j           L_80227B20
    // 0x80227B0C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80227B20;
    // 0x80227B0C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80227B10:
    // 0x80227B10: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80227B14: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80227B18: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80227B1C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_80227B20:
    // 0x80227B20: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80227B24: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227B28: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227B2C: jr          $ra
    // 0x80227B30: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80227B30: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802271D8_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802271D8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x802271DC: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x802271E0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802271E4: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x802271E8: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    // 0x802271EC: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x802271F0: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x802271F4: jal         0x802284C4
    // 0x802271F8: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    func_802284C4_ovl17(rdram, ctx);
        goto after_0;
    // 0x802271F8: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    after_0:
    // 0x802271FC: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80227200: beq         $v0, $zero, L_80227230
    if (ctx->r2 == 0) {
        // 0x80227204: addiu       $v0, $zero, 0x2A
        ctx->r2 = ADD32(0, 0X2A);
            goto L_80227230;
    }
    // 0x80227204: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x80227208: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x8022720C: bne         $v1, $v0, L_80227358
    if (ctx->r3 != ctx->r2) {
        // 0x80227210: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80227358;
    }
    // 0x80227210: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227214: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80227218: lbu         $a0, 0xAC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022721C: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x80227220: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x80227224: sh          $v0, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r2;
    // 0x80227228: j           L_8022735C
    // 0x8022722C: sh          $a0, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r4;
        goto L_8022735C;
    // 0x8022722C: sh          $a0, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r4;
L_80227230:
    // 0x80227230: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227234: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80227238: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022723C: jal         0x8004DA90
    // 0x80227240: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x80227240: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x80227244: lh          $a3, 0x354($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X354);
    // 0x80227248: lh          $a2, 0x35C($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X35C);
    // 0x8022724C: lh          $a1, 0x14($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X14);
    // 0x80227250: addu        $a0, $a3, $zero
    ctx->r4 = ADD32(ctx->r7, 0);
    // 0x80227254: addu        $v0, $a3, $a2
    ctx->r2 = ADD32(ctx->r7, ctx->r6);
    // 0x80227258: slt         $v0, $v0, $a1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8022725C: beq         $v0, $zero, L_8022726C
    if (ctx->r2 == 0) {
        // 0x80227260: addu        $v1, $a2, $zero
        ctx->r3 = ADD32(ctx->r6, 0);
            goto L_8022726C;
    }
    // 0x80227260: addu        $v1, $a2, $zero
    ctx->r3 = ADD32(ctx->r6, 0);
    // 0x80227264: j           L_8022727C
    // 0x80227268: addu        $v0, $a0, $v1
    ctx->r2 = ADD32(ctx->r4, ctx->r3);
        goto L_8022727C;
    // 0x80227268: addu        $v0, $a0, $v1
    ctx->r2 = ADD32(ctx->r4, ctx->r3);
L_8022726C:
    // 0x8022726C: subu        $v0, $a3, $a2
    ctx->r2 = SUB32(ctx->r7, ctx->r6);
    // 0x80227270: slt         $v0, $a1, $v0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80227274: beq         $v0, $zero, L_802272AC
    if (ctx->r2 == 0) {
        // 0x80227278: subu        $v0, $a0, $v1
        ctx->r2 = SUB32(ctx->r4, ctx->r3);
            goto L_802272AC;
    }
    // 0x80227278: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
L_8022727C:
    // 0x8022727C: lhu         $a0, 0x56($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X56);
    // 0x80227280: lhu         $v1, 0x350($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X350);
    // 0x80227284: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x80227288: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022728C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80227290: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80227294: sh          $v0, 0x366($s0)
    MEM_H(0X366, ctx->r16) = ctx->r2;
    // 0x80227298: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x8022729C: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x802272A0: addiu       $v1, $v1, 0xA
    ctx->r3 = ADD32(ctx->r3, 0XA);
    // 0x802272A4: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x802272A8: sh          $v1, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r3;
L_802272AC:
    // 0x802272AC: lh          $a3, 0x10($s1)
    ctx->r7 = MEM_H(ctx->r17, 0X10);
    // 0x802272B0: lh          $a2, 0x16($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X16);
    // 0x802272B4: lh          $v1, 0x18($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X18);
    // 0x802272B8: addu        $a1, $a3, $zero
    ctx->r5 = ADD32(ctx->r7, 0);
    // 0x802272BC: addu        $v0, $a3, $a2
    ctx->r2 = ADD32(ctx->r7, ctx->r6);
    // 0x802272C0: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x802272C4: beq         $v0, $zero, L_802272D8
    if (ctx->r2 == 0) {
        // 0x802272C8: addu        $a0, $a2, $zero
        ctx->r4 = ADD32(ctx->r6, 0);
            goto L_802272D8;
    }
    // 0x802272C8: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    // 0x802272CC: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x802272D0: j           L_802272EC
    // 0x802272D4: addu        $v0, $a1, $a0
    ctx->r2 = ADD32(ctx->r5, ctx->r4);
        goto L_802272EC;
    // 0x802272D4: addu        $v0, $a1, $a0
    ctx->r2 = ADD32(ctx->r5, ctx->r4);
L_802272D8:
    // 0x802272D8: subu        $v0, $a3, $a2
    ctx->r2 = SUB32(ctx->r7, ctx->r6);
    // 0x802272DC: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802272E0: beq         $v0, $zero, L_8022731C
    if (ctx->r2 == 0) {
        // 0x802272E4: subu        $v0, $a1, $a0
        ctx->r2 = SUB32(ctx->r5, ctx->r4);
            goto L_8022731C;
    }
    // 0x802272E4: subu        $v0, $a1, $a0
    ctx->r2 = SUB32(ctx->r5, ctx->r4);
    // 0x802272E8: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
L_802272EC:
    // 0x802272EC: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x802272F0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802272F4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802272F8: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x802272FC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80227300: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80227304: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x80227308: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x8022730C: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80227310: sh          $v1, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r3;
    // 0x80227314: addiu       $v0, $v0, 0xA
    ctx->r2 = ADD32(ctx->r2, 0XA);
    // 0x80227318: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
L_8022731C:
    // 0x8022731C: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x80227320: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x80227324: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x80227328: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022732C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80227330: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80227334: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80227338: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x8022733C: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x80227340: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x80227344: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80227348: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    // 0x8022734C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227350: bne         $v0, $zero, L_8022735C
    if (ctx->r2 != 0) {
        // 0x80227354: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022735C;
    }
    // 0x80227354: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80227358:
    // 0x80227358: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022735C:
    // 0x8022735C: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x80227360: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80227364: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80227368: jr          $ra
    // 0x8022736C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8022736C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8022597C_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022597C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225980: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225984: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225988: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022598C: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x80225990: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80225994: beq         $v0, $zero, L_802259B8
    if (ctx->r2 == 0) {
        // 0x80225998: nop
    
            goto L_802259B8;
    }
    // 0x80225998: nop

    // 0x8022599C: bltz        $v1, L_802259B8
    if (SIGNED(ctx->r3) < 0) {
        // 0x802259A0: nop
    
            goto L_802259B8;
    }
    // 0x802259A0: nop

    // 0x802259A4: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802259A8: jal         0x800607C4
    // 0x802259AC: addiu       $a0, $a0, -0x5CF4
    ctx->r4 = ADD32(ctx->r4, -0X5CF4);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x802259AC: addiu       $a0, $a0, -0x5CF4
    ctx->r4 = ADD32(ctx->r4, -0X5CF4);
    after_0:
    // 0x802259B0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802259B4: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_802259B8:
    // 0x802259B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802259BC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802259C0: jr          $ra
    // 0x802259C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802259C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227CB0_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227CB0: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80227CB4: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x80227CB8: bne         $v0, $zero, L_80227CF0
    if (ctx->r2 != 0) {
        // 0x80227CBC: addiu       $a1, $a0, 0x348
        ctx->r5 = ADD32(ctx->r4, 0X348);
            goto L_80227CF0;
    }
    // 0x80227CBC: addiu       $a1, $a0, 0x348
    ctx->r5 = ADD32(ctx->r4, 0X348);
    // 0x80227CC0: lhu         $v0, 0x348($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X348);
    // 0x80227CC4: lh          $v1, 0x34E($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X34E);
    // 0x80227CC8: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x80227CCC: beq         $v1, $zero, L_80227CDC
    if (ctx->r3 == 0) {
        // 0x80227CD0: sh          $v0, 0x348($a0)
        MEM_H(0X348, ctx->r4) = ctx->r2;
            goto L_80227CDC;
    }
    // 0x80227CD0: sh          $v0, 0x348($a0)
    MEM_H(0X348, ctx->r4) = ctx->r2;
    // 0x80227CD4: j           L_80227CE0
    // 0x80227CD8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_80227CE0;
    // 0x80227CD8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_80227CDC:
    // 0x80227CDC: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_80227CE0:
    // 0x80227CE0: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x80227CE4: lbu         $v0, 0x3($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X3);
    // 0x80227CE8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227CEC: sb          $v0, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r2;
L_80227CF0:
    // 0x80227CF0: jr          $ra
    // 0x80227CF4: nop

    TRACE_RETURN()
    return;
    // 0x80227CF4: nop

;}
RECOMP_FUNC void func_80225D28_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225D28: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80225D2C: lbu         $v0, -0x359C($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X359C);
    // 0x80225D30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225D34: bne         $v0, $zero, L_80225D78
    if (ctx->r2 != 0) {
        // 0x80225D38: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_80225D78;
    }
    // 0x80225D38: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225D3C: jal         0x8006033C
    // 0x80225D40: addiu       $a0, $zero, 0x27
    ctx->r4 = ADD32(0, 0X27);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80225D40: addiu       $a0, $zero, 0x27
    ctx->r4 = ADD32(0, 0X27);
    after_0:
    // 0x80225D44: beq         $v0, $zero, L_80225D78
    if (ctx->r2 == 0) {
        // 0x80225D48: nop
    
            goto L_80225D78;
    }
    // 0x80225D48: nop

    // 0x80225D4C: jal         0x8006033C
    // 0x80225D50: addiu       $a0, $zero, 0x207
    ctx->r4 = ADD32(0, 0X207);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x80225D50: addiu       $a0, $zero, 0x207
    ctx->r4 = ADD32(0, 0X207);
    after_1:
    // 0x80225D54: beq         $v0, $zero, L_80225D78
    if (ctx->r2 == 0) {
        // 0x80225D58: nop
    
            goto L_80225D78;
    }
    // 0x80225D58: nop

    // 0x80225D5C: jal         0x8006033C
    // 0x80225D60: addiu       $a0, $zero, 0x545
    ctx->r4 = ADD32(0, 0X545);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x80225D60: addiu       $a0, $zero, 0x545
    ctx->r4 = ADD32(0, 0X545);
    after_2:
    // 0x80225D64: bne         $v0, $zero, L_80225D78
    if (ctx->r2 != 0) {
        // 0x80225D68: nop
    
            goto L_80225D78;
    }
    // 0x80225D68: nop

    // 0x80225D6C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225D70: jal         0x8005FB30
    // 0x80225D74: addiu       $a0, $a0, -0x5460
    ctx->r4 = ADD32(ctx->r4, -0X5460);
    func_8005FB30_3AF30(rdram, ctx);
        goto after_3;
    // 0x80225D74: addiu       $a0, $a0, -0x5460
    ctx->r4 = ADD32(ctx->r4, -0X5460);
    after_3:
L_80225D78:
    // 0x80225D78: jal         0x8006036C
    // 0x80225D7C: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    func_8006036C_3B76C(rdram, ctx);
        goto after_4;
    // 0x80225D7C: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    after_4:
    // 0x80225D80: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80225D84: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80225D88: jr          $ra
    // 0x80225D8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225D8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802253D8_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802253D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802253DC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802253E0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802253E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802253E8: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x802253EC: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x802253F0: beq         $v0, $zero, L_80225414
    if (ctx->r2 == 0) {
        // 0x802253F4: nop
    
            goto L_80225414;
    }
    // 0x802253F4: nop

    // 0x802253F8: bltz        $v1, L_80225414
    if (SIGNED(ctx->r3) < 0) {
        // 0x802253FC: nop
    
            goto L_80225414;
    }
    // 0x802253FC: nop

    // 0x80225400: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225404: jal         0x800607C4
    // 0x80225408: addiu       $a0, $a0, -0x5D14
    ctx->r4 = ADD32(ctx->r4, -0X5D14);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x80225408: addiu       $a0, $a0, -0x5D14
    ctx->r4 = ADD32(ctx->r4, -0X5D14);
    after_0:
    // 0x8022540C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225410: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225414:
    // 0x80225414: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225418: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022541C: jr          $ra
    // 0x80225420: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225420: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802258A4_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802258A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802258A8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802258AC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802258B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802258B4: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x802258B8: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x802258BC: beq         $v0, $zero, L_802258E0
    if (ctx->r2 == 0) {
        // 0x802258C0: nop
    
            goto L_802258E0;
    }
    // 0x802258C0: nop

    // 0x802258C4: bltz        $v1, L_802258E0
    if (SIGNED(ctx->r3) < 0) {
        // 0x802258C8: nop
    
            goto L_802258E0;
    }
    // 0x802258C8: nop

    // 0x802258CC: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802258D0: jal         0x800607C4
    // 0x802258D4: addiu       $a0, $a0, -0x5CFC
    ctx->r4 = ADD32(ctx->r4, -0X5CFC);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x802258D4: addiu       $a0, $a0, -0x5CFC
    ctx->r4 = ADD32(ctx->r4, -0X5CFC);
    after_0:
    // 0x802258D8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802258DC: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_802258E0:
    // 0x802258E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802258E4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802258E8: jr          $ra
    // 0x802258EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802258EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225A54_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225A54: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225A58: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225A5C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225A60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225A64: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x80225A68: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80225A6C: beq         $v0, $zero, L_80225A90
    if (ctx->r2 == 0) {
        // 0x80225A70: nop
    
            goto L_80225A90;
    }
    // 0x80225A70: nop

    // 0x80225A74: bltz        $v1, L_80225A90
    if (SIGNED(ctx->r3) < 0) {
        // 0x80225A78: nop
    
            goto L_80225A90;
    }
    // 0x80225A78: nop

    // 0x80225A7C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225A80: jal         0x800607C4
    // 0x80225A84: addiu       $a0, $a0, -0x5CF4
    ctx->r4 = ADD32(ctx->r4, -0X5CF4);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x80225A84: addiu       $a0, $a0, -0x5CF4
    ctx->r4 = ADD32(ctx->r4, -0X5CF4);
    after_0:
    // 0x80225A88: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225A8C: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225A90:
    // 0x80225A90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225A94: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225A98: jr          $ra
    // 0x80225A9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225A9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225504_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225504: jr          $ra
    // 0x80225508: nop

    TRACE_RETURN()
    return;
    // 0x80225508: nop

;}
RECOMP_FUNC void func_80225D90_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225D90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225D94: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225D98: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225D9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225DA0: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x80225DA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225DA8: beq         $v1, $v0, L_80225E6C
    if (ctx->r3 == ctx->r2) {
        // 0x80225DAC: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80225E6C;
    }
    // 0x80225DAC: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80225DB0: beql        $v0, $zero, L_80225E74
    if (ctx->r2 == 0) {
        // 0x80225DB4: sb          $zero, 0x4($s0)
        MEM_B(0X4, ctx->r16) = 0;
            goto L_80225E74;
    }
    goto skip_0;
    // 0x80225DB4: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
    skip_0:
    // 0x80225DB8: bnel        $v1, $zero, L_80225E74
    if (ctx->r3 != 0) {
        // 0x80225DBC: sb          $zero, 0x4($s0)
        MEM_B(0X4, ctx->r16) = 0;
            goto L_80225E74;
    }
    goto skip_1;
    // 0x80225DBC: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
    skip_1:
    // 0x80225DC0: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80225DC4: lb          $v0, -0x3BC6($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC6);
    // 0x80225DC8: slti        $v0, $v0, 0x2
    ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x80225DCC: bnel        $v0, $zero, L_80225E74
    if (ctx->r2 != 0) {
        // 0x80225DD0: sb          $zero, 0x4($s0)
        MEM_B(0X4, ctx->r16) = 0;
            goto L_80225E74;
    }
    goto skip_2;
    // 0x80225DD0: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
    skip_2:
    // 0x80225DD4: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225DD8: jal         0x8005FB30
    // 0x80225DDC: addiu       $a0, $a0, -0x5418
    ctx->r4 = ADD32(ctx->r4, -0X5418);
    func_8005FB30_3AF30(rdram, ctx);
        goto after_0;
    // 0x80225DDC: addiu       $a0, $a0, -0x5418
    ctx->r4 = ADD32(ctx->r4, -0X5418);
    after_0:
    // 0x80225DE0: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x80225DE4: addiu       $a0, $zero, 0x212
    ctx->r4 = ADD32(0, 0X212);
    // 0x80225DE8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80225DEC: sb          $v1, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r3;
    // 0x80225DF0: jal         0x8006033C
    // 0x80225DF4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x80225DF4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_1:
    // 0x80225DF8: beq         $v0, $zero, L_80225E30
    if (ctx->r2 == 0) {
        // 0x80225DFC: nop
    
            goto L_80225E30;
    }
    // 0x80225DFC: nop

    // 0x80225E00: jal         0x8006033C
    // 0x80225E04: addiu       $a0, $zero, 0x214
    ctx->r4 = ADD32(0, 0X214);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x80225E04: addiu       $a0, $zero, 0x214
    ctx->r4 = ADD32(0, 0X214);
    after_2:
    // 0x80225E08: bne         $v0, $zero, L_80225E30
    if (ctx->r2 != 0) {
        // 0x80225E0C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80225E30;
    }
    // 0x80225E0C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225E10: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80225E14: addiu       $v1, $v1, 0x4A6D
    ctx->r3 = ADD32(ctx->r3, 0X4A6D);
    // 0x80225E18: lbu         $a0, 0x0($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X0);
    // 0x80225E1C: ori         $a0, $a0, 0x40
    ctx->r4 = ctx->r4 | 0X40;
    // 0x80225E20: sb          $a0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r4;
    // 0x80225E24: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80225E28: j           L_80225E80
    // 0x80225E2C: sb          $v1, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r3;
        goto L_80225E80;
    // 0x80225E2C: sb          $v1, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r3;
L_80225E30:
    // 0x80225E30: jal         0x8006033C
    // 0x80225E34: addiu       $a0, $zero, 0x209
    ctx->r4 = ADD32(0, 0X209);
    func_8006033C_3B73C(rdram, ctx);
        goto after_3;
    // 0x80225E34: addiu       $a0, $zero, 0x209
    ctx->r4 = ADD32(0, 0X209);
    after_3:
    // 0x80225E38: beq         $v0, $zero, L_80225E80
    if (ctx->r2 == 0) {
        // 0x80225E3C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80225E80;
    }
    // 0x80225E3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225E40: jal         0x8006033C
    // 0x80225E44: addiu       $a0, $zero, 0x211
    ctx->r4 = ADD32(0, 0X211);
    func_8006033C_3B73C(rdram, ctx);
        goto after_4;
    // 0x80225E44: addiu       $a0, $zero, 0x211
    ctx->r4 = ADD32(0, 0X211);
    after_4:
    // 0x80225E48: bne         $v0, $zero, L_80225E80
    if (ctx->r2 != 0) {
        // 0x80225E4C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80225E80;
    }
    // 0x80225E4C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225E50: jal         0x8006033C
    // 0x80225E54: addiu       $a0, $zero, 0x545
    ctx->r4 = ADD32(0, 0X545);
    func_8006033C_3B73C(rdram, ctx);
        goto after_5;
    // 0x80225E54: addiu       $a0, $zero, 0x545
    ctx->r4 = ADD32(0, 0X545);
    after_5:
    // 0x80225E58: beq         $v0, $zero, L_80225E80
    if (ctx->r2 == 0) {
        // 0x80225E5C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80225E80;
    }
    // 0x80225E5C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225E60: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225E64: jal         0x8005FB30
    // 0x80225E68: addiu       $a0, $a0, -0x544C
    ctx->r4 = ADD32(ctx->r4, -0X544C);
    func_8005FB30_3AF30(rdram, ctx);
        goto after_6;
    // 0x80225E68: addiu       $a0, $a0, -0x544C
    ctx->r4 = ADD32(ctx->r4, -0X544C);
    after_6:
L_80225E6C:
    // 0x80225E6C: j           L_80225E80
    // 0x80225E70: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80225E80;
    // 0x80225E70: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80225E74:
    // 0x80225E74: jal         0x8006036C
    // 0x80225E78: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    func_8006036C_3B76C(rdram, ctx);
        goto after_7;
    // 0x80225E78: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    after_7:
    // 0x80225E7C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80225E80:
    // 0x80225E80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225E84: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225E88: jr          $ra
    // 0x80225E8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225E8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226F74_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226F74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226F78: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226F7C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226F80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226F84: jal         0x80228478
    // 0x80226F88: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80228478_ovl17(rdram, ctx);
        goto after_0;
    // 0x80226F88: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x80226F8C: lbu         $a0, 0xA($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA);
    // 0x80226F90: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80226F94: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x80226F98: lbu         $v1, 0xF($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XF);
    // 0x80226F9C: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80226FA0: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80226FA4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80226FA8: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80226FAC: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x80226FB0: sh          $v0, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = ctx->r2;
    // 0x80226FB4: sh          $v1, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r3;
    // 0x80226FB8: sb          $a0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r4;
    // 0x80226FBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226FC0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226FC4: jr          $ra
    // 0x80226FC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226FC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228438_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228438: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x8022843C: addiu       $v0, $zero, 0x39
    ctx->r2 = ADD32(0, 0X39);
    // 0x80228440: beq         $a0, $v0, L_80228464
    if (ctx->r4 == ctx->r2) {
        // 0x80228444: slti        $v0, $a0, 0x39
        ctx->r2 = SIGNED(ctx->r4) < 0X39 ? 1 : 0;
            goto L_80228464;
    }
    // 0x80228444: slti        $v0, $a0, 0x39
    ctx->r2 = SIGNED(ctx->r4) < 0X39 ? 1 : 0;
    // 0x80228448: bne         $v0, $zero, L_80228470
    if (ctx->r2 != 0) {
        // 0x8022844C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80228470;
    }
    // 0x8022844C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228450: slti        $v0, $a0, 0x4E
    ctx->r2 = SIGNED(ctx->r4) < 0X4E ? 1 : 0;
    // 0x80228454: beq         $v0, $zero, L_8022846C
    if (ctx->r2 == 0) {
        // 0x80228458: slti        $v0, $a0, 0x4C
        ctx->r2 = SIGNED(ctx->r4) < 0X4C ? 1 : 0;
            goto L_8022846C;
    }
    // 0x80228458: slti        $v0, $a0, 0x4C
    ctx->r2 = SIGNED(ctx->r4) < 0X4C ? 1 : 0;
    // 0x8022845C: bne         $v0, $zero, L_80228470
    if (ctx->r2 != 0) {
        // 0x80228460: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80228470;
    }
    // 0x80228460: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80228464:
    // 0x80228464: j           L_80228470
    // 0x80228468: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_80228470;
    // 0x80228468: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8022846C:
    // 0x8022846C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80228470:
    // 0x80228470: jr          $ra
    // 0x80228474: nop

    TRACE_RETURN()
    return;
    // 0x80228474: nop

;}
RECOMP_FUNC void func_80225730_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225730: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225734: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225738: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022573C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225740: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x80225744: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80225748: beq         $v0, $zero, L_8022576C
    if (ctx->r2 == 0) {
        // 0x8022574C: nop
    
            goto L_8022576C;
    }
    // 0x8022574C: nop

    // 0x80225750: bltz        $v1, L_8022576C
    if (SIGNED(ctx->r3) < 0) {
        // 0x80225754: nop
    
            goto L_8022576C;
    }
    // 0x80225754: nop

    // 0x80225758: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8022575C: jal         0x800607C4
    // 0x80225760: addiu       $a0, $a0, -0x5CD4
    ctx->r4 = ADD32(ctx->r4, -0X5CD4);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x80225760: addiu       $a0, $a0, -0x5CD4
    ctx->r4 = ADD32(ctx->r4, -0X5CD4);
    after_0:
    // 0x80225764: addiu       $v0, $zero, 0xE1
    ctx->r2 = ADD32(0, 0XE1);
    // 0x80225768: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8022576C:
    // 0x8022576C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225770: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225774: jr          $ra
    // 0x80225778: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225778: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226698_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226698: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022669C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802266A0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802266A4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802266A8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802266AC: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x802266B0: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x802266B4: jal         0x8004FA7C
    // 0x802266B8: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x802266B8: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_0:
    // 0x802266BC: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x802266C0: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x802266C4: bne         $v0, $zero, L_802266E8
    if (ctx->r2 != 0) {
        // 0x802266C8: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_802266E8;
    }
    // 0x802266C8: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x802266CC: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x802266D0: jal         0x80228428
    // 0x802266D4: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    func_80228428_ovl17(rdram, ctx);
        goto after_1;
    // 0x802266D4: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    after_1:
    // 0x802266D8: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802266DC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802266E0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802266E4: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_802266E8:
    // 0x802266E8: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x802266EC: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x802266F0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x802266F4: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x802266F8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802266FC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80226700: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226704: jr          $ra
    // 0x80226708: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80226708: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80225AEC_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225AEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225AF0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225AF4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225AF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225AFC: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225B00: bne         $v0, $zero, L_80225B1C
    if (ctx->r2 != 0) {
        // 0x80225B04: nop
    
            goto L_80225B1C;
    }
    // 0x80225B04: nop

    // 0x80225B08: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225B0C: jal         0x800607C4
    // 0x80225B10: addiu       $a0, $a0, -0x5CAC
    ctx->r4 = ADD32(ctx->r4, -0X5CAC);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x80225B10: addiu       $a0, $a0, -0x5CAC
    ctx->r4 = ADD32(ctx->r4, -0X5CAC);
    after_0:
    // 0x80225B14: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225B18: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225B1C:
    // 0x80225B1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225B20: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225B24: jr          $ra
    // 0x80225B28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225B28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022670C_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022670C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226710: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226714: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226718: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022671C: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x80226720: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80226724: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x80226728: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022672C: bne         $v0, $zero, L_80226754
    if (ctx->r2 != 0) {
        // 0x80226730: nop
    
            goto L_80226754;
    }
    // 0x80226730: nop

    // 0x80226734: jal         0x80228390
    // 0x80226738: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_80228390_ovl17(rdram, ctx);
        goto after_0;
    // 0x80226738: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_0:
    // 0x8022673C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80226740: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80226744: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
    // 0x80226748: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x8022674C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80226750: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_80226754:
    // 0x80226754: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226758: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022675C: jr          $ra
    // 0x80226760: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226760: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225BC4_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225BC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225BC8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225BCC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225BD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225BD4: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225BD8: bne         $v0, $zero, L_80225BF4
    if (ctx->r2 != 0) {
        // 0x80225BDC: nop
    
            goto L_80225BF4;
    }
    // 0x80225BDC: nop

    // 0x80225BE0: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225BE4: jal         0x800607C4
    // 0x80225BE8: addiu       $a0, $a0, -0x5CA4
    ctx->r4 = ADD32(ctx->r4, -0X5CA4);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x80225BE8: addiu       $a0, $a0, -0x5CA4
    ctx->r4 = ADD32(ctx->r4, -0X5CA4);
    after_0:
    // 0x80225BEC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225BF0: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225BF4:
    // 0x80225BF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225BF8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225BFC: jr          $ra
    // 0x80225C00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225C00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228224_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228224: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228228: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022822C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228230: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228234: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80228238: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x8022823C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80228240: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x80228244: jal         0x8004F820
    // 0x80228248: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80228248: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x8022824C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80228250: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80228254: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80228258: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022825C: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80228260: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x80228264: bne         $v0, $zero, L_80228288
    if (ctx->r2 != 0) {
        // 0x80228268: addiu       $v1, $zero, 0x9
        ctx->r3 = ADD32(0, 0X9);
            goto L_80228288;
    }
    // 0x80228268: addiu       $v1, $zero, 0x9
    ctx->r3 = ADD32(0, 0X9);
    // 0x8022826C: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x80228270: lbu         $a0, 0x34B($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X34B);
    // 0x80228274: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x80228278: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8022827C: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x80228280: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    // 0x80228284: sb          $a0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r4;
L_80228288:
    // 0x80228288: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022828C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228290: jr          $ra
    // 0x80228294: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228294: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226B64_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226B64: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80226B68: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226B6C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226B70: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80226B74: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80226B78: lh          $v0, 0x362($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X362);
    // 0x80226B7C: bne         $v0, $zero, L_80226BBC
    if (ctx->r2 != 0) {
        // 0x80226B80: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_80226BBC;
    }
    // 0x80226B80: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x80226B84: lh          $v0, 0x35C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X35C);
    // 0x80226B88: bne         $v0, $zero, L_80226BB0
    if (ctx->r2 != 0) {
        // 0x80226B8C: nop
    
            goto L_80226BB0;
    }
    // 0x80226B8C: nop

    // 0x80226B90: lh          $v1, 0x360($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X360);
    // 0x80226B94: lh          $v0, 0x366($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X366);
    // 0x80226B98: bne         $v1, $v0, L_80226BB0
    if (ctx->r3 != ctx->r2) {
        // 0x80226B9C: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80226BB0;
    }
    // 0x80226B9C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80226BA0: lhu         $v0, 0x352($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X352);
    // 0x80226BA4: addiu       $a1, $s0, 0x354
    ctx->r5 = ADD32(ctx->r16, 0X354);
    // 0x80226BA8: j           L_80226BEC
    // 0x80226BAC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
        goto L_80226BEC;
    // 0x80226BAC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
L_80226BB0:
    // 0x80226BB0: lh          $v0, 0x1A($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X1A);
    // 0x80226BB4: beq         $v0, $zero, L_80226C1C
    if (ctx->r2 == 0) {
        // 0x80226BB8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80226C1C;
    }
    // 0x80226BB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80226BBC:
    // 0x80226BBC: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x80226BC0: bne         $v0, $zero, L_80226C1C
    if (ctx->r2 != 0) {
        // 0x80226BC4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80226C1C;
    }
    // 0x80226BC4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226BC8: lh          $v1, 0x18($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X18);
    // 0x80226BCC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226BD0: bne         $v1, $v0, L_80226C1C
    if (ctx->r3 != ctx->r2) {
        // 0x80226BD4: addiu       $a1, $s1, 0xC
        ctx->r5 = ADD32(ctx->r17, 0XC);
            goto L_80226C1C;
    }
    // 0x80226BD4: addiu       $a1, $s1, 0xC
    ctx->r5 = ADD32(ctx->r17, 0XC);
    // 0x80226BD8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80226BDC: lhu         $v0, 0xA($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XA);
    // 0x80226BE0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80226BE4: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80226BE8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
L_80226BEC:
    // 0x80226BEC: jal         0x8009A3B4
    // 0x80226BF0: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80226BF0: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_0:
    // 0x80226BF4: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x80226BF8: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x80226BFC: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x80226C00: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226C04: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80226C08: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80226C0C: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80226C10: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80226C14: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x80226C18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80226C1C:
    // 0x80226C1C: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80226C20: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80226C24: jal         0x8004DA90
    // 0x80226C28: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x80226C28: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x80226C2C: lhu         $v0, 0x18($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X18);
    // 0x80226C30: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80226C34: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
    // 0x80226C38: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226C3C: bne         $v0, $zero, L_80226C6C
    if (ctx->r2 != 0) {
        // 0x80226C40: nop
    
            goto L_80226C6C;
    }
    // 0x80226C40: nop

    // 0x80226C44: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80226C48: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80226C4C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80226C50: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x80226C54: lhu         $v1, 0x16($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X16);
    // 0x80226C58: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226C5C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80226C60: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x80226C64: j           L_80226CBC
    // 0x80226C68: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80226CBC;
    // 0x80226C68: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80226C6C:
    // 0x80226C6C: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x80226C70: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80226C74: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    // 0x80226C78: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226C7C: bne         $v0, $zero, L_80226C8C
    if (ctx->r2 != 0) {
        // 0x80226C80: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80226C8C;
    }
    // 0x80226C80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226C84: j           L_80226CBC
    // 0x80226C88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80226CBC;
    // 0x80226C88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80226C8C:
    // 0x80226C8C: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80226C90: jal         0x802284C4
    // 0x80226C94: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_802284C4_ovl17(rdram, ctx);
        goto after_2;
    // 0x80226C94: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_2:
    // 0x80226C98: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80226C9C: beq         $v0, $zero, L_80226CC0
    if (ctx->r2 == 0) {
        // 0x80226CA0: nop
    
            goto L_80226CC0;
    }
    // 0x80226CA0: nop

    // 0x80226CA4: jal         0x80228428
    // 0x80226CA8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_80228428_ovl17(rdram, ctx);
        goto after_3;
    // 0x80226CA8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_3:
    // 0x80226CAC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80226CB0: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80226CB4: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    // 0x80226CB8: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_80226CBC:
    // 0x80226CBC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80226CC0:
    // 0x80226CC0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80226CC4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80226CC8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226CCC: jr          $ra
    // 0x80226CD0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80226CD0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80227488_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227488: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022748C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227490: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227494: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227498: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022749C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x802274A0: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x802274A4: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x802274A8: jal         0x80228438
    // 0x802274AC: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    func_80228438_ovl17(rdram, ctx);
        goto after_0;
    // 0x802274AC: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    after_0:
    // 0x802274B0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802274B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802274B8: sh          $v0, 0x366($s0)
    MEM_H(0X366, ctx->r16) = ctx->r2;
    // 0x802274BC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802274C0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802274C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802274C8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802274CC: jr          $ra
    // 0x802274D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802274D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225650_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225650: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225654: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225658: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022565C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225660: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x80225664: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80225668: beq         $v0, $zero, L_8022568C
    if (ctx->r2 == 0) {
        // 0x8022566C: nop
    
            goto L_8022568C;
    }
    // 0x8022566C: nop

    // 0x80225670: bltz        $v1, L_8022568C
    if (SIGNED(ctx->r3) < 0) {
        // 0x80225674: nop
    
            goto L_8022568C;
    }
    // 0x80225674: nop

    // 0x80225678: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8022567C: jal         0x800607C4
    // 0x80225680: addiu       $a0, $a0, -0x5CD4
    ctx->r4 = ADD32(ctx->r4, -0X5CD4);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x80225680: addiu       $a0, $a0, -0x5CD4
    ctx->r4 = ADD32(ctx->r4, -0X5CD4);
    after_0:
    // 0x80225684: addiu       $v0, $zero, 0xE1
    ctx->r2 = ADD32(0, 0XE1);
    // 0x80225688: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8022568C:
    // 0x8022568C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225690: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225694: jr          $ra
    // 0x80225698: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225698: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802257C4_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802257C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802257C8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802257CC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802257D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802257D4: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x802257D8: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x802257DC: beq         $v0, $zero, L_80225800
    if (ctx->r2 == 0) {
        // 0x802257E0: nop
    
            goto L_80225800;
    }
    // 0x802257E0: nop

    // 0x802257E4: bltz        $v1, L_80225800
    if (SIGNED(ctx->r3) < 0) {
        // 0x802257E8: nop
    
            goto L_80225800;
    }
    // 0x802257E8: nop

    // 0x802257EC: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802257F0: jal         0x800607C4
    // 0x802257F4: addiu       $a0, $a0, -0x5CFC
    ctx->r4 = ADD32(ctx->r4, -0X5CFC);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x802257F4: addiu       $a0, $a0, -0x5CFC
    ctx->r4 = ADD32(ctx->r4, -0X5CFC);
    after_0:
    // 0x802257F8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802257FC: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225800:
    // 0x80225800: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225804: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225808: jr          $ra
    // 0x8022580C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022580C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802274D4_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802274D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802274D8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802274DC: lbu         $v0, 0x34B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34B);
    // 0x802274E0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802274E4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802274E8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802274EC: lw          $v0, -0x54D0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X54D0);
    // 0x802274F0: jalr        $v0
    // 0x802274F4: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802274F4: nop

    after_0:
    // 0x802274F8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802274FC: jr          $ra
    // 0x80227500: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227500: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022585C_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022585C: jr          $ra
    // 0x80225860: nop

    TRACE_RETURN()
    return;
    // 0x80225860: nop

;}
RECOMP_FUNC void func_80229294_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229294: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229298: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022929C: jal         0x8006033C
    // 0x802292A0: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x802292A0: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_0:
    // 0x802292A4: bne         $v0, $zero, L_802292B4
    if (ctx->r2 != 0) {
        // 0x802292A8: addiu       $a0, $zero, 0x6
        ctx->r4 = ADD32(0, 0X6);
            goto L_802292B4;
    }
    // 0x802292A8: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x802292AC: j           L_802292C4
    // 0x802292B0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_802292C4;
    // 0x802292B0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_802292B4:
    // 0x802292B4: jal         0x80072168
    // 0x802292B8: addiu       $a1, $zero, 0x120
    ctx->r5 = ADD32(0, 0X120);
    func_80072168_4D568(rdram, ctx);
        goto after_1;
    // 0x802292B8: addiu       $a1, $zero, 0x120
    ctx->r5 = ADD32(0, 0X120);
    after_1:
    // 0x802292BC: xori        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 ^ 0X3;
    // 0x802292C0: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
L_802292C4:
    // 0x802292C4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802292C8: jr          $ra
    // 0x802292CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802292CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227D80_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227D80: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80227D84: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80227D88: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80227D8C: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80227D90: addiu       $s1, $sp, 0x20
    ctx->r17 = ADD32(ctx->r29, 0X20);
    // 0x80227D94: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80227D98: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x80227D9C: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x80227DA0: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80227DA4: lhu         $v0, 0x56($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X56);
    // 0x80227DA8: lbu         $v1, 0xAC($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0XAC);
    // 0x80227DAC: addiu       $s3, $s2, 0x14
    ctx->r19 = ADD32(ctx->r18, 0X14);
    // 0x80227DB0: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x80227DB4: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80227DB8: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x80227DBC: sh          $v0, 0x34C($s2)
    MEM_H(0X34C, ctx->r18) = ctx->r2;
    // 0x80227DC0: sb          $v1, 0x34A($s2)
    MEM_B(0X34A, ctx->r18) = ctx->r3;
    // 0x80227DC4: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80227DC8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80227DCC: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80227DD0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227DD4: sb          $v0, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = ctx->r2;
    // 0x80227DD8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227DDC: sb          $zero, 0x49BA($at)
    MEM_B(0X49BA, ctx->r1) = 0;
    // 0x80227DE0: andi        $v1, $v1, 0xFD
    ctx->r3 = ctx->r3 & 0XFD;
    // 0x80227DE4: jal         0x8009A3B4
    // 0x80227DE8: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80227DE8: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x80227DEC: lh          $v0, 0x14($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X14);
    // 0x80227DF0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80227DF4: lh          $v0, 0x16($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X16);
    // 0x80227DF8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80227DFC: addiu       $v0, $v0, -0x30
    ctx->r2 = ADD32(ctx->r2, -0X30);
    // 0x80227E00: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80227E04: lh          $v0, 0x18($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X18);
    // 0x80227E08: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    // 0x80227E0C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80227E10: jal         0x8004EC38
    // 0x80227E14: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_8004EC38_2A038(rdram, ctx);
        goto after_1;
    // 0x80227E14: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_1:
    // 0x80227E18: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80227E1C: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x80227E20: lw          $a3, 0x435C($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X435C);
    // 0x80227E24: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x80227E28: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x80227E2C: jal         0x80034FCC
    // 0x80227E30: addiu       $a3, $a3, 0x6C
    ctx->r7 = ADD32(ctx->r7, 0X6C);
    func_80034FCC_103CC(rdram, ctx);
        goto after_2;
    // 0x80227E30: addiu       $a3, $a3, 0x6C
    ctx->r7 = ADD32(ctx->r7, 0X6C);
    after_2:
    // 0x80227E34: lbu         $a0, 0x2($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X2);
    // 0x80227E38: jal         0x80228428
    // 0x80227E3C: addiu       $s1, $s2, 0x348
    ctx->r17 = ADD32(ctx->r18, 0X348);
    func_80228428_ovl17(rdram, ctx);
        goto after_3;
    // 0x80227E3C: addiu       $s1, $s2, 0x348
    ctx->r17 = ADD32(ctx->r18, 0X348);
    after_3:
    // 0x80227E40: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80227E44: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x80227E48: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80227E4C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x80227E50: jal         0x8004F820
    // 0x80227E54: sb          $v0, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_4;
    // 0x80227E54: sb          $v0, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = ctx->r2;
    after_4:
    // 0x80227E58: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227E5C: bgez        $v0, L_80227E88
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80227E60: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_80227E88;
    }
    // 0x80227E60: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80227E64: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x80227E68: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80227E6C: jal         0x8004F820
    // 0x80227E70: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_5;
    // 0x80227E70: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_5:
    // 0x80227E74: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227E78: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80227E7C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80227E80: j           L_80227EA0
    // 0x80227E84: srl         $v1, $v0, 3
    ctx->r3 = S32(U32(ctx->r2) >> 3);
        goto L_80227EA0;
    // 0x80227E84: srl         $v1, $v0, 3
    ctx->r3 = S32(U32(ctx->r2) >> 3);
L_80227E88:
    // 0x80227E88: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x80227E8C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80227E90: jal         0x8004F820
    // 0x80227E94: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_6;
    // 0x80227E94: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_6:
    // 0x80227E98: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227E9C: sra         $v1, $v0, 19
    ctx->r3 = S32(SIGNED(ctx->r2) >> 19);
L_80227EA0:
    // 0x80227EA0: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x80227EA4: sh          $v1, 0x6($s1)
    MEM_H(0X6, ctx->r17) = ctx->r3;
    // 0x80227EA8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227EAC: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    // 0x80227EB0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80227EB4: sb          $v0, 0x11B($s2)
    MEM_B(0X11B, ctx->r18) = ctx->r2;
    // 0x80227EB8: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x80227EBC: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x80227EC0: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80227EC4: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80227EC8: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80227ECC: jr          $ra
    // 0x80227ED0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80227ED0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80227850_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227850: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227854: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80227858: lbu         $v0, 0x34B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34B);
    // 0x8022785C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227860: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227864: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227868: lw          $v0, -0x54C0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X54C0);
    // 0x8022786C: jalr        $v0
    // 0x80227870: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80227870: nop

    after_0:
    // 0x80227874: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80227878: jr          $ra
    // 0x8022787C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022787C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802269DC_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802269DC: lbu         $v0, 0xE($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XE);
    // 0x802269E0: lbu         $v1, 0xA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA);
    // 0x802269E4: sh          $zero, 0x35C($a0)
    MEM_H(0X35C, ctx->r4) = 0;
    // 0x802269E8: sh          $zero, 0x35E($a0)
    MEM_H(0X35E, ctx->r4) = 0;
    // 0x802269EC: sh          $zero, 0x362($a0)
    MEM_H(0X362, ctx->r4) = 0;
    // 0x802269F0: sh          $zero, 0x46($a0)
    MEM_H(0X46, ctx->r4) = 0;
    // 0x802269F4: sh          $zero, 0x48($a0)
    MEM_H(0X48, ctx->r4) = 0;
    // 0x802269F8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802269FC: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80226A00: sh          $v0, 0x366($a0)
    MEM_H(0X366, ctx->r4) = ctx->r2;
    // 0x80226A04: sh          $v0, 0x360($a0)
    MEM_H(0X360, ctx->r4) = ctx->r2;
    // 0x80226A08: jr          $ra
    // 0x80226A0C: sb          $v1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r3;
    TRACE_RETURN()
    return;
    // 0x80226A0C: sb          $v1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r3;
;}
RECOMP_FUNC void func_80228110_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228110: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228114: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80228118: lbu         $v0, 0x34B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34B);
    // 0x8022811C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80228120: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80228124: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80228128: lw          $v0, -0x5488($at)
    ctx->r2 = MEM_W(ctx->r1, -0X5488);
    // 0x8022812C: jalr        $v0
    // 0x80228130: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80228130: nop

    after_0:
    // 0x80228134: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80228138: jr          $ra
    // 0x8022813C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022813C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022546C_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022546C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225470: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225474: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225478: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022547C: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x80225480: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80225484: beq         $v0, $zero, L_802254A8
    if (ctx->r2 == 0) {
        // 0x80225488: nop
    
            goto L_802254A8;
    }
    // 0x80225488: nop

    // 0x8022548C: bltz        $v1, L_802254A8
    if (SIGNED(ctx->r3) < 0) {
        // 0x80225490: nop
    
            goto L_802254A8;
    }
    // 0x80225490: nop

    // 0x80225494: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225498: jal         0x800607C4
    // 0x8022549C: addiu       $a0, $a0, -0x5D0C
    ctx->r4 = ADD32(ctx->r4, -0X5D0C);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x8022549C: addiu       $a0, $a0, -0x5D0C
    ctx->r4 = ADD32(ctx->r4, -0X5D0C);
    after_0:
    // 0x802254A0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802254A4: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_802254A8:
    // 0x802254A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802254AC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802254B0: jr          $ra
    // 0x802254B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802254B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228390_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228390: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228394: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x80228398: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x8022839C: beq         $a0, $v0, L_80228404
    if (ctx->r4 == ctx->r2) {
        // 0x802283A0: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_80228404;
    }
    // 0x802283A0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802283A4: slti        $v0, $a0, 0x2B
    ctx->r2 = SIGNED(ctx->r4) < 0X2B ? 1 : 0;
    // 0x802283A8: beql        $v0, $zero, L_802283C8
    if (ctx->r2 == 0) {
        // 0x802283AC: addiu       $v0, $zero, 0x50
        ctx->r2 = ADD32(0, 0X50);
            goto L_802283C8;
    }
    goto skip_0;
    // 0x802283AC: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    skip_0:
    // 0x802283B0: beq         $a0, $zero, L_802283FC
    if (ctx->r4 == 0) {
        // 0x802283B4: addiu       $v0, $zero, 0x11
        ctx->r2 = ADD32(0, 0X11);
            goto L_802283FC;
    }
    // 0x802283B4: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x802283B8: beq         $a0, $v0, L_8022841C
    if (ctx->r4 == ctx->r2) {
        // 0x802283BC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022841C;
    }
    // 0x802283BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802283C0: j           L_8022841C
    // 0x802283C4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_8022841C;
    // 0x802283C4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_802283C8:
    // 0x802283C8: beq         $a0, $v0, L_802283FC
    if (ctx->r4 == ctx->r2) {
        // 0x802283CC: slti        $v0, $a0, 0x51
        ctx->r2 = SIGNED(ctx->r4) < 0X51 ? 1 : 0;
            goto L_802283FC;
    }
    // 0x802283CC: slti        $v0, $a0, 0x51
    ctx->r2 = SIGNED(ctx->r4) < 0X51 ? 1 : 0;
    // 0x802283D0: beq         $v0, $zero, L_802283E8
    if (ctx->r2 == 0) {
        // 0x802283D4: addiu       $v0, $zero, 0x39
        ctx->r2 = ADD32(0, 0X39);
            goto L_802283E8;
    }
    // 0x802283D4: addiu       $v0, $zero, 0x39
    ctx->r2 = ADD32(0, 0X39);
    // 0x802283D8: beq         $a0, $v0, L_8022841C
    if (ctx->r4 == ctx->r2) {
        // 0x802283DC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022841C;
    }
    // 0x802283DC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x802283E0: j           L_8022841C
    // 0x802283E4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_8022841C;
    // 0x802283E4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_802283E8:
    // 0x802283E8: addiu       $v0, $zero, 0x53
    ctx->r2 = ADD32(0, 0X53);
    // 0x802283EC: beq         $a0, $v0, L_8022840C
    if (ctx->r4 == ctx->r2) {
        // 0x802283F0: nop
    
            goto L_8022840C;
    }
    // 0x802283F0: nop

    // 0x802283F4: j           L_8022841C
    // 0x802283F8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_8022841C;
    // 0x802283F8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_802283FC:
    // 0x802283FC: j           L_8022841C
    // 0x80228400: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8022841C;
    // 0x80228400: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80228404:
    // 0x80228404: j           L_8022841C
    // 0x80228408: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
        goto L_8022841C;
    // 0x80228408: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_8022840C:
    // 0x8022840C: jal         0x800A3450
    // 0x80228410: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80228410: nop

    after_0:
    // 0x80228414: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80228418: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
L_8022841C:
    // 0x8022841C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80228420: jr          $ra
    // 0x80228424: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228424: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226398_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226398: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022639C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802263A0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802263A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802263A8: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x802263AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802263B0: sh          $zero, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = 0;
    // 0x802263B4: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x802263B8: sh          $v0, 0x366($s0)
    MEM_H(0X366, ctx->r16) = ctx->r2;
    // 0x802263BC: jal         0x80228478
    // 0x802263C0: sh          $v0, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r2;
    func_80228478_ovl17(rdram, ctx);
        goto after_0;
    // 0x802263C0: sh          $v0, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r2;
    after_0:
    // 0x802263C4: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802263C8: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x802263CC: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x802263D0: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x802263D4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802263D8: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x802263DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802263E0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802263E4: jr          $ra
    // 0x802263E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802263E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227504_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227504: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80227508: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022750C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227510: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80227514: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80227518: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022751C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227520: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80227524: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x80227528: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022752C: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x80227530: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227534: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
    // 0x80227538: sh          $v1, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r3;
    // 0x8022753C: jal         0x80228428
    // 0x80227540: sb          $a1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r5;
    func_80228428_ovl17(rdram, ctx);
        goto after_0;
    // 0x80227540: sb          $a1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r5;
    after_0:
    // 0x80227544: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x80227548: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022754C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80227550: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x80227554: addiu       $s2, $s2, 0x49C4
    ctx->r18 = ADD32(ctx->r18, 0X49C4);
    // 0x80227558: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022755C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x80227560: jal         0x8004F820
    // 0x80227564: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x80227564: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_1:
    // 0x80227568: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022756C: bgez        $v0, L_8022759C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80227570: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_8022759C;
    }
    // 0x80227570: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x80227574: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80227578: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022757C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80227580: jal         0x8004F820
    // 0x80227584: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x80227584: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x80227588: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022758C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80227590: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80227594: j           L_802275B8
    // 0x80227598: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_802275B8;
    // 0x80227598: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_8022759C:
    // 0x8022759C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802275A0: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802275A4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802275A8: jal         0x8004F820
    // 0x802275AC: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x802275AC: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_3:
    // 0x802275B0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802275B4: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_802275B8:
    // 0x802275B8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802275BC: sh          $v0, 0x6($s3)
    MEM_H(0X6, ctx->r19) = ctx->r2;
    // 0x802275C0: lbu         $a3, 0xC($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XC);
    // 0x802275C4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802275C8: jal         0x800610AC
    // 0x802275CC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_4;
    // 0x802275CC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x802275D0: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x802275D4: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x802275D8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802275DC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802275E0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802275E4: jr          $ra
    // 0x802275E8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802275E8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80227880_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227880: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80227884: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227888: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022788C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80227890: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80227894: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80227898: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022789C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x802278A0: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x802278A4: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x802278A8: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x802278AC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802278B0: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
    // 0x802278B4: sh          $v1, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r3;
    // 0x802278B8: jal         0x80228428
    // 0x802278BC: sb          $a1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r5;
    func_80228428_ovl17(rdram, ctx);
        goto after_0;
    // 0x802278BC: sb          $a1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r5;
    after_0:
    // 0x802278C0: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x802278C4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802278C8: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802278CC: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x802278D0: addiu       $s2, $s2, 0x49C4
    ctx->r18 = ADD32(ctx->r18, 0X49C4);
    // 0x802278D4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802278D8: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x802278DC: jal         0x8004F820
    // 0x802278E0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x802278E0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_1:
    // 0x802278E4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802278E8: bgez        $v0, L_80227918
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802278EC: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_80227918;
    }
    // 0x802278EC: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x802278F0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802278F4: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802278F8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802278FC: jal         0x8004F820
    // 0x80227900: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x80227900: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x80227904: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227908: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022790C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80227910: j           L_80227934
    // 0x80227914: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_80227934;
    // 0x80227914: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_80227918:
    // 0x80227918: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022791C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80227920: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80227924: jal         0x8004F820
    // 0x80227928: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x80227928: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_3:
    // 0x8022792C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227930: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_80227934:
    // 0x80227934: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80227938: sh          $v0, 0x6($s3)
    MEM_H(0X6, ctx->r19) = ctx->r2;
    // 0x8022793C: lbu         $a3, 0xC($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XC);
    // 0x80227940: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80227944: jal         0x800610AC
    // 0x80227948: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_4;
    // 0x80227948: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x8022794C: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80227950: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80227954: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80227958: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022795C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227960: jr          $ra
    // 0x80227964: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80227964: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80225150_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225150: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225154: addiu       $v0, $v0, -0x6CC8
    ctx->r2 = ADD32(ctx->r2, -0X6CC8);
    // 0x80225158: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022515C: sw          $v0, 0x4020($at)
    MEM_W(0X4020, ctx->r1) = ctx->r2;
    // 0x80225160: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225164: addiu       $v0, $v0, -0x6B48
    ctx->r2 = ADD32(ctx->r2, -0X6B48);
    // 0x80225168: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8022516C: sw          $v0, -0x22A0($at)
    MEM_W(-0X22A0, ctx->r1) = ctx->r2;
    // 0x80225170: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225174: addiu       $v0, $v0, -0x6B2C
    ctx->r2 = ADD32(ctx->r2, -0X6B2C);
    // 0x80225178: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x8022517C: sw          $v0, -0x26A8($at)
    MEM_W(-0X26A8, ctx->r1) = ctx->r2;
    // 0x80225180: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225184: addiu       $v0, $v0, -0x6AE4
    ctx->r2 = ADD32(ctx->r2, -0X6AE4);
    // 0x80225188: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8022518C: sw          $v0, -0xBD8($at)
    MEM_W(-0XBD8, ctx->r1) = ctx->r2;
    // 0x80225190: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225194: addiu       $v0, $v0, -0x6AE0
    ctx->r2 = ADD32(ctx->r2, -0X6AE0);
    // 0x80225198: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8022519C: sw          $v0, 0xC68($at)
    MEM_W(0XC68, ctx->r1) = ctx->r2;
    // 0x802251A0: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802251A4: addiu       $v0, $v0, -0x6ADC
    ctx->r2 = ADD32(ctx->r2, -0X6ADC);
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
