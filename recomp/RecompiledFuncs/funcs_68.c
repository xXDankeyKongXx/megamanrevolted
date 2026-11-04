#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_802299AC_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802299AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802299B0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802299B4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802299B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802299BC: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x802299C0: addiu       $v0, $zero, 0x1F
    ctx->r2 = ADD32(0, 0X1F);
    // 0x802299C4: bne         $v1, $v0, L_802299E0
    if (ctx->r3 != ctx->r2) {
        // 0x802299C8: addiu       $v0, $zero, 0x29
        ctx->r2 = ADD32(0, 0X29);
            goto L_802299E0;
    }
    // 0x802299C8: addiu       $v0, $zero, 0x29
    ctx->r2 = ADD32(0, 0X29);
    // 0x802299CC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802299D0: jal         0x800616FC
    // 0x802299D4: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_0;
    // 0x802299D4: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_0:
    // 0x802299D8: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x802299DC: addiu       $v0, $zero, 0x29
    ctx->r2 = ADD32(0, 0X29);
L_802299E0:
    // 0x802299E0: bne         $v1, $v0, L_802299F0
    if (ctx->r3 != ctx->r2) {
        // 0x802299E4: addiu       $v0, $zero, 0x2D
        ctx->r2 = ADD32(0, 0X2D);
            goto L_802299F0;
    }
    // 0x802299E4: addiu       $v0, $zero, 0x2D
    ctx->r2 = ADD32(0, 0X2D);
    // 0x802299E8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802299EC: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
L_802299F0:
    // 0x802299F0: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x802299F4: slti        $v0, $v0, 0x34
    ctx->r2 = SIGNED(ctx->r2) < 0X34 ? 1 : 0;
    // 0x802299F8: bne         $v0, $zero, L_80229A08
    if (ctx->r2 != 0) {
        // 0x802299FC: nop
    
            goto L_80229A08;
    }
    // 0x802299FC: nop

    // 0x80229A00: jal         0x800600F8
    // 0x80229A04: nop

    func_800600F8_3B4F8(rdram, ctx);
        goto after_1;
    // 0x80229A04: nop

    after_1:
L_80229A08:
    // 0x80229A08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80229A0C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229A10: jr          $ra
    // 0x80229A14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229A14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022DB2C_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DB2C: lbu         $v0, 0xE($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XE);
    // 0x8022DB30: lbu         $v1, 0xA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA);
    // 0x8022DB34: sh          $zero, 0x35C($a0)
    MEM_H(0X35C, ctx->r4) = 0;
    // 0x8022DB38: sh          $zero, 0x35E($a0)
    MEM_H(0X35E, ctx->r4) = 0;
    // 0x8022DB3C: sh          $zero, 0x362($a0)
    MEM_H(0X362, ctx->r4) = 0;
    // 0x8022DB40: sh          $zero, 0x46($a0)
    MEM_H(0X46, ctx->r4) = 0;
    // 0x8022DB44: sh          $zero, 0x48($a0)
    MEM_H(0X48, ctx->r4) = 0;
    // 0x8022DB48: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022DB4C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022DB50: sh          $v0, 0x366($a0)
    MEM_H(0X366, ctx->r4) = ctx->r2;
    // 0x8022DB54: sh          $v0, 0x360($a0)
    MEM_H(0X360, ctx->r4) = ctx->r2;
    // 0x8022DB58: jr          $ra
    // 0x8022DB5C: sb          $v1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r3;
    TRACE_RETURN()
    return;
    // 0x8022DB5C: sb          $v1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r3;
;}
RECOMP_FUNC void func_8022AA7C_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AA7C: jr          $ra
    // 0x8022AA80: nop

    TRACE_RETURN()
    return;
    // 0x8022AA80: nop

    // 0x8022AA84: nop

    // 0x8022AA88: nop

    // 0x8022AA8C: nop

;}
RECOMP_FUNC void func_80231C90_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231C90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231C94: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231C98: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80231C9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80231CA0: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80231CA4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80231CA8: beq         $v1, $v0, L_80231F4C
    if (ctx->r3 == ctx->r2) {
        // 0x80231CAC: slti        $v0, $v1, 0x6
        ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
            goto L_80231F4C;
    }
    // 0x80231CAC: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x80231CB0: beq         $v0, $zero, L_80231CF8
    if (ctx->r2 == 0) {
        // 0x80231CB4: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_80231CF8;
    }
    // 0x80231CB4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80231CB8: beq         $v1, $a0, L_80231EC8
    if (ctx->r3 == ctx->r4) {
        // 0x80231CBC: slti        $v0, $v1, 0x3
        ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
            goto L_80231EC8;
    }
    // 0x80231CBC: slti        $v0, $v1, 0x3
    ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x80231CC0: beql        $v0, $zero, L_80231CE0
    if (ctx->r2 == 0) {
        // 0x80231CC4: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80231CE0;
    }
    goto skip_0;
    // 0x80231CC4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    skip_0:
    // 0x80231CC8: beq         $v1, $zero, L_80231D48
    if (ctx->r3 == 0) {
        // 0x80231CCC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80231D48;
    }
    // 0x80231CCC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231CD0: beq         $v1, $v0, L_80231DA0
    if (ctx->r3 == ctx->r2) {
        // 0x80231CD4: nop
    
            goto L_80231DA0;
    }
    // 0x80231CD4: nop

    // 0x80231CD8: j           L_802321CC
    // 0x80231CDC: nop

        goto L_802321CC;
    // 0x80231CDC: nop

L_80231CE0:
    // 0x80231CE0: beq         $v1, $v0, L_80231EF4
    if (ctx->r3 == ctx->r2) {
        // 0x80231CE4: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80231EF4;
    }
    // 0x80231CE4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80231CE8: beq         $v1, $v0, L_80231F20
    if (ctx->r3 == ctx->r2) {
        // 0x80231CEC: nop
    
            goto L_80231F20;
    }
    // 0x80231CEC: nop

    // 0x80231CF0: j           L_802321CC
    // 0x80231CF4: nop

        goto L_802321CC;
    // 0x80231CF4: nop

L_80231CF8:
    // 0x80231CF8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80231CFC: beq         $v1, $v0, L_80232028
    if (ctx->r3 == ctx->r2) {
        // 0x80231D00: slti        $v0, $v1, 0x9
        ctx->r2 = SIGNED(ctx->r3) < 0X9 ? 1 : 0;
            goto L_80232028;
    }
    // 0x80231D00: slti        $v0, $v1, 0x9
    ctx->r2 = SIGNED(ctx->r3) < 0X9 ? 1 : 0;
    // 0x80231D04: beq         $v0, $zero, L_80231D24
    if (ctx->r2 == 0) {
        // 0x80231D08: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_80231D24;
    }
    // 0x80231D08: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80231D0C: beq         $v1, $v0, L_80231F78
    if (ctx->r3 == ctx->r2) {
        // 0x80231D10: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_80231F78;
    }
    // 0x80231D10: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80231D14: beq         $v1, $v0, L_80231FA4
    if (ctx->r3 == ctx->r2) {
        // 0x80231D18: nop
    
            goto L_80231FA4;
    }
    // 0x80231D18: nop

    // 0x80231D1C: j           L_802321CC
    // 0x80231D20: nop

        goto L_802321CC;
    // 0x80231D20: nop

L_80231D24:
    // 0x80231D24: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80231D28: beq         $v1, $v0, L_80232110
    if (ctx->r3 == ctx->r2) {
        // 0x80231D2C: slti        $v0, $v1, 0xA
        ctx->r2 = SIGNED(ctx->r3) < 0XA ? 1 : 0;
            goto L_80232110;
    }
    // 0x80231D2C: slti        $v0, $v1, 0xA
    ctx->r2 = SIGNED(ctx->r3) < 0XA ? 1 : 0;
    // 0x80231D30: bne         $v0, $zero, L_8023209C
    if (ctx->r2 != 0) {
        // 0x80231D34: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_8023209C;
    }
    // 0x80231D34: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80231D38: beq         $v1, $v0, L_8023219C
    if (ctx->r3 == ctx->r2) {
        // 0x80231D3C: nop
    
            goto L_8023219C;
    }
    // 0x80231D3C: nop

    // 0x80231D40: j           L_802321CC
    // 0x80231D44: nop

        goto L_802321CC;
    // 0x80231D44: nop

L_80231D48:
    // 0x80231D48: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80231D4C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80231D50: bltz        $v0, L_802321CC
    if (SIGNED(ctx->r2) < 0) {
        // 0x80231D54: andi        $v1, $v0, 0xFF
        ctx->r3 = ctx->r2 & 0XFF;
            goto L_802321CC;
    }
    // 0x80231D54: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x80231D58: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231D5C: bne         $v1, $v0, L_80231D6C
    if (ctx->r3 != ctx->r2) {
        // 0x80231D60: addiu       $a1, $zero, 0x63
        ctx->r5 = ADD32(0, 0X63);
            goto L_80231D6C;
    }
    // 0x80231D60: addiu       $a1, $zero, 0x63
    ctx->r5 = ADD32(0, 0X63);
    // 0x80231D64: j           L_80232178
    // 0x80231D68: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
        goto L_80232178;
    // 0x80231D68: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_80231D6C:
    // 0x80231D6C: bne         $v1, $zero, L_80231D90
    if (ctx->r3 != 0) {
        // 0x80231D70: nop
    
            goto L_80231D90;
    }
    // 0x80231D70: nop

    // 0x80231D74: jal         0x80070E80
    // 0x80231D78: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    func_80070E80_4C280(rdram, ctx);
        goto after_0;
    // 0x80231D78: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    after_0:
    // 0x80231D7C: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x80231D80: bne         $v0, $v1, L_80232154
    if (ctx->r2 != ctx->r3) {
        // 0x80231D84: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80232154;
    }
    // 0x80231D84: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80231D88: j           L_80232178
    // 0x80231D8C: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
        goto L_80232178;
    // 0x80231D8C: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
L_80231D90:
    // 0x80231D90: beq         $v1, $a0, L_8023206C
    if (ctx->r3 == ctx->r4) {
        // 0x80231D94: nop
    
            goto L_8023206C;
    }
    // 0x80231D94: nop

    // 0x80231D98: j           L_802321CC
    // 0x80231D9C: nop

        goto L_802321CC;
    // 0x80231D9C: nop

L_80231DA0:
    // 0x80231DA0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80231DA4: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80231DA8: bltz        $v0, L_802321CC
    if (SIGNED(ctx->r2) < 0) {
        // 0x80231DAC: andi        $v1, $v0, 0xFF
        ctx->r3 = ctx->r2 & 0XFF;
            goto L_802321CC;
    }
    // 0x80231DAC: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x80231DB0: sltiu       $v0, $v1, 0x7
    ctx->r2 = ctx->r3 < 0X7 ? 1 : 0;
    // 0x80231DB4: beq         $v0, $zero, L_80231E84
    if (ctx->r2 == 0) {
        // 0x80231DB8: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80231E84;
    }
    // 0x80231DB8: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80231DBC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80231DC0: addu        $at, $at, $v0
    gpr jr_addend_80231DC8 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80231DC4: lw          $v0, 0x7228($at)
    ctx->r2 = ADD32(ctx->r1, 0X7228);
    // 0x80231DC8: jr          $v0
    // 0x80231DCC: nop

    switch (jr_addend_80231DC8 >> 2) {
        case 0: goto L_80231DD0; break;
        case 1: goto L_80231DE0; break;
        case 2: goto L_80231DF0; break;
        case 3: goto L_80231E00; break;
        case 4: goto L_80231E1C; break;
        case 5: goto L_80231E44; break;
        case 6: goto L_80231E78; break;
        default: switch_error(__func__, 0x80231DC8, 0x80247228);
    }
    // 0x80231DCC: nop

L_80231DD0:
    // 0x80231DD0: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80231DD4: lw          $v0, -0x3BF0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3BF0);
    // 0x80231DD8: j           L_80231E0C
    // 0x80231DDC: addiu       $a0, $zero, 0x1F4
    ctx->r4 = ADD32(0, 0X1F4);
        goto L_80231E0C;
    // 0x80231DDC: addiu       $a0, $zero, 0x1F4
    ctx->r4 = ADD32(0, 0X1F4);
L_80231DE0:
    // 0x80231DE0: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80231DE4: lw          $v0, -0x3BEC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3BEC);
    // 0x80231DE8: j           L_80231E0C
    // 0x80231DEC: addiu       $a0, $zero, 0xC8
    ctx->r4 = ADD32(0, 0XC8);
        goto L_80231E0C;
    // 0x80231DEC: addiu       $a0, $zero, 0xC8
    ctx->r4 = ADD32(0, 0XC8);
L_80231DF0:
    // 0x80231DF0: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80231DF4: lw          $v0, -0x3BE8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3BE8);
    // 0x80231DF8: j           L_80231E0C
    // 0x80231DFC: addiu       $a0, $zero, 0xFA
    ctx->r4 = ADD32(0, 0XFA);
        goto L_80231E0C;
    // 0x80231DFC: addiu       $a0, $zero, 0xFA
    ctx->r4 = ADD32(0, 0XFA);
L_80231E00:
    // 0x80231E00: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80231E04: lw          $v0, -0x3BE4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3BE4);
    // 0x80231E08: addiu       $a0, $zero, 0xC8
    ctx->r4 = ADD32(0, 0XC8);
L_80231E0C:
    // 0x80231E0C: jal         0x8006982C
    // 0x80231E10: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    func_8006982C_44C2C(rdram, ctx);
        goto after_1;
    // 0x80231E10: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    after_1:
    // 0x80231E14: j           L_80231E84
    // 0x80231E18: nop

        goto L_80231E84;
    // 0x80231E18: nop

L_80231E1C:
    // 0x80231E1C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80231E20: lbu         $v1, -0x3BB1($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3BB1);
    // 0x80231E24: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80231E28: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80231E2C: sll         $a0, $v0, 4
    ctx->r4 = S32(ctx->r2 << 4);
    // 0x80231E30: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80231E34: lw          $v1, -0x3BDC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3BDC);
    // 0x80231E38: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x80231E3C: j           L_80231E68
    // 0x80231E40: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
        goto L_80231E68;
    // 0x80231E40: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
L_80231E44:
    // 0x80231E44: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80231E48: lbu         $v1, -0x3BB2($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3BB2);
    // 0x80231E4C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80231E50: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80231E54: sll         $a0, $v0, 4
    ctx->r4 = S32(ctx->r2 << 4);
    // 0x80231E58: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80231E5C: lw          $v1, -0x3BE0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3BE0);
    // 0x80231E60: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x80231E64: sll         $a0, $a0, 1
    ctx->r4 = S32(ctx->r4 << 1);
L_80231E68:
    // 0x80231E68: jal         0x8006982C
    // 0x80231E6C: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    func_8006982C_44C2C(rdram, ctx);
        goto after_2;
    // 0x80231E6C: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    after_2:
    // 0x80231E70: j           L_80231E84
    // 0x80231E74: nop

        goto L_80231E84;
    // 0x80231E74: nop

L_80231E78:
    // 0x80231E78: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80231E7C: j           L_802321F8
    // 0x80231E80: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_802321F8;
    // 0x80231E80: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80231E84:
    // 0x80231E84: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80231E88: lw          $a1, 0x3FF0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X3FF0);
    // 0x80231E8C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80231E90: addiu       $a1, $a1, 0x6C
    ctx->r5 = ADD32(ctx->r5, 0X6C);
    // 0x80231E94: jal         0x800616FC
    // 0x80231E98: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    func_800616FC_3CAFC(rdram, ctx);
        goto after_3;
    // 0x80231E98: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    after_3:
    // 0x80231E9C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80231EA0: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x80231EA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231EA8: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x80231EAC: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80231EB0: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80231EB4: lw          $v1, 0x3FF0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3FF0);
    // 0x80231EB8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231EBC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80231EC0: j           L_802321CC
    // 0x80231EC4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_802321CC;
    // 0x80231EC4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80231EC8:
    // 0x80231EC8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80231ECC: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80231ED0: bltz        $v0, L_802321CC
    if (SIGNED(ctx->r2) < 0) {
        // 0x80231ED4: nop
    
            goto L_802321CC;
    }
    // 0x80231ED4: nop

    // 0x80231ED8: lui         $a3, 0x801B
    ctx->r7 = S32(0X801B << 16);
    // 0x80231EDC: lw          $a3, -0x2404($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X2404);
    // 0x80231EE0: beq         $a3, $zero, L_8023200C
    if (ctx->r7 == 0) {
        // 0x80231EE4: negu        $a0, $a3
        ctx->r4 = SUB32(0, ctx->r7);
            goto L_8023200C;
    }
    // 0x80231EE4: negu        $a0, $a3
    ctx->r4 = SUB32(0, ctx->r7);
    // 0x80231EE8: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80231EEC: j           L_80231FCC
    // 0x80231EF0: addiu       $v1, $v1, -0x3BF0
    ctx->r3 = ADD32(ctx->r3, -0X3BF0);
        goto L_80231FCC;
    // 0x80231EF0: addiu       $v1, $v1, -0x3BF0
    ctx->r3 = ADD32(ctx->r3, -0X3BF0);
L_80231EF4:
    // 0x80231EF4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80231EF8: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80231EFC: bltz        $v0, L_802321CC
    if (SIGNED(ctx->r2) < 0) {
        // 0x80231F00: nop
    
            goto L_802321CC;
    }
    // 0x80231F00: nop

    // 0x80231F04: lui         $a3, 0x801B
    ctx->r7 = S32(0X801B << 16);
    // 0x80231F08: lw          $a3, -0x2404($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X2404);
    // 0x80231F0C: beq         $a3, $zero, L_8023200C
    if (ctx->r7 == 0) {
        // 0x80231F10: negu        $a0, $a3
        ctx->r4 = SUB32(0, ctx->r7);
            goto L_8023200C;
    }
    // 0x80231F10: negu        $a0, $a3
    ctx->r4 = SUB32(0, ctx->r7);
    // 0x80231F14: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80231F18: j           L_80231FCC
    // 0x80231F1C: addiu       $v1, $v1, -0x3BEC
    ctx->r3 = ADD32(ctx->r3, -0X3BEC);
        goto L_80231FCC;
    // 0x80231F1C: addiu       $v1, $v1, -0x3BEC
    ctx->r3 = ADD32(ctx->r3, -0X3BEC);
L_80231F20:
    // 0x80231F20: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80231F24: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80231F28: bltz        $v0, L_802321CC
    if (SIGNED(ctx->r2) < 0) {
        // 0x80231F2C: nop
    
            goto L_802321CC;
    }
    // 0x80231F2C: nop

    // 0x80231F30: lui         $a3, 0x801B
    ctx->r7 = S32(0X801B << 16);
    // 0x80231F34: lw          $a3, -0x2404($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X2404);
    // 0x80231F38: beq         $a3, $zero, L_8023200C
    if (ctx->r7 == 0) {
        // 0x80231F3C: negu        $a0, $a3
        ctx->r4 = SUB32(0, ctx->r7);
            goto L_8023200C;
    }
    // 0x80231F3C: negu        $a0, $a3
    ctx->r4 = SUB32(0, ctx->r7);
    // 0x80231F40: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80231F44: j           L_80231FCC
    // 0x80231F48: addiu       $v1, $v1, -0x3BE8
    ctx->r3 = ADD32(ctx->r3, -0X3BE8);
        goto L_80231FCC;
    // 0x80231F48: addiu       $v1, $v1, -0x3BE8
    ctx->r3 = ADD32(ctx->r3, -0X3BE8);
L_80231F4C:
    // 0x80231F4C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80231F50: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80231F54: bltz        $v0, L_802321CC
    if (SIGNED(ctx->r2) < 0) {
        // 0x80231F58: nop
    
            goto L_802321CC;
    }
    // 0x80231F58: nop

    // 0x80231F5C: lui         $a3, 0x801B
    ctx->r7 = S32(0X801B << 16);
    // 0x80231F60: lw          $a3, -0x2404($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X2404);
    // 0x80231F64: beq         $a3, $zero, L_8023200C
    if (ctx->r7 == 0) {
        // 0x80231F68: negu        $a0, $a3
        ctx->r4 = SUB32(0, ctx->r7);
            goto L_8023200C;
    }
    // 0x80231F68: negu        $a0, $a3
    ctx->r4 = SUB32(0, ctx->r7);
    // 0x80231F6C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80231F70: j           L_80231FCC
    // 0x80231F74: addiu       $v1, $v1, -0x3BE4
    ctx->r3 = ADD32(ctx->r3, -0X3BE4);
        goto L_80231FCC;
    // 0x80231F74: addiu       $v1, $v1, -0x3BE4
    ctx->r3 = ADD32(ctx->r3, -0X3BE4);
L_80231F78:
    // 0x80231F78: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80231F7C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80231F80: bltz        $v0, L_802321CC
    if (SIGNED(ctx->r2) < 0) {
        // 0x80231F84: nop
    
            goto L_802321CC;
    }
    // 0x80231F84: nop

    // 0x80231F88: lui         $a3, 0x801B
    ctx->r7 = S32(0X801B << 16);
    // 0x80231F8C: lw          $a3, -0x2404($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X2404);
    // 0x80231F90: beq         $a3, $zero, L_8023200C
    if (ctx->r7 == 0) {
        // 0x80231F94: negu        $a0, $a3
        ctx->r4 = SUB32(0, ctx->r7);
            goto L_8023200C;
    }
    // 0x80231F94: negu        $a0, $a3
    ctx->r4 = SUB32(0, ctx->r7);
    // 0x80231F98: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80231F9C: j           L_80231FCC
    // 0x80231FA0: addiu       $v1, $v1, -0x3BDC
    ctx->r3 = ADD32(ctx->r3, -0X3BDC);
        goto L_80231FCC;
    // 0x80231FA0: addiu       $v1, $v1, -0x3BDC
    ctx->r3 = ADD32(ctx->r3, -0X3BDC);
L_80231FA4:
    // 0x80231FA4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80231FA8: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80231FAC: bltz        $v0, L_802321CC
    if (SIGNED(ctx->r2) < 0) {
        // 0x80231FB0: nop
    
            goto L_802321CC;
    }
    // 0x80231FB0: nop

    // 0x80231FB4: lui         $a3, 0x801B
    ctx->r7 = S32(0X801B << 16);
    // 0x80231FB8: lw          $a3, -0x2404($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X2404);
    // 0x80231FBC: beq         $a3, $zero, L_8023200C
    if (ctx->r7 == 0) {
        // 0x80231FC0: negu        $a0, $a3
        ctx->r4 = SUB32(0, ctx->r7);
            goto L_8023200C;
    }
    // 0x80231FC0: negu        $a0, $a3
    ctx->r4 = SUB32(0, ctx->r7);
    // 0x80231FC4: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80231FC8: addiu       $v1, $v1, -0x3BE0
    ctx->r3 = ADD32(ctx->r3, -0X3BE0);
L_80231FCC:
    // 0x80231FCC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80231FD0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80231FD4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80231FD8: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x80231FDC: jal         0x80070E98
    // 0x80231FE0: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    func_80070E98_4C298(rdram, ctx);
        goto after_4;
    // 0x80231FE0: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    after_4:
    // 0x80231FE4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80231FE8: jal         0x800616FC
    // 0x80231FEC: addiu       $a1, $zero, 0x73
    ctx->r5 = ADD32(0, 0X73);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_5;
    // 0x80231FEC: addiu       $a1, $zero, 0x73
    ctx->r5 = ADD32(0, 0X73);
    after_5:
    // 0x80231FF0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80231FF4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80231FF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231FFC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80232000: sh          $v0, 0x5CF4($at)
    MEM_H(0X5CF4, ctx->r1) = ctx->r2;
    // 0x80232004: j           L_80232018
    // 0x80232008: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_80232018;
    // 0x80232008: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_8023200C:
    // 0x8023200C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80232010: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80232014: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_80232018:
    // 0x80232018: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x8023201C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80232020: j           L_802321CC
    // 0x80232024: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
        goto L_802321CC;
    // 0x80232024: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
L_80232028:
    // 0x80232028: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8023202C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80232030: bltz        $v0, L_802321CC
    if (SIGNED(ctx->r2) < 0) {
        // 0x80232034: andi        $v1, $v0, 0xFF
        ctx->r3 = ctx->r2 & 0XFF;
            goto L_802321CC;
    }
    // 0x80232034: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x80232038: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023203C: beq         $v1, $v0, L_80232064
    if (ctx->r3 == ctx->r2) {
        // 0x80232040: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80232064;
    }
    // 0x80232040: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80232044: beq         $v1, $zero, L_8023205C
    if (ctx->r3 == 0) {
        // 0x80232048: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023205C;
    }
    // 0x80232048: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023204C: beq         $v1, $v0, L_8023206C
    if (ctx->r3 == ctx->r2) {
        // 0x80232050: nop
    
            goto L_8023206C;
    }
    // 0x80232050: nop

    // 0x80232054: j           L_802321CC
    // 0x80232058: nop

        goto L_802321CC;
    // 0x80232058: nop

L_8023205C:
    // 0x8023205C: j           L_80232178
    // 0x80232060: addiu       $a1, $zero, 0x62
    ctx->r5 = ADD32(0, 0X62);
        goto L_80232178;
    // 0x80232060: addiu       $a1, $zero, 0x62
    ctx->r5 = ADD32(0, 0X62);
L_80232064:
    // 0x80232064: j           L_80232178
    // 0x80232068: addiu       $a1, $zero, 0x63
    ctx->r5 = ADD32(0, 0X63);
        goto L_80232178;
    // 0x80232068: addiu       $a1, $zero, 0x63
    ctx->r5 = ADD32(0, 0X63);
L_8023206C:
    // 0x8023206C: jal         0x8006982C
    // 0x80232070: addiu       $a0, $zero, 0x5DC
    ctx->r4 = ADD32(0, 0X5DC);
    func_8006982C_44C2C(rdram, ctx);
        goto after_6;
    // 0x80232070: addiu       $a0, $zero, 0x5DC
    ctx->r4 = ADD32(0, 0X5DC);
    after_6:
    // 0x80232074: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80232078: jal         0x800616FC
    // 0x8023207C: addiu       $a1, $zero, 0x67
    ctx->r5 = ADD32(0, 0X67);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_7;
    // 0x8023207C: addiu       $a1, $zero, 0x67
    ctx->r5 = ADD32(0, 0X67);
    after_7:
    // 0x80232080: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80232084: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x80232088: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023208C: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x80232090: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80232094: j           L_802321CC
    // 0x80232098: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_802321CC;
    // 0x80232098: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8023209C:
    // 0x8023209C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802320A0: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x802320A4: bltz        $v0, L_802321CC
    if (SIGNED(ctx->r2) < 0) {
        // 0x802320A8: andi        $v0, $v0, 0xFF
        ctx->r2 = ctx->r2 & 0XFF;
            goto L_802321CC;
    }
    // 0x802320A8: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x802320AC: beq         $v0, $zero, L_802320BC
    if (ctx->r2 == 0) {
        // 0x802320B0: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_802320BC;
    }
    // 0x802320B0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802320B4: j           L_80232178
    // 0x802320B8: addiu       $a1, $zero, 0x6A
    ctx->r5 = ADD32(0, 0X6A);
        goto L_80232178;
    // 0x802320B8: addiu       $a1, $zero, 0x6A
    ctx->r5 = ADD32(0, 0X6A);
L_802320BC:
    // 0x802320BC: jal         0x80070E80
    // 0x802320C0: addiu       $a0, $zero, -0x5DC
    ctx->r4 = ADD32(0, -0X5DC);
    func_80070E80_4C280(rdram, ctx);
        goto after_8;
    // 0x802320C0: addiu       $a0, $zero, -0x5DC
    ctx->r4 = ADD32(0, -0X5DC);
    after_8:
    // 0x802320C4: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x802320C8: bne         $v0, $v1, L_802320D8
    if (ctx->r2 != ctx->r3) {
        // 0x802320CC: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_802320D8;
    }
    // 0x802320CC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802320D0: j           L_80232178
    // 0x802320D4: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
        goto L_80232178;
    // 0x802320D4: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
L_802320D8:
    // 0x802320D8: jal         0x800616FC
    // 0x802320DC: addiu       $a1, $zero, 0x69
    ctx->r5 = ADD32(0, 0X69);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_9;
    // 0x802320DC: addiu       $a1, $zero, 0x69
    ctx->r5 = ADD32(0, 0X69);
    after_9:
    // 0x802320E0: addiu       $a0, $zero, -0x5DC
    ctx->r4 = ADD32(0, -0X5DC);
    // 0x802320E4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802320E8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x802320EC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x802320F0: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x802320F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802320F8: jal         0x80070E98
    // 0x802320FC: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    func_80070E98_4C298(rdram, ctx);
        goto after_10;
    // 0x802320FC: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    after_10:
    // 0x80232100: jal         0x8006036C
    // 0x80232104: addiu       $a0, $zero, 0x233
    ctx->r4 = ADD32(0, 0X233);
    func_8006036C_3B76C(rdram, ctx);
        goto after_11;
    // 0x80232104: addiu       $a0, $zero, 0x233
    ctx->r4 = ADD32(0, 0X233);
    after_11:
    // 0x80232108: j           L_80232194
    // 0x8023210C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
        goto L_80232194;
    // 0x8023210C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_80232110:
    // 0x80232110: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80232114: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80232118: bltz        $v0, L_802321CC
    if (SIGNED(ctx->r2) < 0) {
        // 0x8023211C: andi        $v1, $v0, 0xFF
        ctx->r3 = ctx->r2 & 0XFF;
            goto L_802321CC;
    }
    // 0x8023211C: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x80232120: beq         $v1, $zero, L_80232138
    if (ctx->r3 == 0) {
        // 0x80232124: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80232138;
    }
    // 0x80232124: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80232128: beq         $v1, $v0, L_80232174
    if (ctx->r3 == ctx->r2) {
        // 0x8023212C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80232174;
    }
    // 0x8023212C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80232130: j           L_802321CC
    // 0x80232134: nop

        goto L_802321CC;
    // 0x80232134: nop

L_80232138:
    // 0x80232138: jal         0x80070E80
    // 0x8023213C: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    func_80070E80_4C280(rdram, ctx);
        goto after_12;
    // 0x8023213C: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    after_12:
    // 0x80232140: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x80232144: bne         $v0, $v1, L_80232154
    if (ctx->r2 != ctx->r3) {
        // 0x80232148: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80232154;
    }
    // 0x80232148: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8023214C: j           L_80232178
    // 0x80232150: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
        goto L_80232178;
    // 0x80232150: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
L_80232154:
    // 0x80232154: jal         0x800616FC
    // 0x80232158: addiu       $a1, $zero, 0x58
    ctx->r5 = ADD32(0, 0X58);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_13;
    // 0x80232158: addiu       $a1, $zero, 0x58
    ctx->r5 = ADD32(0, 0X58);
    after_13:
    // 0x8023215C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80232160: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x80232164: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80232168: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x8023216C: j           L_802321CC
    // 0x80232170: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_802321CC;
    // 0x80232170: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80232174:
    // 0x80232174: addiu       $a1, $zero, 0x57
    ctx->r5 = ADD32(0, 0X57);
L_80232178:
    // 0x80232178: jal         0x800616FC
    // 0x8023217C: nop

    func_800616FC_3CAFC(rdram, ctx);
        goto after_14;
    // 0x8023217C: nop

    after_14:
    // 0x80232180: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80232184: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x80232188: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023218C: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x80232190: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_80232194:
    // 0x80232194: j           L_802321CC
    // 0x80232198: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_802321CC;
    // 0x80232198: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8023219C:
    // 0x8023219C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802321A0: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x802321A4: bltz        $v0, L_802321CC
    if (SIGNED(ctx->r2) < 0) {
        // 0x802321A8: nop
    
            goto L_802321CC;
    }
    // 0x802321A8: nop

    // 0x802321AC: jal         0x80034E3C
    // 0x802321B0: nop

    func_80034E3C_1023C(rdram, ctx);
        goto after_15;
    // 0x802321B0: nop

    after_15:
    // 0x802321B4: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802321B8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802321BC: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
    // 0x802321C0: sb          $v1, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r3;
    // 0x802321C4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802321C8: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_802321CC:
    // 0x802321CC: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x802321D0: bne         $v0, $zero, L_802321E8
    if (ctx->r2 != 0) {
        // 0x802321D4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802321E8;
    }
    // 0x802321D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802321D8: jal         0x8005044C
    // 0x802321DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_16;
    // 0x802321DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_16:
    // 0x802321E0: j           L_802321F8
    // 0x802321E4: nop

        goto L_802321F8;
    // 0x802321E4: nop

L_802321E8:
    // 0x802321E8: lb          $a1, 0xE($s0)
    ctx->r5 = MEM_B(ctx->r16, 0XE);
    // 0x802321EC: jal         0x80050294
    // 0x802321F0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_17;
    // 0x802321F0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_17:
    // 0x802321F4: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
L_802321F8:
    // 0x802321F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802321FC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232200: jr          $ra
    // 0x80232204: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80232204: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228880_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228880: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228884: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228888: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022888C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228890: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x80228894: bne         $v0, $zero, L_80228908
    if (ctx->r2 != 0) {
        // 0x80228898: nop
    
            goto L_80228908;
    }
    // 0x80228898: nop

    // 0x8022889C: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x802288A0: jal         0x8005FA7C
    // 0x802288A4: addiu       $a0, $a0, 0x44A4
    ctx->r4 = ADD32(ctx->r4, 0X44A4);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_0;
    // 0x802288A4: addiu       $a0, $a0, 0x44A4
    ctx->r4 = ADD32(ctx->r4, 0X44A4);
    after_0:
    // 0x802288A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802288AC: lui         $a2, 0x8024
    ctx->r6 = S32(0X8024 << 16);
    // 0x802288B0: addiu       $a2, $a2, 0x497E
    ctx->r6 = ADD32(ctx->r6, 0X497E);
    // 0x802288B4: lw          $v1, 0x28($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X28);
    // 0x802288B8: addiu       $a0, $zero, 0x38
    ctx->r4 = ADD32(0, 0X38);
    // 0x802288BC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x802288C0: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x802288C4: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
L_802288C8:
    // 0x802288C8: lbu         $v0, 0x0($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X0);
    // 0x802288CC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802288D0: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x802288D4: sb          $v0, 0x4430($at)
    MEM_B(0X4430, ctx->r1) = ctx->r2;
    // 0x802288D8: lhu         $v0, 0x2($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X2);
    // 0x802288DC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802288E0: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x802288E4: sh          $v0, 0x4450($at)
    MEM_H(0X4450, ctx->r1) = ctx->r2;
    // 0x802288E8: lhu         $v0, 0x4($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X4);
    // 0x802288EC: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x802288F0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802288F4: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x802288F8: sh          $v0, 0x4452($at)
    MEM_H(0X4452, ctx->r1) = ctx->r2;
    // 0x802288FC: slti        $v0, $a1, 0x5
    ctx->r2 = SIGNED(ctx->r5) < 0X5 ? 1 : 0;
    // 0x80228900: bne         $v0, $zero, L_802288C8
    if (ctx->r2 != 0) {
        // 0x80228904: addiu       $a0, $a0, 0x38
        ctx->r4 = ADD32(ctx->r4, 0X38);
            goto L_802288C8;
    }
    // 0x80228904: addiu       $a0, $a0, 0x38
    ctx->r4 = ADD32(ctx->r4, 0X38);
L_80228908:
    // 0x80228908: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022890C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228910: jr          $ra
    // 0x80228914: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228914: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A4BC_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A4BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A4C0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A4C4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A4C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022A4CC: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x8022A4D0: addiu       $v0, $zero, 0x1F
    ctx->r2 = ADD32(0, 0X1F);
    // 0x8022A4D4: bne         $v1, $v0, L_8022A4F0
    if (ctx->r3 != ctx->r2) {
        // 0x8022A4D8: addiu       $v0, $zero, 0x32
        ctx->r2 = ADD32(0, 0X32);
            goto L_8022A4F0;
    }
    // 0x8022A4D8: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    // 0x8022A4DC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A4E0: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
    // 0x8022A4E4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022A4E8: jal         0x800616FC
    // 0x8022A4EC: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_0;
    // 0x8022A4EC: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_0:
L_8022A4F0:
    // 0x8022A4F0: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x8022A4F4: slti        $v0, $v0, 0x33
    ctx->r2 = SIGNED(ctx->r2) < 0X33 ? 1 : 0;
    // 0x8022A4F8: bne         $v0, $zero, L_8022A51C
    if (ctx->r2 != 0) {
        // 0x8022A4FC: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_8022A51C;
    }
    // 0x8022A4FC: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022A500: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022A504: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022A508: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022A50C: bne         $v0, $zero, L_8022A51C
    if (ctx->r2 != 0) {
        // 0x8022A510: nop
    
            goto L_8022A51C;
    }
    // 0x8022A510: nop

    // 0x8022A514: jal         0x800600F8
    // 0x8022A518: nop

    func_800600F8_3B4F8(rdram, ctx);
        goto after_1;
    // 0x8022A518: nop

    after_1:
L_8022A51C:
    // 0x8022A51C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022A520: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A524: jr          $ra
    // 0x8022A528: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A528: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E9D0_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E9D0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022E9D4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E9D8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E9DC: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022E9E0: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022E9E4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022E9E8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022E9EC: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022E9F0: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022E9F4: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022E9F8: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022E9FC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022EA00: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
    // 0x8022EA04: sh          $v1, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r3;
    // 0x8022EA08: jal         0x8022F578
    // 0x8022EA0C: sb          $a1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r5;
    func_8022F578_ovl5(rdram, ctx);
        goto after_0;
    // 0x8022EA0C: sb          $a1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r5;
    after_0:
    // 0x8022EA10: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x8022EA14: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022EA18: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022EA1C: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8022EA20: addiu       $s2, $s2, 0x49C4
    ctx->r18 = ADD32(ctx->r18, 0X49C4);
    // 0x8022EA24: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022EA28: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x8022EA2C: jal         0x8004F820
    // 0x8022EA30: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x8022EA30: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022EA34: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022EA38: bgez        $v0, L_8022EA68
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022EA3C: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_8022EA68;
    }
    // 0x8022EA3C: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x8022EA40: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022EA44: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022EA48: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022EA4C: jal         0x8004F820
    // 0x8022EA50: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x8022EA50: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x8022EA54: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022EA58: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022EA5C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8022EA60: j           L_8022EA84
    // 0x8022EA64: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_8022EA84;
    // 0x8022EA64: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_8022EA68:
    // 0x8022EA68: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022EA6C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022EA70: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022EA74: jal         0x8004F820
    // 0x8022EA78: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x8022EA78: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_3:
    // 0x8022EA7C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022EA80: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_8022EA84:
    // 0x8022EA84: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022EA88: sh          $v0, 0x6($s3)
    MEM_H(0X6, ctx->r19) = ctx->r2;
    // 0x8022EA8C: lbu         $a3, 0xC($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XC);
    // 0x8022EA90: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022EA94: jal         0x800610AC
    // 0x8022EA98: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_4;
    // 0x8022EA98: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x8022EA9C: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022EAA0: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022EAA4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022EAA8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022EAAC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022EAB0: jr          $ra
    // 0x8022EAB4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022EAB4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022A3D8_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A3D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A3DC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A3E0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A3E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022A3E8: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x8022A3EC: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x8022A3F0: bne         $v1, $v0, L_8022A430
    if (ctx->r3 != ctx->r2) {
        // 0x8022A3F4: nop
    
            goto L_8022A430;
    }
    // 0x8022A3F4: nop

    // 0x8022A3F8: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8022A3FC: jal         0x8005FA7C
    // 0x8022A400: addiu       $a0, $a0, 0x4990
    ctx->r4 = ADD32(ctx->r4, 0X4990);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_0;
    // 0x8022A400: addiu       $a0, $a0, 0x4990
    ctx->r4 = ADD32(ctx->r4, 0X4990);
    after_0:
    // 0x8022A404: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x8022A408: sb          $zero, 0x3($v0)
    MEM_B(0X3, ctx->r2) = 0;
    // 0x8022A40C: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x8022A410: sb          $zero, 0xE($v0)
    MEM_B(0XE, ctx->r2) = 0;
    // 0x8022A414: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x8022A418: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A41C: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
    // 0x8022A420: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x8022A424: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x8022A428: jal         0x800600F8
    // 0x8022A42C: sh          $v0, 0x56($v1)
    MEM_H(0X56, ctx->r3) = ctx->r2;
    func_800600F8_3B4F8(rdram, ctx);
        goto after_1;
    // 0x8022A42C: sh          $v0, 0x56($v1)
    MEM_H(0X56, ctx->r3) = ctx->r2;
    after_1:
L_8022A430:
    // 0x8022A430: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022A434: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A438: jr          $ra
    // 0x8022A43C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A43C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80235D14_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235D14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80235D18: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80235D1C: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80235D20: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80235D24: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80235D28: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80235D2C: lw          $v0, 0x5F1C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X5F1C);
    // 0x80235D30: jalr        $v0
    // 0x80235D34: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80235D34: nop

    after_0:
    // 0x80235D38: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80235D3C: jr          $ra
    // 0x80235D40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80235D40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022D774_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D774: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D778: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D77C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D780: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022D784: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x8022D788: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022D78C: jal         0x8004FA7C
    // 0x8022D790: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x8022D790: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_0:
    // 0x8022D794: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x8022D798: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x8022D79C: bne         $v0, $zero, L_8022D7C8
    if (ctx->r2 != 0) {
        // 0x8022D7A0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022D7C8;
    }
    // 0x8022D7A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D7A4: lhu         $a0, 0x35C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X35C);
    // 0x8022D7A8: lhu         $v1, 0x366($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X366);
    // 0x8022D7AC: lhu         $a1, 0x35E($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X35E);
    // 0x8022D7B0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022D7B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D7B8: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8022D7BC: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x8022D7C0: sh          $v0, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = ctx->r2;
    // 0x8022D7C4: sh          $v1, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r3;
L_8022D7C8:
    // 0x8022D7C8: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022D7CC: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x8022D7D0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022D7D4: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022D7D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022D7DC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D7E0: jr          $ra
    // 0x8022D7E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022D7E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227A10_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227A10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227A14: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227A18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227A1C: jal         0x8006072C
    // 0x80227A20: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8006072C_3BB2C(rdram, ctx);
        goto after_0;
    // 0x80227A20: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x80227A24: beq         $v0, $zero, L_80227A38
    if (ctx->r2 == 0) {
        // 0x80227A28: nop
    
            goto L_80227A38;
    }
    // 0x80227A28: nop

    // 0x80227A2C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80227A30: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80227A34: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80227A38:
    // 0x80227A38: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80227A3C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80227A40: beq         $v1, $v0, L_80227A60
    if (ctx->r3 == ctx->r2) {
        // 0x80227A44: nop
    
            goto L_80227A60;
    }
    // 0x80227A44: nop

    // 0x80227A48: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80227A4C: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x80227A50: beq         $v0, $zero, L_80227A70
    if (ctx->r2 == 0) {
        // 0x80227A54: andi        $v0, $v1, 0x80
        ctx->r2 = ctx->r3 & 0X80;
            goto L_80227A70;
    }
    // 0x80227A54: andi        $v0, $v1, 0x80
    ctx->r2 = ctx->r3 & 0X80;
    // 0x80227A58: bne         $v0, $zero, L_80227A70
    if (ctx->r2 != 0) {
        // 0x80227A5C: nop
    
            goto L_80227A70;
    }
    // 0x80227A5C: nop

L_80227A60:
    // 0x80227A60: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80227A64: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x80227A68: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227A6C: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80227A70:
    // 0x80227A70: jal         0x8005FB90
    // 0x80227A74: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_1;
    // 0x80227A74: nop

    after_1:
    // 0x80227A78: jal         0x80060018
    // 0x80227A7C: nop

    func_80060018_3B418(rdram, ctx);
        goto after_2;
    // 0x80227A7C: nop

    after_2:
    // 0x80227A80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227A84: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227A88: jr          $ra
    // 0x80227A8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227A8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80231220_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231220: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231224: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231228: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023122C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80231230: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80231234: addiu       $v1, $zero, 0x4210
    ctx->r3 = ADD32(0, 0X4210);
    // 0x80231238: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8023123C: beq         $v0, $zero, L_80231254
    if (ctx->r2 == 0) {
        // 0x80231240: sh          $v1, 0x15E($s0)
        MEM_H(0X15E, ctx->r16) = ctx->r3;
            goto L_80231254;
    }
    // 0x80231240: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x80231244: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x80231248: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8023124C: jal         0x8003B564
    // 0x80231250: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_0;
    // 0x80231250: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
L_80231254:
    // 0x80231254: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80231258: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023125C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80231260: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80231264: lw          $v0, 0x5CB0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X5CB0);
    // 0x80231268: jalr        $v0
    // 0x8023126C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x8023126C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80231270: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80231274: beq         $v0, $zero, L_80231284
    if (ctx->r2 == 0) {
        // 0x80231278: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80231284;
    }
    // 0x80231278: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023127C: j           L_80231288
    // 0x80231280: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
        goto L_80231288;
    // 0x80231280: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
L_80231284:
    // 0x80231284: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_80231288:
    // 0x80231288: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x8023128C: jal         0x80047284
    // 0x80231290: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_2;
    // 0x80231290: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x80231294: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80231298: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023129C: jr          $ra
    // 0x802312A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802312A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023E010_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023E010: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023E014: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023E018: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023E01C: jal         0x8004F144
    // 0x8023E020: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8023E020: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x8023E024: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023E028: beq         $v1, $zero, L_8023E05C
    if (ctx->r3 == 0) {
        // 0x8023E02C: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_8023E05C;
    }
    // 0x8023E02C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8023E030: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8023E034: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8023E038: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8023E03C: addiu       $v0, $zero, 0x42
    ctx->r2 = ADD32(0, 0X42);
    // 0x8023E040: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    // 0x8023E044: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x8023E048: sh          $v0, 0x38($v1)
    MEM_H(0X38, ctx->r3) = ctx->r2;
    // 0x8023E04C: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x8023E050: sh          $v0, 0x3A($v1)
    MEM_H(0X3A, ctx->r3) = ctx->r2;
    // 0x8023E054: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x8023E058: sh          $v0, 0x3C($v1)
    MEM_H(0X3C, ctx->r3) = ctx->r2;
L_8023E05C:
    // 0x8023E05C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023E060: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023E064: jr          $ra
    // 0x8023E068: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023E068: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023D56C_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023D56C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8023D570: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8023D574: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x8023D578: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8023D57C: addiu       $s3, $zero, 0xBB
    ctx->r19 = ADD32(0, 0XBB);
    // 0x8023D580: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023D584: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x8023D588: addiu       $s0, $s0, 0x75E0
    ctx->r16 = ADD32(ctx->r16, 0X75E0);
    // 0x8023D58C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023D590: lui         $s1, 0x8024
    ctx->r17 = S32(0X8024 << 16);
    // 0x8023D594: addiu       $s1, $s1, 0x664C
    ctx->r17 = ADD32(ctx->r17, 0X664C);
    // 0x8023D598: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
L_8023D59C:
    // 0x8023D59C: jal         0x8003E6BC
    // 0x8023D5A0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_0;
    // 0x8023D5A0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x8023D5A4: jal         0x80071654
    // 0x8023D5A8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_80071654_4CA54(rdram, ctx);
        goto after_1;
    // 0x8023D5A8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_1:
    // 0x8023D5AC: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x8023D5B0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8023D5B4: slt         $v1, $a0, $v1
    ctx->r3 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8023D5B8: beq         $v1, $zero, L_8023D5C8
    if (ctx->r3 == 0) {
        // 0x8023D5BC: slt         $v0, $a0, $s3
        ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r19) ? 1 : 0;
            goto L_8023D5C8;
    }
    // 0x8023D5BC: slt         $v0, $a0, $s3
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x8023D5C0: bnel        $v0, $zero, L_8023D5C8
    if (ctx->r2 != 0) {
        // 0x8023D5C4: addu        $s3, $a0, $zero
        ctx->r19 = ADD32(ctx->r4, 0);
            goto L_8023D5C8;
    }
    goto skip_0;
    // 0x8023D5C4: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    skip_0:
L_8023D5C8:
    // 0x8023D5C8: sw          $a0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r4;
    // 0x8023D5CC: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8023D5D0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8023D5D4: slti        $v0, $s2, 0x7
    ctx->r2 = SIGNED(ctx->r18) < 0X7 ? 1 : 0;
    // 0x8023D5D8: bne         $v0, $zero, L_8023D59C
    if (ctx->r2 != 0) {
        // 0x8023D5DC: addiu       $s1, $s1, 0x8
        ctx->r17 = ADD32(ctx->r17, 0X8);
            goto L_8023D59C;
    }
    // 0x8023D5DC: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x8023D5E0: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    // 0x8023D5E4: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8023D5E8: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8023D5EC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8023D5F0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023D5F4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023D5F8: jr          $ra
    // 0x8023D5FC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8023D5FC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8023FF30_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023FF30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023FF34: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023FF38: jal         0x8004F4F8
    // 0x8023FF3C: nop

    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_0;
    // 0x8023FF3C: nop

    after_0:
    // 0x8023FF40: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023FF44: jr          $ra
    // 0x8023FF48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023FF48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023254C_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023254C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80232550: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232554: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232558: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023255C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80232560: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80232564: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80232568: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x8023256C: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x80232570: beq         $v0, $zero, L_80232674
    if (ctx->r2 == 0) {
        // 0x80232574: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80232674;
    }
    // 0x80232574: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80232578: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023257C: addu        $at, $at, $v0
    gpr jr_addend_80232584 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80232580: lw          $v0, 0x7248($at)
    ctx->r2 = ADD32(ctx->r1, 0X7248);
    // 0x80232584: jr          $v0
    // 0x80232588: nop

    switch (jr_addend_80232584 >> 2) {
        case 0: goto L_8023258C; break;
        case 1: goto L_802325A0; break;
        case 2: goto L_802325BC; break;
        case 3: goto L_80232618; break;
        case 4: goto L_80232644; break;
        default: switch_error(__func__, 0x80232584, 0x80247248);
    }
    // 0x80232588: nop

L_8023258C:
    // 0x8023258C: jal         0x8023269C
    // 0x80232590: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8023269C_ovl5(rdram, ctx);
        goto after_0;
    // 0x80232590: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80232594: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80232598: j           L_80232670
    // 0x8023259C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80232670;
    // 0x8023259C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_802325A0:
    // 0x802325A0: jal         0x80232724
    // 0x802325A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80232724_ovl5(rdram, ctx);
        goto after_1;
    // 0x802325A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802325A8: beq         $v0, $zero, L_80232678
    if (ctx->r2 == 0) {
        // 0x802325AC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80232678;
    }
    // 0x802325AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802325B0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802325B4: j           L_80232670
    // 0x802325B8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80232670;
    // 0x802325B8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_802325BC:
    // 0x802325BC: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802325C0: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x802325C4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802325C8: jal         0x8004F820
    // 0x802325CC: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x802325CC: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_2:
    // 0x802325D0: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x802325D4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802325D8: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x802325DC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802325E0: bne         $v0, $zero, L_80232674
    if (ctx->r2 != 0) {
        // 0x802325E4: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_80232674;
    }
    // 0x802325E4: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x802325E8: jal         0x8003516C
    // 0x802325EC: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_3;
    // 0x802325EC: nop

    after_3:
    // 0x802325F0: bne         $v0, $zero, L_80232678
    if (ctx->r2 != 0) {
        // 0x802325F4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80232678;
    }
    // 0x802325F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802325F8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802325FC: jal         0x800616FC
    // 0x80232600: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_4;
    // 0x80232600: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    after_4:
    // 0x80232604: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80232608: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x8023260C: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x80232610: j           L_80232670
    // 0x80232614: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80232670;
    // 0x80232614: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80232618:
    // 0x80232618: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8023261C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80232620: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80232624: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80232628: bne         $v0, $zero, L_80232678
    if (ctx->r2 != 0) {
        // 0x8023262C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80232678;
    }
    // 0x8023262C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232630: jal         0x80034E3C
    // 0x80232634: nop

    func_80034E3C_1023C(rdram, ctx);
        goto after_5;
    // 0x80232634: nop

    after_5:
    // 0x80232638: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8023263C: j           L_80232670
    // 0x80232640: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80232670;
    // 0x80232640: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80232644:
    // 0x80232644: jal         0x8003516C
    // 0x80232648: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_6;
    // 0x80232648: nop

    after_6:
    // 0x8023264C: bne         $v0, $zero, L_80232678
    if (ctx->r2 != 0) {
        // 0x80232650: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80232678;
    }
    // 0x80232650: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232654: lbu         $v0, 0xBD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XBD);
    // 0x80232658: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x8023265C: andi        $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 & 0X7F;
    // 0x80232660: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80232664: sb          $v0, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r2;
    // 0x80232668: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023266C: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
L_80232670:
    // 0x80232670: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80232674:
    // 0x80232674: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80232678:
    // 0x80232678: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8023267C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x80232680: jal         0x80047284
    // 0x80232684: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_7;
    // 0x80232684: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_7:
    // 0x80232688: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023268C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80232690: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232694: jr          $ra
    // 0x80232698: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80232698: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023E5BC_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023E5BC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023E5C0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023E5C4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023E5C8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023E5CC: jal         0x8023EAD0
    // 0x8023E5D0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    func_8023EAD0_ovl5(rdram, ctx);
        goto after_0;
    // 0x8023E5D0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x8023E5D4: lh          $a0, 0x44($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X44);
    // 0x8023E5D8: lhu         $v1, 0xE2($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XE2);
    // 0x8023E5DC: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x8023E5E0: addiu       $s1, $s0, 0xD0
    ctx->r17 = ADD32(ctx->r16, 0XD0);
    // 0x8023E5E4: sh          $v0, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r2;
    // 0x8023E5E8: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x8023E5EC: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8023E5F0: sra         $v0, $v0, 5
    ctx->r2 = S32(SIGNED(ctx->r2) >> 5);
    // 0x8023E5F4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023E5F8: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x8023E5FC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023E600: slti        $v0, $v0, 0x401
    ctx->r2 = SIGNED(ctx->r2) < 0X401 ? 1 : 0;
    // 0x8023E604: bne         $v0, $zero, L_8023E77C
    if (ctx->r2 != 0) {
        // 0x8023E608: sh          $v1, 0xE2($s0)
        MEM_H(0XE2, ctx->r16) = ctx->r3;
            goto L_8023E77C;
    }
    // 0x8023E608: sh          $v1, 0xE2($s0)
    MEM_H(0XE2, ctx->r16) = ctx->r3;
    // 0x8023E60C: lbu         $v0, 0xDE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XDE);
    // 0x8023E610: lw          $a0, 0xD0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XD0);
    // 0x8023E614: addiu       $v1, $v1, -0x400
    ctx->r3 = ADD32(ctx->r3, -0X400);
    // 0x8023E618: sh          $v1, 0xE2($s0)
    MEM_H(0XE2, ctx->r16) = ctx->r3;
    // 0x8023E61C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8023E620: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8023E624: lbu         $v0, 0x2($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2);
    // 0x8023E628: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8023E62C: beq         $v0, $zero, L_8023E644
    if (ctx->r2 == 0) {
        // 0x8023E630: addiu       $v1, $zero, -0x1
        ctx->r3 = ADD32(0, -0X1);
            goto L_8023E644;
    }
    // 0x8023E630: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x8023E634: lbu         $v0, 0xDC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XDC);
    // 0x8023E638: sll         $v0, $v0, 10
    ctx->r2 = S32(ctx->r2 << 10);
    // 0x8023E63C: j           L_8023E654
    // 0x8023E640: addiu       $v0, $v0, 0xC00
    ctx->r2 = ADD32(ctx->r2, 0XC00);
        goto L_8023E654;
    // 0x8023E640: addiu       $v0, $v0, 0xC00
    ctx->r2 = ADD32(ctx->r2, 0XC00);
L_8023E644:
    // 0x8023E644: lbu         $v0, 0xDC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XDC);
    // 0x8023E648: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8023E64C: sll         $v0, $v0, 10
    ctx->r2 = S32(ctx->r2 << 10);
    // 0x8023E650: addiu       $v0, $v0, 0x400
    ctx->r2 = ADD32(ctx->r2, 0X400);
L_8023E654:
    // 0x8023E654: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8023E658: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8023E65C: lhu         $v0, 0x16($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X16);
    // 0x8023E660: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x8023E664: lhu         $v0, 0x18($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X18);
    // 0x8023E668: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x8023E66C: lbu         $a1, 0xC($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0XC);
    // 0x8023E670: bne         $a1, $zero, L_8023E6A8
    if (ctx->r5 != 0) {
        // 0x8023E674: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023E6A8;
    }
    // 0x8023E674: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023E678: lhu         $v0, 0x12($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X12);
    // 0x8023E67C: sll         $a0, $v1, 24
    ctx->r4 = S32(ctx->r3 << 24);
    // 0x8023E680: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x8023E684: mult        $a0, $v0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023E688: mflo        $a0
    ctx->r4 = lo;
    // 0x8023E68C: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x8023E690: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x8023E694: addiu       $v0, $v0, -0x200
    ctx->r2 = ADD32(ctx->r2, -0X200);
    // 0x8023E698: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x8023E69C: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x8023E6A0: j           L_8023E740
    // 0x8023E6A4: sh          $v1, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r3;
        goto L_8023E740;
    // 0x8023E6A4: sh          $v1, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r3;
L_8023E6A8:
    // 0x8023E6A8: bnel        $a1, $v0, L_8023E6E0
    if (ctx->r5 != ctx->r2) {
        // 0x8023E6AC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023E6E0;
    }
    goto skip_0;
    // 0x8023E6AC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8023E6B0: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x8023E6B4: addiu       $v0, $v0, -0x200
    ctx->r2 = ADD32(ctx->r2, -0X200);
    // 0x8023E6B8: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x8023E6BC: lhu         $v0, 0x12($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X12);
    // 0x8023E6C0: sll         $v1, $v1, 24
    ctx->r3 = S32(ctx->r3 << 24);
    // 0x8023E6C4: sra         $v1, $v1, 24
    ctx->r3 = S32(SIGNED(ctx->r3) >> 24);
    // 0x8023E6C8: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023E6CC: mflo        $v1
    ctx->r3 = lo;
    // 0x8023E6D0: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x8023E6D4: nop

    // 0x8023E6D8: j           L_8023E73C
    // 0x8023E6DC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
        goto L_8023E73C;
    // 0x8023E6DC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
L_8023E6E0:
    // 0x8023E6E0: bnel        $a1, $v0, L_8023E718
    if (ctx->r5 != ctx->r2) {
        // 0x8023E6E4: sll         $v1, $v1, 24
        ctx->r3 = S32(ctx->r3 << 24);
            goto L_8023E718;
    }
    goto skip_1;
    // 0x8023E6E4: sll         $v1, $v1, 24
    ctx->r3 = S32(ctx->r3 << 24);
    skip_1:
    // 0x8023E6E8: lhu         $v0, 0x12($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X12);
    // 0x8023E6EC: sll         $a0, $v1, 24
    ctx->r4 = S32(ctx->r3 << 24);
    // 0x8023E6F0: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x8023E6F4: mult        $a0, $v0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023E6F8: mflo        $a0
    ctx->r4 = lo;
    // 0x8023E6FC: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x8023E700: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x8023E704: addiu       $v0, $v0, 0x200
    ctx->r2 = ADD32(ctx->r2, 0X200);
    // 0x8023E708: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x8023E70C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8023E710: j           L_8023E740
    // 0x8023E714: sh          $v1, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r3;
        goto L_8023E740;
    // 0x8023E714: sh          $v1, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r3;
L_8023E718:
    // 0x8023E718: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x8023E71C: addiu       $v0, $v0, 0x200
    ctx->r2 = ADD32(ctx->r2, 0X200);
    // 0x8023E720: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x8023E724: lhu         $v0, 0x12($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X12);
    // 0x8023E728: sra         $v1, $v1, 24
    ctx->r3 = S32(SIGNED(ctx->r3) >> 24);
    // 0x8023E72C: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023E730: mflo        $v1
    ctx->r3 = lo;
    // 0x8023E734: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x8023E738: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
L_8023E73C:
    // 0x8023E73C: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
L_8023E740:
    // 0x8023E740: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x8023E744: lh          $v1, 0x18($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X18);
    // 0x8023E748: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023E74C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023E750: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8023E754: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8023E758: jal         0x8023EE88
    // 0x8023E75C: sw          $v1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r3;
    func_8023EE88_ovl5(rdram, ctx);
        goto after_1;
    // 0x8023E75C: sw          $v1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r3;
    after_1:
    // 0x8023E760: lbu         $v0, 0xF($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XF);
    // 0x8023E764: sh          $zero, 0x12($s1)
    MEM_H(0X12, ctx->r17) = 0;
    // 0x8023E768: andi        $v0, $v0, 0xFE
    ctx->r2 = ctx->r2 & 0XFE;
    // 0x8023E76C: sb          $v0, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r2;
    // 0x8023E770: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023E774: j           L_8023E784
    // 0x8023E778: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8023E784;
    // 0x8023E778: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8023E77C:
    // 0x8023E77C: jal         0x8023E954
    // 0x8023E780: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8023E954_ovl5(rdram, ctx);
        goto after_2;
    // 0x8023E780: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
L_8023E784:
    // 0x8023E784: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023E788: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023E78C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023E790: jr          $ra
    // 0x8023E794: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023E794: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023E50C_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023E50C: jr          $ra
    // 0x8023E510: nop

    TRACE_RETURN()
    return;
    // 0x8023E510: nop

;}
RECOMP_FUNC void func_80237040_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237040: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80237044: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80237048: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023704C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80237050: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80237054: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80237058: jal         0x8009A3B4
    // 0x8023705C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8023705C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80237060: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80237064: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80237068: jal         0x8009A3B4
    // 0x8023706C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8023706C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80237070: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80237074: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80237078: jal         0x8009A3B4
    // 0x8023707C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8023707C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80237080: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80237084: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80237088: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023708C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80237090: lw          $v0, 0x5FD0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X5FD0);
    // 0x80237094: jalr        $v0
    // 0x80237098: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x80237098: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8023709C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x802370A0: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x802370A4: beq         $v0, $zero, L_802370BC
    if (ctx->r2 == 0) {
        // 0x802370A8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802370BC;
    }
    // 0x802370A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802370AC: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x802370B0: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x802370B4: jal         0x8003B564
    // 0x802370B8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_4;
    // 0x802370B8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_4:
L_802370BC:
    // 0x802370BC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802370C0: beq         $v0, $zero, L_802370D8
    if (ctx->r2 == 0) {
        // 0x802370C4: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_802370D8;
    }
    // 0x802370C4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802370C8: jal         0x8005044C
    // 0x802370CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_5;
    // 0x802370CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x802370D0: j           L_802370DC
    // 0x802370D4: nop

        goto L_802370DC;
    // 0x802370D4: nop

L_802370D8:
    // 0x802370D8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802370DC:
    // 0x802370DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802370E0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802370E4: jr          $ra
    // 0x802370E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802370E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023BD58_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023BD58: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023BD5C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023BD60: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023BD64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023BD68: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8023BD6C: bne         $v0, $zero, L_8023BD9C
    if (ctx->r2 != 0) {
        // 0x8023BD70: addiu       $v0, $zero, 0x7F
        ctx->r2 = ADD32(0, 0X7F);
            goto L_8023BD9C;
    }
    // 0x8023BD70: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x8023BD74: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8023BD78: sh          $v0, -0x3F82($at)
    MEM_H(-0X3F82, ctx->r1) = ctx->r2;
    // 0x8023BD7C: jal         0x80036B58
    // 0x8023BD80: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_80036B58_11F58(rdram, ctx);
        goto after_0;
    // 0x8023BD80: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_0:
    // 0x8023BD84: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8023BD88: addiu       $v1, $zero, 0x12C
    ctx->r3 = ADD32(0, 0X12C);
    // 0x8023BD8C: sw          $v1, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r3;
    // 0x8023BD90: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023BD94: j           L_8023BDBC
    // 0x8023BD98: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8023BDBC;
    // 0x8023BD98: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8023BD9C:
    // 0x8023BD9C: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x8023BDA0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023BDA4: bne         $v0, $zero, L_8023BDBC
    if (ctx->r2 != 0) {
        // 0x8023BDA8: sw          $v0, 0x14($s0)
        MEM_W(0X14, ctx->r16) = ctx->r2;
            goto L_8023BDBC;
    }
    // 0x8023BDA8: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x8023BDAC: jal         0x8006036C
    // 0x8023BDB0: addiu       $a0, $zero, 0x628
    ctx->r4 = ADD32(0, 0X628);
    func_8006036C_3B76C(rdram, ctx);
        goto after_1;
    // 0x8023BDB0: addiu       $a0, $zero, 0x628
    ctx->r4 = ADD32(0, 0X628);
    after_1:
    // 0x8023BDB4: jal         0x8004F684
    // 0x8023BDB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F684_2AA84(rdram, ctx);
        goto after_2;
    // 0x8023BDB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
L_8023BDBC:
    // 0x8023BDBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023BDC0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023BDC4: jr          $ra
    // 0x8023BDC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023BDC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80240F30_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80240F30: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80240F34: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80240F38: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80240F3C: addiu       $a0, $s2, 0x2C
    ctx->r4 = ADD32(ctx->r18, 0X2C);
    // 0x80240F40: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80240F44: addiu       $s1, $s2, 0x14
    ctx->r17 = ADD32(ctx->r18, 0X14);
    // 0x80240F48: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80240F4C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80240F50: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80240F54: jal         0x8009A3B4
    // 0x80240F58: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80240F58: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    after_0:
    // 0x80240F5C: addiu       $a0, $s2, 0x34
    ctx->r4 = ADD32(ctx->r18, 0X34);
    // 0x80240F60: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    // 0x80240F64: jal         0x8009A3B4
    // 0x80240F68: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80240F68: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80240F6C: addiu       $a0, $s2, 0x5C
    ctx->r4 = ADD32(ctx->r18, 0X5C);
    // 0x80240F70: addiu       $s0, $s2, 0x54
    ctx->r16 = ADD32(ctx->r18, 0X54);
    // 0x80240F74: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80240F78: jal         0x8009A3B4
    // 0x80240F7C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80240F7C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80240F80: lbu         $v0, 0x8($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X8);
    // 0x80240F84: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80240F88: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80240F8C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80240F90: lw          $v0, 0x6E28($at)
    ctx->r2 = MEM_W(ctx->r1, 0X6E28);
    // 0x80240F94: jalr        $v0
    // 0x80240F98: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x80240F98: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_3:
    // 0x80240F9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80240FA0: addiu       $s0, $s2, 0x8C
    ctx->r16 = ADD32(ctx->r18, 0X8C);
    // 0x80240FA4: jal         0x80031600
    // 0x80240FA8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80031600_CA00(rdram, ctx);
        goto after_4;
    // 0x80240FA8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80240FAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80240FB0: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x80240FB4: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80240FB8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80240FBC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80240FC0: jal         0x80031DA8
    // 0x80240FC4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_5;
    // 0x80240FC4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_5:
    // 0x80240FC8: addiu       $a0, $s2, 0xAC
    ctx->r4 = ADD32(ctx->r18, 0XAC);
    // 0x80240FCC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80240FD0: jal         0x8009A3B4
    // 0x80240FD4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x80240FD4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x80240FD8: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x80240FDC: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80240FE0: beq         $v0, $zero, L_80240FFC
    if (ctx->r2 == 0) {
        // 0x80240FE4: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_80240FFC;
    }
    // 0x80240FE4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80240FE8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80240FEC: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x80240FF0: lui         $a3, 0x2000
    ctx->r7 = S32(0X2000 << 16);
    // 0x80240FF4: jal         0x80047284
    // 0x80240FF8: ori         $a3, $a3, 0x8
    ctx->r7 = ctx->r7 | 0X8;
    func_80047284_22684(rdram, ctx);
        goto after_7;
    // 0x80240FF8: ori         $a3, $a3, 0x8
    ctx->r7 = ctx->r7 | 0X8;
    after_7:
L_80240FFC:
    // 0x80240FFC: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x80241000: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80241004: beq         $v0, $zero, L_8024101C
    if (ctx->r2 == 0) {
        // 0x80241008: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_8024101C;
    }
    // 0x80241008: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8024100C: addiu       $a1, $zero, 0x104
    ctx->r5 = ADD32(0, 0X104);
    // 0x80241010: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x80241014: jal         0x8003B564
    // 0x80241018: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8003B564_16964(rdram, ctx);
        goto after_8;
    // 0x80241018: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_8:
L_8024101C:
    // 0x8024101C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80241020: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80241024: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80241028: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8024102C: jr          $ra
    // 0x80241030: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80241030: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80241310_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80241310: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80241314: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80241318: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8024131C: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x80241320: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80241324: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80241328: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8024132C: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x80241330: jal         0x8004D5D4
    // 0x80241334: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80241334: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x80241338: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8024133C: addiu       $s1, $s0, 0x8C
    ctx->r17 = ADD32(ctx->r16, 0X8C);
    // 0x80241340: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80241344: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80241348: jal         0x8002C69C
    // 0x8024134C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    func_8002C69C_7A9C(rdram, ctx);
        goto after_1;
    // 0x8024134C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    after_1:
    // 0x80241350: addiu       $a0, $s0, 0x54
    ctx->r4 = ADD32(ctx->r16, 0X54);
    // 0x80241354: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x80241358: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x8024135C: jal         0x80031600
    // 0x80241360: sh          $v0, 0x9C($s0)
    MEM_H(0X9C, ctx->r16) = ctx->r2;
    func_80031600_CA00(rdram, ctx);
        goto after_2;
    // 0x80241360: sh          $v0, 0x9C($s0)
    MEM_H(0X9C, ctx->r16) = ctx->r2;
    after_2:
    // 0x80241364: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80241368: jal         0x80030834
    // 0x8024136C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_80030834_BC34(rdram, ctx);
        goto after_3;
    // 0x8024136C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_3:
    // 0x80241370: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x80241374: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80241378: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8024137C: jr          $ra
    // 0x80241380: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80241380: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8023269C_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023269C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802326A0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802326A4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802326A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802326AC: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x802326B0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802326B4: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x802326B8: jal         0x8004D5D4
    // 0x802326BC: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x802326BC: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x802326C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802326C4: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x802326C8: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x802326CC: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x802326D0: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x802326D4: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x802326D8: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x802326DC: jal         0x8003E934
    // 0x802326E0: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x802326E0: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    after_1:
    // 0x802326E4: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x802326E8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802326EC: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x802326F0: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802326F4: addiu       $v0, $v0, 0x5D08
    ctx->r2 = ADD32(ctx->r2, 0X5D08);
    // 0x802326F8: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x802326FC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80232700: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x80232704: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
    // 0x80232708: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x8023270C: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x80232710: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x80232714: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80232718: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023271C: jr          $ra
    // 0x80232720: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80232720: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802269DC_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802269DC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802269E0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802269E4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802269E8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802269EC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802269F0: lb          $v1, 0x2($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X2);
    // 0x802269F4: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x802269F8: lw          $s0, 0x7954($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X7954);
    // 0x802269FC: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x80226A00: beq         $v0, $zero, L_80226AFC
    if (ctx->r2 == 0) {
        // 0x80226A04: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80226AFC;
    }
    // 0x80226A04: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80226A08: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80226A0C: addu        $at, $at, $v0
    gpr jr_addend_80226A14 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226A10: lw          $v0, 0x6F58($at)
    ctx->r2 = ADD32(ctx->r1, 0X6F58);
    // 0x80226A14: jr          $v0
    // 0x80226A18: nop

    switch (jr_addend_80226A14 >> 2) {
        case 0: goto L_80226A1C; break;
        case 1: goto L_80226A28; break;
        case 2: goto L_80226A5C; break;
        case 3: goto L_80226A98; break;
        case 4: goto L_80226AD0; break;
        default: switch_error(__func__, 0x80226A14, 0x80246F58);
    }
    // 0x80226A18: nop

L_80226A1C:
    // 0x80226A1C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80226A20: j           L_80226AF0
    // 0x80226A24: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
        goto L_80226AF0;
    // 0x80226A24: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_80226A28:
    // 0x80226A28: jal         0x8006033C
    // 0x80226A2C: addiu       $a0, $zero, 0x608
    ctx->r4 = ADD32(0, 0X608);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80226A2C: addiu       $a0, $zero, 0x608
    ctx->r4 = ADD32(0, 0X608);
    after_0:
    // 0x80226A30: beq         $v0, $zero, L_80226AFC
    if (ctx->r2 == 0) {
        // 0x80226A34: nop
    
            goto L_80226AFC;
    }
    // 0x80226A34: nop

    // 0x80226A38: jal         0x80060590
    // 0x80226A3C: addiu       $a0, $zero, 0x608
    ctx->r4 = ADD32(0, 0X608);
    func_80060590_3B990(rdram, ctx);
        goto after_1;
    // 0x80226A3C: addiu       $a0, $zero, 0x608
    ctx->r4 = ADD32(0, 0X608);
    after_1:
    // 0x80226A40: jal         0x8006036C
    // 0x80226A44: addiu       $a0, $zero, 0x607
    ctx->r4 = ADD32(0, 0X607);
    func_8006036C_3B76C(rdram, ctx);
        goto after_2;
    // 0x80226A44: addiu       $a0, $zero, 0x607
    ctx->r4 = ADD32(0, 0X607);
    after_2:
    // 0x80226A48: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80226A4C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80226A50: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x80226A54: j           L_80226AF0
    // 0x80226A58: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
        goto L_80226AF0;
    // 0x80226A58: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
L_80226A5C:
    // 0x80226A5C: jal         0x8006033C
    // 0x80226A60: addiu       $a0, $zero, 0x608
    ctx->r4 = ADD32(0, 0X608);
    func_8006033C_3B73C(rdram, ctx);
        goto after_3;
    // 0x80226A60: addiu       $a0, $zero, 0x608
    ctx->r4 = ADD32(0, 0X608);
    after_3:
    // 0x80226A64: beq         $v0, $zero, L_80226AFC
    if (ctx->r2 == 0) {
        // 0x80226A68: nop
    
            goto L_80226AFC;
    }
    // 0x80226A68: nop

    // 0x80226A6C: jal         0x80060590
    // 0x80226A70: addiu       $a0, $zero, 0x608
    ctx->r4 = ADD32(0, 0X608);
    func_80060590_3B990(rdram, ctx);
        goto after_4;
    // 0x80226A70: addiu       $a0, $zero, 0x608
    ctx->r4 = ADD32(0, 0X608);
    after_4:
    // 0x80226A74: jal         0x80060590
    // 0x80226A78: addiu       $a0, $zero, 0x607
    ctx->r4 = ADD32(0, 0X607);
    func_80060590_3B990(rdram, ctx);
        goto after_5;
    // 0x80226A78: addiu       $a0, $zero, 0x607
    ctx->r4 = ADD32(0, 0X607);
    after_5:
    // 0x80226A7C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80226A80: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80226A84: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226A88: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x80226A8C: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x80226A90: j           L_80226AF0
    // 0x80226A94: sh          $zero, 0x56($s0)
    MEM_H(0X56, ctx->r16) = 0;
        goto L_80226AF0;
    // 0x80226A94: sh          $zero, 0x56($s0)
    MEM_H(0X56, ctx->r16) = 0;
L_80226A98:
    // 0x80226A98: jal         0x8006033C
    // 0x80226A9C: addiu       $a0, $zero, 0x608
    ctx->r4 = ADD32(0, 0X608);
    func_8006033C_3B73C(rdram, ctx);
        goto after_6;
    // 0x80226A9C: addiu       $a0, $zero, 0x608
    ctx->r4 = ADD32(0, 0X608);
    after_6:
    // 0x80226AA0: beq         $v0, $zero, L_80226AFC
    if (ctx->r2 == 0) {
        // 0x80226AA4: nop
    
            goto L_80226AFC;
    }
    // 0x80226AA4: nop

    // 0x80226AA8: jal         0x80060590
    // 0x80226AAC: addiu       $a0, $zero, 0x608
    ctx->r4 = ADD32(0, 0X608);
    func_80060590_3B990(rdram, ctx);
        goto after_7;
    // 0x80226AAC: addiu       $a0, $zero, 0x608
    ctx->r4 = ADD32(0, 0X608);
    after_7:
    // 0x80226AB0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80226AB4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226AB8: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x80226ABC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80226AC0: jal         0x800616FC
    // 0x80226AC4: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    func_800616FC_3CAFC(rdram, ctx);
        goto after_8;
    // 0x80226AC4: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    after_8:
    // 0x80226AC8: j           L_80226AF0
    // 0x80226ACC: nop

        goto L_80226AF0;
    // 0x80226ACC: nop

L_80226AD0:
    // 0x80226AD0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80226AD4: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80226AD8: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80226ADC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80226AE0: bne         $v0, $zero, L_80226AFC
    if (ctx->r2 != 0) {
        // 0x80226AE4: nop
    
            goto L_80226AFC;
    }
    // 0x80226AE4: nop

    // 0x80226AE8: jal         0x8006036C
    // 0x80226AEC: addiu       $a0, $zero, 0x604
    ctx->r4 = ADD32(0, 0X604);
    func_8006036C_3B76C(rdram, ctx);
        goto after_9;
    // 0x80226AEC: addiu       $a0, $zero, 0x604
    ctx->r4 = ADD32(0, 0X604);
    after_9:
L_80226AF0:
    // 0x80226AF0: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x80226AF4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226AF8: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
L_80226AFC:
    // 0x80226AFC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80226B00: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80226B04: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226B08: jr          $ra
    // 0x80226B0C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80226B0C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80235300_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235300: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80235304: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80235308: jal         0x8004F418
    // 0x8023530C: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x8023530C: nop

    after_0:
    // 0x80235310: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80235314: jr          $ra
    // 0x80235318: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80235318: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225E4C_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225E4C: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80225E50: lw          $a0, 0x7940($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7940);
    // 0x80225E54: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225E58: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225E5C: jal         0x8004F418
    // 0x80225E60: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x80225E60: nop

    after_0:
    // 0x80225E64: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80225E68: jal         0x8004F418
    // 0x80225E6C: lw          $a0, 0x7944($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7944);
    func_8004F418_2A818(rdram, ctx);
        goto after_1;
    // 0x80225E6C: lw          $a0, 0x7944($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7944);
    after_1:
    // 0x80225E70: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80225E74: jr          $ra
    // 0x80225E78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225E78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80225E7C: nop

;}
RECOMP_FUNC void func_802369E4_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802369E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802369E8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802369EC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802369F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802369F4: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x802369F8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802369FC: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80236A00: jal         0x8004D5D4
    // 0x80236A04: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80236A04: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x80236A08: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x80236A0C: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x80236A10: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x80236A14: lhu         $a1, 0x18($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X18);
    // 0x80236A18: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80236A1C: lhu         $a2, 0x54($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X54);
    // 0x80236A20: lhu         $a3, 0x56($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X56);
    // 0x80236A24: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80236A28: lhu         $t0, 0x58($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X58);
    // 0x80236A2C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80236A30: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80236A34: lw          $t1, 0x1C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X1C);
    // 0x80236A38: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80236A3C: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80236A40: lw          $t2, 0x20($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X20);
    // 0x80236A44: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80236A48: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x80236A4C: lw          $t3, 0x24($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X24);
    // 0x80236A50: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x80236A54: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    // 0x80236A58: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x80236A5C: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x80236A60: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80236A64: addiu       $v0, $v0, 0x5F98
    ctx->r2 = ADD32(ctx->r2, 0X5F98);
    // 0x80236A68: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x80236A6C: addiu       $v0, $zero, 0x1D7
    ctx->r2 = ADD32(0, 0X1D7);
    // 0x80236A70: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80236A74: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80236A78: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80236A7C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80236A80: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80236A84: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80236A88: sh          $a1, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r5;
    // 0x80236A8C: sh          $a2, 0x5C($s0)
    MEM_H(0X5C, ctx->r16) = ctx->r6;
    // 0x80236A90: sh          $a3, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r7;
    // 0x80236A94: sh          $t0, 0x60($s0)
    MEM_H(0X60, ctx->r16) = ctx->r8;
    // 0x80236A98: sh          $v1, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = ctx->r3;
    // 0x80236A9C: sh          $a0, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r4;
    // 0x80236AA0: sw          $t1, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r9;
    // 0x80236AA4: sw          $t2, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r10;
    // 0x80236AA8: sw          $t3, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r11;
    // 0x80236AAC: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80236AB0: lb          $a1, 0xE($s0)
    ctx->r5 = MEM_B(ctx->r16, 0XE);
    // 0x80236AB4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80236AB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236ABC: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80236AC0: sh          $zero, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = 0;
    // 0x80236AC4: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    // 0x80236AC8: sh          $zero, 0x50($s0)
    MEM_H(0X50, ctx->r16) = 0;
    // 0x80236ACC: jal         0x80050294
    // 0x80236AD0: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x80236AD0: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    after_1:
    // 0x80236AD4: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80236AD8: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x80236ADC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80236AE0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80236AE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80236AE8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80236AEC: jr          $ra
    // 0x80236AF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80236AF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228718_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228718: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022871C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228720: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228724: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228728: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x8022872C: bne         $v0, $zero, L_80228758
    if (ctx->r2 != 0) {
        // 0x80228730: nop
    
            goto L_80228758;
    }
    // 0x80228730: nop

    // 0x80228734: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228738: sb          $zero, 0x4430($at)
    MEM_B(0X4430, ctx->r1) = 0;
    // 0x8022873C: jal         0x8004F418
    // 0x80228740: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x80228740: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    after_0:
    // 0x80228744: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80228748: jal         0x8005FA7C
    // 0x8022874C: addiu       $a0, $a0, 0x4490
    ctx->r4 = ADD32(ctx->r4, 0X4490);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_1;
    // 0x8022874C: addiu       $a0, $a0, 0x4490
    ctx->r4 = ADD32(ctx->r4, 0X4490);
    after_1:
    // 0x80228750: jal         0x80228AD4
    // 0x80228754: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_80228AD4_ovl5(rdram, ctx);
        goto after_2;
    // 0x80228754: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_2:
L_80228758:
    // 0x80228758: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x8022875C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228760: bne         $v1, $v0, L_80228774
    if (ctx->r3 != ctx->r2) {
        // 0x80228764: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80228774;
    }
    // 0x80228764: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228768: lw          $v1, 0x28($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X28);
    // 0x8022876C: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80228770: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
L_80228774:
    // 0x80228774: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80228778: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022877C: jr          $ra
    // 0x80228780: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228780: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023FB70_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023FB70: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x8023FB74: lhu         $v0, 0x44($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X44);
    // 0x8023FB78: lhu         $v1, 0x4C($a3)
    ctx->r3 = MEM_HU(ctx->r7, 0X4C);
    // 0x8023FB7C: lhu         $a0, 0x4E($a3)
    ctx->r4 = MEM_HU(ctx->r7, 0X4E);
    // 0x8023FB80: lhu         $a1, 0x50($a3)
    ctx->r5 = MEM_HU(ctx->r7, 0X50);
    // 0x8023FB84: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023FB88: sh          $v0, 0x44($a3)
    MEM_H(0X44, ctx->r7) = ctx->r2;
    // 0x8023FB8C: lhu         $v0, 0x46($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X46);
    // 0x8023FB90: lhu         $v1, 0x48($a3)
    ctx->r3 = MEM_HU(ctx->r7, 0X48);
    // 0x8023FB94: lh          $a2, 0x44($a3)
    ctx->r6 = MEM_H(ctx->r7, 0X44);
    // 0x8023FB98: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8023FB9C: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x8023FBA0: sh          $v0, 0x46($a3)
    MEM_H(0X46, ctx->r7) = ctx->r2;
    // 0x8023FBA4: slti        $v0, $a2, -0x6000
    ctx->r2 = SIGNED(ctx->r6) < -0X6000 ? 1 : 0;
    // 0x8023FBA8: beq         $v0, $zero, L_8023FBB8
    if (ctx->r2 == 0) {
        // 0x8023FBAC: sh          $v1, 0x48($a3)
        MEM_H(0X48, ctx->r7) = ctx->r3;
            goto L_8023FBB8;
    }
    // 0x8023FBAC: sh          $v1, 0x48($a3)
    MEM_H(0X48, ctx->r7) = ctx->r3;
    // 0x8023FBB0: j           L_8023FBC4
    // 0x8023FBB4: addiu       $v0, $zero, -0x6000
    ctx->r2 = ADD32(0, -0X6000);
        goto L_8023FBC4;
    // 0x8023FBB4: addiu       $v0, $zero, -0x6000
    ctx->r2 = ADD32(0, -0X6000);
L_8023FBB8:
    // 0x8023FBB8: slti        $v0, $a2, 0x6001
    ctx->r2 = SIGNED(ctx->r6) < 0X6001 ? 1 : 0;
    // 0x8023FBBC: bne         $v0, $zero, L_8023FBC8
    if (ctx->r2 != 0) {
        // 0x8023FBC0: addiu       $v0, $zero, 0x6000
        ctx->r2 = ADD32(0, 0X6000);
            goto L_8023FBC8;
    }
    // 0x8023FBC0: addiu       $v0, $zero, 0x6000
    ctx->r2 = ADD32(0, 0X6000);
L_8023FBC4:
    // 0x8023FBC4: sh          $v0, 0x44($a3)
    MEM_H(0X44, ctx->r7) = ctx->r2;
L_8023FBC8:
    // 0x8023FBC8: lh          $v1, 0x46($a3)
    ctx->r3 = MEM_H(ctx->r7, 0X46);
    // 0x8023FBCC: slti        $v0, $v1, -0x6000
    ctx->r2 = SIGNED(ctx->r3) < -0X6000 ? 1 : 0;
    // 0x8023FBD0: bne         $v0, $zero, L_8023FBE4
    if (ctx->r2 != 0) {
        // 0x8023FBD4: addiu       $v0, $zero, -0x6000
        ctx->r2 = ADD32(0, -0X6000);
            goto L_8023FBE4;
    }
    // 0x8023FBD4: addiu       $v0, $zero, -0x6000
    ctx->r2 = ADD32(0, -0X6000);
    // 0x8023FBD8: slti        $v0, $v1, 0x6001
    ctx->r2 = SIGNED(ctx->r3) < 0X6001 ? 1 : 0;
    // 0x8023FBDC: bne         $v0, $zero, L_8023FBE8
    if (ctx->r2 != 0) {
        // 0x8023FBE0: addiu       $v0, $zero, 0x6000
        ctx->r2 = ADD32(0, 0X6000);
            goto L_8023FBE8;
    }
    // 0x8023FBE0: addiu       $v0, $zero, 0x6000
    ctx->r2 = ADD32(0, 0X6000);
L_8023FBE4:
    // 0x8023FBE4: sh          $v0, 0x46($a3)
    MEM_H(0X46, ctx->r7) = ctx->r2;
L_8023FBE8:
    // 0x8023FBE8: lh          $v1, 0x48($a3)
    ctx->r3 = MEM_H(ctx->r7, 0X48);
    // 0x8023FBEC: slti        $v0, $v1, -0x6000
    ctx->r2 = SIGNED(ctx->r3) < -0X6000 ? 1 : 0;
    // 0x8023FBF0: bne         $v0, $zero, L_8023FC04
    if (ctx->r2 != 0) {
        // 0x8023FBF4: addiu       $v0, $zero, -0x6000
        ctx->r2 = ADD32(0, -0X6000);
            goto L_8023FC04;
    }
    // 0x8023FBF4: addiu       $v0, $zero, -0x6000
    ctx->r2 = ADD32(0, -0X6000);
    // 0x8023FBF8: slti        $v0, $v1, 0x6001
    ctx->r2 = SIGNED(ctx->r3) < 0X6001 ? 1 : 0;
    // 0x8023FBFC: bne         $v0, $zero, L_8023FC08
    if (ctx->r2 != 0) {
        // 0x8023FC00: addiu       $v0, $zero, 0x6000
        ctx->r2 = ADD32(0, 0X6000);
            goto L_8023FC08;
    }
    // 0x8023FC00: addiu       $v0, $zero, 0x6000
    ctx->r2 = ADD32(0, 0X6000);
L_8023FC04:
    // 0x8023FC04: sh          $v0, 0x48($a3)
    MEM_H(0X48, ctx->r7) = ctx->r2;
L_8023FC08:
    // 0x8023FC08: lh          $v0, 0x44($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X44);
    // 0x8023FC0C: lw          $v1, 0x1C($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X1C);
    // 0x8023FC10: lh          $a0, 0x46($a3)
    ctx->r4 = MEM_H(ctx->r7, 0X46);
    // 0x8023FC14: lw          $a1, 0x20($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X20);
    // 0x8023FC18: lhu         $a2, 0x18($a3)
    ctx->r6 = MEM_HU(ctx->r7, 0X18);
    // 0x8023FC1C: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8023FC20: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023FC24: lh          $v0, 0x48($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X48);
    // 0x8023FC28: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x8023FC2C: addu        $a1, $a1, $a0
    ctx->r5 = ADD32(ctx->r5, ctx->r4);
    // 0x8023FC30: sw          $v1, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->r3;
    // 0x8023FC34: lw          $v1, 0x24($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X24);
    // 0x8023FC38: lhu         $a0, 0x14($a3)
    ctx->r4 = MEM_HU(ctx->r7, 0X14);
    // 0x8023FC3C: sw          $a1, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->r5;
    // 0x8023FC40: lhu         $a1, 0x16($a3)
    ctx->r5 = MEM_HU(ctx->r7, 0X16);
    // 0x8023FC44: sh          $a2, 0x18($a3)
    MEM_H(0X18, ctx->r7) = ctx->r6;
    // 0x8023FC48: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8023FC4C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023FC50: sw          $v1, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->r3;
    // 0x8023FC54: sh          $a0, 0x14($a3)
    MEM_H(0X14, ctx->r7) = ctx->r4;
    // 0x8023FC58: jr          $ra
    // 0x8023FC5C: sh          $a1, 0x16($a3)
    MEM_H(0X16, ctx->r7) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x8023FC5C: sh          $a1, 0x16($a3)
    MEM_H(0X16, ctx->r7) = ctx->r5;
;}
RECOMP_FUNC void func_80239418_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239418: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023941C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80239420: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80239424: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80239428: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023942C: bne         $v0, $zero, L_80239448
    if (ctx->r2 != 0) {
        // 0x80239430: addiu       $a1, $zero, 0xD
        ctx->r5 = ADD32(0, 0XD);
            goto L_80239448;
    }
    // 0x80239430: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x80239434: jal         0x80050294
    // 0x80239438: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80239438: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8023943C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80239440: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80239444: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80239448:
    // 0x80239448: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023944C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80239450: jr          $ra
    // 0x80239454: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80239454: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80238C94_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238C94: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80238C98: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80238C9C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80238CA0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80238CA4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80238CA8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80238CAC: bne         $v0, $zero, L_80238CDC
    if (ctx->r2 != 0) {
        // 0x80238CB0: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_80238CDC;
    }
    // 0x80238CB0: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x80238CB4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80238CB8: jal         0x80050294
    // 0x80238CBC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80238CBC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80238CC0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238CC4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80238CC8: jal         0x80239590
    // 0x80238CCC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80239590_ovl5(rdram, ctx);
        goto after_1;
    // 0x80238CCC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x80238CD0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80238CD4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80238CD8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80238CDC:
    // 0x80238CDC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80238CE0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80238CE4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80238CE8: jr          $ra
    // 0x80238CEC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80238CEC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022F0A8_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F0A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F0AC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F0B0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F0B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022F0B8: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022F0BC: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x8022F0C0: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022F0C4: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022F0C8: jal         0x8004F820
    // 0x8022F0CC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022F0CC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x8022F0D0: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022F0D4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022F0D8: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022F0DC: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022F0E0: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022F0E4: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x8022F0E8: bne         $v0, $zero, L_8022F120
    if (ctx->r2 != 0) {
        // 0x8022F0EC: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_8022F120;
    }
    // 0x8022F0EC: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022F0F0: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022F0F4: lbu         $v1, 0x34B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022F0F8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022F0FC: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x8022F100: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x8022F104: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    // 0x8022F108: jal         0x8022F578
    // 0x8022F10C: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
    func_8022F578_ovl5(rdram, ctx);
        goto after_1;
    // 0x8022F10C: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
    after_1:
    // 0x8022F110: jal         0x80034E3C
    // 0x8022F114: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80034E3C_1023C(rdram, ctx);
        goto after_2;
    // 0x8022F114: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_2:
    // 0x8022F118: j           L_8022F13C
    // 0x8022F11C: nop

        goto L_8022F13C;
    // 0x8022F11C: nop

L_8022F120:
    // 0x8022F120: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022F124: lb          $v1, -0x3C18($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3C18);
    // 0x8022F128: bne         $v1, $v0, L_8022F13C
    if (ctx->r3 != ctx->r2) {
        // 0x8022F12C: nop
    
            goto L_8022F13C;
    }
    // 0x8022F12C: nop

    // 0x8022F130: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022F134: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022F138: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
L_8022F13C:
    // 0x8022F13C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022F140: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F144: jr          $ra
    // 0x8022F148: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F148: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023FCAC_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023FCAC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023FCB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023FCB4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023FCB8: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x8023FCBC: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
    // 0x8023FCC0: sb          $v0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r2;
    // 0x8023FCC4: addiu       $v0, $a0, 0x14
    ctx->r2 = ADD32(ctx->r4, 0X14);
    // 0x8023FCC8: addiu       $a0, $a1, 0x38
    ctx->r4 = ADD32(ctx->r5, 0X38);
    // 0x8023FCCC: sb          $zero, 0x3($a1)
    MEM_B(0X3, ctx->r5) = 0;
    // 0x8023FCD0: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8023FCD4: jal         0x8009A3B4
    // 0x8023FCD8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8023FCD8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8023FCDC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023FCE0: jr          $ra
    // 0x8023FCE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023FCE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8023FCE8: nop

    // 0x8023FCEC: nop

;}
RECOMP_FUNC void func_80237F54_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237F54: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80237F58: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80237F5C: jal         0x8005044C
    // 0x80237F60: nop

    func_8005044C_2B84C(rdram, ctx);
        goto after_0;
    // 0x80237F60: nop

    after_0:
    // 0x80237F64: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80237F68: jr          $ra
    // 0x80237F6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80237F6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022D37C_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D37C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022D380: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022D384: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022D388: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022D38C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D390: lbu         $s0, 0xE($s1)
    ctx->r16 = MEM_BU(ctx->r17, 0XE);
    // 0x8022D394: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    // 0x8022D398: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022D39C: addiu       $v0, $v0, 0x59FC
    ctx->r2 = ADD32(ctx->r2, 0X59FC);
    // 0x8022D3A0: andi        $s0, $s0, 0x3
    ctx->r16 = ctx->r16 & 0X3;
    // 0x8022D3A4: sll         $s0, $s0, 4
    ctx->r16 = S32(ctx->r16 << 4);
    // 0x8022D3A8: jal         0x8022F578
    // 0x8022D3AC: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    func_8022F578_ovl5(rdram, ctx);
        goto after_0;
    // 0x8022D3AC: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    after_0:
    // 0x8022D3B0: jal         0x800A3450
    // 0x8022D3B4: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x8022D3B4: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    after_1:
    // 0x8022D3B8: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022D3BC: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x8022D3C0: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x8022D3C4: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8022D3C8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022D3CC: sh          $v1, 0x350($s1)
    MEM_H(0X350, ctx->r17) = ctx->r3;
    // 0x8022D3D0: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x8022D3D4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022D3D8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022D3DC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D3E0: jr          $ra
    // 0x8022D3E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022D3E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80230EE4_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230EE4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80230EE8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80230EEC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80230EF0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80230EF4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80230EF8: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80230EFC: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80230F00: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x80230F04: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x80230F08: beq         $v0, $zero, L_80231018
    if (ctx->r2 == 0) {
        // 0x80230F0C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80231018;
    }
    // 0x80230F0C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80230F10: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80230F14: addu        $at, $at, $v0
    gpr jr_addend_80230F1C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80230F18: lw          $v0, 0x7210($at)
    ctx->r2 = ADD32(ctx->r1, 0X7210);
    // 0x80230F1C: jr          $v0
    // 0x80230F20: nop

    switch (jr_addend_80230F1C >> 2) {
        case 0: goto L_80230F24; break;
        case 1: goto L_80230F38; break;
        case 2: goto L_80230F54; break;
        case 3: goto L_80230FBC; break;
        case 4: goto L_80230FE8; break;
        default: switch_error(__func__, 0x80230F1C, 0x80247210);
    }
    // 0x80230F20: nop

L_80230F24:
    // 0x80230F24: jal         0x80231040
    // 0x80230F28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80231040_ovl5(rdram, ctx);
        goto after_0;
    // 0x80230F28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80230F2C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80230F30: j           L_80231014
    // 0x80230F34: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80231014;
    // 0x80230F34: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80230F38:
    // 0x80230F38: jal         0x802310F4
    // 0x80230F3C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802310F4_ovl5(rdram, ctx);
        goto after_1;
    // 0x80230F3C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80230F40: beq         $v0, $zero, L_8023101C
    if (ctx->r2 == 0) {
        // 0x80230F44: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023101C;
    }
    // 0x80230F44: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230F48: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80230F4C: j           L_80231014
    // 0x80230F50: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80231014;
    // 0x80230F50: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80230F54:
    // 0x80230F54: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80230F58: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x80230F5C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80230F60: jal         0x8004F820
    // 0x80230F64: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x80230F64: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_2:
    // 0x80230F68: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80230F6C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80230F70: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80230F74: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80230F78: bne         $v0, $zero, L_80231018
    if (ctx->r2 != 0) {
        // 0x80230F7C: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_80231018;
    }
    // 0x80230F7C: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80230F80: jal         0x8003516C
    // 0x80230F84: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_3;
    // 0x80230F84: nop

    after_3:
    // 0x80230F88: bne         $v0, $zero, L_8023101C
    if (ctx->r2 != 0) {
        // 0x80230F8C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023101C;
    }
    // 0x80230F8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230F90: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80230F94: jal         0x800616FC
    // 0x80230F98: addiu       $a1, $zero, 0x48
    ctx->r5 = ADD32(0, 0X48);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_4;
    // 0x80230F98: addiu       $a1, $zero, 0x48
    ctx->r5 = ADD32(0, 0X48);
    after_4:
    // 0x80230F9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230FA0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80230FA4: jal         0x80050294
    // 0x80230FA8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x80230FA8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x80230FAC: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80230FB0: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80230FB4: j           L_80231014
    // 0x80230FB8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80231014;
    // 0x80230FB8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80230FBC:
    // 0x80230FBC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80230FC0: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80230FC4: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80230FC8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80230FCC: bne         $v0, $zero, L_8023101C
    if (ctx->r2 != 0) {
        // 0x80230FD0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023101C;
    }
    // 0x80230FD0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230FD4: jal         0x80034E3C
    // 0x80230FD8: nop

    func_80034E3C_1023C(rdram, ctx);
        goto after_6;
    // 0x80230FD8: nop

    after_6:
    // 0x80230FDC: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80230FE0: j           L_80231014
    // 0x80230FE4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80231014;
    // 0x80230FE4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80230FE8:
    // 0x80230FE8: jal         0x8003516C
    // 0x80230FEC: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_7;
    // 0x80230FEC: nop

    after_7:
    // 0x80230FF0: bne         $v0, $zero, L_8023101C
    if (ctx->r2 != 0) {
        // 0x80230FF4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023101C;
    }
    // 0x80230FF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230FF8: lbu         $v0, 0xBD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XBD);
    // 0x80230FFC: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x80231000: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x80231004: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80231008: sb          $v0, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r2;
    // 0x8023100C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231010: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
L_80231014:
    // 0x80231014: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80231018:
    // 0x80231018: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8023101C:
    // 0x8023101C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80231020: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x80231024: jal         0x80047284
    // 0x80231028: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_8;
    // 0x80231028: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_8:
    // 0x8023102C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80231030: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80231034: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231038: jr          $ra
    // 0x8023103C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023103C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023D110_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023D110: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023D114: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023D118: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8023D11C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023D120: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023D124: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023D128: lw          $v0, 0x6640($at)
    ctx->r2 = MEM_W(ctx->r1, 0X6640);
    // 0x8023D12C: jalr        $v0
    // 0x8023D130: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8023D130: nop

    after_0:
    // 0x8023D134: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023D138: jr          $ra
    // 0x8023D13C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023D13C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802255CC_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802255CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802255D0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802255D4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802255D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802255DC: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802255E0: bne         $v0, $zero, L_80225634
    if (ctx->r2 != 0) {
        // 0x802255E4: nop
    
            goto L_80225634;
    }
    // 0x802255E4: nop

    // 0x802255E8: jal         0x8006033C
    // 0x802255EC: addiu       $a0, $zero, 0x2C
    ctx->r4 = ADD32(0, 0X2C);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x802255EC: addiu       $a0, $zero, 0x2C
    ctx->r4 = ADD32(0, 0X2C);
    after_0:
    // 0x802255F0: bne         $v0, $zero, L_80225630
    if (ctx->r2 != 0) {
        // 0x802255F4: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_80225630;
    }
    // 0x802255F4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802255F8: jal         0x8006033C
    // 0x802255FC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x802255FC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_1:
    // 0x80225600: beq         $v0, $zero, L_8022561C
    if (ctx->r2 == 0) {
        // 0x80225604: nop
    
            goto L_8022561C;
    }
    // 0x80225604: nop

    // 0x80225608: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8022560C: jal         0x80225CEC
    // 0x80225610: addiu       $a0, $a0, 0x3180
    ctx->r4 = ADD32(ctx->r4, 0X3180);
    func_80225CEC_ovl5(rdram, ctx);
        goto after_2;
    // 0x80225610: addiu       $a0, $a0, 0x3180
    ctx->r4 = ADD32(ctx->r4, 0X3180);
    after_2:
    // 0x80225614: j           L_80225630
    // 0x80225618: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
        goto L_80225630;
    // 0x80225618: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_8022561C:
    // 0x8022561C: jal         0x8006036C
    // 0x80225620: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_8006036C_3B76C(rdram, ctx);
        goto after_3;
    // 0x80225620: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_3:
    // 0x80225624: jal         0x80060690
    // 0x80225628: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    func_80060690_3BA90(rdram, ctx);
        goto after_4;
    // 0x80225628: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_4:
    // 0x8022562C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_80225630:
    // 0x80225630: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225634:
    // 0x80225634: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225638: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022563C: jr          $ra
    // 0x80225640: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225640: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022F578_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F578: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    // 0x8022F57C: xori        $v0, $v0, 0x11
    ctx->r2 = ctx->r2 ^ 0X11;
    // 0x8022F580: jr          $ra
    // 0x8022F584: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    TRACE_RETURN()
    return;
    // 0x8022F584: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
;}
RECOMP_FUNC void func_80233FD0_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233FD0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80233FD4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80233FD8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80233FDC: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80233FE0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80233FE4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80233FE8: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x80233FEC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80233FF0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80233FF4: jal         0x8009A3B4
    // 0x80233FF8: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80233FF8: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    after_0:
    // 0x80233FFC: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80234000: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80234004: jal         0x8009A3B4
    // 0x80234008: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80234008: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8023400C: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80234010: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80234014: jal         0x8009A3B4
    // 0x80234018: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80234018: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8023401C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80234020: jal         0x800A3450
    // 0x80234024: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80234024: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    after_3:
    // 0x80234028: lw          $a0, 0x80($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X80);
    // 0x8023402C: jal         0x80032424
    // 0x80234030: sh          $v0, 0x32E($s0)
    MEM_H(0X32E, ctx->r16) = ctx->r2;
    func_80032424_D824(rdram, ctx);
        goto after_4;
    // 0x80234030: sh          $v0, 0x32E($s0)
    MEM_H(0X32E, ctx->r16) = ctx->r2;
    after_4:
    // 0x80234034: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80234038: sw          $v0, 0x360($s0)
    MEM_W(0X360, ctx->r16) = ctx->r2;
    // 0x8023403C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80234040: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80234044: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80234048: lw          $v0, 0x5E6C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X5E6C);
    // 0x8023404C: jalr        $v0
    // 0x80234050: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x80234050: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80234054: lbu         $v1, 0xAD($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XAD);
    // 0x80234058: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8023405C: beq         $v1, $a1, L_80234070
    if (ctx->r3 == ctx->r5) {
        // 0x80234060: addiu       $s1, $s0, 0x328
        ctx->r17 = ADD32(ctx->r16, 0X328);
            goto L_80234070;
    }
    // 0x80234060: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x80234064: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234068: j           L_80234098
    // 0x8023406C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
        goto L_80234098;
    // 0x8023406C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_80234070:
    // 0x80234070: lhu         $v0, 0x32C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X32C);
    // 0x80234074: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x80234078: beq         $v0, $zero, L_80234090
    if (ctx->r2 == 0) {
        // 0x8023407C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80234090;
    }
    // 0x8023407C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234080: jal         0x8005044C
    // 0x80234084: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_6;
    // 0x80234084: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x80234088: j           L_802340A0
    // 0x8023408C: nop

        goto L_802340A0;
    // 0x8023408C: nop

L_80234090:
    // 0x80234090: lbu         $a2, 0xA4($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0XA4);
    // 0x80234094: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
L_80234098:
    // 0x80234098: jal         0x80050294
    // 0x8023409C: nop

    func_80050294_2B694(rdram, ctx);
        goto after_7;
    // 0x8023409C: nop

    after_7:
L_802340A0:
    // 0x802340A0: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x802340A4: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x802340A8: beq         $v0, $zero, L_802340BC
    if (ctx->r2 == 0) {
        // 0x802340AC: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_802340BC;
    }
    // 0x802340AC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802340B0: jal         0x80234F1C
    // 0x802340B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80234F1C_ovl5(rdram, ctx);
        goto after_8;
    // 0x802340B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
    // 0x802340B8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_802340BC:
    // 0x802340BC: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x802340C0: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x802340C4: jal         0x8003B6B8
    // 0x802340C8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B6B8_16AB8(rdram, ctx);
        goto after_9;
    // 0x802340C8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_9:
    // 0x802340CC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802340D0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802340D4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802340D8: jr          $ra
    // 0x802340DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802340DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023CCFC_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023CCFC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023CD00: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023CD04: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023CD08: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8023CD0C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8023CD10: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023CD14: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x8023CD18: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8023CD1C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023CD20: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023CD24: lh          $v0, 0x65C0($at)
    ctx->r2 = MEM_H(ctx->r1, 0X65C0);
    // 0x8023CD28: blez        $v0, L_8023CD98
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8023CD2C: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_8023CD98;
    }
    // 0x8023CD2C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x8023CD30: lui         $s2, 0x8021
    ctx->r18 = S32(0X8021 << 16);
    // 0x8023CD34: addiu       $s2, $s2, -0x2100
    ctx->r18 = ADD32(ctx->r18, -0X2100);
    // 0x8023CD38: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
L_8023CD3C:
    // 0x8023CD3C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023CD40: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023CD44: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023CD48: lbu         $v0, 0x75A0($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X75A0);
    // 0x8023CD4C: sll         $a0, $v0, 3
    ctx->r4 = S32(ctx->r2 << 3);
    // 0x8023CD50: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8023CD54: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x8023CD58: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x8023CD5C: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x8023CD60: jal         0x8023CDB0
    // 0x8023CD64: addu        $a0, $a0, $s2
    ctx->r4 = ADD32(ctx->r4, ctx->r18);
    func_8023CDB0_ovl5(rdram, ctx);
        goto after_0;
    // 0x8023CD64: addu        $a0, $a0, $s2
    ctx->r4 = ADD32(ctx->r4, ctx->r18);
    after_0:
    // 0x8023CD68: lbu         $v1, 0x3($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X3);
    // 0x8023CD6C: addiu       $v0, $s0, 0x1
    ctx->r2 = ADD32(ctx->r16, 0X1);
    // 0x8023CD70: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8023CD74: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8023CD78: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023CD7C: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8023CD80: lh          $v1, 0x65C0($at)
    ctx->r3 = MEM_H(ctx->r1, 0X65C0);
    // 0x8023CD84: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023CD88: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023CD8C: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8023CD90: bne         $v0, $zero, L_8023CD3C
    if (ctx->r2 != 0) {
        // 0x8023CD94: sll         $v0, $s0, 16
        ctx->r2 = S32(ctx->r16 << 16);
            goto L_8023CD3C;
    }
    // 0x8023CD94: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
L_8023CD98:
    // 0x8023CD98: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8023CD9C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8023CDA0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023CDA4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023CDA8: jr          $ra
    // 0x8023CDAC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023CDAC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80225DBC_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225DBC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225DC0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225DC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225DC8: jal         0x8004EEAC
    // 0x80225DCC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8004EEAC_2A2AC(rdram, ctx);
        goto after_0;
    // 0x80225DCC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x80225DD0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80225DD4: beq         $v1, $zero, L_80225E3C
    if (ctx->r3 == 0) {
        // 0x80225DD8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80225E3C;
    }
    // 0x80225DD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225DDC: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80225DE0: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x80225DE4: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x80225DE8: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80225DEC: sb          $v0, 0x4($v1)
    MEM_B(0X4, ctx->r3) = ctx->r2;
    // 0x80225DF0: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225DF4: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    // 0x80225DF8: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x80225DFC: sw          $v0, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r2;
    // 0x80225E00: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x80225E04: sw          $v0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r2;
    // 0x80225E08: lhu         $v0, 0x10($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X10);
    // 0x80225E0C: sh          $v0, 0x18($v1)
    MEM_H(0X18, ctx->r3) = ctx->r2;
    // 0x80225E10: lhu         $v0, 0x12($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X12);
    // 0x80225E14: sh          $v0, 0x56($v1)
    MEM_H(0X56, ctx->r3) = ctx->r2;
    // 0x80225E18: lh          $v0, 0xC($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XC);
    // 0x80225E1C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80225E20: sw          $v0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r2;
    // 0x80225E24: lh          $v0, 0xE($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XE);
    // 0x80225E28: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80225E2C: sw          $v0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r2;
    // 0x80225E30: lh          $v0, 0x10($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X10);
    // 0x80225E34: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80225E38: sw          $v0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r2;
L_80225E3C:
    // 0x80225E3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225E40: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225E44: jr          $ra
    // 0x80225E48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225E48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802272F0_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802272F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802272F4: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x802272F8: addiu       $v1, $v1, -0xCBE
    ctx->r3 = ADD32(ctx->r3, -0XCBE);
    // 0x802272FC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80227300: sh          $zero, 0x0($v1)
    MEM_H(0X0, ctx->r3) = 0;
    // 0x80227304: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80227308: slti        $v0, $v0, 0x131
    ctx->r2 = SIGNED(ctx->r2) < 0X131 ? 1 : 0;
    // 0x8022730C: bne         $v0, $zero, L_80227320
    if (ctx->r2 != 0) {
        // 0x80227310: nop
    
            goto L_80227320;
    }
    // 0x80227310: nop

    // 0x80227314: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80227318: lhu         $v0, 0x4AD4($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4AD4);
    // 0x8022731C: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
L_80227320:
    // 0x80227320: jal         0x8005FB90
    // 0x80227324: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_0;
    // 0x80227324: nop

    after_0:
    // 0x80227328: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022732C: jr          $ra
    // 0x80227330: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227330: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80236E00_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236E00: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80236E04: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80236E08: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80236E0C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80236E10: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80236E14: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80236E18: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x80236E1C: beq         $v0, $zero, L_80236FF4
    if (ctx->r2 == 0) {
        // 0x80236E20: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80236FF4;
    }
    // 0x80236E20: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80236E24: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80236E28: addu        $at, $at, $v0
    gpr jr_addend_80236E30 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80236E2C: lw          $v0, 0x7320($at)
    ctx->r2 = ADD32(ctx->r1, 0X7320);
    // 0x80236E30: jr          $v0
    // 0x80236E34: nop

    switch (jr_addend_80236E30 >> 2) {
        case 0: goto L_80236E38; break;
        case 1: goto L_80236E70; break;
        case 2: goto L_80236EA8; break;
        case 3: goto L_80236F14; break;
        case 4: goto L_80236F94; break;
        default: switch_error(__func__, 0x80236E30, 0x80247320);
    }
    // 0x80236E34: nop

L_80236E38:
    // 0x80236E38: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80236E3C: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80236E40: bne         $v0, $zero, L_80236FF8
    if (ctx->r2 != 0) {
        // 0x80236E44: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80236FF8;
    }
    // 0x80236E44: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236E48: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80236E4C: jal         0x800616FC
    // 0x80236E50: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_0;
    // 0x80236E50: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    after_0:
    // 0x80236E54: addiu       $a0, $zero, 0x16F
    ctx->r4 = ADD32(0, 0X16F);
    // 0x80236E58: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80236E5C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80236E60: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80236E64: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80236E68: j           L_80236FEC
    // 0x80236E6C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80236FEC;
    // 0x80236E6C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80236E70:
    // 0x80236E70: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80236E74: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80236E78: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80236E7C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80236E80: bne         $v0, $zero, L_80236FF8
    if (ctx->r2 != 0) {
        // 0x80236E84: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80236FF8;
    }
    // 0x80236E84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236E88: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80236E8C: addiu       $v1, $zero, 0x200
    ctx->r3 = ADD32(0, 0X200);
    // 0x80236E90: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    // 0x80236E94: addiu       $v1, $zero, -0x60
    ctx->r3 = ADD32(0, -0X60);
    // 0x80236E98: sb          $v1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r3;
    // 0x80236E9C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80236EA0: j           L_80236FF8
    // 0x80236EA4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80236FF8;
    // 0x80236EA4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80236EA8:
    // 0x80236EA8: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x80236EAC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80236EB0: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x80236EB4: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80236EB8: bne         $v0, $zero, L_80236EE0
    if (ctx->r2 != 0) {
        // 0x80236EBC: nop
    
            goto L_80236EE0;
    }
    // 0x80236EBC: nop

    // 0x80236EC0: jal         0x800600F8
    // 0x80236EC4: nop

    func_800600F8_3B4F8(rdram, ctx);
        goto after_1;
    // 0x80236EC4: nop

    after_1:
    // 0x80236EC8: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80236ECC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80236ED0: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x80236ED4: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x80236ED8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80236EDC: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
L_80236EE0:
    // 0x80236EE0: lb          $v0, 0xA6($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA6);
    // 0x80236EE4: beq         $v0, $zero, L_80236F14
    if (ctx->r2 == 0) {
        // 0x80236EE8: addiu       $a0, $zero, 0x112
        ctx->r4 = ADD32(0, 0X112);
            goto L_80236F14;
    }
    // 0x80236EE8: addiu       $a0, $zero, 0x112
    ctx->r4 = ADD32(0, 0X112);
    // 0x80236EEC: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x80236EF0: jal         0x8002A33C
    // 0x80236EF4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x80236EF4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
    // 0x80236EF8: jal         0x800A3450
    // 0x80236EFC: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80236EFC: nop

    after_3:
    // 0x80236F00: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80236F04: bne         $v0, $zero, L_80236F14
    if (ctx->r2 != 0) {
        // 0x80236F08: addiu       $a0, $zero, 0x171
        ctx->r4 = ADD32(0, 0X171);
            goto L_80236F14;
    }
    // 0x80236F08: addiu       $a0, $zero, 0x171
    ctx->r4 = ADD32(0, 0X171);
    // 0x80236F0C: jal         0x8002A33C
    // 0x80236F10: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_4;
    // 0x80236F10: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_4:
L_80236F14:
    // 0x80236F14: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80236F18: lbu         $v1, -0x3A47($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3A47);
    // 0x80236F1C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80236F20: bne         $v1, $v0, L_80236FF8
    if (ctx->r3 != ctx->r2) {
        // 0x80236F24: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80236FF8;
    }
    // 0x80236F24: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236F28: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80236F2C: jal         0x800616FC
    // 0x80236F30: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_5;
    // 0x80236F30: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    after_5:
    // 0x80236F34: addiu       $v0, $zero, 0x1EA
    ctx->r2 = ADD32(0, 0X1EA);
    // 0x80236F38: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x80236F3C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80236F40: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80236F44: addiu       $v0, $zero, -0x1371
    ctx->r2 = ADD32(0, -0X1371);
    // 0x80236F48: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x80236F4C: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
    // 0x80236F50: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80236F54: addiu       $v0, $zero, -0x22
    ctx->r2 = ADD32(0, -0X22);
    // 0x80236F58: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x80236F5C: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x80236F60: lbu         $a1, 0x9($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X9);
    // 0x80236F64: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x80236F68: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x80236F6C: sh          $zero, 0x56($s0)
    MEM_H(0X56, ctx->r16) = 0;
    // 0x80236F70: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80236F74: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80236F78: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80236F7C: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80236F80: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80236F84: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80236F88: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x80236F8C: j           L_80236FF4
    // 0x80236F90: sb          $a1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r5;
        goto L_80236FF4;
    // 0x80236F90: sb          $a1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r5;
L_80236F94:
    // 0x80236F94: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x80236F98: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80236F9C: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x80236FA0: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80236FA4: bne         $v0, $zero, L_80236FB4
    if (ctx->r2 != 0) {
        // 0x80236FA8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80236FB4;
    }
    // 0x80236FA8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80236FAC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80236FB0: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_80236FB4:
    // 0x80236FB4: lb          $v0, 0xA6($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA6);
    // 0x80236FB8: beq         $v0, $zero, L_80236FF4
    if (ctx->r2 == 0) {
        // 0x80236FBC: addiu       $a0, $zero, 0x112
        ctx->r4 = ADD32(0, 0X112);
            goto L_80236FF4;
    }
    // 0x80236FBC: addiu       $a0, $zero, 0x112
    ctx->r4 = ADD32(0, 0X112);
    // 0x80236FC0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80236FC4: jal         0x8002A2F8
    // 0x80236FC8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_6;
    // 0x80236FC8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_6:
    // 0x80236FCC: jal         0x800A3450
    // 0x80236FD0: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_7;
    // 0x80236FD0: nop

    after_7:
    // 0x80236FD4: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80236FD8: bne         $v0, $zero, L_80236FF8
    if (ctx->r2 != 0) {
        // 0x80236FDC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80236FF8;
    }
    // 0x80236FDC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236FE0: addiu       $a0, $zero, 0x171
    ctx->r4 = ADD32(0, 0X171);
    // 0x80236FE4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80236FE8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_80236FEC:
    // 0x80236FEC: jal         0x8002A2F8
    // 0x80236FF0: nop

    func_8002A2F8_56F8(rdram, ctx);
        goto after_8;
    // 0x80236FF0: nop

    after_8:
L_80236FF4:
    // 0x80236FF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80236FF8:
    // 0x80236FF8: lh          $a1, 0x44($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X44);
    // 0x80236FFC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80237000: jal         0x8004DA90
    // 0x80237004: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_9;
    // 0x80237004: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_9:
    // 0x80237008: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023700C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80237010: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80237014: jr          $ra
    // 0x80237018: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80237018: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80238730_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238730: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80238734: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80238738: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023873C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80238740: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80238744: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80238748: jal         0x8009A3B4
    // 0x8023874C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8023874C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80238750: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80238754: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80238758: jal         0x8009A3B4
    // 0x8023875C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8023875C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80238760: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80238764: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80238768: jal         0x8009A3B4
    // 0x8023876C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8023876C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80238770: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80238774: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80238778: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023877C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80238780: lw          $v0, 0x6120($at)
    ctx->r2 = MEM_W(ctx->r1, 0X6120);
    // 0x80238784: jalr        $v0
    // 0x80238788: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x80238788: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8023878C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80238790: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80238794: beq         $v0, $zero, L_802387AC
    if (ctx->r2 == 0) {
        // 0x80238798: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802387AC;
    }
    // 0x80238798: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023879C: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x802387A0: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x802387A4: jal         0x8003B564
    // 0x802387A8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_4;
    // 0x802387A8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_4:
L_802387AC:
    // 0x802387AC: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x802387B0: beq         $v0, $zero, L_802387C8
    if (ctx->r2 == 0) {
        // 0x802387B4: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_802387C8;
    }
    // 0x802387B4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802387B8: jal         0x8005044C
    // 0x802387BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_5;
    // 0x802387BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x802387C0: j           L_802387CC
    // 0x802387C4: nop

        goto L_802387CC;
    // 0x802387C4: nop

L_802387C8:
    // 0x802387C8: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_802387CC:
    // 0x802387CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802387D0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802387D4: jr          $ra
    // 0x802387D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802387D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80239350_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239350: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80239354: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80239358: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023935C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80239360: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80239364: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80239368: bne         $v0, $zero, L_802393C0
    if (ctx->r2 != 0) {
        // 0x8023936C: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_802393C0;
    }
    // 0x8023936C: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x80239370: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x80239374: jal         0x80050294
    // 0x80239378: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80239378: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8023937C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239380: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80239384: addiu       $a2, $zero, 0x17
    ctx->r6 = ADD32(0, 0X17);
    // 0x80239388: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x8023938C: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x80239390: addiu       $v0, $zero, -0x46
    ctx->r2 = ADD32(0, -0X46);
    // 0x80239394: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80239398: sh          $zero, 0x56($s0)
    MEM_H(0X56, ctx->r16) = 0;
    // 0x8023939C: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x802393A0: sh          $zero, 0x16($s0)
    MEM_H(0X16, ctx->r16) = 0;
    // 0x802393A4: jal         0x80239590
    // 0x802393A8: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    func_80239590_ovl5(rdram, ctx);
        goto after_1;
    // 0x802393A8: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    after_1:
    // 0x802393AC: jal         0x8005044C
    // 0x802393B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_2;
    // 0x802393B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x802393B4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802393B8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802393BC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802393C0:
    // 0x802393C0: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x802393C4: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x802393C8: addiu       $v0, $zero, 0x8E
    ctx->r2 = ADD32(0, 0X8E);
    // 0x802393CC: bne         $v1, $v0, L_802393F0
    if (ctx->r3 != ctx->r2) {
        // 0x802393D0: addiu       $v0, $zero, 0xA5
        ctx->r2 = ADD32(0, 0XA5);
            goto L_802393F0;
    }
    // 0x802393D0: addiu       $v0, $zero, 0xA5
    ctx->r2 = ADD32(0, 0XA5);
    // 0x802393D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802393D8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802393DC: jal         0x80239590
    // 0x802393E0: addiu       $a2, $zero, 0x1A
    ctx->r6 = ADD32(0, 0X1A);
    func_80239590_ovl5(rdram, ctx);
        goto after_3;
    // 0x802393E0: addiu       $a2, $zero, 0x1A
    ctx->r6 = ADD32(0, 0X1A);
    after_3:
    // 0x802393E4: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x802393E8: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x802393EC: addiu       $v0, $zero, 0xA5
    ctx->r2 = ADD32(0, 0XA5);
L_802393F0:
    // 0x802393F0: bne         $v1, $v0, L_80239404
    if (ctx->r3 != ctx->r2) {
        // 0x802393F4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80239404;
    }
    // 0x802393F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802393F8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802393FC: jal         0x80239590
    // 0x80239400: addiu       $a2, $zero, 0x17
    ctx->r6 = ADD32(0, 0X17);
    func_80239590_ovl5(rdram, ctx);
        goto after_4;
    // 0x80239400: addiu       $a2, $zero, 0x17
    ctx->r6 = ADD32(0, 0X17);
    after_4:
L_80239404:
    // 0x80239404: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80239408: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023940C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80239410: jr          $ra
    // 0x80239414: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80239414: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023FFB4_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023FFB4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8023FFB8: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8023FFBC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023FFC0: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8023FFC4: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x8023FFC8: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x8023FFCC: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x8023FFD0: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x8023FFD4: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8023FFD8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8023FFDC: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x8023FFE0: beq         $v1, $zero, L_8023FFFC
    if (ctx->r3 == 0) {
        // 0x8023FFE4: addiu       $s3, $s1, 0xC0
        ctx->r19 = ADD32(ctx->r17, 0XC0);
            goto L_8023FFFC;
    }
    // 0x8023FFE4: addiu       $s3, $s1, 0xC0
    ctx->r19 = ADD32(ctx->r17, 0XC0);
    // 0x8023FFE8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023FFEC: beq         $v1, $v0, L_80240058
    if (ctx->r3 == ctx->r2) {
        // 0x8023FFF0: nop
    
            goto L_80240058;
    }
    // 0x8023FFF0: nop

    // 0x8023FFF4: j           L_80240230
    // 0x8023FFF8: nop

        goto L_80240230;
    // 0x8023FFF8: nop

L_8023FFFC:
    // 0x8023FFFC: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x80240000: lbu         $a0, 0xF($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0XF);
    // 0x80240004: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80240008: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x8024000C: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x80240010: sh          $v0, 0xC4($s1)
    MEM_H(0XC4, ctx->r17) = ctx->r2;
    // 0x80240014: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80240018: andi        $a0, $a0, 0x40
    ctx->r4 = ctx->r4 & 0X40;
    // 0x8024001C: beq         $a0, $zero, L_80240030
    if (ctx->r4 == 0) {
        // 0x80240020: sb          $v1, 0x0($s1)
        MEM_B(0X0, ctx->r17) = ctx->r3;
            goto L_80240030;
    }
    // 0x80240020: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
    // 0x80240024: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80240028: j           L_8024003C
    // 0x8024002C: sh          $zero, 0x44($s1)
    MEM_H(0X44, ctx->r17) = 0;
        goto L_8024003C;
    // 0x8024002C: sh          $zero, 0x44($s1)
    MEM_H(0X44, ctx->r17) = 0;
L_80240030:
    // 0x80240030: addiu       $v0, $zero, 0x240
    ctx->r2 = ADD32(0, 0X240);
    // 0x80240034: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x80240038: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_8024003C:
    // 0x8024003C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80240040: sb          $v0, 0x7630($at)
    MEM_B(0X7630, ctx->r1) = ctx->r2;
    // 0x80240044: addiu       $v0, $zero, 0x16
    ctx->r2 = ADD32(0, 0X16);
    // 0x80240048: sh          $v0, 0x4C($s1)
    MEM_H(0X4C, ctx->r17) = ctx->r2;
    // 0x8024004C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80240050: sh          $zero, 0x48($s1)
    MEM_H(0X48, ctx->r17) = 0;
    // 0x80240054: sh          $v0, 0x8($s3)
    MEM_H(0X8, ctx->r19) = ctx->r2;
L_80240058:
    // 0x80240058: lbu         $v0, 0xF($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XF);
    // 0x8024005C: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x80240060: beq         $v0, $zero, L_8024007C
    if (ctx->r2 == 0) {
        // 0x80240064: nop
    
            goto L_8024007C;
    }
    // 0x80240064: nop

    // 0x80240068: lh          $v0, 0x8($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X8);
    // 0x8024006C: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80240070: addiu       $v1, $v1, 0x6CF0
    ctx->r3 = ADD32(ctx->r3, 0X6CF0);
    // 0x80240074: j           L_8024008C
    // 0x80240078: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
        goto L_8024008C;
    // 0x80240078: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
L_8024007C:
    // 0x8024007C: lh          $v0, 0x8($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X8);
    // 0x80240080: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80240084: addiu       $v1, $v1, 0x6CC0
    ctx->r3 = ADD32(ctx->r3, 0X6CC0);
    // 0x80240088: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
L_8024008C:
    // 0x8024008C: addu        $s0, $v0, $v1
    ctx->r16 = ADD32(ctx->r2, ctx->r3);
    // 0x80240090: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x80240094: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x80240098: addiu       $a1, $a1, 0x7620
    ctx->r5 = ADD32(ctx->r5, 0X7620);
    // 0x8024009C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802400A0: sh          $zero, 0x7622($at)
    MEM_H(0X7622, ctx->r1) = 0;
    // 0x802400A4: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
    // 0x802400A8: lhu         $v0, 0x2($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2);
    // 0x802400AC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802400B0: sh          $v0, 0x7624($at)
    MEM_H(0X7624, ctx->r1) = ctx->r2;
    // 0x802400B4: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x802400B8: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x802400BC: jal         0x8004F820
    // 0x802400C0: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x802400C0: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_0:
    // 0x802400C4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802400C8: lh          $a1, 0x44($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X44);
    // 0x802400CC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802400D0: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x802400D4: sh          $v1, 0x48($s1)
    MEM_H(0X48, ctx->r17) = ctx->r3;
    // 0x802400D8: lh          $a3, 0x48($s1)
    ctx->r7 = MEM_H(ctx->r17, 0X48);
    // 0x802400DC: lhu         $t0, 0x56($s1)
    ctx->r8 = MEM_HU(ctx->r17, 0X56);
    // 0x802400E0: sll         $v1, $v0, 19
    ctx->r3 = S32(ctx->r2 << 19);
    // 0x802400E4: srl         $v1, $v1, 20
    ctx->r3 = S32(U32(ctx->r3) >> 20);
    // 0x802400E8: sh          $v1, 0x58($s1)
    MEM_H(0X58, ctx->r17) = ctx->r3;
    // 0x802400EC: addu        $t0, $t0, $v0
    ctx->r8 = ADD32(ctx->r8, ctx->r2);
    // 0x802400F0: andi        $t0, $t0, 0xFFF
    ctx->r8 = ctx->r8 & 0XFFF;
    // 0x802400F4: jal         0x8004DA90
    // 0x802400F8: sh          $t0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r8;
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x802400F8: sh          $t0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r8;
    after_1:
    // 0x802400FC: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x80240100: lh          $a0, 0x14($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X14);
    // 0x80240104: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
    // 0x80240108: lh          $a1, 0x18($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X18);
    // 0x8024010C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80240110: sra         $a2, $v0, 16
    ctx->r6 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80240114: sra         $v0, $v0, 17
    ctx->r2 = S32(SIGNED(ctx->r2) >> 17);
    // 0x80240118: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8024011C: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x80240120: lhu         $v0, 0x6($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6);
    // 0x80240124: lh          $v1, 0x2($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2);
    // 0x80240128: sltu        $a0, $a0, $a2
    ctx->r4 = ctx->r4 < ctx->r6 ? 1 : 0;
    // 0x8024012C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80240130: sra         $a3, $v0, 16
    ctx->r7 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80240134: sra         $v0, $v0, 17
    ctx->r2 = S32(SIGNED(ctx->r2) >> 17);
    // 0x80240138: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8024013C: beq         $a0, $zero, L_80240190
    if (ctx->r4 == 0) {
        // 0x80240140: subu        $v0, $a1, $v1
        ctx->r2 = SUB32(ctx->r5, ctx->r3);
            goto L_80240190;
    }
    // 0x80240140: subu        $v0, $a1, $v1
    ctx->r2 = SUB32(ctx->r5, ctx->r3);
    // 0x80240144: sltu        $v0, $v0, $a3
    ctx->r2 = ctx->r2 < ctx->r7 ? 1 : 0;
    // 0x80240148: beq         $v0, $zero, L_80240190
    if (ctx->r2 == 0) {
        // 0x8024014C: nop
    
            goto L_80240190;
    }
    // 0x8024014C: nop

    // 0x80240150: lh          $v1, 0x8($s3)
    ctx->r3 = MEM_H(ctx->r19, 0X8);
    // 0x80240154: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80240158: lbu         $v0, 0x7630($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X7630);
    // 0x8024015C: bne         $v1, $v0, L_80240184
    if (ctx->r3 != ctx->r2) {
        // 0x80240160: nop
    
            goto L_80240184;
    }
    // 0x80240160: nop

    // 0x80240164: lhu         $v0, 0x0($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X0);
    // 0x80240168: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8024016C: sh          $v0, 0x0($s3)
    MEM_H(0X0, ctx->r19) = ctx->r2;
    // 0x80240170: sh          $zero, 0x44($s1)
    MEM_H(0X44, ctx->r17) = 0;
    // 0x80240174: sh          $zero, 0x46($s1)
    MEM_H(0X46, ctx->r17) = 0;
    // 0x80240178: sh          $zero, 0x48($s1)
    MEM_H(0X48, ctx->r17) = 0;
    // 0x8024017C: sh          $zero, 0x54($s1)
    MEM_H(0X54, ctx->r17) = 0;
    // 0x80240180: sh          $zero, 0x58($s1)
    MEM_H(0X58, ctx->r17) = 0;
L_80240184:
    // 0x80240184: lhu         $v0, 0x8($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X8);
    // 0x80240188: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024018C: sh          $v0, 0x8($s3)
    MEM_H(0X8, ctx->r19) = ctx->r2;
L_80240190:
    // 0x80240190: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x80240194: addiu       $a1, $a1, 0x7620
    ctx->r5 = ADD32(ctx->r5, 0X7620);
    // 0x80240198: lhu         $a0, 0x0($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X0);
    // 0x8024019C: lhu         $v0, 0x14($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X14);
    // 0x802401A0: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x802401A4: sll         $v1, $a0, 16
    ctx->r3 = S32(ctx->r4 << 16);
    // 0x802401A8: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x802401AC: mult        $v1, $v1
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802401B0: mflo        $v1
    ctx->r3 = lo;
    // 0x802401B4: sh          $a0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r4;
    // 0x802401B8: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x802401BC: lhu         $a0, 0x7624($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X7624);
    // 0x802401C0: lhu         $v0, 0x18($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X18);
    // 0x802401C4: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x802401C8: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x802401CC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802401D0: mult        $v0, $v0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802401D4: mflo        $v0
    ctx->r2 = lo;
    // 0x802401D8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802401DC: sh          $a0, 0x7624($at)
    MEM_H(0X7624, ctx->r1) = ctx->r4;
    // 0x802401E0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802401E4: slti        $v1, $v1, 0x4001
    ctx->r3 = SIGNED(ctx->r3) < 0X4001 ? 1 : 0;
    // 0x802401E8: bne         $v1, $zero, L_80240210
    if (ctx->r3 != 0) {
        // 0x802401EC: nop
    
            goto L_80240210;
    }
    // 0x802401EC: nop

    // 0x802401F0: lh          $v0, 0x44($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X44);
    // 0x802401F4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802401F8: slti        $v0, $v0, 0x320
    ctx->r2 = SIGNED(ctx->r2) < 0X320 ? 1 : 0;
    // 0x802401FC: beq         $v0, $zero, L_80240230
    if (ctx->r2 == 0) {
        // 0x80240200: nop
    
            goto L_80240230;
    }
    // 0x80240200: nop

    // 0x80240204: lhu         $v0, 0x4C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4C);
    // 0x80240208: j           L_8024022C
    // 0x8024020C: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
        goto L_8024022C;
    // 0x8024020C: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
L_80240210:
    // 0x80240210: lh          $v0, 0x44($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X44);
    // 0x80240214: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80240218: slti        $v0, $v0, 0x161
    ctx->r2 = SIGNED(ctx->r2) < 0X161 ? 1 : 0;
    // 0x8024021C: bne         $v0, $zero, L_80240230
    if (ctx->r2 != 0) {
        // 0x80240220: nop
    
            goto L_80240230;
    }
    // 0x80240220: nop

    // 0x80240224: lhu         $v0, 0x4C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4C);
    // 0x80240228: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
L_8024022C:
    // 0x8024022C: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
L_80240230:
    // 0x80240230: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80240234: lhu         $v0, -0x730C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X730C);
    // 0x80240238: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8024023C: bne         $v0, $zero, L_80240324
    if (ctx->r2 != 0) {
        // 0x80240240: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_80240324;
    }
    // 0x80240240: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x80240244: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
    // 0x80240248: lui         $s4, 0x8024
    ctx->r20 = S32(0X8024 << 16);
    // 0x8024024C: addiu       $s4, $s4, 0x7628
    ctx->r20 = ADD32(ctx->r20, 0X7628);
    // 0x80240250: lui         $s5, 0x8024
    ctx->r21 = S32(0X8024 << 16);
    // 0x80240254: addiu       $s5, $s5, 0x7610
    ctx->r21 = ADD32(ctx->r21, 0X7610);
L_80240258:
    // 0x80240258: jal         0x8004F144
    // 0x8024025C: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_2;
    // 0x8024025C: nop

    after_2:
    // 0x80240260: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80240264: beq         $s0, $zero, L_80240324
    if (ctx->r16 == 0) {
        // 0x80240268: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_80240324;
    }
    // 0x80240268: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x8024026C: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x80240270: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80240274: addiu       $v0, $zero, 0x83
    ctx->r2 = ADD32(0, 0X83);
    // 0x80240278: sb          $s6, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r22;
    // 0x8024027C: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80240280: jal         0x8009A3B4
    // 0x80240284: sb          $s6, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r22;
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80240284: sb          $s6, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r22;
    after_3:
    // 0x80240288: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x8024028C: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x80240290: jal         0x8009A3B4
    // 0x80240294: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x80240294: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_4:
    // 0x80240298: lhu         $v1, 0x2($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0X2);
    // 0x8024029C: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x802402A0: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
    // 0x802402A4: sra         $v0, $v0, 13
    ctx->r2 = S32(SIGNED(ctx->r2) >> 13);
    // 0x802402A8: andi        $v1, $v1, 0x3
    ctx->r3 = ctx->r3 & 0X3;
    // 0x802402AC: sll         $v1, $v1, 5
    ctx->r3 = S32(ctx->r3 << 5);
    // 0x802402B0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802402B4: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x802402B8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802402BC: lh          $v1, 0x6D1A($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X6D1A);
    // 0x802402C0: lui         $a3, 0x8024
    ctx->r7 = S32(0X8024 << 16);
    // 0x802402C4: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x802402C8: lh          $a3, 0x6D18($a3)
    ctx->r7 = MEM_H(ctx->r7, 0X6D18);
    // 0x802402CC: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x802402D0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802402D4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802402D8: lh          $v0, 0x6D1C($at)
    ctx->r2 = MEM_H(ctx->r1, 0X6D1C);
    // 0x802402DC: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x802402E0: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x802402E4: jal         0x8004DBA0
    // 0x802402E8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_5;
    // 0x802402E8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_5:
    // 0x802402EC: lhu         $v0, 0x0($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X0);
    // 0x802402F0: sh          $v0, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r2;
    // 0x802402F4: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802402F8: lhu         $v0, 0x762A($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X762A);
    // 0x802402FC: sh          $v0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r2;
    // 0x80240300: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80240304: lhu         $v1, 0x762C($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X762C);
    // 0x80240308: addiu       $v0, $s2, 0x1
    ctx->r2 = ADD32(ctx->r18, 0X1);
    // 0x8024030C: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x80240310: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80240314: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80240318: slti        $v0, $v0, 0x4
    ctx->r2 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x8024031C: bne         $v0, $zero, L_80240258
    if (ctx->r2 != 0) {
        // 0x80240320: sh          $v1, 0x20($s0)
        MEM_H(0X20, ctx->r16) = ctx->r3;
            goto L_80240258;
    }
    // 0x80240320: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
L_80240324:
    // 0x80240324: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80240328: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x8024032C: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x80240330: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x80240334: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x80240338: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8024033C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80240340: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80240344: jr          $ra
    // 0x80240348: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x80240348: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x8024034C: nop

;}
RECOMP_FUNC void func_8023DEA0_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023DEA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023DEA4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023DEA8: jal         0x8023E010
    // 0x8023DEAC: nop

    func_8023E010_ovl5(rdram, ctx);
        goto after_0;
    // 0x8023DEAC: nop

    after_0:
    // 0x8023DEB0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023DEB4: jr          $ra
    // 0x8023DEB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023DEB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022C738_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C738: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022C73C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C740: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C744: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022C748: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022C74C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022C750: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x8022C754: beq         $v0, $zero, L_8022C900
    if (ctx->r2 == 0) {
        // 0x8022C758: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_8022C900;
    }
    // 0x8022C758: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022C75C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022C760: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022C764: addu        $at, $at, $v0
    gpr jr_addend_8022C76C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022C768: lw          $v0, 0x7130($at)
    ctx->r2 = ADD32(ctx->r1, 0X7130);
    // 0x8022C76C: jr          $v0
    // 0x8022C770: nop

    switch (jr_addend_8022C76C >> 2) {
        case 0: goto L_8022C774; break;
        case 1: goto L_8022C7B8; break;
        case 2: goto L_8022C818; break;
        case 3: goto L_8022C8A4; break;
        case 4: goto L_8022C8D4; break;
        default: switch_error(__func__, 0x8022C76C, 0x80247130);
    }
    // 0x8022C770: nop

L_8022C774:
    // 0x8022C774: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022C778: addiu       $v0, $zero, 0x25
    ctx->r2 = ADD32(0, 0X25);
    // 0x8022C77C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022C780: addiu       $v0, $zero, -0xB
    ctx->r2 = ADD32(0, -0XB);
    // 0x8022C784: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022C788: addiu       $v0, $zero, -0x18
    ctx->r2 = ADD32(0, -0X18);
    // 0x8022C78C: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8022C790: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8022C794: sb          $v0, 0x110($s0)
    MEM_B(0X110, ctx->r16) = ctx->r2;
    // 0x8022C798: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022C79C: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8022C7A0: lhu         $v1, 0x0($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X0);
    // 0x8022C7A4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022C7A8: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022C7AC: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
    // 0x8022C7B0: andi        $v1, $v1, 0xFFF7
    ctx->r3 = ctx->r3 & 0XFFF7;
    // 0x8022C7B4: sh          $v1, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r3;
L_8022C7B8:
    // 0x8022C7B8: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022C7BC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022C7C0: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022C7C4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C7C8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022C7CC: bltz        $v0, L_8022C7FC
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022C7D0: slti        $v0, $v0, 0x2
        ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
            goto L_8022C7FC;
    }
    // 0x8022C7D0: slti        $v0, $v0, 0x2
    ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x8022C7D4: beq         $v0, $zero, L_8022C900
    if (ctx->r2 == 0) {
        // 0x8022C7D8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022C900;
    }
    // 0x8022C7D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C7DC: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022C7E0: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x8022C7E4: jal         0x8004DA90
    // 0x8022C7E8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8022C7E8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x8022C7EC: jal         0x80040F30
    // 0x8022C7F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_1;
    // 0x8022C7F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022C7F4: j           L_8022C900
    // 0x8022C7F8: nop

        goto L_8022C900;
    // 0x8022C7F8: nop

L_8022C7FC:
    // 0x8022C7FC: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x8022C800: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022C804: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022C808: addiu       $v1, $zero, 0x26
    ctx->r3 = ADD32(0, 0X26);
    // 0x8022C80C: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x8022C810: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022C814: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022C818:
    // 0x8022C818: lhu         $v1, 0x4($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X4);
    // 0x8022C81C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C820: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022C824: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022C828: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8022C82C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022C830: sh          $v1, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r3;
    // 0x8022C834: lhu         $a1, 0x44($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X44);
    // 0x8022C838: sll         $a2, $v0, 23
    ctx->r6 = S32(ctx->r2 << 23);
    // 0x8022C83C: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8022C840: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022C844: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8022C848: sll         $a1, $a1, 20
    ctx->r5 = S32(ctx->r5 << 20);
    // 0x8022C84C: jal         0x8004DA90
    // 0x8022C850: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x8022C850: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    after_2:
    // 0x8022C854: jal         0x80040F30
    // 0x8022C858: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_3;
    // 0x8022C858: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022C85C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022C860: beq         $v1, $zero, L_8022C900
    if (ctx->r3 == 0) {
        // 0x8022C864: andi        $v0, $v1, 0xF00
        ctx->r2 = ctx->r3 & 0XF00;
            goto L_8022C900;
    }
    // 0x8022C864: andi        $v0, $v1, 0xF00
    ctx->r2 = ctx->r3 & 0XF00;
    // 0x8022C868: bnel        $v0, $zero, L_8022C870
    if (ctx->r2 != 0) {
        // 0x8022C86C: sh          $zero, 0x44($s0)
        MEM_H(0X44, ctx->r16) = 0;
            goto L_8022C870;
    }
    goto skip_0;
    // 0x8022C86C: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    skip_0:
L_8022C870:
    // 0x8022C870: andi        $v0, $v1, 0x1000
    ctx->r2 = ctx->r3 & 0X1000;
    // 0x8022C874: beq         $v0, $zero, L_8022C900
    if (ctx->r2 == 0) {
        // 0x8022C878: nop
    
            goto L_8022C900;
    }
    // 0x8022C878: nop

    // 0x8022C87C: lh          $v0, 0x4($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4);
    // 0x8022C880: bgtz        $v0, L_8022C900
    if (SIGNED(ctx->r2) > 0) {
        // 0x8022C884: addiu       $v0, $zero, 0x26
        ctx->r2 = ADD32(0, 0X26);
            goto L_8022C900;
    }
    // 0x8022C884: addiu       $v0, $zero, 0x26
    ctx->r2 = ADD32(0, 0X26);
    // 0x8022C888: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022C88C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022C890: addiu       $v1, $zero, 0x27
    ctx->r3 = ADD32(0, 0X27);
    // 0x8022C894: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x8022C898: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022C89C: j           L_8022C900
    // 0x8022C8A0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8022C900;
    // 0x8022C8A0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022C8A4:
    // 0x8022C8A4: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022C8A8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022C8AC: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022C8B0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C8B4: bgez        $v0, L_8022C900
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022C8B8: addiu       $v0, $zero, 0x11
        ctx->r2 = ADD32(0, 0X11);
            goto L_8022C900;
    }
    // 0x8022C8B8: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x8022C8BC: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022C8C0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022C8C4: addiu       $v1, $zero, 0x28
    ctx->r3 = ADD32(0, 0X28);
    // 0x8022C8C8: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x8022C8CC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022C8D0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022C8D4:
    // 0x8022C8D4: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022C8D8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022C8DC: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022C8E0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C8E4: bgez        $v0, L_8022C900
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022C8E8: nop
    
            goto L_8022C900;
    }
    // 0x8022C8E8: nop

    // 0x8022C8EC: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022C8F0: ori         $v0, $v0, 0x109
    ctx->r2 = ctx->r2 | 0X109;
    // 0x8022C8F4: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8022C8F8: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022C8FC: sb          $v0, 0x110($s0)
    MEM_B(0X110, ctx->r16) = ctx->r2;
L_8022C900:
    // 0x8022C900: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022C904: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022C908: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C90C: jr          $ra
    // 0x8022C910: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022C910: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80225BE8_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225BE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225BEC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225BF0: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x80225BF4: bne         $v0, $zero, L_80225C78
    if (ctx->r2 != 0) {
        // 0x80225BF8: nop
    
            goto L_80225C78;
    }
    // 0x80225BF8: nop

    // 0x80225BFC: jal         0x8006033C
    // 0x80225C00: addiu       $a0, $zero, 0x236
    ctx->r4 = ADD32(0, 0X236);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80225C00: addiu       $a0, $zero, 0x236
    ctx->r4 = ADD32(0, 0X236);
    after_0:
    // 0x80225C04: beq         $v0, $zero, L_80225C2C
    if (ctx->r2 == 0) {
        // 0x80225C08: nop
    
            goto L_80225C2C;
    }
    // 0x80225C08: nop

    // 0x80225C0C: jal         0x8006036C
    // 0x80225C10: addiu       $a0, $zero, 0x7E1
    ctx->r4 = ADD32(0, 0X7E1);
    func_8006036C_3B76C(rdram, ctx);
        goto after_1;
    // 0x80225C10: addiu       $a0, $zero, 0x7E1
    ctx->r4 = ADD32(0, 0X7E1);
    after_1:
    // 0x80225C14: jal         0x8006036C
    // 0x80225C18: addiu       $a0, $zero, 0x7E3
    ctx->r4 = ADD32(0, 0X7E3);
    func_8006036C_3B76C(rdram, ctx);
        goto after_2;
    // 0x80225C18: addiu       $a0, $zero, 0x7E3
    ctx->r4 = ADD32(0, 0X7E3);
    after_2:
    // 0x80225C1C: jal         0x8006036C
    // 0x80225C20: addiu       $a0, $zero, 0x7E4
    ctx->r4 = ADD32(0, 0X7E4);
    func_8006036C_3B76C(rdram, ctx);
        goto after_3;
    // 0x80225C20: addiu       $a0, $zero, 0x7E4
    ctx->r4 = ADD32(0, 0X7E4);
    after_3:
    // 0x80225C24: jal         0x8006036C
    // 0x80225C28: addiu       $a0, $zero, 0x7E5
    ctx->r4 = ADD32(0, 0X7E5);
    func_8006036C_3B76C(rdram, ctx);
        goto after_4;
    // 0x80225C28: addiu       $a0, $zero, 0x7E5
    ctx->r4 = ADD32(0, 0X7E5);
    after_4:
L_80225C2C:
    // 0x80225C2C: jal         0x8006033C
    // 0x80225C30: addiu       $a0, $zero, 0x245
    ctx->r4 = ADD32(0, 0X245);
    func_8006033C_3B73C(rdram, ctx);
        goto after_5;
    // 0x80225C30: addiu       $a0, $zero, 0x245
    ctx->r4 = ADD32(0, 0X245);
    after_5:
    // 0x80225C34: bne         $v0, $zero, L_80225C5C
    if (ctx->r2 != 0) {
        // 0x80225C38: nop
    
            goto L_80225C5C;
    }
    // 0x80225C38: nop

    // 0x80225C3C: jal         0x8006033C
    // 0x80225C40: addiu       $a0, $zero, 0x243
    ctx->r4 = ADD32(0, 0X243);
    func_8006033C_3B73C(rdram, ctx);
        goto after_6;
    // 0x80225C40: addiu       $a0, $zero, 0x243
    ctx->r4 = ADD32(0, 0X243);
    after_6:
    // 0x80225C44: bne         $v0, $zero, L_80225C5C
    if (ctx->r2 != 0) {
        // 0x80225C48: nop
    
            goto L_80225C5C;
    }
    // 0x80225C48: nop

    // 0x80225C4C: jal         0x8006033C
    // 0x80225C50: addiu       $a0, $zero, 0x244
    ctx->r4 = ADD32(0, 0X244);
    func_8006033C_3B73C(rdram, ctx);
        goto after_7;
    // 0x80225C50: addiu       $a0, $zero, 0x244
    ctx->r4 = ADD32(0, 0X244);
    after_7:
    // 0x80225C54: beq         $v0, $zero, L_80225C78
    if (ctx->r2 == 0) {
        // 0x80225C58: nop
    
            goto L_80225C78;
    }
    // 0x80225C58: nop

L_80225C5C:
    // 0x80225C5C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80225C60: lb          $v0, -0x3BC6($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC6);
    // 0x80225C64: slti        $v0, $v0, 0xB
    ctx->r2 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x80225C68: beq         $v0, $zero, L_80225C78
    if (ctx->r2 == 0) {
        // 0x80225C6C: nop
    
            goto L_80225C78;
    }
    // 0x80225C6C: nop

    // 0x80225C70: jal         0x80060690
    // 0x80225C74: addiu       $a0, $zero, 0x59
    ctx->r4 = ADD32(0, 0X59);
    func_80060690_3BA90(rdram, ctx);
        goto after_8;
    // 0x80225C74: addiu       $a0, $zero, 0x59
    ctx->r4 = ADD32(0, 0X59);
    after_8:
L_80225C78:
    // 0x80225C78: jal         0x8006036C
    // 0x80225C7C: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    func_8006036C_3B76C(rdram, ctx);
        goto after_9;
    // 0x80225C7C: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    after_9:
    // 0x80225C80: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80225C84: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80225C88: jr          $ra
    // 0x80225C8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225C8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
