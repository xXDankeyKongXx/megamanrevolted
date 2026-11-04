#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8023AD88_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023AD88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023AD8C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023AD90: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023AD94: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x8023AD98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023AD9C: jal         0x80050294
    // 0x8023ADA0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8023ADA0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8023ADA4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8023ADA8: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x8023ADAC: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8023ADB0: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    // 0x8023ADB4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8023ADB8: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8023ADBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023ADC0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023ADC4: jr          $ra
    // 0x8023ADC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023ADC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80231E28_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231E28: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231E2C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231E30: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80231E34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80231E38: lw          $v0, 0x35C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X35C);
    // 0x80231E3C: andi        $v0, $v0, 0x5
    ctx->r2 = ctx->r2 & 0X5;
    // 0x80231E40: beq         $v0, $zero, L_80231E58
    if (ctx->r2 == 0) {
        // 0x80231E44: nop
    
            goto L_80231E58;
    }
    // 0x80231E44: nop

    // 0x80231E48: jal         0x802324D8
    // 0x80231E4C: nop

    func_802324D8_ovl28(rdram, ctx);
        goto after_0;
    // 0x80231E4C: nop

    after_0:
    // 0x80231E50: j           L_80231EC0
    // 0x80231E54: nop

        goto L_80231EC0;
    // 0x80231E54: nop

L_80231E58:
    // 0x80231E58: lhu         $v0, 0x37E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X37E);
    // 0x80231E5C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80231E60: sh          $v0, 0x37E($s0)
    MEM_H(0X37E, ctx->r16) = ctx->r2;
    // 0x80231E64: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x80231E68: bne         $v0, $zero, L_80231E80
    if (ctx->r2 != 0) {
        // 0x80231E6C: nop
    
            goto L_80231E80;
    }
    // 0x80231E6C: nop

    // 0x80231E70: jal         0x80232494
    // 0x80231E74: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80232494_ovl28(rdram, ctx);
        goto after_1;
    // 0x80231E74: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80231E78: j           L_80231EC0
    // 0x80231E7C: nop

        goto L_80231EC0;
    // 0x80231E7C: nop

L_80231E80:
    // 0x80231E80: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80231E84: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x80231E88: lh          $a3, 0x48($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X48);
    // 0x80231E8C: jal         0x8004DA90
    // 0x80231E90: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x80231E90: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80231E94: lw          $v0, 0x358($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X358);
    // 0x80231E98: beq         $v0, $zero, L_80231EC0
    if (ctx->r2 == 0) {
        // 0x80231E9C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80231EC0;
    }
    // 0x80231E9C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231EA0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80231EA4: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80231EA8: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80231EAC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80231EB0: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80231EB4: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    // 0x80231EB8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80231EBC: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_80231EC0:
    // 0x80231EC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80231EC4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231EC8: jr          $ra
    // 0x80231ECC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80231ECC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80234C38_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234C38: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80234C3C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80234C40: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80234C44: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80234C48: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x80234C4C: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x80234C50: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x80234C54: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x80234C58: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80234C5C: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80234C60: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80234C64: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80234C68: lw          $a0, 0x80($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X80);
    // 0x80234C6C: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x80234C70: jal         0x80032424
    // 0x80234C74: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    func_80032424_D824(rdram, ctx);
        goto after_0;
    // 0x80234C74: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    after_0:
    // 0x80234C78: jal         0x8004EFE4
    // 0x80234C7C: addu        $fp, $v0, $zero
    ctx->r30 = ADD32(ctx->r2, 0);
    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_1;
    // 0x80234C7C: addu        $fp, $v0, $zero
    ctx->r30 = ADD32(ctx->r2, 0);
    after_1:
    // 0x80234C80: addu        $s7, $s3, $zero
    ctx->r23 = ADD32(ctx->r19, 0);
    // 0x80234C84: addiu       $s6, $s2, 0x348
    ctx->r22 = ADD32(ctx->r18, 0X348);
    // 0x80234C88: lui         $s5, 0x8020
    ctx->r21 = S32(0X8020 << 16);
    // 0x80234C8C: addiu       $s5, $s5, 0x49B0
    ctx->r21 = ADD32(ctx->r21, 0X49B0);
    // 0x80234C90: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80234C94: beq         $s1, $zero, L_80234F90
    if (ctx->r17 == 0) {
        // 0x80234C98: addiu       $s4, $s2, 0x1D8
        ctx->r20 = ADD32(ctx->r18, 0X1D8);
            goto L_80234F90;
    }
    // 0x80234C98: addiu       $s4, $s2, 0x1D8
    ctx->r20 = ADD32(ctx->r18, 0X1D8);
    // 0x80234C9C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80234CA0: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x80234CA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80234CA8: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
    // 0x80234CAC: andi        $v0, $s3, 0x2
    ctx->r2 = ctx->r19 & 0X2;
    // 0x80234CB0: bne         $v0, $zero, L_80234CCC
    if (ctx->r2 != 0) {
        // 0x80234CB4: sb          $zero, 0x4($s1)
        MEM_B(0X4, ctx->r17) = 0;
            goto L_80234CCC;
    }
    // 0x80234CB4: sb          $zero, 0x4($s1)
    MEM_B(0X4, ctx->r17) = 0;
    // 0x80234CB8: addiu       $a0, $zero, 0x1BE
    ctx->r4 = ADD32(0, 0X1BE);
    // 0x80234CBC: jal         0x8002A33C
    // 0x80234CC0: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x80234CC0: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    after_2:
    // 0x80234CC4: j           L_80234CD0
    // 0x80234CC8: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
        goto L_80234CD0;
    // 0x80234CC8: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
L_80234CCC:
    // 0x80234CCC: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_80234CD0:
    // 0x80234CD0: andi        $v1, $s7, 0xFF
    ctx->r3 = ctx->r23 & 0XFF;
    // 0x80234CD4: bne         $v1, $zero, L_80234D6C
    if (ctx->r3 != 0) {
        // 0x80234CD8: sb          $v0, 0xF($s1)
        MEM_B(0XF, ctx->r17) = ctx->r2;
            goto L_80234D6C;
    }
    // 0x80234CD8: sb          $v0, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r2;
    // 0x80234CDC: lbu         $v0, 0x3($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X3);
    // 0x80234CE0: andi        $v1, $v0, 0xF
    ctx->r3 = ctx->r2 & 0XF;
    // 0x80234CE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80234CE8: beq         $v1, $v0, L_80234D28
    if (ctx->r3 == ctx->r2) {
        // 0x80234CEC: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80234D28;
    }
    // 0x80234CEC: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80234CF0: beql        $v0, $zero, L_80234D08
    if (ctx->r2 == 0) {
        // 0x80234CF4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80234D08;
    }
    goto skip_0;
    // 0x80234CF4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80234CF8: beq         $v1, $zero, L_80234D18
    if (ctx->r3 == 0) {
        // 0x80234CFC: nop
    
            goto L_80234D18;
    }
    // 0x80234CFC: nop

    // 0x80234D00: j           L_80234D44
    // 0x80234D04: nop

        goto L_80234D44;
    // 0x80234D04: nop

L_80234D08:
    // 0x80234D08: beq         $v1, $v0, L_80234D38
    if (ctx->r3 == ctx->r2) {
        // 0x80234D0C: nop
    
            goto L_80234D38;
    }
    // 0x80234D0C: nop

    // 0x80234D10: j           L_80234D44
    // 0x80234D14: nop

        goto L_80234D44;
    // 0x80234D14: nop

L_80234D18:
    // 0x80234D18: lhu         $v0, 0x6A($s6)
    ctx->r2 = MEM_HU(ctx->r22, 0X6A);
    // 0x80234D1C: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80234D20: j           L_80234D44
    // 0x80234D24: addiu       $s0, $v0, -0x20
    ctx->r16 = ADD32(ctx->r2, -0X20);
        goto L_80234D44;
    // 0x80234D24: addiu       $s0, $v0, -0x20
    ctx->r16 = ADD32(ctx->r2, -0X20);
L_80234D28:
    // 0x80234D28: lhu         $v0, 0x6A($s6)
    ctx->r2 = MEM_HU(ctx->r22, 0X6A);
    // 0x80234D2C: andi        $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 & 0X7F;
    // 0x80234D30: j           L_80234D44
    // 0x80234D34: addiu       $s0, $v0, -0x40
    ctx->r16 = ADD32(ctx->r2, -0X40);
        goto L_80234D44;
    // 0x80234D34: addiu       $s0, $v0, -0x40
    ctx->r16 = ADD32(ctx->r2, -0X40);
L_80234D38:
    // 0x80234D38: lhu         $v0, 0x6A($s6)
    ctx->r2 = MEM_HU(ctx->r22, 0X6A);
    // 0x80234D3C: andi        $v0, $v0, 0x3FF
    ctx->r2 = ctx->r2 & 0X3FF;
    // 0x80234D40: addiu       $s0, $v0, -0x200
    ctx->r16 = ADD32(ctx->r2, -0X200);
L_80234D44:
    // 0x80234D44: lh          $a0, 0x56($s2)
    ctx->r4 = MEM_H(ctx->r18, 0X56);
    // 0x80234D48: sll         $s0, $s0, 16
    ctx->r16 = S32(ctx->r16 << 16);
    // 0x80234D4C: sra         $s0, $s0, 16
    ctx->r16 = S32(SIGNED(ctx->r16) >> 16);
    // 0x80234D50: addiu       $s0, $s0, 0x800
    ctx->r16 = ADD32(ctx->r16, 0X800);
    // 0x80234D54: jal         0x80032498
    // 0x80234D58: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
    func_80032498_D898(rdram, ctx);
        goto after_3;
    // 0x80234D58: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
    after_3:
    // 0x80234D5C: lh          $a0, 0x56($s2)
    ctx->r4 = MEM_H(ctx->r18, 0X56);
    // 0x80234D60: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x80234D64: j           L_80234DD4
    // 0x80234D68: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
        goto L_80234DD4;
    // 0x80234D68: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
L_80234D6C:
    // 0x80234D6C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80234D70: bne         $v1, $v0, L_80234D94
    if (ctx->r3 != ctx->r2) {
        // 0x80234D74: nop
    
            goto L_80234D94;
    }
    // 0x80234D74: nop

    // 0x80234D78: lh          $a0, 0x56($s2)
    ctx->r4 = MEM_H(ctx->r18, 0X56);
    // 0x80234D7C: jal         0x80032498
    // 0x80234D80: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    func_80032498_D898(rdram, ctx);
        goto after_4;
    // 0x80234D80: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    after_4:
    // 0x80234D84: lh          $a0, 0x56($s2)
    ctx->r4 = MEM_H(ctx->r18, 0X56);
    // 0x80234D88: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x80234D8C: j           L_80234DD4
    // 0x80234D90: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
        goto L_80234DD4;
    // 0x80234D90: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
L_80234D94:
    // 0x80234D94: lbu         $v0, 0x6($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X6);
    // 0x80234D98: lh          $v1, 0x56($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X56);
    // 0x80234D9C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80234DA0: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80234DA4: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80234DA8: lhu         $a0, 0x39D0($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X39D0);
    // 0x80234DAC: jal         0x80032498
    // 0x80234DB0: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    func_80032498_D898(rdram, ctx);
        goto after_5;
    // 0x80234DB0: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    after_5:
    // 0x80234DB4: lbu         $v1, 0x6($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X6);
    // 0x80234DB8: lh          $a1, 0x56($s2)
    ctx->r5 = MEM_H(ctx->r18, 0X56);
    // 0x80234DBC: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x80234DC0: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80234DC4: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x80234DC8: lhu         $a0, 0x39D0($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X39D0);
    // 0x80234DCC: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x80234DD0: addu        $a0, $a1, $a0
    ctx->r4 = ADD32(ctx->r5, ctx->r4);
L_80234DD4:
    // 0x80234DD4: jal         0x800324B4
    // 0x80234DD8: nop

    func_800324B4_D8B4(rdram, ctx);
        goto after_6;
    // 0x80234DD8: nop

    after_6:
    // 0x80234DDC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80234DE0: lb          $v1, 0xF($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XF);
    // 0x80234DE4: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80234DE8: bne         $v1, $v0, L_80234ECC
    if (ctx->r3 != ctx->r2) {
        // 0x80234DEC: addiu       $a0, $s1, 0x14
        ctx->r4 = ADD32(ctx->r17, 0X14);
            goto L_80234ECC;
    }
    // 0x80234DEC: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x80234DF0: lhu         $v0, 0x180($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X180);
    // 0x80234DF4: sh          $v0, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r2;
    // 0x80234DF8: lhu         $v0, 0x182($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X182);
    // 0x80234DFC: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x80234E00: lhu         $v0, 0x184($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X184);
    // 0x80234E04: lh          $v1, 0x16($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X16);
    // 0x80234E08: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
    // 0x80234E0C: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x80234E10: lh          $a1, 0x18($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X18);
    // 0x80234E14: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80234E18: sw          $v1, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r3;
    // 0x80234E1C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80234E20: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x80234E24: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x80234E28: sw          $a1, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r5;
    // 0x80234E2C: lhu         $a2, 0x56($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X56);
    // 0x80234E30: addiu       $a3, $zero, 0x550
    ctx->r7 = ADD32(0, 0X550);
    // 0x80234E34: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x80234E38: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80234E3C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80234E40: jal         0x8004DBA0
    // 0x80234E44: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_7;
    // 0x80234E44: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_7:
    // 0x80234E48: nop

    // 0x80234E4C: mult        $s0, $fp
    result = S64(S32(ctx->r16)) * S64(S32(ctx->r30)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80234E50: mflo        $v0
    ctx->r2 = lo;
    // 0x80234E54: lhu         $v1, 0x14($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X14);
    // 0x80234E58: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80234E5C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80234E60: andi        $v0, $s7, 0xFF
    ctx->r2 = ctx->r23 & 0XFF;
    // 0x80234E64: bne         $v0, $zero, L_80234E8C
    if (ctx->r2 != 0) {
        // 0x80234E68: sh          $v1, 0xC4($s5)
        MEM_H(0XC4, ctx->r21) = ctx->r3;
            goto L_80234E8C;
    }
    // 0x80234E68: sh          $v1, 0xC4($s5)
    MEM_H(0XC4, ctx->r21) = ctx->r3;
    // 0x80234E6C: lhu         $v0, 0x6A($s6)
    ctx->r2 = MEM_HU(ctx->r22, 0X6A);
    // 0x80234E70: lhu         $v1, 0x3AA($s5)
    ctx->r3 = MEM_HU(ctx->r21, 0X3AA);
    // 0x80234E74: ori         $a0, $zero, 0xFFE0
    ctx->r4 = 0 | 0XFFE0;
    // 0x80234E78: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80234E7C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80234E80: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80234E84: j           L_80234E98
    // 0x80234E88: sh          $v1, 0xC6($s5)
    MEM_H(0XC6, ctx->r21) = ctx->r3;
        goto L_80234E98;
    // 0x80234E88: sh          $v1, 0xC6($s5)
    MEM_H(0XC6, ctx->r21) = ctx->r3;
L_80234E8C:
    // 0x80234E8C: lhu         $v0, 0x3EA($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X3EA);
    // 0x80234E90: addiu       $v0, $v0, 0x30
    ctx->r2 = ADD32(ctx->r2, 0X30);
    // 0x80234E94: sh          $v0, 0xC6($s5)
    MEM_H(0XC6, ctx->r21) = ctx->r2;
L_80234E98:
    // 0x80234E98: nop

    // 0x80234E9C: mult        $s3, $fp
    result = S64(S32(ctx->r19)) * S64(S32(ctx->r30)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80234EA0: mflo        $v1
    ctx->r3 = lo;
    // 0x80234EA4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80234EA8: addiu       $a1, $s5, 0xC4
    ctx->r5 = ADD32(ctx->r21, 0XC4);
    // 0x80234EAC: lhu         $v0, 0x18($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X18);
    // 0x80234EB0: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    // 0x80234EB4: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x80234EB8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80234EBC: jal         0x8004E99C
    // 0x80234EC0: sh          $v0, 0xC8($s5)
    MEM_H(0XC8, ctx->r21) = ctx->r2;
    func_8004E99C_29D9C(rdram, ctx);
        goto after_8;
    // 0x80234EC0: sh          $v0, 0xC8($s5)
    MEM_H(0XC8, ctx->r21) = ctx->r2;
    after_8:
    // 0x80234EC4: j           L_80234F90
    // 0x80234EC8: nop

        goto L_80234F90;
    // 0x80234EC8: nop

L_80234ECC:
    // 0x80234ECC: lhu         $v0, 0x188($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X188);
    // 0x80234ED0: sh          $v0, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r2;
    // 0x80234ED4: lhu         $v0, 0x18A($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X18A);
    // 0x80234ED8: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x80234EDC: lhu         $v0, 0x18C($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X18C);
    // 0x80234EE0: lh          $v1, 0x16($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X16);
    // 0x80234EE4: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
    // 0x80234EE8: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x80234EEC: lh          $a1, 0x18($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X18);
    // 0x80234EF0: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80234EF4: sw          $v1, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r3;
    // 0x80234EF8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80234EFC: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x80234F00: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x80234F04: sw          $a1, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r5;
    // 0x80234F08: lhu         $a2, 0x56($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X56);
    // 0x80234F0C: addiu       $a3, $zero, 0x550
    ctx->r7 = ADD32(0, 0X550);
    // 0x80234F10: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x80234F14: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80234F18: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80234F1C: jal         0x8004DBA0
    // 0x80234F20: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_9;
    // 0x80234F20: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_9:
    // 0x80234F24: lhu         $v0, 0x6A($s6)
    ctx->r2 = MEM_HU(ctx->r22, 0X6A);
    // 0x80234F28: andi        $v0, $v0, 0x3FF
    ctx->r2 = ctx->r2 & 0X3FF;
    // 0x80234F2C: addiu       $v0, $v0, 0x80
    ctx->r2 = ADD32(ctx->r2, 0X80);
    // 0x80234F30: mult        $s0, $v0
    result = S64(S32(ctx->r16)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80234F34: mflo        $v0
    ctx->r2 = lo;
    // 0x80234F38: lhu         $v1, 0x14($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X14);
    // 0x80234F3C: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80234F40: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80234F44: sh          $v1, 0xC4($s5)
    MEM_H(0XC4, ctx->r21) = ctx->r3;
    // 0x80234F48: lhu         $v0, 0x16($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X16);
    // 0x80234F4C: sh          $v0, 0xC6($s5)
    MEM_H(0XC6, ctx->r21) = ctx->r2;
    // 0x80234F50: lhu         $v0, 0x6A($s6)
    ctx->r2 = MEM_HU(ctx->r22, 0X6A);
    // 0x80234F54: andi        $v0, $v0, 0x3FF
    ctx->r2 = ctx->r2 & 0X3FF;
    // 0x80234F58: addiu       $v0, $v0, 0x80
    ctx->r2 = ADD32(ctx->r2, 0X80);
    // 0x80234F5C: mult        $s3, $v0
    result = S64(S32(ctx->r19)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80234F60: mflo        $v0
    ctx->r2 = lo;
    // 0x80234F64: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80234F68: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x80234F6C: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    // 0x80234F70: lhu         $t0, 0x18($a0)
    ctx->r8 = MEM_HU(ctx->r4, 0X18);
    // 0x80234F74: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80234F78: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x80234F7C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x80234F80: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80234F84: addu        $t0, $t0, $v0
    ctx->r8 = ADD32(ctx->r8, ctx->r2);
    // 0x80234F88: jal         0x8004E458
    // 0x80234F8C: sh          $t0, 0xC8($a1)
    MEM_H(0XC8, ctx->r5) = ctx->r8;
    func_8004E458_29858(rdram, ctx);
        goto after_10;
    // 0x80234F8C: sh          $t0, 0xC8($a1)
    MEM_H(0XC8, ctx->r5) = ctx->r8;
    after_10:
L_80234F90:
    // 0x80234F90: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80234F94: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x80234F98: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x80234F9C: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x80234FA0: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x80234FA4: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80234FA8: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80234FAC: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80234FB0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80234FB4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80234FB8: jr          $ra
    // 0x80234FBC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x80234FBC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8023773C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023773C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80237740: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80237744: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80237748: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023774C: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x80237750: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80237754: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80237758: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023775C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80237760: jal         0x8004D5D4
    // 0x80237764: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80237764: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x80237768: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023776C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80237770: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    // 0x80237774: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80237778: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8023777C: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80237780: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80237784: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80237788: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8023778C: addiu       $v0, $zero, 0x1A
    ctx->r2 = ADD32(0, 0X1A);
    // 0x80237790: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80237794: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80237798: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x8023779C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802377A0: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x802377A4: sb          $v0, 0x12($s1)
    MEM_B(0X12, ctx->r17) = ctx->r2;
    // 0x802377A8: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x802377AC: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
    // 0x802377B0: sb          $v0, 0x108($s0)
    MEM_B(0X108, ctx->r16) = ctx->r2;
    // 0x802377B4: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
    // 0x802377B8: jal         0x80237D60
    // 0x802377BC: sb          $v0, 0x114($s0)
    MEM_B(0X114, ctx->r16) = ctx->r2;
    func_80237D60_ovl28(rdram, ctx);
        goto after_1;
    // 0x802377BC: sb          $v0, 0x114($s0)
    MEM_B(0X114, ctx->r16) = ctx->r2;
    after_1:
    // 0x802377C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802377C4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802377C8: jal         0x80237D88
    // 0x802377CC: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    func_80237D88_ovl28(rdram, ctx);
        goto after_2;
    // 0x802377CC: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_2:
    // 0x802377D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802377D4: jal         0x80237DB0
    // 0x802377D8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_80237DB0_ovl28(rdram, ctx);
        goto after_3;
    // 0x802377D8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_3:
    // 0x802377DC: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x802377E0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802377E4: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x802377E8: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x802377EC: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x802377F0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802377F4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x802377F8: lh          $a2, 0x2($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X2);
    // 0x802377FC: jal         0x80050294
    // 0x80237800: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_4;
    // 0x80237800: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80237804: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80237808: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023780C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80237810: jr          $ra
    // 0x80237814: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80237814: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802282C4_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802282C4: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x802282C8: beq         $v1, $zero, L_802282E0
    if (ctx->r3 == 0) {
        // 0x802282CC: addiu       $v0, $zero, 0x1E
        ctx->r2 = ADD32(0, 0X1E);
            goto L_802282E0;
    }
    // 0x802282CC: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x802282D0: beq         $v1, $v0, L_802282EC
    if (ctx->r3 == ctx->r2) {
        // 0x802282D4: nop
    
            goto L_802282EC;
    }
    // 0x802282D4: nop

    // 0x802282D8: j           L_802282FC
    // 0x802282DC: nop

        goto L_802282FC;
    // 0x802282DC: nop

L_802282E0:
    // 0x802282E0: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x802282E4: j           L_802282FC
    // 0x802282E8: sb          $zero, 0x9($v0)
    MEM_B(0X9, ctx->r2) = 0;
        goto L_802282FC;
    // 0x802282E8: sb          $zero, 0x9($v0)
    MEM_B(0X9, ctx->r2) = 0;
L_802282EC:
    // 0x802282EC: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x802282F0: lbu         $v0, 0x9($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X9);
    // 0x802282F4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802282F8: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
L_802282FC:
    // 0x802282FC: jr          $ra
    // 0x80228300: nop

    TRACE_RETURN()
    return;
    // 0x80228300: nop

    // 0x80228304: nop

    // 0x80228308: nop

    // 0x8022830C: nop

;}
RECOMP_FUNC void func_802492D0_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802492D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802492D4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802492D8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802492DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802492E0: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x802492E4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802492E8: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x802492EC: jal         0x8004D5D4
    // 0x802492F0: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x802492F0: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x802492F4: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x802492F8: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x802492FC: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
    // 0x80249300: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80249304: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x80249308: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024930C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80249310: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80249314: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80249318: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x8024931C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80249320: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80249324: jr          $ra
    // 0x80249328: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80249328: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226200_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226200: jr          $ra
    // 0x80226204: nop

    TRACE_RETURN()
    return;
    // 0x80226204: nop

;}
RECOMP_FUNC void func_8024B3D8_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024B3D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8024B3DC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8024B3E0: jal         0x8004F5C4
    // 0x8024B3E4: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x8024B3E4: nop

    after_0:
    // 0x8024B3E8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8024B3EC: jr          $ra
    // 0x8024B3F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8024B3F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80239E70_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239E70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80239E74: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80239E78: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80239E7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80239E80: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80239E84: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    // 0x80239E88: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80239E8C: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80239E90: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80239E94: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80239E98: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80239E9C: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80239EA0: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80239EA4: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80239EA8: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80239EAC: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80239EB0: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x80239EB4: sh          $zero, 0x50($s0)
    MEM_H(0X50, ctx->r16) = 0;
    // 0x80239EB8: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    // 0x80239EBC: sh          $zero, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = 0;
    // 0x80239EC0: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80239EC4: jal         0x8004D5D4
    // 0x80239EC8: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80239EC8: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x80239ECC: addiu       $a0, $s0, 0x4E0
    ctx->r4 = ADD32(ctx->r16, 0X4E0);
    // 0x80239ED0: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x80239ED4: jal         0x800540BC
    // 0x80239ED8: addiu       $a2, $zero, -0x60
    ctx->r6 = ADD32(0, -0X60);
    func_800540BC_2F4BC(rdram, ctx);
        goto after_1;
    // 0x80239ED8: addiu       $a2, $zero, -0x60
    ctx->r6 = ADD32(0, -0X60);
    after_1:
    // 0x80239EDC: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80239EE0: lui         $a0, 0x8019
    ctx->r4 = S32(0X8019 << 16);
    // 0x80239EE4: lw          $a0, 0x3C60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3C60);
    // 0x80239EE8: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80239EEC: addiu       $v1, $v1, 0x458C
    ctx->r3 = ADD32(ctx->r3, 0X458C);
    // 0x80239EF0: sw          $v1, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r3;
    // 0x80239EF4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80239EF8: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80239EFC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80239F00: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80239F04: lbu         $v0, 0x8($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X8);
    // 0x80239F08: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80239F0C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239F10: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x80239F14: sb          $zero, 0x74($s0)
    MEM_B(0X74, ctx->r16) = 0;
    // 0x80239F18: sw          $zero, 0x4F0($s0)
    MEM_W(0X4F0, ctx->r16) = 0;
    // 0x80239F1C: sw          $zero, 0x4F4($s0)
    MEM_W(0X4F4, ctx->r16) = 0;
    // 0x80239F20: sw          $zero, 0x500($s0)
    MEM_W(0X500, ctx->r16) = 0;
    // 0x80239F24: sw          $zero, 0x504($s0)
    MEM_W(0X504, ctx->r16) = 0;
    // 0x80239F28: sw          $zero, 0x510($s0)
    MEM_W(0X510, ctx->r16) = 0;
    // 0x80239F2C: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80239F30: sh          $v0, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r2;
    // 0x80239F34: jal         0x80050294
    // 0x80239F38: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x80239F38: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    after_2:
    // 0x80239F3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80239F40: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80239F44: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80239F48: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80239F4C: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x80239F50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80239F54: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80239F58: jr          $ra
    // 0x80239F5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80239F5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802306D8_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802306D8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802306DC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802306E0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802306E4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802306E8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802306EC: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x802306F0: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x802306F4: beq         $v0, $zero, L_80230840
    if (ctx->r2 == 0) {
        // 0x802306F8: addu        $s1, $a2, $zero
        ctx->r17 = ADD32(ctx->r6, 0);
            goto L_80230840;
    }
    // 0x802306F8: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x802306FC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80230700: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80230704: addu        $at, $at, $v0
    gpr jr_addend_8023070C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80230708: lw          $v0, 0x5D18($at)
    ctx->r2 = ADD32(ctx->r1, 0X5D18);
    // 0x8023070C: jr          $v0
    // 0x80230710: nop

    switch (jr_addend_8023070C >> 2) {
        case 0: goto L_80230714; break;
        case 1: goto L_802307A4; break;
        case 2: goto L_802307D4; break;
        case 3: goto L_8023080C; break;
        case 4: goto L_80230840; break;
        default: switch_error(__func__, 0x8023070C, 0x80255D18);
    }
    // 0x80230710: nop

L_80230714:
    // 0x80230714: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80230718: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8023071C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80230720: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80230724: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80230728: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8023072C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80230730: lw          $v0, 0x3834($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3834);
    // 0x80230734: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230738: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023073C: jal         0x8004D5D4
    // 0x80230740: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80230740: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    after_0:
    // 0x80230744: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80230748: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x8023074C: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80230750: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80230754: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80230758: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8023075C: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80230760: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80230764: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80230768: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x8023076C: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x80230770: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80230774: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80230778: lhu         $v1, 0x3848($at)
    ctx->r3 = MEM_HU(ctx->r1, 0X3848);
    // 0x8023077C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80230780: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x80230784: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80230788: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x8023078C: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
    // 0x80230790: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80230794: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80230798: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8023079C: j           L_80230840
    // 0x802307A0: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
        goto L_80230840;
    // 0x802307A0: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
L_802307A4:
    // 0x802307A4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802307A8: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x802307AC: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x802307B0: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x802307B4: bne         $v1, $v0, L_80230840
    if (ctx->r3 != ctx->r2) {
        // 0x802307B8: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80230840;
    }
    // 0x802307B8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802307BC: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x802307C0: bne         $v1, $v0, L_80230840
    if (ctx->r3 != ctx->r2) {
        // 0x802307C4: nop
    
            goto L_80230840;
    }
    // 0x802307C4: nop

    // 0x802307C8: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802307CC: j           L_8023083C
    // 0x802307D0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8023083C;
    // 0x802307D0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_802307D4:
    // 0x802307D4: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x802307D8: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x802307DC: bne         $v1, $v0, L_80230840
    if (ctx->r3 != ctx->r2) {
        // 0x802307E0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80230840;
    }
    // 0x802307E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802307E4: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x802307E8: bne         $v1, $v0, L_80230840
    if (ctx->r3 != ctx->r2) {
        // 0x802307EC: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_80230840;
    }
    // 0x802307EC: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x802307F0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802307F4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802307F8: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x802307FC: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
    // 0x80230800: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80230804: j           L_8023083C
    // 0x80230808: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8023083C;
    // 0x80230808: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8023080C:
    // 0x8023080C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80230810: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x80230814: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x80230818: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
    // 0x8023081C: bne         $v1, $v0, L_80230840
    if (ctx->r3 != ctx->r2) {
        // 0x80230820: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80230840;
    }
    // 0x80230820: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80230824: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x80230828: bne         $v1, $v0, L_80230840
    if (ctx->r3 != ctx->r2) {
        // 0x8023082C: addiu       $v1, $zero, 0xF
        ctx->r3 = ADD32(0, 0XF);
            goto L_80230840;
    }
    // 0x8023082C: addiu       $v1, $zero, 0xF
    ctx->r3 = ADD32(0, 0XF);
    // 0x80230830: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80230834: sb          $v1, 0xFC($s0)
    MEM_B(0XFC, ctx->r16) = ctx->r3;
    // 0x80230838: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8023083C:
    // 0x8023083C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80230840:
    // 0x80230840: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80230844: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80230848: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023084C: jr          $ra
    // 0x80230850: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80230850: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80241840_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80241840: lh          $a1, 0x0($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X0);
    // 0x80241844: mult        $a1, $a1
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80241848: mflo        $a1
    ctx->r5 = lo;
    // 0x8024184C: lh          $v1, 0x4($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X4);
    // 0x80241850: addiu       $v1, $v1, -0x400
    ctx->r3 = ADD32(ctx->r3, -0X400);
    // 0x80241854: mult        $v1, $v1
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80241858: mflo        $v1
    ctx->r3 = lo;
    // 0x8024185C: lui         $v0, 0xC
    ctx->r2 = S32(0XC << 16);
    // 0x80241860: ori         $v0, $v0, 0x5C0F
    ctx->r2 = ctx->r2 | 0X5C0F;
    // 0x80241864: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x80241868: slt         $v0, $v0, $a1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8024186C: jr          $ra
    // 0x80241870: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    TRACE_RETURN()
    return;
    // 0x80241870: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
;}
RECOMP_FUNC void func_8023B774_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B774: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8023B778: lbu         $v1, -0x3A4C($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3A4C);
    // 0x8023B77C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023B780: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023B784: bne         $v1, $v0, L_8023B830
    if (ctx->r3 != ctx->r2) {
        // 0x8023B788: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_8023B830;
    }
    // 0x8023B788: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023B78C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8023B790: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x8023B794: addiu       $v0, $zero, 0x73
    ctx->r2 = ADD32(0, 0X73);
    // 0x8023B798: beq         $v1, $v0, L_8023B7F0
    if (ctx->r3 == ctx->r2) {
        // 0x8023B79C: slti        $v0, $v1, 0x74
        ctx->r2 = SIGNED(ctx->r3) < 0X74 ? 1 : 0;
            goto L_8023B7F0;
    }
    // 0x8023B79C: slti        $v0, $v1, 0x74
    ctx->r2 = SIGNED(ctx->r3) < 0X74 ? 1 : 0;
    // 0x8023B7A0: beq         $v0, $zero, L_8023B7C0
    if (ctx->r2 == 0) {
        // 0x8023B7A4: addiu       $v0, $zero, 0x46
        ctx->r2 = ADD32(0, 0X46);
            goto L_8023B7C0;
    }
    // 0x8023B7A4: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
    // 0x8023B7A8: beq         $v1, $v0, L_8023B7DC
    if (ctx->r3 == ctx->r2) {
        // 0x8023B7AC: addiu       $v0, $zero, 0x64
        ctx->r2 = ADD32(0, 0X64);
            goto L_8023B7DC;
    }
    // 0x8023B7AC: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x8023B7B0: beql        $v1, $v0, L_8023B808
    if (ctx->r3 == ctx->r2) {
        // 0x8023B7B4: sb          $zero, 0xA($a1)
        MEM_B(0XA, ctx->r5) = 0;
            goto L_8023B808;
    }
    goto skip_0;
    // 0x8023B7B4: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
    skip_0:
    // 0x8023B7B8: j           L_8023B830
    // 0x8023B7BC: nop

        goto L_8023B830;
    // 0x8023B7BC: nop

L_8023B7C0:
    // 0x8023B7C0: addiu       $v0, $zero, 0xAF
    ctx->r2 = ADD32(0, 0XAF);
    // 0x8023B7C4: beq         $v1, $v0, L_8023B804
    if (ctx->r3 == ctx->r2) {
        // 0x8023B7C8: addiu       $v0, $zero, 0xE6
        ctx->r2 = ADD32(0, 0XE6);
            goto L_8023B804;
    }
    // 0x8023B7C8: addiu       $v0, $zero, 0xE6
    ctx->r2 = ADD32(0, 0XE6);
    // 0x8023B7CC: beq         $v1, $v0, L_8023B81C
    if (ctx->r3 == ctx->r2) {
        // 0x8023B7D0: nop
    
            goto L_8023B81C;
    }
    // 0x8023B7D0: nop

    // 0x8023B7D4: j           L_8023B830
    // 0x8023B7D8: nop

        goto L_8023B830;
    // 0x8023B7D8: nop

L_8023B7DC:
    // 0x8023B7DC: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
    // 0x8023B7E0: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8023B7E4: lw          $v0, 0x4678($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4678);
    // 0x8023B7E8: j           L_8023B814
    // 0x8023B7EC: sb          $zero, 0xB($a1)
    MEM_B(0XB, ctx->r5) = 0;
        goto L_8023B814;
    // 0x8023B7EC: sb          $zero, 0xB($a1)
    MEM_B(0XB, ctx->r5) = 0;
L_8023B7F0:
    // 0x8023B7F0: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
    // 0x8023B7F4: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8023B7F8: lw          $v0, 0x4678($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4678);
    // 0x8023B7FC: j           L_8023B814
    // 0x8023B800: sb          $zero, 0xB($a1)
    MEM_B(0XB, ctx->r5) = 0;
        goto L_8023B814;
    // 0x8023B800: sb          $zero, 0xB($a1)
    MEM_B(0XB, ctx->r5) = 0;
L_8023B804:
    // 0x8023B804: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
L_8023B808:
    // 0x8023B808: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8023B80C: lw          $v0, 0x4674($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4674);
    // 0x8023B810: sb          $zero, 0xB($a1)
    MEM_B(0XB, ctx->r5) = 0;
L_8023B814:
    // 0x8023B814: j           L_8023B830
    // 0x8023B818: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
        goto L_8023B830;
    // 0x8023B818: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
L_8023B81C:
    // 0x8023B81C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8023B820: lbu         $v0, -0x3A4A($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3A4A);
    // 0x8023B824: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023B828: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8023B82C: sb          $v0, -0x3A4A($at)
    MEM_B(-0X3A4A, ctx->r1) = ctx->r2;
L_8023B830:
    // 0x8023B830: jal         0x8005044C
    // 0x8023B834: nop

    func_8005044C_2B84C(rdram, ctx);
        goto after_0;
    // 0x8023B834: nop

    after_0:
    // 0x8023B838: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023B83C: jr          $ra
    // 0x8023B840: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023B840: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8024832C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024832C: lbu         $a2, 0x9($a0)
    ctx->r6 = MEM_BU(ctx->r4, 0X9);
    // 0x80248330: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80248334: andi        $v1, $a2, 0xFF
    ctx->r3 = ctx->r6 & 0XFF;
    // 0x80248338: beq         $v1, $v0, L_80248370
    if (ctx->r3 == ctx->r2) {
        // 0x8024833C: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80248370;
    }
    // 0x8024833C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80248340: beq         $v0, $zero, L_80248394
    if (ctx->r2 == 0) {
        // 0x80248344: nop
    
            goto L_80248394;
    }
    // 0x80248344: nop

    // 0x80248348: bne         $v1, $zero, L_80248394
    if (ctx->r3 != 0) {
        // 0x8024834C: addiu       $v0, $zero, 0x19
        ctx->r2 = ADD32(0, 0X19);
            goto L_80248394;
    }
    // 0x8024834C: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
    // 0x80248350: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x80248354: bne         $v1, $v0, L_80248394
    if (ctx->r3 != ctx->r2) {
        // 0x80248358: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80248394;
    }
    // 0x80248358: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8024835C: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x80248360: bne         $v1, $v0, L_80248394
    if (ctx->r3 != ctx->r2) {
        // 0x80248364: addiu       $v0, $a2, 0x1
        ctx->r2 = ADD32(ctx->r6, 0X1);
            goto L_80248394;
    }
    // 0x80248364: addiu       $v0, $a2, 0x1
    ctx->r2 = ADD32(ctx->r6, 0X1);
    // 0x80248368: j           L_80248394
    // 0x8024836C: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
        goto L_80248394;
    // 0x8024836C: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
L_80248370:
    // 0x80248370: lhu         $v0, 0x3A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X3A);
    // 0x80248374: addiu       $v0, $v0, -0x20
    ctx->r2 = ADD32(ctx->r2, -0X20);
    // 0x80248378: sh          $v0, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r2;
    // 0x8024837C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80248380: bne         $v0, $zero, L_80248394
    if (ctx->r2 != 0) {
        // 0x80248384: nop
    
            goto L_80248394;
    }
    // 0x80248384: nop

    // 0x80248388: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x8024838C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80248390: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
L_80248394:
    // 0x80248394: jr          $ra
    // 0x80248398: nop

    TRACE_RETURN()
    return;
    // 0x80248398: nop

;}
RECOMP_FUNC void func_80248C18_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80248C18: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80248C1C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80248C20: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80248C24: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80248C28: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80248C2C: lbu         $a0, 0x9($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X9);
    // 0x80248C30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80248C34: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x80248C38: beq         $v1, $v0, L_80248C8C
    if (ctx->r3 == ctx->r2) {
        // 0x80248C3C: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80248C8C;
    }
    // 0x80248C3C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80248C40: beql        $v0, $zero, L_80248C58
    if (ctx->r2 == 0) {
        // 0x80248C44: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80248C58;
    }
    goto skip_0;
    // 0x80248C44: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80248C48: beq         $v1, $zero, L_80248C70
    if (ctx->r3 == 0) {
        // 0x80248C4C: nop
    
            goto L_80248C70;
    }
    // 0x80248C4C: nop

    // 0x80248C50: j           L_80248DC0
    // 0x80248C54: nop

        goto L_80248DC0;
    // 0x80248C54: nop

L_80248C58:
    // 0x80248C58: beq         $v1, $v0, L_80248CDC
    if (ctx->r3 == ctx->r2) {
        // 0x80248C5C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80248CDC;
    }
    // 0x80248C5C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80248C60: beq         $v1, $v0, L_80248D30
    if (ctx->r3 == ctx->r2) {
        // 0x80248C64: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_80248D30;
    }
    // 0x80248C64: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80248C68: j           L_80248DC0
    // 0x80248C6C: nop

        goto L_80248DC0;
    // 0x80248C6C: nop

L_80248C70:
    // 0x80248C70: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80248C74: lw          $v0, -0x3AA4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3AA4);
    // 0x80248C78: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x80248C7C: beq         $v0, $zero, L_80248DC0
    if (ctx->r2 == 0) {
        // 0x80248C80: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_80248DC0;
    }
    // 0x80248C80: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x80248C84: j           L_80248DC0
    // 0x80248C88: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
        goto L_80248DC0;
    // 0x80248C88: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_80248C8C:
    // 0x80248C8C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80248C90: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80248C94: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80248C98: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80248C9C: bne         $v0, $zero, L_80248DC0
    if (ctx->r2 != 0) {
        // 0x80248CA0: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80248DC0;
    }
    // 0x80248CA0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80248CA4: jal         0x800616FC
    // 0x80248CA8: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_0;
    // 0x80248CA8: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    after_0:
    // 0x80248CAC: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x80248CB0: addiu       $a1, $a1, -0x3AA4
    ctx->r5 = ADD32(ctx->r5, -0X3AA4);
    // 0x80248CB4: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80248CB8: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x80248CBC: addiu       $a2, $a2, 0x4A6D
    ctx->r6 = ADD32(ctx->r6, 0X4A6D);
    // 0x80248CC0: lbu         $a0, 0x0($a2)
    ctx->r4 = MEM_BU(ctx->r6, 0X0);
    // 0x80248CC4: addiu       $v0, $zero, -0x5
    ctx->r2 = ADD32(0, -0X5);
    // 0x80248CC8: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80248CCC: ori         $a0, $a0, 0x40
    ctx->r4 = ctx->r4 | 0X40;
    // 0x80248CD0: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x80248CD4: j           L_80248D04
    // 0x80248CD8: sb          $a0, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r4;
        goto L_80248D04;
    // 0x80248CD8: sb          $a0, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r4;
L_80248CDC:
    // 0x80248CDC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80248CE0: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80248CE4: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80248CE8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80248CEC: bne         $v0, $zero, L_80248DC0
    if (ctx->r2 != 0) {
        // 0x80248CF0: nop
    
            goto L_80248DC0;
    }
    // 0x80248CF0: nop

    // 0x80248CF4: jal         0x8006033C
    // 0x80248CF8: addiu       $a0, $zero, 0x5C
    ctx->r4 = ADD32(0, 0X5C);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x80248CF8: addiu       $a0, $zero, 0x5C
    ctx->r4 = ADD32(0, 0X5C);
    after_1:
    // 0x80248CFC: beq         $v0, $zero, L_80248D14
    if (ctx->r2 == 0) {
        // 0x80248D00: nop
    
            goto L_80248D14;
    }
    // 0x80248D00: nop

L_80248D04:
    // 0x80248D04: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x80248D08: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80248D0C: j           L_80248DC0
    // 0x80248D10: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
        goto L_80248DC0;
    // 0x80248D10: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_80248D14:
    // 0x80248D14: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80248D18: addiu       $v1, $v1, 0x4A6D
    ctx->r3 = ADD32(ctx->r3, 0X4A6D);
    // 0x80248D1C: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80248D20: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x80248D24: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80248D28: j           L_80248DC0
    // 0x80248D2C: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
        goto L_80248DC0;
    // 0x80248D2C: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
L_80248D30:
    // 0x80248D30: lb          $v1, 0xE($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XE);
    // 0x80248D34: bne         $v1, $v0, L_80248D48
    if (ctx->r3 != ctx->r2) {
        // 0x80248D38: addiu       $a0, $zero, 0x105
        ctx->r4 = ADD32(0, 0X105);
            goto L_80248D48;
    }
    // 0x80248D38: addiu       $a0, $zero, 0x105
    ctx->r4 = ADD32(0, 0X105);
    // 0x80248D3C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80248D40: jal         0x8002A2F8
    // 0x80248D44: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_2;
    // 0x80248D44: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
L_80248D48:
    // 0x80248D48: lbu         $v0, 0xE($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XE);
    // 0x80248D4C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80248D50: sb          $v0, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r2;
    // 0x80248D54: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80248D58: bne         $v0, $zero, L_80248DC0
    if (ctx->r2 != 0) {
        // 0x80248D5C: addiu       $a0, $zero, 0x185
        ctx->r4 = ADD32(0, 0X185);
            goto L_80248DC0;
    }
    // 0x80248D5C: addiu       $a0, $zero, 0x185
    ctx->r4 = ADD32(0, 0X185);
    // 0x80248D60: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80248D64: jal         0x8002A2F8
    // 0x80248D68: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_3;
    // 0x80248D68: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x80248D6C: lui         $s0, 0x8025
    ctx->r16 = S32(0X8025 << 16);
    // 0x80248D70: addiu       $s0, $s0, 0x515C
    ctx->r16 = ADD32(ctx->r16, 0X515C);
    // 0x80248D74: jal         0x8003E6BC
    // 0x80248D78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_4;
    // 0x80248D78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80248D7C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80248D80: lui         $a1, 0x1006
    ctx->r5 = S32(0X1006 << 16);
    // 0x80248D84: jal         0x80071ACC
    // 0x80248D88: ori         $a1, $a1, 0x200
    ctx->r5 = ctx->r5 | 0X200;
    func_80071ACC_4CECC(rdram, ctx);
        goto after_5;
    // 0x80248D88: ori         $a1, $a1, 0x200
    ctx->r5 = ctx->r5 | 0X200;
    after_5:
    // 0x80248D8C: jal         0x8003E6BC
    // 0x80248D90: addiu       $a0, $s0, 0x28
    ctx->r4 = ADD32(ctx->r16, 0X28);
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_6;
    // 0x80248D90: addiu       $a0, $s0, 0x28
    ctx->r4 = ADD32(ctx->r16, 0X28);
    after_6:
    // 0x80248D94: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80248D98: lui         $a1, 0x1006
    ctx->r5 = S32(0X1006 << 16);
    // 0x80248D9C: jal         0x80071ACC
    // 0x80248DA0: ori         $a1, $a1, 0x300
    ctx->r5 = ctx->r5 | 0X300;
    func_80071ACC_4CECC(rdram, ctx);
        goto after_7;
    // 0x80248DA0: ori         $a1, $a1, 0x300
    ctx->r5 = ctx->r5 | 0X300;
    after_7:
    // 0x80248DA4: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80248DA8: addiu       $v1, $v1, 0x4A6D
    ctx->r3 = ADD32(ctx->r3, 0X4A6D);
    // 0x80248DAC: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80248DB0: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x80248DB4: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80248DB8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80248DBC: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_80248DC0:
    // 0x80248DC0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80248DC4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80248DC8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80248DCC: jr          $ra
    // 0x80248DD0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80248DD0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8024C3E0_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024C3E0: lbu         $v0, 0xE($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XE);
    // 0x8024C3E4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8024C3E8: sb          $v0, 0xE($a0)
    MEM_B(0XE, ctx->r4) = ctx->r2;
    // 0x8024C3EC: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8024C3F0: bne         $v0, $zero, L_8024C4F4
    if (ctx->r2 != 0) {
        // 0x8024C3F4: nop
    
            goto L_8024C4F4;
    }
    // 0x8024C3F4: nop

    // 0x8024C3F8: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x8024C3FC: beq         $v0, $zero, L_8024C484
    if (ctx->r2 == 0) {
        // 0x8024C400: nop
    
            goto L_8024C484;
    }
    // 0x8024C400: nop

    // 0x8024C404: lhu         $v0, 0x24($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X24);
    // 0x8024C408: lbu         $v1, 0xD($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XD);
    // 0x8024C40C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8024C410: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8024C414: sb          $v1, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r3;
    // 0x8024C418: sll         $v1, $v1, 24
    ctx->r3 = S32(ctx->r3 << 24);
    // 0x8024C41C: sra         $v1, $v1, 24
    ctx->r3 = S32(SIGNED(ctx->r3) >> 24);
    // 0x8024C420: sh          $v0, 0x24($a0)
    MEM_H(0X24, ctx->r4) = ctx->r2;
    // 0x8024C424: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8024C428: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8024C42C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8024C430: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024C434: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8024C438: lbu         $v0, 0x547C($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X547C);
    // 0x8024C43C: lb          $v1, 0xD($a0)
    ctx->r3 = MEM_B(ctx->r4, 0XD);
    // 0x8024C440: sb          $v0, 0xE($a0)
    MEM_B(0XE, ctx->r4) = ctx->r2;
    // 0x8024C444: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8024C448: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8024C44C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8024C450: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024C454: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8024C458: lhu         $v0, 0x5478($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X5478);
    // 0x8024C45C: lb          $v1, 0xD($a0)
    ctx->r3 = MEM_B(ctx->r4, 0XD);
    // 0x8024C460: sb          $v0, 0x22($a0)
    MEM_B(0X22, ctx->r4) = ctx->r2;
    // 0x8024C464: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8024C468: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8024C46C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8024C470: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024C474: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8024C478: lhu         $v0, 0x547A($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X547A);
    // 0x8024C47C: j           L_8024C4F4
    // 0x8024C480: sb          $v0, 0x23($a0)
    MEM_B(0X23, ctx->r4) = ctx->r2;
        goto L_8024C4F4;
    // 0x8024C480: sb          $v0, 0x23($a0)
    MEM_B(0X23, ctx->r4) = ctx->r2;
L_8024C484:
    // 0x8024C484: lbu         $v0, 0xD($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD);
    // 0x8024C488: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024C48C: sb          $v0, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r2;
    // 0x8024C490: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8024C494: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8024C498: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x8024C49C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024C4A0: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8024C4A4: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8024C4A8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8024C4AC: lbu         $v0, 0x5464($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X5464);
    // 0x8024C4B0: lb          $v1, 0xD($a0)
    ctx->r3 = MEM_B(ctx->r4, 0XD);
    // 0x8024C4B4: sb          $v0, 0xE($a0)
    MEM_B(0XE, ctx->r4) = ctx->r2;
    // 0x8024C4B8: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8024C4BC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8024C4C0: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8024C4C4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024C4C8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8024C4CC: lhu         $v0, 0x5460($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X5460);
    // 0x8024C4D0: lb          $v1, 0xD($a0)
    ctx->r3 = MEM_B(ctx->r4, 0XD);
    // 0x8024C4D4: sb          $v0, 0x22($a0)
    MEM_B(0X22, ctx->r4) = ctx->r2;
    // 0x8024C4D8: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8024C4DC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8024C4E0: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8024C4E4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024C4E8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8024C4EC: lhu         $v0, 0x5462($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X5462);
    // 0x8024C4F0: sb          $v0, 0x23($a0)
    MEM_B(0X23, ctx->r4) = ctx->r2;
L_8024C4F4:
    // 0x8024C4F4: lbu         $v1, 0xE($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XE);
    // 0x8024C4F8: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8024C4FC: bne         $v1, $v0, L_8024C508
    if (ctx->r3 != ctx->r2) {
        // 0x8024C500: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8024C508;
    }
    // 0x8024C500: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8024C504: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
L_8024C508:
    // 0x8024C508: jr          $ra
    // 0x8024C50C: nop

    TRACE_RETURN()
    return;
    // 0x8024C50C: nop

;}
RECOMP_FUNC void func_8024987C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024987C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80249880: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80249884: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80249888: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8024988C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80249890: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80249894: addiu       $v0, $zero, 0x16
    ctx->r2 = ADD32(0, 0X16);
    // 0x80249898: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x8024989C: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    // 0x802498A0: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x802498A4: sb          $s1, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r17;
    // 0x802498A8: ori         $v1, $v1, 0x6
    ctx->r3 = ctx->r3 | 0X6;
    // 0x802498AC: jal         0x8004D5D4
    // 0x802498B0: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x802498B0: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x802498B4: lui         $v1, 0x2C80
    ctx->r3 = S32(0X2C80 << 16);
    // 0x802498B8: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x802498BC: addiu       $v0, $zero, 0x37
    ctx->r2 = ADD32(0, 0X37);
    // 0x802498C0: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x802498C4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802498C8: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x802498CC: sw          $v1, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r3;
    // 0x802498D0: sw          $zero, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = 0;
    // 0x802498D4: sb          $s1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r17;
    // 0x802498D8: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x802498DC: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x802498E0: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x802498E4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802498E8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802498EC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802498F0: jr          $ra
    // 0x802498F4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802498F4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8024BF7C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024BF7C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8024BF80: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8024BF84: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8024BF88: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8024BF8C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8024BF90: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x8024BF94: andi        $v1, $v0, 0xF
    ctx->r3 = ctx->r2 & 0XF;
    // 0x8024BF98: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024BF9C: beq         $v1, $v0, L_8024C0A8
    if (ctx->r3 == ctx->r2) {
        // 0x8024BFA0: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8024C0A8;
    }
    // 0x8024BFA0: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8024BFA4: bne         $v0, $zero, L_8024BFBC
    if (ctx->r2 != 0) {
        // 0x8024BFA8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8024BFBC;
    }
    // 0x8024BFA8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8024BFAC: beq         $v1, $v0, L_8024C15C
    if (ctx->r3 == ctx->r2) {
        // 0x8024BFB0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8024C15C;
    }
    // 0x8024BFB0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8024BFB4: beq         $v1, $v0, L_8024C1E8
    if (ctx->r3 == ctx->r2) {
        // 0x8024BFB8: nop
    
            goto L_8024C1E8;
    }
    // 0x8024BFB8: nop

L_8024BFBC:
    // 0x8024BFBC: lhu         $v1, 0x44($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X44);
    // 0x8024BFC0: lhu         $v0, 0x46($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X46);
    // 0x8024BFC4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024BFC8: lhu         $v0, 0x3E($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3E);
    // 0x8024BFCC: sh          $v1, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r3;
    // 0x8024BFD0: lh          $a0, 0x44($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X44);
    // 0x8024BFD4: addu        $v1, $v0, $v1
    ctx->r3 = ADD32(ctx->r2, ctx->r3);
    // 0x8024BFD8: bgtz        $a0, L_8024C08C
    if (SIGNED(ctx->r4) > 0) {
        // 0x8024BFDC: sh          $v1, 0x3E($s1)
        MEM_H(0X3E, ctx->r17) = ctx->r3;
            goto L_8024C08C;
    }
    // 0x8024BFDC: sh          $v1, 0x3E($s1)
    MEM_H(0X3E, ctx->r17) = ctx->r3;
    // 0x8024BFE0: lb          $v0, 0xD($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XD);
    // 0x8024BFE4: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8024BFE8: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8024BFEC: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8024BFF0: lh          $a0, 0x53D8($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X53D8);
    // 0x8024BFF4: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x8024BFF8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8024BFFC: slt         $v0, $v0, $a0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8024C000: bne         $v0, $zero, L_8024C1FC
    if (ctx->r2 != 0) {
        // 0x8024C004: nop
    
            goto L_8024C1FC;
    }
    // 0x8024C004: nop

    // 0x8024C008: lb          $v0, 0xD($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XD);
    // 0x8024C00C: sh          $zero, 0x46($s1)
    MEM_H(0X46, ctx->r17) = 0;
    // 0x8024C010: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8024C014: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x8024C018: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024C01C: lhu         $v1, 0x53DA($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X53DA);
    // 0x8024C020: lb          $v0, 0xD($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XD);
    // 0x8024C024: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8024C028: sh          $v1, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r3;
    // 0x8024C02C: lh          $v1, 0x3E($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X3E);
    // 0x8024C030: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024C034: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8024C038: lh          $v0, 0x53DC($at)
    ctx->r2 = MEM_H(ctx->r1, 0X53DC);
    // 0x8024C03C: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8024C040: bnel        $v0, $zero, L_8024C090
    if (ctx->r2 != 0) {
        // 0x8024C044: addiu       $a0, $zero, 0x80
        ctx->r4 = ADD32(0, 0X80);
            goto L_8024C090;
    }
    goto skip_0;
    // 0x8024C044: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    skip_0:
    // 0x8024C048: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x8024C04C: sll         $v0, $v0, 7
    ctx->r2 = S32(ctx->r2 << 7);
    // 0x8024C050: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x8024C054: bne         $v1, $zero, L_8024C060
    if (ctx->r3 != 0) {
        // 0x8024C058: nop
    
            goto L_8024C060;
    }
    // 0x8024C058: nop

    // 0x8024C05C: break       7
    do_break(2149892188);
L_8024C060:
    // 0x8024C060: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8024C064: bne         $v1, $at, L_8024C078
    if (ctx->r3 != ctx->r1) {
        // 0x8024C068: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8024C078;
    }
    // 0x8024C068: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8024C06C: bne         $v0, $at, L_8024C078
    if (ctx->r2 != ctx->r1) {
        // 0x8024C070: nop
    
            goto L_8024C078;
    }
    // 0x8024C070: nop

    // 0x8024C074: break       6
    do_break(2149892212);
L_8024C078:
    // 0x8024C078: mflo        $a0
    ctx->r4 = lo;
    // 0x8024C07C: nop

    // 0x8024C080: nop

    // 0x8024C084: j           L_8024C094
    // 0x8024C088: nor         $v0, $zero, $a0
    ctx->r2 = ~(0 | ctx->r4);
        goto L_8024C094;
    // 0x8024C088: nor         $v0, $zero, $a0
    ctx->r2 = ~(0 | ctx->r4);
L_8024C08C:
    // 0x8024C08C: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
L_8024C090:
    // 0x8024C090: nor         $v0, $zero, $a0
    ctx->r2 = ~(0 | ctx->r4);
L_8024C094:
    // 0x8024C094: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x8024C098: and         $a0, $a0, $v0
    ctx->r4 = ctx->r4 & ctx->r2;
    // 0x8024C09C: sll         $v0, $a0, 8
    ctx->r2 = S32(ctx->r4 << 8);
    // 0x8024C0A0: j           L_8024C21C
    // 0x8024C0A4: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
        goto L_8024C21C;
    // 0x8024C0A4: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
L_8024C0A8:
    // 0x8024C0A8: lhu         $v0, 0x44($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X44);
    // 0x8024C0AC: lhu         $a0, 0x46($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X46);
    // 0x8024C0B0: lhu         $v1, 0x3E($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X3E);
    // 0x8024C0B4: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8024C0B8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024C0BC: sh          $v1, 0x3E($s1)
    MEM_H(0X3E, ctx->r17) = ctx->r3;
    // 0x8024C0C0: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8024C0C4: sra         $a1, $v1, 16
    ctx->r5 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8024C0C8: blez        $a1, L_8024C1FC
    if (SIGNED(ctx->r5) <= 0) {
        // 0x8024C0CC: sh          $v0, 0x44($s1)
        MEM_H(0X44, ctx->r17) = ctx->r2;
            goto L_8024C1FC;
    }
    // 0x8024C0CC: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x8024C0D0: lb          $v0, 0xD($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XD);
    // 0x8024C0D4: lh          $v1, 0x44($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X44);
    // 0x8024C0D8: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8024C0DC: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8024C0E0: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8024C0E4: lh          $a0, 0x53F8($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X53F8);
    // 0x8024C0E8: bgtzl       $v1, L_8024C138
    if (SIGNED(ctx->r3) > 0) {
        // 0x8024C0EC: addiu       $a0, $zero, 0x80
        ctx->r4 = ADD32(0, 0X80);
            goto L_8024C138;
    }
    goto skip_1;
    // 0x8024C0EC: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    skip_1:
    // 0x8024C0F0: slt         $v0, $a0, $a1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8024C0F4: bnel        $v0, $zero, L_8024C138
    if (ctx->r2 != 0) {
        // 0x8024C0F8: addiu       $a0, $zero, 0x80
        ctx->r4 = ADD32(0, 0X80);
            goto L_8024C138;
    }
    goto skip_2;
    // 0x8024C0F8: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    skip_2:
    // 0x8024C0FC: subu        $v0, $a0, $a1
    ctx->r2 = SUB32(ctx->r4, ctx->r5);
    // 0x8024C100: sll         $v0, $v0, 7
    ctx->r2 = S32(ctx->r2 << 7);
    // 0x8024C104: div         $zero, $v0, $a0
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r4)));
    // 0x8024C108: bne         $a0, $zero, L_8024C114
    if (ctx->r4 != 0) {
        // 0x8024C10C: nop
    
            goto L_8024C114;
    }
    // 0x8024C10C: nop

    // 0x8024C110: break       7
    do_break(2149892368);
L_8024C114:
    // 0x8024C114: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8024C118: bne         $a0, $at, L_8024C12C
    if (ctx->r4 != ctx->r1) {
        // 0x8024C11C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8024C12C;
    }
    // 0x8024C11C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8024C120: bne         $v0, $at, L_8024C12C
    if (ctx->r2 != ctx->r1) {
        // 0x8024C124: nop
    
            goto L_8024C12C;
    }
    // 0x8024C124: nop

    // 0x8024C128: break       6
    do_break(2149892392);
L_8024C12C:
    // 0x8024C12C: mflo        $v0
    ctx->r2 = lo;
    // 0x8024C130: addiu       $v1, $zero, 0x60
    ctx->r3 = ADD32(0, 0X60);
    // 0x8024C134: subu        $a0, $v1, $v0
    ctx->r4 = SUB32(ctx->r3, ctx->r2);
L_8024C138:
    // 0x8024C138: slti        $v0, $a0, 0x100
    ctx->r2 = SIGNED(ctx->r4) < 0X100 ? 1 : 0;
    // 0x8024C13C: beql        $v0, $zero, L_8024C144
    if (ctx->r2 == 0) {
        // 0x8024C140: addiu       $a0, $zero, 0xFF
        ctx->r4 = ADD32(0, 0XFF);
            goto L_8024C144;
    }
    goto skip_3;
    // 0x8024C140: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    skip_3:
L_8024C144:
    // 0x8024C144: nor         $v0, $zero, $a0
    ctx->r2 = ~(0 | ctx->r4);
    // 0x8024C148: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x8024C14C: and         $a0, $a0, $v0
    ctx->r4 = ctx->r4 & ctx->r2;
    // 0x8024C150: sll         $v0, $a0, 8
    ctx->r2 = S32(ctx->r4 << 8);
    // 0x8024C154: j           L_8024C21C
    // 0x8024C158: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
        goto L_8024C21C;
    // 0x8024C158: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
L_8024C15C:
    // 0x8024C15C: lhu         $v1, 0x44($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X44);
    // 0x8024C160: lhu         $v0, 0x46($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X46);
    // 0x8024C164: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024C168: lhu         $v0, 0x3E($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3E);
    // 0x8024C16C: sh          $v1, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r3;
    // 0x8024C170: lh          $a0, 0x44($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X44);
    // 0x8024C174: addu        $a1, $v0, $v1
    ctx->r5 = ADD32(ctx->r2, ctx->r3);
    // 0x8024C178: blez        $a0, L_8024C1FC
    if (SIGNED(ctx->r4) <= 0) {
        // 0x8024C17C: sh          $a1, 0x3E($s1)
        MEM_H(0X3E, ctx->r17) = ctx->r5;
            goto L_8024C1FC;
    }
    // 0x8024C17C: sh          $a1, 0x3E($s1)
    MEM_H(0X3E, ctx->r17) = ctx->r5;
    // 0x8024C180: lb          $v0, 0xD($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XD);
    // 0x8024C184: sll         $a0, $v0, 3
    ctx->r4 = S32(ctx->r2 << 3);
    // 0x8024C188: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x8024C18C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8024C190: lh          $v1, 0x5418($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X5418);
    // 0x8024C194: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
    // 0x8024C198: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8024C19C: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8024C1A0: beql        $v1, $zero, L_8024C1DC
    if (ctx->r3 == 0) {
        // 0x8024C1A4: addiu       $a0, $zero, 0x80
        ctx->r4 = ADD32(0, 0X80);
            goto L_8024C1DC;
    }
    goto skip_4;
    // 0x8024C1A4: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    skip_4:
    // 0x8024C1A8: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x8024C1AC: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x8024C1B0: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8024C1B4: lbu         $v1, 0x541B($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X541B);
    // 0x8024C1B8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8024C1BC: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x8024C1C0: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x8024C1C4: sltiu       $v0, $v1, 0x81
    ctx->r2 = ctx->r3 < 0X81 ? 1 : 0;
    // 0x8024C1C8: beq         $v0, $zero, L_8024C1D8
    if (ctx->r2 == 0) {
        // 0x8024C1CC: addiu       $v0, $zero, 0x80
        ctx->r2 = ADD32(0, 0X80);
            goto L_8024C1D8;
    }
    // 0x8024C1CC: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8024C1D0: j           L_8024C1DC
    // 0x8024C1D4: subu        $a0, $v0, $v1
    ctx->r4 = SUB32(ctx->r2, ctx->r3);
        goto L_8024C1DC;
    // 0x8024C1D4: subu        $a0, $v0, $v1
    ctx->r4 = SUB32(ctx->r2, ctx->r3);
L_8024C1D8:
    // 0x8024C1D8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_8024C1DC:
    // 0x8024C1DC: sll         $v0, $a0, 8
    ctx->r2 = S32(ctx->r4 << 8);
    // 0x8024C1E0: j           L_8024C21C
    // 0x8024C1E4: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
        goto L_8024C21C;
    // 0x8024C1E4: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
L_8024C1E8:
    // 0x8024C1E8: lbu         $v0, 0xF($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XF);
    // 0x8024C1EC: lb          $v1, 0xF($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XF);
    // 0x8024C1F0: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8024C1F4: bne         $v1, $zero, L_8024C210
    if (ctx->r3 != 0) {
        // 0x8024C1F8: sh          $v0, 0x3E($s1)
        MEM_H(0X3E, ctx->r17) = ctx->r2;
            goto L_8024C210;
    }
    // 0x8024C1F8: sh          $v0, 0x3E($s1)
    MEM_H(0X3E, ctx->r17) = ctx->r2;
L_8024C1FC:
    // 0x8024C1FC: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x8024C200: sh          $zero, 0x3E($s1)
    MEM_H(0X3E, ctx->r17) = 0;
    // 0x8024C204: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024C208: j           L_8024C280
    // 0x8024C20C: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
        goto L_8024C280;
    // 0x8024C20C: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_8024C210:
    // 0x8024C210: lbu         $a0, 0xD($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0XD);
    // 0x8024C214: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x8024C218: sll         $v0, $a0, 8
    ctx->r2 = S32(ctx->r4 << 8);
L_8024C21C:
    // 0x8024C21C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8024C220: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x8024C224: sll         $v1, $a0, 16
    ctx->r3 = S32(ctx->r4 << 16);
    // 0x8024C228: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8024C22C: sw          $v0, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->r2;
    // 0x8024C230: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x8024C234: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x8024C238: beq         $v0, $zero, L_8024C24C
    if (ctx->r2 == 0) {
        // 0x8024C23C: addiu       $s0, $s1, 0x18
        ctx->r16 = ADD32(ctx->r17, 0X18);
            goto L_8024C24C;
    }
    // 0x8024C23C: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x8024C240: lhu         $v0, 0x3A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3A);
    // 0x8024C244: addiu       $v0, $v0, -0x28
    ctx->r2 = ADD32(ctx->r2, -0X28);
    // 0x8024C248: sh          $v0, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r2;
L_8024C24C:
    // 0x8024C24C: jal         0x8002C654
    // 0x8024C250: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_0;
    // 0x8024C250: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8024C254: lbu         $v1, 0xB($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XB);
    // 0x8024C258: lhu         $v0, 0x3E($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3E);
    // 0x8024C25C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8024C260: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8024C264: andi        $a0, $v1, 0xFF
    ctx->r4 = ctx->r3 & 0XFF;
    // 0x8024C268: sll         $a0, $a0, 7
    ctx->r4 = S32(ctx->r4 << 7);
    // 0x8024C26C: sh          $v0, 0x28($s1)
    MEM_H(0X28, ctx->r17) = ctx->r2;
    // 0x8024C270: sh          $v0, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r2;
    // 0x8024C274: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
    // 0x8024C278: jal         0x800319B4
    // 0x8024C27C: sb          $v1, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r3;
    func_800319B4_CDB4(rdram, ctx);
        goto after_1;
    // 0x8024C27C: sb          $v1, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r3;
    after_1:
L_8024C280:
    // 0x8024C280: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8024C284: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8024C288: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8024C28C: jr          $ra
    // 0x8024C290: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8024C290: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802256FC_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802256FC: jr          $ra
    // 0x80225700: nop

    TRACE_RETURN()
    return;
    // 0x80225700: nop

;}
RECOMP_FUNC void func_80242F24_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80242F24: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80242F28: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80242F2C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80242F30: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80242F34: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80242F38: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80242F3C: jal         0x8009A3B4
    // 0x80242F40: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80242F40: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_0:
    // 0x80242F44: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80242F48: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80242F4C: jal         0x8009A3B4
    // 0x80242F50: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80242F50: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80242F54: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x80242F58: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80242F5C: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x80242F60: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80242F64: bne         $v0, $zero, L_80242F7C
    if (ctx->r2 != 0) {
        // 0x80242F68: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_80242F7C;
    }
    // 0x80242F68: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80242F6C: jal         0x8004F4F8
    // 0x80242F70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_2;
    // 0x80242F70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80242F74: j           L_80243060
    // 0x80242F78: nop

        goto L_80243060;
    // 0x80242F78: nop

L_80242F7C:
    // 0x80242F7C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80242F80: bne         $v1, $v0, L_80242F8C
    if (ctx->r3 != ctx->r2) {
        // 0x80242F84: addiu       $v0, $v1, 0x2
        ctx->r2 = ADD32(ctx->r3, 0X2);
            goto L_80242F8C;
    }
    // 0x80242F84: addiu       $v0, $v1, 0x2
    ctx->r2 = ADD32(ctx->r3, 0X2);
    // 0x80242F88: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80242F8C:
    // 0x80242F8C: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80242F90: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x80242F94: lh          $a3, 0x48($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X48);
    // 0x80242F98: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80242F9C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80242FA0: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80242FA4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80242FA8: lbu         $v1, 0x4B74($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X4B74);
    // 0x80242FAC: lbu         $t0, 0xA($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0XA);
    // 0x80242FB0: lhu         $v0, 0x9A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X9A);
    // 0x80242FB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80242FB8: sb          $v1, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r3;
    // 0x80242FBC: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80242FC0: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    // 0x80242FC4: lbu         $v1, 0x4B75($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X4B75);
    // 0x80242FC8: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80242FCC: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80242FD0: sh          $v0, 0x9A($s0)
    MEM_H(0X9A, ctx->r16) = ctx->r2;
    // 0x80242FD4: jal         0x8004DA90
    // 0x80242FD8: sb          $v1, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x80242FD8: sb          $v1, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r3;
    after_3:
    // 0x80242FDC: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x80242FE0: beq         $v0, $zero, L_80242FFC
    if (ctx->r2 == 0) {
        // 0x80242FE4: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80242FFC;
    }
    // 0x80242FE4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80242FE8: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80242FEC: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x80242FF0: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80242FF4: bne         $v0, $zero, L_80243048
    if (ctx->r2 != 0) {
        // 0x80242FF8: nop
    
            goto L_80243048;
    }
    // 0x80242FF8: nop

L_80242FFC:
    // 0x80242FFC: jal         0x8004F144
    // 0x80243000: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_4;
    // 0x80243000: nop

    after_4:
    // 0x80243004: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80243008: beq         $v1, $zero, L_80243048
    if (ctx->r3 == 0) {
        // 0x8024300C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80243048;
    }
    // 0x8024300C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80243010: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80243014: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x80243018: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8024301C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80243020: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    // 0x80243024: sb          $zero, 0xC($v1)
    MEM_B(0XC, ctx->r3) = 0;
    // 0x80243028: lhu         $v0, 0x90($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X90);
    // 0x8024302C: sh          $v0, 0x1C($v1)
    MEM_H(0X1C, ctx->r3) = ctx->r2;
    // 0x80243030: lhu         $v0, 0x92($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X92);
    // 0x80243034: sh          $v0, 0x1E($v1)
    MEM_H(0X1E, ctx->r3) = ctx->r2;
    // 0x80243038: lhu         $v0, 0x94($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X94);
    // 0x8024303C: sh          $v0, 0x20($v1)
    MEM_H(0X20, ctx->r3) = ctx->r2;
    // 0x80243040: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80243044: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
L_80243048:
    // 0x80243048: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x8024304C: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x80243050: lhu         $a0, 0x18($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X18);
    // 0x80243054: sh          $v0, 0x90($s0)
    MEM_H(0X90, ctx->r16) = ctx->r2;
    // 0x80243058: sh          $v1, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r3;
    // 0x8024305C: sh          $a0, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r4;
L_80243060:
    // 0x80243060: jal         0x8003F754
    // 0x80243064: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003F754_1AB54(rdram, ctx);
        goto after_5;
    // 0x80243064: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80243068: bne         $v0, $zero, L_80243084
    if (ctx->r2 != 0) {
        // 0x8024306C: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80243084;
    }
    // 0x8024306C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80243070: lw          $v0, 0x9C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X9C);
    // 0x80243074: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x80243078: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8024307C: beq         $v0, $zero, L_80243098
    if (ctx->r2 == 0) {
        // 0x80243080: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80243098;
    }
    // 0x80243080: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_80243084:
    // 0x80243084: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80243088: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8024308C: sb          $zero, 0x96($s0)
    MEM_B(0X96, ctx->r16) = 0;
    // 0x80243090: j           L_802430E8
    // 0x80243094: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
        goto L_802430E8;
    // 0x80243094: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
L_80243098:
    // 0x80243098: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8024309C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802430A0: beq         $v0, $zero, L_802430E8
    if (ctx->r2 == 0) {
        // 0x802430A4: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_802430E8;
    }
    // 0x802430A4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802430A8: lhu         $a1, 0x98($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X98);
    // 0x802430AC: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x802430B0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802430B4: addiu       $v0, $s0, 0x9C
    ctx->r2 = ADD32(ctx->r16, 0X9C);
    // 0x802430B8: ori         $a3, $zero, 0xA000
    ctx->r7 = 0 | 0XA000;
    // 0x802430BC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x802430C0: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x802430C4: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x802430C8: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x802430CC: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x802430D0: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x802430D4: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x802430D8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802430DC: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x802430E0: jal         0x80051E18
    // 0x802430E4: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_6;
    // 0x802430E4: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_6:
L_802430E8:
    // 0x802430E8: sw          $zero, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = 0;
    // 0x802430EC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x802430F0: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x802430F4: jr          $ra
    // 0x802430F8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x802430F8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8022A14C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A14C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022A150: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022A154: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022A158: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022A15C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022A160: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A164: lw          $v0, 0x10($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X10);
    // 0x8022A168: bne         $v0, $zero, L_8022A1D0
    if (ctx->r2 != 0) {
        // 0x8022A16C: nop
    
            goto L_8022A1D0;
    }
    // 0x8022A16C: nop

    // 0x8022A170: lw          $v1, 0x28($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X28);
    // 0x8022A174: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8022A178: addiu       $s0, $zero, 0x2
    ctx->r16 = ADD32(0, 0X2);
    // 0x8022A17C: lui         $s2, 0x8025
    ctx->r18 = S32(0X8025 << 16);
    // 0x8022A180: addiu       $s2, $s2, 0x1F5C
    ctx->r18 = ADD32(ctx->r18, 0X1F5C);
    // 0x8022A184: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8022A188: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8022A18C: sll         $v0, $s0, 24
    ctx->r2 = S32(ctx->r16 << 24);
L_8022A190:
    // 0x8022A190: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8022A194: sll         $a0, $v0, 2
    ctx->r4 = S32(ctx->r2 << 2);
    // 0x8022A198: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8022A19C: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x8022A1A0: jal         0x8005FA7C
    // 0x8022A1A4: addu        $a0, $a0, $s2
    ctx->r4 = ADD32(ctx->r4, ctx->r18);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_0;
    // 0x8022A1A4: addu        $a0, $a0, $s2
    ctx->r4 = ADD32(ctx->r4, ctx->r18);
    after_0:
    // 0x8022A1A8: addiu       $v0, $s0, 0x1
    ctx->r2 = ADD32(ctx->r16, 0X1);
    // 0x8022A1AC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022A1B0: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022A1B4: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8022A1B8: slti        $v0, $v0, 0xB
    ctx->r2 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x8022A1BC: bne         $v0, $zero, L_8022A190
    if (ctx->r2 != 0) {
        // 0x8022A1C0: sll         $v0, $s0, 24
        ctx->r2 = S32(ctx->r16 << 24);
            goto L_8022A190;
    }
    // 0x8022A1C0: sll         $v0, $s0, 24
    ctx->r2 = S32(ctx->r16 << 24);
    // 0x8022A1C4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022A1C8: sb          $zero, 0x63F0($at)
    MEM_B(0X63F0, ctx->r1) = 0;
    // 0x8022A1CC: sb          $zero, 0x6($s1)
    MEM_B(0X6, ctx->r17) = 0;
L_8022A1D0:
    // 0x8022A1D0: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x8022A1D4: bne         $v0, $zero, L_8022A1FC
    if (ctx->r2 != 0) {
        // 0x8022A1D8: nop
    
            goto L_8022A1FC;
    }
    // 0x8022A1D8: nop

    // 0x8022A1DC: jal         0x8022B884
    // 0x8022A1E0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_8022B884_ovl28(rdram, ctx);
        goto after_1;
    // 0x8022A1E0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_1:
    // 0x8022A1E4: beq         $v0, $zero, L_8022A204
    if (ctx->r2 == 0) {
        // 0x8022A1E8: nop
    
            goto L_8022A204;
    }
    // 0x8022A1E8: nop

    // 0x8022A1EC: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x8022A1F0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022A1F4: j           L_8022A204
    // 0x8022A1F8: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
        goto L_8022A204;
    // 0x8022A1F8: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
L_8022A1FC:
    // 0x8022A1FC: jal         0x8022B884
    // 0x8022A200: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8022B884_ovl28(rdram, ctx);
        goto after_2;
    // 0x8022A200: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
L_8022A204:
    // 0x8022A204: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022A208: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022A20C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022A210: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A214: jr          $ra
    // 0x8022A218: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022A218: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80231420_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231420: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231424: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231428: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023142C: jal         0x8004F144
    // 0x80231430: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80231430: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x80231434: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80231438: beq         $v1, $zero, L_80231474
    if (ctx->r3 == 0) {
        // 0x8023143C: addiu       $a0, $v1, 0x38
        ctx->r4 = ADD32(ctx->r3, 0X38);
            goto L_80231474;
    }
    // 0x8023143C: addiu       $a0, $v1, 0x38
    ctx->r4 = ADD32(ctx->r3, 0X38);
    // 0x80231440: addiu       $a1, $s0, 0x310
    ctx->r5 = ADD32(ctx->r16, 0X310);
    // 0x80231444: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80231448: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8023144C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80231450: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80231454: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x80231458: jal         0x8009A3B4
    // 0x8023145C: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8023145C: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    after_1:
    // 0x80231460: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80231464: jal         0x8007A1B8
    // 0x80231468: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8007A1B8_555B8(rdram, ctx);
        goto after_2;
    // 0x80231468: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_2:
    // 0x8023146C: jal         0x8004F418
    // 0x80231470: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_3;
    // 0x80231470: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
L_80231474:
    // 0x80231474: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80231478: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023147C: jr          $ra
    // 0x80231480: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80231480: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225150_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225150: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80225154: addiu       $v0, $v0, -0xE60
    ctx->r2 = ADD32(ctx->r2, -0XE60);
    // 0x80225158: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022515C: sw          $v0, 0x4020($at)
    MEM_W(0X4020, ctx->r1) = ctx->r2;
    // 0x80225160: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80225164: addiu       $v0, $v0, -0xCE8
    ctx->r2 = ADD32(ctx->r2, -0XCE8);
    // 0x80225168: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8022516C: sw          $v0, -0x22A0($at)
    MEM_W(-0X22A0, ctx->r1) = ctx->r2;
    // 0x80225170: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80225174: addiu       $v0, $v0, -0xC8C
    ctx->r2 = ADD32(ctx->r2, -0XC8C);
    // 0x80225178: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x8022517C: sw          $v0, -0x26A8($at)
    MEM_W(-0X26A8, ctx->r1) = ctx->r2;
    // 0x80225180: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80225184: addiu       $v0, $v0, -0xBAC
    ctx->r2 = ADD32(ctx->r2, -0XBAC);
    // 0x80225188: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8022518C: sw          $v0, -0xBD8($at)
    MEM_W(-0XBD8, ctx->r1) = ctx->r2;
    // 0x80225190: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80225194: addiu       $v0, $v0, -0xB24
    ctx->r2 = ADD32(ctx->r2, -0XB24);
    // 0x80225198: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8022519C: sw          $v0, 0xC68($at)
    MEM_W(0XC68, ctx->r1) = ctx->r2;
    // 0x802251A0: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x802251A4: addiu       $v0, $v0, -0xA9C
    ctx->r2 = ADD32(ctx->r2, -0XA9C);
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
RECOMP_FUNC void func_802255E4_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802255E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802255E8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802255EC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802255F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802255F4: jal         0x8006033C
    // 0x802255F8: addiu       $a0, $zero, 0x7B0
    ctx->r4 = ADD32(0, 0X7B0);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x802255F8: addiu       $a0, $zero, 0x7B0
    ctx->r4 = ADD32(0, 0X7B0);
    after_0:
    // 0x802255FC: beq         $v0, $zero, L_80225614
    if (ctx->r2 == 0) {
        // 0x80225600: nop
    
            goto L_80225614;
    }
    // 0x80225600: nop

    // 0x80225604: jal         0x80060690
    // 0x80225608: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80060690_3BA90(rdram, ctx);
        goto after_1;
    // 0x80225608: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_1:
    // 0x8022560C: j           L_8022567C
    // 0x80225610: nop

        goto L_8022567C;
    // 0x80225610: nop

L_80225614:
    // 0x80225614: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x80225618: beq         $v1, $zero, L_80225630
    if (ctx->r3 == 0) {
        // 0x8022561C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80225630;
    }
    // 0x8022561C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225620: beq         $v1, $v0, L_80225654
    if (ctx->r3 == ctx->r2) {
        // 0x80225624: nop
    
            goto L_80225654;
    }
    // 0x80225624: nop

    // 0x80225628: j           L_8022567C
    // 0x8022562C: nop

        goto L_8022567C;
    // 0x8022562C: nop

L_80225630:
    // 0x80225630: jal         0x8006033C
    // 0x80225634: addiu       $a0, $zero, 0x57
    ctx->r4 = ADD32(0, 0X57);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x80225634: addiu       $a0, $zero, 0x57
    ctx->r4 = ADD32(0, 0X57);
    after_2:
    // 0x80225638: bne         $v0, $zero, L_80225678
    if (ctx->r2 != 0) {
        // 0x8022563C: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_80225678;
    }
    // 0x8022563C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225640: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80225644: jal         0x800607C4
    // 0x80225648: addiu       $a0, $a0, 0x370
    ctx->r4 = ADD32(ctx->r4, 0X370);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_3;
    // 0x80225648: addiu       $a0, $a0, 0x370
    ctx->r4 = ADD32(ctx->r4, 0X370);
    after_3:
    // 0x8022564C: j           L_80225678
    // 0x80225650: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80225678;
    // 0x80225650: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80225654:
    // 0x80225654: jal         0x8006033C
    // 0x80225658: addiu       $a0, $zero, 0x57
    ctx->r4 = ADD32(0, 0X57);
    func_8006033C_3B73C(rdram, ctx);
        goto after_4;
    // 0x80225658: addiu       $a0, $zero, 0x57
    ctx->r4 = ADD32(0, 0X57);
    after_4:
    // 0x8022565C: beq         $v0, $zero, L_8022567C
    if (ctx->r2 == 0) {
        // 0x80225660: nop
    
            goto L_8022567C;
    }
    // 0x80225660: nop

    // 0x80225664: jal         0x8006036C
    // 0x80225668: addiu       $a0, $zero, 0x57
    ctx->r4 = ADD32(0, 0X57);
    func_8006036C_3B76C(rdram, ctx);
        goto after_5;
    // 0x80225668: addiu       $a0, $zero, 0x57
    ctx->r4 = ADD32(0, 0X57);
    after_5:
    // 0x8022566C: jal         0x80060690
    // 0x80225670: addiu       $a0, $zero, 0x44
    ctx->r4 = ADD32(0, 0X44);
    func_80060690_3BA90(rdram, ctx);
        goto after_6;
    // 0x80225670: addiu       $a0, $zero, 0x44
    ctx->r4 = ADD32(0, 0X44);
    after_6:
    // 0x80225674: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_80225678:
    // 0x80225678: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8022567C:
    // 0x8022567C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225680: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225684: jr          $ra
    // 0x80225688: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225688: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8024D758_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024D758: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8024D75C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8024D760: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8024D764: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8024D768: addiu       $s1, $sp, 0x10
    ctx->r17 = ADD32(ctx->r29, 0X10);
    // 0x8024D76C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8024D770: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x8024D774: addiu       $a1, $a1, 0x637C
    ctx->r5 = ADD32(ctx->r5, 0X637C);
    // 0x8024D778: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8024D77C: jal         0x8009A3B4
    // 0x8024D780: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8024D780: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_0:
    // 0x8024D784: jal         0x8006033C
    // 0x8024D788: addiu       $a0, $zero, 0x35
    ctx->r4 = ADD32(0, 0X35);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x8024D788: addiu       $a0, $zero, 0x35
    ctx->r4 = ADD32(0, 0X35);
    after_1:
    // 0x8024D78C: bne         $v0, $zero, L_8024D7B0
    if (ctx->r2 != 0) {
        // 0x8024D790: nop
    
            goto L_8024D7B0;
    }
    // 0x8024D790: nop

    // 0x8024D794: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8024D798: jal         0x8024DD2C
    // 0x8024D79C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8024DD2C_ovl28(rdram, ctx);
        goto after_2;
    // 0x8024D79C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
    // 0x8024D7A0: beq         $v0, $zero, L_8024D7CC
    if (ctx->r2 == 0) {
        // 0x8024D7A4: nop
    
            goto L_8024D7CC;
    }
    // 0x8024D7A4: nop

    // 0x8024D7A8: jal         0x8006036C
    // 0x8024D7AC: addiu       $a0, $zero, 0x604
    ctx->r4 = ADD32(0, 0X604);
    func_8006036C_3B76C(rdram, ctx);
        goto after_3;
    // 0x8024D7AC: addiu       $a0, $zero, 0x604
    ctx->r4 = ADD32(0, 0X604);
    after_3:
L_8024D7B0:
    // 0x8024D7B0: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8024D7B4: addiu       $v0, $v0, -0x3A9E
    ctx->r2 = ADD32(ctx->r2, -0X3A9E);
    // 0x8024D7B8: lhu         $v1, 0x0($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X0);
    // 0x8024D7BC: ori         $v1, $v1, 0x1
    ctx->r3 = ctx->r3 | 0X1;
    // 0x8024D7C0: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
    // 0x8024D7C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024D7C8: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8024D7CC:
    // 0x8024D7CC: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8024D7D0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8024D7D4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8024D7D8: jr          $ra
    // 0x8024D7DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8024D7DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022D930_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D930: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D934: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022D938: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8022D93C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D940: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022D944: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022D948: lw          $v0, 0x35DC($at)
    ctx->r2 = MEM_W(ctx->r1, 0X35DC);
    // 0x8022D94C: jalr        $v0
    // 0x8022D950: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022D950: nop

    after_0:
    // 0x8022D954: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022D958: jr          $ra
    // 0x8022D95C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022D95C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A7B8_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A7B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A7BC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A7C0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A7C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022A7C8: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x8022A7CC: bne         $v0, $zero, L_8022A7E0
    if (ctx->r2 != 0) {
        // 0x8022A7D0: nop
    
            goto L_8022A7E0;
    }
    // 0x8022A7D0: nop

    // 0x8022A7D4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022A7D8: sb          $zero, 0x63F0($at)
    MEM_B(0X63F0, ctx->r1) = 0;
    // 0x8022A7DC: sb          $zero, 0x6($s0)
    MEM_B(0X6, ctx->r16) = 0;
L_8022A7E0:
    // 0x8022A7E0: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x8022A7E4: bne         $v0, $zero, L_8022A808
    if (ctx->r2 != 0) {
        // 0x8022A7E8: nop
    
            goto L_8022A808;
    }
    // 0x8022A7E8: nop

    // 0x8022A7EC: jal         0x8022B884
    // 0x8022A7F0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_8022B884_ovl28(rdram, ctx);
        goto after_0;
    // 0x8022A7F0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_0:
    // 0x8022A7F4: beq         $v0, $zero, L_8022A808
    if (ctx->r2 == 0) {
        // 0x8022A7F8: nop
    
            goto L_8022A808;
    }
    // 0x8022A7F8: nop

    // 0x8022A7FC: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x8022A800: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022A804: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
L_8022A808:
    // 0x8022A808: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022A80C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A810: jr          $ra
    // 0x8022A814: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A814: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8024282C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024282C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80242830: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80242834: lb          $v0, 0xC($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XC);
    // 0x80242838: bne         $v0, $zero, L_80242848
    if (ctx->r2 != 0) {
        // 0x8024283C: nop
    
            goto L_80242848;
    }
    // 0x8024283C: nop

    // 0x80242840: jal         0x8004F4F8
    // 0x80242844: nop

    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_0;
    // 0x80242844: nop

    after_0:
L_80242848:
    // 0x80242848: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8024284C: jr          $ra
    // 0x80242850: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80242850: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80242854: nop

    // 0x80242858: nop

    // 0x8024285C: nop

;}
RECOMP_FUNC void func_802323BC_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802323BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802323C0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802323C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802323C8: jal         0x80232424
    // 0x802323CC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_80232424_ovl28(rdram, ctx);
        goto after_0;
    // 0x802323CC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x802323D0: lb          $v0, 0x74($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X74);
    // 0x802323D4: bne         $v0, $zero, L_8023240C
    if (ctx->r2 != 0) {
        // 0x802323D8: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_8023240C;
    }
    // 0x802323D8: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x802323DC: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x802323E0: bne         $v1, $v0, L_802323FC
    if (ctx->r3 != ctx->r2) {
        // 0x802323E4: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_802323FC;
    }
    // 0x802323E4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802323E8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802323EC: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x802323F0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x802323F4: j           L_80232414
    // 0x802323F8: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
        goto L_80232414;
    // 0x802323F8: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_802323FC:
    // 0x802323FC: jal         0x802324D8
    // 0x80232400: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802324D8_ovl28(rdram, ctx);
        goto after_1;
    // 0x80232400: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80232404: j           L_80232414
    // 0x80232408: nop

        goto L_80232414;
    // 0x80232408: nop

L_8023240C:
    // 0x8023240C: jal         0x80232444
    // 0x80232410: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80232444_ovl28(rdram, ctx);
        goto after_2;
    // 0x80232410: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
L_80232414:
    // 0x80232414: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80232418: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023241C: jr          $ra
    // 0x80232420: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80232420: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80243794_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80243794: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80243798: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8024379C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802437A0: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x802437A4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802437A8: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x802437AC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802437B0: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x802437B4: jal         0x8004D5D4
    // 0x802437B8: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x802437B8: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x802437BC: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x802437C0: addiu       $v0, $v0, 0x4B80
    ctx->r2 = ADD32(ctx->r2, 0X4B80);
    // 0x802437C4: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x802437C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802437CC: sb          $v0, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r2;
    // 0x802437D0: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x802437D4: jal         0x800A3450
    // 0x802437D8: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x802437D8: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    after_1:
    // 0x802437DC: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x802437E0: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x802437E4: addiu       $s1, $s0, 0xD0
    ctx->r17 = ADD32(ctx->r16, 0XD0);
    // 0x802437E8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802437EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802437F0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x802437F4: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x802437F8: lui         $v0, 0x200
    ctx->r2 = S32(0X200 << 16);
    // 0x802437FC: addiu       $a2, $zero, -0x60
    ctx->r6 = ADD32(0, -0X60);
    // 0x80243800: sw          $v1, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r3;
    // 0x80243804: jal         0x800540BC
    // 0x80243808: sw          $v0, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r2;
    func_800540BC_2F4BC(rdram, ctx);
        goto after_2;
    // 0x80243808: sw          $v0, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r2;
    after_2:
    // 0x8024380C: sw          $zero, 0xF0($s0)
    MEM_W(0XF0, ctx->r16) = 0;
    // 0x80243810: jal         0x800A3450
    // 0x80243814: sw          $zero, 0xEC($s0)
    MEM_W(0XEC, ctx->r16) = 0;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80243814: sw          $zero, 0xEC($s0)
    MEM_W(0XEC, ctx->r16) = 0;
    after_3:
    // 0x80243818: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8024381C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80243820: jal         0x8003E934
    // 0x80243824: sh          $v0, 0xE0($s0)
    MEM_H(0XE0, ctx->r16) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_4;
    // 0x80243824: sh          $v0, 0xE0($s0)
    MEM_H(0XE0, ctx->r16) = ctx->r2;
    after_4:
    // 0x80243828: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x8024382C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80243830: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x80243834: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80243838: addiu       $v0, $v0, -0x82
    ctx->r2 = ADD32(ctx->r2, -0X82);
    // 0x8024383C: sh          $a0, 0xE2($s0)
    MEM_H(0XE2, ctx->r16) = ctx->r4;
    // 0x80243840: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80243844: beq         $v0, $zero, L_8024385C
    if (ctx->r2 == 0) {
        // 0x80243848: addu        $a1, $v1, $zero
        ctx->r5 = ADD32(ctx->r3, 0);
            goto L_8024385C;
    }
    // 0x80243848: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x8024384C: addiu       $v0, $a0, -0x82
    ctx->r2 = ADD32(ctx->r4, -0X82);
    // 0x80243850: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80243854: j           L_80243860
    // 0x80243858: addiu       $v0, $zero, 0x82
    ctx->r2 = ADD32(0, 0X82);
        goto L_80243860;
    // 0x80243858: addiu       $v0, $zero, 0x82
    ctx->r2 = ADD32(0, 0X82);
L_8024385C:
    // 0x8024385C: subu        $v0, $a1, $a0
    ctx->r2 = SUB32(ctx->r5, ctx->r4);
L_80243860:
    // 0x80243860: sh          $v0, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r2;
    // 0x80243864: addiu       $v0, $zero, -0x82
    ctx->r2 = ADD32(0, -0X82);
    // 0x80243868: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x8024386C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80243870: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80243874: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80243878: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8024387C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80243880: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80243884: jr          $ra
    // 0x80243888: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80243888: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802430FC_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802430FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80243100: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80243104: jal         0x8004F4F8
    // 0x80243108: nop

    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_0;
    // 0x80243108: nop

    after_0:
    // 0x8024310C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80243110: jr          $ra
    // 0x80243114: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80243114: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80243118: nop

    // 0x8024311C: nop

;}
RECOMP_FUNC void func_80242D4C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80242D4C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80242D50: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80242D54: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80242D58: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80242D5C: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80242D60: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80242D64: jal         0x8009A3B4
    // 0x80242D68: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80242D68: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_0:
    // 0x80242D6C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80242D70: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80242D74: jal         0x8009A3B4
    // 0x80242D78: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80242D78: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80242D7C: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x80242D80: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80242D84: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x80242D88: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80242D8C: bne         $v0, $zero, L_80242DA4
    if (ctx->r2 != 0) {
        // 0x80242D90: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_80242DA4;
    }
    // 0x80242D90: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80242D94: jal         0x8004F4F8
    // 0x80242D98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_2;
    // 0x80242D98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80242D9C: j           L_80242E88
    // 0x80242DA0: nop

        goto L_80242E88;
    // 0x80242DA0: nop

L_80242DA4:
    // 0x80242DA4: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80242DA8: bne         $v1, $v0, L_80242DB4
    if (ctx->r3 != ctx->r2) {
        // 0x80242DAC: addiu       $v0, $v1, 0x2
        ctx->r2 = ADD32(ctx->r3, 0X2);
            goto L_80242DB4;
    }
    // 0x80242DAC: addiu       $v0, $v1, 0x2
    ctx->r2 = ADD32(ctx->r3, 0X2);
    // 0x80242DB0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80242DB4:
    // 0x80242DB4: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80242DB8: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x80242DBC: lh          $a3, 0x48($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X48);
    // 0x80242DC0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80242DC4: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80242DC8: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80242DCC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80242DD0: lbu         $v1, 0x4B74($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X4B74);
    // 0x80242DD4: lbu         $t0, 0xA($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0XA);
    // 0x80242DD8: lhu         $v0, 0x9A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X9A);
    // 0x80242DDC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80242DE0: sb          $v1, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r3;
    // 0x80242DE4: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80242DE8: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    // 0x80242DEC: lbu         $v1, 0x4B75($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X4B75);
    // 0x80242DF0: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80242DF4: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80242DF8: sh          $v0, 0x9A($s0)
    MEM_H(0X9A, ctx->r16) = ctx->r2;
    // 0x80242DFC: jal         0x8004DA90
    // 0x80242E00: sb          $v1, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x80242E00: sb          $v1, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r3;
    after_3:
    // 0x80242E04: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x80242E08: beq         $v0, $zero, L_80242E24
    if (ctx->r2 == 0) {
        // 0x80242E0C: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80242E24;
    }
    // 0x80242E0C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80242E10: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80242E14: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x80242E18: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80242E1C: bne         $v0, $zero, L_80242E70
    if (ctx->r2 != 0) {
        // 0x80242E20: nop
    
            goto L_80242E70;
    }
    // 0x80242E20: nop

L_80242E24:
    // 0x80242E24: jal         0x8004F144
    // 0x80242E28: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_4;
    // 0x80242E28: nop

    after_4:
    // 0x80242E2C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80242E30: beq         $v1, $zero, L_80242E70
    if (ctx->r3 == 0) {
        // 0x80242E34: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80242E70;
    }
    // 0x80242E34: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80242E38: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80242E3C: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x80242E40: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x80242E44: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80242E48: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    // 0x80242E4C: sb          $zero, 0xC($v1)
    MEM_B(0XC, ctx->r3) = 0;
    // 0x80242E50: lhu         $v0, 0x90($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X90);
    // 0x80242E54: sh          $v0, 0x1C($v1)
    MEM_H(0X1C, ctx->r3) = ctx->r2;
    // 0x80242E58: lhu         $v0, 0x92($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X92);
    // 0x80242E5C: sh          $v0, 0x1E($v1)
    MEM_H(0X1E, ctx->r3) = ctx->r2;
    // 0x80242E60: lhu         $v0, 0x94($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X94);
    // 0x80242E64: sh          $v0, 0x20($v1)
    MEM_H(0X20, ctx->r3) = ctx->r2;
    // 0x80242E68: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80242E6C: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
L_80242E70:
    // 0x80242E70: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x80242E74: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x80242E78: lhu         $a0, 0x18($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X18);
    // 0x80242E7C: sh          $v0, 0x90($s0)
    MEM_H(0X90, ctx->r16) = ctx->r2;
    // 0x80242E80: sh          $v1, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r3;
    // 0x80242E84: sh          $a0, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r4;
L_80242E88:
    // 0x80242E88: jal         0x8003F754
    // 0x80242E8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003F754_1AB54(rdram, ctx);
        goto after_5;
    // 0x80242E8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80242E90: bne         $v0, $zero, L_80242EAC
    if (ctx->r2 != 0) {
        // 0x80242E94: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80242EAC;
    }
    // 0x80242E94: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80242E98: lw          $v0, 0x9C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X9C);
    // 0x80242E9C: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x80242EA0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80242EA4: beq         $v0, $zero, L_80242EC0
    if (ctx->r2 == 0) {
        // 0x80242EA8: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80242EC0;
    }
    // 0x80242EA8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_80242EAC:
    // 0x80242EAC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80242EB0: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80242EB4: sb          $zero, 0x96($s0)
    MEM_B(0X96, ctx->r16) = 0;
    // 0x80242EB8: j           L_80242F10
    // 0x80242EBC: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
        goto L_80242F10;
    // 0x80242EBC: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
L_80242EC0:
    // 0x80242EC0: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80242EC4: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80242EC8: beq         $v0, $zero, L_80242F10
    if (ctx->r2 == 0) {
        // 0x80242ECC: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80242F10;
    }
    // 0x80242ECC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80242ED0: lhu         $a1, 0x98($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X98);
    // 0x80242ED4: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80242ED8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80242EDC: addiu       $v0, $s0, 0x9C
    ctx->r2 = ADD32(ctx->r16, 0X9C);
    // 0x80242EE0: ori         $a3, $zero, 0xA000
    ctx->r7 = 0 | 0XA000;
    // 0x80242EE4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80242EE8: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x80242EEC: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x80242EF0: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80242EF4: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x80242EF8: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80242EFC: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x80242F00: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80242F04: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80242F08: jal         0x80051E18
    // 0x80242F0C: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_6;
    // 0x80242F0C: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_6:
L_80242F10:
    // 0x80242F10: sw          $zero, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = 0;
    // 0x80242F14: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80242F18: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80242F1C: jr          $ra
    // 0x80242F20: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80242F20: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8023EE10_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023EE10: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023EE14: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023EE18: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023EE1C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023EE20: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023EE24: jal         0x8004EFE4
    // 0x8023EE28: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_0;
    // 0x8023EE28: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    after_0:
    // 0x8023EE2C: addiu       $v1, $s1, 0x440
    ctx->r3 = ADD32(ctx->r17, 0X440);
    // 0x8023EE30: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8023EE34: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
    // 0x8023EE38: addu        $a1, $v0, $v1
    ctx->r5 = ADD32(ctx->r2, ctx->r3);
    // 0x8023EE3C: bne         $a0, $zero, L_8023EE4C
    if (ctx->r4 != 0) {
        // 0x8023EE40: sw          $a0, 0x68($a1)
        MEM_W(0X68, ctx->r5) = ctx->r4;
            goto L_8023EE4C;
    }
    // 0x8023EE40: sw          $a0, 0x68($a1)
    MEM_W(0X68, ctx->r5) = ctx->r4;
    // 0x8023EE44: j           L_8023EEB4
    // 0x8023EE48: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8023EEB4;
    // 0x8023EE48: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8023EE4C:
    // 0x8023EE4C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023EE50: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x8023EE54: lw          $v1, 0x68($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X68);
    // 0x8023EE58: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x8023EE5C: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8023EE60: lw          $v0, 0x68($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X68);
    // 0x8023EE64: sb          $zero, 0x4($v0)
    MEM_B(0X4, ctx->r2) = 0;
    // 0x8023EE68: lw          $v0, 0x68($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X68);
    // 0x8023EE6C: sb          $zero, 0x3($v0)
    MEM_B(0X3, ctx->r2) = 0;
    // 0x8023EE70: lw          $a0, 0x68($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X68);
    // 0x8023EE74: lw          $v1, 0x4A0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4A0);
    // 0x8023EE78: sll         $v0, $s0, 3
    ctx->r2 = S32(ctx->r16 << 3);
    // 0x8023EE7C: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x8023EE80: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023EE84: subu        $v0, $v0, $s0
    ctx->r2 = SUB32(ctx->r2, ctx->r16);
    // 0x8023EE88: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8023EE8C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023EE90: lbu         $v0, 0x1($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1);
    // 0x8023EE94: sb          $v0, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r2;
    // 0x8023EE98: lw          $v0, 0x68($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X68);
    // 0x8023EE9C: sb          $s0, 0xD($v0)
    MEM_B(0XD, ctx->r2) = ctx->r16;
    // 0x8023EEA0: lw          $v0, 0x68($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X68);
    // 0x8023EEA4: sb          $zero, 0xE($v0)
    MEM_B(0XE, ctx->r2) = 0;
    // 0x8023EEA8: lw          $v1, 0x68($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X68);
    // 0x8023EEAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023EEB0: sb          $zero, 0xF($v1)
    MEM_B(0XF, ctx->r3) = 0;
L_8023EEB4:
    // 0x8023EEB4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023EEB8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023EEBC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023EEC0: jr          $ra
    // 0x8023EEC4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023EEC4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80230B3C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230B3C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80230B40: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80230B44: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80230B48: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80230B4C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80230B50: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80230B54: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80230B58: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80230B5C: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80230B60: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80230B64: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x80230B68: ori         $v1, $v1, 0x6
    ctx->r3 = ctx->r3 | 0X6;
    // 0x80230B6C: jal         0x8004D5D4
    // 0x80230B70: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80230B70: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x80230B74: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230B78: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80230B7C: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80230B80: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80230B84: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80230B88: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80230B8C: jal         0x8003E934
    // 0x80230B90: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x80230B90: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    after_1:
    // 0x80230B94: addiu       $s1, $s0, 0x310
    ctx->r17 = ADD32(ctx->r16, 0X310);
    // 0x80230B98: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80230B9C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80230BA0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80230BA4: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80230BA8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80230BAC: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80230BB0: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80230BB4: addiu       $v0, $v0, 0x3898
    ctx->r2 = ADD32(ctx->r2, 0X3898);
    // 0x80230BB8: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x80230BBC: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80230BC0: addiu       $v0, $v0, 0x388C
    ctx->r2 = ADD32(ctx->r2, 0X388C);
    // 0x80230BC4: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x80230BC8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80230BCC: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80230BD0: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80230BD4: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80230BD8: sb          $zero, 0x74($s0)
    MEM_B(0X74, ctx->r16) = 0;
    // 0x80230BDC: jal         0x8009A3B4
    // 0x80230BE0: sh          $zero, 0x308($s0)
    MEM_H(0X308, ctx->r16) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80230BE0: sh          $zero, 0x308($s0)
    MEM_H(0X308, ctx->r16) = 0;
    after_2:
    // 0x80230BE4: addiu       $a0, $s0, 0x328
    ctx->r4 = ADD32(ctx->r16, 0X328);
    // 0x80230BE8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80230BEC: addiu       $a2, $zero, -0x60
    ctx->r6 = ADD32(0, -0X60);
    // 0x80230BF0: addiu       $v0, $zero, -0x30
    ctx->r2 = ADD32(0, -0X30);
    // 0x80230BF4: sh          $v0, 0x318($s0)
    MEM_H(0X318, ctx->r16) = ctx->r2;
    // 0x80230BF8: addiu       $v0, $zero, -0x48
    ctx->r2 = ADD32(0, -0X48);
    // 0x80230BFC: sh          $v0, 0x31A($s0)
    MEM_H(0X31A, ctx->r16) = ctx->r2;
    // 0x80230C00: addiu       $v0, $zero, 0x48
    ctx->r2 = ADD32(0, 0X48);
    // 0x80230C04: sh          $v0, 0x31E($s0)
    MEM_H(0X31E, ctx->r16) = ctx->r2;
    // 0x80230C08: lui         $v0, 0x888
    ctx->r2 = S32(0X888 << 16);
    // 0x80230C0C: sh          $zero, 0x31C($s0)
    MEM_H(0X31C, ctx->r16) = 0;
    // 0x80230C10: sw          $v0, 0x30C($s0)
    MEM_W(0X30C, ctx->r16) = ctx->r2;
    // 0x80230C14: jal         0x800540BC
    // 0x80230C18: sh          $zero, 0x30A($s0)
    MEM_H(0X30A, ctx->r16) = 0;
    func_800540BC_2F4BC(rdram, ctx);
        goto after_3;
    // 0x80230C18: sh          $zero, 0x30A($s0)
    MEM_H(0X30A, ctx->r16) = 0;
    after_3:
    // 0x80230C1C: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80230C20: lh          $a2, 0x318($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X318);
    // 0x80230C24: lh          $a3, 0x31A($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X31A);
    // 0x80230C28: lh          $v0, 0x31C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X31C);
    // 0x80230C2C: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x80230C30: jal         0x802315D4
    // 0x80230C34: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_802315D4_ovl28(rdram, ctx);
        goto after_4;
    // 0x80230C34: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_4:
    // 0x80230C38: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80230C3C: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x80230C40: jal         0x8009A3B4
    // 0x80230C44: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x80230C44: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x80230C48: lhu         $v1, 0x310($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X310);
    // 0x80230C4C: lhu         $a2, 0x14($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X14);
    // 0x80230C50: lhu         $a0, 0x312($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X312);
    // 0x80230C54: lhu         $a3, 0x16($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X16);
    // 0x80230C58: lhu         $a1, 0x314($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X314);
    // 0x80230C5C: lhu         $t0, 0x18($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X18);
    // 0x80230C60: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80230C64: lui         $t1, 0x8021
    ctx->r9 = S32(0X8021 << 16);
    // 0x80230C68: lw          $t1, 0x298($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X298);
    // 0x80230C6C: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x80230C70: addu        $a0, $a0, $a3
    ctx->r4 = ADD32(ctx->r4, ctx->r7);
    // 0x80230C74: addu        $a1, $a1, $t0
    ctx->r5 = ADD32(ctx->r5, ctx->r8);
    // 0x80230C78: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80230C7C: addu        $v0, $v0, $t1
    ctx->r2 = ADD32(ctx->r2, ctx->r9);
    // 0x80230C80: sh          $v1, 0x310($s0)
    MEM_H(0X310, ctx->r16) = ctx->r3;
    // 0x80230C84: sh          $a0, 0x312($s0)
    MEM_H(0X312, ctx->r16) = ctx->r4;
    // 0x80230C88: sh          $a1, 0x314($s0)
    MEM_H(0X314, ctx->r16) = ctx->r5;
    // 0x80230C8C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80230C90: lbu         $v0, 0x8($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X8);
    // 0x80230C94: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80230C98: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    // 0x80230C9C: sh          $v0, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r2;
    // 0x80230CA0: sh          $v0, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r2;
    // 0x80230CA4: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80230CA8: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80230CAC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80230CB0: jr          $ra
    // 0x80230CB4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80230CB4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8023250C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023250C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80232510: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x80232514: addiu       $v0, $zero, -0x80
    ctx->r2 = ADD32(0, -0X80);
    // 0x80232518: sh          $v0, 0x44($a0)
    MEM_H(0X44, ctx->r4) = ctx->r2;
    // 0x8023251C: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80232520: sh          $v0, 0x382($a0)
    MEM_H(0X382, ctx->r4) = ctx->r2;
    // 0x80232524: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80232528: sh          $zero, 0x46($a0)
    MEM_H(0X46, ctx->r4) = 0;
    // 0x8023252C: sh          $zero, 0x4E($a0)
    MEM_H(0X4E, ctx->r4) = 0;
    // 0x80232530: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x80232534: jr          $ra
    // 0x80232538: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    TRACE_RETURN()
    return;
    // 0x80232538: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
;}
RECOMP_FUNC void func_8022E888_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E888: lhu         $v0, 0x350($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X350);
    // 0x8022E88C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022E890: sh          $v0, 0x350($a0)
    MEM_H(0X350, ctx->r4) = ctx->r2;
    // 0x8022E894: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022E898: bne         $v0, $zero, L_8022E8A4
    if (ctx->r2 != 0) {
        // 0x8022E89C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022E8A4;
    }
    // 0x8022E89C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E8A0: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_8022E8A4:
    // 0x8022E8A4: jr          $ra
    // 0x8022E8A8: nop

    TRACE_RETURN()
    return;
    // 0x8022E8A8: nop

;}
RECOMP_FUNC void func_80247D10_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80247D10: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80247D14: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80247D18: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80247D1C: addiu       $a0, $zero, 0x7B0
    ctx->r4 = ADD32(0, 0X7B0);
    // 0x80247D20: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80247D24: jal         0x8006033C
    // 0x80247D28: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80247D28: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x80247D2C: beq         $v0, $zero, L_80247D9C
    if (ctx->r2 == 0) {
        // 0x80247D30: nop
    
            goto L_80247D9C;
    }
    // 0x80247D30: nop

    // 0x80247D34: jal         0x8006033C
    // 0x80247D38: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x80247D38: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    after_1:
    // 0x80247D3C: bne         $v0, $zero, L_80247E0C
    if (ctx->r2 != 0) {
        // 0x80247D40: addiu       $s0, $s1, 0x18
        ctx->r16 = ADD32(ctx->r17, 0X18);
            goto L_80247E0C;
    }
    // 0x80247D40: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x80247D44: lbu         $v1, 0x8($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X8);
    // 0x80247D48: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80247D4C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80247D50: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    // 0x80247D54: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80247D58: jal         0x8002C678
    // 0x80247D5C: sb          $v1, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r3;
    func_8002C678_7A78(rdram, ctx);
        goto after_2;
    // 0x80247D5C: sb          $v1, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r3;
    after_2:
    // 0x80247D60: lb          $a0, 0xC($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XC);
    // 0x80247D64: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80247D68: sh          $zero, 0x18($s1)
    MEM_H(0X18, ctx->r17) = 0;
    // 0x80247D6C: jal         0x800319B4
    // 0x80247D70: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    func_800319B4_CDB4(rdram, ctx);
        goto after_3;
    // 0x80247D70: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    after_3:
    // 0x80247D74: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80247D78: addiu       $a0, $zero, 0x7B2
    ctx->r4 = ADD32(0, 0X7B2);
    // 0x80247D7C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80247D80: jal         0x8006036C
    // 0x80247D84: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    func_8006036C_3B76C(rdram, ctx);
        goto after_4;
    // 0x80247D84: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    after_4:
    // 0x80247D88: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    // 0x80247D8C: jal         0x8002A33C
    // 0x80247D90: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    func_8002A33C_573C(rdram, ctx);
        goto after_5;
    // 0x80247D90: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    after_5:
    // 0x80247D94: j           L_80247E0C
    // 0x80247D98: nop

        goto L_80247E0C;
    // 0x80247D98: nop

L_80247D9C:
    // 0x80247D9C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80247DA0: jal         0x8003E6BC
    // 0x80247DA4: addiu       $a0, $a0, 0x49C4
    ctx->r4 = ADD32(ctx->r4, 0X49C4);
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_6;
    // 0x80247DA4: addiu       $a0, $a0, 0x49C4
    ctx->r4 = ADD32(ctx->r4, 0X49C4);
    after_6:
    // 0x80247DA8: lw          $v1, 0x44($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X44);
    // 0x80247DAC: beq         $v1, $v0, L_80247E0C
    if (ctx->r3 == ctx->r2) {
        // 0x80247DB0: addiu       $s0, $s1, 0x18
        ctx->r16 = ADD32(ctx->r17, 0X18);
            goto L_80247E0C;
    }
    // 0x80247DB0: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x80247DB4: lbu         $v1, 0x8($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X8);
    // 0x80247DB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80247DBC: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80247DC0: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    // 0x80247DC4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80247DC8: jal         0x8002C678
    // 0x80247DCC: sb          $v1, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r3;
    func_8002C678_7A78(rdram, ctx);
        goto after_7;
    // 0x80247DCC: sb          $v1, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r3;
    after_7:
    // 0x80247DD0: lb          $a0, 0xC($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XC);
    // 0x80247DD4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80247DD8: sh          $zero, 0x18($s1)
    MEM_H(0X18, ctx->r17) = 0;
    // 0x80247DDC: jal         0x800319B4
    // 0x80247DE0: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    func_800319B4_CDB4(rdram, ctx);
        goto after_8;
    // 0x80247DE0: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    after_8:
    // 0x80247DE4: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80247DE8: addiu       $a0, $zero, 0x7B2
    ctx->r4 = ADD32(0, 0X7B2);
    // 0x80247DEC: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80247DF0: jal         0x8006036C
    // 0x80247DF4: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    func_8006036C_3B76C(rdram, ctx);
        goto after_9;
    // 0x80247DF4: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    after_9:
    // 0x80247DF8: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    // 0x80247DFC: jal         0x8002A33C
    // 0x80247E00: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    func_8002A33C_573C(rdram, ctx);
        goto after_10;
    // 0x80247E00: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    after_10:
    // 0x80247E04: jal         0x80060590
    // 0x80247E08: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    func_80060590_3B990(rdram, ctx);
        goto after_11;
    // 0x80247E08: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    after_11:
L_80247E0C:
    // 0x80247E0C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80247E10: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80247E14: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80247E18: jr          $ra
    // 0x80247E1C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80247E1C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80229854_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229854: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229858: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022985C: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x80229860: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80229864: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80229868: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022986C: lw          $v0, 0x1F44($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1F44);
    // 0x80229870: jalr        $v0
    // 0x80229874: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80229874: nop

    after_0:
    // 0x80229878: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022987C: jr          $ra
    // 0x80229880: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229880: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80232A80_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232A80: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80232A84: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80232A88: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80232A8C: jal         0x80233818
    // 0x80232A90: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_80233818_ovl28(rdram, ctx);
        goto after_0;
    // 0x80232A90: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x80232A94: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80232A98: bgez        $v0, L_80232AAC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80232A9C: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80232AAC;
    }
    // 0x80232A9C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80232AA0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80232AA4: j           L_80232AF0
    // 0x80232AA8: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
        goto L_80232AF0;
    // 0x80232AA8: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_80232AAC:
    // 0x80232AAC: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80232AB0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80232AB4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80232AB8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80232ABC: lw          $v0, 0x392C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X392C);
    // 0x80232AC0: jalr        $v0
    // 0x80232AC4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x80232AC4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80232AC8: lh          $v0, 0x34C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X34C);
    // 0x80232ACC: beq         $v0, $zero, L_80232ADC
    if (ctx->r2 == 0) {
        // 0x80232AD0: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80232ADC;
    }
    // 0x80232AD0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80232AD4: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80232AD8: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
L_80232ADC:
    // 0x80232ADC: lh          $v0, 0x350($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X350);
    // 0x80232AE0: beq         $v0, $zero, L_80232AF0
    if (ctx->r2 == 0) {
        // 0x80232AE4: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80232AF0;
    }
    // 0x80232AE4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80232AE8: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80232AEC: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
L_80232AF0:
    // 0x80232AF0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80232AF4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80232AF8: jr          $ra
    // 0x80232AFC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80232AFC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802439B0_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802439B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802439B4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802439B8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802439BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802439C0: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x802439C4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802439C8: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    // 0x802439CC: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x802439D0: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x802439D4: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x802439D8: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    // 0x802439DC: ori         $v0, $v0, 0x46
    ctx->r2 = ctx->r2 | 0X46;
    // 0x802439E0: jal         0x80243AD8
    // 0x802439E4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_80243AD8_ovl28(rdram, ctx);
        goto after_0;
    // 0x802439E4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x802439E8: lui         $v0, 0x220
    ctx->r2 = S32(0X220 << 16);
    // 0x802439EC: ori         $v0, $v0, 0x2020
    ctx->r2 = ctx->r2 | 0X2020;
    // 0x802439F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802439F4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802439F8: jal         0x8004D5D4
    // 0x802439FC: sw          $v0, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_1;
    // 0x802439FC: sw          $v0, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r2;
    after_1:
    // 0x80243A00: addiu       $v1, $zero, 0xF
    ctx->r3 = ADD32(0, 0XF);
    // 0x80243A04: addiu       $v0, $s0, 0x3C
    ctx->r2 = ADD32(ctx->r16, 0X3C);
L_80243A08:
    // 0x80243A08: sw          $zero, 0xD0($v0)
    MEM_W(0XD0, ctx->r2) = 0;
    // 0x80243A0C: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80243A10: bgez        $v1, L_80243A08
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80243A14: addiu       $v0, $v0, -0x4
        ctx->r2 = ADD32(ctx->r2, -0X4);
            goto L_80243A08;
    }
    // 0x80243A14: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x80243A18: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80243A1C: addiu       $v0, $v0, 0x4BC0
    ctx->r2 = ADD32(ctx->r2, 0X4BC0);
    // 0x80243A20: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x80243A24: jal         0x80243D04
    // 0x80243A28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80243D04_ovl28(rdram, ctx);
        goto after_2;
    // 0x80243A28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80243A2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80243A30: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80243A34: jr          $ra
    // 0x80243A38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80243A38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802264B4_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802264B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802264B8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802264BC: jal         0x80226BC4
    // 0x802264C0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80226BC4_ovl28(rdram, ctx);
        goto after_0;
    // 0x802264C0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x802264C4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802264C8: jr          $ra
    // 0x802264CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802264CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80235F54_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235F54: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80235F58: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x80235F5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80235F60: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80235F64: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80235F68: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80235F6C: bne         $v1, $v0, L_80235F9C
    if (ctx->r3 != ctx->r2) {
        // 0x80235F70: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80235F9C;
    }
    // 0x80235F70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80235F74: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
    // 0x80235F78: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80235F7C: lw          $v0, 0x3C54($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3C54);
    // 0x80235F80: sb          $zero, 0xB($a1)
    MEM_B(0XB, ctx->r5) = 0;
    // 0x80235F84: sb          $zero, 0x8($a1)
    MEM_B(0X8, ctx->r5) = 0;
    // 0x80235F88: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x80235F8C: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80235F90: lw          $v0, 0x3BF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3BF0);
    // 0x80235F94: sb          $zero, 0x9($a1)
    MEM_B(0X9, ctx->r5) = 0;
    // 0x80235F98: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
L_80235F9C:
    // 0x80235F9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235FA0: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x80235FA4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80235FA8: jal         0x8004DA90
    // 0x80235FAC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x80235FAC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x80235FB0: jal         0x8005044C
    // 0x80235FB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x80235FB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80235FB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80235FBC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80235FC0: jr          $ra
    // 0x80235FC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80235FC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80232EE4_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232EE4: lb          $v0, 0xA7($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XA7);
    // 0x80232EE8: bgez        $v0, L_80232F04
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80232EEC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80232F04;
    }
    // 0x80232EEC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80232EF0: lhu         $v1, 0x348($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X348);
    // 0x80232EF4: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
    // 0x80232EF8: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    // 0x80232EFC: andi        $v1, $v1, 0xFFFD
    ctx->r3 = ctx->r3 & 0XFFFD;
    // 0x80232F00: sh          $v1, 0x348($a0)
    MEM_H(0X348, ctx->r4) = ctx->r3;
L_80232F04:
    // 0x80232F04: jr          $ra
    // 0x80232F08: nop

    TRACE_RETURN()
    return;
    // 0x80232F08: nop

;}
RECOMP_FUNC void func_8022A030_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A030: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A034: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A038: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A03C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022A040: lbu         $v1, 0x6($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X6);
    // 0x8022A044: beq         $v1, $zero, L_8022A05C
    if (ctx->r3 == 0) {
        // 0x8022A048: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022A05C;
    }
    // 0x8022A048: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A04C: beq         $v1, $v0, L_8022A088
    if (ctx->r3 == ctx->r2) {
        // 0x8022A050: addiu       $v0, $zero, 0x5A
        ctx->r2 = ADD32(0, 0X5A);
            goto L_8022A088;
    }
    // 0x8022A050: addiu       $v0, $zero, 0x5A
    ctx->r2 = ADD32(0, 0X5A);
    // 0x8022A054: j           L_8022A0C0
    // 0x8022A058: nop

        goto L_8022A0C0;
    // 0x8022A058: nop

L_8022A05C:
    // 0x8022A05C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022A060: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8022A064: bne         $v0, $zero, L_8022A0C0
    if (ctx->r2 != 0) {
        // 0x8022A068: nop
    
            goto L_8022A0C0;
    }
    // 0x8022A068: nop

    // 0x8022A06C: lbu         $v1, 0x6($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X6);
    // 0x8022A070: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022A074: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022A078: andi        $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 & 0X7F;
    // 0x8022A07C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022A080: j           L_8022A0C0
    // 0x8022A084: sb          $v1, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r3;
        goto L_8022A0C0;
    // 0x8022A084: sb          $v1, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r3;
L_8022A088:
    // 0x8022A088: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x8022A08C: bne         $v1, $v0, L_8022A09C
    if (ctx->r3 != ctx->r2) {
        // 0x8022A090: nop
    
            goto L_8022A09C;
    }
    // 0x8022A090: nop

    // 0x8022A094: jal         0x8022B750
    // 0x8022A098: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    func_8022B750_ovl28(rdram, ctx);
        goto after_0;
    // 0x8022A098: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    after_0:
L_8022A09C:
    // 0x8022A09C: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x8022A0A0: slti        $v0, $v0, 0x78
    ctx->r2 = SIGNED(ctx->r2) < 0X78 ? 1 : 0;
    // 0x8022A0A4: bne         $v0, $zero, L_8022A0C0
    if (ctx->r2 != 0) {
        // 0x8022A0A8: nop
    
            goto L_8022A0C0;
    }
    // 0x8022A0A8: nop

    // 0x8022A0AC: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022A0B0: jal         0x8005FA7C
    // 0x8022A0B4: addiu       $a0, $a0, 0x1F5C
    ctx->r4 = ADD32(ctx->r4, 0X1F5C);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_1;
    // 0x8022A0B4: addiu       $a0, $a0, 0x1F5C
    ctx->r4 = ADD32(ctx->r4, 0X1F5C);
    after_1:
    // 0x8022A0B8: jal         0x800600F8
    // 0x8022A0BC: sb          $zero, 0x6($s0)
    MEM_B(0X6, ctx->r16) = 0;
    func_800600F8_3B4F8(rdram, ctx);
        goto after_2;
    // 0x8022A0BC: sb          $zero, 0x6($s0)
    MEM_B(0X6, ctx->r16) = 0;
    after_2:
L_8022A0C0:
    // 0x8022A0C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022A0C4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A0C8: jr          $ra
    // 0x8022A0CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A0CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023AACC_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023AACC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023AAD0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023AAD4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023AAD8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023AADC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023AAE0: lb          $v0, 0x74($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X74);
    // 0x8023AAE4: bne         $v0, $zero, L_8023AB78
    if (ctx->r2 != 0) {
        // 0x8023AAE8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023AB78;
    }
    // 0x8023AAE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023AAEC: addiu       $a0, $zero, 0x1BC
    ctx->r4 = ADD32(0, 0X1BC);
    // 0x8023AAF0: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x8023AAF4: jal         0x8002A33C
    // 0x8023AAF8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x8023AAF8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_0:
    // 0x8023AAFC: lh          $v0, 0x6E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6E);
    // 0x8023AB00: bne         $v0, $zero, L_8023AB5C
    if (ctx->r2 != 0) {
        // 0x8023AB04: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023AB5C;
    }
    // 0x8023AB04: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023AB08: jal         0x8004F144
    // 0x8023AB0C: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_1;
    // 0x8023AB0C: nop

    after_1:
    // 0x8023AB10: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023AB14: beq         $v1, $zero, L_8023AB3C
    if (ctx->r3 == 0) {
        // 0x8023AB18: addiu       $a0, $v1, 0x38
        ctx->r4 = ADD32(ctx->r3, 0X38);
            goto L_8023AB3C;
    }
    // 0x8023AB18: addiu       $a0, $v1, 0x38
    ctx->r4 = ADD32(ctx->r3, 0X38);
    // 0x8023AB1C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023AB20: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8023AB24: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8023AB28: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8023AB2C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8023AB30: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8023AB34: jal         0x8009A3B4
    // 0x8023AB38: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8023AB38: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    after_2:
L_8023AB3C:
    // 0x8023AB3C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023AB40: jal         0x8007A1B8
    // 0x8023AB44: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8007A1B8_555B8(rdram, ctx);
        goto after_3;
    // 0x8023AB44: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_3:
    // 0x8023AB48: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023AB4C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8023AB50: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8023AB54: j           L_8023ABA8
    // 0x8023AB58: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
        goto L_8023ABA8;
    // 0x8023AB58: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_8023AB5C:
    // 0x8023AB5C: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x8023AB60: jal         0x80050294
    // 0x8023AB64: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_4;
    // 0x8023AB64: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x8023AB68: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023AB6C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023AB70: j           L_8023ABA8
    // 0x8023AB74: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8023ABA8;
    // 0x8023AB74: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8023AB78:
    // 0x8023AB78: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8023AB7C: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x8023AB80: lh          $a3, 0x48($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X48);
    // 0x8023AB84: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023AB88: jal         0x8004DA90
    // 0x8023AB8C: sb          $v0, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_5;
    // 0x8023AB8C: sb          $v0, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r2;
    after_5:
    // 0x8023AB90: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x8023AB94: lhu         $v1, 0x4E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X4E);
    // 0x8023AB98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023AB9C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023ABA0: jal         0x8005044C
    // 0x8023ABA4: sh          $v0, 0x46($a0)
    MEM_H(0X46, ctx->r4) = ctx->r2;
    func_8005044C_2B84C(rdram, ctx);
        goto after_6;
    // 0x8023ABA4: sh          $v0, 0x46($a0)
    MEM_H(0X46, ctx->r4) = ctx->r2;
    after_6:
L_8023ABA8:
    // 0x8023ABA8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023ABAC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023ABB0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023ABB4: jr          $ra
    // 0x8023ABB8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023ABB8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802303DC_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802303DC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802303E0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802303E4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802303E8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802303EC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802303F0: lbu         $a0, 0x8($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X8);
    // 0x802303F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802303F8: beq         $a0, $v0, L_802304A0
    if (ctx->r4 == ctx->r2) {
        // 0x802303FC: addu        $s1, $a2, $zero
        ctx->r17 = ADD32(ctx->r6, 0);
            goto L_802304A0;
    }
    // 0x802303FC: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x80230400: slti        $v0, $a0, 0x2
    ctx->r2 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    // 0x80230404: beq         $v0, $zero, L_802304F8
    if (ctx->r2 == 0) {
        // 0x80230408: nop
    
            goto L_802304F8;
    }
    // 0x80230408: nop

    // 0x8023040C: bne         $a0, $zero, L_802304F8
    if (ctx->r4 != 0) {
        // 0x80230410: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802304F8;
    }
    // 0x80230410: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230414: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80230418: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8023041C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80230420: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80230424: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80230428: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8023042C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80230430: lw          $v0, 0x3834($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3834);
    // 0x80230434: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80230438: jal         0x8004D5D4
    // 0x8023043C: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8023043C: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    after_0:
    // 0x80230440: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80230444: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80230448: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x8023044C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80230450: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80230454: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80230458: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8023045C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80230460: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80230464: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x80230468: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8023046C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80230470: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80230474: lhu         $v1, 0x3848($at)
    ctx->r3 = MEM_HU(ctx->r1, 0X3848);
    // 0x80230478: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8023047C: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x80230480: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80230484: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x80230488: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
    // 0x8023048C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80230490: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80230494: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80230498: j           L_802304F8
    // 0x8023049C: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
        goto L_802304F8;
    // 0x8023049C: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
L_802304A0:
    // 0x802304A0: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x802304A4: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x802304A8: bne         $v1, $v0, L_802304F8
    if (ctx->r3 != ctx->r2) {
        // 0x802304AC: nop
    
            goto L_802304F8;
    }
    // 0x802304AC: nop

    // 0x802304B0: lw          $v0, 0x10($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X10);
    // 0x802304B4: bne         $v0, $a0, L_802304F8
    if (ctx->r2 != ctx->r4) {
        // 0x802304B8: nop
    
            goto L_802304F8;
    }
    // 0x802304B8: nop

    // 0x802304BC: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x802304C0: bne         $v0, $zero, L_802304E8
    if (ctx->r2 != 0) {
        // 0x802304C4: addiu       $v0, $zero, 0x800
        ctx->r2 = ADD32(0, 0X800);
            goto L_802304E8;
    }
    // 0x802304C4: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x802304C8: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x802304CC: addiu       $v1, $zero, 0x400
    ctx->r3 = ADD32(0, 0X400);
    // 0x802304D0: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x802304D4: addiu       $v0, $v0, -0x28
    ctx->r2 = ADD32(ctx->r2, -0X28);
    // 0x802304D8: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x802304DC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802304E0: j           L_802304EC
    // 0x802304E4: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
        goto L_802304EC;
    // 0x802304E4: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
L_802304E8:
    // 0x802304E8: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_802304EC:
    // 0x802304EC: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802304F0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802304F4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_802304F8:
    // 0x802304F8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802304FC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80230500: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80230504: jr          $ra
    // 0x80230508: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80230508: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80226428_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226428: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022642C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226430: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226434: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226438: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x8022643C: bne         $v0, $zero, L_80226480
    if (ctx->r2 != 0) {
        // 0x80226440: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80226480;
    }
    // 0x80226440: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226444: jal         0x8004F144
    // 0x80226448: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80226448: nop

    after_0:
    // 0x8022644C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80226450: beq         $a0, $zero, L_8022647C
    if (ctx->r4 == 0) {
        // 0x80226454: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022647C;
    }
    // 0x80226454: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226458: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x8022645C: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x80226460: addiu       $v0, $zero, 0x1C
    ctx->r2 = ADD32(0, 0X1C);
    // 0x80226464: sb          $v0, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r2;
    // 0x80226468: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022646C: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
    // 0x80226470: lbu         $v0, 0x1($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X1);
    // 0x80226474: sb          $zero, 0xD($a0)
    MEM_B(0XD, ctx->r4) = 0;
    // 0x80226478: sb          $v0, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r2;
L_8022647C:
    // 0x8022647C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80226480:
    // 0x80226480: jal         0x80226BC4
    // 0x80226484: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_80226BC4_ovl28(rdram, ctx);
        goto after_1;
    // 0x80226484: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_1:
    // 0x80226488: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022648C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226490: jr          $ra
    // 0x80226494: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226494: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80232EA8_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232EA8: lb          $v0, 0xA7($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XA7);
    // 0x80232EAC: bgez        $v0, L_80232EDC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80232EB0: nop
    
            goto L_80232EDC;
    }
    // 0x80232EB0: nop

    // 0x80232EB4: lhu         $v0, 0x34C($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X34C);
    // 0x80232EB8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80232EBC: sh          $v0, 0x34C($a0)
    MEM_H(0X34C, ctx->r4) = ctx->r2;
    // 0x80232EC0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80232EC4: bne         $v0, $zero, L_80232EDC
    if (ctx->r2 != 0) {
        // 0x80232EC8: nop
    
            goto L_80232EDC;
    }
    // 0x80232EC8: nop

    // 0x80232ECC: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x80232ED0: sb          $zero, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = 0;
    // 0x80232ED4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232ED8: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
L_80232EDC:
    // 0x80232EDC: jr          $ra
    // 0x80232EE0: nop

    TRACE_RETURN()
    return;
    // 0x80232EE0: nop

;}
RECOMP_FUNC void func_8024D580_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024D580: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8024D584: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8024D588: jal         0x8004F62C
    // 0x8024D58C: nop

    func_8004F62C_2AA2C(rdram, ctx);
        goto after_0;
    // 0x8024D58C: nop

    after_0:
    // 0x8024D590: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8024D594: jr          $ra
    // 0x8024D598: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8024D598: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80234A6C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234A6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80234A70: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80234A74: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80234A78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80234A7C: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x80234A80: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80234A84: beq         $v1, $v0, L_80234A98
    if (ctx->r3 == ctx->r2) {
        // 0x80234A88: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80234A98;
    }
    // 0x80234A88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80234A8C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80234A90: bne         $v1, $v0, L_80234AF0
    if (ctx->r3 != ctx->r2) {
        // 0x80234A94: nop
    
            goto L_80234AF0;
    }
    // 0x80234A94: nop

L_80234A98:
    // 0x80234A98: lbu         $v0, 0x3B4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3B4);
    // 0x80234A9C: lbu         $v1, 0xAD($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XAD);
    // 0x80234AA0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80234AA4: sb          $a0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r4;
    // 0x80234AA8: andi        $v0, $v0, 0xFB
    ctx->r2 = ctx->r2 & 0XFB;
    // 0x80234AAC: sb          $v0, 0x3B4($s0)
    MEM_B(0X3B4, ctx->r16) = ctx->r2;
    // 0x80234AB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80234AB4: beq         $v1, $v0, L_80234AD4
    if (ctx->r3 == ctx->r2) {
        // 0x80234AB8: nop
    
            goto L_80234AD4;
    }
    // 0x80234AB8: nop

    // 0x80234ABC: sb          $a0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r4;
    // 0x80234AC0: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x80234AC4: sb          $a0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r4;
    // 0x80234AC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234ACC: jal         0x80050294
    // 0x80234AD0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80234AD0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
L_80234AD4:
    // 0x80234AD4: lbu         $v1, 0x3B4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3B4);
    // 0x80234AD8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80234ADC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80234AE0: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x80234AE4: sh          $zero, 0x1D8($s0)
    MEM_H(0X1D8, ctx->r16) = 0;
    // 0x80234AE8: ori         $v1, $v1, 0x20
    ctx->r3 = ctx->r3 | 0X20;
    // 0x80234AEC: sb          $v1, 0x3B4($s0)
    MEM_B(0X3B4, ctx->r16) = ctx->r3;
L_80234AF0:
    // 0x80234AF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80234AF4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80234AF8: jr          $ra
    // 0x80234AFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80234AFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8024A520_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024A520: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8024A524: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x8024A528: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8024A52C: beq         $v1, $a0, L_8024A5B4
    if (ctx->r3 == ctx->r4) {
        // 0x8024A530: addiu       $sp, $sp, -0x8
        ctx->r29 = ADD32(ctx->r29, -0X8);
            goto L_8024A5B4;
    }
    // 0x8024A530: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8024A534: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8024A538: beq         $v0, $zero, L_8024A5EC
    if (ctx->r2 == 0) {
        // 0x8024A53C: nop
    
            goto L_8024A5EC;
    }
    // 0x8024A53C: nop

    // 0x8024A540: bne         $v1, $zero, L_8024A5EC
    if (ctx->r3 != 0) {
        // 0x8024A544: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8024A5EC;
    }
    // 0x8024A544: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024A548: lb          $v1, 0xC($a1)
    ctx->r3 = MEM_B(ctx->r5, 0XC);
    // 0x8024A54C: beq         $v1, $a0, L_8024A590
    if (ctx->r3 == ctx->r4) {
        // 0x8024A550: sb          $v0, 0x9($a1)
        MEM_B(0X9, ctx->r5) = ctx->r2;
            goto L_8024A590;
    }
    // 0x8024A550: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x8024A554: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8024A558: beql        $v0, $zero, L_8024A570
    if (ctx->r2 == 0) {
        // 0x8024A55C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8024A570;
    }
    goto skip_0;
    // 0x8024A55C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8024A560: beq         $v1, $zero, L_8024A580
    if (ctx->r3 == 0) {
        // 0x8024A564: lui         $v0, 0x2E00
        ctx->r2 = S32(0X2E00 << 16);
            goto L_8024A580;
    }
    // 0x8024A564: lui         $v0, 0x2E00
    ctx->r2 = S32(0X2E00 << 16);
    // 0x8024A568: j           L_8024A5B4
    // 0x8024A56C: nop

        goto L_8024A5B4;
    // 0x8024A56C: nop

L_8024A570:
    // 0x8024A570: beq         $v1, $v0, L_8024A5A4
    if (ctx->r3 == ctx->r2) {
        // 0x8024A574: lui         $v0, 0x2E00
        ctx->r2 = S32(0X2E00 << 16);
            goto L_8024A5A4;
    }
    // 0x8024A574: lui         $v0, 0x2E00
    ctx->r2 = S32(0X2E00 << 16);
    // 0x8024A578: j           L_8024A5B4
    // 0x8024A57C: nop

        goto L_8024A5B4;
    // 0x8024A57C: nop

L_8024A580:
    // 0x8024A580: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x8024A584: sw          $v0, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r2;
    // 0x8024A588: j           L_8024A5B0
    // 0x8024A58C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_8024A5B0;
    // 0x8024A58C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_8024A590:
    // 0x8024A590: lui         $v0, 0x2E00
    ctx->r2 = S32(0X2E00 << 16);
    // 0x8024A594: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x8024A598: sw          $v0, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r2;
    // 0x8024A59C: j           L_8024A5B0
    // 0x8024A5A0: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
        goto L_8024A5B0;
    // 0x8024A5A0: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
L_8024A5A4:
    // 0x8024A5A4: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x8024A5A8: sw          $v0, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r2;
    // 0x8024A5AC: addiu       $v0, $zero, 0x808
    ctx->r2 = ADD32(0, 0X808);
L_8024A5B0:
    // 0x8024A5B0: sh          $v0, 0x26($a1)
    MEM_H(0X26, ctx->r5) = ctx->r2;
L_8024A5B4:
    // 0x8024A5B4: lh          $v0, 0x24($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X24);
    // 0x8024A5B8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8024A5BC: slti        $v0, $v0, 0x20
    ctx->r2 = SIGNED(ctx->r2) < 0X20 ? 1 : 0;
    // 0x8024A5C0: bne         $v0, $zero, L_8024A5D8
    if (ctx->r2 != 0) {
        // 0x8024A5C4: addiu       $a0, $a0, 0x6
        ctx->r4 = ADD32(ctx->r4, 0X6);
            goto L_8024A5D8;
    }
    // 0x8024A5C4: addiu       $a0, $a0, 0x6
    ctx->r4 = ADD32(ctx->r4, 0X6);
    // 0x8024A5C8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8024A5CC: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x8024A5D0: j           L_8024A5EC
    // 0x8024A5D4: sh          $zero, 0x24($a1)
    MEM_H(0X24, ctx->r5) = 0;
        goto L_8024A5EC;
    // 0x8024A5D4: sh          $zero, 0x24($a1)
    MEM_H(0X24, ctx->r5) = 0;
L_8024A5D8:
    // 0x8024A5D8: lhu         $v0, 0x26($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X26);
    // 0x8024A5DC: lw          $v1, 0x18($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X18);
    // 0x8024A5E0: sh          $a0, 0x24($a1)
    MEM_H(0X24, ctx->r5) = ctx->r4;
    // 0x8024A5E4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024A5E8: sw          $v1, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r3;
L_8024A5EC:
    // 0x8024A5EC: jr          $ra
    // 0x8024A5F0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x8024A5F0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
