#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80226D40_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226D40: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80226D44: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80226D48: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80226D4C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80226D50: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x80226D54: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226D58: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x80226D5C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80226D60: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80226D64: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80226D68: lbu         $a0, 0x43A($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X43A);
    // 0x80226D6C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226D70: bne         $a0, $v0, L_80226D84
    if (ctx->r4 != ctx->r2) {
        // 0x80226D74: addiu       $s4, $s1, 0x3E0
        ctx->r20 = ADD32(ctx->r17, 0X3E0);
            goto L_80226D84;
    }
    // 0x80226D74: addiu       $s4, $s1, 0x3E0
    ctx->r20 = ADD32(ctx->r17, 0X3E0);
    // 0x80226D78: lb          $v1, 0xA7($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XA7);
    // 0x80226D7C: j           L_80226DAC
    // 0x80226D80: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80226DAC;
    // 0x80226D80: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80226D84:
    // 0x80226D84: lb          $v0, 0xE($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XE);
    // 0x80226D88: beq         $v0, $a0, L_80226D9C
    if (ctx->r2 == ctx->r4) {
        // 0x80226D8C: nop
    
            goto L_80226D9C;
    }
    // 0x80226D8C: nop

    // 0x80226D90: lb          $v0, 0xD($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XD);
    // 0x80226D94: bne         $v0, $a0, L_80226DC4
    if (ctx->r2 != ctx->r4) {
        // 0x80226D98: addiu       $v1, $zero, 0x3C
        ctx->r3 = ADD32(0, 0X3C);
            goto L_80226DC4;
    }
    // 0x80226D98: addiu       $v1, $zero, 0x3C
    ctx->r3 = ADD32(0, 0X3C);
L_80226D9C:
    // 0x80226D9C: jal         0x80053ED8
    // 0x80226DA0: nop

    func_80053ED8_2F2D8(rdram, ctx);
        goto after_0;
    // 0x80226DA0: nop

    after_0:
    // 0x80226DA4: lb          $v1, 0xA7($v0)
    ctx->r3 = MEM_B(ctx->r2, 0XA7);
    // 0x80226DA8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80226DAC:
    // 0x80226DAC: bne         $v1, $v0, L_80226DD8
    if (ctx->r3 != ctx->r2) {
        // 0x80226DB0: nop
    
            goto L_80226DD8;
    }
    // 0x80226DB0: nop

    // 0x80226DB4: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80226DB8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226DBC: j           L_80226DD8
    // 0x80226DC0: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_80226DD8;
    // 0x80226DC0: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_80226DC4:
    // 0x80226DC4: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80226DC8: sh          $v1, 0x430($s1)
    MEM_H(0X430, ctx->r17) = ctx->r3;
    // 0x80226DCC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226DD0: j           L_80227170
    // 0x80226DD4: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_80227170;
    // 0x80226DD4: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_80226DD8:
    // 0x80226DD8: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x80226DDC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80226DE0: bnel        $v1, $v0, L_80227170
    if (ctx->r3 != ctx->r2) {
        // 0x80226DE4: sh          $zero, 0x50($s4)
        MEM_H(0X50, ctx->r20) = 0;
            goto L_80227170;
    }
    goto skip_0;
    // 0x80226DE4: sh          $zero, 0x50($s4)
    MEM_H(0X50, ctx->r20) = 0;
    skip_0:
    // 0x80226DE8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80226DEC: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x80226DF0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80226DF4: sll         $v0, $a0, 24
    ctx->r2 = S32(ctx->r4 << 24);
L_80226DF8:
    // 0x80226DF8: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80226DFC: sll         $v1, $v0, 4
    ctx->r3 = S32(ctx->r2 << 4);
    // 0x80226E00: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80226E04: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80226E08: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80226E0C: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80226E10: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80226E14: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80226E18: lb          $v0, -0x420($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X420);
    // 0x80226E1C: beql        $v0, $zero, L_80226E44
    if (ctx->r2 == 0) {
        // 0x80226E20: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_80226E44;
    }
    goto skip_1;
    // 0x80226E20: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    skip_1:
    // 0x80226E24: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226E28: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80226E2C: lbu         $v1, -0x41E($at)
    ctx->r3 = MEM_BU(ctx->r1, -0X41E);
    // 0x80226E30: beql        $v1, $a2, L_80226E38
    if (ctx->r3 == ctx->r6) {
        // 0x80226E34: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_80226E38;
    }
    goto skip_2;
    // 0x80226E34: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_2:
L_80226E38:
    // 0x80226E38: beql        $v1, $a1, L_80226E40
    if (ctx->r3 == ctx->r5) {
        // 0x80226E3C: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_80226E40;
    }
    goto skip_3;
    // 0x80226E3C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_3:
L_80226E40:
    // 0x80226E40: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
L_80226E44:
    // 0x80226E44: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80226E48: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80226E4C: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80226E50: slti        $v0, $v0, 0x10
    ctx->r2 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x80226E54: bne         $v0, $zero, L_80226DF8
    if (ctx->r2 != 0) {
        // 0x80226E58: sll         $v0, $a0, 24
        ctx->r2 = S32(ctx->r4 << 24);
            goto L_80226DF8;
    }
    // 0x80226E58: sll         $v0, $a0, 24
    ctx->r2 = S32(ctx->r4 << 24);
    // 0x80226E5C: sll         $v0, $s0, 24
    ctx->r2 = S32(ctx->r16 << 24);
    // 0x80226E60: sra         $s2, $v0, 24
    ctx->r18 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80226E64: sll         $v0, $s3, 24
    ctx->r2 = S32(ctx->r19 << 24);
    // 0x80226E68: lbu         $v1, 0x5C($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X5C);
    // 0x80226E6C: sra         $s0, $v0, 24
    ctx->r16 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80226E70: addu        $v0, $s2, $s0
    ctx->r2 = ADD32(ctx->r18, ctx->r16);
    // 0x80226E74: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80226E78: beq         $v0, $zero, L_8022716C
    if (ctx->r2 == 0) {
        // 0x80226E7C: addiu       $s3, $zero, 0xFF
        ctx->r19 = ADD32(0, 0XFF);
            goto L_8022716C;
    }
    // 0x80226E7C: addiu       $s3, $zero, 0xFF
    ctx->r19 = ADD32(0, 0XFF);
    // 0x80226E80: lbu         $a0, 0x5A($s4)
    ctx->r4 = MEM_BU(ctx->r20, 0X5A);
    // 0x80226E84: beq         $a0, $s3, L_80226E94
    if (ctx->r4 == ctx->r19) {
        // 0x80226E88: nop
    
            goto L_80226E94;
    }
    // 0x80226E88: nop

    // 0x80226E8C: jal         0x80053ED8
    // 0x80226E90: nop

    func_80053ED8_2F2D8(rdram, ctx);
        goto after_1;
    // 0x80226E90: nop

    after_1:
L_80226E94:
    // 0x80226E94: bne         $s2, $s0, L_80226FE0
    if (ctx->r18 != ctx->r16) {
        // 0x80226E98: slt         $v0, $s0, $s2
        ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r18) ? 1 : 0;
            goto L_80226FE0;
    }
    // 0x80226E98: slt         $v0, $s0, $s2
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x80226E9C: lhu         $v0, 0x52($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X52);
    // 0x80226EA0: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80226EA4: beq         $v0, $zero, L_80226F54
    if (ctx->r2 == 0) {
        // 0x80226EA8: nop
    
            goto L_80226F54;
    }
    // 0x80226EA8: nop

    // 0x80226EAC: jal         0x8004EEAC
    // 0x80226EB0: nop

    func_8004EEAC_2A2AC(rdram, ctx);
        goto after_2;
    // 0x80226EB0: nop

    after_2:
    // 0x80226EB4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80226EB8: beq         $s0, $zero, L_8022716C
    if (ctx->r16 == 0) {
        // 0x80226EBC: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8022716C;
    }
    // 0x80226EBC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80226EC0: addiu       $v0, $zero, 0x37
    ctx->r2 = ADD32(0, 0X37);
    // 0x80226EC4: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    // 0x80226EC8: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80226ECC: sb          $v1, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r3;
    // 0x80226ED0: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
    // 0x80226ED4: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x80226ED8: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x80226EDC: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x80226EE0: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x80226EE4: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    // 0x80226EE8: lbu         $a0, 0x5A($s4)
    ctx->r4 = MEM_BU(ctx->r20, 0X5A);
    // 0x80226EEC: beq         $a0, $s3, L_80226F30
    if (ctx->r4 == ctx->r19) {
        // 0x80226EF0: nop
    
            goto L_80226F30;
    }
    // 0x80226EF0: nop

    // 0x80226EF4: jal         0x80053ED8
    // 0x80226EF8: nop

    func_80053ED8_2F2D8(rdram, ctx);
        goto after_3;
    // 0x80226EF8: nop

    after_3:
    // 0x80226EFC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80226F00: lhu         $v0, 0x56($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X56);
    // 0x80226F04: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80226F08: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80226F0C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80226F10: lhu         $v0, 0x1B8($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X1B8);
    // 0x80226F14: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x80226F18: lhu         $v0, 0x1BA($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X1BA);
    // 0x80226F1C: addiu       $v0, $v0, 0xC0
    ctx->r2 = ADD32(ctx->r2, 0XC0);
    // 0x80226F20: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80226F24: lhu         $v0, 0x1BC($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X1BC);
    // 0x80226F28: j           L_80227148
    // 0x80226F2C: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
        goto L_80227148;
    // 0x80226F2C: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
L_80226F30:
    // 0x80226F30: lhu         $v0, 0x56($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X56);
    // 0x80226F34: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80226F38: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80226F3C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80226F40: lhu         $v0, 0x1E0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X1E0);
    // 0x80226F44: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x80226F48: lhu         $v0, 0x1E2($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X1E2);
    // 0x80226F4C: j           L_8022713C
    // 0x80226F50: addiu       $v0, $v0, 0xC0
    ctx->r2 = ADD32(ctx->r2, 0XC0);
        goto L_8022713C;
    // 0x80226F50: addiu       $v0, $v0, 0xC0
    ctx->r2 = ADD32(ctx->r2, 0XC0);
L_80226F54:
    // 0x80226F54: jal         0x8004EEAC
    // 0x80226F58: nop

    func_8004EEAC_2A2AC(rdram, ctx);
        goto after_4;
    // 0x80226F58: nop

    after_4:
    // 0x80226F5C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80226F60: beq         $s0, $zero, L_8022716C
    if (ctx->r16 == 0) {
        // 0x80226F64: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022716C;
    }
    // 0x80226F64: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226F68: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80226F6C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80226F70: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80226F74: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x80226F78: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x80226F7C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80226F80: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
    // 0x80226F84: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x80226F88: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x80226F8C: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x80226F90: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x80226F94: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    // 0x80226F98: lbu         $a0, 0x5A($s4)
    ctx->r4 = MEM_BU(ctx->r20, 0X5A);
    // 0x80226F9C: beq         $a0, $s3, L_8022711C
    if (ctx->r4 == ctx->r19) {
        // 0x80226FA0: nop
    
            goto L_8022711C;
    }
    // 0x80226FA0: nop

    // 0x80226FA4: jal         0x80053ED8
    // 0x80226FA8: nop

    func_80053ED8_2F2D8(rdram, ctx);
        goto after_5;
    // 0x80226FA8: nop

    after_5:
    // 0x80226FAC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80226FB0: lhu         $v0, 0x56($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X56);
    // 0x80226FB4: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80226FB8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80226FBC: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80226FC0: lhu         $v0, 0x1B8($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X1B8);
    // 0x80226FC4: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x80226FC8: lhu         $v0, 0x1BA($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X1BA);
    // 0x80226FCC: addiu       $v0, $v0, 0x100
    ctx->r2 = ADD32(ctx->r2, 0X100);
    // 0x80226FD0: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80226FD4: lhu         $v0, 0x1BC($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X1BC);
    // 0x80226FD8: j           L_80227148
    // 0x80226FDC: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
        goto L_80227148;
    // 0x80226FDC: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
L_80226FE0:
    // 0x80226FE0: beq         $v0, $zero, L_80227090
    if (ctx->r2 == 0) {
        // 0x80226FE4: nop
    
            goto L_80227090;
    }
    // 0x80226FE4: nop

    // 0x80226FE8: jal         0x8004EEAC
    // 0x80226FEC: nop

    func_8004EEAC_2A2AC(rdram, ctx);
        goto after_6;
    // 0x80226FEC: nop

    after_6:
    // 0x80226FF0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80226FF4: beq         $s0, $zero, L_8022716C
    if (ctx->r16 == 0) {
        // 0x80226FF8: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8022716C;
    }
    // 0x80226FF8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80226FFC: addiu       $v0, $zero, 0x37
    ctx->r2 = ADD32(0, 0X37);
    // 0x80227000: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    // 0x80227004: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80227008: sb          $v1, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r3;
    // 0x8022700C: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
    // 0x80227010: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x80227014: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x80227018: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x8022701C: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x80227020: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    // 0x80227024: lbu         $a0, 0x5A($s4)
    ctx->r4 = MEM_BU(ctx->r20, 0X5A);
    // 0x80227028: beq         $a0, $s3, L_8022706C
    if (ctx->r4 == ctx->r19) {
        // 0x8022702C: nop
    
            goto L_8022706C;
    }
    // 0x8022702C: nop

    // 0x80227030: jal         0x80053ED8
    // 0x80227034: nop

    func_80053ED8_2F2D8(rdram, ctx);
        goto after_7;
    // 0x80227034: nop

    after_7:
    // 0x80227038: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022703C: lhu         $v0, 0x56($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X56);
    // 0x80227040: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80227044: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80227048: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022704C: lhu         $v0, 0x1B8($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X1B8);
    // 0x80227050: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x80227054: lhu         $v0, 0x1BA($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X1BA);
    // 0x80227058: addiu       $v0, $v0, 0xC0
    ctx->r2 = ADD32(ctx->r2, 0XC0);
    // 0x8022705C: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80227060: lhu         $v0, 0x1BC($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X1BC);
    // 0x80227064: j           L_80227148
    // 0x80227068: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
        goto L_80227148;
    // 0x80227068: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
L_8022706C:
    // 0x8022706C: lhu         $v0, 0x56($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X56);
    // 0x80227070: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80227074: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80227078: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022707C: lhu         $v0, 0x1E0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X1E0);
    // 0x80227080: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x80227084: lhu         $v0, 0x1E2($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X1E2);
    // 0x80227088: j           L_8022713C
    // 0x8022708C: addiu       $v0, $v0, 0xC0
    ctx->r2 = ADD32(ctx->r2, 0XC0);
        goto L_8022713C;
    // 0x8022708C: addiu       $v0, $v0, 0xC0
    ctx->r2 = ADD32(ctx->r2, 0XC0);
L_80227090:
    // 0x80227090: jal         0x8004EEAC
    // 0x80227094: nop

    func_8004EEAC_2A2AC(rdram, ctx);
        goto after_8;
    // 0x80227094: nop

    after_8:
    // 0x80227098: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022709C: beq         $s0, $zero, L_8022716C
    if (ctx->r16 == 0) {
        // 0x802270A0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022716C;
    }
    // 0x802270A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802270A4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x802270A8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802270AC: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x802270B0: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x802270B4: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x802270B8: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x802270BC: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
    // 0x802270C0: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x802270C4: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x802270C8: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x802270CC: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x802270D0: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    // 0x802270D4: lbu         $a0, 0x5A($s4)
    ctx->r4 = MEM_BU(ctx->r20, 0X5A);
    // 0x802270D8: beq         $a0, $s3, L_8022711C
    if (ctx->r4 == ctx->r19) {
        // 0x802270DC: nop
    
            goto L_8022711C;
    }
    // 0x802270DC: nop

    // 0x802270E0: jal         0x80053ED8
    // 0x802270E4: nop

    func_80053ED8_2F2D8(rdram, ctx);
        goto after_9;
    // 0x802270E4: nop

    after_9:
    // 0x802270E8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802270EC: lhu         $v0, 0x56($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X56);
    // 0x802270F0: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x802270F4: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x802270F8: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x802270FC: lhu         $v0, 0x1B8($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X1B8);
    // 0x80227100: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x80227104: lhu         $v0, 0x1BA($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X1BA);
    // 0x80227108: addiu       $v0, $v0, 0x100
    ctx->r2 = ADD32(ctx->r2, 0X100);
    // 0x8022710C: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80227110: lhu         $v0, 0x1BC($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X1BC);
    // 0x80227114: j           L_80227148
    // 0x80227118: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
        goto L_80227148;
    // 0x80227118: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
L_8022711C:
    // 0x8022711C: lhu         $v0, 0x56($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X56);
    // 0x80227120: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80227124: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80227128: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022712C: lhu         $v0, 0x1E0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X1E0);
    // 0x80227130: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x80227134: lhu         $v0, 0x1E2($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X1E2);
    // 0x80227138: addiu       $v0, $v0, 0x100
    ctx->r2 = ADD32(ctx->r2, 0X100);
L_8022713C:
    // 0x8022713C: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80227140: lhu         $v0, 0x1E4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X1E4);
    // 0x80227144: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
L_80227148:
    // 0x80227148: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x8022714C: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x80227150: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x80227154: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227158: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022715C: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80227160: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80227164: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80227168: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
L_8022716C:
    // 0x8022716C: sh          $zero, 0x50($s4)
    MEM_H(0X50, ctx->r20) = 0;
L_80227170:
    // 0x80227170: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80227174: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80227178: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022717C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80227180: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227184: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227188: jr          $ra
    // 0x8022718C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022718C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80228C94_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228C94: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80228C98: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80228C9C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228CA0: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80228CA4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80228CA8: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80228CAC: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x80228CB0: beq         $v0, $zero, L_80228E88
    if (ctx->r2 == 0) {
        // 0x80228CB4: addiu       $s1, $s0, 0x328
        ctx->r17 = ADD32(ctx->r16, 0X328);
            goto L_80228E88;
    }
    // 0x80228CB4: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x80228CB8: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80228CBC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80228CC0: addu        $at, $at, $v0
    gpr jr_addend_80228CC8 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80228CC4: lw          $v0, -0x71E8($at)
    ctx->r2 = ADD32(ctx->r1, -0X71E8);
    // 0x80228CC8: jr          $v0
    // 0x80228CCC: nop

    switch (jr_addend_80228CC8 >> 2) {
        case 0: goto L_80228CD0; break;
        case 1: goto L_80228D20; break;
        case 2: goto L_80228D60; break;
        case 3: goto L_80228D84; break;
        case 4: goto L_80228DE8; break;
        case 5: goto L_80228E64; break;
        default: switch_error(__func__, 0x80228CC8, 0x80238E18);
    }
    // 0x80228CCC: nop

L_80228CD0:
    // 0x80228CD0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228CD4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80228CD8: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x80228CDC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80228CE0: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80228CE4: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
    // 0x80228CE8: andi        $v0, $v0, 0xFFDF
    ctx->r2 = ctx->r2 & 0XFFDF;
    // 0x80228CEC: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x80228CF0: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80228CF4: lh          $v1, 0x6E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X6E);
    // 0x80228CF8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80228CFC: bgtz        $v1, L_80228D10
    if (SIGNED(ctx->r3) > 0) {
        // 0x80228D00: sh          $v0, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r2;
            goto L_80228D10;
    }
    // 0x80228D00: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80228D04: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80228D08: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x80228D0C: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_80228D10:
    // 0x80228D10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228D14: addiu       $a1, $zero, 0x460
    ctx->r5 = ADD32(0, 0X460);
    // 0x80228D18: j           L_80228D48
    // 0x80228D1C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
        goto L_80228D48;
    // 0x80228D1C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_80228D20:
    // 0x80228D20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228D24: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80228D28: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80228D2C: addiu       $v0, $zero, 0x190
    ctx->r2 = ADD32(0, 0X190);
    // 0x80228D30: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80228D34: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80228D38: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80228D3C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80228D40: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80228D44: addiu       $a2, $zero, -0x960
    ctx->r6 = ADD32(0, -0X960);
L_80228D48:
    // 0x80228D48: jal         0x8004DA90
    // 0x80228D4C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x80228D4C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x80228D50: jal         0x80040F30
    // 0x80228D54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_1;
    // 0x80228D54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80228D58: j           L_80228E88
    // 0x80228D5C: nop

        goto L_80228E88;
    // 0x80228D5C: nop

L_80228D60:
    // 0x80228D60: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80228D64: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80228D68: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80228D6C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228D70: bgez        $v0, L_80228D84
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80228D74: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80228D84;
    }
    // 0x80228D74: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80228D78: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80228D7C: addiu       $v0, $zero, 0x158
    ctx->r2 = ADD32(0, 0X158);
    // 0x80228D80: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
L_80228D84:
    // 0x80228D84: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80228D88: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x80228D8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228D90: jal         0x8004DA90
    // 0x80228D94: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x80228D94: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x80228D98: jal         0x80040F30
    // 0x80228D9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_3;
    // 0x80228D9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80228DA0: beq         $v0, $zero, L_80228E88
    if (ctx->r2 == 0) {
        // 0x80228DA4: sw          $v0, 0x5C($s1)
        MEM_W(0X5C, ctx->r17) = ctx->r2;
            goto L_80228E88;
    }
    // 0x80228DA4: sw          $v0, 0x5C($s1)
    MEM_W(0X5C, ctx->r17) = ctx->r2;
    // 0x80228DA8: andi        $v0, $v0, 0xF00
    ctx->r2 = ctx->r2 & 0XF00;
    // 0x80228DAC: bnel        $v0, $zero, L_80228DB4
    if (ctx->r2 != 0) {
        // 0x80228DB0: sh          $zero, 0x44($s0)
        MEM_H(0X44, ctx->r16) = 0;
            goto L_80228DB4;
    }
    goto skip_0;
    // 0x80228DB0: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    skip_0:
L_80228DB4:
    // 0x80228DB4: lw          $v0, 0x5C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X5C);
    // 0x80228DB8: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x80228DBC: beq         $v0, $zero, L_80228E88
    if (ctx->r2 == 0) {
        // 0x80228DC0: addiu       $v0, $zero, 0x1F
        ctx->r2 = ADD32(0, 0X1F);
            goto L_80228E88;
    }
    // 0x80228DC0: addiu       $v0, $zero, 0x1F
    ctx->r2 = ADD32(0, 0X1F);
    // 0x80228DC4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80228DC8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80228DCC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80228DD0: addiu       $v0, $zero, 0xA0
    ctx->r2 = ADD32(0, 0XA0);
    // 0x80228DD4: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80228DD8: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80228DDC: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80228DE0: j           L_80228E88
    // 0x80228DE4: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
        goto L_80228E88;
    // 0x80228DE4: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_80228DE8:
    // 0x80228DE8: lh          $v0, 0x4($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4);
    // 0x80228DEC: beq         $v0, $zero, L_80228DFC
    if (ctx->r2 == 0) {
        // 0x80228DF0: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80228DFC;
    }
    // 0x80228DF0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80228DF4: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80228DF8: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_80228DFC:
    // 0x80228DFC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228E00: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80228E04: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80228E08: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80228E0C: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x80228E10: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80228E14: sll         $a2, $v1, 24
    ctx->r6 = S32(ctx->r3 << 24);
    // 0x80228E18: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80228E1C: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x80228E20: jal         0x8004DA90
    // 0x80228E24: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_4;
    // 0x80228E24: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
    after_4:
    // 0x80228E28: jal         0x80040F30
    // 0x80228E2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_5;
    // 0x80228E2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80228E30: beq         $v0, $zero, L_80228E88
    if (ctx->r2 == 0) {
        // 0x80228E34: sw          $v0, 0x5C($s1)
        MEM_W(0X5C, ctx->r17) = ctx->r2;
            goto L_80228E88;
    }
    // 0x80228E34: sw          $v0, 0x5C($s1)
    MEM_W(0X5C, ctx->r17) = ctx->r2;
    // 0x80228E38: andi        $v0, $v0, 0xF00
    ctx->r2 = ctx->r2 & 0XF00;
    // 0x80228E3C: bnel        $v0, $zero, L_80228E44
    if (ctx->r2 != 0) {
        // 0x80228E40: sh          $zero, 0x44($s0)
        MEM_H(0X44, ctx->r16) = 0;
            goto L_80228E44;
    }
    goto skip_1;
    // 0x80228E40: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    skip_1:
L_80228E44:
    // 0x80228E44: lw          $v0, 0x5C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X5C);
    // 0x80228E48: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x80228E4C: beq         $v0, $zero, L_80228E88
    if (ctx->r2 == 0) {
        // 0x80228E50: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80228E88;
    }
    // 0x80228E50: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80228E54: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80228E58: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80228E5C: j           L_80228E88
    // 0x80228E60: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
        goto L_80228E88;
    // 0x80228E60: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_80228E64:
    // 0x80228E64: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80228E68: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80228E6C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80228E70: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228E74: bgez        $v0, L_80228E88
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80228E78: nop
    
            goto L_80228E88;
    }
    // 0x80228E78: nop

    // 0x80228E7C: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80228E80: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80228E84: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_80228E88:
    // 0x80228E88: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80228E8C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80228E90: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80228E94: jr          $ra
    // 0x80228E98: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80228E98: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80233E1C_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233E1C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80233E20: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80233E24: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80233E28: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80233E2C: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80233E30: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80233E34: jal         0x8009A3B4
    // 0x80233E38: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80233E38: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_0:
    // 0x80233E3C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80233E40: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80233E44: jal         0x8009A3B4
    // 0x80233E48: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80233E48: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80233E4C: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x80233E50: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80233E54: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x80233E58: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80233E5C: bne         $v0, $zero, L_80233E74
    if (ctx->r2 != 0) {
        // 0x80233E60: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_80233E74;
    }
    // 0x80233E60: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80233E64: jal         0x8004F4F8
    // 0x80233E68: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_2;
    // 0x80233E68: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80233E6C: j           L_80233F58
    // 0x80233E70: nop

        goto L_80233F58;
    // 0x80233E70: nop

L_80233E74:
    // 0x80233E74: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80233E78: bne         $v1, $v0, L_80233E84
    if (ctx->r3 != ctx->r2) {
        // 0x80233E7C: addiu       $v0, $v1, 0x2
        ctx->r2 = ADD32(ctx->r3, 0X2);
            goto L_80233E84;
    }
    // 0x80233E7C: addiu       $v0, $v1, 0x2
    ctx->r2 = ADD32(ctx->r3, 0X2);
    // 0x80233E80: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80233E84:
    // 0x80233E84: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80233E88: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x80233E8C: lh          $a3, 0x48($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X48);
    // 0x80233E90: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80233E94: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80233E98: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80233E9C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80233EA0: lbu         $v1, -0x796C($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X796C);
    // 0x80233EA4: lbu         $t0, 0xA($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0XA);
    // 0x80233EA8: lhu         $v0, 0x9A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X9A);
    // 0x80233EAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80233EB0: sb          $v1, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r3;
    // 0x80233EB4: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80233EB8: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    // 0x80233EBC: lbu         $v1, -0x796B($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X796B);
    // 0x80233EC0: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80233EC4: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80233EC8: sh          $v0, 0x9A($s0)
    MEM_H(0X9A, ctx->r16) = ctx->r2;
    // 0x80233ECC: jal         0x8004DA90
    // 0x80233ED0: sb          $v1, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x80233ED0: sb          $v1, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r3;
    after_3:
    // 0x80233ED4: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x80233ED8: beq         $v0, $zero, L_80233EF4
    if (ctx->r2 == 0) {
        // 0x80233EDC: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80233EF4;
    }
    // 0x80233EDC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80233EE0: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80233EE4: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x80233EE8: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80233EEC: bne         $v0, $zero, L_80233F40
    if (ctx->r2 != 0) {
        // 0x80233EF0: nop
    
            goto L_80233F40;
    }
    // 0x80233EF0: nop

L_80233EF4:
    // 0x80233EF4: jal         0x8004F144
    // 0x80233EF8: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_4;
    // 0x80233EF8: nop

    after_4:
    // 0x80233EFC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80233F00: beq         $v1, $zero, L_80233F40
    if (ctx->r3 == 0) {
        // 0x80233F04: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80233F40;
    }
    // 0x80233F04: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80233F08: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80233F0C: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x80233F10: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x80233F14: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80233F18: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    // 0x80233F1C: sb          $zero, 0xC($v1)
    MEM_B(0XC, ctx->r3) = 0;
    // 0x80233F20: lhu         $v0, 0x90($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X90);
    // 0x80233F24: sh          $v0, 0x1C($v1)
    MEM_H(0X1C, ctx->r3) = ctx->r2;
    // 0x80233F28: lhu         $v0, 0x92($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X92);
    // 0x80233F2C: sh          $v0, 0x1E($v1)
    MEM_H(0X1E, ctx->r3) = ctx->r2;
    // 0x80233F30: lhu         $v0, 0x94($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X94);
    // 0x80233F34: sh          $v0, 0x20($v1)
    MEM_H(0X20, ctx->r3) = ctx->r2;
    // 0x80233F38: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80233F3C: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
L_80233F40:
    // 0x80233F40: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x80233F44: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x80233F48: lhu         $a0, 0x18($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X18);
    // 0x80233F4C: sh          $v0, 0x90($s0)
    MEM_H(0X90, ctx->r16) = ctx->r2;
    // 0x80233F50: sh          $v1, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r3;
    // 0x80233F54: sh          $a0, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r4;
L_80233F58:
    // 0x80233F58: jal         0x8003F754
    // 0x80233F5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003F754_1AB54(rdram, ctx);
        goto after_5;
    // 0x80233F5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80233F60: bne         $v0, $zero, L_80233F7C
    if (ctx->r2 != 0) {
        // 0x80233F64: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80233F7C;
    }
    // 0x80233F64: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80233F68: lw          $v0, 0x9C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X9C);
    // 0x80233F6C: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x80233F70: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80233F74: beq         $v0, $zero, L_80233F90
    if (ctx->r2 == 0) {
        // 0x80233F78: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80233F90;
    }
    // 0x80233F78: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_80233F7C:
    // 0x80233F7C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80233F80: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80233F84: sb          $zero, 0x96($s0)
    MEM_B(0X96, ctx->r16) = 0;
    // 0x80233F88: j           L_80233FE0
    // 0x80233F8C: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
        goto L_80233FE0;
    // 0x80233F8C: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
L_80233F90:
    // 0x80233F90: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80233F94: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80233F98: beq         $v0, $zero, L_80233FE0
    if (ctx->r2 == 0) {
        // 0x80233F9C: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80233FE0;
    }
    // 0x80233F9C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80233FA0: lhu         $a1, 0x98($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X98);
    // 0x80233FA4: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80233FA8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80233FAC: addiu       $v0, $s0, 0x9C
    ctx->r2 = ADD32(ctx->r16, 0X9C);
    // 0x80233FB0: ori         $a3, $zero, 0xA000
    ctx->r7 = 0 | 0XA000;
    // 0x80233FB4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80233FB8: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x80233FBC: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x80233FC0: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80233FC4: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x80233FC8: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80233FCC: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x80233FD0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80233FD4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80233FD8: jal         0x80051E18
    // 0x80233FDC: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_6;
    // 0x80233FDC: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_6:
L_80233FE0:
    // 0x80233FE0: sw          $zero, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = 0;
    // 0x80233FE4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80233FE8: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80233FEC: jr          $ra
    // 0x80233FF0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80233FF0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80233960_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233960: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80233964: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80233968: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023396C: lui         $t2, 0x3D08
    ctx->r10 = S32(0X3D08 << 16);
    // 0x80233970: ori         $t2, $t2, 0xE
    ctx->r10 = ctx->r10 | 0XE;
    // 0x80233974: lui         $t1, 0x2C80
    ctx->r9 = S32(0X2C80 << 16);
    // 0x80233978: ori         $t1, $t1, 0x8080
    ctx->r9 = ctx->r9 | 0X8080;
    // 0x8023397C: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80233980: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80233984: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80233988: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8023398C: lhu         $v1, 0x1C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1C);
    // 0x80233990: lhu         $a3, 0x20($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X20);
    // 0x80233994: lhu         $t0, 0x24($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X24);
    // 0x80233998: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8023399C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x802339A0: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x802339A4: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x802339A8: sw          $t2, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->r10;
    // 0x802339AC: sw          $t1, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r9;
    // 0x802339B0: ori         $v0, $v0, 0x22
    ctx->r2 = ctx->r2 | 0X22;
    // 0x802339B4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x802339B8: sh          $v1, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r3;
    // 0x802339BC: sh          $v1, 0x90($s0)
    MEM_H(0X90, ctx->r16) = ctx->r3;
    // 0x802339C0: sh          $a3, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r7;
    // 0x802339C4: sh          $a3, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r7;
    // 0x802339C8: sh          $t0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r8;
    // 0x802339CC: jal         0x8009A3B4
    // 0x802339D0: sh          $t0, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r8;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x802339D0: sh          $t0, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r8;
    after_0:
    // 0x802339D4: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x802339D8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x802339DC: jal         0x8009A3B4
    // 0x802339E0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802339E0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x802339E4: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x802339E8: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
    // 0x802339EC: sb          $v0, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r2;
    // 0x802339F0: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x802339F4: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
    // 0x802339F8: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x802339FC: sh          $v0, 0x98($s0)
    MEM_H(0X98, ctx->r16) = ctx->r2;
    // 0x80233A00: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x80233A04: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80233A08: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x80233A0C: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x80233A10: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80233A14: beq         $v1, $v0, L_80233B28
    if (ctx->r3 == ctx->r2) {
        // 0x80233A18: sh          $zero, 0x9A($s0)
        MEM_H(0X9A, ctx->r16) = 0;
            goto L_80233B28;
    }
    // 0x80233A18: sh          $zero, 0x9A($s0)
    MEM_H(0X9A, ctx->r16) = 0;
    // 0x80233A1C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80233A20: beql        $v0, $zero, L_80233A38
    if (ctx->r2 == 0) {
        // 0x80233A24: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80233A38;
    }
    goto skip_0;
    // 0x80233A24: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80233A28: beq         $v1, $zero, L_80233A60
    if (ctx->r3 == 0) {
        // 0x80233A2C: nop
    
            goto L_80233A60;
    }
    // 0x80233A2C: nop

    // 0x80233A30: j           L_80233BC4
    // 0x80233A34: nop

        goto L_80233BC4;
    // 0x80233A34: nop

L_80233A38:
    // 0x80233A38: beq         $v1, $v0, L_80233B74
    if (ctx->r3 == ctx->r2) {
        // 0x80233A3C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80233B74;
    }
    // 0x80233A3C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80233A40: bne         $v1, $v0, L_80233BC4
    if (ctx->r3 != ctx->r2) {
        // 0x80233A44: lui         $v0, 0x2C80
        ctx->r2 = S32(0X2C80 << 16);
            goto L_80233BC4;
    }
    // 0x80233A44: lui         $v0, 0x2C80
    ctx->r2 = S32(0X2C80 << 16);
    // 0x80233A48: ori         $v0, $v0, 0x80FF
    ctx->r2 = ctx->r2 | 0X80FF;
    // 0x80233A4C: addiu       $v1, $zero, 0x30
    ctx->r3 = ADD32(0, 0X30);
    // 0x80233A50: sw          $v0, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r2;
    // 0x80233A54: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x80233A58: sh          $v1, 0x98($s0)
    MEM_H(0X98, ctx->r16) = ctx->r3;
    // 0x80233A5C: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
L_80233A60:
    // 0x80233A60: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x80233A64: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80233A68: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80233A6C: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x80233A70: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80233A74: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80233A78: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x80233A7C: jal         0x800324B4
    // 0x80233A80: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    func_800324B4_D8B4(rdram, ctx);
        goto after_2;
    // 0x80233A80: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    after_2:
    // 0x80233A84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80233A88: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80233A8C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80233A90: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x80233A94: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80233A98: srl         $v1, $v1, 10
    ctx->r3 = S32(U32(ctx->r3) >> 10);
    // 0x80233A9C: jal         0x8004DDE8
    // 0x80233AA0: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    func_8004DDE8_291E8(rdram, ctx);
        goto after_3;
    // 0x80233AA0: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    after_3:
    // 0x80233AA4: lui         $v1, 0x38E3
    ctx->r3 = S32(0X38E3 << 16);
    // 0x80233AA8: ori         $v1, $v1, 0x8E39
    ctx->r3 = ctx->r3 | 0X8E39;
    // 0x80233AAC: addiu       $v0, $v0, 0x24
    ctx->r2 = ADD32(ctx->r2, 0X24);
    // 0x80233AB0: multu       $v0, $v1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80233AB4: lh          $v1, 0x3EA($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X3EA);
    // 0x80233AB8: lh          $v0, 0x16($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X16);
    // 0x80233ABC: mfhi        $t3
    ctx->r11 = hi;
    // 0x80233AC0: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80233AC4: srl         $v0, $t3, 3
    ctx->r2 = S32(U32(ctx->r11) >> 3);
    // 0x80233AC8: div         $zero, $v1, $v0
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r2)));
    // 0x80233ACC: bne         $v0, $zero, L_80233AD8
    if (ctx->r2 != 0) {
        // 0x80233AD0: nop
    
            goto L_80233AD8;
    }
    // 0x80233AD0: nop

    // 0x80233AD4: break       7
    do_break(2149792468);
L_80233AD8:
    // 0x80233AD8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80233ADC: bne         $v0, $at, L_80233AF0
    if (ctx->r2 != ctx->r1) {
        // 0x80233AE0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80233AF0;
    }
    // 0x80233AE0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80233AE4: bne         $v1, $at, L_80233AF0
    if (ctx->r3 != ctx->r1) {
        // 0x80233AE8: nop
    
            goto L_80233AF0;
    }
    // 0x80233AE8: nop

    // 0x80233AEC: break       6
    do_break(2149792492);
L_80233AF0:
    // 0x80233AF0: mflo        $v1
    ctx->r3 = lo;
    // 0x80233AF4: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x80233AF8: nop

    // 0x80233AFC: jal         0x80032498
    // 0x80233B00: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
    func_80032498_D898(rdram, ctx);
        goto after_4;
    // 0x80233B00: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
    after_4:
    // 0x80233B04: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80233B08: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x80233B0C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80233B10: srl         $v1, $v1, 10
    ctx->r3 = S32(U32(ctx->r3) >> 10);
    // 0x80233B14: sh          $v1, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r3;
    // 0x80233B18: sh          $zero, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = 0;
    // 0x80233B1C: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    // 0x80233B20: j           L_80233BC4
    // 0x80233B24: sh          $zero, 0x50($s0)
    MEM_H(0X50, ctx->r16) = 0;
        goto L_80233BC4;
    // 0x80233B24: sh          $zero, 0x50($s0)
    MEM_H(0X50, ctx->r16) = 0;
L_80233B28:
    // 0x80233B28: lhu         $v1, 0x64($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X64);
    // 0x80233B2C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80233B30: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80233B34: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80233B38: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x80233B3C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80233B40: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80233B44: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80233B48: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x80233B4C: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80233B50: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80233B54: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80233B58: sh          $zero, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = 0;
    // 0x80233B5C: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    // 0x80233B60: sh          $zero, 0x50($s0)
    MEM_H(0X50, ctx->r16) = 0;
    // 0x80233B64: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80233B68: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80233B6C: j           L_80233BC4
    // 0x80233B70: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
        goto L_80233BC4;
    // 0x80233B70: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_80233B74:
    // 0x80233B74: lbu         $v1, 0xC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XC);
    // 0x80233B78: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80233B7C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80233B80: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80233B84: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x80233B88: lhu         $v0, 0x64($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X64);
    // 0x80233B8C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80233B90: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80233B94: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x80233B98: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80233B9C: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80233BA0: sh          $zero, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = 0;
    // 0x80233BA4: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    // 0x80233BA8: sh          $zero, 0x50($s0)
    MEM_H(0X50, ctx->r16) = 0;
    // 0x80233BAC: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80233BB0: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80233BB4: sll         $v1, $v1, 24
    ctx->r3 = S32(ctx->r3 << 24);
    // 0x80233BB8: sra         $v1, $v1, 20
    ctx->r3 = S32(SIGNED(ctx->r3) >> 20);
    // 0x80233BBC: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    // 0x80233BC0: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_80233BC4:
    // 0x80233BC4: jal         0x8003F754
    // 0x80233BC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003F754_1AB54(rdram, ctx);
        goto after_5;
    // 0x80233BC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80233BCC: beql        $v0, $zero, L_80233BE0
    if (ctx->r2 == 0) {
        // 0x80233BD0: sw          $zero, 0x9C($s0)
        MEM_W(0X9C, ctx->r16) = 0;
            goto L_80233BE0;
    }
    goto skip_1;
    // 0x80233BD0: sw          $zero, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = 0;
    skip_1:
    // 0x80233BD4: jal         0x8004F4F8
    // 0x80233BD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_6;
    // 0x80233BD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x80233BDC: sw          $zero, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = 0;
L_80233BE0:
    // 0x80233BE0: addiu       $a0, $zero, 0x1AF
    ctx->r4 = ADD32(0, 0X1AF);
    // 0x80233BE4: jal         0x8002A33C
    // 0x80233BE8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_7;
    // 0x80233BE8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_7:
    // 0x80233BEC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80233BF0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80233BF4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80233BF8: jr          $ra
    // 0x80233BFC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80233BFC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802359B0_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802359B0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802359B4: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x802359B8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x802359BC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802359C0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x802359C4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802359C8: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x802359CC: lbu         $v1, 0x3($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X3);
    // 0x802359D0: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x802359D4: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x802359D8: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x802359DC: beq         $v0, $zero, L_80235C2C
    if (ctx->r2 == 0) {
        // 0x802359E0: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80235C2C;
    }
    // 0x802359E0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802359E4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802359E8: addu        $at, $at, $v0
    gpr jr_addend_802359F0 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802359EC: lw          $v0, -0x7060($at)
    ctx->r2 = ADD32(ctx->r1, -0X7060);
    // 0x802359F0: jr          $v0
    // 0x802359F4: nop

    switch (jr_addend_802359F0 >> 2) {
        case 0: goto L_802359F8; break;
        case 1: goto L_80235A3C; break;
        case 2: goto L_80235AEC; break;
        case 3: goto L_80235B3C; break;
        case 4: goto L_80235BDC; break;
        default: switch_error(__func__, 0x802359F0, 0x80238FA0);
    }
    // 0x802359F4: nop

L_802359F8:
    // 0x802359F8: lui         $v0, 0x3D48
    ctx->r2 = S32(0X3D48 << 16);
    // 0x802359FC: ori         $v0, $v0, 0xE
    ctx->r2 = ctx->r2 | 0XE;
    // 0x80235A00: lui         $v1, 0x2E80
    ctx->r3 = S32(0X2E80 << 16);
    // 0x80235A04: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x80235A08: sw          $v0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r2;
    // 0x80235A0C: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80235A10: sb          $v0, 0x22($s2)
    MEM_B(0X22, ctx->r18) = ctx->r2;
    // 0x80235A14: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80235A18: sb          $v0, 0x23($s2)
    MEM_B(0X23, ctx->r18) = ctx->r2;
    // 0x80235A1C: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80235A20: sh          $v0, 0x24($s2)
    MEM_H(0X24, ctx->r18) = ctx->r2;
    // 0x80235A24: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80235A28: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x80235A2C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80235A30: sw          $v1, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r3;
    // 0x80235A34: j           L_80235C2C
    // 0x80235A38: sb          $v0, 0xB($s2)
    MEM_B(0XB, ctx->r18) = ctx->r2;
        goto L_80235C2C;
    // 0x80235A38: sb          $v0, 0xB($s2)
    MEM_B(0XB, ctx->r18) = ctx->r2;
L_80235A3C:
    // 0x80235A3C: lui         $v1, 0x3D48
    ctx->r3 = S32(0X3D48 << 16);
    // 0x80235A40: lb          $a0, 0xC($s2)
    ctx->r4 = MEM_B(ctx->r18, 0XC);
    // 0x80235A44: ori         $v1, $v1, 0xE
    ctx->r3 = ctx->r3 | 0XE;
    // 0x80235A48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80235A4C: sh          $v0, 0x24($s2)
    MEM_H(0X24, ctx->r18) = ctx->r2;
    // 0x80235A50: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80235A54: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x80235A58: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80235A5C: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
    // 0x80235A60: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80235A64: sb          $v0, 0x22($s2)
    MEM_B(0X22, ctx->r18) = ctx->r2;
    // 0x80235A68: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80235A6C: sb          $v0, 0x23($s2)
    MEM_B(0X23, ctx->r18) = ctx->r2;
    // 0x80235A70: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80235A74: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
    // 0x80235A78: beq         $a0, $v0, L_80235AC0
    if (ctx->r4 == ctx->r2) {
        // 0x80235A7C: sw          $v1, 0x14($s2)
        MEM_W(0X14, ctx->r18) = ctx->r3;
            goto L_80235AC0;
    }
    // 0x80235A7C: sw          $v1, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r3;
    // 0x80235A80: slti        $v0, $a0, 0x2
    ctx->r2 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    // 0x80235A84: beql        $v0, $zero, L_80235A9C
    if (ctx->r2 == 0) {
        // 0x80235A88: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80235A9C;
    }
    goto skip_0;
    // 0x80235A88: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80235A8C: beq         $a0, $zero, L_80235AAC
    if (ctx->r4 == 0) {
        // 0x80235A90: lui         $v0, 0x2E00
        ctx->r2 = S32(0X2E00 << 16);
            goto L_80235AAC;
    }
    // 0x80235A90: lui         $v0, 0x2E00
    ctx->r2 = S32(0X2E00 << 16);
    // 0x80235A94: j           L_80235C2C
    // 0x80235A98: nop

        goto L_80235C2C;
    // 0x80235A98: nop

L_80235A9C:
    // 0x80235A9C: beq         $a0, $v0, L_80235AD8
    if (ctx->r4 == ctx->r2) {
        // 0x80235AA0: lui         $v0, 0x2E00
        ctx->r2 = S32(0X2E00 << 16);
            goto L_80235AD8;
    }
    // 0x80235AA0: lui         $v0, 0x2E00
    ctx->r2 = S32(0X2E00 << 16);
    // 0x80235AA4: j           L_80235C2C
    // 0x80235AA8: nop

        goto L_80235C2C;
    // 0x80235AA8: nop

L_80235AAC:
    // 0x80235AAC: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x80235AB0: sw          $v0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r2;
    // 0x80235AB4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80235AB8: j           L_80235C2C
    // 0x80235ABC: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
        goto L_80235C2C;
    // 0x80235ABC: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
L_80235AC0:
    // 0x80235AC0: lui         $v0, 0x2E00
    ctx->r2 = S32(0X2E00 << 16);
    // 0x80235AC4: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x80235AC8: sw          $v0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r2;
    // 0x80235ACC: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80235AD0: j           L_80235C2C
    // 0x80235AD4: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
        goto L_80235C2C;
    // 0x80235AD4: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
L_80235AD8:
    // 0x80235AD8: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x80235ADC: sw          $v0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r2;
    // 0x80235AE0: addiu       $v0, $zero, 0x808
    ctx->r2 = ADD32(0, 0X808);
    // 0x80235AE4: j           L_80235C2C
    // 0x80235AE8: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
        goto L_80235C2C;
    // 0x80235AE8: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
L_80235AEC:
    // 0x80235AEC: lui         $v0, 0x3D48
    ctx->r2 = S32(0X3D48 << 16);
    // 0x80235AF0: ori         $v0, $v0, 0xE
    ctx->r2 = ctx->r2 | 0XE;
    // 0x80235AF4: lbu         $a0, 0x3($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X3);
    // 0x80235AF8: lui         $v1, 0x2E00
    ctx->r3 = S32(0X2E00 << 16);
    // 0x80235AFC: ori         $v1, $v1, 0x80
    ctx->r3 = ctx->r3 | 0X80;
    // 0x80235B00: sw          $v0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r2;
    // 0x80235B04: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80235B08: sb          $v0, 0x22($s2)
    MEM_B(0X22, ctx->r18) = ctx->r2;
    // 0x80235B0C: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80235B10: sb          $v0, 0x23($s2)
    MEM_B(0X23, ctx->r18) = ctx->r2;
    // 0x80235B14: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80235B18: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x80235B1C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80235B20: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
    // 0x80235B24: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x80235B28: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
    // 0x80235B2C: sw          $v1, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r3;
    // 0x80235B30: sh          $v0, 0x24($s2)
    MEM_H(0X24, ctx->r18) = ctx->r2;
    // 0x80235B34: j           L_80235C2C
    // 0x80235B38: sb          $a0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r4;
        goto L_80235C2C;
    // 0x80235B38: sb          $a0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r4;
L_80235B3C:
    // 0x80235B3C: lui         $v0, 0x3D48
    ctx->r2 = S32(0X3D48 << 16);
    // 0x80235B40: ori         $v0, $v0, 0x2E
    ctx->r2 = ctx->r2 | 0X2E;
    // 0x80235B44: lui         $v1, 0x2E80
    ctx->r3 = S32(0X2E80 << 16);
    // 0x80235B48: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x80235B4C: addiu       $s1, $sp, 0x10
    ctx->r17 = ADD32(ctx->r29, 0X10);
    // 0x80235B50: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80235B54: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x80235B58: addiu       $a1, $a1, -0x7068
    ctx->r5 = ADD32(ctx->r5, -0X7068);
    // 0x80235B5C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80235B60: sw          $v0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r2;
    // 0x80235B64: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
    // 0x80235B68: sb          $v0, 0x22($s2)
    MEM_B(0X22, ctx->r18) = ctx->r2;
    // 0x80235B6C: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x80235B70: sb          $v0, 0x23($s2)
    MEM_B(0X23, ctx->r18) = ctx->r2;
    // 0x80235B74: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80235B78: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x80235B7C: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80235B80: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
    // 0x80235B84: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
    // 0x80235B88: sw          $v1, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r3;
    // 0x80235B8C: jal         0x8009A3B4
    // 0x80235B90: sh          $zero, 0x26($s2)
    MEM_H(0X26, ctx->r18) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80235B90: sh          $zero, 0x26($s2)
    MEM_H(0X26, ctx->r18) = 0;
    after_0:
    // 0x80235B94: addiu       $s0, $sp, 0x18
    ctx->r16 = ADD32(ctx->r29, 0X18);
    // 0x80235B98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235B9C: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x80235BA0: addiu       $a1, $a1, -0x7064
    ctx->r5 = ADD32(ctx->r5, -0X7064);
    // 0x80235BA4: jal         0x8009A3B4
    // 0x80235BA8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80235BA8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_1:
    // 0x80235BAC: lb          $v0, 0xC($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XC);
    // 0x80235BB0: lb          $v1, 0xC($s2)
    ctx->r3 = MEM_B(ctx->r18, 0XC);
    // 0x80235BB4: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
    // 0x80235BB8: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80235BBC: addu        $s0, $s0, $v1
    ctx->r16 = ADD32(ctx->r16, ctx->r3);
    // 0x80235BC0: sh          $v0, 0x24($s2)
    MEM_H(0X24, ctx->r18) = ctx->r2;
    // 0x80235BC4: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x80235BC8: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80235BCC: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x80235BD0: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x80235BD4: j           L_80235C2C
    // 0x80235BD8: sb          $v1, 0xC($s2)
    MEM_B(0XC, ctx->r18) = ctx->r3;
        goto L_80235C2C;
    // 0x80235BD8: sb          $v1, 0xC($s2)
    MEM_B(0XC, ctx->r18) = ctx->r3;
L_80235BDC:
    // 0x80235BDC: lui         $v0, 0x3D08
    ctx->r2 = S32(0X3D08 << 16);
    // 0x80235BE0: ori         $v0, $v0, 0xE
    ctx->r2 = ctx->r2 | 0XE;
    // 0x80235BE4: lbu         $v1, 0x0($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X0);
    // 0x80235BE8: lui         $a0, 0x2E00
    ctx->r4 = S32(0X2E00 << 16);
    // 0x80235BEC: ori         $a0, $a0, 0x80
    ctx->r4 = ctx->r4 | 0X80;
    // 0x80235BF0: sw          $v0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r2;
    // 0x80235BF4: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
    // 0x80235BF8: sb          $v0, 0x22($s2)
    MEM_B(0X22, ctx->r18) = ctx->r2;
    // 0x80235BFC: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80235C00: sb          $v0, 0x23($s2)
    MEM_B(0X23, ctx->r18) = ctx->r2;
    // 0x80235C04: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80235C08: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x80235C0C: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x80235C10: sb          $zero, 0x9($s2)
    MEM_B(0X9, ctx->r18) = 0;
    // 0x80235C14: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
    // 0x80235C18: sw          $a0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r4;
    // 0x80235C1C: sh          $zero, 0x26($s2)
    MEM_H(0X26, ctx->r18) = 0;
    // 0x80235C20: sh          $v0, 0x24($s2)
    MEM_H(0X24, ctx->r18) = ctx->r2;
    // 0x80235C24: ori         $v1, $v1, 0x20
    ctx->r3 = ctx->r3 | 0X20;
    // 0x80235C28: sb          $v1, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r3;
L_80235C2C:
    // 0x80235C2C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80235C30: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80235C34: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80235C38: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80235C3C: jr          $ra
    // 0x80235C40: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80235C40: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_802332E0_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802332E0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802332E4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802332E8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802332EC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802332F0: lh          $a0, 0x56($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X56);
    // 0x802332F4: lh          $v0, 0x380($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X380);
    // 0x802332F8: bne         $a0, $v0, L_80233344
    if (ctx->r4 != ctx->r2) {
        // 0x802332FC: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_80233344;
    }
    // 0x802332FC: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x80233300: lbu         $v0, 0xCA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XCA);
    // 0x80233304: addiu       $v1, $zero, 0x80
    ctx->r3 = ADD32(0, 0X80);
    // 0x80233308: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    // 0x8023330C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80233310: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80233314: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80233318: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023331C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80233320: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80233324: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    // 0x80233328: sb          $zero, 0x384($s0)
    MEM_B(0X384, ctx->r16) = 0;
    // 0x8023332C: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x80233330: andi        $v0, $v0, 0xFE
    ctx->r2 = ctx->r2 & 0XFE;
    // 0x80233334: jal         0x80050294
    // 0x80233338: sb          $v0, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80233338: sb          $v0, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r2;
    after_0:
    // 0x8023333C: j           L_80233358
    // 0x80233340: nop

        goto L_80233358;
    // 0x80233340: nop

L_80233344:
    // 0x80233344: slt         $v0, $v0, $a0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80233348: bne         $v0, $zero, L_80233354
    if (ctx->r2 != 0) {
        // 0x8023334C: addiu       $v0, $v1, -0x80
        ctx->r2 = ADD32(ctx->r3, -0X80);
            goto L_80233354;
    }
    // 0x8023334C: addiu       $v0, $v1, -0x80
    ctx->r2 = ADD32(ctx->r3, -0X80);
    // 0x80233350: addiu       $v0, $v1, 0x80
    ctx->r2 = ADD32(ctx->r3, 0X80);
L_80233354:
    // 0x80233354: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_80233358:
    // 0x80233358: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8023335C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80233360: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80233364: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80233368: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023336C: jr          $ra
    // 0x80233370: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80233370: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80227654_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227654: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227658: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022765C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227660: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227664: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x80227668: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022766C: bne         $v1, $v0, L_802276C4
    if (ctx->r3 != ctx->r2) {
        // 0x80227670: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802276C4;
    }
    // 0x80227670: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227674: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80227678: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022767C: jal         0x80050294
    // 0x80227680: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80227680: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_0:
    // 0x80227684: lbu         $a0, 0xC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XC);
    // 0x80227688: lhu         $v1, 0x426($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X426);
    // 0x8022768C: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80227690: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80227694: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80227698: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x8022769C: sb          $zero, 0x43B($s0)
    MEM_B(0X43B, ctx->r16) = 0;
    // 0x802276A0: sh          $zero, 0x42E($s0)
    MEM_H(0X42E, ctx->r16) = 0;
    // 0x802276A4: andi        $a0, $a0, 0x3F
    ctx->r4 = ctx->r4 & 0X3F;
    // 0x802276A8: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x802276AC: sra         $v0, $v1, 16
    ctx->r2 = S32(SIGNED(ctx->r3) >> 16);
    // 0x802276B0: srl         $v1, $v1, 31
    ctx->r3 = S32(U32(ctx->r3) >> 31);
    // 0x802276B4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802276B8: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x802276BC: sb          $a0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r4;
    // 0x802276C0: sh          $v0, 0x426($s0)
    MEM_H(0X426, ctx->r16) = ctx->r2;
L_802276C4:
    // 0x802276C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802276C8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802276CC: jr          $ra
    // 0x802276D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802276D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A3A8_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A3A8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022A3AC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A3B0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A3B4: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022A3B8: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022A3BC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022A3C0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022A3C4: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022A3C8: beq         $v1, $zero, L_8022A3E4
    if (ctx->r3 == 0) {
        // 0x8022A3CC: addiu       $s2, $s0, 0x328
        ctx->r18 = ADD32(ctx->r16, 0X328);
            goto L_8022A3E4;
    }
    // 0x8022A3CC: addiu       $s2, $s0, 0x328
    ctx->r18 = ADD32(ctx->r16, 0X328);
    // 0x8022A3D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A3D4: beq         $v1, $v0, L_8022A468
    if (ctx->r3 == ctx->r2) {
        // 0x8022A3D8: nop
    
            goto L_8022A468;
    }
    // 0x8022A3D8: nop

    // 0x8022A3DC: j           L_8022A4B8
    // 0x8022A3E0: nop

        goto L_8022A4B8;
    // 0x8022A3E0: nop

L_8022A3E4:
    // 0x8022A3E4: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x8022A3E8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022A3EC: lui         $s3, 0x8020
    ctx->r19 = S32(0X8020 << 16);
    // 0x8022A3F0: addiu       $s3, $s3, 0x49C4
    ctx->r19 = ADD32(ctx->r19, 0X49C4);
    // 0x8022A3F4: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x8022A3F8: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022A3FC: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x8022A400: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A404: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022A408: jal         0x8004F820
    // 0x8022A40C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022A40C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022A410: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A414: bgez        $v0, L_8022A440
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022A418: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022A440;
    }
    // 0x8022A418: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022A41C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022A420: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x8022A424: jal         0x8004F820
    // 0x8022A428: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x8022A428: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_1:
    // 0x8022A42C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A430: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022A434: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8022A438: j           L_8022A458
    // 0x8022A43C: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_8022A458;
    // 0x8022A43C: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_8022A440:
    // 0x8022A440: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022A444: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x8022A448: jal         0x8004F820
    // 0x8022A44C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x8022A44C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x8022A450: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A454: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_8022A458:
    // 0x8022A458: sh          $v0, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r2;
    // 0x8022A45C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022A460: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
    // 0x8022A464: sh          $zero, 0x8($s2)
    MEM_H(0X8, ctx->r18) = 0;
L_8022A468:
    // 0x8022A468: lhu         $v0, 0x4($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X4);
    // 0x8022A46C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022A470: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
    // 0x8022A474: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A478: bgez        $v0, L_8022A48C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022A47C: nop
    
            goto L_8022A48C;
    }
    // 0x8022A47C: nop

    // 0x8022A480: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8022A484: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022A488: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
L_8022A48C:
    // 0x8022A48C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022A490: lh          $a3, 0x66($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X66);
    // 0x8022A494: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022A498: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022A49C: jal         0x8004F820
    // 0x8022A4A0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x8022A4A0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_3:
    // 0x8022A4A4: sh          $v0, 0x44($s2)
    MEM_H(0X44, ctx->r18) = ctx->r2;
    // 0x8022A4A8: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022A4AC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022A4B0: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022A4B4: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_8022A4B8:
    // 0x8022A4B8: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022A4BC: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022A4C0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022A4C4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022A4C8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A4CC: jr          $ra
    // 0x8022A4D0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022A4D0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022A920_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A920: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022A924: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A928: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A92C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022A930: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022A934: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022A938: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x8022A93C: beq         $v0, $zero, L_8022AB54
    if (ctx->r2 == 0) {
        // 0x8022A940: addiu       $s1, $s0, 0x328
        ctx->r17 = ADD32(ctx->r16, 0X328);
            goto L_8022AB54;
    }
    // 0x8022A940: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x8022A944: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022A948: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022A94C: addu        $at, $at, $v0
    gpr jr_addend_8022A954 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022A950: lw          $v0, -0x7158($at)
    ctx->r2 = ADD32(ctx->r1, -0X7158);
    // 0x8022A954: jr          $v0
    // 0x8022A958: nop

    switch (jr_addend_8022A954 >> 2) {
        case 0: goto L_8022A95C; break;
        case 1: goto L_8022A984; break;
        case 2: goto L_8022AA08; break;
        case 3: goto L_8022AA48; break;
        case 4: goto L_8022AA84; break;
        default: switch_error(__func__, 0x8022A954, 0x80238EA8);
    }
    // 0x8022A958: nop

L_8022A95C:
    // 0x8022A95C: addiu       $a0, $zero, 0xB1
    ctx->r4 = ADD32(0, 0XB1);
    // 0x8022A960: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022A964: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A968: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022A96C: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
    // 0x8022A970: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022A974: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x8022A978: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022A97C: jal         0x8002A33C
    // 0x8022A980: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x8022A980: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
    after_0:
L_8022A984:
    // 0x8022A984: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022A988: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022A98C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022A990: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A994: bgez        $v0, L_8022A9C0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022A998: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022A9C0;
    }
    // 0x8022A998: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A99C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022A9A0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022A9A4: lh          $v0, 0x6($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X6);
    // 0x8022A9A8: beq         $v0, $zero, L_8022A9B8
    if (ctx->r2 == 0) {
        // 0x8022A9AC: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_8022A9B8;
    }
    // 0x8022A9AC: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022A9B0: j           L_8022AA08
    // 0x8022A9B4: sh          $zero, 0x4($s1)
    MEM_H(0X4, ctx->r17) = 0;
        goto L_8022AA08;
    // 0x8022A9B4: sh          $zero, 0x4($s1)
    MEM_H(0X4, ctx->r17) = 0;
L_8022A9B8:
    // 0x8022A9B8: j           L_8022AA08
    // 0x8022A9BC: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
        goto L_8022AA08;
    // 0x8022A9BC: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_8022A9C0:
    // 0x8022A9C0: addiu       $a1, $zero, -0x70
    ctx->r5 = ADD32(0, -0X70);
L_8022A9C4:
    // 0x8022A9C4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022A9C8: jal         0x8004DA90
    // 0x8022A9CC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x8022A9CC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x8022A9D0: jal         0x80040F30
    // 0x8022A9D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_2;
    // 0x8022A9D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022A9D8: jal         0x8003E934
    // 0x8022A9DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_3;
    // 0x8022A9DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022A9E0: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022A9E4: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x8022A9E8: lh          $v1, 0x2E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2E);
    // 0x8022A9EC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A9F0: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022A9F4: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x8022A9F8: bgez        $v0, L_8022AB18
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022A9FC: slti        $v0, $v0, 0x21
        ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
            goto L_8022AB18;
    }
    // 0x8022A9FC: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x8022AA00: j           L_8022AB2C
    // 0x8022AA04: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
        goto L_8022AB2C;
    // 0x8022AA04: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
L_8022AA08:
    // 0x8022AA08: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022AA0C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022AA10: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022AA14: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022AA18: bgtz        $v0, L_8022AB54
    if (SIGNED(ctx->r2) > 0) {
        // 0x8022AA1C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022AB54;
    }
    // 0x8022AA1C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022AA20: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022AA24: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8022AA28: sb          $v1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r3;
    // 0x8022AA2C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022AA30: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x8022AA34: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x8022AA38: jal         0x8022B850
    // 0x8022AA3C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    func_8022B850_ovl31(rdram, ctx);
        goto after_4;
    // 0x8022AA3C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    after_4:
    // 0x8022AA40: j           L_8022AB54
    // 0x8022AA44: nop

        goto L_8022AB54;
    // 0x8022AA44: nop

L_8022AA48:
    // 0x8022AA48: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022AA4C: addiu       $a1, $v0, -0x1
    ctx->r5 = ADD32(ctx->r2, -0X1);
    // 0x8022AA50: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
    // 0x8022AA54: bgez        $v0, L_8022AA70
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022AA58: sh          $a1, 0x4($s1)
        MEM_H(0X4, ctx->r17) = ctx->r5;
            goto L_8022AA70;
    }
    // 0x8022AA58: sh          $a1, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r5;
    // 0x8022AA5C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022AA60: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022AA64: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022AA68: j           L_8022AA84
    // 0x8022AA6C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
        goto L_8022AA84;
    // 0x8022AA6C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_8022AA70:
    // 0x8022AA70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022AA74: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    // 0x8022AA78: sll         $a1, $a1, 21
    ctx->r5 = S32(ctx->r5 << 21);
    // 0x8022AA7C: j           L_8022A9C4
    // 0x8022AA80: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
        goto L_8022A9C4;
    // 0x8022AA80: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
L_8022AA84:
    // 0x8022AA84: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022AA88: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022AA8C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022AA90: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022AA94: bgez        $v0, L_8022AAD8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022AA98: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022AAD8;
    }
    // 0x8022AA98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022AA9C: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8022AAA0: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8022AAA4: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x8022AAA8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022AAAC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022AAB0: lh          $v1, 0x6($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X6);
    // 0x8022AAB4: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8022AAB8: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x8022AABC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022AAC0: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022AAC4: lbu         $v1, 0xC($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0XC);
    // 0x8022AAC8: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022AACC: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8022AAD0: j           L_8022AB54
    // 0x8022AAD4: sh          $v1, 0x34($s1)
    MEM_H(0X34, ctx->r17) = ctx->r3;
        goto L_8022AB54;
    // 0x8022AAD4: sh          $v1, 0x34($s1)
    MEM_H(0X34, ctx->r17) = ctx->r3;
L_8022AAD8:
    // 0x8022AAD8: addiu       $a1, $zero, 0xE0
    ctx->r5 = ADD32(0, 0XE0);
    // 0x8022AADC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022AAE0: jal         0x8004DA90
    // 0x8022AAE4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_5;
    // 0x8022AAE4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_5:
    // 0x8022AAE8: jal         0x80040F30
    // 0x8022AAEC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_6;
    // 0x8022AAEC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x8022AAF0: jal         0x8003E934
    // 0x8022AAF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_7;
    // 0x8022AAF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x8022AAF8: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022AAFC: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x8022AB00: lh          $v1, 0x2E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2E);
    // 0x8022AB04: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022AB08: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022AB0C: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x8022AB10: bltz        $v0, L_8022AB28
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022AB14: slti        $v0, $v0, 0x21
        ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
            goto L_8022AB28;
    }
    // 0x8022AB14: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
L_8022AB18:
    // 0x8022AB18: beq         $v0, $zero, L_8022AB38
    if (ctx->r2 == 0) {
        // 0x8022AB1C: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022AB38;
    }
    // 0x8022AB1C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022AB20: j           L_8022AB54
    // 0x8022AB24: nop

        goto L_8022AB54;
    // 0x8022AB24: nop

L_8022AB28:
    // 0x8022AB28: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
L_8022AB2C:
    // 0x8022AB2C: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x8022AB30: bne         $v0, $zero, L_8022AB54
    if (ctx->r2 != 0) {
        // 0x8022AB34: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022AB54;
    }
    // 0x8022AB34: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_8022AB38:
    // 0x8022AB38: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x8022AB3C: jal         0x8009A3B4
    // 0x8022AB40: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x8022AB40: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_8:
    // 0x8022AB44: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8022AB48: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x8022AB4C: jal         0x8009A3B4
    // 0x8022AB50: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_9;
    // 0x8022AB50: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_9:
L_8022AB54:
    // 0x8022AB54: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022AB58: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022AB5C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022AB60: jr          $ra
    // 0x8022AB64: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022AB64: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80232B44_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232B44: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80232B48: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80232B4C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80232B50: lb          $v1, 0xA6($a1)
    ctx->r3 = MEM_B(ctx->r5, 0XA6);
    // 0x80232B54: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80232B58: bne         $v1, $v0, L_80232B7C
    if (ctx->r3 != ctx->r2) {
        // 0x80232B5C: addiu       $v0, $zero, -0x300
        ctx->r2 = ADD32(0, -0X300);
            goto L_80232B7C;
    }
    // 0x80232B5C: addiu       $v0, $zero, -0x300
    ctx->r2 = ADD32(0, -0X300);
    // 0x80232B60: sh          $v0, 0x46($a1)
    MEM_H(0X46, ctx->r5) = ctx->r2;
    // 0x80232B64: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80232B68: addiu       $a0, $zero, 0x15F
    ctx->r4 = ADD32(0, 0X15F);
    // 0x80232B6C: sb          $v0, 0xA($a1)
    MEM_B(0XA, ctx->r5) = ctx->r2;
    // 0x80232B70: sb          $v0, 0x74($a1)
    MEM_B(0X74, ctx->r5) = ctx->r2;
    // 0x80232B74: jal         0x8002A33C
    // 0x80232B78: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x80232B78: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_0:
L_80232B7C:
    // 0x80232B7C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80232B80: jr          $ra
    // 0x80232B84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80232B84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022F6FC_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F6FC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022F700: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022F704: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F708: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8022F70C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022F710: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022F714: lb          $v0, 0x350($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X350);
    // 0x8022F718: addiu       $s2, $s0, 0x308
    ctx->r18 = ADD32(ctx->r16, 0X308);
    // 0x8022F71C: beq         $v0, $zero, L_8022F7E0
    if (ctx->r2 == 0) {
        // 0x8022F720: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022F7E0;
    }
    // 0x8022F720: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022F724: andi        $v0, $v1, 0x3
    ctx->r2 = ctx->r3 & 0X3;
    // 0x8022F728: bne         $v0, $zero, L_8022F7E8
    if (ctx->r2 != 0) {
        // 0x8022F72C: addiu       $a0, $s0, 0x340
        ctx->r4 = ADD32(ctx->r16, 0X340);
            goto L_8022F7E8;
    }
    // 0x8022F72C: addiu       $a0, $s0, 0x340
    ctx->r4 = ADD32(ctx->r16, 0X340);
    // 0x8022F730: lbu         $v1, 0x34F($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34F);
    // 0x8022F734: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022F738: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x8022F73C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022F740: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022F744: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022F748: lui         $s1, 0x8024
    ctx->r17 = S32(0X8024 << 16);
    // 0x8022F74C: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
    // 0x8022F750: lbu         $s1, -0x7B30($s1)
    ctx->r17 = MEM_BU(ctx->r17, -0X7B30);
    // 0x8022F754: sll         $a1, $v1, 2
    ctx->r5 = S32(ctx->r3 << 2);
    // 0x8022F758: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x8022F75C: sll         $a1, $a1, 1
    ctx->r5 = S32(ctx->r5 << 1);
    // 0x8022F760: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022F764: addiu       $v0, $v0, -0x7B2E
    ctx->r2 = ADD32(ctx->r2, -0X7B2E);
    // 0x8022F768: jal         0x8009A3B4
    // 0x8022F76C: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022F76C: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    after_0:
    // 0x8022F770: jal         0x8004F144
    // 0x8022F774: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_1;
    // 0x8022F774: nop

    after_1:
    // 0x8022F778: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8022F77C: beq         $a1, $zero, L_8022F7E8
    if (ctx->r5 == 0) {
        // 0x8022F780: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_8022F7E8;
    }
    // 0x8022F780: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022F784: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x8022F788: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022F78C: sb          $v0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r2;
    // 0x8022F790: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022F794: sb          $v0, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r2;
    // 0x8022F798: lbu         $v0, 0x34F($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34F);
    // 0x8022F79C: sll         $a0, $s1, 3
    ctx->r4 = S32(ctx->r17 << 3);
    // 0x8022F7A0: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    // 0x8022F7A4: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8022F7A8: sb          $v0, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r2;
    // 0x8022F7AC: lhu         $v0, 0x180($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X180);
    // 0x8022F7B0: lhu         $v1, 0x340($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X340);
    // 0x8022F7B4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022F7B8: sh          $v0, 0x38($a1)
    MEM_H(0X38, ctx->r5) = ctx->r2;
    // 0x8022F7BC: lhu         $v0, 0x182($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X182);
    // 0x8022F7C0: lhu         $v1, 0x342($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X342);
    // 0x8022F7C4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022F7C8: sh          $v0, 0x3A($a1)
    MEM_H(0X3A, ctx->r5) = ctx->r2;
    // 0x8022F7CC: lhu         $v0, 0x184($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X184);
    // 0x8022F7D0: lhu         $v1, 0x344($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X344);
    // 0x8022F7D4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022F7D8: j           L_8022F7E8
    // 0x8022F7DC: sh          $v0, 0x3C($a1)
    MEM_H(0X3C, ctx->r5) = ctx->r2;
        goto L_8022F7E8;
    // 0x8022F7DC: sh          $v0, 0x3C($a1)
    MEM_H(0X3C, ctx->r5) = ctx->r2;
L_8022F7E0:
    // 0x8022F7E0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022F7E4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022F7E8:
    // 0x8022F7E8: lbu         $v0, 0x48($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X48);
    // 0x8022F7EC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022F7F0: sb          $v0, 0x48($s2)
    MEM_B(0X48, ctx->r18) = ctx->r2;
    // 0x8022F7F4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8022F7F8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022F7FC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022F800: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022F804: jr          $ra
    // 0x8022F808: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022F808: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8022F80C: nop

;}
RECOMP_FUNC void func_80231930_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231930: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231934: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80231938: jal         0x8004F418
    // 0x8023193C: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x8023193C: nop

    after_0:
    // 0x80231940: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80231944: jr          $ra
    // 0x80231948: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80231948: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80232894_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232894: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80232898: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023289C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802328A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802328A4: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802328A8: lh          $a3, 0x382($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X382);
    // 0x802328AC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x802328B0: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x802328B4: jal         0x8004F820
    // 0x802328B8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x802328B8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x802328BC: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x802328C0: lb          $a0, 0xA7($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XA7);
    // 0x802328C4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802328C8: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x802328CC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802328D0: bne         $a0, $v0, L_802328E4
    if (ctx->r4 != ctx->r2) {
        // 0x802328D4: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_802328E4;
    }
    // 0x802328D4: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x802328D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802328DC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x802328E0: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_802328E4:
    // 0x802328E4: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x802328E8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802328EC: bne         $v1, $v0, L_8023297C
    if (ctx->r3 != ctx->r2) {
        // 0x802328F0: nop
    
            goto L_8023297C;
    }
    // 0x802328F0: nop

    // 0x802328F4: lbu         $v1, 0x64($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X64);
    // 0x802328F8: lbu         $a0, 0x65($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X65);
    // 0x802328FC: lbu         $a1, 0x66($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X66);
    // 0x80232900: lbu         $v0, 0x64($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X64);
    // 0x80232904: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x80232908: andi        $a0, $a0, 0x1F
    ctx->r4 = ctx->r4 & 0X1F;
    // 0x8023290C: andi        $a1, $a1, 0x1F
    ctx->r5 = ctx->r5 & 0X1F;
    // 0x80232910: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x80232914: sll         $a0, $a0, 5
    ctx->r4 = S32(ctx->r4 << 5);
    // 0x80232918: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x8023291C: sb          $v0, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r2;
    // 0x80232920: lbu         $v0, 0x65($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X65);
    // 0x80232924: lb          $a0, 0x64($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X64);
    // 0x80232928: sll         $a1, $a1, 10
    ctx->r5 = S32(ctx->r5 << 10);
    // 0x8023292C: or          $v1, $v1, $a1
    ctx->r3 = ctx->r3 | ctx->r5;
    // 0x80232930: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x80232934: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x80232938: bgez        $a0, L_80232954
    if (SIGNED(ctx->r4) >= 0) {
        // 0x8023293C: sb          $v0, 0x65($s0)
        MEM_B(0X65, ctx->r16) = ctx->r2;
            goto L_80232954;
    }
    // 0x8023293C: sb          $v0, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r2;
    // 0x80232940: lhu         $v0, 0x15E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X15E);
    // 0x80232944: sb          $zero, 0x64($s0)
    MEM_B(0X64, ctx->r16) = 0;
    // 0x80232948: sb          $zero, 0x65($s0)
    MEM_B(0X65, ctx->r16) = 0;
    // 0x8023294C: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x80232950: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
L_80232954:
    // 0x80232954: lh          $v0, 0x15E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X15E);
    // 0x80232958: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x8023295C: beq         $v0, $zero, L_8023297C
    if (ctx->r2 == 0) {
        // 0x80232960: nop
    
            goto L_8023297C;
    }
    // 0x80232960: nop

    // 0x80232964: lbu         $v0, 0x66($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X66);
    // 0x80232968: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023296C: sb          $v0, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r2;
    // 0x80232970: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80232974: bltzl       $v0, L_8023297C
    if (SIGNED(ctx->r2) < 0) {
        // 0x80232978: sb          $zero, 0x66($s0)
        MEM_B(0X66, ctx->r16) = 0;
            goto L_8023297C;
    }
    goto skip_0;
    // 0x80232978: sb          $zero, 0x66($s0)
    MEM_B(0X66, ctx->r16) = 0;
    skip_0:
L_8023297C:
    // 0x8023297C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80232980: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232984: jr          $ra
    // 0x80232988: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80232988: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E384_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E384: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022E388: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022E38C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E390: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022E394: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022E398: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022E39C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022E3A0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022E3A4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022E3A8: lw          $v0, -0x7B74($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7B74);
    // 0x8022E3AC: jalr        $v0
    // 0x8022E3B0: addiu       $s1, $s0, 0xC4
    ctx->r17 = ADD32(ctx->r16, 0XC4);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022E3B0: addiu       $s1, $s0, 0xC4
    ctx->r17 = ADD32(ctx->r16, 0XC4);
    after_0:
    // 0x8022E3B4: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022E3B8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022E3BC: bne         $v1, $v0, L_8022E46C
    if (ctx->r3 != ctx->r2) {
        // 0x8022E3C0: nop
    
            goto L_8022E46C;
    }
    // 0x8022E3C0: nop

    // 0x8022E3C4: lb          $v0, 0x66($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X66);
    // 0x8022E3C8: bne         $v0, $zero, L_8022E3E8
    if (ctx->r2 != 0) {
        // 0x8022E3CC: addu        $a1, $v0, $zero
        ctx->r5 = ADD32(ctx->r2, 0);
            goto L_8022E3E8;
    }
    // 0x8022E3CC: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8022E3D0: addiu       $v0, $zero, -0x8000
    ctx->r2 = ADD32(0, -0X8000);
    // 0x8022E3D4: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022E3D8: sb          $zero, 0x66($s0)
    MEM_B(0X66, ctx->r16) = 0;
    // 0x8022E3DC: sb          $zero, 0x65($s0)
    MEM_B(0X65, ctx->r16) = 0;
    // 0x8022E3E0: j           L_8022E46C
    // 0x8022E3E4: sb          $zero, 0x64($s0)
    MEM_B(0X64, ctx->r16) = 0;
        goto L_8022E46C;
    // 0x8022E3E4: sb          $zero, 0x64($s0)
    MEM_B(0X64, ctx->r16) = 0;
L_8022E3E8:
    // 0x8022E3E8: andi        $a1, $a1, 0x1F
    ctx->r5 = ctx->r5 & 0X1F;
    // 0x8022E3EC: lbu         $v1, 0x64($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X64);
    // 0x8022E3F0: lbu         $a0, 0x65($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X65);
    // 0x8022E3F4: lbu         $v0, 0x64($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X64);
    // 0x8022E3F8: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x8022E3FC: andi        $a0, $a0, 0x1F
    ctx->r4 = ctx->r4 & 0X1F;
    // 0x8022E400: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x8022E404: sll         $a0, $a0, 5
    ctx->r4 = S32(ctx->r4 << 5);
    // 0x8022E408: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x8022E40C: sb          $v0, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r2;
    // 0x8022E410: lbu         $v0, 0x65($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X65);
    // 0x8022E414: lb          $a0, 0x64($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X64);
    // 0x8022E418: sll         $a1, $a1, 10
    ctx->r5 = S32(ctx->r5 << 10);
    // 0x8022E41C: or          $v1, $v1, $a1
    ctx->r3 = ctx->r3 | ctx->r5;
    // 0x8022E420: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x8022E424: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x8022E428: bgez        $a0, L_8022E444
    if (SIGNED(ctx->r4) >= 0) {
        // 0x8022E42C: sb          $v0, 0x65($s0)
        MEM_B(0X65, ctx->r16) = ctx->r2;
            goto L_8022E444;
    }
    // 0x8022E42C: sb          $v0, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r2;
    // 0x8022E430: lhu         $v0, 0x15E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X15E);
    // 0x8022E434: sb          $zero, 0x64($s0)
    MEM_B(0X64, ctx->r16) = 0;
    // 0x8022E438: sb          $zero, 0x65($s0)
    MEM_B(0X65, ctx->r16) = 0;
    // 0x8022E43C: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x8022E440: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
L_8022E444:
    // 0x8022E444: lh          $v0, 0x15E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X15E);
    // 0x8022E448: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x8022E44C: beq         $v0, $zero, L_8022E46C
    if (ctx->r2 == 0) {
        // 0x8022E450: nop
    
            goto L_8022E46C;
    }
    // 0x8022E450: nop

    // 0x8022E454: lbu         $v0, 0x66($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X66);
    // 0x8022E458: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022E45C: sb          $v0, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r2;
    // 0x8022E460: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022E464: bltzl       $v0, L_8022E46C
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022E468: sb          $zero, 0x66($s0)
        MEM_B(0X66, ctx->r16) = 0;
            goto L_8022E46C;
    }
    goto skip_0;
    // 0x8022E468: sb          $zero, 0x66($s0)
    MEM_B(0X66, ctx->r16) = 0;
    skip_0:
L_8022E46C:
    // 0x8022E46C: jal         0x8005044C
    // 0x8022E470: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x8022E470: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022E474: jal         0x80040F30
    // 0x8022E478: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_2;
    // 0x8022E478: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022E47C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E480: jal         0x8003E934
    // 0x8022E484: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_3;
    // 0x8022E484: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    after_3:
    // 0x8022E488: lbu         $v1, 0x6($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X6);
    // 0x8022E48C: andi        $v1, $v1, 0x40
    ctx->r3 = ctx->r3 & 0X40;
    // 0x8022E490: bne         $v1, $zero, L_8022E528
    if (ctx->r3 != 0) {
        // 0x8022E494: addu        $s1, $v0, $zero
        ctx->r17 = ADD32(ctx->r2, 0);
            goto L_8022E528;
    }
    // 0x8022E494: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8022E498: lh          $v0, 0x2E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X2E);
    // 0x8022E49C: subu        $v0, $s1, $v0
    ctx->r2 = SUB32(ctx->r17, ctx->r2);
    // 0x8022E4A0: slti        $v0, $v0, 0x10
    ctx->r2 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x8022E4A4: bne         $v0, $zero, L_8022E4E0
    if (ctx->r2 != 0) {
        // 0x8022E4A8: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_8022E4E0;
    }
    // 0x8022E4A8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022E4AC: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8022E4B0: beq         $v1, $v0, L_8022E528
    if (ctx->r3 == ctx->r2) {
        // 0x8022E4B4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022E528;
    }
    // 0x8022E4B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E4B8: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x8022E4BC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022E4C0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022E4C4: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x8022E4C8: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022E4CC: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    // 0x8022E4D0: jal         0x80050294
    // 0x8022E4D4: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_4;
    // 0x8022E4D4: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    after_4:
    // 0x8022E4D8: j           L_8022E528
    // 0x8022E4DC: nop

        goto L_8022E528;
    // 0x8022E4DC: nop

L_8022E4E0:
    // 0x8022E4E0: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8022E4E4: bne         $v1, $v0, L_8022E520
    if (ctx->r3 != ctx->r2) {
        // 0x8022E4E8: sll         $v0, $s1, 16
        ctx->r2 = S32(ctx->r17 << 16);
            goto L_8022E520;
    }
    // 0x8022E4E8: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x8022E4EC: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022E4F0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022E4F4: beq         $v1, $v0, L_8022E51C
    if (ctx->r3 == ctx->r2) {
        // 0x8022E4F8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022E51C;
    }
    // 0x8022E4F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E4FC: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x8022E500: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022E504: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022E508: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022E50C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8022E510: jal         0x80050294
    // 0x8022E514: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x8022E514: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_5:
    // 0x8022E518: sb          $zero, 0x74($s0)
    MEM_B(0X74, ctx->r16) = 0;
L_8022E51C:
    // 0x8022E51C: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
L_8022E520:
    // 0x8022E520: sh          $s1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r17;
    // 0x8022E524: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_8022E528:
    // 0x8022E528: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022E52C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022E530: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022E534: jr          $ra
    // 0x8022E538: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022E538: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80235F4C_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235F4C: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x80235F50: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x80235F54: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x80235F58: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x80235F5C: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x80235F60: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x80235F64: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x80235F68: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x80235F6C: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x80235F70: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x80235F74: lbu         $v1, 0x3($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X3);
    // 0x80235F78: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x80235F7C: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80235F80: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80235F84: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80235F88: lui         $s5, 0x8024
    ctx->r21 = S32(0X8024 << 16);
    // 0x80235F8C: addu        $s5, $s5, $v0
    ctx->r21 = ADD32(ctx->r21, ctx->r2);
    // 0x80235F90: lhu         $s5, -0x739C($s5)
    ctx->r21 = MEM_HU(ctx->r21, -0X739C);
    // 0x80235F94: addiu       $a2, $sp, 0x1A
    ctx->r6 = ADD32(ctx->r29, 0X1A);
    // 0x80235F98: lui         $s6, 0x8024
    ctx->r22 = S32(0X8024 << 16);
    // 0x80235F9C: addu        $s6, $s6, $v0
    ctx->r22 = ADD32(ctx->r22, ctx->r2);
    // 0x80235FA0: lhu         $s6, -0x739A($s6)
    ctx->r22 = MEM_HU(ctx->r22, -0X739A);
    // 0x80235FA4: jal         0x800874D0
    // 0x80235FA8: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    func_800874D0_628D0(rdram, ctx);
        goto after_0;
    // 0x80235FA8: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    after_0:
    // 0x80235FAC: lh          $a1, 0x18($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X18);
    // 0x80235FB0: lbu         $v0, 0x3($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X3);
    // 0x80235FB4: lh          $a2, 0x1A($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X1A);
    // 0x80235FB8: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80235FBC: addiu       $a0, $a0, -0x6ED0
    ctx->r4 = ADD32(ctx->r4, -0X6ED0);
    // 0x80235FC0: sll         $a3, $s6, 16
    ctx->r7 = S32(ctx->r22 << 16);
    // 0x80235FC4: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80235FC8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80235FCC: lbu         $v1, -0x72F8($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X72F8);
    // 0x80235FD0: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    // 0x80235FD4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80235FD8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80235FDC: sll         $v1, $v1, 5
    ctx->r3 = S32(ctx->r3 << 5);
    // 0x80235FE0: jal         0x80086F94
    // 0x80235FE4: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    func_80086F94_62394(rdram, ctx);
        goto after_1;
    // 0x80235FE4: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    after_1:
    // 0x80235FE8: lbu         $v1, 0x3($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X3);
    // 0x80235FEC: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80235FF0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80235FF4: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80235FF8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80235FFC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80236000: lhu         $v0, -0x7398($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X7398);
    // 0x80236004: beq         $v0, $zero, L_80236220
    if (ctx->r2 == 0) {
        // 0x80236008: addu        $s4, $zero, $zero
        ctx->r20 = ADD32(0, 0);
            goto L_80236220;
    }
    // 0x80236008: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
L_8023600C:
    // 0x8023600C: bgez        $s6, L_80236018
    if (SIGNED(ctx->r22) >= 0) {
        // 0x80236010: addu        $v0, $s6, $zero
        ctx->r2 = ADD32(ctx->r22, 0);
            goto L_80236018;
    }
    // 0x80236010: addu        $v0, $s6, $zero
    ctx->r2 = ADD32(ctx->r22, 0);
    // 0x80236014: addiu       $v0, $s6, 0xF
    ctx->r2 = ADD32(ctx->r22, 0XF);
L_80236018:
    // 0x80236018: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x8023601C: slt         $v0, $s4, $v0
    ctx->r2 = SIGNED(ctx->r20) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80236020: beq         $v0, $zero, L_802362DC
    if (ctx->r2 == 0) {
        // 0x80236024: addiu       $a1, $sp, 0x20
        ctx->r5 = ADD32(ctx->r29, 0X20);
            goto L_802362DC;
    }
    // 0x80236024: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x80236028: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    // 0x8023602C: lh          $v0, 0x14($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X14);
    // 0x80236030: lh          $a0, 0x16($s3)
    ctx->r4 = MEM_H(ctx->r19, 0X16);
    // 0x80236034: sll         $s0, $s4, 4
    ctx->r16 = S32(ctx->r20 << 4);
    // 0x80236038: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x8023603C: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x80236040: jal         0x800874D0
    // 0x80236044: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_800874D0_628D0(rdram, ctx);
        goto after_2;
    // 0x80236044: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_2:
    // 0x80236048: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x8023604C: jal         0x80087248
    // 0x80236050: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_80087248_62648(rdram, ctx);
        goto after_3;
    // 0x80236050: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_3:
    // 0x80236054: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80236058: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8023605C: lh          $v0, 0x18($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X18);
    // 0x80236060: lh          $a0, 0x1A($s3)
    ctx->r4 = MEM_H(ctx->r19, 0X1A);
    // 0x80236064: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    // 0x80236068: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x8023606C: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x80236070: jal         0x800874D0
    // 0x80236074: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_800874D0_628D0(rdram, ctx);
        goto after_4;
    // 0x80236074: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_4:
    // 0x80236078: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x8023607C: jal         0x80087248
    // 0x80236080: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_80087248_62648(rdram, ctx);
        goto after_5;
    // 0x80236080: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_5:
    // 0x80236084: addu        $v1, $s5, $zero
    ctx->r3 = ADD32(ctx->r21, 0);
    // 0x80236088: bgez        $s5, L_80236094
    if (SIGNED(ctx->r21) >= 0) {
        // 0x8023608C: addu        $s2, $v0, $zero
        ctx->r18 = ADD32(ctx->r2, 0);
            goto L_80236094;
    }
    // 0x8023608C: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x80236090: addiu       $v1, $s5, 0xFF
    ctx->r3 = ADD32(ctx->r21, 0XFF);
L_80236094:
    // 0x80236094: addu        $a0, $s5, $s0
    ctx->r4 = ADD32(ctx->r21, ctx->r16);
    // 0x80236098: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8023609C: jal         0x800874D0
    // 0x802360A0: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    func_800874D0_628D0(rdram, ctx);
        goto after_6;
    // 0x802360A0: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    after_6:
    // 0x802360A4: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x802360A8: jal         0x80087248
    // 0x802360AC: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_80087248_62648(rdram, ctx);
        goto after_7;
    // 0x802360AC: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_7:
    // 0x802360B0: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x802360B4: sltiu       $v0, $s1, 0x1
    ctx->r2 = ctx->r17 < 0X1 ? 1 : 0;
    // 0x802360B8: sltiu       $v1, $s2, 0x1
    ctx->r3 = ctx->r18 < 0X1 ? 1 : 0;
    // 0x802360BC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x802360C0: bnel        $v0, $zero, L_8023600C
    if (ctx->r2 != 0) {
        // 0x802360C4: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_8023600C;
    }
    goto skip_0;
    // 0x802360C4: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    skip_0:
    // 0x802360C8: beq         $a1, $zero, L_80236218
    if (ctx->r5 == 0) {
        // 0x802360CC: addu        $t7, $zero, $zero
        ctx->r15 = ADD32(0, 0);
            goto L_80236218;
    }
    // 0x802360CC: addu        $t7, $zero, $zero
    ctx->r15 = ADD32(0, 0);
    // 0x802360D0: addu        $t6, $a1, $zero
    ctx->r14 = ADD32(ctx->r5, 0);
    // 0x802360D4: addu        $t5, $s2, $zero
    ctx->r13 = ADD32(ctx->r18, 0);
    // 0x802360D8: addu        $t4, $s1, $zero
    ctx->r12 = ADD32(ctx->r17, 0);
L_802360DC:
    // 0x802360DC: lhu         $t1, 0x0($t4)
    ctx->r9 = MEM_HU(ctx->r12, 0X0);
    // 0x802360E0: lhu         $v1, 0x0($t5)
    ctx->r3 = MEM_HU(ctx->r13, 0X0);
    // 0x802360E4: lb          $t3, 0xD($s3)
    ctx->r11 = MEM_B(ctx->r19, 0XD);
    // 0x802360E8: andi        $a2, $t1, 0xFFFF
    ctx->r6 = ctx->r9 & 0XFFFF;
    // 0x802360EC: srl         $t2, $a2, 11
    ctx->r10 = S32(U32(ctx->r6) >> 11);
    // 0x802360F0: srl         $a3, $v1, 11
    ctx->r7 = S32(U32(ctx->r3) >> 11);
    // 0x802360F4: subu        $a3, $a3, $t2
    ctx->r7 = SUB32(ctx->r7, ctx->r10);
    // 0x802360F8: mult        $a3, $t3
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802360FC: mflo        $a3
    ctx->r7 = lo;
    // 0x80236100: lb          $a1, 0xC($s3)
    ctx->r5 = MEM_B(ctx->r19, 0XC);
    // 0x80236104: nop

    // 0x80236108: div         $zero, $a3, $a1
    lo = S32(S64(S32(ctx->r7)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r7)) % S64(S32(ctx->r5)));
    // 0x8023610C: bne         $a1, $zero, L_80236118
    if (ctx->r5 != 0) {
        // 0x80236110: nop
    
            goto L_80236118;
    }
    // 0x80236110: nop

    // 0x80236114: break       7
    do_break(2149802260);
L_80236118:
    // 0x80236118: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8023611C: bne         $a1, $at, L_80236130
    if (ctx->r5 != ctx->r1) {
        // 0x80236120: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80236130;
    }
    // 0x80236120: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80236124: bne         $a3, $at, L_80236130
    if (ctx->r7 != ctx->r1) {
        // 0x80236128: nop
    
            goto L_80236130;
    }
    // 0x80236128: nop

    // 0x8023612C: break       6
    do_break(2149802284);
L_80236130:
    // 0x80236130: mflo        $a3
    ctx->r7 = lo;
    // 0x80236134: sra         $t0, $a2, 6
    ctx->r8 = S32(SIGNED(ctx->r6) >> 6);
    // 0x80236138: andi        $t0, $t0, 0x1F
    ctx->r8 = ctx->r8 & 0X1F;
    // 0x8023613C: sra         $v0, $v1, 6
    ctx->r2 = S32(SIGNED(ctx->r3) >> 6);
    // 0x80236140: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x80236144: subu        $v0, $v0, $t0
    ctx->r2 = SUB32(ctx->r2, ctx->r8);
    // 0x80236148: mult        $v0, $t3
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023614C: mflo        $v0
    ctx->r2 = lo;
    // 0x80236150: nop

    // 0x80236154: nop

    // 0x80236158: div         $zero, $v0, $a1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r5)));
    // 0x8023615C: bne         $a1, $zero, L_80236168
    if (ctx->r5 != 0) {
        // 0x80236160: nop
    
            goto L_80236168;
    }
    // 0x80236160: nop

    // 0x80236164: break       7
    do_break(2149802340);
L_80236168:
    // 0x80236168: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8023616C: bne         $a1, $at, L_80236180
    if (ctx->r5 != ctx->r1) {
        // 0x80236170: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80236180;
    }
    // 0x80236170: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80236174: bne         $v0, $at, L_80236180
    if (ctx->r2 != ctx->r1) {
        // 0x80236178: nop
    
            goto L_80236180;
    }
    // 0x80236178: nop

    // 0x8023617C: break       6
    do_break(2149802364);
L_80236180:
    // 0x80236180: mflo        $v0
    ctx->r2 = lo;
    // 0x80236184: sra         $a2, $a2, 1
    ctx->r6 = S32(SIGNED(ctx->r6) >> 1);
    // 0x80236188: andi        $a2, $a2, 0x1F
    ctx->r6 = ctx->r6 & 0X1F;
    // 0x8023618C: sra         $v1, $v1, 1
    ctx->r3 = S32(SIGNED(ctx->r3) >> 1);
    // 0x80236190: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x80236194: subu        $v1, $v1, $a2
    ctx->r3 = SUB32(ctx->r3, ctx->r6);
    // 0x80236198: mult        $v1, $t3
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023619C: mflo        $v1
    ctx->r3 = lo;
    // 0x802361A0: nop

    // 0x802361A4: nop

    // 0x802361A8: div         $zero, $v1, $a1
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r5)));
    // 0x802361AC: bne         $a1, $zero, L_802361B8
    if (ctx->r5 != 0) {
        // 0x802361B0: nop
    
            goto L_802361B8;
    }
    // 0x802361B0: nop

    // 0x802361B4: break       7
    do_break(2149802420);
L_802361B8:
    // 0x802361B8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802361BC: bne         $a1, $at, L_802361D0
    if (ctx->r5 != ctx->r1) {
        // 0x802361C0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_802361D0;
    }
    // 0x802361C0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802361C4: bne         $v1, $at, L_802361D0
    if (ctx->r3 != ctx->r1) {
        // 0x802361C8: nop
    
            goto L_802361D0;
    }
    // 0x802361C8: nop

    // 0x802361CC: break       6
    do_break(2149802444);
L_802361D0:
    // 0x802361D0: mflo        $v1
    ctx->r3 = lo;
    // 0x802361D4: addiu       $t5, $t5, 0x2
    ctx->r13 = ADD32(ctx->r13, 0X2);
    // 0x802361D8: addiu       $t4, $t4, 0x2
    ctx->r12 = ADD32(ctx->r12, 0X2);
    // 0x802361DC: addiu       $t7, $t7, 0x1
    ctx->r15 = ADD32(ctx->r15, 0X1);
    // 0x802361E0: andi        $t1, $t1, 0x1
    ctx->r9 = ctx->r9 & 0X1;
    // 0x802361E4: addu        $t2, $t2, $a3
    ctx->r10 = ADD32(ctx->r10, ctx->r7);
    // 0x802361E8: sll         $t2, $t2, 11
    ctx->r10 = S32(ctx->r10 << 11);
    // 0x802361EC: or          $t1, $t1, $t2
    ctx->r9 = ctx->r9 | ctx->r10;
    // 0x802361F0: addu        $t0, $t0, $v0
    ctx->r8 = ADD32(ctx->r8, ctx->r2);
    // 0x802361F4: sll         $t0, $t0, 6
    ctx->r8 = S32(ctx->r8 << 6);
    // 0x802361F8: or          $t1, $t1, $t0
    ctx->r9 = ctx->r9 | ctx->r8;
    // 0x802361FC: slti        $v0, $t7, 0x10
    ctx->r2 = SIGNED(ctx->r15) < 0X10 ? 1 : 0;
    // 0x80236200: addu        $a2, $a2, $v1
    ctx->r6 = ADD32(ctx->r6, ctx->r3);
    // 0x80236204: sll         $a2, $a2, 1
    ctx->r6 = S32(ctx->r6 << 1);
    // 0x80236208: or          $t1, $t1, $a2
    ctx->r9 = ctx->r9 | ctx->r6;
    // 0x8023620C: sh          $t1, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r9;
    // 0x80236210: bne         $v0, $zero, L_802360DC
    if (ctx->r2 != 0) {
        // 0x80236214: addiu       $t6, $t6, 0x2
        ctx->r14 = ADD32(ctx->r14, 0X2);
            goto L_802360DC;
    }
    // 0x80236214: addiu       $t6, $t6, 0x2
    ctx->r14 = ADD32(ctx->r14, 0X2);
L_80236218:
    // 0x80236218: j           L_8023600C
    // 0x8023621C: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
        goto L_8023600C;
    // 0x8023621C: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_80236220:
    // 0x80236220: lb          $v0, 0xD($s3)
    ctx->r2 = MEM_B(ctx->r19, 0XD);
    // 0x80236224: bne         $v0, $zero, L_802362DC
    if (ctx->r2 != 0) {
        // 0x80236228: nop
    
            goto L_802362DC;
    }
    // 0x80236228: nop

L_8023622C:
    // 0x8023622C: addu        $v0, $s6, $zero
    ctx->r2 = ADD32(ctx->r22, 0);
    // 0x80236230: bltzl       $v0, L_80236238
    if (SIGNED(ctx->r2) < 0) {
        // 0x80236234: addiu       $v0, $v0, 0xF
        ctx->r2 = ADD32(ctx->r2, 0XF);
            goto L_80236238;
    }
    goto skip_1;
    // 0x80236234: addiu       $v0, $v0, 0xF
    ctx->r2 = ADD32(ctx->r2, 0XF);
    skip_1:
L_80236238:
    // 0x80236238: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x8023623C: slt         $v0, $s4, $v0
    ctx->r2 = SIGNED(ctx->r20) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80236240: beq         $v0, $zero, L_802362DC
    if (ctx->r2 == 0) {
        // 0x80236244: addiu       $a1, $sp, 0x20
        ctx->r5 = ADD32(ctx->r29, 0X20);
            goto L_802362DC;
    }
    // 0x80236244: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x80236248: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    // 0x8023624C: lh          $v0, 0x14($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X14);
    // 0x80236250: lh          $a0, 0x16($s3)
    ctx->r4 = MEM_H(ctx->r19, 0X16);
    // 0x80236254: sll         $s0, $s4, 4
    ctx->r16 = S32(ctx->r20 << 4);
    // 0x80236258: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x8023625C: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x80236260: jal         0x800874D0
    // 0x80236264: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_800874D0_628D0(rdram, ctx);
        goto after_8;
    // 0x80236264: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_8:
    // 0x80236268: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x8023626C: jal         0x80087248
    // 0x80236270: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_80087248_62648(rdram, ctx);
        goto after_9;
    // 0x80236270: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_9:
    // 0x80236274: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80236278: bgez        $s5, L_80236284
    if (SIGNED(ctx->r21) >= 0) {
        // 0x8023627C: addu        $v0, $s5, $zero
        ctx->r2 = ADD32(ctx->r21, 0);
            goto L_80236284;
    }
    // 0x8023627C: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
    // 0x80236280: addiu       $v0, $s5, 0xFF
    ctx->r2 = ADD32(ctx->r21, 0XFF);
L_80236284:
    // 0x80236284: sra         $v0, $v0, 8
    ctx->r2 = S32(SIGNED(ctx->r2) >> 8);
    // 0x80236288: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8023628C: subu        $v1, $s5, $v0
    ctx->r3 = SUB32(ctx->r21, ctx->r2);
    // 0x80236290: addu        $a0, $s0, $v1
    ctx->r4 = ADD32(ctx->r16, ctx->r3);
    // 0x80236294: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80236298: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8023629C: jal         0x800874D0
    // 0x802362A0: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    func_800874D0_628D0(rdram, ctx);
        goto after_10;
    // 0x802362A0: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    after_10:
    // 0x802362A4: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x802362A8: jal         0x80087248
    // 0x802362AC: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_80087248_62648(rdram, ctx);
        goto after_11;
    // 0x802362AC: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_11:
    // 0x802362B0: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x802362B4: sltiu       $v0, $s1, 0x1
    ctx->r2 = ctx->r17 < 0X1 ? 1 : 0;
    // 0x802362B8: sltiu       $v1, $a1, 0x1
    ctx->r3 = ctx->r5 < 0X1 ? 1 : 0;
    // 0x802362BC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x802362C0: bnel        $v0, $zero, L_8023622C
    if (ctx->r2 != 0) {
        // 0x802362C4: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_8023622C;
    }
    goto skip_2;
    // 0x802362C4: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    skip_2:
    // 0x802362C8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802362CC: jal         0x80099F90
    // 0x802362D0: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    bcopy_recomp(rdram, ctx);
        goto after_12;
    // 0x802362D0: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_12:
    // 0x802362D4: j           L_8023622C
    // 0x802362D8: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
        goto L_8023622C;
    // 0x802362D8: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_802362DC:
    // 0x802362DC: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x802362E0: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x802362E4: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x802362E8: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x802362EC: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x802362F0: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x802362F4: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x802362F8: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x802362FC: jr          $ra
    // 0x80236300: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    TRACE_RETURN()
    return;
    // 0x80236300: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_802323A4_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802323A4: lb          $v0, 0x385($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X385);
    // 0x802323A8: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x802323AC: beq         $v0, $zero, L_802323C0
    if (ctx->r2 == 0) {
        // 0x802323B0: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_802323C0;
    }
    // 0x802323B0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802323B4: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x802323B8: j           L_802323CC
    // 0x802323BC: sb          $v0, 0x385($a0)
    MEM_B(0X385, ctx->r4) = ctx->r2;
        goto L_802323CC;
    // 0x802323BC: sb          $v0, 0x385($a0)
    MEM_B(0X385, ctx->r4) = ctx->r2;
L_802323C0:
    // 0x802323C0: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x802323C4: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    // 0x802323C8: sh          $v0, 0x44($a0)
    MEM_H(0X44, ctx->r4) = ctx->r2;
L_802323CC:
    // 0x802323CC: jr          $ra
    // 0x802323D0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x802323D0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_802354F0_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802354F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802354F4: jr          $ra
    // 0x802354F8: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x802354F8: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_8022B3C4_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B3C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022B3C8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B3CC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B3D0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022B3D4: addiu       $a0, $a0, 0x49C4
    ctx->r4 = ADD32(ctx->r4, 0X49C4);
    // 0x8022B3D8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022B3DC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022B3E0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022B3E4: jal         0x8004EC38
    // 0x8022B3E8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    func_8004EC38_2A038(rdram, ctx);
        goto after_0;
    // 0x8022B3E8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x8022B3EC: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8022B3F0: lhu         $v1, 0x4A06($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X4A06);
    // 0x8022B3F4: lbu         $a0, 0xA($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA);
    // 0x8022B3F8: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x8022B3FC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022B400: beq         $a0, $zero, L_8022B41C
    if (ctx->r4 == 0) {
        // 0x8022B404: sh          $v0, 0x36E($s0)
        MEM_H(0X36E, ctx->r16) = ctx->r2;
            goto L_8022B41C;
    }
    // 0x8022B404: sh          $v0, 0x36E($s0)
    MEM_H(0X36E, ctx->r16) = ctx->r2;
    // 0x8022B408: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B40C: beq         $a0, $v0, L_8022B434
    if (ctx->r4 == ctx->r2) {
        // 0x8022B410: nop
    
            goto L_8022B434;
    }
    // 0x8022B410: nop

    // 0x8022B414: j           L_8022B604
    // 0x8022B418: nop

        goto L_8022B604;
    // 0x8022B418: nop

L_8022B41C:
    // 0x8022B41C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B420: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022B424: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022B428: addiu       $v0, $zero, 0x5A
    ctx->r2 = ADD32(0, 0X5A);
    // 0x8022B42C: sh          $v0, 0x32C($s0)
    MEM_H(0X32C, ctx->r16) = ctx->r2;
    // 0x8022B430: sh          $zero, 0x330($s0)
    MEM_H(0X330, ctx->r16) = 0;
L_8022B434:
    // 0x8022B434: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x8022B438: lui         $v0, 0x48
    ctx->r2 = S32(0X48 << 16);
    // 0x8022B43C: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8022B440: beq         $v0, $zero, L_8022B458
    if (ctx->r2 == 0) {
        // 0x8022B444: addiu       $s2, $s0, 0x14
        ctx->r18 = ADD32(ctx->r16, 0X14);
            goto L_8022B458;
    }
    // 0x8022B444: addiu       $s2, $s0, 0x14
    ctx->r18 = ADD32(ctx->r16, 0X14);
    // 0x8022B448: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022B44C: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8022B450: bne         $v0, $zero, L_8022B5E4
    if (ctx->r2 != 0) {
        // 0x8022B454: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022B5E4;
    }
    // 0x8022B454: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_8022B458:
    // 0x8022B458: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022B45C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022B460: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022B464: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022B468: jal         0x8004F820
    // 0x8022B46C: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x8022B46C: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_1:
    // 0x8022B470: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B474: addiu       $a1, $zero, 0x34
    ctx->r5 = ADD32(0, 0X34);
    // 0x8022B478: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x8022B47C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022B480: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022B484: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022B488: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022B48C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022B490: jal         0x8004DA90
    // 0x8022B494: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x8022B494: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    after_2:
    // 0x8022B498: jal         0x80040F30
    // 0x8022B49C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_3;
    // 0x8022B49C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022B4A0: sw          $v0, 0x48($s1)
    MEM_W(0X48, ctx->r17) = ctx->r2;
    // 0x8022B4A4: lb          $v1, 0xA6($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA6);
    // 0x8022B4A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B4AC: bne         $v1, $v0, L_8022B4BC
    if (ctx->r3 != ctx->r2) {
        // 0x8022B4B0: addiu       $a0, $zero, 0xB0
        ctx->r4 = ADD32(0, 0XB0);
            goto L_8022B4BC;
    }
    // 0x8022B4B0: addiu       $a0, $zero, 0xB0
    ctx->r4 = ADD32(0, 0XB0);
    // 0x8022B4B4: jal         0x8002A33C
    // 0x8022B4B8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_4;
    // 0x8022B4B8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_4:
L_8022B4BC:
    // 0x8022B4BC: jal         0x8003E934
    // 0x8022B4C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_5;
    // 0x8022B4C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8022B4C4: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022B4C8: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x8022B4CC: lh          $v1, 0x2E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2E);
    // 0x8022B4D0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B4D4: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022B4D8: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x8022B4DC: bltz        $v0, L_8022B4F4
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022B4E0: slti        $v0, $v0, 0x21
        ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
            goto L_8022B4F4;
    }
    // 0x8022B4E0: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x8022B4E4: beq         $v0, $zero, L_8022B504
    if (ctx->r2 == 0) {
        // 0x8022B4E8: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022B504;
    }
    // 0x8022B4E8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022B4EC: j           L_8022B528
    // 0x8022B4F0: nop

        goto L_8022B528;
    // 0x8022B4F0: nop

L_8022B4F4:
    // 0x8022B4F4: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x8022B4F8: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x8022B4FC: bne         $v0, $zero, L_8022B528
    if (ctx->r2 != 0) {
        // 0x8022B500: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022B528;
    }
    // 0x8022B500: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_8022B504:
    // 0x8022B504: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x8022B508: jal         0x8009A3B4
    // 0x8022B50C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x8022B50C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x8022B510: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8022B514: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x8022B518: jal         0x8009A3B4
    // 0x8022B51C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x8022B51C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_7:
    // 0x8022B520: j           L_8022B538
    // 0x8022B524: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022B538;
    // 0x8022B524: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022B528:
    // 0x8022B528: lw          $v0, 0x48($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X48);
    // 0x8022B52C: andi        $v0, $v0, 0xF00
    ctx->r2 = ctx->r2 & 0XF00;
    // 0x8022B530: beq         $v0, $zero, L_8022B54C
    if (ctx->r2 == 0) {
        // 0x8022B534: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022B54C;
    }
    // 0x8022B534: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022B538:
    // 0x8022B538: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022B53C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022B540: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8022B544: j           L_8022B604
    // 0x8022B548: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
        goto L_8022B604;
    // 0x8022B548: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
L_8022B54C:
    // 0x8022B54C: lh          $v0, 0x36($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X36);
    // 0x8022B550: bne         $v0, $zero, L_8022B580
    if (ctx->r2 != 0) {
        // 0x8022B554: lui         $v0, 0x1
        ctx->r2 = S32(0X1 << 16);
            goto L_8022B580;
    }
    // 0x8022B554: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x8022B558: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x8022B55C: ori         $v0, $v0, 0x1FFF
    ctx->r2 = ctx->r2 | 0X1FFF;
    // 0x8022B560: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8022B564: bne         $v0, $zero, L_8022B580
    if (ctx->r2 != 0) {
        // 0x8022B568: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_8022B580;
    }
    // 0x8022B568: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022B56C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022B570: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8022B574: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022B578: j           L_8022B600
    // 0x8022B57C: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
        goto L_8022B600;
    // 0x8022B57C: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
L_8022B580:
    // 0x8022B580: lh          $v0, 0x34($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X34);
    // 0x8022B584: bne         $v0, $zero, L_8022B5F0
    if (ctx->r2 != 0) {
        // 0x8022B588: lui         $v0, 0x11
        ctx->r2 = S32(0X11 << 16);
            goto L_8022B5F0;
    }
    // 0x8022B588: lui         $v0, 0x11
    ctx->r2 = S32(0X11 << 16);
    // 0x8022B58C: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x8022B590: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8022B594: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8022B598: bne         $v0, $zero, L_8022B5F0
    if (ctx->r2 != 0) {
        // 0x8022B59C: nop
    
            goto L_8022B5F0;
    }
    // 0x8022B59C: nop

    // 0x8022B5A0: lh          $v0, 0x44($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X44);
    // 0x8022B5A4: bltzl       $v0, L_8022B5C0
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022B5A8: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_8022B5C0;
    }
    goto skip_0;
    // 0x8022B5A8: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_0:
    // 0x8022B5AC: slti        $v0, $v0, 0x10
    ctx->r2 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x8022B5B0: beq         $v0, $zero, L_8022B5F0
    if (ctx->r2 == 0) {
        // 0x8022B5B4: nop
    
            goto L_8022B5F0;
    }
    // 0x8022B5B4: nop

    // 0x8022B5B8: j           L_8022B5CC
    // 0x8022B5BC: nop

        goto L_8022B5CC;
    // 0x8022B5BC: nop

L_8022B5C0:
    // 0x8022B5C0: slti        $v0, $v0, 0x10
    ctx->r2 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x8022B5C4: beq         $v0, $zero, L_8022B5F0
    if (ctx->r2 == 0) {
        // 0x8022B5C8: nop
    
            goto L_8022B5F0;
    }
    // 0x8022B5C8: nop

L_8022B5CC:
    // 0x8022B5CC: lh          $v0, 0x46($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X46);
    // 0x8022B5D0: addiu       $v0, $v0, 0x400
    ctx->r2 = ADD32(ctx->r2, 0X400);
    // 0x8022B5D4: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022B5D8: slti        $v0, $v0, 0x800
    ctx->r2 = SIGNED(ctx->r2) < 0X800 ? 1 : 0;
    // 0x8022B5DC: beq         $v0, $zero, L_8022B5F0
    if (ctx->r2 == 0) {
        // 0x8022B5E0: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8022B5F0;
    }
    // 0x8022B5E0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_8022B5E4:
    // 0x8022B5E4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022B5E8: j           L_8022B604
    // 0x8022B5EC: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_8022B604;
    // 0x8022B5EC: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8022B5F0:
    // 0x8022B5F0: lhu         $v1, 0x0($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X0);
    // 0x8022B5F4: andi        $v0, $v1, 0x10
    ctx->r2 = ctx->r3 & 0X10;
    // 0x8022B5F8: bne         $v0, $zero, L_8022B604
    if (ctx->r2 != 0) {
        // 0x8022B5FC: ori         $v0, $v1, 0x1
        ctx->r2 = ctx->r3 | 0X1;
            goto L_8022B604;
    }
    // 0x8022B5FC: ori         $v0, $v1, 0x1
    ctx->r2 = ctx->r3 | 0X1;
L_8022B600:
    // 0x8022B600: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8022B604:
    // 0x8022B604: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022B608: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022B60C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022B610: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B614: jr          $ra
    // 0x8022B618: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022B618: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022C7D0_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C7D0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022C7D4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C7D8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C7DC: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022C7E0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022C7E4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022C7E8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022C7EC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022C7F0: jal         0x8009A3B4
    // 0x8022C7F4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022C7F4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x8022C7F8: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022C7FC: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022C800: jal         0x8009A3B4
    // 0x8022C804: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022C804: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022C808: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022C80C: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022C810: jal         0x8009A3B4
    // 0x8022C814: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022C814: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022C818: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022C81C: jal         0x800A3450
    // 0x8022C820: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x8022C820: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    after_3:
    // 0x8022C824: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022C828: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x8022C82C: sh          $v0, 0x1DA($s0)
    MEM_H(0X1DA, ctx->r16) = ctx->r2;
    // 0x8022C830: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022C834: bne         $v1, $v0, L_8022C854
    if (ctx->r3 != ctx->r2) {
        // 0x8022C838: addiu       $s1, $s0, 0x64
        ctx->r17 = ADD32(ctx->r16, 0X64);
            goto L_8022C854;
    }
    // 0x8022C838: addiu       $s1, $s0, 0x64
    ctx->r17 = ADD32(ctx->r16, 0X64);
    // 0x8022C83C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022C840: beq         $v0, $zero, L_8022C85C
    if (ctx->r2 == 0) {
        // 0x8022C844: sll         $v0, $v0, 2
        ctx->r2 = S32(ctx->r2 << 2);
            goto L_8022C85C;
    }
    // 0x8022C844: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022C848: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022C84C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022C850: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_8022C854:
    // 0x8022C854: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022C858: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_8022C85C:
    // 0x8022C85C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022C860: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022C864: lw          $v0, -0x7BF4($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7BF4);
    // 0x8022C868: jalr        $v0
    // 0x8022C86C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x8022C86C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8022C870: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022C874: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022C878: bnel        $v1, $v0, L_8022C930
    if (ctx->r3 != ctx->r2) {
        // 0x8022C87C: sw          $zero, 0x8($s2)
        MEM_W(0X8, ctx->r18) = 0;
            goto L_8022C930;
    }
    goto skip_0;
    // 0x8022C87C: sw          $zero, 0x8($s2)
    MEM_W(0X8, ctx->r18) = 0;
    skip_0:
    // 0x8022C880: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022C884: beq         $v0, $zero, L_8022C908
    if (ctx->r2 == 0) {
        // 0x8022C888: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022C908;
    }
    // 0x8022C888: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022C88C: lb          $v0, 0x3($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X3);
    // 0x8022C890: beq         $v0, $zero, L_8022C8BC
    if (ctx->r2 == 0) {
        // 0x8022C894: nop
    
            goto L_8022C8BC;
    }
    // 0x8022C894: nop

    // 0x8022C898: lb          $v0, 0x0($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X0);
    // 0x8022C89C: bne         $v0, $zero, L_8022C8B0
    if (ctx->r2 != 0) {
        // 0x8022C8A0: addiu       $a0, $zero, 0x190
        ctx->r4 = ADD32(0, 0X190);
            goto L_8022C8B0;
    }
    // 0x8022C8A0: addiu       $a0, $zero, 0x190
    ctx->r4 = ADD32(0, 0X190);
    // 0x8022C8A4: jal         0x8002A33C
    // 0x8022C8A8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_5;
    // 0x8022C8A8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_5:
    // 0x8022C8AC: sb          $zero, 0x3($s1)
    MEM_B(0X3, ctx->r17) = 0;
L_8022C8B0:
    // 0x8022C8B0: lb          $v0, 0x3($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X3);
    // 0x8022C8B4: bne         $v0, $zero, L_8022C8D8
    if (ctx->r2 != 0) {
        // 0x8022C8B8: nop
    
            goto L_8022C8D8;
    }
    // 0x8022C8B8: nop

L_8022C8BC:
    // 0x8022C8BC: lb          $v0, 0x0($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X0);
    // 0x8022C8C0: blez        $v0, L_8022C8D8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8022C8C4: addiu       $a0, $zero, 0x191
        ctx->r4 = ADD32(0, 0X191);
            goto L_8022C8D8;
    }
    // 0x8022C8C4: addiu       $a0, $zero, 0x191
    ctx->r4 = ADD32(0, 0X191);
    // 0x8022C8C8: jal         0x8002A33C
    // 0x8022C8CC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_6;
    // 0x8022C8CC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_6:
    // 0x8022C8D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C8D4: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
L_8022C8D8:
    // 0x8022C8D8: lh          $v0, 0x15E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X15E);
    // 0x8022C8DC: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x8022C8E0: beq         $v0, $zero, L_8022C900
    if (ctx->r2 == 0) {
        // 0x8022C8E4: nop
    
            goto L_8022C900;
    }
    // 0x8022C8E4: nop

    // 0x8022C8E8: lb          $v0, 0x2($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X2);
    // 0x8022C8EC: bne         $v0, $zero, L_8022C900
    if (ctx->r2 != 0) {
        // 0x8022C8F0: nop
    
            goto L_8022C900;
    }
    // 0x8022C8F0: nop

    // 0x8022C8F4: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022C8F8: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8022C8FC: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_8022C900:
    // 0x8022C900: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022C904: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8022C908:
    // 0x8022C908: bnel        $v1, $v0, L_8022C930
    if (ctx->r3 != ctx->r2) {
        // 0x8022C90C: sw          $zero, 0x8($s2)
        MEM_W(0X8, ctx->r18) = 0;
            goto L_8022C930;
    }
    goto skip_1;
    // 0x8022C90C: sw          $zero, 0x8($s2)
    MEM_W(0X8, ctx->r18) = 0;
    skip_1:
    // 0x8022C910: lw          $v0, 0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X8);
    // 0x8022C914: lui         $v1, 0xFF
    ctx->r3 = S32(0XFF << 16);
    // 0x8022C918: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x8022C91C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022C920: beq         $v0, $zero, L_8022C92C
    if (ctx->r2 == 0) {
        // 0x8022C924: addiu       $v0, $zero, 0x7FFF
        ctx->r2 = ADD32(0, 0X7FFF);
            goto L_8022C92C;
    }
    // 0x8022C924: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x8022C928: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
L_8022C92C:
    // 0x8022C92C: sw          $zero, 0x8($s2)
    MEM_W(0X8, ctx->r18) = 0;
L_8022C930:
    // 0x8022C930: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022C934: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022C938: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022C93C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C940: jr          $ra
    // 0x8022C944: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022C944: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023687C_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023687C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80236880: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80236884: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80236888: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8023688C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80236890: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80236894: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80236898: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8023689C: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x802368A0: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x802368A4: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x802368A8: ori         $v1, $v1, 0x6
    ctx->r3 = ctx->r3 | 0X6;
    // 0x802368AC: jal         0x8004D5D4
    // 0x802368B0: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x802368B0: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x802368B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802368B8: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x802368BC: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x802368C0: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x802368C4: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x802368C8: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x802368CC: jal         0x8003E934
    // 0x802368D0: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x802368D0: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    after_1:
    // 0x802368D4: addiu       $s1, $s0, 0x310
    ctx->r17 = ADD32(ctx->r16, 0X310);
    // 0x802368D8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802368DC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x802368E0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802368E4: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x802368E8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802368EC: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x802368F0: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802368F4: addiu       $v0, $v0, -0x7268
    ctx->r2 = ADD32(ctx->r2, -0X7268);
    // 0x802368F8: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x802368FC: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80236900: addiu       $v0, $v0, -0x7274
    ctx->r2 = ADD32(ctx->r2, -0X7274);
    // 0x80236904: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x80236908: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8023690C: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80236910: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80236914: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80236918: sb          $zero, 0x74($s0)
    MEM_B(0X74, ctx->r16) = 0;
    // 0x8023691C: jal         0x8009A3B4
    // 0x80236920: sh          $zero, 0x308($s0)
    MEM_H(0X308, ctx->r16) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80236920: sh          $zero, 0x308($s0)
    MEM_H(0X308, ctx->r16) = 0;
    after_2:
    // 0x80236924: addiu       $a0, $s0, 0x328
    ctx->r4 = ADD32(ctx->r16, 0X328);
    // 0x80236928: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023692C: addiu       $a2, $zero, -0x60
    ctx->r6 = ADD32(0, -0X60);
    // 0x80236930: addiu       $v0, $zero, -0x30
    ctx->r2 = ADD32(0, -0X30);
    // 0x80236934: sh          $v0, 0x318($s0)
    MEM_H(0X318, ctx->r16) = ctx->r2;
    // 0x80236938: addiu       $v0, $zero, -0x48
    ctx->r2 = ADD32(0, -0X48);
    // 0x8023693C: sh          $v0, 0x31A($s0)
    MEM_H(0X31A, ctx->r16) = ctx->r2;
    // 0x80236940: addiu       $v0, $zero, 0x48
    ctx->r2 = ADD32(0, 0X48);
    // 0x80236944: sh          $v0, 0x31E($s0)
    MEM_H(0X31E, ctx->r16) = ctx->r2;
    // 0x80236948: lui         $v0, 0x888
    ctx->r2 = S32(0X888 << 16);
    // 0x8023694C: sh          $zero, 0x31C($s0)
    MEM_H(0X31C, ctx->r16) = 0;
    // 0x80236950: sw          $v0, 0x30C($s0)
    MEM_W(0X30C, ctx->r16) = ctx->r2;
    // 0x80236954: jal         0x800540BC
    // 0x80236958: sh          $zero, 0x30A($s0)
    MEM_H(0X30A, ctx->r16) = 0;
    func_800540BC_2F4BC(rdram, ctx);
        goto after_3;
    // 0x80236958: sh          $zero, 0x30A($s0)
    MEM_H(0X30A, ctx->r16) = 0;
    after_3:
    // 0x8023695C: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80236960: lh          $a2, 0x318($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X318);
    // 0x80236964: lh          $a3, 0x31A($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X31A);
    // 0x80236968: lh          $v0, 0x31C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X31C);
    // 0x8023696C: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x80236970: jal         0x80237314
    // 0x80236974: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_80237314_ovl31(rdram, ctx);
        goto after_4;
    // 0x80236974: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_4:
    // 0x80236978: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023697C: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x80236980: jal         0x8009A3B4
    // 0x80236984: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x80236984: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x80236988: lhu         $v1, 0x310($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X310);
    // 0x8023698C: lhu         $a2, 0x14($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X14);
    // 0x80236990: lhu         $a0, 0x312($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X312);
    // 0x80236994: lhu         $a3, 0x16($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X16);
    // 0x80236998: lhu         $a1, 0x314($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X314);
    // 0x8023699C: lhu         $t0, 0x18($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X18);
    // 0x802369A0: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x802369A4: lui         $t1, 0x8021
    ctx->r9 = S32(0X8021 << 16);
    // 0x802369A8: lw          $t1, 0x298($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X298);
    // 0x802369AC: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x802369B0: addu        $a0, $a0, $a3
    ctx->r4 = ADD32(ctx->r4, ctx->r7);
    // 0x802369B4: addu        $a1, $a1, $t0
    ctx->r5 = ADD32(ctx->r5, ctx->r8);
    // 0x802369B8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802369BC: addu        $v0, $v0, $t1
    ctx->r2 = ADD32(ctx->r2, ctx->r9);
    // 0x802369C0: sh          $v1, 0x310($s0)
    MEM_H(0X310, ctx->r16) = ctx->r3;
    // 0x802369C4: sh          $a0, 0x312($s0)
    MEM_H(0X312, ctx->r16) = ctx->r4;
    // 0x802369C8: sh          $a1, 0x314($s0)
    MEM_H(0X314, ctx->r16) = ctx->r5;
    // 0x802369CC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x802369D0: lbu         $v0, 0x8($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X8);
    // 0x802369D4: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x802369D8: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    // 0x802369DC: sh          $v0, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r2;
    // 0x802369E0: sh          $v0, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r2;
    // 0x802369E4: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x802369E8: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x802369EC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802369F0: jr          $ra
    // 0x802369F4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x802369F4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80236EF8_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236EF8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80236EFC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80236F00: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80236F04: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80236F08: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80236F0C: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80236F10: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80236F14: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x80236F18: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x80236F1C: beq         $v0, $zero, L_80237024
    if (ctx->r2 == 0) {
        // 0x80236F20: addiu       $a0, $s0, 0x308
        ctx->r4 = ADD32(ctx->r16, 0X308);
            goto L_80237024;
    }
    // 0x80236F20: addiu       $a0, $s0, 0x308
    ctx->r4 = ADD32(ctx->r16, 0X308);
    // 0x80236F24: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80236F28: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80236F2C: addu        $at, $at, $v0
    gpr jr_addend_80236F34 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80236F30: lw          $v0, -0x6FE8($at)
    ctx->r2 = ADD32(ctx->r1, -0X6FE8);
    // 0x80236F34: jr          $v0
    // 0x80236F38: nop

    switch (jr_addend_80236F34 >> 2) {
        case 0: goto L_80236F3C; break;
        case 1: goto L_80236F60; break;
        case 2: goto L_80236F8C; break;
        case 3: goto L_80236F98; break;
        case 4: goto L_80236FD4; break;
        case 5: goto L_80236FF0; break;
        default: switch_error(__func__, 0x80236F34, 0x80239018);
    }
    // 0x80236F38: nop

L_80236F3C:
    // 0x80236F3C: jal         0x8023687C
    // 0x80236F40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8023687C_ovl31(rdram, ctx);
        goto after_0;
    // 0x80236F40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80236F44: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236F48: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80236F4C: jal         0x80050294
    // 0x80236F50: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x80236F50: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x80236F54: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80236F58: j           L_80236FE8
    // 0x80236F5C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80236FE8;
    // 0x80236F5C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80236F60:
    // 0x80236F60: lw          $v0, 0x184($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X184);
    // 0x80236F64: bne         $v0, $s0, L_80237024
    if (ctx->r2 != ctx->r16) {
        // 0x80236F68: nop
    
            goto L_80237024;
    }
    // 0x80236F68: nop

    // 0x80236F6C: jal         0x80237228
    // 0x80236F70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80237228_ovl31(rdram, ctx);
        goto after_2;
    // 0x80236F70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80236F74: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80236F78: beql        $v0, $zero, L_80237024
    if (ctx->r2 == 0) {
        // 0x80236F7C: sw          $zero, 0x184($s1)
        MEM_W(0X184, ctx->r17) = 0;
            goto L_80237024;
    }
    goto skip_0;
    // 0x80236F7C: sw          $zero, 0x184($s1)
    MEM_W(0X184, ctx->r17) = 0;
    skip_0:
    // 0x80236F80: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80236F84: j           L_80236FE8
    // 0x80236F88: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80236FE8;
    // 0x80236F88: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80236F8C:
    // 0x80236F8C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80236F90: j           L_80236FE8
    // 0x80236F94: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80236FE8;
    // 0x80236F94: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80236F98:
    // 0x80236F98: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80236F9C: lw          $a1, 0x2B94($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2B94);
    // 0x80236FA0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x80236FA4: jal         0x80061510
    // 0x80236FA8: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_80061510_3C910(rdram, ctx);
        goto after_3;
    // 0x80236FA8: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_3:
    // 0x80236FAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236FB0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80236FB4: jal         0x80050294
    // 0x80236FB8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_4;
    // 0x80236FB8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x80236FBC: addiu       $a0, $zero, 0x103
    ctx->r4 = ADD32(0, 0X103);
    // 0x80236FC0: jal         0x8002A33C
    // 0x80236FC4: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_5;
    // 0x80236FC4: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_5:
    // 0x80236FC8: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80236FCC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80236FD0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80236FD4:
    // 0x80236FD4: sw          $zero, 0x184($s1)
    MEM_W(0X184, ctx->r17) = 0;
    // 0x80236FD8: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80236FDC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80236FE0: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x80236FE4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80236FE8:
    // 0x80236FE8: j           L_80237024
    // 0x80236FEC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80237024;
    // 0x80236FEC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80236FF0:
    // 0x80236FF0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80236FF4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80236FF8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80236FFC: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80237000: bne         $v0, $zero, L_80237024
    if (ctx->r2 != 0) {
        // 0x80237004: lui         $v0, 0x48C
        ctx->r2 = S32(0X48C << 16);
            goto L_80237024;
    }
    // 0x80237004: lui         $v0, 0x48C
    ctx->r2 = S32(0X48C << 16);
    // 0x80237008: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8023700C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80237010: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    // 0x80237014: addiu       $v1, $zero, 0x2D
    ctx->r3 = ADD32(0, 0X2D);
    // 0x80237018: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8023701C: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x80237020: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
L_80237024:
    // 0x80237024: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80237028: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023702C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80237030: jr          $ra
    // 0x80237034: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80237034: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022E580_ovl31(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x8022E590: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022E594: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x8022E598: jal         0x8004DA90
    // 0x8022E59C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8022E59C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x8022E5A0: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x8022E5A4: lhu         $v1, 0x4E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X4E);
    // 0x8022E5A8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022E5AC: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8022E5B0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022E5B4: bltz        $v0, L_8022E5F8
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022E5B8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022E5F8;
    }
    // 0x8022E5B8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022E5BC: lbu         $v1, 0x1DC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1DC);
    // 0x8022E5C0: bne         $v1, $v0, L_8022E5EC
    if (ctx->r3 != ctx->r2) {
        // 0x8022E5C4: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022E5EC;
    }
    // 0x8022E5C4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022E5C8: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022E5CC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022E5D0: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022E5D4: jal         0x8004F820
    // 0x8022E5D8: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x8022E5D8: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_1:
    // 0x8022E5DC: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022E5E0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022E5E4: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022E5E8: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_8022E5EC:
    // 0x8022E5EC: lbu         $v0, 0xCA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XCA);
    // 0x8022E5F0: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x8022E5F4: sb          $v0, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r2;
L_8022E5F8:
    // 0x8022E5F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022E5FC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E600: jr          $ra
    // 0x8022E604: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E604: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80231ADC_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231ADC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80231AE0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80231AE4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80231AE8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80231AEC: lw          $v0, 0xC4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC4);
    // 0x80231AF0: andi        $v0, $v0, 0xF00
    ctx->r2 = ctx->r2 & 0XF00;
    // 0x80231AF4: beq         $v0, $zero, L_80231B54
    if (ctx->r2 == 0) {
        // 0x80231AF8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80231B54;
    }
    // 0x80231AF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80231AFC: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80231B00: lh          $a0, 0x56($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X56);
    // 0x80231B04: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80231B08: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80231B0C: sh          $v0, 0x380($s0)
    MEM_H(0X380, ctx->r16) = ctx->r2;
    // 0x80231B10: lh          $v0, 0x380($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X380);
    // 0x80231B14: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x80231B18: slt         $v0, $v0, $a0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80231B1C: beq         $v0, $zero, L_80231B2C
    if (ctx->r2 == 0) {
        // 0x80231B20: sb          $v1, 0xA($s0)
        MEM_B(0XA, ctx->r16) = ctx->r3;
            goto L_80231B2C;
    }
    // 0x80231B20: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x80231B24: j           L_80231B30
    // 0x80231B28: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
        goto L_80231B30;
    // 0x80231B28: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
L_80231B2C:
    // 0x80231B2C: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
L_80231B30:
    // 0x80231B30: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80231B34: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x80231B38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80231B3C: jal         0x80050294
    // 0x80231B40: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80231B40: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80231B44: jal         0x80231D68
    // 0x80231B48: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80231D68_ovl31(rdram, ctx);
        goto after_1;
    // 0x80231B48: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80231B4C: j           L_80231C08
    // 0x80231B50: nop

        goto L_80231C08;
    // 0x80231B50: nop

L_80231B54:
    // 0x80231B54: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80231B58: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80231B5C: jal         0x8004DA90
    // 0x80231B60: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x80231B60: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x80231B64: lb          $v0, 0x385($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X385);
    // 0x80231B68: bne         $v0, $zero, L_80231C00
    if (ctx->r2 != 0) {
        // 0x80231B6C: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80231C00;
    }
    // 0x80231B6C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80231B70: lb          $v1, 0xA6($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA6);
    // 0x80231B74: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231B78: bne         $v1, $v0, L_80231C08
    if (ctx->r3 != ctx->r2) {
        // 0x80231B7C: nop
    
            goto L_80231C08;
    }
    // 0x80231B7C: nop

    // 0x80231B80: lhu         $v0, 0x1DA($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1DA);
    // 0x80231B84: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80231B88: bne         $v0, $zero, L_80231BC4
    if (ctx->r2 != 0) {
        // 0x80231B8C: addiu       $a0, $s0, 0x378
        ctx->r4 = ADD32(ctx->r16, 0X378);
            goto L_80231BC4;
    }
    // 0x80231B8C: addiu       $a0, $s0, 0x378
    ctx->r4 = ADD32(ctx->r16, 0X378);
    // 0x80231B90: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x80231B94: bne         $v0, $zero, L_80231BA8
    if (ctx->r2 != 0) {
        // 0x80231B98: nop
    
            goto L_80231BA8;
    }
    // 0x80231B98: nop

    // 0x80231B9C: lbu         $v0, 0x384($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X384);
    // 0x80231BA0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231BA4: sb          $v0, 0x384($s0)
    MEM_B(0X384, ctx->r16) = ctx->r2;
L_80231BA8:
    // 0x80231BA8: lbu         $v0, 0x384($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X384);
    // 0x80231BAC: beq         $v0, $v1, L_80231BC0
    if (ctx->r2 == ctx->r3) {
        // 0x80231BB0: addiu       $v0, $zero, 0x78
        ctx->r2 = ADD32(0, 0X78);
            goto L_80231BC0;
    }
    // 0x80231BB0: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x80231BB4: sb          $v0, 0x385($s0)
    MEM_B(0X385, ctx->r16) = ctx->r2;
    // 0x80231BB8: j           L_80231C08
    // 0x80231BBC: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
        goto L_80231C08;
    // 0x80231BBC: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
L_80231BC0:
    // 0x80231BC0: addiu       $a0, $s0, 0x378
    ctx->r4 = ADD32(ctx->r16, 0X378);
L_80231BC4:
    // 0x80231BC4: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80231BC8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80231BCC: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x80231BD0: addiu       $v0, $zero, -0x80
    ctx->r2 = ADD32(0, -0X80);
    // 0x80231BD4: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x80231BD8: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x80231BDC: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x80231BE0: jal         0x8009A3B4
    // 0x80231BE4: sb          $v1, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r3;
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80231BE4: sb          $v1, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r3;
    after_3:
    // 0x80231BE8: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80231BEC: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80231BF0: sb          $v0, 0x385($s0)
    MEM_B(0X385, ctx->r16) = ctx->r2;
    // 0x80231BF4: sb          $zero, 0x384($s0)
    MEM_B(0X384, ctx->r16) = 0;
    // 0x80231BF8: j           L_80231C08
    // 0x80231BFC: sh          $v1, 0x380($s0)
    MEM_H(0X380, ctx->r16) = ctx->r3;
        goto L_80231C08;
    // 0x80231BFC: sh          $v1, 0x380($s0)
    MEM_H(0X380, ctx->r16) = ctx->r3;
L_80231C00:
    // 0x80231C00: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80231C04: sb          $v0, 0x385($s0)
    MEM_B(0X385, ctx->r16) = ctx->r2;
L_80231C08:
    // 0x80231C08: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80231C0C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80231C10: jr          $ra
    // 0x80231C14: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80231C14: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802353A8_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802353A8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802353AC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802353B0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802353B4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802353B8: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802353BC: bne         $v0, $zero, L_80235484
    if (ctx->r2 != 0) {
        // 0x802353C0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80235484;
    }
    // 0x802353C0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802353C4: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x802353C8: lb          $v1, -0x3BC7($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC7);
    // 0x802353CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802353D0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802353D4: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x802353D8: addiu       $v0, $zero, 0x1D
    ctx->r2 = ADD32(0, 0X1D);
    // 0x802353DC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802353E0: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x802353E4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802353E8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802353EC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x802353F0: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x802353F4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802353F8: lhu         $v1, -0x7648($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X7648);
    // 0x802353FC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80235400: sh          $v1, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = ctx->r3;
    // 0x80235404: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80235408: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023540C: lhu         $v1, -0x7646($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X7646);
    // 0x80235410: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80235414: sh          $v1, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = ctx->r3;
    // 0x80235418: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8023541C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80235420: lhu         $v1, -0x7644($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X7644);
    // 0x80235424: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80235428: sh          $v1, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = ctx->r3;
    // 0x8023542C: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80235430: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80235434: lhu         $v1, -0x7642($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X7642);
    // 0x80235438: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023543C: sh          $v1, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = ctx->r3;
    // 0x80235440: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80235444: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80235448: lbu         $v1, -0x7640($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X7640);
    // 0x8023544C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80235450: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80235454: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x80235458: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023545C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80235460: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80235464: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80235468: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x8023546C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80235470: sb          $v1, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r3;
    // 0x80235474: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80235478: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023547C: j           L_802354B4
    // 0x80235480: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_802354B4;
    // 0x80235480: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80235484:
    // 0x80235484: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80235488: lb          $v1, 0x47CC($v1)
    ctx->r3 = MEM_B(ctx->r3, 0X47CC);
    // 0x8023548C: bne         $v1, $v0, L_802354B4
    if (ctx->r3 != ctx->r2) {
        // 0x80235490: addu        $a0, $v1, $zero
        ctx->r4 = ADD32(ctx->r3, 0);
            goto L_802354B4;
    }
    // 0x80235490: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x80235494: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x80235498: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8023549C: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x802354A0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802354A4: jal         0x80070050
    // 0x802354A8: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    func_80070050_4B450(rdram, ctx);
        goto after_0;
    // 0x802354A8: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    after_0:
    // 0x802354AC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802354B0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_802354B4:
    // 0x802354B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802354B8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802354BC: jr          $ra
    // 0x802354C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802354C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802291DC_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802291DC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802291E0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802291E4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802291E8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802291EC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802291F0: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802291F4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802291F8: addiu       $v0, $v0, 0x49B0
    ctx->r2 = ADD32(ctx->r2, 0X49B0);
    // 0x802291FC: sw          $v0, 0x380($s0)
    MEM_W(0X380, ctx->r16) = ctx->r2;
    // 0x80229200: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x80229204: beq         $v0, $zero, L_80229368
    if (ctx->r2 == 0) {
        // 0x80229208: addiu       $s1, $s0, 0x328
        ctx->r17 = ADD32(ctx->r16, 0X328);
            goto L_80229368;
    }
    // 0x80229208: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x8022920C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80229210: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80229214: addu        $at, $at, $v0
    gpr jr_addend_8022921C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80229218: lw          $v0, -0x71A0($at)
    ctx->r2 = ADD32(ctx->r1, -0X71A0);
    // 0x8022921C: jr          $v0
    // 0x80229220: nop

    switch (jr_addend_8022921C >> 2) {
        case 0: goto L_80229224; break;
        case 1: goto L_80229240; break;
        case 2: goto L_8022926C; break;
        case 3: goto L_802292B0; break;
        case 4: goto L_80229310; break;
        default: switch_error(__func__, 0x8022921C, 0x80238E60);
    }
    // 0x80229220: nop

L_80229224:
    // 0x80229224: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229228: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022922C: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x80229230: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80229234: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80229238: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022923C: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
L_80229240:
    // 0x80229240: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80229244: addiu       $v1, $v0, -0x1
    ctx->r3 = ADD32(ctx->r2, -0X1);
    // 0x80229248: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x8022924C: bgez        $v0, L_80229260
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80229250: sh          $v1, 0x4($s1)
        MEM_H(0X4, ctx->r17) = ctx->r3;
            goto L_80229260;
    }
    // 0x80229250: sh          $v1, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r3;
    // 0x80229254: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80229258: j           L_8022926C
    // 0x8022925C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8022926C;
    // 0x8022925C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80229260:
    // 0x80229260: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80229264: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80229268: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
L_8022926C:
    // 0x8022926C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229270: lhu         $a2, 0x46($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X46);
    // 0x80229274: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80229278: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022927C: sll         $a2, $a2, 23
    ctx->r6 = S32(ctx->r6 << 23);
    // 0x80229280: jal         0x8004DA90
    // 0x80229284: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x80229284: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    after_0:
    // 0x80229288: jal         0x80040F30
    // 0x8022928C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_1;
    // 0x8022928C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80229290: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x80229294: beq         $v0, $zero, L_80229368
    if (ctx->r2 == 0) {
        // 0x80229298: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80229368;
    }
    // 0x80229298: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022929C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802292A0: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x802292A4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802292A8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802292AC: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_802292B0:
    // 0x802292B0: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x802292B4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802292B8: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x802292BC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802292C0: bgez        $v0, L_80229368
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802292C4: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80229368;
    }
    // 0x802292C4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802292C8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802292CC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802292D0: lw          $a1, 0x58($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X58);
    // 0x802292D4: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802292D8: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x802292DC: jal         0x8004F820
    // 0x802292E0: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x802292E0: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_2:
    // 0x802292E4: lui         $a0, 0x5555
    ctx->r4 = S32(0X5555 << 16);
    // 0x802292E8: ori         $a0, $a0, 0x5556
    ctx->r4 = ctx->r4 | 0X5556;
    // 0x802292EC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802292F0: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802292F4: mult        $v1, $a0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802292F8: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x802292FC: mfhi        $t0
    ctx->r8 = hi;
    // 0x80229300: subu        $v0, $t0, $v0
    ctx->r2 = SUB32(ctx->r8, ctx->r2);
    // 0x80229304: sh          $v0, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r2;
    // 0x80229308: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022930C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_80229310:
    // 0x80229310: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80229314: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80229318: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022931C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229320: bgez        $v0, L_80229334
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80229324: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80229334;
    }
    // 0x80229324: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80229328: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022932C: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80229330: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_80229334:
    // 0x80229334: lw          $a1, 0x58($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X58);
    // 0x80229338: lh          $a3, 0x66($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X66);
    // 0x8022933C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80229340: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    // 0x80229344: bltzl       $a3, L_8022934C
    if (SIGNED(ctx->r7) < 0) {
        // 0x80229348: negu        $a3, $a3
        ctx->r7 = SUB32(0, ctx->r7);
            goto L_8022934C;
    }
    goto skip_0;
    // 0x80229348: negu        $a3, $a3
    ctx->r7 = SUB32(0, ctx->r7);
    skip_0:
L_8022934C:
    // 0x8022934C: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x80229350: jal         0x8004F820
    // 0x80229354: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x80229354: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    after_3:
    // 0x80229358: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022935C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80229360: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80229364: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_80229368:
    // 0x80229368: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022936C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80229370: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229374: jr          $ra
    // 0x80229378: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80229378: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80228318_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228318: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022831C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80228320: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228324: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80228328: addiu       $v0, $v0, 0x49B0
    ctx->r2 = ADD32(ctx->r2, 0X49B0);
    // 0x8022832C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80228330: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80228334: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80228338: sw          $v0, 0x380($s0)
    MEM_W(0X380, ctx->r16) = ctx->r2;
    // 0x8022833C: lw          $v0, 0x33C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X33C);
    // 0x80228340: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x80228344: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80228348: beq         $v0, $zero, L_80228354
    if (ctx->r2 == 0) {
        // 0x8022834C: addiu       $s1, $s0, 0x328
        ctx->r17 = ADD32(ctx->r16, 0X328);
            goto L_80228354;
    }
    // 0x8022834C: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x80228350: sh          $zero, 0x330($s0)
    MEM_H(0X330, ctx->r16) = 0;
L_80228354:
    // 0x80228354: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80228358: beq         $v1, $zero, L_80228370
    if (ctx->r3 == 0) {
        // 0x8022835C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80228370;
    }
    // 0x8022835C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228360: beq         $v1, $v0, L_802283A0
    if (ctx->r3 == ctx->r2) {
        // 0x80228364: nop
    
            goto L_802283A0;
    }
    // 0x80228364: nop

    // 0x80228368: j           L_802286CC
    // 0x8022836C: nop

        goto L_802286CC;
    // 0x8022836C: nop

L_80228370:
    // 0x80228370: lhu         $v0, 0x32A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X32A);
    // 0x80228374: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80228378: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8022837C: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x80228380: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80228384: sh          $zero, 0x330($s0)
    MEM_H(0X330, ctx->r16) = 0;
    // 0x80228388: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x8022838C: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x80228390: bne         $v1, $zero, L_802283A0
    if (ctx->r3 != 0) {
        // 0x80228394: sh          $v0, 0x35E($s0)
        MEM_H(0X35E, ctx->r16) = ctx->r2;
            goto L_802283A0;
    }
    // 0x80228394: sh          $v0, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r2;
    // 0x80228398: addiu       $v0, $zero, 0x12C
    ctx->r2 = ADD32(0, 0X12C);
    // 0x8022839C: sh          $v0, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = ctx->r2;
L_802283A0:
    // 0x802283A0: lb          $v1, 0xA6($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA6);
    // 0x802283A4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802283A8: bnel        $v1, $v0, L_802283C0
    if (ctx->r3 != ctx->r2) {
        // 0x802283AC: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_802283C0;
    }
    goto skip_0;
    // 0x802283AC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    skip_0:
    // 0x802283B0: addiu       $a0, $zero, 0xB6
    ctx->r4 = ADD32(0, 0XB6);
    // 0x802283B4: jal         0x8002A33C
    // 0x802283B8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x802283B8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x802283BC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_802283C0:
    // 0x802283C0: lw          $a1, 0x58($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X58);
    // 0x802283C4: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802283C8: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    // 0x802283CC: jal         0x8004F820
    // 0x802283D0: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x802283D0: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_1:
    // 0x802283D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802283D8: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x802283DC: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x802283E0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802283E4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x802283E8: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x802283EC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802283F0: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x802283F4: jal         0x8004DA90
    // 0x802283F8: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x802283F8: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    after_2:
    // 0x802283FC: jal         0x80040F30
    // 0x80228400: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_3;
    // 0x80228400: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80228404: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228408: jal         0x8003E934
    // 0x8022840C: sw          $v0, 0x5C($s1)
    MEM_W(0X5C, ctx->r17) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_4;
    // 0x8022840C: sw          $v0, 0x5C($s1)
    MEM_W(0X5C, ctx->r17) = ctx->r2;
    after_4:
    // 0x80228410: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80228414: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x80228418: lh          $v1, 0x2E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2E);
    // 0x8022841C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228420: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80228424: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x80228428: bltz        $v0, L_80228440
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022842C: slti        $v0, $v0, 0x21
        ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
            goto L_80228440;
    }
    // 0x8022842C: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x80228430: beq         $v0, $zero, L_80228450
    if (ctx->r2 == 0) {
        // 0x80228434: nop
    
            goto L_80228450;
    }
    // 0x80228434: nop

    // 0x80228438: j           L_80228470
    // 0x8022843C: nop

        goto L_80228470;
    // 0x8022843C: nop

L_80228440:
    // 0x80228440: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x80228444: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x80228448: bne         $v0, $zero, L_80228470
    if (ctx->r2 != 0) {
        // 0x8022844C: nop
    
            goto L_80228470;
    }
    // 0x8022844C: nop

L_80228450:
    // 0x80228450: lhu         $v0, 0x2E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2E);
    // 0x80228454: lw          $a0, 0x38($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X38);
    // 0x80228458: addiu       $v1, $zero, 0xA
    ctx->r3 = ADD32(0, 0XA);
    // 0x8022845C: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    // 0x80228460: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x80228464: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80228468: j           L_802286CC
    // 0x8022846C: sw          $a0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r4;
        goto L_802286CC;
    // 0x8022846C: sw          $a0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r4;
L_80228470:
    // 0x80228470: lw          $v0, 0x5C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X5C);
    // 0x80228474: andi        $v0, $v0, 0xF00
    ctx->r2 = ctx->r2 & 0XF00;
    // 0x80228478: beq         $v0, $zero, L_802284A4
    if (ctx->r2 == 0) {
        // 0x8022847C: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_802284A4;
    }
    // 0x8022847C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80228480: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x80228484: jal         0x8009A3B4
    // 0x80228488: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x80228488: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x8022848C: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80228490: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x80228494: jal         0x8009A3B4
    // 0x80228498: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x80228498: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_6:
    // 0x8022849C: j           L_802284BC
    // 0x802284A0: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
        goto L_802284BC;
    // 0x802284A0: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
L_802284A4:
    // 0x802284A4: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x802284A8: bne         $v0, $zero, L_802284C8
    if (ctx->r2 != 0) {
        // 0x802284AC: nop
    
            goto L_802284C8;
    }
    // 0x802284AC: nop

    // 0x802284B0: lh          $v0, 0x34($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X34);
    // 0x802284B4: bne         $v0, $zero, L_802284C8
    if (ctx->r2 != 0) {
        // 0x802284B8: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_802284C8;
    }
    // 0x802284B8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_802284BC:
    // 0x802284BC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x802284C0: j           L_802286CC
    // 0x802284C4: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_802286CC;
    // 0x802284C4: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_802284C8:
    // 0x802284C8: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x802284CC: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x802284D0: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x802284D4: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x802284D8: bne         $v0, $zero, L_80228514
    if (ctx->r2 != 0) {
        // 0x802284DC: addiu       $v0, $zero, 0xC
        ctx->r2 = ADD32(0, 0XC);
            goto L_80228514;
    }
    // 0x802284DC: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x802284E0: lbu         $v1, 0xA4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA4);
    // 0x802284E4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x802284E8: sltiu       $v1, $v1, 0xF
    ctx->r3 = ctx->r3 < 0XF ? 1 : 0;
    // 0x802284EC: beq         $v1, $zero, L_80228504
    if (ctx->r3 == 0) {
        // 0x802284F0: sh          $zero, 0xA($s0)
        MEM_H(0XA, ctx->r16) = 0;
            goto L_80228504;
    }
    // 0x802284F0: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x802284F4: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x802284F8: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
    // 0x802284FC: j           L_802286CC
    // 0x80228500: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
        goto L_802286CC;
    // 0x80228500: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_80228504:
    // 0x80228504: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80228508: andi        $v0, $v0, 0xFFF7
    ctx->r2 = ctx->r2 & 0XFFF7;
    // 0x8022850C: j           L_802286CC
    // 0x80228510: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
        goto L_802286CC;
    // 0x80228510: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_80228514:
    // 0x80228514: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80228518: bne         $v0, $zero, L_802285B8
    if (ctx->r2 != 0) {
        // 0x8022851C: nop
    
            goto L_802285B8;
    }
    // 0x8022851C: nop

    // 0x80228520: lh          $v0, 0x36($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X36);
    // 0x80228524: bne         $v0, $zero, L_802285B8
    if (ctx->r2 != 0) {
        // 0x80228528: addiu       $a0, $s0, 0x1C
        ctx->r4 = ADD32(ctx->r16, 0X1C);
            goto L_802285B8;
    }
    // 0x80228528: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8022852C: lw          $a3, 0x58($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X58);
    // 0x80228530: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80228534: addiu       $a2, $zero, 0x100
    ctx->r6 = ADD32(0, 0X100);
    // 0x80228538: lh          $v1, 0x56($a3)
    ctx->r3 = MEM_H(ctx->r7, 0X56);
    // 0x8022853C: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x80228540: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x80228544: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80228548: jal         0x8004FAEC
    // 0x8022854C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_8004FAEC_2AEEC(rdram, ctx);
        goto after_7;
    // 0x8022854C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_7:
    // 0x80228550: beq         $v0, $zero, L_802285B8
    if (ctx->r2 == 0) {
        // 0x80228554: nop
    
            goto L_802285B8;
    }
    // 0x80228554: nop

    // 0x80228558: jal         0x80229A80
    // 0x8022855C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80229A80_ovl31(rdram, ctx);
        goto after_8;
    // 0x8022855C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
    // 0x80228560: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80228564: beq         $v1, $zero, L_8022857C
    if (ctx->r3 == 0) {
        // 0x80228568: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022857C;
    }
    // 0x80228568: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022856C: beq         $v1, $v0, L_8022858C
    if (ctx->r3 == ctx->r2) {
        // 0x80228570: addiu       $v0, $zero, 0xC
        ctx->r2 = ADD32(0, 0XC);
            goto L_8022858C;
    }
    // 0x80228570: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80228574: j           L_802285B8
    // 0x80228578: nop

        goto L_802285B8;
    // 0x80228578: nop

L_8022857C:
    // 0x8022857C: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80228580: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x80228584: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x80228588: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
L_8022858C:
    // 0x8022858C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80228590: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x80228594: lhu         $a0, 0x0($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X0);
    // 0x80228598: ori         $v1, $a0, 0x200
    ctx->r3 = ctx->r4 | 0X200;
    // 0x8022859C: sh          $v1, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r3;
    // 0x802285A0: lbu         $v0, 0xA4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA4);
    // 0x802285A4: sltiu       $v0, $v0, 0xF
    ctx->r2 = ctx->r2 < 0XF ? 1 : 0;
    // 0x802285A8: bne         $v0, $zero, L_802285B4
    if (ctx->r2 != 0) {
        // 0x802285AC: ori         $v0, $a0, 0x208
        ctx->r2 = ctx->r4 | 0X208;
            goto L_802285B4;
    }
    // 0x802285AC: ori         $v0, $a0, 0x208
    ctx->r2 = ctx->r4 | 0X208;
    // 0x802285B0: andi        $v0, $v1, 0xFFF7
    ctx->r2 = ctx->r3 & 0XFFF7;
L_802285B4:
    // 0x802285B4: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_802285B8:
    // 0x802285B8: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x802285BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802285C0: bne         $v1, $v0, L_802286CC
    if (ctx->r3 != ctx->r2) {
        // 0x802285C4: nop
    
            goto L_802286CC;
    }
    // 0x802285C4: nop

    // 0x802285C8: lh          $v0, 0x34($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X34);
    // 0x802285CC: bne         $v0, $zero, L_802286CC
    if (ctx->r2 != 0) {
        // 0x802285D0: addiu       $s2, $s0, 0x1C
        ctx->r18 = ADD32(ctx->r16, 0X1C);
            goto L_802286CC;
    }
    // 0x802285D0: addiu       $s2, $s0, 0x1C
    ctx->r18 = ADD32(ctx->r16, 0X1C);
    // 0x802285D4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x802285D8: lhu         $a1, 0x56($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X56);
    // 0x802285DC: lhu         $v0, 0x3C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3C);
    // 0x802285E0: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x802285E4: lw          $a3, 0x58($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X58);
    // 0x802285E8: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x802285EC: andi        $a1, $a1, 0xFFF
    ctx->r5 = ctx->r5 & 0XFFF;
    // 0x802285F0: lh          $v1, 0x56($a3)
    ctx->r3 = MEM_H(ctx->r7, 0X56);
    // 0x802285F4: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x802285F8: addiu       $v0, $zero, 0x300
    ctx->r2 = ADD32(0, 0X300);
    // 0x802285FC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80228600: jal         0x8004FAEC
    // 0x80228604: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_8004FAEC_2AEEC(rdram, ctx);
        goto after_9;
    // 0x80228604: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_9:
    // 0x80228608: beq         $v0, $zero, L_802286CC
    if (ctx->r2 == 0) {
        // 0x8022860C: nop
    
            goto L_802286CC;
    }
    // 0x8022860C: nop

    // 0x80228610: jal         0x8004EFE4
    // 0x80228614: nop

    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_10;
    // 0x80228614: nop

    after_10:
    // 0x80228618: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022861C: beq         $v1, $zero, L_802286CC
    if (ctx->r3 == 0) {
        // 0x80228620: sw          $v1, 0x54($s1)
        MEM_W(0X54, ctx->r17) = ctx->r3;
            goto L_802286CC;
    }
    // 0x80228620: sw          $v1, 0x54($s1)
    MEM_W(0X54, ctx->r17) = ctx->r3;
    // 0x80228624: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228628: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8022862C: lw          $v1, 0x54($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X54);
    // 0x80228630: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80228634: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x80228638: lw          $v0, 0x54($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X54);
    // 0x8022863C: sb          $zero, 0x3($v0)
    MEM_B(0X3, ctx->r2) = 0;
    // 0x80228640: lw          $a0, 0x54($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X54);
    // 0x80228644: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80228648: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022864C: jal         0x8009A3B4
    // 0x80228650: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    memcpy_recomp(rdram, ctx);
        goto after_11;
    // 0x80228650: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    after_11:
    // 0x80228654: lw          $a0, 0x54($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X54);
    // 0x80228658: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022865C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80228660: jal         0x8009A3B4
    // 0x80228664: addiu       $a0, $a0, 0x1C
    ctx->r4 = ADD32(ctx->r4, 0X1C);
    memcpy_recomp(rdram, ctx);
        goto after_12;
    // 0x80228664: addiu       $a0, $a0, 0x1C
    ctx->r4 = ADD32(ctx->r4, 0X1C);
    after_12:
    // 0x80228668: lw          $a1, 0x54($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X54);
    // 0x8022866C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80228670: lhu         $v1, 0x3C($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X3C);
    // 0x80228674: addiu       $a3, $zero, 0x6E0
    ctx->r7 = ADD32(0, 0X6E0);
    // 0x80228678: addiu       $v0, $zero, -0xD00
    ctx->r2 = ADD32(0, -0XD00);
    // 0x8022867C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80228680: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80228684: addiu       $a0, $a1, 0x14
    ctx->r4 = ADD32(ctx->r5, 0X14);
    // 0x80228688: addiu       $a1, $a1, 0x1C
    ctx->r5 = ADD32(ctx->r5, 0X1C);
    // 0x8022868C: addu        $a2, $a2, $v1
    ctx->r6 = ADD32(ctx->r6, ctx->r3);
    // 0x80228690: jal         0x8004DBA0
    // 0x80228694: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_13;
    // 0x80228694: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_13:
    // 0x80228698: lw          $v1, 0x54($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X54);
    // 0x8022869C: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x802286A0: sh          $v0, 0x64($v1)
    MEM_H(0X64, ctx->r3) = ctx->r2;
    // 0x802286A4: lw          $v1, 0x40($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X40);
    // 0x802286A8: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x802286AC: sh          $v0, 0x34($s1)
    MEM_H(0X34, ctx->r17) = ctx->r2;
    // 0x802286B0: lbu         $v0, 0xF($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XF);
    // 0x802286B4: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x802286B8: sb          $v0, 0xF($v1)
    MEM_B(0XF, ctx->r3) = ctx->r2;
    // 0x802286BC: lw          $v0, 0x44($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X44);
    // 0x802286C0: sb          $zero, 0x9($v0)
    MEM_B(0X9, ctx->r2) = 0;
    // 0x802286C4: lw          $v0, 0x48($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X48);
    // 0x802286C8: sb          $zero, 0x9($v0)
    MEM_B(0X9, ctx->r2) = 0;
L_802286CC:
    // 0x802286CC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802286D0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x802286D4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802286D8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802286DC: jr          $ra
    // 0x802286E0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802286E0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80230788_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230788: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8023078C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80230790: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80230794: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80230798: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x8023079C: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x802307A0: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x802307A4: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x802307A8: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x802307AC: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x802307B0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x802307B4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802307B8: lw          $a0, 0x80($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X80);
    // 0x802307BC: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x802307C0: jal         0x80032424
    // 0x802307C4: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    func_80032424_D824(rdram, ctx);
        goto after_0;
    // 0x802307C4: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    after_0:
    // 0x802307C8: jal         0x8004EFE4
    // 0x802307CC: addu        $fp, $v0, $zero
    ctx->r30 = ADD32(ctx->r2, 0);
    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_1;
    // 0x802307CC: addu        $fp, $v0, $zero
    ctx->r30 = ADD32(ctx->r2, 0);
    after_1:
    // 0x802307D0: addu        $s7, $s3, $zero
    ctx->r23 = ADD32(ctx->r19, 0);
    // 0x802307D4: addiu       $s6, $s2, 0x348
    ctx->r22 = ADD32(ctx->r18, 0X348);
    // 0x802307D8: lui         $s5, 0x8020
    ctx->r21 = S32(0X8020 << 16);
    // 0x802307DC: addiu       $s5, $s5, 0x49B0
    ctx->r21 = ADD32(ctx->r21, 0X49B0);
    // 0x802307E0: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x802307E4: beq         $s1, $zero, L_80230AE0
    if (ctx->r17 == 0) {
        // 0x802307E8: addiu       $s4, $s2, 0x1D8
        ctx->r20 = ADD32(ctx->r18, 0X1D8);
            goto L_80230AE0;
    }
    // 0x802307E8: addiu       $s4, $s2, 0x1D8
    ctx->r20 = ADD32(ctx->r18, 0X1D8);
    // 0x802307EC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802307F0: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x802307F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802307F8: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
    // 0x802307FC: andi        $v0, $s3, 0x2
    ctx->r2 = ctx->r19 & 0X2;
    // 0x80230800: bne         $v0, $zero, L_8023081C
    if (ctx->r2 != 0) {
        // 0x80230804: sb          $zero, 0x4($s1)
        MEM_B(0X4, ctx->r17) = 0;
            goto L_8023081C;
    }
    // 0x80230804: sb          $zero, 0x4($s1)
    MEM_B(0X4, ctx->r17) = 0;
    // 0x80230808: addiu       $a0, $zero, 0x1BE
    ctx->r4 = ADD32(0, 0X1BE);
    // 0x8023080C: jal         0x8002A33C
    // 0x80230810: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x80230810: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    after_2:
    // 0x80230814: j           L_80230820
    // 0x80230818: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
        goto L_80230820;
    // 0x80230818: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
L_8023081C:
    // 0x8023081C: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_80230820:
    // 0x80230820: andi        $v1, $s7, 0xFF
    ctx->r3 = ctx->r23 & 0XFF;
    // 0x80230824: bne         $v1, $zero, L_802308BC
    if (ctx->r3 != 0) {
        // 0x80230828: sb          $v0, 0xF($s1)
        MEM_B(0XF, ctx->r17) = ctx->r2;
            goto L_802308BC;
    }
    // 0x80230828: sb          $v0, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r2;
    // 0x8023082C: lbu         $v0, 0x3($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X3);
    // 0x80230830: andi        $v1, $v0, 0xF
    ctx->r3 = ctx->r2 & 0XF;
    // 0x80230834: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80230838: beq         $v1, $v0, L_80230878
    if (ctx->r3 == ctx->r2) {
        // 0x8023083C: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80230878;
    }
    // 0x8023083C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80230840: beql        $v0, $zero, L_80230858
    if (ctx->r2 == 0) {
        // 0x80230844: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80230858;
    }
    goto skip_0;
    // 0x80230844: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80230848: beq         $v1, $zero, L_80230868
    if (ctx->r3 == 0) {
        // 0x8023084C: nop
    
            goto L_80230868;
    }
    // 0x8023084C: nop

    // 0x80230850: j           L_80230894
    // 0x80230854: nop

        goto L_80230894;
    // 0x80230854: nop

L_80230858:
    // 0x80230858: beq         $v1, $v0, L_80230888
    if (ctx->r3 == ctx->r2) {
        // 0x8023085C: nop
    
            goto L_80230888;
    }
    // 0x8023085C: nop

    // 0x80230860: j           L_80230894
    // 0x80230864: nop

        goto L_80230894;
    // 0x80230864: nop

L_80230868:
    // 0x80230868: lhu         $v0, 0x6A($s6)
    ctx->r2 = MEM_HU(ctx->r22, 0X6A);
    // 0x8023086C: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80230870: j           L_80230894
    // 0x80230874: addiu       $s0, $v0, -0x20
    ctx->r16 = ADD32(ctx->r2, -0X20);
        goto L_80230894;
    // 0x80230874: addiu       $s0, $v0, -0x20
    ctx->r16 = ADD32(ctx->r2, -0X20);
L_80230878:
    // 0x80230878: lhu         $v0, 0x6A($s6)
    ctx->r2 = MEM_HU(ctx->r22, 0X6A);
    // 0x8023087C: andi        $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 & 0X7F;
    // 0x80230880: j           L_80230894
    // 0x80230884: addiu       $s0, $v0, -0x40
    ctx->r16 = ADD32(ctx->r2, -0X40);
        goto L_80230894;
    // 0x80230884: addiu       $s0, $v0, -0x40
    ctx->r16 = ADD32(ctx->r2, -0X40);
L_80230888:
    // 0x80230888: lhu         $v0, 0x6A($s6)
    ctx->r2 = MEM_HU(ctx->r22, 0X6A);
    // 0x8023088C: andi        $v0, $v0, 0x3FF
    ctx->r2 = ctx->r2 & 0X3FF;
    // 0x80230890: addiu       $s0, $v0, -0x200
    ctx->r16 = ADD32(ctx->r2, -0X200);
L_80230894:
    // 0x80230894: lh          $a0, 0x56($s2)
    ctx->r4 = MEM_H(ctx->r18, 0X56);
    // 0x80230898: sll         $s0, $s0, 16
    ctx->r16 = S32(ctx->r16 << 16);
    // 0x8023089C: sra         $s0, $s0, 16
    ctx->r16 = S32(SIGNED(ctx->r16) >> 16);
    // 0x802308A0: addiu       $s0, $s0, 0x800
    ctx->r16 = ADD32(ctx->r16, 0X800);
    // 0x802308A4: jal         0x80032498
    // 0x802308A8: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
    func_80032498_D898(rdram, ctx);
        goto after_3;
    // 0x802308A8: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
    after_3:
    // 0x802308AC: lh          $a0, 0x56($s2)
    ctx->r4 = MEM_H(ctx->r18, 0X56);
    // 0x802308B0: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x802308B4: j           L_80230924
    // 0x802308B8: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
        goto L_80230924;
    // 0x802308B8: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
L_802308BC:
    // 0x802308BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802308C0: bne         $v1, $v0, L_802308E4
    if (ctx->r3 != ctx->r2) {
        // 0x802308C4: nop
    
            goto L_802308E4;
    }
    // 0x802308C4: nop

    // 0x802308C8: lh          $a0, 0x56($s2)
    ctx->r4 = MEM_H(ctx->r18, 0X56);
    // 0x802308CC: jal         0x80032498
    // 0x802308D0: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    func_80032498_D898(rdram, ctx);
        goto after_4;
    // 0x802308D0: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    after_4:
    // 0x802308D4: lh          $a0, 0x56($s2)
    ctx->r4 = MEM_H(ctx->r18, 0X56);
    // 0x802308D8: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x802308DC: j           L_80230924
    // 0x802308E0: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
        goto L_80230924;
    // 0x802308E0: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
L_802308E4:
    // 0x802308E4: lbu         $v0, 0x6($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X6);
    // 0x802308E8: lh          $v1, 0x56($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X56);
    // 0x802308EC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x802308F0: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x802308F4: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x802308F8: lhu         $a0, -0x7AA0($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X7AA0);
    // 0x802308FC: jal         0x80032498
    // 0x80230900: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    func_80032498_D898(rdram, ctx);
        goto after_5;
    // 0x80230900: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    after_5:
    // 0x80230904: lbu         $v1, 0x6($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X6);
    // 0x80230908: lh          $a1, 0x56($s2)
    ctx->r5 = MEM_H(ctx->r18, 0X56);
    // 0x8023090C: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x80230910: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80230914: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x80230918: lhu         $a0, -0x7AA0($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X7AA0);
    // 0x8023091C: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x80230920: addu        $a0, $a1, $a0
    ctx->r4 = ADD32(ctx->r5, ctx->r4);
L_80230924:
    // 0x80230924: jal         0x800324B4
    // 0x80230928: nop

    func_800324B4_D8B4(rdram, ctx);
        goto after_6;
    // 0x80230928: nop

    after_6:
    // 0x8023092C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80230930: lb          $v1, 0xF($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XF);
    // 0x80230934: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80230938: bne         $v1, $v0, L_80230A1C
    if (ctx->r3 != ctx->r2) {
        // 0x8023093C: addiu       $a0, $s1, 0x14
        ctx->r4 = ADD32(ctx->r17, 0X14);
            goto L_80230A1C;
    }
    // 0x8023093C: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x80230940: lhu         $v0, 0x180($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X180);
    // 0x80230944: sh          $v0, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r2;
    // 0x80230948: lhu         $v0, 0x182($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X182);
    // 0x8023094C: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x80230950: lhu         $v0, 0x184($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X184);
    // 0x80230954: lh          $v1, 0x16($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X16);
    // 0x80230958: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
    // 0x8023095C: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x80230960: lh          $a1, 0x18($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X18);
    // 0x80230964: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80230968: sw          $v1, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r3;
    // 0x8023096C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80230970: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x80230974: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x80230978: sw          $a1, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r5;
    // 0x8023097C: lhu         $a2, 0x56($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X56);
    // 0x80230980: addiu       $a3, $zero, 0x550
    ctx->r7 = ADD32(0, 0X550);
    // 0x80230984: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x80230988: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8023098C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80230990: jal         0x8004DBA0
    // 0x80230994: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_7;
    // 0x80230994: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_7:
    // 0x80230998: nop

    // 0x8023099C: mult        $s0, $fp
    result = S64(S32(ctx->r16)) * S64(S32(ctx->r30)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802309A0: mflo        $v0
    ctx->r2 = lo;
    // 0x802309A4: lhu         $v1, 0x14($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X14);
    // 0x802309A8: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x802309AC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802309B0: andi        $v0, $s7, 0xFF
    ctx->r2 = ctx->r23 & 0XFF;
    // 0x802309B4: bne         $v0, $zero, L_802309DC
    if (ctx->r2 != 0) {
        // 0x802309B8: sh          $v1, 0xC4($s5)
        MEM_H(0XC4, ctx->r21) = ctx->r3;
            goto L_802309DC;
    }
    // 0x802309B8: sh          $v1, 0xC4($s5)
    MEM_H(0XC4, ctx->r21) = ctx->r3;
    // 0x802309BC: lhu         $v0, 0x6A($s6)
    ctx->r2 = MEM_HU(ctx->r22, 0X6A);
    // 0x802309C0: lhu         $v1, 0x3AA($s5)
    ctx->r3 = MEM_HU(ctx->r21, 0X3AA);
    // 0x802309C4: ori         $a0, $zero, 0xFFE0
    ctx->r4 = 0 | 0XFFE0;
    // 0x802309C8: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x802309CC: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x802309D0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802309D4: j           L_802309E8
    // 0x802309D8: sh          $v1, 0xC6($s5)
    MEM_H(0XC6, ctx->r21) = ctx->r3;
        goto L_802309E8;
    // 0x802309D8: sh          $v1, 0xC6($s5)
    MEM_H(0XC6, ctx->r21) = ctx->r3;
L_802309DC:
    // 0x802309DC: lhu         $v0, 0x3EA($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X3EA);
    // 0x802309E0: addiu       $v0, $v0, 0x30
    ctx->r2 = ADD32(ctx->r2, 0X30);
    // 0x802309E4: sh          $v0, 0xC6($s5)
    MEM_H(0XC6, ctx->r21) = ctx->r2;
L_802309E8:
    // 0x802309E8: nop

    // 0x802309EC: mult        $s3, $fp
    result = S64(S32(ctx->r19)) * S64(S32(ctx->r30)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802309F0: mflo        $v1
    ctx->r3 = lo;
    // 0x802309F4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802309F8: addiu       $a1, $s5, 0xC4
    ctx->r5 = ADD32(ctx->r21, 0XC4);
    // 0x802309FC: lhu         $v0, 0x18($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X18);
    // 0x80230A00: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    // 0x80230A04: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x80230A08: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80230A0C: jal         0x8004E99C
    // 0x80230A10: sh          $v0, 0xC8($s5)
    MEM_H(0XC8, ctx->r21) = ctx->r2;
    func_8004E99C_29D9C(rdram, ctx);
        goto after_8;
    // 0x80230A10: sh          $v0, 0xC8($s5)
    MEM_H(0XC8, ctx->r21) = ctx->r2;
    after_8:
    // 0x80230A14: j           L_80230AE0
    // 0x80230A18: nop

        goto L_80230AE0;
    // 0x80230A18: nop

L_80230A1C:
    // 0x80230A1C: lhu         $v0, 0x188($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X188);
    // 0x80230A20: sh          $v0, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r2;
    // 0x80230A24: lhu         $v0, 0x18A($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X18A);
    // 0x80230A28: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x80230A2C: lhu         $v0, 0x18C($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X18C);
    // 0x80230A30: lh          $v1, 0x16($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X16);
    // 0x80230A34: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
    // 0x80230A38: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x80230A3C: lh          $a1, 0x18($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X18);
    // 0x80230A40: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80230A44: sw          $v1, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r3;
    // 0x80230A48: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80230A4C: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x80230A50: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x80230A54: sw          $a1, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r5;
    // 0x80230A58: lhu         $a2, 0x56($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X56);
    // 0x80230A5C: addiu       $a3, $zero, 0x550
    ctx->r7 = ADD32(0, 0X550);
    // 0x80230A60: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x80230A64: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80230A68: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80230A6C: jal         0x8004DBA0
    // 0x80230A70: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_9;
    // 0x80230A70: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_9:
    // 0x80230A74: lhu         $v0, 0x6A($s6)
    ctx->r2 = MEM_HU(ctx->r22, 0X6A);
    // 0x80230A78: andi        $v0, $v0, 0x3FF
    ctx->r2 = ctx->r2 & 0X3FF;
    // 0x80230A7C: addiu       $v0, $v0, 0x80
    ctx->r2 = ADD32(ctx->r2, 0X80);
    // 0x80230A80: mult        $s0, $v0
    result = S64(S32(ctx->r16)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80230A84: mflo        $v0
    ctx->r2 = lo;
    // 0x80230A88: lhu         $v1, 0x14($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X14);
    // 0x80230A8C: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80230A90: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80230A94: sh          $v1, 0xC4($s5)
    MEM_H(0XC4, ctx->r21) = ctx->r3;
    // 0x80230A98: lhu         $v0, 0x16($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X16);
    // 0x80230A9C: sh          $v0, 0xC6($s5)
    MEM_H(0XC6, ctx->r21) = ctx->r2;
    // 0x80230AA0: lhu         $v0, 0x6A($s6)
    ctx->r2 = MEM_HU(ctx->r22, 0X6A);
    // 0x80230AA4: andi        $v0, $v0, 0x3FF
    ctx->r2 = ctx->r2 & 0X3FF;
    // 0x80230AA8: addiu       $v0, $v0, 0x80
    ctx->r2 = ADD32(ctx->r2, 0X80);
    // 0x80230AAC: mult        $s3, $v0
    result = S64(S32(ctx->r19)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80230AB0: mflo        $v0
    ctx->r2 = lo;
    // 0x80230AB4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80230AB8: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x80230ABC: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    // 0x80230AC0: lhu         $t0, 0x18($a0)
    ctx->r8 = MEM_HU(ctx->r4, 0X18);
    // 0x80230AC4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80230AC8: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x80230ACC: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x80230AD0: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80230AD4: addu        $t0, $t0, $v0
    ctx->r8 = ADD32(ctx->r8, ctx->r2);
    // 0x80230AD8: jal         0x8004E458
    // 0x80230ADC: sh          $t0, 0xC8($a1)
    MEM_H(0XC8, ctx->r5) = ctx->r8;
    func_8004E458_29858(rdram, ctx);
        goto after_10;
    // 0x80230ADC: sh          $t0, 0xC8($a1)
    MEM_H(0XC8, ctx->r5) = ctx->r8;
    after_10:
L_80230AE0:
    // 0x80230AE0: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80230AE4: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x80230AE8: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x80230AEC: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x80230AF0: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x80230AF4: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80230AF8: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80230AFC: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80230B00: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80230B04: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80230B08: jr          $ra
    // 0x80230B0C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x80230B0C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80230528_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230528: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023052C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80230530: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80230534: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80230538: lhu         $a2, 0x56($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X56);
    // 0x8023053C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80230540: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80230544: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x80230548: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x8023054C: jal         0x8004F820
    // 0x80230550: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80230550: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_0:
    // 0x80230554: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80230558: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8023055C: lbu         $v0, 0x3B4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3B4);
    // 0x80230560: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80230564: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80230568: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8023056C: beq         $v0, $zero, L_80230594
    if (ctx->r2 == 0) {
        // 0x80230570: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_80230594;
    }
    // 0x80230570: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80230574: lbu         $v1, 0x3B4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3B4);
    // 0x80230578: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023057C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80230580: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x80230584: sh          $zero, 0x1D8($s0)
    MEM_H(0X1D8, ctx->r16) = 0;
    // 0x80230588: ori         $v1, $v1, 0x20
    ctx->r3 = ctx->r3 | 0X20;
    // 0x8023058C: j           L_802305AC
    // 0x80230590: sb          $v1, 0x3B4($s0)
    MEM_B(0X3B4, ctx->r16) = ctx->r3;
        goto L_802305AC;
    // 0x80230590: sb          $v1, 0x3B4($s0)
    MEM_B(0X3B4, ctx->r16) = ctx->r3;
L_80230594:
    // 0x80230594: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x80230598: bne         $v0, $zero, L_802305AC
    if (ctx->r2 != 0) {
        // 0x8023059C: nop
    
            goto L_802305AC;
    }
    // 0x8023059C: nop

    // 0x802305A0: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x802305A4: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x802305A8: sh          $zero, 0x1D8($s0)
    MEM_H(0X1D8, ctx->r16) = 0;
L_802305AC:
    // 0x802305AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802305B0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802305B4: jr          $ra
    // 0x802305B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802305B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80235EE8_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235EE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80235EEC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80235EF0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80235EF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80235EF8: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80235EFC: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x80235F00: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80235F04: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x80235F08: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80235F0C: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80235F10: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80235F14: beq         $v1, $zero, L_80235F34
    if (ctx->r3 == 0) {
        // 0x80235F18: nop
    
            goto L_80235F34;
    }
    // 0x80235F18: nop

    // 0x80235F1C: jal         0x80236304
    // 0x80235F20: nop

    func_80236304_ovl31(rdram, ctx);
        goto after_0;
    // 0x80235F20: nop

    after_0:
    // 0x80235F24: beq         $v0, $zero, L_80235F34
    if (ctx->r2 == 0) {
        // 0x80235F28: nop
    
            goto L_80235F34;
    }
    // 0x80235F28: nop

    // 0x80235F2C: jal         0x8004F62C
    // 0x80235F30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F62C_2AA2C(rdram, ctx);
        goto after_1;
    // 0x80235F30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_80235F34:
    // 0x80235F34: jal         0x80235F4C
    // 0x80235F38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80235F4C_ovl31(rdram, ctx);
        goto after_2;
    // 0x80235F38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80235F3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80235F40: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80235F44: jr          $ra
    // 0x80235F48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80235F48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80235980_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235980: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80235984: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80235988: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8023598C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80235990: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80235994: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80235998: lw          $v0, -0x75E0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X75E0);
    // 0x8023599C: jalr        $v0
    // 0x802359A0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802359A0: nop

    after_0:
    // 0x802359A4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802359A8: jr          $ra
    // 0x802359AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802359AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802331CC_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802331CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802331D0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802331D4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802331D8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802331DC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802331E0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802331E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802331E8: jal         0x80050294
    // 0x802331EC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x802331EC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_0:
    // 0x802331F0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802331F4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802331F8: addiu       $v0, $zero, 0x2D0
    ctx->r2 = ADD32(0, 0X2D0);
    // 0x802331FC: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80233200: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80233204: sh          $v0, 0x382($s0)
    MEM_H(0X382, ctx->r16) = ctx->r2;
    // 0x80233208: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x8023320C: sb          $v0, 0x387($s0)
    MEM_B(0X387, ctx->r16) = ctx->r2;
    // 0x80233210: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80233214: sb          $v0, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r2;
    // 0x80233218: sb          $v0, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r2;
    // 0x8023321C: sb          $v0, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r2;
    // 0x80233220: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80233224: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80233228: jr          $ra
    // 0x8023322C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023322C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E0E8_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E0E8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022E0EC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022E0F0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E0F4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022E0F8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x8022E0FC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022E100: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022E104: jal         0x80050294
    // 0x8022E108: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8022E108: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022E10C: lbu         $v1, 0x64($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X64);
    // 0x8022E110: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022E114: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022E118: lbu         $v0, 0x65($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X65);
    // 0x8022E11C: lbu         $a0, 0x66($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X66);
    // 0x8022E120: lbu         $a1, 0x66($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X66);
    // 0x8022E124: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x8022E128: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x8022E12C: andi        $a0, $a0, 0x1F
    ctx->r4 = ctx->r4 & 0X1F;
    // 0x8022E130: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x8022E134: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8022E138: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    // 0x8022E13C: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x8022E140: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x8022E144: lhu         $a0, 0x15E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X15E);
    // 0x8022E148: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8022E14C: sb          $a1, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r5;
    // 0x8022E150: lb          $v1, 0x66($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X66);
    // 0x8022E154: addiu       $v0, $zero, -0x8000
    ctx->r2 = ADD32(0, -0X8000);
    // 0x8022E158: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x8022E15C: slti        $v1, $v1, 0x10
    ctx->r3 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
    // 0x8022E160: bne         $v1, $zero, L_8022E19C
    if (ctx->r3 != 0) {
        // 0x8022E164: sh          $v0, 0x15E($s0)
        MEM_H(0X15E, ctx->r16) = ctx->r2;
            goto L_8022E19C;
    }
    // 0x8022E164: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022E168: lb          $v1, 0x64($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X64);
    // 0x8022E16C: andi        $v0, $v0, 0x7FFF
    ctx->r2 = ctx->r2 & 0X7FFF;
    // 0x8022E170: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022E174: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022E178: sb          $v0, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r2;
    // 0x8022E17C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022E180: beq         $v1, $v0, L_8022E19C
    if (ctx->r3 == ctx->r2) {
        // 0x8022E184: addu        $a0, $v1, $zero
        ctx->r4 = ADD32(ctx->r3, 0);
            goto L_8022E19C;
    }
    // 0x8022E184: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x8022E188: lbu         $v0, 0x65($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X65);
    // 0x8022E18C: addiu       $v1, $a0, 0x4
    ctx->r3 = ADD32(ctx->r4, 0X4);
    // 0x8022E190: sb          $v1, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r3;
    // 0x8022E194: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8022E198: sb          $v0, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r2;
L_8022E19C:
    // 0x8022E19C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022E1A0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022E1A4: jr          $ra
    // 0x8022E1A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022E1A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802294C4_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802294C4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802294C8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802294CC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802294D0: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x802294D4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x802294D8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x802294DC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802294E0: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802294E4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802294E8: addiu       $v0, $v0, 0x49B0
    ctx->r2 = ADD32(ctx->r2, 0X49B0);
    // 0x802294EC: sw          $v0, 0x380($s0)
    MEM_W(0X380, ctx->r16) = ctx->r2;
    // 0x802294F0: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x802294F4: beq         $v0, $zero, L_8022983C
    if (ctx->r2 == 0) {
        // 0x802294F8: addiu       $s1, $s0, 0x328
        ctx->r17 = ADD32(ctx->r16, 0X328);
            goto L_8022983C;
    }
    // 0x802294F8: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x802294FC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80229500: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80229504: addu        $at, $at, $v0
    gpr jr_addend_8022950C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80229508: lw          $v0, -0x7188($at)
    ctx->r2 = ADD32(ctx->r1, -0X7188);
    // 0x8022950C: jr          $v0
    // 0x80229510: nop

    switch (jr_addend_8022950C >> 2) {
        case 0: goto L_80229514; break;
        case 1: goto L_80229554; break;
        case 2: goto L_8022961C; break;
        case 3: goto L_802297A0; break;
        case 4: goto L_802297D4; break;
        default: switch_error(__func__, 0x8022950C, 0x80238E78);
    }
    // 0x80229510: nop

L_80229514:
    // 0x80229514: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229518: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022951C: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80229520: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x80229524: beq         $v0, $zero, L_80229538
    if (ctx->r2 == 0) {
        // 0x80229528: addiu       $v0, $zero, 0x18
        ctx->r2 = ADD32(0, 0X18);
            goto L_80229538;
    }
    // 0x80229528: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x8022952C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80229530: j           L_80229544
    // 0x80229534: addiu       $v0, $zero, -0x1C
    ctx->r2 = ADD32(0, -0X1C);
        goto L_80229544;
    // 0x80229534: addiu       $v0, $zero, -0x1C
    ctx->r2 = ADD32(0, -0X1C);
L_80229538:
    // 0x80229538: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x8022953C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80229540: addiu       $v0, $zero, 0x1C
    ctx->r2 = ADD32(0, 0X1C);
L_80229544:
    // 0x80229544: sh          $v0, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r2;
    // 0x80229548: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022954C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80229550: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
L_80229554:
    // 0x80229554: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80229558: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022955C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80229560: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229564: bgez        $v0, L_8022959C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80229568: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022959C;
    }
    // 0x80229568: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022956C: addiu       $a0, $zero, 0xB7
    ctx->r4 = ADD32(0, 0XB7);
    // 0x80229570: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x80229574: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80229578: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x8022957C: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x80229580: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229584: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80229588: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022958C: jal         0x8002A33C
    // 0x80229590: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x80229590: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    after_0:
    // 0x80229594: j           L_8022983C
    // 0x80229598: nop

        goto L_8022983C;
    // 0x80229598: nop

L_8022959C:
    // 0x8022959C: addiu       $a1, $zero, 0x200
    ctx->r5 = ADD32(0, 0X200);
    // 0x802295A0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802295A4: jal         0x8004DA90
    // 0x802295A8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x802295A8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x802295AC: jal         0x80040F30
    // 0x802295B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_2;
    // 0x802295B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x802295B4: jal         0x8003E934
    // 0x802295B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_3;
    // 0x802295B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x802295BC: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x802295C0: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x802295C4: lh          $v1, 0x2E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2E);
    // 0x802295C8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802295CC: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x802295D0: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x802295D4: bltz        $v0, L_802295EC
    if (SIGNED(ctx->r2) < 0) {
        // 0x802295D8: slti        $v0, $v0, 0x21
        ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
            goto L_802295EC;
    }
    // 0x802295D8: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x802295DC: beq         $v0, $zero, L_802295FC
    if (ctx->r2 == 0) {
        // 0x802295E0: nop
    
            goto L_802295FC;
    }
    // 0x802295E0: nop

    // 0x802295E4: j           L_8022983C
    // 0x802295E8: nop

        goto L_8022983C;
    // 0x802295E8: nop

L_802295EC:
    // 0x802295EC: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x802295F0: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x802295F4: bne         $v0, $zero, L_8022983C
    if (ctx->r2 != 0) {
        // 0x802295F8: nop
    
            goto L_8022983C;
    }
    // 0x802295F8: nop

L_802295FC:
    // 0x802295FC: lhu         $v0, 0x2E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2E);
    // 0x80229600: lw          $a0, 0x38($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X38);
    // 0x80229604: addiu       $v1, $zero, 0xA
    ctx->r3 = ADD32(0, 0XA);
    // 0x80229608: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    // 0x8022960C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x80229610: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80229614: j           L_8022983C
    // 0x80229618: sw          $a0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r4;
        goto L_8022983C;
    // 0x80229618: sw          $a0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r4;
L_8022961C:
    // 0x8022961C: lhu         $v1, 0x4($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X4);
    // 0x80229620: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229624: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80229628: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022962C: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80229630: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80229634: sll         $a2, $v0, 22
    ctx->r6 = S32(ctx->r2 << 22);
    // 0x80229638: sh          $v1, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r3;
    // 0x8022963C: lhu         $a3, 0x48($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X48);
    // 0x80229640: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80229644: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80229648: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8022964C: sll         $a3, $a3, 20
    ctx->r7 = S32(ctx->r7 << 20);
    // 0x80229650: jal         0x8004DA90
    // 0x80229654: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    func_8004DA90_28E90(rdram, ctx);
        goto after_4;
    // 0x80229654: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    after_4:
    // 0x80229658: jal         0x80040F30
    // 0x8022965C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_5;
    // 0x8022965C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80229660: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x80229664: beq         $v0, $zero, L_8022983C
    if (ctx->r2 == 0) {
        // 0x80229668: addiu       $a0, $zero, 0xB8
        ctx->r4 = ADD32(0, 0XB8);
            goto L_8022983C;
    }
    // 0x80229668: addiu       $a0, $zero, 0xB8
    ctx->r4 = ADD32(0, 0XB8);
    // 0x8022966C: addiu       $s3, $s0, 0x14
    ctx->r19 = ADD32(ctx->r16, 0X14);
    // 0x80229670: jal         0x8002A33C
    // 0x80229674: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_6;
    // 0x80229674: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_6:
    // 0x80229678: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022967C: andi        $v0, $v0, 0x200
    ctx->r2 = ctx->r2 & 0X200;
    // 0x80229680: beq         $v0, $zero, L_80229780
    if (ctx->r2 == 0) {
        // 0x80229684: addiu       $s2, $s0, 0x1C
        ctx->r18 = ADD32(ctx->r16, 0X1C);
            goto L_80229780;
    }
    // 0x80229684: addiu       $s2, $s0, 0x1C
    ctx->r18 = ADD32(ctx->r16, 0X1C);
    // 0x80229688: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022968C: lhu         $a1, 0x56($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X56);
    // 0x80229690: lhu         $v0, 0x3C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3C);
    // 0x80229694: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x80229698: lw          $a3, 0x58($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X58);
    // 0x8022969C: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x802296A0: andi        $a1, $a1, 0xFFF
    ctx->r5 = ctx->r5 & 0XFFF;
    // 0x802296A4: lh          $v1, 0x56($a3)
    ctx->r3 = MEM_H(ctx->r7, 0X56);
    // 0x802296A8: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x802296AC: addiu       $v0, $zero, 0x300
    ctx->r2 = ADD32(0, 0X300);
    // 0x802296B0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x802296B4: jal         0x8004FAEC
    // 0x802296B8: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_8004FAEC_2AEEC(rdram, ctx);
        goto after_7;
    // 0x802296B8: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_7:
    // 0x802296BC: beq         $v0, $zero, L_80229780
    if (ctx->r2 == 0) {
        // 0x802296C0: nop
    
            goto L_80229780;
    }
    // 0x802296C0: nop

    // 0x802296C4: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x802296C8: andi        $v0, $v0, 0xFDFF
    ctx->r2 = ctx->r2 & 0XFDFF;
    // 0x802296CC: jal         0x8004EFE4
    // 0x802296D0: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_8;
    // 0x802296D0: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    after_8:
    // 0x802296D4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802296D8: beq         $v1, $zero, L_80229780
    if (ctx->r3 == 0) {
        // 0x802296DC: sw          $v1, 0x54($s1)
        MEM_W(0X54, ctx->r17) = ctx->r3;
            goto L_80229780;
    }
    // 0x802296DC: sw          $v1, 0x54($s1)
    MEM_W(0X54, ctx->r17) = ctx->r3;
    // 0x802296E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802296E4: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x802296E8: lw          $v1, 0x54($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X54);
    // 0x802296EC: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x802296F0: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x802296F4: lw          $v0, 0x54($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X54);
    // 0x802296F8: sb          $zero, 0x3($v0)
    MEM_B(0X3, ctx->r2) = 0;
    // 0x802296FC: lw          $a0, 0x54($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X54);
    // 0x80229700: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x80229704: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80229708: jal         0x8009A3B4
    // 0x8022970C: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    memcpy_recomp(rdram, ctx);
        goto after_9;
    // 0x8022970C: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    after_9:
    // 0x80229710: lw          $a0, 0x54($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X54);
    // 0x80229714: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80229718: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x8022971C: jal         0x8009A3B4
    // 0x80229720: addiu       $a0, $a0, 0x1C
    ctx->r4 = ADD32(ctx->r4, 0X1C);
    memcpy_recomp(rdram, ctx);
        goto after_10;
    // 0x80229720: addiu       $a0, $a0, 0x1C
    ctx->r4 = ADD32(ctx->r4, 0X1C);
    after_10:
    // 0x80229724: lw          $a1, 0x54($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X54);
    // 0x80229728: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022972C: lhu         $v1, 0x3C($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X3C);
    // 0x80229730: addiu       $a3, $zero, 0x6E0
    ctx->r7 = ADD32(0, 0X6E0);
    // 0x80229734: addiu       $v0, $zero, -0xD00
    ctx->r2 = ADD32(0, -0XD00);
    // 0x80229738: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022973C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80229740: addiu       $a0, $a1, 0x14
    ctx->r4 = ADD32(ctx->r5, 0X14);
    // 0x80229744: addiu       $a1, $a1, 0x1C
    ctx->r5 = ADD32(ctx->r5, 0X1C);
    // 0x80229748: addu        $a2, $a2, $v1
    ctx->r6 = ADD32(ctx->r6, ctx->r3);
    // 0x8022974C: jal         0x8004DBA0
    // 0x80229750: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_11;
    // 0x80229750: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_11:
    // 0x80229754: lw          $v1, 0x54($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X54);
    // 0x80229758: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022975C: sh          $v0, 0x64($v1)
    MEM_H(0X64, ctx->r3) = ctx->r2;
    // 0x80229760: lw          $v1, 0x40($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X40);
    // 0x80229764: lbu         $v0, 0xF($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XF);
    // 0x80229768: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022976C: sb          $v0, 0xF($v1)
    MEM_B(0XF, ctx->r3) = ctx->r2;
    // 0x80229770: lw          $v0, 0x44($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X44);
    // 0x80229774: sb          $zero, 0x9($v0)
    MEM_B(0X9, ctx->r2) = 0;
    // 0x80229778: lw          $v0, 0x48($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X48);
    // 0x8022977C: sb          $zero, 0x9($v0)
    MEM_B(0X9, ctx->r2) = 0;
L_80229780:
    // 0x80229780: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x80229784: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x80229788: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8022978C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229790: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80229794: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80229798: j           L_8022983C
    // 0x8022979C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
        goto L_8022983C;
    // 0x8022979C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_802297A0:
    // 0x802297A0: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x802297A4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802297A8: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x802297AC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802297B0: bgez        $v0, L_802297D4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802297B4: nop
    
            goto L_802297D4;
    }
    // 0x802297B4: nop

    // 0x802297B8: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x802297BC: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x802297C0: beq         $v0, $zero, L_802297D4
    if (ctx->r2 == 0) {
        // 0x802297C4: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_802297D4;
    }
    // 0x802297C4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802297C8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802297CC: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x802297D0: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_802297D4:
    // 0x802297D4: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x802297D8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802297DC: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x802297E0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802297E4: bgez        $v0, L_8022983C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802297E8: nop
    
            goto L_8022983C;
    }
    // 0x802297E8: nop

    // 0x802297EC: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x802297F0: ori         $v1, $v0, 0x1
    ctx->r3 = ctx->r2 | 0X1;
    // 0x802297F4: andi        $v0, $v1, 0x40
    ctx->r2 = ctx->r3 & 0X40;
    // 0x802297F8: beq         $v0, $zero, L_80229830
    if (ctx->r2 == 0) {
        // 0x802297FC: sh          $v1, 0x0($s1)
        MEM_H(0X0, ctx->r17) = ctx->r3;
            goto L_80229830;
    }
    // 0x802297FC: sh          $v1, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r3;
    // 0x80229800: andi        $v0, $v1, 0x8
    ctx->r2 = ctx->r3 & 0X8;
    // 0x80229804: beq         $v0, $zero, L_80229818
    if (ctx->r2 == 0) {
        // 0x80229808: nop
    
            goto L_80229818;
    }
    // 0x80229808: nop

    // 0x8022980C: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80229810: j           L_80229820
    // 0x80229814: addiu       $v0, $v0, 0x400
    ctx->r2 = ADD32(ctx->r2, 0X400);
        goto L_80229820;
    // 0x80229814: addiu       $v0, $v0, 0x400
    ctx->r2 = ADD32(ctx->r2, 0X400);
L_80229818:
    // 0x80229818: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022981C: addiu       $v0, $v0, -0x400
    ctx->r2 = ADD32(ctx->r2, -0X400);
L_80229820:
    // 0x80229820: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80229824: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80229828: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022982C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_80229830:
    // 0x80229830: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80229834: andi        $v0, $v0, 0xFFBF
    ctx->r2 = ctx->r2 & 0XFFBF;
    // 0x80229838: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8022983C:
    // 0x8022983C: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80229840: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80229844: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80229848: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022984C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80229850: jr          $ra
    // 0x80229854: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80229854: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_802254B0_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802254B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802254B4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802254B8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802254BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802254C0: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x802254C4: beq         $v1, $zero, L_802254DC
    if (ctx->r3 == 0) {
        // 0x802254C8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802254DC;
    }
    // 0x802254C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802254CC: beq         $v1, $v0, L_80225508
    if (ctx->r3 == ctx->r2) {
        // 0x802254D0: nop
    
            goto L_80225508;
    }
    // 0x802254D0: nop

    // 0x802254D4: j           L_8022552C
    // 0x802254D8: nop

        goto L_8022552C;
    // 0x802254D8: nop

L_802254DC:
    // 0x802254DC: jal         0x8006033C
    // 0x802254E0: addiu       $a0, $zero, 0x68
    ctx->r4 = ADD32(0, 0X68);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x802254E0: addiu       $a0, $zero, 0x68
    ctx->r4 = ADD32(0, 0X68);
    after_0:
    // 0x802254E4: bnel        $v0, $zero, L_80225528
    if (ctx->r2 != 0) {
        // 0x802254E8: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_80225528;
    }
    goto skip_0;
    // 0x802254E8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    skip_0:
    // 0x802254EC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802254F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802254F4: jal         0x80060DA0
    // 0x802254F8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80060DA0_3C1A0(rdram, ctx);
        goto after_1;
    // 0x802254F8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x802254FC: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225500: j           L_80225528
    // 0x80225504: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80225528;
    // 0x80225504: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80225508:
    // 0x80225508: jal         0x8006033C
    // 0x8022550C: addiu       $a0, $zero, 0x618
    ctx->r4 = ADD32(0, 0X618);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x8022550C: addiu       $a0, $zero, 0x618
    ctx->r4 = ADD32(0, 0X618);
    after_2:
    // 0x80225510: beq         $v0, $zero, L_8022552C
    if (ctx->r2 == 0) {
        // 0x80225514: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8022552C;
    }
    // 0x80225514: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80225518: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022551C: jal         0x80060DA0
    // 0x80225520: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80060DA0_3C1A0(rdram, ctx);
        goto after_3;
    // 0x80225520: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x80225524: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_80225528:
    // 0x80225528: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8022552C:
    // 0x8022552C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225530: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225534: jr          $ra
    // 0x80225538: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225538: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022FD34_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FD34: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022FD38: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022FD3C: jal         0x8004F418
    // 0x8022FD40: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x8022FD40: nop

    after_0:
    // 0x8022FD44: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022FD48: jr          $ra
    // 0x8022FD4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022FD4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E054_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E054: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E058: addiu       $a2, $a0, 0x348
    ctx->r6 = ADD32(ctx->r4, 0X348);
    // 0x8022E05C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022E060: lb          $v1, 0xA7($a0)
    ctx->r3 = MEM_B(ctx->r4, 0XA7);
    // 0x8022E064: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022E068: bne         $v1, $v0, L_8022E0DC
    if (ctx->r3 != ctx->r2) {
        // 0x8022E06C: addiu       $a1, $a0, 0xC4
        ctx->r5 = ADD32(ctx->r4, 0XC4);
            goto L_8022E0DC;
    }
    // 0x8022E06C: addiu       $a1, $a0, 0xC4
    ctx->r5 = ADD32(ctx->r4, 0XC4);
    // 0x8022E070: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x8022E074: addiu       $v1, $zero, 0x3C
    ctx->r3 = ADD32(0, 0X3C);
    // 0x8022E078: sb          $v1, 0x386($a0)
    MEM_B(0X386, ctx->r4) = ctx->r3;
    // 0x8022E07C: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x8022E080: beq         $v0, $v1, L_8022E094
    if (ctx->r2 == ctx->r3) {
        // 0x8022E084: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_8022E094;
    }
    // 0x8022E084: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022E088: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    // 0x8022E08C: j           L_8022E0A0
    // 0x8022E090: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
        goto L_8022E0A0;
    // 0x8022E090: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_8022E094:
    // 0x8022E094: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022E098: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x8022E09C: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
L_8022E0A0:
    // 0x8022E0A0: lbu         $v0, 0x6($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X6);
    // 0x8022E0A4: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x8022E0A8: beq         $v0, $zero, L_8022E0C4
    if (ctx->r2 == 0) {
        // 0x8022E0AC: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_8022E0C4;
    }
    // 0x8022E0AC: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022E0B0: lbu         $v0, 0x6($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X6);
    // 0x8022E0B4: sb          $zero, 0x7($a1)
    MEM_B(0X7, ctx->r5) = 0;
    // 0x8022E0B8: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x8022E0BC: sb          $v0, 0x6($a1)
    MEM_B(0X6, ctx->r5) = ctx->r2;
    // 0x8022E0C0: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
L_8022E0C4:
    // 0x8022E0C4: sh          $v0, 0x3A($a2)
    MEM_H(0X3A, ctx->r6) = ctx->r2;
    // 0x8022E0C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E0CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022E0D0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022E0D4: jal         0x80050294
    // 0x8022E0D8: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8022E0D8: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    after_0:
L_8022E0DC:
    // 0x8022E0DC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022E0E0: jr          $ra
    // 0x8022E0E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E0E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022AE28_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AE28: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022AE2C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022AE30: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022AE34: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022AE38: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022AE3C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022AE40: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022AE44: beq         $v1, $v0, L_8022AE90
    if (ctx->r3 == ctx->r2) {
        // 0x8022AE48: addiu       $s1, $s0, 0x328
        ctx->r17 = ADD32(ctx->r16, 0X328);
            goto L_8022AE90;
    }
    // 0x8022AE48: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x8022AE4C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022AE50: beql        $v0, $zero, L_8022AE68
    if (ctx->r2 == 0) {
        // 0x8022AE54: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022AE68;
    }
    goto skip_0;
    // 0x8022AE54: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022AE58: beq         $v1, $zero, L_8022AE78
    if (ctx->r3 == 0) {
        // 0x8022AE5C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022AE78;
    }
    // 0x8022AE5C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022AE60: j           L_8022AF04
    // 0x8022AE64: nop

        goto L_8022AF04;
    // 0x8022AE64: nop

L_8022AE68:
    // 0x8022AE68: beq         $v1, $v0, L_8022AEBC
    if (ctx->r3 == ctx->r2) {
        // 0x8022AE6C: nop
    
            goto L_8022AEBC;
    }
    // 0x8022AE6C: nop

    // 0x8022AE70: j           L_8022AF04
    // 0x8022AE74: nop

        goto L_8022AF04;
    // 0x8022AE74: nop

L_8022AE78:
    // 0x8022AE78: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022AE7C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022AE80: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022AE84: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022AE88: sh          $v0, 0x32C($s0)
    MEM_H(0X32C, ctx->r16) = ctx->r2;
    // 0x8022AE8C: sh          $zero, 0x330($s0)
    MEM_H(0X330, ctx->r16) = 0;
L_8022AE90:
    // 0x8022AE90: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022AE94: addiu       $v1, $v0, -0x1
    ctx->r3 = ADD32(ctx->r2, -0X1);
    // 0x8022AE98: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x8022AE9C: bgez        $v0, L_8022AEB0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022AEA0: sh          $v1, 0x4($s1)
        MEM_H(0X4, ctx->r17) = ctx->r3;
            goto L_8022AEB0;
    }
    // 0x8022AEA0: sh          $v1, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r3;
    // 0x8022AEA4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022AEA8: j           L_8022AEBC
    // 0x8022AEAC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8022AEBC;
    // 0x8022AEAC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022AEB0:
    // 0x8022AEB0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022AEB4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022AEB8: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
L_8022AEBC:
    // 0x8022AEBC: lhu         $a2, 0x46($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X46);
    // 0x8022AEC0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022AEC4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022AEC8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022AECC: sll         $a2, $a2, 23
    ctx->r6 = S32(ctx->r6 << 23);
    // 0x8022AED0: jal         0x8004DA90
    // 0x8022AED4: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8022AED4: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    after_0:
    // 0x8022AED8: jal         0x80040F30
    // 0x8022AEDC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_1;
    // 0x8022AEDC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022AEE0: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x8022AEE4: beq         $v0, $zero, L_8022AF04
    if (ctx->r2 == 0) {
        // 0x8022AEE8: nop
    
            goto L_8022AF04;
    }
    // 0x8022AEE8: nop

    // 0x8022AEEC: lh          $v0, 0x4($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4);
    // 0x8022AEF0: bgez        $v0, L_8022AF04
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022AEF4: nop
    
            goto L_8022AF04;
    }
    // 0x8022AEF4: nop

    // 0x8022AEF8: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022AEFC: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022AF00: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8022AF04:
    // 0x8022AF04: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022AF08: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022AF0C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022AF10: jr          $ra
    // 0x8022AF14: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022AF14: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022DD9C_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DD9C: lb          $v0, 0x385($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X385);
    // 0x8022DDA0: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8022DDA4: beq         $v0, $zero, L_8022DDB8
    if (ctx->r2 == 0) {
        // 0x8022DDA8: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022DDB8;
    }
    // 0x8022DDA8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022DDAC: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022DDB0: j           L_8022DDC4
    // 0x8022DDB4: sb          $v0, 0x385($a0)
    MEM_B(0X385, ctx->r4) = ctx->r2;
        goto L_8022DDC4;
    // 0x8022DDB4: sb          $v0, 0x385($a0)
    MEM_B(0X385, ctx->r4) = ctx->r2;
L_8022DDB8:
    // 0x8022DDB8: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x8022DDBC: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    // 0x8022DDC0: sh          $v0, 0x44($a0)
    MEM_H(0X44, ctx->r4) = ctx->r2;
L_8022DDC4:
    // 0x8022DDC4: jr          $ra
    // 0x8022DDC8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x8022DDC8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8022D8E4_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D8E4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022D8E8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022D8EC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D8F0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8022D8F4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022D8F8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D8FC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022D900: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022D904: lw          $v0, -0x7BA4($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7BA4);
    // 0x8022D908: jalr        $v0
    // 0x8022D90C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022D90C: nop

    after_0:
    // 0x8022D910: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022D914: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022D918: bne         $v1, $v0, L_8022D9D4
    if (ctx->r3 != ctx->r2) {
        // 0x8022D91C: nop
    
            goto L_8022D9D4;
    }
    // 0x8022D91C: nop

    // 0x8022D920: lb          $v0, 0x387($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X387);
    // 0x8022D924: bne         $v0, $zero, L_8022D9B8
    if (ctx->r2 != 0) {
        // 0x8022D928: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022D9B8;
    }
    // 0x8022D928: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022D92C: lbu         $v0, 0x64($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X64);
    // 0x8022D930: lbu         $v1, 0x65($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X65);
    // 0x8022D934: lbu         $a0, 0x66($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X66);
    // 0x8022D938: lbu         $a1, 0x66($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X66);
    // 0x8022D93C: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x8022D940: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x8022D944: andi        $a0, $a0, 0x1F
    ctx->r4 = ctx->r4 & 0X1F;
    // 0x8022D948: sll         $v1, $v1, 5
    ctx->r3 = S32(ctx->r3 << 5);
    // 0x8022D94C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8022D950: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    // 0x8022D954: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x8022D958: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022D95C: lhu         $a0, 0x15E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X15E);
    // 0x8022D960: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8022D964: sb          $a1, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r5;
    // 0x8022D968: lb          $v1, 0x66($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X66);
    // 0x8022D96C: addiu       $v0, $zero, -0x8000
    ctx->r2 = ADD32(0, -0X8000);
    // 0x8022D970: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x8022D974: slti        $v1, $v1, 0x10
    ctx->r3 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
    // 0x8022D978: bne         $v1, $zero, L_8022D9D4
    if (ctx->r3 != 0) {
        // 0x8022D97C: sh          $v0, 0x15E($s0)
        MEM_H(0X15E, ctx->r16) = ctx->r2;
            goto L_8022D9D4;
    }
    // 0x8022D97C: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022D980: lb          $v1, 0x64($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X64);
    // 0x8022D984: andi        $v0, $v0, 0x7FFF
    ctx->r2 = ctx->r2 & 0X7FFF;
    // 0x8022D988: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022D98C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022D990: sb          $v0, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r2;
    // 0x8022D994: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022D998: beq         $v1, $v0, L_8022D9D4
    if (ctx->r3 == ctx->r2) {
        // 0x8022D99C: addu        $a0, $v1, $zero
        ctx->r4 = ADD32(ctx->r3, 0);
            goto L_8022D9D4;
    }
    // 0x8022D99C: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x8022D9A0: lbu         $v0, 0x65($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X65);
    // 0x8022D9A4: addiu       $v1, $a0, 0x4
    ctx->r3 = ADD32(ctx->r4, 0X4);
    // 0x8022D9A8: sb          $v1, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r3;
    // 0x8022D9AC: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8022D9B0: j           L_8022D9D4
    // 0x8022D9B4: sb          $v0, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r2;
        goto L_8022D9D4;
    // 0x8022D9B4: sb          $v0, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r2;
L_8022D9B8:
    // 0x8022D9B8: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022D9BC: sb          $v0, 0x387($s0)
    MEM_B(0X387, ctx->r16) = ctx->r2;
    // 0x8022D9C0: addiu       $v0, $zero, -0x8000
    ctx->r2 = ADD32(0, -0X8000);
    // 0x8022D9C4: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022D9C8: sb          $zero, 0x66($s0)
    MEM_B(0X66, ctx->r16) = 0;
    // 0x8022D9CC: sb          $zero, 0x65($s0)
    MEM_B(0X65, ctx->r16) = 0;
    // 0x8022D9D0: sb          $zero, 0x64($s0)
    MEM_B(0X64, ctx->r16) = 0;
L_8022D9D4:
    // 0x8022D9D4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8022D9D8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022D9DC: jr          $ra
    // 0x8022D9E0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022D9E0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80229AE8_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229AE8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80229AEC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229AF0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229AF4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80229AF8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80229AFC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80229B00: lw          $v0, 0x33C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X33C);
    // 0x80229B04: lui         $v1, 0xFF
    ctx->r3 = S32(0XFF << 16);
    // 0x80229B08: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x80229B0C: addiu       $s2, $s0, 0x328
    ctx->r18 = ADD32(ctx->r16, 0X328);
    // 0x80229B10: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80229B14: beq         $v0, $zero, L_80229D10
    if (ctx->r2 == 0) {
        // 0x80229B18: sw          $v0, 0x374($s0)
        MEM_W(0X374, ctx->r16) = ctx->r2;
            goto L_80229D10;
    }
    // 0x80229B18: sw          $v0, 0x374($s0)
    MEM_W(0X374, ctx->r16) = ctx->r2;
    // 0x80229B1C: lw          $v0, 0x33C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X33C);
    // 0x80229B20: lui         $v1, 0x3800
    ctx->r3 = S32(0X3800 << 16);
    // 0x80229B24: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80229B28: beq         $v0, $zero, L_80229D08
    if (ctx->r2 == 0) {
        // 0x80229B2C: addiu       $a0, $zero, 0xA3
        ctx->r4 = ADD32(0, 0XA3);
            goto L_80229D08;
    }
    // 0x80229B2C: addiu       $a0, $zero, 0xA3
    ctx->r4 = ADD32(0, 0XA3);
    // 0x80229B30: lw          $a0, 0x374($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X374);
    // 0x80229B34: lhu         $v1, 0x6E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X6E);
    // 0x80229B38: lhu         $v0, 0x6E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6E);
    // 0x80229B3C: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x80229B40: sh          $v1, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r3;
    // 0x80229B44: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80229B48: bgtz        $v1, L_80229B80
    if (SIGNED(ctx->r3) > 0) {
        // 0x80229B4C: sh          $v0, 0xB2($s0)
        MEM_H(0XB2, ctx->r16) = ctx->r2;
            goto L_80229B80;
    }
    // 0x80229B4C: sh          $v0, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r2;
    // 0x80229B50: lhu         $v0, 0x328($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X328);
    // 0x80229B54: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x80229B58: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80229B5C: lw          $a0, 0x298($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X298);
    // 0x80229B60: andi        $v0, $v0, 0xFFFD
    ctx->r2 = ctx->r2 & 0XFFFD;
    // 0x80229B64: ori         $v0, $v0, 0x820
    ctx->r2 = ctx->r2 | 0X820;
    // 0x80229B68: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80229B6C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80229B70: sh          $v0, 0x328($s0)
    MEM_H(0X328, ctx->r16) = ctx->r2;
    // 0x80229B74: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80229B78: lbu         $v0, 0x9($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X9);
    // 0x80229B7C: sw          $v0, 0x374($s0)
    MEM_W(0X374, ctx->r16) = ctx->r2;
L_80229B80:
    // 0x80229B80: lhu         $v0, 0x328($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X328);
    // 0x80229B84: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x80229B88: beq         $v0, $zero, L_80229CB4
    if (ctx->r2 == 0) {
        // 0x80229B8C: lui         $v1, 0x2000
        ctx->r3 = S32(0X2000 << 16);
            goto L_80229CB4;
    }
    // 0x80229B8C: lui         $v1, 0x2000
    ctx->r3 = S32(0X2000 << 16);
    // 0x80229B90: lw          $a0, 0x374($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X374);
    // 0x80229B94: lhu         $v0, 0x332($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X332);
    // 0x80229B98: lw          $v1, 0x33C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X33C);
    // 0x80229B9C: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    // 0x80229BA0: lui         $v0, 0x2000
    ctx->r2 = S32(0X2000 << 16);
    // 0x80229BA4: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80229BA8: bne         $v1, $zero, L_80229BE0
    if (ctx->r3 != 0) {
        // 0x80229BAC: sh          $a0, 0x332($s0)
        MEM_H(0X332, ctx->r16) = ctx->r4;
            goto L_80229BE0;
    }
    // 0x80229BAC: sh          $a0, 0x332($s0)
    MEM_H(0X332, ctx->r16) = ctx->r4;
    // 0x80229BB0: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80229BB4: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80229BB8: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x80229BBC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80229BC0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80229BC4: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80229BC8: lbu         $v1, 0x9($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X9);
    // 0x80229BCC: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x80229BD0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80229BD4: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80229BD8: bne         $v0, $zero, L_80229CF4
    if (ctx->r2 != 0) {
        // 0x80229BDC: addiu       $a0, $zero, 0xA0
        ctx->r4 = ADD32(0, 0XA0);
            goto L_80229CF4;
    }
    // 0x80229BDC: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
L_80229BE0:
    // 0x80229BE0: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
    // 0x80229BE4: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x80229BE8: jal         0x8002A33C
    // 0x80229BEC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x80229BEC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_0:
    // 0x80229BF0: lhu         $v0, 0x34A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X34A);
    // 0x80229BF4: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80229BF8: beq         $v0, $zero, L_80229C48
    if (ctx->r2 == 0) {
        // 0x80229BFC: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80229C48;
    }
    // 0x80229BFC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80229C00: jal         0x8004EC38
    // 0x80229C04: addiu       $a1, $s0, 0x344
    ctx->r5 = ADD32(ctx->r16, 0X344);
    func_8004EC38_2A038(rdram, ctx);
        goto after_1;
    // 0x80229C04: addiu       $a1, $s0, 0x344
    ctx->r5 = ADD32(ctx->r16, 0X344);
    after_1:
    // 0x80229C08: lh          $v1, 0x56($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X56);
    // 0x80229C0C: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x80229C10: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229C14: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80229C18: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80229C1C: addiu       $v1, $v1, 0x400
    ctx->r3 = ADD32(ctx->r3, 0X400);
    // 0x80229C20: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80229C24: slti        $v1, $v1, 0x800
    ctx->r3 = SIGNED(ctx->r3) < 0X800 ? 1 : 0;
    // 0x80229C28: beq         $v1, $zero, L_80229C3C
    if (ctx->r3 == 0) {
        // 0x80229C2C: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_80229C3C;
    }
    // 0x80229C2C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80229C30: lhu         $v1, 0x64($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X64);
    // 0x80229C34: j           L_80229C88
    // 0x80229C38: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80229C88;
    // 0x80229C38: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80229C3C:
    // 0x80229C3C: lhu         $v0, 0x64($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X64);
    // 0x80229C40: j           L_80229C98
    // 0x80229C44: addiu       $v1, $zero, 0x7
    ctx->r3 = ADD32(0, 0X7);
        goto L_80229C98;
    // 0x80229C44: addiu       $v1, $zero, 0x7
    ctx->r3 = ADD32(0, 0X7);
L_80229C48:
    // 0x80229C48: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80229C4C: addiu       $a0, $a0, -0x7DF0
    ctx->r4 = ADD32(ctx->r4, -0X7DF0);
    // 0x80229C50: jal         0x8004EC38
    // 0x80229C54: addiu       $a1, $s0, 0x344
    ctx->r5 = ADD32(ctx->r16, 0X344);
    func_8004EC38_2A038(rdram, ctx);
        goto after_2;
    // 0x80229C54: addiu       $a1, $s0, 0x344
    ctx->r5 = ADD32(ctx->r16, 0X344);
    after_2:
    // 0x80229C58: lh          $v1, 0x56($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X56);
    // 0x80229C5C: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x80229C60: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229C64: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80229C68: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80229C6C: addiu       $v0, $v0, 0x400
    ctx->r2 = ADD32(ctx->r2, 0X400);
    // 0x80229C70: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80229C74: slti        $v0, $v0, 0x800
    ctx->r2 = SIGNED(ctx->r2) < 0X800 ? 1 : 0;
    // 0x80229C78: beq         $v0, $zero, L_80229C90
    if (ctx->r2 == 0) {
        // 0x80229C7C: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_80229C90;
    }
    // 0x80229C7C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80229C80: lhu         $v1, 0x64($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X64);
    // 0x80229C84: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80229C88:
    // 0x80229C88: j           L_80229CA8
    // 0x80229C8C: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
        goto L_80229CA8;
    // 0x80229C8C: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_80229C90:
    // 0x80229C90: lhu         $v0, 0x64($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X64);
    // 0x80229C94: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
L_80229C98:
    // 0x80229C98: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    // 0x80229C9C: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80229CA0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80229CA4: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_80229CA8:
    // 0x80229CA8: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x80229CAC: j           L_80229CFC
    // 0x80229CB0: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
        goto L_80229CFC;
    // 0x80229CB0: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
L_80229CB4:
    // 0x80229CB4: lw          $v0, 0x33C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X33C);
    // 0x80229CB8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80229CBC: bne         $v0, $zero, L_80229CF4
    if (ctx->r2 != 0) {
        // 0x80229CC0: addiu       $a0, $zero, 0xA2
        ctx->r4 = ADD32(0, 0XA2);
            goto L_80229CF4;
    }
    // 0x80229CC0: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
    // 0x80229CC4: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80229CC8: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80229CCC: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x80229CD0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80229CD4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80229CD8: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x80229CDC: lh          $v0, 0x332($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X332);
    // 0x80229CE0: lbu         $v1, 0x9($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X9);
    // 0x80229CE4: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80229CE8: bne         $v0, $zero, L_80229CF4
    if (ctx->r2 != 0) {
        // 0x80229CEC: addiu       $a0, $zero, 0xA0
        ctx->r4 = ADD32(0, 0XA0);
            goto L_80229CF4;
    }
    // 0x80229CEC: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x80229CF0: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
L_80229CF4:
    // 0x80229CF4: jal         0x8002A33C
    // 0x80229CF8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_3;
    // 0x80229CF8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_3:
L_80229CFC:
    // 0x80229CFC: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x80229D00: j           L_80229D10
    // 0x80229D04: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
        goto L_80229D10;
    // 0x80229D04: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
L_80229D08:
    // 0x80229D08: jal         0x8002A33C
    // 0x80229D0C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_4;
    // 0x80229D0C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_4:
L_80229D10:
    // 0x80229D10: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229D14: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80229D18: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80229D1C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80229D20: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229D24: jr          $ra
    // 0x80229D28: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80229D28: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80229D2C: nop

;}
RECOMP_FUNC void func_80225C84_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225C84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225C88: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225C8C: jal         0x8004F488
    // 0x80225C90: nop

    func_8004F488_2A888(rdram, ctx);
        goto after_0;
    // 0x80225C90: nop

    after_0:
    // 0x80225C94: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80225C98: jr          $ra
    // 0x80225C9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225C9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022C718_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C718: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022C71C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C720: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C724: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022C728: lw          $v1, 0x33C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X33C);
    // 0x8022C72C: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x8022C730: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8022C734: and         $a0, $v1, $v0
    ctx->r4 = ctx->r3 & ctx->r2;
    // 0x8022C738: beq         $a0, $zero, L_8022C7B0
    if (ctx->r4 == 0) {
        // 0x8022C73C: lui         $v0, 0x3800
        ctx->r2 = S32(0X3800 << 16);
            goto L_8022C7B0;
    }
    // 0x8022C73C: lui         $v0, 0x3800
    ctx->r2 = S32(0X3800 << 16);
    // 0x8022C740: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8022C744: beql        $v0, $zero, L_8022C7A8
    if (ctx->r2 == 0) {
        // 0x8022C748: addiu       $a0, $zero, 0xA3
        ctx->r4 = ADD32(0, 0XA3);
            goto L_8022C7A8;
    }
    goto skip_0;
    // 0x8022C748: addiu       $a0, $zero, 0xA3
    ctx->r4 = ADD32(0, 0XA3);
    skip_0:
    // 0x8022C74C: lhu         $v0, 0x6E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6E);
    // 0x8022C750: lhu         $v1, 0x6E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X6E);
    // 0x8022C754: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8022C758: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    // 0x8022C75C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C760: bgtz        $v0, L_8022C78C
    if (SIGNED(ctx->r2) > 0) {
        // 0x8022C764: sh          $v1, 0xB2($s0)
        MEM_H(0XB2, ctx->r16) = ctx->r3;
            goto L_8022C78C;
    }
    // 0x8022C764: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    // 0x8022C768: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
    // 0x8022C76C: lhu         $v1, 0x328($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X328);
    // 0x8022C770: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022C774: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C778: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022C77C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8022C780: andi        $v1, $v1, 0xFFFD
    ctx->r3 = ctx->r3 & 0XFFFD;
    // 0x8022C784: j           L_8022C794
    // 0x8022C788: sh          $v1, 0x328($s0)
    MEM_H(0X328, ctx->r16) = ctx->r3;
        goto L_8022C794;
    // 0x8022C788: sh          $v1, 0x328($s0)
    MEM_H(0X328, ctx->r16) = ctx->r3;
L_8022C78C:
    // 0x8022C78C: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x8022C790: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
L_8022C794:
    // 0x8022C794: jal         0x8002A33C
    // 0x8022C798: nop

    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x8022C798: nop

    after_0:
    // 0x8022C79C: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x8022C7A0: j           L_8022C7B0
    // 0x8022C7A4: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
        goto L_8022C7B0;
    // 0x8022C7A4: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
L_8022C7A8:
    // 0x8022C7A8: jal         0x8002A33C
    // 0x8022C7AC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x8022C7AC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_1:
L_8022C7B0:
    // 0x8022C7B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C7B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022C7B8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C7BC: jr          $ra
    // 0x8022C7C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022C7C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022C7C4: nop

    // 0x8022C7C8: nop

    // 0x8022C7CC: nop

;}
RECOMP_FUNC void func_80229018_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229018: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022901C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229020: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229024: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80229028: lbu         $a0, 0xA($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA);
    // 0x8022902C: sltiu       $v0, $a0, 0x5
    ctx->r2 = ctx->r4 < 0X5 ? 1 : 0;
    // 0x80229030: beq         $v0, $zero, L_802291CC
    if (ctx->r2 == 0) {
        // 0x80229034: addiu       $v1, $s0, 0x328
        ctx->r3 = ADD32(ctx->r16, 0X328);
            goto L_802291CC;
    }
    // 0x80229034: addiu       $v1, $s0, 0x328
    ctx->r3 = ADD32(ctx->r16, 0X328);
    // 0x80229038: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x8022903C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80229040: addu        $at, $at, $v0
    gpr jr_addend_80229048 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80229044: lw          $v0, -0x71B8($at)
    ctx->r2 = ADD32(ctx->r1, -0X71B8);
    // 0x80229048: jr          $v0
    // 0x8022904C: nop

    switch (jr_addend_80229048 >> 2) {
        case 0: goto L_80229050; break;
        case 1: goto L_8022906C; break;
        case 2: goto L_802290E0; break;
        case 3: goto L_80229104; break;
        case 4: goto L_8022912C; break;
        default: switch_error(__func__, 0x80229048, 0x80238E48);
    }
    // 0x8022904C: nop

L_80229050:
    // 0x80229050: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229054: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80229058: addiu       $v0, $zero, 0x1D
    ctx->r2 = ADD32(0, 0X1D);
    // 0x8022905C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80229060: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x80229064: sh          $v0, 0x4($v1)
    MEM_H(0X4, ctx->r3) = ctx->r2;
    // 0x80229068: sh          $zero, 0x8($v1)
    MEM_H(0X8, ctx->r3) = 0;
L_8022906C:
    // 0x8022906C: lhu         $v0, 0x4($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X4);
    // 0x80229070: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80229074: sh          $v0, 0x4($v1)
    MEM_H(0X4, ctx->r3) = ctx->r2;
    // 0x80229078: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022907C: bgez        $v0, L_80229098
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80229080: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80229098;
    }
    // 0x80229080: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229084: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80229088: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022908C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80229090: j           L_802290E0
    // 0x80229094: sh          $v0, 0x4($v1)
    MEM_H(0X4, ctx->r3) = ctx->r2;
        goto L_802290E0;
    // 0x80229094: sh          $v0, 0x4($v1)
    MEM_H(0X4, ctx->r3) = ctx->r2;
L_80229098:
    // 0x80229098: addiu       $a1, $zero, -0x50
    ctx->r5 = ADD32(0, -0X50);
    // 0x8022909C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802290A0: jal         0x8004DA90
    // 0x802290A4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x802290A4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x802290A8: jal         0x80040F30
    // 0x802290AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_1;
    // 0x802290AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802290B0: jal         0x8003E934
    // 0x802290B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_2;
    // 0x802290B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x802290B8: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x802290BC: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x802290C0: lh          $v1, 0x2E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2E);
    // 0x802290C4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802290C8: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x802290CC: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x802290D0: bgez        $v0, L_80229190
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802290D4: slti        $v0, $v0, 0x21
        ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
            goto L_80229190;
    }
    // 0x802290D4: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x802290D8: j           L_802291A4
    // 0x802290DC: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
        goto L_802291A4;
    // 0x802290DC: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
L_802290E0:
    // 0x802290E0: lhu         $v0, 0x4($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X4);
    // 0x802290E4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802290E8: sh          $v0, 0x4($v1)
    MEM_H(0X4, ctx->r3) = ctx->r2;
    // 0x802290EC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802290F0: bgez        $v0, L_802291CC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802290F4: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802291CC;
    }
    // 0x802290F4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802290F8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802290FC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80229100: sh          $v0, 0x4($v1)
    MEM_H(0X4, ctx->r3) = ctx->r2;
L_80229104:
    // 0x80229104: lhu         $v0, 0x4($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X4);
    // 0x80229108: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022910C: sh          $v0, 0x4($v1)
    MEM_H(0X4, ctx->r3) = ctx->r2;
    // 0x80229110: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229114: bgez        $v0, L_802291CC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80229118: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_802291CC;
    }
    // 0x80229118: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022911C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80229120: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80229124: j           L_802291CC
    // 0x80229128: sh          $v0, 0x4($v1)
    MEM_H(0X4, ctx->r3) = ctx->r2;
        goto L_802291CC;
    // 0x80229128: sh          $v0, 0x4($v1)
    MEM_H(0X4, ctx->r3) = ctx->r2;
L_8022912C:
    // 0x8022912C: lhu         $v0, 0x4($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X4);
    // 0x80229130: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80229134: sh          $v0, 0x4($v1)
    MEM_H(0X4, ctx->r3) = ctx->r2;
    // 0x80229138: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022913C: bgez        $v0, L_80229150
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80229140: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80229150;
    }
    // 0x80229140: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229144: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x80229148: ori         $v0, $v0, 0x21
    ctx->r2 = ctx->r2 | 0X21;
    // 0x8022914C: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
L_80229150:
    // 0x80229150: addiu       $a1, $zero, -0x80
    ctx->r5 = ADD32(0, -0X80);
    // 0x80229154: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80229158: jal         0x8004DA90
    // 0x8022915C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x8022915C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_3:
    // 0x80229160: jal         0x80040F30
    // 0x80229164: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_4;
    // 0x80229164: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80229168: jal         0x8003E934
    // 0x8022916C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_5;
    // 0x8022916C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80229170: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80229174: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x80229178: lh          $v1, 0x2E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2E);
    // 0x8022917C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229180: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80229184: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x80229188: bltz        $v0, L_802291A0
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022918C: slti        $v0, $v0, 0x21
        ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
            goto L_802291A0;
    }
    // 0x8022918C: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
L_80229190:
    // 0x80229190: beq         $v0, $zero, L_802291B0
    if (ctx->r2 == 0) {
        // 0x80229194: nop
    
            goto L_802291B0;
    }
    // 0x80229194: nop

    // 0x80229198: j           L_802291CC
    // 0x8022919C: nop

        goto L_802291CC;
    // 0x8022919C: nop

L_802291A0:
    // 0x802291A0: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
L_802291A4:
    // 0x802291A4: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x802291A8: bne         $v0, $zero, L_802291CC
    if (ctx->r2 != 0) {
        // 0x802291AC: nop
    
            goto L_802291CC;
    }
    // 0x802291AC: nop

L_802291B0:
    // 0x802291B0: lhu         $v0, 0x2E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2E);
    // 0x802291B4: lw          $a0, 0x38($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X38);
    // 0x802291B8: addiu       $v1, $zero, 0xA
    ctx->r3 = ADD32(0, 0XA);
    // 0x802291BC: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    // 0x802291C0: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x802291C4: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x802291C8: sw          $a0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r4;
L_802291CC:
    // 0x802291CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802291D0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802291D4: jr          $ra
    // 0x802291D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802291D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022EC28_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EC28: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022EC2C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022EC30: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022EC34: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022EC38: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022EC3C: lw          $v0, 0xC4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC4);
    // 0x8022EC40: andi        $v0, $v0, 0xF00
    ctx->r2 = ctx->r2 & 0XF00;
    // 0x8022EC44: bne         $v0, $zero, L_8022EC60
    if (ctx->r2 != 0) {
        // 0x8022EC48: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_8022EC60;
    }
    // 0x8022EC48: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022EC4C: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x8022EC50: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x8022EC54: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8022EC58: beq         $v0, $zero, L_8022ECB4
    if (ctx->r2 == 0) {
        // 0x8022EC5C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022ECB4;
    }
    // 0x8022EC5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022EC60:
    // 0x8022EC60: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022EC64: lh          $v1, 0x56($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X56);
    // 0x8022EC68: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022EC6C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022EC70: sh          $v0, 0x380($s0)
    MEM_H(0X380, ctx->r16) = ctx->r2;
    // 0x8022EC74: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8022EC78: bne         $v0, $zero, L_8022EC84
    if (ctx->r2 != 0) {
        // 0x8022EC7C: addiu       $v0, $zero, 0xE
        ctx->r2 = ADD32(0, 0XE);
            goto L_8022EC84;
    }
    // 0x8022EC7C: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x8022EC80: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
L_8022EC84:
    // 0x8022EC84: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022EC88: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022EC8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022EC90: jal         0x80050294
    // 0x8022EC94: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8022EC94: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8022EC98: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022EC9C: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x8022ECA0: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8022ECA4: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022ECA8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022ECAC: j           L_8022ECC4
    // 0x8022ECB0: sh          $v0, 0x38($s1)
    MEM_H(0X38, ctx->r17) = ctx->r2;
        goto L_8022ECC4;
    // 0x8022ECB0: sh          $v0, 0x38($s1)
    MEM_H(0X38, ctx->r17) = ctx->r2;
L_8022ECB4:
    // 0x8022ECB4: lh          $a1, 0x44($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X44);
    // 0x8022ECB8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022ECBC: jal         0x8004DA90
    // 0x8022ECC0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x8022ECC0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
L_8022ECC4:
    // 0x8022ECC4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022ECC8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022ECCC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022ECD0: jr          $ra
    // 0x8022ECD4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022ECD4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80231FF8_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231FF8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231FFC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232000: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232004: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80232008: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023200C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80232010: jal         0x80050294
    // 0x80232014: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80232014: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    after_0:
    // 0x80232018: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8023201C: sb          $v0, 0x385($s0)
    MEM_B(0X385, ctx->r16) = ctx->r2;
    // 0x80232020: addiu       $v0, $zero, 0x5A
    ctx->r2 = ADD32(0, 0X5A);
    // 0x80232024: sb          $v0, 0x1DE($s0)
    MEM_B(0X1DE, ctx->r16) = ctx->r2;
    // 0x80232028: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023202C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80232030: sb          $v0, 0x387($s0)
    MEM_B(0X387, ctx->r16) = ctx->r2;
    // 0x80232034: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80232038: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023203C: jr          $ra
    // 0x80232040: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80232040: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80232044_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232044: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80232048: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8023204C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232050: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80232054: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80232058: lb          $v1, 0x385($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X385);
    // 0x8023205C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80232060: sb          $v0, 0x387($s0)
    MEM_B(0X387, ctx->r16) = ctx->r2;
    // 0x80232064: beq         $v1, $zero, L_802320A0
    if (ctx->r3 == 0) {
        // 0x80232068: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_802320A0;
    }
    // 0x80232068: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x8023206C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80232070: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80232074: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80232078: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8023207C: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x80232080: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    // 0x80232084: jal         0x8004F820
    // 0x80232088: sb          $v0, 0x385($s0)
    MEM_B(0X385, ctx->r16) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80232088: sb          $v0, 0x385($s0)
    MEM_B(0X385, ctx->r16) = ctx->r2;
    after_0:
    // 0x8023208C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80232090: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80232094: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80232098: j           L_802320F0
    // 0x8023209C: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
        goto L_802320F0;
    // 0x8023209C: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_802320A0:
    // 0x802320A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802320A4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802320A8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802320AC: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
    // 0x802320B0: jal         0x80050294
    // 0x802320B4: sb          $s1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r17;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x802320B4: sb          $s1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r17;
    after_1:
    // 0x802320B8: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x802320BC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802320C0: bne         $v1, $v0, L_802320E0
    if (ctx->r3 != ctx->r2) {
        // 0x802320C4: addiu       $v0, $zero, 0x2D0
        ctx->r2 = ADD32(0, 0X2D0);
            goto L_802320E0;
    }
    // 0x802320C4: addiu       $v0, $zero, 0x2D0
    ctx->r2 = ADD32(0, 0X2D0);
    // 0x802320C8: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x802320CC: sb          $v0, 0x387($s0)
    MEM_B(0X387, ctx->r16) = ctx->r2;
    // 0x802320D0: sb          $zero, 0x64($s0)
    MEM_B(0X64, ctx->r16) = 0;
    // 0x802320D4: sb          $zero, 0x65($s0)
    MEM_B(0X65, ctx->r16) = 0;
    // 0x802320D8: sb          $zero, 0x66($s0)
    MEM_B(0X66, ctx->r16) = 0;
    // 0x802320DC: addiu       $v0, $zero, 0x2D0
    ctx->r2 = ADD32(0, 0X2D0);
L_802320E0:
    // 0x802320E0: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x802320E4: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x802320E8: sb          $s1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r17;
    // 0x802320EC: sh          $v0, 0x382($s0)
    MEM_H(0X382, ctx->r16) = ctx->r2;
L_802320F0:
    // 0x802320F0: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x802320F4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802320F8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802320FC: jr          $ra
    // 0x80232100: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80232100: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022771C_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022771C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80227720: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80227724: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227728: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8022772C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80227730: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80227734: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80227738: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x8022773C: beq         $v0, $zero, L_802278AC
    if (ctx->r2 == 0) {
        // 0x80227740: addiu       $s1, $s0, 0x3E0
        ctx->r17 = ADD32(ctx->r16, 0X3E0);
            goto L_802278AC;
    }
    // 0x80227740: addiu       $s1, $s0, 0x3E0
    ctx->r17 = ADD32(ctx->r16, 0X3E0);
    // 0x80227744: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80227748: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022774C: addu        $at, $at, $v0
    gpr jr_addend_80227754 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227750: lw          $v0, -0x7250($at)
    ctx->r2 = ADD32(ctx->r1, -0X7250);
    // 0x80227754: jr          $v0
    // 0x80227758: nop

    switch (jr_addend_80227754 >> 2) {
        case 0: goto L_8022775C; break;
        case 1: goto L_80227840; break;
        case 2: goto L_80227850; break;
        case 3: goto L_8022787C; break;
        case 4: goto L_80227898; break;
        default: switch_error(__func__, 0x80227754, 0x80238DB0);
    }
    // 0x80227758: nop

L_8022775C:
    // 0x8022775C: lh          $v0, 0x4C($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4C);
    // 0x80227760: beq         $v0, $zero, L_80227824
    if (ctx->r2 == 0) {
        // 0x80227764: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80227824;
    }
    // 0x80227764: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80227768: andi        $v0, $v1, 0x3
    ctx->r2 = ctx->r3 & 0X3;
    // 0x8022776C: bne         $v0, $zero, L_80227830
    if (ctx->r2 != 0) {
        // 0x80227770: addiu       $a0, $s1, 0x38
        ctx->r4 = ADD32(ctx->r17, 0X38);
            goto L_80227830;
    }
    // 0x80227770: addiu       $a0, $s1, 0x38
    ctx->r4 = ADD32(ctx->r17, 0X38);
    // 0x80227774: lbu         $v1, 0x53($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X53);
    // 0x80227778: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022777C: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x80227780: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80227784: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80227788: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022778C: lui         $s2, 0x8024
    ctx->r18 = S32(0X8024 << 16);
    // 0x80227790: addu        $s2, $s2, $v0
    ctx->r18 = ADD32(ctx->r18, ctx->r2);
    // 0x80227794: lbu         $s2, -0x7EA8($s2)
    ctx->r18 = MEM_BU(ctx->r18, -0X7EA8);
    // 0x80227798: sll         $a1, $v1, 2
    ctx->r5 = S32(ctx->r3 << 2);
    // 0x8022779C: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x802277A0: sll         $a1, $a1, 1
    ctx->r5 = S32(ctx->r5 << 1);
    // 0x802277A4: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802277A8: addiu       $v0, $v0, -0x7EA6
    ctx->r2 = ADD32(ctx->r2, -0X7EA6);
    // 0x802277AC: jal         0x8009A3B4
    // 0x802277B0: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x802277B0: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    after_0:
    // 0x802277B4: jal         0x8004F144
    // 0x802277B8: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_1;
    // 0x802277B8: nop

    after_1:
    // 0x802277BC: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x802277C0: beq         $a1, $zero, L_80227830
    if (ctx->r5 == 0) {
        // 0x802277C4: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80227830;
    }
    // 0x802277C4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802277C8: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x802277CC: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x802277D0: sb          $v0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r2;
    // 0x802277D4: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x802277D8: sb          $v0, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r2;
    // 0x802277DC: lbu         $v0, 0x53($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X53);
    // 0x802277E0: sll         $a0, $s2, 3
    ctx->r4 = S32(ctx->r18 << 3);
    // 0x802277E4: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    // 0x802277E8: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x802277EC: sb          $v0, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r2;
    // 0x802277F0: lhu         $v0, 0x180($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X180);
    // 0x802277F4: lhu         $v1, 0x38($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X38);
    // 0x802277F8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802277FC: sh          $v0, 0x38($a1)
    MEM_H(0X38, ctx->r5) = ctx->r2;
    // 0x80227800: lhu         $v0, 0x182($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X182);
    // 0x80227804: lhu         $v1, 0x3A($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X3A);
    // 0x80227808: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022780C: sh          $v0, 0x3A($a1)
    MEM_H(0X3A, ctx->r5) = ctx->r2;
    // 0x80227810: lhu         $v0, 0x184($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X184);
    // 0x80227814: lhu         $v1, 0x3C($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X3C);
    // 0x80227818: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022781C: j           L_80227830
    // 0x80227820: sh          $v0, 0x3C($a1)
    MEM_H(0X3C, ctx->r5) = ctx->r2;
        goto L_80227830;
    // 0x80227820: sh          $v0, 0x3C($a1)
    MEM_H(0X3C, ctx->r5) = ctx->r2;
L_80227824:
    // 0x80227824: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80227828: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022782C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80227830:
    // 0x80227830: lhu         $v0, 0x4C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4C);
    // 0x80227834: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80227838: j           L_802278AC
    // 0x8022783C: sh          $v0, 0x4C($s1)
    MEM_H(0X4C, ctx->r17) = ctx->r2;
        goto L_802278AC;
    // 0x8022783C: sh          $v0, 0x4C($s1)
    MEM_H(0X4C, ctx->r17) = ctx->r2;
L_80227840:
    // 0x80227840: jal         0x8004A0DC
    // 0x80227844: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004A0DC_254DC(rdram, ctx);
        goto after_2;
    // 0x80227844: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80227848: j           L_80227880
    // 0x8022784C: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
        goto L_80227880;
    // 0x8022784C: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
L_80227850:
    // 0x80227850: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80227854: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80227858: bne         $v0, $zero, L_802278AC
    if (ctx->r2 != 0) {
        // 0x8022785C: nop
    
            goto L_802278AC;
    }
    // 0x8022785C: nop

    // 0x80227860: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80227864: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80227868: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022786C: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80227870: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80227874: j           L_802278AC
    // 0x80227878: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
        goto L_802278AC;
    // 0x80227878: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_8022787C:
    // 0x8022787C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
L_80227880:
    // 0x80227880: jal         0x80036E48
    // 0x80227884: nop

    func_80036E48_12248(rdram, ctx);
        goto after_3;
    // 0x80227884: nop

    after_3:
    // 0x80227888: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022788C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227890: j           L_802278AC
    // 0x80227894: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_802278AC;
    // 0x80227894: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80227898:
    // 0x80227898: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022789C: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x802278A0: bne         $v0, $zero, L_802278AC
    if (ctx->r2 != 0) {
        // 0x802278A4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802278AC;
    }
    // 0x802278A4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802278A8: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_802278AC:
    // 0x802278AC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802278B0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x802278B4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802278B8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802278BC: jr          $ra
    // 0x802278C0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802278C0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022F658_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F658: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F65C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022F660: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8022F664: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022F668: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022F66C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022F670: lw          $v0, -0x7B38($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7B38);
    // 0x8022F674: jalr        $v0
    // 0x8022F678: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022F678: nop

    after_0:
    // 0x8022F67C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022F680: jr          $ra
    // 0x8022F684: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F684: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023298C_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023298C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80232990: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80232994: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232998: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8023299C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802329A0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802329A4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802329A8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802329AC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802329B0: lw          $v0, -0x79D4($at)
    ctx->r2 = MEM_W(ctx->r1, -0X79D4);
    // 0x802329B4: jalr        $v0
    // 0x802329B8: addiu       $s1, $s0, 0xC4
    ctx->r17 = ADD32(ctx->r16, 0XC4);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802329B8: addiu       $s1, $s0, 0xC4
    ctx->r17 = ADD32(ctx->r16, 0XC4);
    after_0:
    // 0x802329BC: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x802329C0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802329C4: bne         $v1, $v0, L_80232A74
    if (ctx->r3 != ctx->r2) {
        // 0x802329C8: nop
    
            goto L_80232A74;
    }
    // 0x802329C8: nop

    // 0x802329CC: lb          $v0, 0x66($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X66);
    // 0x802329D0: bne         $v0, $zero, L_802329F0
    if (ctx->r2 != 0) {
        // 0x802329D4: addu        $a1, $v0, $zero
        ctx->r5 = ADD32(ctx->r2, 0);
            goto L_802329F0;
    }
    // 0x802329D4: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x802329D8: addiu       $v0, $zero, -0x8000
    ctx->r2 = ADD32(0, -0X8000);
    // 0x802329DC: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x802329E0: sb          $zero, 0x66($s0)
    MEM_B(0X66, ctx->r16) = 0;
    // 0x802329E4: sb          $zero, 0x65($s0)
    MEM_B(0X65, ctx->r16) = 0;
    // 0x802329E8: j           L_80232A74
    // 0x802329EC: sb          $zero, 0x64($s0)
    MEM_B(0X64, ctx->r16) = 0;
        goto L_80232A74;
    // 0x802329EC: sb          $zero, 0x64($s0)
    MEM_B(0X64, ctx->r16) = 0;
L_802329F0:
    // 0x802329F0: andi        $a1, $a1, 0x1F
    ctx->r5 = ctx->r5 & 0X1F;
    // 0x802329F4: lbu         $v1, 0x64($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X64);
    // 0x802329F8: lbu         $a0, 0x65($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X65);
    // 0x802329FC: lbu         $v0, 0x64($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X64);
    // 0x80232A00: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x80232A04: andi        $a0, $a0, 0x1F
    ctx->r4 = ctx->r4 & 0X1F;
    // 0x80232A08: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x80232A0C: sll         $a0, $a0, 5
    ctx->r4 = S32(ctx->r4 << 5);
    // 0x80232A10: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x80232A14: sb          $v0, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r2;
    // 0x80232A18: lbu         $v0, 0x65($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X65);
    // 0x80232A1C: lb          $a0, 0x64($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X64);
    // 0x80232A20: sll         $a1, $a1, 10
    ctx->r5 = S32(ctx->r5 << 10);
    // 0x80232A24: or          $v1, $v1, $a1
    ctx->r3 = ctx->r3 | ctx->r5;
    // 0x80232A28: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x80232A2C: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x80232A30: bgez        $a0, L_80232A4C
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80232A34: sb          $v0, 0x65($s0)
        MEM_B(0X65, ctx->r16) = ctx->r2;
            goto L_80232A4C;
    }
    // 0x80232A34: sb          $v0, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r2;
    // 0x80232A38: lhu         $v0, 0x15E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X15E);
    // 0x80232A3C: sb          $zero, 0x64($s0)
    MEM_B(0X64, ctx->r16) = 0;
    // 0x80232A40: sb          $zero, 0x65($s0)
    MEM_B(0X65, ctx->r16) = 0;
    // 0x80232A44: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x80232A48: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
L_80232A4C:
    // 0x80232A4C: lh          $v0, 0x15E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X15E);
    // 0x80232A50: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x80232A54: beq         $v0, $zero, L_80232A74
    if (ctx->r2 == 0) {
        // 0x80232A58: nop
    
            goto L_80232A74;
    }
    // 0x80232A58: nop

    // 0x80232A5C: lbu         $v0, 0x66($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X66);
    // 0x80232A60: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80232A64: sb          $v0, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r2;
    // 0x80232A68: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80232A6C: bltzl       $v0, L_80232A74
    if (SIGNED(ctx->r2) < 0) {
        // 0x80232A70: sb          $zero, 0x66($s0)
        MEM_B(0X66, ctx->r16) = 0;
            goto L_80232A74;
    }
    goto skip_0;
    // 0x80232A70: sb          $zero, 0x66($s0)
    MEM_B(0X66, ctx->r16) = 0;
    skip_0:
L_80232A74:
    // 0x80232A74: jal         0x8005044C
    // 0x80232A78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x80232A78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80232A7C: jal         0x80040F30
    // 0x80232A80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_2;
    // 0x80232A80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80232A84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232A88: jal         0x8003E934
    // 0x80232A8C: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_3;
    // 0x80232A8C: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    after_3:
    // 0x80232A90: lbu         $v1, 0x6($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X6);
    // 0x80232A94: andi        $v1, $v1, 0x40
    ctx->r3 = ctx->r3 & 0X40;
    // 0x80232A98: bne         $v1, $zero, L_80232B30
    if (ctx->r3 != 0) {
        // 0x80232A9C: addu        $s1, $v0, $zero
        ctx->r17 = ADD32(ctx->r2, 0);
            goto L_80232B30;
    }
    // 0x80232A9C: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80232AA0: lh          $v0, 0x2E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X2E);
    // 0x80232AA4: subu        $v0, $s1, $v0
    ctx->r2 = SUB32(ctx->r17, ctx->r2);
    // 0x80232AA8: slti        $v0, $v0, 0x10
    ctx->r2 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x80232AAC: bne         $v0, $zero, L_80232AE8
    if (ctx->r2 != 0) {
        // 0x80232AB0: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80232AE8;
    }
    // 0x80232AB0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80232AB4: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80232AB8: beq         $v1, $v0, L_80232B30
    if (ctx->r3 == ctx->r2) {
        // 0x80232ABC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80232B30;
    }
    // 0x80232ABC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232AC0: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x80232AC4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80232AC8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80232ACC: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x80232AD0: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80232AD4: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    // 0x80232AD8: jal         0x80050294
    // 0x80232ADC: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_4;
    // 0x80232ADC: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    after_4:
    // 0x80232AE0: j           L_80232B30
    // 0x80232AE4: nop

        goto L_80232B30;
    // 0x80232AE4: nop

L_80232AE8:
    // 0x80232AE8: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80232AEC: bne         $v1, $v0, L_80232B28
    if (ctx->r3 != ctx->r2) {
        // 0x80232AF0: sll         $v0, $s1, 16
        ctx->r2 = S32(ctx->r17 << 16);
            goto L_80232B28;
    }
    // 0x80232AF0: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x80232AF4: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80232AF8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80232AFC: beq         $v1, $v0, L_80232B24
    if (ctx->r3 == ctx->r2) {
        // 0x80232B00: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80232B24;
    }
    // 0x80232B00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232B04: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x80232B08: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80232B0C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80232B10: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80232B14: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80232B18: jal         0x80050294
    // 0x80232B1C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x80232B1C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_5:
    // 0x80232B20: sb          $zero, 0x74($s0)
    MEM_B(0X74, ctx->r16) = 0;
L_80232B24:
    // 0x80232B24: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
L_80232B28:
    // 0x80232B28: sh          $s1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r17;
    // 0x80232B2C: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_80232B30:
    // 0x80232B30: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80232B34: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80232B38: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80232B3C: jr          $ra
    // 0x80232B40: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80232B40: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80231D3C_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231D3C: lb          $v0, 0x385($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X385);
    // 0x80231D40: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80231D44: bne         $v0, $zero, L_80231D58
    if (ctx->r2 != 0) {
        // 0x80231D48: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80231D58;
    }
    // 0x80231D48: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80231D4C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231D50: j           L_80231D60
    // 0x80231D54: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
        goto L_80231D60;
    // 0x80231D54: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_80231D58:
    // 0x80231D58: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80231D5C: sb          $v0, 0x385($a0)
    MEM_B(0X385, ctx->r4) = ctx->r2;
L_80231D60:
    // 0x80231D60: jr          $ra
    // 0x80231D64: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x80231D64: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
