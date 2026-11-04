#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8022EA84_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EA84: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022EA88: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022EA8C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022EA90: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022EA94: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022EA98: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022EA9C: lhu         $v0, 0x1DA($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1DA);
    // 0x8022EAA0: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x8022EAA4: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022EAA8: beq         $v0, $zero, L_8022EAD4
    if (ctx->r2 == 0) {
        // 0x8022EAAC: addiu       $s1, $s0, 0x64
        ctx->r17 = ADD32(ctx->r16, 0X64);
            goto L_8022EAD4;
    }
    // 0x8022EAAC: addiu       $s1, $s0, 0x64
    ctx->r17 = ADD32(ctx->r16, 0X64);
    // 0x8022EAB0: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x8022EAB4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022EAB8: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x8022EABC: jal         0x80050294
    // 0x8022EAC0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8022EAC0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022EAC4: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022EAC8: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x8022EACC: j           L_8022EAFC
    // 0x8022EAD0: sh          $v0, 0x380($s0)
    MEM_H(0X380, ctx->r16) = ctx->r2;
        goto L_8022EAFC;
    // 0x8022EAD0: sh          $v0, 0x380($s0)
    MEM_H(0X380, ctx->r16) = ctx->r2;
L_8022EAD4:
    // 0x8022EAD4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022EAD8: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x8022EADC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022EAE0: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x8022EAE4: jal         0x80050294
    // 0x8022EAE8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x8022EAE8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022EAEC: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022EAF0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022EAF4: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x8022EAF8: sh          $v1, 0x380($s0)
    MEM_H(0X380, ctx->r16) = ctx->r3;
L_8022EAFC:
    // 0x8022EAFC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022EB00: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022EB04: sb          $v0, 0x3F($s2)
    MEM_B(0X3F, ctx->r18) = ctx->r2;
    // 0x8022EB08: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022EB0C: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x8022EB10: sb          $v0, 0x1($s1)
    MEM_B(0X1, ctx->r17) = ctx->r2;
    // 0x8022EB14: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
    // 0x8022EB18: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022EB1C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022EB20: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022EB24: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022EB28: jr          $ra
    // 0x8022EB2C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022EB2C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80229E84_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229E84: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80229E88: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229E8C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229E90: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80229E94: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80229E98: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80229E9C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80229EA0: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80229EA4: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80229EA8: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x80229EAC: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x80229EB0: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
    // 0x80229EB4: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80229EB8: jal         0x8004D5D4
    // 0x80229EBC: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80229EBC: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x80229EC0: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80229EC4: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80229EC8: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x80229ECC: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80229ED0: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80229ED4: andi        $v1, $v1, 0x20
    ctx->r3 = ctx->r3 & 0X20;
    // 0x80229ED8: beq         $v1, $zero, L_80229EE8
    if (ctx->r3 == 0) {
        // 0x80229EDC: sh          $v0, 0x158($s0)
        MEM_H(0X158, ctx->r16) = ctx->r2;
            goto L_80229EE8;
    }
    // 0x80229EDC: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80229EE0: j           L_80229EF0
    // 0x80229EE4: sh          $zero, 0x328($s0)
    MEM_H(0X328, ctx->r16) = 0;
        goto L_80229EF0;
    // 0x80229EE4: sh          $zero, 0x328($s0)
    MEM_H(0X328, ctx->r16) = 0;
L_80229EE8:
    // 0x80229EE8: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x80229EEC: sh          $v0, 0x328($s0)
    MEM_H(0X328, ctx->r16) = ctx->r2;
L_80229EF0:
    // 0x80229EF0: sw          $zero, 0x4($s1)
    MEM_W(0X4, ctx->r17) = 0;
    // 0x80229EF4: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x80229EF8: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x80229EFC: beq         $v0, $zero, L_80229F08
    if (ctx->r2 == 0) {
        // 0x80229F00: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80229F08;
    }
    // 0x80229F00: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229F04: sh          $v0, 0x6($s1)
    MEM_H(0X6, ctx->r17) = ctx->r2;
L_80229F08:
    // 0x80229F08: sw          $zero, 0x8($s1)
    MEM_W(0X8, ctx->r17) = 0;
    // 0x80229F0C: sw          $zero, 0x14($s1)
    MEM_W(0X14, ctx->r17) = 0;
    // 0x80229F10: sw          $zero, 0x18($s1)
    MEM_W(0X18, ctx->r17) = 0;
    // 0x80229F14: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x80229F18: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80229F1C: lw          $v0, 0x298($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X298);
    // 0x80229F20: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80229F24: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80229F28: lh          $v0, 0x6($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X6);
    // 0x80229F2C: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x80229F30: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80229F34: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80229F38: lbu         $a1, 0xF($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0XF);
    // 0x80229F3C: addiu       $a0, $s1, 0x24
    ctx->r4 = ADD32(ctx->r17, 0X24);
    // 0x80229F40: jal         0x800540BC
    // 0x80229F44: addiu       $a2, $zero, -0x60
    ctx->r6 = ADD32(0, -0X60);
    func_800540BC_2F4BC(rdram, ctx);
        goto after_1;
    // 0x80229F44: addiu       $a2, $zero, -0x60
    ctx->r6 = ADD32(0, -0X60);
    after_1:
    // 0x80229F48: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80229F4C: sh          $zero, 0x34($s1)
    MEM_H(0X34, ctx->r17) = 0;
    // 0x80229F50: sh          $zero, 0x36($s1)
    MEM_H(0X36, ctx->r17) = 0;
    // 0x80229F54: sh          $v0, 0x38($s1)
    MEM_H(0X38, ctx->r17) = ctx->r2;
    // 0x80229F58: lhu         $v0, 0x1A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1A);
    // 0x80229F5C: sw          $zero, 0x40($s1)
    MEM_W(0X40, ctx->r17) = 0;
    // 0x80229F60: sh          $zero, 0x44($s1)
    MEM_H(0X44, ctx->r17) = 0;
    // 0x80229F64: sw          $zero, 0x48($s1)
    MEM_W(0X48, ctx->r17) = 0;
    // 0x80229F68: sh          $v0, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r2;
    // 0x80229F6C: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x80229F70: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80229F74: lw          $v0, 0x298($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X298);
    // 0x80229F78: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80229F7C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80229F80: lh          $v0, 0x6($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X6);
    // 0x80229F84: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x80229F88: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80229F8C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80229F90: lbu         $v1, 0x8($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X8);
    // 0x80229F94: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x80229F98: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x80229F9C: andi        $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 & 0X7F;
    // 0x80229FA0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229FA4: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80229FA8: mflo        $v1
    ctx->r3 = lo;
    // 0x80229FAC: lbu         $a0, 0x3($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X3);
    // 0x80229FB0: andi        $a0, $a0, 0x40
    ctx->r4 = ctx->r4 & 0X40;
    // 0x80229FB4: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x80229FB8: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80229FBC: addiu       $v0, $v0, -0x7DA8
    ctx->r2 = ADD32(ctx->r2, -0X7DA8);
    // 0x80229FC0: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x80229FC4: sh          $v1, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r3;
    // 0x80229FC8: sh          $v1, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r3;
    // 0x80229FCC: beq         $a0, $zero, L_8022A00C
    if (ctx->r4 == 0) {
        // 0x80229FD0: sh          $v1, 0xB2($s0)
        MEM_H(0XB2, ctx->r16) = ctx->r3;
            goto L_8022A00C;
    }
    // 0x80229FD0: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    // 0x80229FD4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229FD8: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x80229FDC: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x80229FE0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80229FE4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80229FE8: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    // 0x80229FEC: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x80229FF0: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    // 0x80229FF4: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x80229FF8: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    // 0x80229FFC: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022A000: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A004: j           L_8022A03C
    // 0x8022A008: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
        goto L_8022A03C;
    // 0x8022A008: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_8022A00C:
    // 0x8022A00C: jal         0x8003E934
    // 0x8022A010: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_2;
    // 0x8022A010: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022A014: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A018: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022A01C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022A020: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022A024: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A028: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022A02C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A030: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022A034: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022A038: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8022A03C:
    // 0x8022A03C: jal         0x80050294
    // 0x8022A040: nop

    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x8022A040: nop

    after_3:
    // 0x8022A044: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022A048: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022A04C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022A050: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022A054: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A058: jr          $ra
    // 0x8022A05C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022A05C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80229D30_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229D30: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80229D34: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80229D38: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80229D3C: addiu       $a0, $s1, 0x2C
    ctx->r4 = ADD32(ctx->r17, 0X2C);
    // 0x80229D40: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80229D44: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80229D48: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80229D4C: lbu         $v0, 0xAC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XAC);
    // 0x80229D50: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x80229D54: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80229D58: jal         0x8009A3B4
    // 0x80229D5C: sb          $v0, 0xAD($s1)
    MEM_B(0XAD, ctx->r17) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80229D5C: sb          $v0, 0xAD($s1)
    MEM_B(0XAD, ctx->r17) = ctx->r2;
    after_0:
    // 0x80229D60: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
    // 0x80229D64: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x80229D68: jal         0x8009A3B4
    // 0x80229D6C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80229D6C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80229D70: addiu       $a0, $s1, 0x5C
    ctx->r4 = ADD32(ctx->r17, 0X5C);
    // 0x80229D74: addiu       $a1, $s1, 0x54
    ctx->r5 = ADD32(ctx->r17, 0X54);
    // 0x80229D78: jal         0x8009A3B4
    // 0x80229D7C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80229D7C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80229D80: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80229D84: jal         0x800A3450
    // 0x80229D88: sh          $v0, 0x15E($s1)
    MEM_H(0X15E, ctx->r17) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80229D88: sh          $v0, 0x15E($s1)
    MEM_H(0X15E, ctx->r17) = ctx->r2;
    after_3:
    // 0x80229D8C: lbu         $v1, 0x8($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X8);
    // 0x80229D90: sh          $v0, 0x32A($s1)
    MEM_H(0X32A, ctx->r17) = ctx->r2;
    // 0x80229D94: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80229D98: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80229D9C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80229DA0: lw          $v0, -0x7DE0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7DE0);
    // 0x80229DA4: jalr        $v0
    // 0x80229DA8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x80229DA8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x80229DAC: lbu         $v0, 0xAD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XAD);
    // 0x80229DB0: lbu         $a1, 0xAC($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0XAC);
    // 0x80229DB4: beq         $v0, $a1, L_80229DD0
    if (ctx->r2 == ctx->r5) {
        // 0x80229DB8: addiu       $s2, $s1, 0x328
        ctx->r18 = ADD32(ctx->r17, 0X328);
            goto L_80229DD0;
    }
    // 0x80229DB8: addiu       $s2, $s1, 0x328
    ctx->r18 = ADD32(ctx->r17, 0X328);
    // 0x80229DBC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80229DC0: jal         0x80050294
    // 0x80229DC4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x80229DC4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x80229DC8: j           L_80229DD8
    // 0x80229DCC: nop

        goto L_80229DD8;
    // 0x80229DCC: nop

L_80229DD0:
    // 0x80229DD0: jal         0x8005044C
    // 0x80229DD4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_6;
    // 0x80229DD4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
L_80229DD8:
    // 0x80229DD8: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80229DDC: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80229DE0: beq         $v0, $zero, L_80229DF8
    if (ctx->r2 == 0) {
        // 0x80229DE4: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80229DF8;
    }
    // 0x80229DE4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80229DE8: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x80229DEC: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x80229DF0: jal         0x8003B564
    // 0x80229DF4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_7;
    // 0x80229DF4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_7:
L_80229DF8:
    // 0x80229DF8: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80229DFC: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80229E00: beql        $v0, $zero, L_80229E6C
    if (ctx->r2 == 0) {
        // 0x80229E04: sw          $zero, 0x14($s2)
        MEM_W(0X14, ctx->r18) = 0;
            goto L_80229E6C;
    }
    goto skip_0;
    // 0x80229E04: sw          $zero, 0x14($s2)
    MEM_W(0X14, ctx->r18) = 0;
    skip_0:
    // 0x80229E08: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x80229E0C: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x80229E10: beq         $v0, $zero, L_80229E68
    if (ctx->r2 == 0) {
        // 0x80229E14: addiu       $s0, $s2, 0xC
        ctx->r16 = ADD32(ctx->r18, 0XC);
            goto L_80229E68;
    }
    // 0x80229E14: addiu       $s0, $s2, 0xC
    ctx->r16 = ADD32(ctx->r18, 0XC);
    // 0x80229E18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229E1C: addiu       $a1, $s1, 0x180
    ctx->r5 = ADD32(ctx->r17, 0X180);
    // 0x80229E20: jal         0x8009A3B4
    // 0x80229E24: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x80229E24: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_8:
    // 0x80229E28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229E2C: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x80229E30: lbu         $v1, 0x1($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X1);
    // 0x80229E34: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80229E38: addiu       $v0, $s2, 0x14
    ctx->r2 = ADD32(ctx->r18, 0X14);
    // 0x80229E3C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80229E40: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x80229E44: lhu         $v1, 0x8($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X8);
    // 0x80229E48: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x80229E4C: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x80229E50: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80229E54: lui         $v0, 0x488
    ctx->r2 = S32(0X488 << 16);
    // 0x80229E58: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80229E5C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80229E60: jal         0x80051E18
    // 0x80229E64: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_9;
    // 0x80229E64: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_9:
L_80229E68:
    // 0x80229E68: sw          $zero, 0x14($s2)
    MEM_W(0X14, ctx->r18) = 0;
L_80229E6C:
    // 0x80229E6C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80229E70: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80229E74: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80229E78: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80229E7C: jr          $ra
    // 0x80229E80: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80229E80: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8022EBC4_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EBC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022EBC8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022EBCC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022EBD0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022EBD4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022EBD8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022EBDC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022EBE0: jal         0x80050294
    // 0x8022EBE4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8022EBE4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022EBE8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022EBEC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022EBF0: addiu       $v0, $zero, 0x1E0
    ctx->r2 = ADD32(0, 0X1E0);
    // 0x8022EBF4: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022EBF8: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022EBFC: sh          $v0, 0x382($s0)
    MEM_H(0X382, ctx->r16) = ctx->r2;
    // 0x8022EC00: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x8022EC04: sb          $v0, 0x387($s0)
    MEM_B(0X387, ctx->r16) = ctx->r2;
    // 0x8022EC08: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022EC0C: sb          $v0, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r2;
    // 0x8022EC10: sb          $v0, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r2;
    // 0x8022EC14: sb          $v0, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r2;
    // 0x8022EC18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022EC1C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022EC20: jr          $ra
    // 0x8022EC24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022EC24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022D728_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D728: lb          $v0, 0x385($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X385);
    // 0x8022D72C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8022D730: bne         $v0, $zero, L_8022D744
    if (ctx->r2 != 0) {
        // 0x8022D734: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022D744;
    }
    // 0x8022D734: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022D738: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D73C: j           L_8022D74C
    // 0x8022D740: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
        goto L_8022D74C;
    // 0x8022D740: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_8022D744:
    // 0x8022D744: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022D748: sb          $v0, 0x385($a0)
    MEM_B(0X385, ctx->r4) = ctx->r2;
L_8022D74C:
    // 0x8022D74C: jr          $ra
    // 0x8022D750: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x8022D750: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80233FF4_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233FF4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80233FF8: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80233FFC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80234000: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80234004: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80234008: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8023400C: jal         0x8009A3B4
    // 0x80234010: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80234010: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_0:
    // 0x80234014: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80234018: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8023401C: jal         0x8009A3B4
    // 0x80234020: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80234020: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80234024: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x80234028: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023402C: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x80234030: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80234034: bne         $v0, $zero, L_8023404C
    if (ctx->r2 != 0) {
        // 0x80234038: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_8023404C;
    }
    // 0x80234038: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8023403C: jal         0x8004F4F8
    // 0x80234040: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_2;
    // 0x80234040: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80234044: j           L_80234130
    // 0x80234048: nop

        goto L_80234130;
    // 0x80234048: nop

L_8023404C:
    // 0x8023404C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80234050: bne         $v1, $v0, L_8023405C
    if (ctx->r3 != ctx->r2) {
        // 0x80234054: addiu       $v0, $v1, 0x2
        ctx->r2 = ADD32(ctx->r3, 0X2);
            goto L_8023405C;
    }
    // 0x80234054: addiu       $v0, $v1, 0x2
    ctx->r2 = ADD32(ctx->r3, 0X2);
    // 0x80234058: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8023405C:
    // 0x8023405C: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80234060: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x80234064: lh          $a3, 0x48($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X48);
    // 0x80234068: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8023406C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80234070: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80234074: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80234078: lbu         $v1, -0x796C($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X796C);
    // 0x8023407C: lbu         $t0, 0xA($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0XA);
    // 0x80234080: lhu         $v0, 0x9A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X9A);
    // 0x80234084: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234088: sb          $v1, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r3;
    // 0x8023408C: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80234090: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    // 0x80234094: lbu         $v1, -0x796B($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X796B);
    // 0x80234098: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8023409C: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x802340A0: sh          $v0, 0x9A($s0)
    MEM_H(0X9A, ctx->r16) = ctx->r2;
    // 0x802340A4: jal         0x8004DA90
    // 0x802340A8: sb          $v1, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x802340A8: sb          $v1, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r3;
    after_3:
    // 0x802340AC: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x802340B0: beq         $v0, $zero, L_802340CC
    if (ctx->r2 == 0) {
        // 0x802340B4: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_802340CC;
    }
    // 0x802340B4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802340B8: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x802340BC: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x802340C0: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x802340C4: bne         $v0, $zero, L_80234118
    if (ctx->r2 != 0) {
        // 0x802340C8: nop
    
            goto L_80234118;
    }
    // 0x802340C8: nop

L_802340CC:
    // 0x802340CC: jal         0x8004F144
    // 0x802340D0: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_4;
    // 0x802340D0: nop

    after_4:
    // 0x802340D4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802340D8: beq         $v1, $zero, L_80234118
    if (ctx->r3 == 0) {
        // 0x802340DC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80234118;
    }
    // 0x802340DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802340E0: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x802340E4: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x802340E8: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x802340EC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802340F0: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    // 0x802340F4: sb          $zero, 0xC($v1)
    MEM_B(0XC, ctx->r3) = 0;
    // 0x802340F8: lhu         $v0, 0x90($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X90);
    // 0x802340FC: sh          $v0, 0x1C($v1)
    MEM_H(0X1C, ctx->r3) = ctx->r2;
    // 0x80234100: lhu         $v0, 0x92($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X92);
    // 0x80234104: sh          $v0, 0x1E($v1)
    MEM_H(0X1E, ctx->r3) = ctx->r2;
    // 0x80234108: lhu         $v0, 0x94($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X94);
    // 0x8023410C: sh          $v0, 0x20($v1)
    MEM_H(0X20, ctx->r3) = ctx->r2;
    // 0x80234110: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80234114: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
L_80234118:
    // 0x80234118: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x8023411C: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x80234120: lhu         $a0, 0x18($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X18);
    // 0x80234124: sh          $v0, 0x90($s0)
    MEM_H(0X90, ctx->r16) = ctx->r2;
    // 0x80234128: sh          $v1, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r3;
    // 0x8023412C: sh          $a0, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r4;
L_80234130:
    // 0x80234130: jal         0x8003F754
    // 0x80234134: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003F754_1AB54(rdram, ctx);
        goto after_5;
    // 0x80234134: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80234138: bne         $v0, $zero, L_80234154
    if (ctx->r2 != 0) {
        // 0x8023413C: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80234154;
    }
    // 0x8023413C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80234140: lw          $v0, 0x9C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X9C);
    // 0x80234144: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x80234148: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8023414C: beq         $v0, $zero, L_80234168
    if (ctx->r2 == 0) {
        // 0x80234150: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80234168;
    }
    // 0x80234150: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_80234154:
    // 0x80234154: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80234158: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8023415C: sb          $zero, 0x96($s0)
    MEM_B(0X96, ctx->r16) = 0;
    // 0x80234160: j           L_802341B8
    // 0x80234164: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
        goto L_802341B8;
    // 0x80234164: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
L_80234168:
    // 0x80234168: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8023416C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80234170: beq         $v0, $zero, L_802341B8
    if (ctx->r2 == 0) {
        // 0x80234174: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_802341B8;
    }
    // 0x80234174: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80234178: lhu         $a1, 0x98($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X98);
    // 0x8023417C: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80234180: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80234184: addiu       $v0, $s0, 0x9C
    ctx->r2 = ADD32(ctx->r16, 0X9C);
    // 0x80234188: ori         $a3, $zero, 0xA000
    ctx->r7 = 0 | 0XA000;
    // 0x8023418C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80234190: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x80234194: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x80234198: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8023419C: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x802341A0: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x802341A4: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x802341A8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802341AC: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x802341B0: jal         0x80051E18
    // 0x802341B4: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_6;
    // 0x802341B4: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_6:
L_802341B8:
    // 0x802341B8: sw          $zero, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = 0;
    // 0x802341BC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x802341C0: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x802341C4: jr          $ra
    // 0x802341C8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x802341C8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8022E28C_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E28C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E290: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E294: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E298: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022E29C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022E2A0: lh          $a3, 0x382($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X382);
    // 0x8022E2A4: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022E2A8: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022E2AC: jal         0x8004F820
    // 0x8022E2B0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022E2B0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x8022E2B4: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022E2B8: lb          $a0, 0xA7($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XA7);
    // 0x8022E2BC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022E2C0: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022E2C4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022E2C8: bne         $a0, $v0, L_8022E2DC
    if (ctx->r4 != ctx->r2) {
        // 0x8022E2CC: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8022E2DC;
    }
    // 0x8022E2CC: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022E2D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E2D4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022E2D8: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_8022E2DC:
    // 0x8022E2DC: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022E2E0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022E2E4: bne         $v1, $v0, L_8022E374
    if (ctx->r3 != ctx->r2) {
        // 0x8022E2E8: nop
    
            goto L_8022E374;
    }
    // 0x8022E2E8: nop

    // 0x8022E2EC: lbu         $v1, 0x64($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X64);
    // 0x8022E2F0: lbu         $a0, 0x65($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X65);
    // 0x8022E2F4: lbu         $a1, 0x66($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X66);
    // 0x8022E2F8: lbu         $v0, 0x64($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X64);
    // 0x8022E2FC: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x8022E300: andi        $a0, $a0, 0x1F
    ctx->r4 = ctx->r4 & 0X1F;
    // 0x8022E304: andi        $a1, $a1, 0x1F
    ctx->r5 = ctx->r5 & 0X1F;
    // 0x8022E308: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x8022E30C: sll         $a0, $a0, 5
    ctx->r4 = S32(ctx->r4 << 5);
    // 0x8022E310: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x8022E314: sb          $v0, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r2;
    // 0x8022E318: lbu         $v0, 0x65($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X65);
    // 0x8022E31C: lb          $a0, 0x64($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X64);
    // 0x8022E320: sll         $a1, $a1, 10
    ctx->r5 = S32(ctx->r5 << 10);
    // 0x8022E324: or          $v1, $v1, $a1
    ctx->r3 = ctx->r3 | ctx->r5;
    // 0x8022E328: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x8022E32C: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x8022E330: bgez        $a0, L_8022E34C
    if (SIGNED(ctx->r4) >= 0) {
        // 0x8022E334: sb          $v0, 0x65($s0)
        MEM_B(0X65, ctx->r16) = ctx->r2;
            goto L_8022E34C;
    }
    // 0x8022E334: sb          $v0, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r2;
    // 0x8022E338: lhu         $v0, 0x15E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X15E);
    // 0x8022E33C: sb          $zero, 0x64($s0)
    MEM_B(0X64, ctx->r16) = 0;
    // 0x8022E340: sb          $zero, 0x65($s0)
    MEM_B(0X65, ctx->r16) = 0;
    // 0x8022E344: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x8022E348: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
L_8022E34C:
    // 0x8022E34C: lh          $v0, 0x15E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X15E);
    // 0x8022E350: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x8022E354: beq         $v0, $zero, L_8022E374
    if (ctx->r2 == 0) {
        // 0x8022E358: nop
    
            goto L_8022E374;
    }
    // 0x8022E358: nop

    // 0x8022E35C: lbu         $v0, 0x66($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X66);
    // 0x8022E360: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022E364: sb          $v0, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r2;
    // 0x8022E368: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022E36C: bltzl       $v0, L_8022E374
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022E370: sb          $zero, 0x66($s0)
        MEM_B(0X66, ctx->r16) = 0;
            goto L_8022E374;
    }
    goto skip_0;
    // 0x8022E370: sb          $zero, 0x66($s0)
    MEM_B(0X66, ctx->r16) = 0;
    skip_0:
L_8022E374:
    // 0x8022E374: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022E378: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E37C: jr          $ra
    // 0x8022E380: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E380: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802310E8_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802310E8: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x802310EC: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x802310F0: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x802310F4: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x802310F8: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x802310FC: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x80231100: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x80231104: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x80231108: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x8023110C: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x80231110: lbu         $v0, 0xCA($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XCA);
    // 0x80231114: addiu       $a0, $s4, 0x368
    ctx->r4 = ADD32(ctx->r20, 0X368);
    // 0x80231118: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x8023111C: addiu       $s5, $s4, 0x348
    ctx->r21 = ADD32(ctx->r20, 0X348);
    // 0x80231120: addiu       $s6, $s4, 0xC4
    ctx->r22 = ADD32(ctx->r20, 0XC4);
    // 0x80231124: addiu       $s1, $s4, 0x1D8
    ctx->r17 = ADD32(ctx->r20, 0X1D8);
    // 0x80231128: addiu       $s3, $s4, 0x64
    ctx->r19 = ADD32(ctx->r20, 0X64);
    // 0x8023112C: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x80231130: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x80231134: andi        $v0, $v0, 0xF7
    ctx->r2 = ctx->r2 & 0XF7;
    // 0x80231138: jal         0x800540D0
    // 0x8023113C: sb          $v0, 0xCA($s4)
    MEM_B(0XCA, ctx->r20) = ctx->r2;
    func_800540D0_2F4D0(rdram, ctx);
        goto after_0;
    // 0x8023113C: sb          $v0, 0xCA($s4)
    MEM_B(0XCA, ctx->r20) = ctx->r2;
    after_0:
    // 0x80231140: beq         $v0, $zero, L_80231154
    if (ctx->r2 == 0) {
        // 0x80231144: nop
    
            goto L_80231154;
    }
    // 0x80231144: nop

    // 0x80231148: lbu         $v0, 0xCA($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XCA);
    // 0x8023114C: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
    // 0x80231150: sb          $v0, 0xCA($s4)
    MEM_B(0XCA, ctx->r20) = ctx->r2;
L_80231154:
    // 0x80231154: lbu         $v0, 0x1DD($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X1DD);
    // 0x80231158: beq         $v0, $zero, L_80231164
    if (ctx->r2 == 0) {
        // 0x8023115C: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_80231164;
    }
    // 0x8023115C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80231160: sb          $v0, 0x1DD($s4)
    MEM_B(0X1DD, ctx->r20) = ctx->r2;
L_80231164:
    // 0x80231164: lhu         $v0, 0x1D8($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X1D8);
    // 0x80231168: beq         $v0, $zero, L_80231174
    if (ctx->r2 == 0) {
        // 0x8023116C: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_80231174;
    }
    // 0x8023116C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80231170: sh          $v0, 0x1D8($s4)
    MEM_H(0X1D8, ctx->r20) = ctx->r2;
L_80231174:
    // 0x80231174: lw          $v1, 0x350($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X350);
    // 0x80231178: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x8023117C: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x80231180: and         $a1, $v1, $v0
    ctx->r5 = ctx->r3 & ctx->r2;
    // 0x80231184: beq         $a1, $zero, L_802313D4
    if (ctx->r5 == 0) {
        // 0x80231188: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802313D4;
    }
    // 0x80231188: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023118C: lbu         $v1, 0x9($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X9);
    // 0x80231190: bne         $v1, $v0, L_802311A4
    if (ctx->r3 != ctx->r2) {
        // 0x80231194: nop
    
            goto L_802311A4;
    }
    // 0x80231194: nop

    // 0x80231198: lbu         $v0, 0x1DC($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X1DC);
    // 0x8023119C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802311A0: sb          $v0, 0x1DC($s4)
    MEM_B(0X1DC, ctx->r20) = ctx->r2;
L_802311A4:
    // 0x802311A4: lhu         $v0, 0x6E($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X6E);
    // 0x802311A8: lhu         $a0, 0x6E($s4)
    ctx->r4 = MEM_HU(ctx->r20, 0X6E);
    // 0x802311AC: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x802311B0: sh          $v0, 0x6E($s4)
    MEM_H(0X6E, ctx->r20) = ctx->r2;
    // 0x802311B4: lhu         $v0, 0x1D8($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X1D8);
    // 0x802311B8: lh          $v1, 0x6E($s4)
    ctx->r3 = MEM_H(ctx->r20, 0X6E);
    // 0x802311BC: sh          $a0, 0xB2($s4)
    MEM_H(0XB2, ctx->r20) = ctx->r4;
    // 0x802311C0: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x802311C4: bgtz        $v1, L_802311E0
    if (SIGNED(ctx->r3) > 0) {
        // 0x802311C8: sh          $v0, 0x1D8($s4)
        MEM_H(0X1D8, ctx->r20) = ctx->r2;
            goto L_802311E0;
    }
    // 0x802311C8: sh          $v0, 0x1D8($s4)
    MEM_H(0X1D8, ctx->r20) = ctx->r2;
    // 0x802311CC: lbu         $v0, 0xCA($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XCA);
    // 0x802311D0: addiu       $v1, $zero, 0x7
    ctx->r3 = ADD32(0, 0X7);
    // 0x802311D4: sb          $v1, 0x9($s4)
    MEM_B(0X9, ctx->r20) = ctx->r3;
    // 0x802311D8: j           L_80231678
    // 0x802311DC: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
        goto L_80231678;
    // 0x802311DC: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
L_802311E0:
    // 0x802311E0: lbu         $v0, 0xCA($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XCA);
    // 0x802311E4: addiu       $v1, $zero, 0x7FFF
    ctx->r3 = ADD32(0, 0X7FFF);
    // 0x802311E8: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x802311EC: bne         $v0, $zero, L_80231220
    if (ctx->r2 != 0) {
        // 0x802311F0: sh          $v1, 0x15E($s4)
        MEM_H(0X15E, ctx->r20) = ctx->r3;
            goto L_80231220;
    }
    // 0x802311F0: sh          $v1, 0x15E($s4)
    MEM_H(0X15E, ctx->r20) = ctx->r3;
    // 0x802311F4: lbu         $v0, 0x2($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X2);
    // 0x802311F8: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x802311FC: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x80231200: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80231204: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80231208: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x8023120C: lhu         $v0, 0x1D8($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X1D8);
    // 0x80231210: lbu         $v1, 0x9($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X9);
    // 0x80231214: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80231218: beq         $v0, $zero, L_80231234
    if (ctx->r2 == 0) {
        // 0x8023121C: nop
    
            goto L_80231234;
    }
    // 0x8023121C: nop

L_80231220:
    // 0x80231220: lw          $v0, 0x350($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X350);
    // 0x80231224: lui         $v1, 0x2000
    ctx->r3 = S32(0X2000 << 16);
    // 0x80231228: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8023122C: beq         $v0, $zero, L_802312F0
    if (ctx->r2 == 0) {
        // 0x80231230: addiu       $a0, $zero, 0xA0
        ctx->r4 = ADD32(0, 0XA0);
            goto L_802312F0;
    }
    // 0x80231230: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
L_80231234:
    // 0x80231234: lbu         $v1, 0x9($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X9);
    // 0x80231238: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8023123C: beq         $v1, $v0, L_8023167C
    if (ctx->r3 == ctx->r2) {
        // 0x80231240: addiu       $a0, $zero, 0xA2
        ctx->r4 = ADD32(0, 0XA2);
            goto L_8023167C;
    }
    // 0x80231240: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
    // 0x80231244: addiu       $s0, $s4, 0x14
    ctx->r16 = ADD32(ctx->r20, 0X14);
    // 0x80231248: jal         0x8002A33C
    // 0x8023124C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x8023124C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80231250: lbu         $v0, 0x6($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X6);
    // 0x80231254: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80231258: addiu       $a1, $s5, 0x10
    ctx->r5 = ADD32(ctx->r21, 0X10);
    // 0x8023125C: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x80231260: andi        $v0, $v0, 0xDF
    ctx->r2 = ctx->r2 & 0XDF;
    // 0x80231264: sb          $v0, 0x6($s6)
    MEM_B(0X6, ctx->r22) = ctx->r2;
    // 0x80231268: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x8023126C: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
    // 0x80231270: sb          $zero, 0x4($s1)
    MEM_B(0X4, ctx->r17) = 0;
    // 0x80231274: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
    // 0x80231278: lh          $a2, 0x56($s4)
    ctx->r6 = MEM_H(ctx->r20, 0X56);
    // 0x8023127C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80231280: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80231284: jal         0x8004FEA0
    // 0x80231288: sb          $v0, 0x9($s4)
    MEM_B(0X9, ctx->r20) = ctx->r2;
    func_8004FEA0_2B2A0(rdram, ctx);
        goto after_2;
    // 0x80231288: sb          $v0, 0x9($s4)
    MEM_B(0X9, ctx->r20) = ctx->r2;
    after_2:
    // 0x8023128C: addiu       $v1, $zero, 0x120
    ctx->r3 = ADD32(0, 0X120);
    // 0x80231290: sh          $v1, 0x44($s4)
    MEM_H(0X44, ctx->r20) = ctx->r3;
    // 0x80231294: addiu       $v1, $zero, -0x120
    ctx->r3 = ADD32(0, -0X120);
    // 0x80231298: sh          $v1, 0x46($s4)
    MEM_H(0X46, ctx->r20) = ctx->r3;
    // 0x8023129C: lbu         $v1, 0x6($s6)
    ctx->r3 = MEM_BU(ctx->r22, 0X6);
    // 0x802312A0: andi        $v1, $v1, 0xFD
    ctx->r3 = ctx->r3 & 0XFD;
    // 0x802312A4: sb          $v1, 0x6($s6)
    MEM_B(0X6, ctx->r22) = ctx->r3;
    // 0x802312A8: addiu       $v1, $v0, 0x800
    ctx->r3 = ADD32(ctx->r2, 0X800);
    // 0x802312AC: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x802312B0: sh          $v1, 0x56($s4)
    MEM_H(0X56, ctx->r20) = ctx->r3;
    // 0x802312B4: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x802312B8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802312BC: bne         $v0, $zero, L_802312D8
    if (ctx->r2 != 0) {
        // 0x802312C0: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_802312D8;
    }
    // 0x802312C0: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x802312C4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x802312C8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802312CC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x802312D0: j           L_802313C4
    // 0x802312D4: sb          $zero, 0xA($s4)
    MEM_B(0XA, ctx->r20) = 0;
        goto L_802313C4;
    // 0x802312D4: sb          $zero, 0xA($s4)
    MEM_B(0XA, ctx->r20) = 0;
L_802312D8:
    // 0x802312D8: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x802312DC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802312E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802312E4: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
    // 0x802312E8: j           L_802313C4
    // 0x802312EC: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
        goto L_802313C4;
    // 0x802312EC: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_802312F0:
    // 0x802312F0: addiu       $s0, $s4, 0x14
    ctx->r16 = ADD32(ctx->r20, 0X14);
    // 0x802312F4: jal         0x8002A33C
    // 0x802312F8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_3;
    // 0x802312F8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_3:
    // 0x802312FC: lbu         $v0, 0x1DD($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X1DD);
    // 0x80231300: beq         $v0, $zero, L_8023134C
    if (ctx->r2 == 0) {
        // 0x80231304: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023134C;
    }
    // 0x80231304: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80231308: lbu         $v1, 0x1DC($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X1DC);
    // 0x8023130C: bne         $v1, $v0, L_8023167C
    if (ctx->r3 != ctx->r2) {
        // 0x80231310: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_8023167C;
    }
    // 0x80231310: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80231314: lbu         $v1, 0x9($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X9);
    // 0x80231318: beq         $v1, $v0, L_8023167C
    if (ctx->r3 == ctx->r2) {
        // 0x8023131C: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_8023167C;
    }
    // 0x8023131C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x80231320: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x80231324: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80231328: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8023132C: sb          $v0, 0x9($s4)
    MEM_B(0X9, ctx->r20) = ctx->r2;
    // 0x80231330: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80231334: sb          $zero, 0xA($s4)
    MEM_B(0XA, ctx->r20) = 0;
    // 0x80231338: jal         0x80050294
    // 0x8023133C: sb          $v0, 0xAC($s4)
    MEM_B(0XAC, ctx->r20) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_4;
    // 0x8023133C: sb          $v0, 0xAC($s4)
    MEM_B(0XAC, ctx->r20) = ctx->r2;
    after_4:
    // 0x80231340: lbu         $v0, 0xCA($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XCA);
    // 0x80231344: j           L_80231678
    // 0x80231348: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
        goto L_80231678;
    // 0x80231348: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
L_8023134C:
    // 0x8023134C: addiu       $a0, $s4, 0x1C
    ctx->r4 = ADD32(ctx->r20, 0X1C);
    // 0x80231350: lh          $a1, 0x56($s4)
    ctx->r5 = MEM_H(ctx->r20, 0X56);
    // 0x80231354: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    // 0x80231358: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x8023135C: sb          $v0, 0x1DD($s4)
    MEM_B(0X1DD, ctx->r20) = ctx->r2;
    // 0x80231360: sb          $zero, 0x1DC($s4)
    MEM_B(0X1DC, ctx->r20) = 0;
    // 0x80231364: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80231368: lh          $v1, 0x4A06($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X4A06);
    // 0x8023136C: addiu       $a3, $s2, 0x1C
    ctx->r7 = ADD32(ctx->r18, 0X1C);
    // 0x80231370: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x80231374: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80231378: jal         0x8004FAEC
    // 0x8023137C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_8004FAEC_2AEEC(rdram, ctx);
        goto after_5;
    // 0x8023137C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_5:
    // 0x80231380: bne         $v0, $zero, L_8023167C
    if (ctx->r2 != 0) {
        // 0x80231384: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_8023167C;
    }
    // 0x80231384: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80231388: lbu         $v1, 0x9($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X9);
    // 0x8023138C: beq         $v1, $v0, L_8023167C
    if (ctx->r3 == ctx->r2) {
        // 0x80231390: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023167C;
    }
    // 0x80231390: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80231394: lh          $a2, 0x56($s4)
    ctx->r6 = MEM_H(ctx->r20, 0X56);
    // 0x80231398: lh          $a3, 0x382($s4)
    ctx->r7 = MEM_H(ctx->r20, 0X382);
    // 0x8023139C: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x802313A0: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x802313A4: sb          $v0, 0x9($s4)
    MEM_B(0X9, ctx->r20) = ctx->r2;
    // 0x802313A8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802313AC: jal         0x8004F820
    // 0x802313B0: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_6;
    // 0x802313B0: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
    after_6:
    // 0x802313B4: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x802313B8: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x802313BC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802313C0: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
L_802313C4:
    // 0x802313C4: jal         0x80050294
    // 0x802313C8: sb          $v0, 0xAC($s4)
    MEM_B(0XAC, ctx->r20) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_7;
    // 0x802313C8: sb          $v0, 0xAC($s4)
    MEM_B(0XAC, ctx->r20) = ctx->r2;
    after_7:
    // 0x802313CC: j           L_8023167C
    // 0x802313D0: nop

        goto L_8023167C;
    // 0x802313D0: nop

L_802313D4:
    // 0x802313D4: lbu         $v1, 0x9($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X9);
    // 0x802313D8: addiu       $v0, $v1, -0x2
    ctx->r2 = ADD32(ctx->r3, -0X2);
    // 0x802313DC: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x802313E0: bne         $v0, $zero, L_8023167C
    if (ctx->r2 != 0) {
        // 0x802313E4: addiu       $v0, $v1, -0x4
        ctx->r2 = ADD32(ctx->r3, -0X4);
            goto L_8023167C;
    }
    // 0x802313E4: addiu       $v0, $v1, -0x4
    ctx->r2 = ADD32(ctx->r3, -0X4);
    // 0x802313E8: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x802313EC: bne         $v0, $zero, L_8023167C
    if (ctx->r2 != 0) {
        // 0x802313F0: nop
    
            goto L_8023167C;
    }
    // 0x802313F0: nop

    // 0x802313F4: lbu         $v0, 0xCA($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XCA);
    // 0x802313F8: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x802313FC: bne         $v0, $zero, L_8023167C
    if (ctx->r2 != 0) {
        // 0x80231400: andi        $v1, $v1, 0xFF
        ctx->r3 = ctx->r3 & 0XFF;
            goto L_8023167C;
    }
    // 0x80231400: andi        $v1, $v1, 0xFF
    ctx->r3 = ctx->r3 & 0XFF;
    // 0x80231404: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80231408: beq         $v1, $v0, L_8023167C
    if (ctx->r3 == ctx->r2) {
        // 0x8023140C: nop
    
            goto L_8023167C;
    }
    // 0x8023140C: nop

    // 0x80231410: lb          $v0, 0x386($s4)
    ctx->r2 = MEM_B(ctx->r20, 0X386);
    // 0x80231414: beq         $v0, $zero, L_80231424
    if (ctx->r2 == 0) {
        // 0x80231418: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80231424;
    }
    // 0x80231418: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023141C: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80231420: sb          $v0, 0x386($s4)
    MEM_B(0X386, ctx->r20) = ctx->r2;
L_80231424:
    // 0x80231424: lbu         $v0, 0xCA($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XCA);
    // 0x80231428: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x8023142C: beq         $v0, $zero, L_8023163C
    if (ctx->r2 == 0) {
        // 0x80231430: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023163C;
    }
    // 0x80231430: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231434: lbu         $v1, 0x9($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X9);
    // 0x80231438: beq         $v1, $v0, L_802315F8
    if (ctx->r3 == ctx->r2) {
        // 0x8023143C: addiu       $a0, $s4, 0x1C
        ctx->r4 = ADD32(ctx->r20, 0X1C);
            goto L_802315F8;
    }
    // 0x8023143C: addiu       $a0, $s4, 0x1C
    ctx->r4 = ADD32(ctx->r20, 0X1C);
    // 0x80231440: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    // 0x80231444: lh          $a1, 0x56($s4)
    ctx->r5 = MEM_H(ctx->r20, 0X56);
    // 0x80231448: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8023144C: lh          $v1, 0x4A06($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X4A06);
    // 0x80231450: addiu       $a3, $s2, 0x1C
    ctx->r7 = ADD32(ctx->r18, 0X1C);
    // 0x80231454: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x80231458: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8023145C: jal         0x8004FAEC
    // 0x80231460: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_8004FAEC_2AEEC(rdram, ctx);
        goto after_8;
    // 0x80231460: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_8:
    // 0x80231464: beq         $v0, $zero, L_80231564
    if (ctx->r2 == 0) {
        // 0x80231468: lui         $v0, 0x12
        ctx->r2 = S32(0X12 << 16);
            goto L_80231564;
    }
    // 0x80231468: lui         $v0, 0x12
    ctx->r2 = S32(0X12 << 16);
    // 0x8023146C: lw          $v1, 0x80($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X80);
    // 0x80231470: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80231474: beq         $v0, $zero, L_80231488
    if (ctx->r2 == 0) {
        // 0x80231478: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80231488;
    }
    // 0x80231478: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023147C: sb          $v0, 0x9($s4)
    MEM_B(0X9, ctx->r20) = ctx->r2;
    // 0x80231480: j           L_802315F8
    // 0x80231484: sb          $zero, 0xA($s4)
    MEM_B(0XA, ctx->r20) = 0;
        goto L_802315F8;
    // 0x80231484: sb          $zero, 0xA($s4)
    MEM_B(0XA, ctx->r20) = 0;
L_80231488:
    // 0x80231488: lui         $v0, 0x4
    ctx->r2 = S32(0X4 << 16);
    // 0x8023148C: ori         $v0, $v0, 0x4AA1
    ctx->r2 = ctx->r2 | 0X4AA1;
    // 0x80231490: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80231494: bne         $v0, $zero, L_802314E0
    if (ctx->r2 != 0) {
        // 0x80231498: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_802314E0;
    }
    // 0x80231498: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8023149C: lb          $v0, 0x386($s4)
    ctx->r2 = MEM_B(ctx->r20, 0X386);
    // 0x802314A0: bne         $v0, $zero, L_802314E0
    if (ctx->r2 != 0) {
        // 0x802314A4: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_802314E0;
    }
    // 0x802314A4: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x802314A8: lbu         $v1, 0x3($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X3);
    // 0x802314AC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802314B0: beq         $v1, $v0, L_802314C4
    if (ctx->r3 == ctx->r2) {
        // 0x802314B4: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802314C4;
    }
    // 0x802314B4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802314B8: sb          $v0, 0x9($s4)
    MEM_B(0X9, ctx->r20) = ctx->r2;
    // 0x802314BC: j           L_802315F0
    // 0x802314C0: sb          $zero, 0xA($s4)
    MEM_B(0XA, ctx->r20) = 0;
        goto L_802315F0;
    // 0x802314C0: sb          $zero, 0xA($s4)
    MEM_B(0XA, ctx->r20) = 0;
L_802314C4:
    // 0x802314C4: sb          $v0, 0x9($s4)
    MEM_B(0X9, ctx->r20) = ctx->r2;
    // 0x802314C8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802314CC: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
    // 0x802314D0: sb          $zero, 0x66($s4)
    MEM_B(0X66, ctx->r20) = 0;
    // 0x802314D4: sb          $zero, 0x65($s4)
    MEM_B(0X65, ctx->r20) = 0;
    // 0x802314D8: j           L_802315F0
    // 0x802314DC: sb          $zero, 0x64($s4)
    MEM_B(0X64, ctx->r20) = 0;
        goto L_802315F0;
    // 0x802314DC: sb          $zero, 0x64($s4)
    MEM_B(0X64, ctx->r20) = 0;
L_802314E0:
    // 0x802314E0: sb          $zero, 0x9($s4)
    MEM_B(0X9, ctx->r20) = 0;
    // 0x802314E4: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
    // 0x802314E8: lbu         $v0, 0x6($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X6);
    // 0x802314EC: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x802314F0: bne         $v0, $zero, L_8023150C
    if (ctx->r2 != 0) {
        // 0x802314F4: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_8023150C;
    }
    // 0x802314F4: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x802314F8: lbu         $v0, 0x6($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X6);
    // 0x802314FC: sb          $zero, 0x7($s6)
    MEM_B(0X7, ctx->r22) = 0;
    // 0x80231500: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x80231504: sb          $v0, 0x6($s6)
    MEM_B(0X6, ctx->r22) = ctx->r2;
    // 0x80231508: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
L_8023150C:
    // 0x8023150C: sh          $v0, 0x3A($s5)
    MEM_H(0X3A, ctx->r21) = ctx->r2;
    // 0x80231510: lbu         $v1, 0x3($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X3);
    // 0x80231514: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80231518: beq         $v1, $v0, L_802315F8
    if (ctx->r3 == ctx->r2) {
        // 0x8023151C: nop
    
            goto L_802315F8;
    }
    // 0x8023151C: nop

    // 0x80231520: lbu         $v0, 0x6($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X6);
    // 0x80231524: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80231528: bne         $v0, $zero, L_802315F8
    if (ctx->r2 != 0) {
        // 0x8023152C: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_802315F8;
    }
    // 0x8023152C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80231530: sb          $v0, 0x9($s4)
    MEM_B(0X9, ctx->r20) = ctx->r2;
    // 0x80231534: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80231538: sb          $v0, 0xAC($s4)
    MEM_B(0XAC, ctx->r20) = ctx->r2;
    // 0x8023153C: lbu         $v0, 0x6($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X6);
    // 0x80231540: ori         $v0, $v0, 0x3
    ctx->r2 = ctx->r2 | 0X3;
    // 0x80231544: andi        $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 & 0X7F;
    // 0x80231548: sb          $v0, 0x6($s6)
    MEM_B(0X6, ctx->r22) = ctx->r2;
    // 0x8023154C: lbu         $a1, 0xAC($s4)
    ctx->r5 = MEM_BU(ctx->r20, 0XAC);
    // 0x80231550: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x80231554: jal         0x80050294
    // 0x80231558: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_9;
    // 0x80231558: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_9:
    // 0x8023155C: j           L_802315F8
    // 0x80231560: nop

        goto L_802315F8;
    // 0x80231560: nop

L_80231564:
    // 0x80231564: lbu         $v1, 0xCA($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0XCA);
    // 0x80231568: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8023156C: sb          $zero, 0x9($s4)
    MEM_B(0X9, ctx->r20) = 0;
    // 0x80231570: andi        $v1, $v1, 0x80
    ctx->r3 = ctx->r3 & 0X80;
    // 0x80231574: bne         $v1, $zero, L_8023158C
    if (ctx->r3 != 0) {
        // 0x80231578: sb          $v0, 0xA($s4)
        MEM_B(0XA, ctx->r20) = ctx->r2;
            goto L_8023158C;
    }
    // 0x80231578: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
    // 0x8023157C: lbu         $v0, 0xCA($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XCA);
    // 0x80231580: sb          $zero, 0xCB($s4)
    MEM_B(0XCB, ctx->r20) = 0;
    // 0x80231584: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x80231588: sb          $v0, 0xCA($s4)
    MEM_B(0XCA, ctx->r20) = ctx->r2;
L_8023158C:
    // 0x8023158C: lui         $v0, 0x4
    ctx->r2 = S32(0X4 << 16);
    // 0x80231590: lw          $a0, 0x80($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X80);
    // 0x80231594: ori         $v0, $v0, 0x4AA1
    ctx->r2 = ctx->r2 | 0X4AA1;
    // 0x80231598: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    // 0x8023159C: sltu        $v0, $v0, $a0
    ctx->r2 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x802315A0: bne         $v0, $zero, L_802315F8
    if (ctx->r2 != 0) {
        // 0x802315A4: sh          $v1, 0x382($s4)
        MEM_H(0X382, ctx->r20) = ctx->r3;
            goto L_802315F8;
    }
    // 0x802315A4: sh          $v1, 0x382($s4)
    MEM_H(0X382, ctx->r20) = ctx->r3;
    // 0x802315A8: lb          $v0, 0x386($s4)
    ctx->r2 = MEM_B(ctx->r20, 0X386);
    // 0x802315AC: bne         $v0, $zero, L_802315F8
    if (ctx->r2 != 0) {
        // 0x802315B0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802315F8;
    }
    // 0x802315B0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802315B4: lbu         $v1, 0x3($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X3);
    // 0x802315B8: beq         $v1, $v0, L_802315CC
    if (ctx->r3 == ctx->r2) {
        // 0x802315BC: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802315CC;
    }
    // 0x802315BC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802315C0: sb          $v0, 0x9($s4)
    MEM_B(0X9, ctx->r20) = ctx->r2;
    // 0x802315C4: j           L_802315E4
    // 0x802315C8: sb          $zero, 0xA($s4)
    MEM_B(0XA, ctx->r20) = 0;
        goto L_802315E4;
    // 0x802315C8: sb          $zero, 0xA($s4)
    MEM_B(0XA, ctx->r20) = 0;
L_802315CC:
    // 0x802315CC: sb          $v0, 0x9($s4)
    MEM_B(0X9, ctx->r20) = ctx->r2;
    // 0x802315D0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802315D4: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
    // 0x802315D8: sb          $zero, 0x66($s4)
    MEM_B(0X66, ctx->r20) = 0;
    // 0x802315DC: sb          $zero, 0x65($s4)
    MEM_B(0X65, ctx->r20) = 0;
    // 0x802315E0: sb          $zero, 0x64($s4)
    MEM_B(0X64, ctx->r20) = 0;
L_802315E4:
    // 0x802315E4: lbu         $v0, 0x6($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X6);
    // 0x802315E8: andi        $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 & 0X7F;
    // 0x802315EC: sb          $v0, 0x6($s6)
    MEM_B(0X6, ctx->r22) = ctx->r2;
L_802315F0:
    // 0x802315F0: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x802315F4: sh          $v0, 0x3A($s5)
    MEM_H(0X3A, ctx->r21) = ctx->r2;
L_802315F8:
    // 0x802315F8: lw          $v0, 0x8($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X8);
    // 0x802315FC: lui         $v1, 0xFF
    ctx->r3 = S32(0XFF << 16);
    // 0x80231600: ori         $v1, $v1, 0xFF00
    ctx->r3 = ctx->r3 | 0XFF00;
    // 0x80231604: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80231608: addiu       $v1, $zero, 0x600
    ctx->r3 = ADD32(0, 0X600);
    // 0x8023160C: bne         $v0, $v1, L_8023167C
    if (ctx->r2 != ctx->r3) {
        // 0x80231610: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023167C;
    }
    // 0x80231610: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231614: lbu         $v1, 0xAC($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0XAC);
    // 0x80231618: beq         $v1, $v0, L_8023167C
    if (ctx->r3 == ctx->r2) {
        // 0x8023161C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023167C;
    }
    // 0x8023161C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231620: sb          $v0, 0xAC($s4)
    MEM_B(0XAC, ctx->r20) = ctx->r2;
    // 0x80231624: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x80231628: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8023162C: jal         0x80050294
    // 0x80231630: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_10;
    // 0x80231630: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_10:
    // 0x80231634: j           L_8023167C
    // 0x80231638: nop

        goto L_8023167C;
    // 0x80231638: nop

L_8023163C:
    // 0x8023163C: lbu         $v0, 0x9($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X9);
    // 0x80231640: bne         $v0, $zero, L_80231684
    if (ctx->r2 != 0) {
        // 0x80231644: sll         $v0, $v0, 2
        ctx->r2 = S32(ctx->r2 << 2);
            goto L_80231684;
    }
    // 0x80231644: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80231648: lbu         $v1, 0xA($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0XA);
    // 0x8023164C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80231650: bne         $v1, $v0, L_8023167C
    if (ctx->r3 != ctx->r2) {
        // 0x80231654: addiu       $v1, $zero, 0x80
        ctx->r3 = ADD32(0, 0X80);
            goto L_8023167C;
    }
    // 0x80231654: addiu       $v1, $zero, 0x80
    ctx->r3 = ADD32(0, 0X80);
    // 0x80231658: lbu         $v0, 0xCA($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XCA);
    // 0x8023165C: sh          $v1, 0x44($s4)
    MEM_H(0X44, ctx->r20) = ctx->r3;
    // 0x80231660: addiu       $v1, $zero, 0x78
    ctx->r3 = ADD32(0, 0X78);
    // 0x80231664: sb          $zero, 0xA($s4)
    MEM_B(0XA, ctx->r20) = 0;
    // 0x80231668: sb          $zero, 0xF($s4)
    MEM_B(0XF, ctx->r20) = 0;
    // 0x8023166C: sb          $v1, 0x385($s4)
    MEM_B(0X385, ctx->r20) = ctx->r3;
    // 0x80231670: sb          $zero, 0x384($s4)
    MEM_B(0X384, ctx->r20) = 0;
    // 0x80231674: andi        $v0, $v0, 0x7E
    ctx->r2 = ctx->r2 & 0X7E;
L_80231678:
    // 0x80231678: sb          $v0, 0xCA($s4)
    MEM_B(0XCA, ctx->r20) = ctx->r2;
L_8023167C:
    // 0x8023167C: lbu         $v0, 0x9($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X9);
    // 0x80231680: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_80231684:
    // 0x80231684: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80231688: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023168C: lw          $v0, -0x7A44($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7A44);
    // 0x80231690: jalr        $v0
    // 0x80231694: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_11;
    // 0x80231694: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_11:
    // 0x80231698: lbu         $v1, 0xA6($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0XA6);
    // 0x8023169C: andi        $v0, $v1, 0x4
    ctx->r2 = ctx->r3 & 0X4;
    // 0x802316A0: bne         $v0, $zero, L_802316B4
    if (ctx->r2 != 0) {
        // 0x802316A4: addiu       $a0, $zero, 0x159
        ctx->r4 = ADD32(0, 0X159);
            goto L_802316B4;
    }
    // 0x802316A4: addiu       $a0, $zero, 0x159
    ctx->r4 = ADD32(0, 0X159);
    // 0x802316A8: andi        $v0, $v1, 0x8
    ctx->r2 = ctx->r3 & 0X8;
    // 0x802316AC: beq         $v0, $zero, L_802316BC
    if (ctx->r2 == 0) {
        // 0x802316B0: addiu       $a0, $zero, 0x15A
        ctx->r4 = ADD32(0, 0X15A);
            goto L_802316BC;
    }
    // 0x802316B0: addiu       $a0, $zero, 0x15A
    ctx->r4 = ADD32(0, 0X15A);
L_802316B4:
    // 0x802316B4: jal         0x8002A33C
    // 0x802316B8: addiu       $a1, $s4, 0x14
    ctx->r5 = ADD32(ctx->r20, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_12;
    // 0x802316B8: addiu       $a1, $s4, 0x14
    ctx->r5 = ADD32(ctx->r20, 0X14);
    after_12:
L_802316BC:
    // 0x802316BC: lbu         $v1, 0x9($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X9);
    // 0x802316C0: addiu       $v0, $v1, -0x5
    ctx->r2 = ADD32(ctx->r3, -0X5);
    // 0x802316C4: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x802316C8: bne         $v0, $zero, L_802316E4
    if (ctx->r2 != 0) {
        // 0x802316CC: andi        $v1, $v1, 0xFF
        ctx->r3 = ctx->r3 & 0XFF;
            goto L_802316E4;
    }
    // 0x802316CC: andi        $v1, $v1, 0xFF
    ctx->r3 = ctx->r3 & 0XFF;
    // 0x802316D0: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x802316D4: beq         $v1, $v0, L_802316E4
    if (ctx->r3 == ctx->r2) {
        // 0x802316D8: nop
    
            goto L_802316E4;
    }
    // 0x802316D8: nop

    // 0x802316DC: jal         0x80233374
    // 0x802316E0: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_80233374_ovl31(rdram, ctx);
        goto after_13;
    // 0x802316E0: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_13:
L_802316E4:
    // 0x802316E4: lbu         $v1, 0x3($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X3);
    // 0x802316E8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802316EC: bnel        $v1, $v0, L_80231774
    if (ctx->r3 != ctx->r2) {
        // 0x802316F0: addu        $a0, $s5, $zero
        ctx->r4 = ADD32(ctx->r21, 0);
            goto L_80231774;
    }
    goto skip_0;
    // 0x802316F0: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    skip_0:
    // 0x802316F4: lh          $v0, 0x15E($s4)
    ctx->r2 = MEM_H(ctx->r20, 0X15E);
    // 0x802316F8: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x802316FC: beq         $v0, $zero, L_8023171C
    if (ctx->r2 == 0) {
        // 0x80231700: nop
    
            goto L_8023171C;
    }
    // 0x80231700: nop

    // 0x80231704: lb          $v0, 0x2($s3)
    ctx->r2 = MEM_B(ctx->r19, 0X2);
    // 0x80231708: bne         $v0, $zero, L_8023171C
    if (ctx->r2 != 0) {
        // 0x8023170C: nop
    
            goto L_8023171C;
    }
    // 0x8023170C: nop

    // 0x80231710: lbu         $v0, 0x0($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X0);
    // 0x80231714: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80231718: sb          $v0, 0x0($s4)
    MEM_B(0X0, ctx->r20) = ctx->r2;
L_8023171C:
    // 0x8023171C: lbu         $v0, 0x0($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X0);
    // 0x80231720: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80231724: bne         $v0, $zero, L_80231774
    if (ctx->r2 != 0) {
        // 0x80231728: addu        $a0, $s5, $zero
        ctx->r4 = ADD32(ctx->r21, 0);
            goto L_80231774;
    }
    // 0x80231728: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x8023172C: addiu       $a1, $s4, 0x180
    ctx->r5 = ADD32(ctx->r20, 0X180);
    // 0x80231730: jal         0x8009A3B4
    // 0x80231734: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_14;
    // 0x80231734: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_14:
    // 0x80231738: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x8023173C: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
    // 0x80231740: lbu         $v1, 0x1($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X1);
    // 0x80231744: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80231748: addiu       $v0, $s5, 0x8
    ctx->r2 = ADD32(ctx->r21, 0X8);
    // 0x8023174C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80231750: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x80231754: lb          $v1, 0x73($s4)
    ctx->r3 = MEM_B(ctx->r20, 0X73);
    // 0x80231758: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8023175C: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x80231760: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80231764: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80231768: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8023176C: j           L_802317B4
    // 0x80231770: lui         $v0, 0x408
    ctx->r2 = S32(0X408 << 16);
        goto L_802317B4;
    // 0x80231770: lui         $v0, 0x408
    ctx->r2 = S32(0X408 << 16);
L_80231774:
    // 0x80231774: addiu       $a1, $s4, 0x180
    ctx->r5 = ADD32(ctx->r20, 0X180);
    // 0x80231778: jal         0x8009A3B4
    // 0x8023177C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_15;
    // 0x8023177C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_15:
    // 0x80231780: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x80231784: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
    // 0x80231788: lbu         $v1, 0x1($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X1);
    // 0x8023178C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80231790: addiu       $v0, $s5, 0x8
    ctx->r2 = ADD32(ctx->r21, 0X8);
    // 0x80231794: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80231798: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x8023179C: lb          $v1, 0x73($s4)
    ctx->r3 = MEM_B(ctx->r20, 0X73);
    // 0x802317A0: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x802317A4: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x802317A8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x802317AC: lui         $v0, 0x408
    ctx->r2 = S32(0X408 << 16);
    // 0x802317B0: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
L_802317B4:
    // 0x802317B4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x802317B8: jal         0x80051E18
    // 0x802317BC: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_16;
    // 0x802317BC: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_16:
    // 0x802317C0: lbu         $v0, 0x6($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X6);
    // 0x802317C4: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x802317C8: beq         $v0, $zero, L_802318D8
    if (ctx->r2 == 0) {
        // 0x802317CC: addiu       $a0, $s4, 0x228
        ctx->r4 = ADD32(ctx->r20, 0X228);
            goto L_802318D8;
    }
    // 0x802317CC: addiu       $a0, $s4, 0x228
    ctx->r4 = ADD32(ctx->r20, 0X228);
    // 0x802317D0: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x802317D4: addiu       $s3, $sp, 0x30
    ctx->r19 = ADD32(ctx->r29, 0X30);
    // 0x802317D8: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    // 0x802317DC: addiu       $v0, $zero, 0x738
    ctx->r2 = ADD32(0, 0X738);
    // 0x802317E0: sh          $v0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r2;
    // 0x802317E4: addiu       $v0, $zero, -0x30
    ctx->r2 = ADD32(0, -0X30);
    // 0x802317E8: sh          $zero, 0x28($sp)
    MEM_H(0X28, ctx->r29) = 0;
    // 0x802317EC: jal         0x800308E8
    // 0x802317F0: sh          $v0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r2;
    func_800308E8_BCE8(rdram, ctx);
        goto after_17;
    // 0x802317F0: sh          $v0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r2;
    after_17:
    // 0x802317F4: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x802317F8: lhu         $v0, 0x190($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X190);
    // 0x802317FC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80231800: sh          $v0, 0x0($s5)
    MEM_H(0X0, ctx->r21) = ctx->r2;
    // 0x80231804: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x80231808: lhu         $v0, 0x192($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X192);
    // 0x8023180C: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x80231810: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80231814: sh          $v0, 0x2($s5)
    MEM_H(0X2, ctx->r21) = ctx->r2;
    // 0x80231818: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x8023181C: lhu         $v0, 0x194($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X194);
    // 0x80231820: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    // 0x80231824: addiu       $s2, $s5, 0x18
    ctx->r18 = ADD32(ctx->r21, 0X18);
    // 0x80231828: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023182C: sh          $v0, 0x4($s5)
    MEM_H(0X4, ctx->r21) = ctx->r2;
    // 0x80231830: lbu         $v0, 0x1($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X1);
    // 0x80231834: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80231838: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8023183C: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    // 0x80231840: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80231844: lhu         $v0, 0x4($s6)
    ctx->r2 = MEM_HU(ctx->r22, 0X4);
    // 0x80231848: addiu       $s1, $zero, 0x80
    ctx->r17 = ADD32(0, 0X80);
    // 0x8023184C: lui         $s0, 0x508
    ctx->r16 = S32(0X508 << 16);
    // 0x80231850: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80231854: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80231858: or          $v0, $v0, $s0
    ctx->r2 = ctx->r2 | ctx->r16;
    // 0x8023185C: jal         0x80051E18
    // 0x80231860: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80051E18_2D218(rdram, ctx);
        goto after_18;
    // 0x80231860: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_18:
    // 0x80231864: addiu       $a0, $s4, 0x268
    ctx->r4 = ADD32(ctx->r20, 0X268);
    // 0x80231868: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x8023186C: jal         0x800308E8
    // 0x80231870: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    func_800308E8_BCE8(rdram, ctx);
        goto after_19;
    // 0x80231870: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    after_19:
    // 0x80231874: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x80231878: lhu         $v0, 0x1A0($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X1A0);
    // 0x8023187C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80231880: sh          $v0, 0x0($s5)
    MEM_H(0X0, ctx->r21) = ctx->r2;
    // 0x80231884: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x80231888: lhu         $v0, 0x1A2($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X1A2);
    // 0x8023188C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80231890: sh          $v0, 0x2($s5)
    MEM_H(0X2, ctx->r21) = ctx->r2;
    // 0x80231894: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x80231898: lhu         $v0, 0x1A4($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X1A4);
    // 0x8023189C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802318A0: sh          $v0, 0x4($s5)
    MEM_H(0X4, ctx->r21) = ctx->r2;
    // 0x802318A4: lbu         $v0, 0x1($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X1);
    // 0x802318A8: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x802318AC: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    // 0x802318B0: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    // 0x802318B4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x802318B8: lhu         $v0, 0x4($s6)
    ctx->r2 = MEM_HU(ctx->r22, 0X4);
    // 0x802318BC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802318C0: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x802318C4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802318C8: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x802318CC: or          $v0, $v0, $s0
    ctx->r2 = ctx->r2 | ctx->r16;
    // 0x802318D0: jal         0x80051E18
    // 0x802318D4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80051E18_2D218(rdram, ctx);
        goto after_20;
    // 0x802318D4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_20:
L_802318D8:
    // 0x802318D8: lbu         $v1, 0x3($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X3);
    // 0x802318DC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802318E0: beq         $v1, $v0, L_80231908
    if (ctx->r3 == ctx->r2) {
        // 0x802318E4: nop
    
            goto L_80231908;
    }
    // 0x802318E4: nop

    // 0x802318E8: lbu         $v0, 0x0($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X0);
    // 0x802318EC: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x802318F0: beq         $v0, $zero, L_80231908
    if (ctx->r2 == 0) {
        // 0x802318F4: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_80231908;
    }
    // 0x802318F4: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x802318F8: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    // 0x802318FC: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x80231900: jal         0x8003B564
    // 0x80231904: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_21;
    // 0x80231904: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_21:
L_80231908:
    // 0x80231908: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x8023190C: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x80231910: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x80231914: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x80231918: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x8023191C: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x80231920: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x80231924: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x80231928: jr          $ra
    // 0x8023192C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    TRACE_RETURN()
    return;
    // 0x8023192C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_80231CE8_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231CE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231CEC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80231CF0: lhu         $v1, 0x1DA($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X1DA);
    // 0x80231CF4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80231CF8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80231CFC: sb          $a1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r5;
    // 0x80231D00: andi        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 & 0X1;
    // 0x80231D04: beq         $v1, $zero, L_80231D18
    if (ctx->r3 == 0) {
        // 0x80231D08: sb          $v0, 0x385($a0)
        MEM_B(0X385, ctx->r4) = ctx->r2;
            goto L_80231D18;
    }
    // 0x80231D08: sb          $v0, 0x385($a0)
    MEM_B(0X385, ctx->r4) = ctx->r2;
    // 0x80231D0C: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x80231D10: j           L_80231D20
    // 0x80231D14: sb          $zero, 0xE($a0)
    MEM_B(0XE, ctx->r4) = 0;
        goto L_80231D20;
    // 0x80231D14: sb          $zero, 0xE($a0)
    MEM_B(0XE, ctx->r4) = 0;
L_80231D18:
    // 0x80231D18: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x80231D1C: sb          $a1, 0xE($a0)
    MEM_B(0XE, ctx->r4) = ctx->r5;
L_80231D20:
    // 0x80231D20: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x80231D24: lbu         $a1, 0xAC($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0XAC);
    // 0x80231D28: jal         0x80050294
    // 0x80231D2C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80231D2C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80231D30: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80231D34: jr          $ra
    // 0x80231D38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80231D38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80231A08_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231A08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231A0C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231A10: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80231A14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80231A18: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80231A1C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80231A20: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80231A24: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80231A28: lw          $v0, -0x7A20($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7A20);
    // 0x80231A2C: jalr        $v0
    // 0x80231A30: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80231A30: nop

    after_0:
    // 0x80231A34: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80231A38: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80231A3C: bne         $v1, $v0, L_80231ACC
    if (ctx->r3 != ctx->r2) {
        // 0x80231A40: nop
    
            goto L_80231ACC;
    }
    // 0x80231A40: nop

    // 0x80231A44: lbu         $v1, 0x64($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X64);
    // 0x80231A48: lbu         $a0, 0x65($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X65);
    // 0x80231A4C: lbu         $a1, 0x66($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X66);
    // 0x80231A50: lbu         $v0, 0x64($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X64);
    // 0x80231A54: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x80231A58: andi        $a0, $a0, 0x1F
    ctx->r4 = ctx->r4 & 0X1F;
    // 0x80231A5C: andi        $a1, $a1, 0x1F
    ctx->r5 = ctx->r5 & 0X1F;
    // 0x80231A60: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x80231A64: sll         $a0, $a0, 5
    ctx->r4 = S32(ctx->r4 << 5);
    // 0x80231A68: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x80231A6C: sb          $v0, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r2;
    // 0x80231A70: lbu         $v0, 0x65($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X65);
    // 0x80231A74: lb          $a0, 0x64($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X64);
    // 0x80231A78: sll         $a1, $a1, 10
    ctx->r5 = S32(ctx->r5 << 10);
    // 0x80231A7C: or          $v1, $v1, $a1
    ctx->r3 = ctx->r3 | ctx->r5;
    // 0x80231A80: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x80231A84: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x80231A88: bgez        $a0, L_80231AA4
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80231A8C: sb          $v0, 0x65($s0)
        MEM_B(0X65, ctx->r16) = ctx->r2;
            goto L_80231AA4;
    }
    // 0x80231A8C: sb          $v0, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r2;
    // 0x80231A90: lhu         $v0, 0x15E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X15E);
    // 0x80231A94: sb          $zero, 0x64($s0)
    MEM_B(0X64, ctx->r16) = 0;
    // 0x80231A98: sb          $zero, 0x65($s0)
    MEM_B(0X65, ctx->r16) = 0;
    // 0x80231A9C: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x80231AA0: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
L_80231AA4:
    // 0x80231AA4: lh          $v0, 0x15E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X15E);
    // 0x80231AA8: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x80231AAC: beq         $v0, $zero, L_80231ACC
    if (ctx->r2 == 0) {
        // 0x80231AB0: nop
    
            goto L_80231ACC;
    }
    // 0x80231AB0: nop

    // 0x80231AB4: lbu         $v0, 0x66($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X66);
    // 0x80231AB8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80231ABC: sb          $v0, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r2;
    // 0x80231AC0: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80231AC4: bltzl       $v0, L_80231ACC
    if (SIGNED(ctx->r2) < 0) {
        // 0x80231AC8: sb          $zero, 0x66($s0)
        MEM_B(0X66, ctx->r16) = 0;
            goto L_80231ACC;
    }
    goto skip_0;
    // 0x80231AC8: sb          $zero, 0x66($s0)
    MEM_B(0X66, ctx->r16) = 0;
    skip_0:
L_80231ACC:
    // 0x80231ACC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80231AD0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231AD4: jr          $ra
    // 0x80231AD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80231AD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802325E4_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802325E4: lb          $v1, 0xA6($a0)
    ctx->r3 = MEM_B(ctx->r4, 0XA6);
    // 0x802325E8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802325EC: bne         $v1, $v0, L_802325F8
    if (ctx->r3 != ctx->r2) {
        // 0x802325F0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802325F8;
    }
    // 0x802325F0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802325F4: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_802325F8:
    // 0x802325F8: jr          $ra
    // 0x802325FC: nop

    TRACE_RETURN()
    return;
    // 0x802325FC: nop

;}
RECOMP_FUNC void func_802373D4_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802373D4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802373D8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802373DC: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x802373E0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802373E4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802373E8: jal         0x8004EFE4
    // 0x802373EC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_0;
    // 0x802373EC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x802373F0: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x802373F4: beq         $s1, $zero, L_802374A8
    if (ctx->r17 == 0) {
        // 0x802373F8: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_802374A8;
    }
    // 0x802373F8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x802373FC: addiu       $a1, $zero, 0x6E
    ctx->r5 = ADD32(0, 0X6E);
    // 0x80237400: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80237404: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80237408: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x8023740C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80237410: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80237414: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
    // 0x80237418: jal         0x8004DA90
    // 0x8023741C: sb          $zero, 0x3($s1)
    MEM_B(0X3, ctx->r17) = 0;
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x8023741C: sb          $zero, 0x3($s1)
    MEM_B(0X3, ctx->r17) = 0;
    after_1:
    // 0x80237420: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x80237424: lhu         $v0, 0x16($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X16);
    // 0x80237428: addiu       $s0, $s2, 0x14
    ctx->r16 = ADD32(ctx->r18, 0X14);
    // 0x8023742C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80237430: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80237434: addiu       $v0, $v0, -0x3C
    ctx->r2 = ADD32(ctx->r2, -0X3C);
    // 0x80237438: jal         0x8009A3B4
    // 0x8023743C: sh          $v0, 0x16($s2)
    MEM_H(0X16, ctx->r18) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8023743C: sh          $v0, 0x16($s2)
    MEM_H(0X16, ctx->r18) = ctx->r2;
    after_2:
    // 0x80237440: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237444: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x80237448: lh          $v1, 0x16($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X16);
    // 0x8023744C: lh          $a2, 0x18($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X18);
    // 0x80237450: addiu       $a1, $s2, 0x2C
    ctx->r5 = ADD32(ctx->r18, 0X2C);
    // 0x80237454: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80237458: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8023745C: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x80237460: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x80237464: sw          $v1, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r3;
    // 0x80237468: sw          $a2, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r6;
    // 0x8023746C: lhu         $v1, 0x56($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X56);
    // 0x80237470: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80237474: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80237478: sw          $v0, 0x9C($s1)
    MEM_W(0X9C, ctx->r17) = ctx->r2;
    // 0x8023747C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80237480: sw          $v0, 0xA0($s1)
    MEM_W(0XA0, ctx->r17) = ctx->r2;
    // 0x80237484: jal         0x8009A3B4
    // 0x80237488: sh          $v1, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r3;
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80237488: sh          $v1, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r3;
    after_3:
    // 0x8023748C: addiu       $a0, $s2, 0x1C
    ctx->r4 = ADD32(ctx->r18, 0X1C);
    // 0x80237490: addiu       $a1, $s2, 0x34
    ctx->r5 = ADD32(ctx->r18, 0X34);
    // 0x80237494: jal         0x8009A3B4
    // 0x80237498: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x80237498: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_4:
    // 0x8023749C: addiu       $a0, $zero, 0xB2
    ctx->r4 = ADD32(0, 0XB2);
    // 0x802374A0: jal         0x8002A33C
    // 0x802374A4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_5;
    // 0x802374A4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_5:
L_802374A8:
    // 0x802374A8: sltu        $v0, $zero, $s1
    ctx->r2 = 0 < ctx->r17 ? 1 : 0;
    // 0x802374AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802374B0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802374B4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802374B8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802374BC: jr          $ra
    // 0x802374C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802374C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802374C4: nop

    // 0x802374C8: nop

    // 0x802374CC: nop

;}
RECOMP_FUNC void func_80231C18_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231C18: lb          $v0, 0xE($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XE);
    // 0x80231C1C: bne         $v0, $zero, L_80231C44
    if (ctx->r2 != 0) {
        // 0x80231C20: addiu       $sp, $sp, -0x10
        ctx->r29 = ADD32(ctx->r29, -0X10);
            goto L_80231C44;
    }
    // 0x80231C20: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x80231C24: lh          $v1, 0x56($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X56);
    // 0x80231C28: lh          $v0, 0x380($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X380);
    // 0x80231C2C: addiu       $v0, $v0, -0x400
    ctx->r2 = ADD32(ctx->r2, -0X400);
    // 0x80231C30: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80231C34: beq         $v1, $v0, L_80231C5C
    if (ctx->r3 == ctx->r2) {
        // 0x80231C38: addu        $a1, $v1, $zero
        ctx->r5 = ADD32(ctx->r3, 0);
            goto L_80231C5C;
    }
    // 0x80231C38: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x80231C3C: j           L_80231C74
    // 0x80231C40: addiu       $v0, $a1, -0x40
    ctx->r2 = ADD32(ctx->r5, -0X40);
        goto L_80231C74;
    // 0x80231C40: addiu       $v0, $a1, -0x40
    ctx->r2 = ADD32(ctx->r5, -0X40);
L_80231C44:
    // 0x80231C44: lh          $v1, 0x56($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X56);
    // 0x80231C48: lh          $v0, 0x380($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X380);
    // 0x80231C4C: addiu       $v0, $v0, 0x400
    ctx->r2 = ADD32(ctx->r2, 0X400);
    // 0x80231C50: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80231C54: bne         $v1, $v0, L_80231C70
    if (ctx->r3 != ctx->r2) {
        // 0x80231C58: addu        $a1, $v1, $zero
        ctx->r5 = ADD32(ctx->r3, 0);
            goto L_80231C70;
    }
    // 0x80231C58: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
L_80231C5C:
    // 0x80231C5C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80231C60: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x80231C64: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80231C68: j           L_80231C78
    // 0x80231C6C: sb          $v0, 0x385($a0)
    MEM_B(0X385, ctx->r4) = ctx->r2;
        goto L_80231C78;
    // 0x80231C6C: sb          $v0, 0x385($a0)
    MEM_B(0X385, ctx->r4) = ctx->r2;
L_80231C70:
    // 0x80231C70: addiu       $v0, $a1, 0x40
    ctx->r2 = ADD32(ctx->r5, 0X40);
L_80231C74:
    // 0x80231C74: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
L_80231C78:
    // 0x80231C78: lhu         $v0, 0x56($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X56);
    // 0x80231C7C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80231C80: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
    // 0x80231C84: jr          $ra
    // 0x80231C88: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    TRACE_RETURN()
    return;
    // 0x80231C88: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_8022DF10_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DF10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022DF14: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022DF18: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8022DF1C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022DF20: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022DF24: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022DF28: lw          $v0, -0x7B90($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7B90);
    // 0x8022DF2C: jalr        $v0
    // 0x8022DF30: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022DF30: nop

    after_0:
    // 0x8022DF34: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022DF38: jr          $ra
    // 0x8022DF3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022DF3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225544_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225544: jr          $ra
    // 0x80225548: nop

    TRACE_RETURN()
    return;
    // 0x80225548: nop

;}
RECOMP_FUNC void func_80225150_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225150: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225154: addiu       $v0, $v0, 0x7764
    ctx->r2 = ADD32(ctx->r2, 0X7764);
    // 0x80225158: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022515C: sw          $v0, 0x4020($at)
    MEM_W(0X4020, ctx->r1) = ctx->r2;
    // 0x80225160: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225164: addiu       $v0, $v0, 0x7904
    ctx->r2 = ADD32(ctx->r2, 0X7904);
    // 0x80225168: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8022516C: sw          $v0, -0x22A0($at)
    MEM_W(-0X22A0, ctx->r1) = ctx->r2;
    // 0x80225170: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225174: addiu       $v0, $v0, 0x7964
    ctx->r2 = ADD32(ctx->r2, 0X7964);
    // 0x80225178: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x8022517C: sw          $v0, -0x26A8($at)
    MEM_W(-0X26A8, ctx->r1) = ctx->r2;
    // 0x80225180: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225184: addiu       $v0, $v0, 0x798C
    ctx->r2 = ADD32(ctx->r2, 0X798C);
    // 0x80225188: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8022518C: sw          $v0, -0xBD8($at)
    MEM_W(-0XBD8, ctx->r1) = ctx->r2;
    // 0x80225190: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225194: addiu       $v0, $v0, 0x79CC
    ctx->r2 = ADD32(ctx->r2, 0X79CC);
    // 0x80225198: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8022519C: sw          $v0, 0xC68($at)
    MEM_W(0XC68, ctx->r1) = ctx->r2;
    // 0x802251A0: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802251A4: addiu       $v0, $v0, 0x7A54
    ctx->r2 = ADD32(ctx->r2, 0X7A54);
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
RECOMP_FUNC void func_802350C0_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802350C0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802350C4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802350C8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802350CC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802350D0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x802350D4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802350D8: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x802350DC: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x802350E0: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x802350E4: bne         $v0, $zero, L_80235150
    if (ctx->r2 != 0) {
        // 0x802350E8: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_80235150;
    }
    // 0x802350E8: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x802350EC: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x802350F0: lw          $v0, -0x714C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X714C);
    // 0x802350F4: bne         $v0, $zero, L_80235150
    if (ctx->r2 != 0) {
        // 0x802350F8: nop
    
            goto L_80235150;
    }
    // 0x802350F8: nop

    // 0x802350FC: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80235100: lw          $v0, -0x7798($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7798);
    // 0x80235104: bne         $v0, $zero, L_80235150
    if (ctx->r2 != 0) {
        // 0x80235108: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80235150;
    }
    // 0x80235108: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023510C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80235110: lb          $v1, -0x3BC7($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC7);
    // 0x80235114: beq         $v1, $v0, L_80235144
    if (ctx->r3 == ctx->r2) {
        // 0x80235118: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80235144;
    }
    // 0x80235118: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8023511C: beql        $v0, $zero, L_80235134
    if (ctx->r2 == 0) {
        // 0x80235120: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80235134;
    }
    goto skip_0;
    // 0x80235120: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80235124: beq         $v1, $zero, L_80235148
    if (ctx->r3 == 0) {
        // 0x80235128: addiu       $a0, $zero, 0x616
        ctx->r4 = ADD32(0, 0X616);
            goto L_80235148;
    }
    // 0x80235128: addiu       $a0, $zero, 0x616
    ctx->r4 = ADD32(0, 0X616);
    // 0x8023512C: j           L_80235150
    // 0x80235130: nop

        goto L_80235150;
    // 0x80235130: nop

L_80235134:
    // 0x80235134: beq         $v1, $v0, L_80235148
    if (ctx->r3 == ctx->r2) {
        // 0x80235138: addiu       $a0, $zero, 0x618
        ctx->r4 = ADD32(0, 0X618);
            goto L_80235148;
    }
    // 0x80235138: addiu       $a0, $zero, 0x618
    ctx->r4 = ADD32(0, 0X618);
    // 0x8023513C: j           L_80235150
    // 0x80235140: nop

        goto L_80235150;
    // 0x80235140: nop

L_80235144:
    // 0x80235144: addiu       $a0, $zero, 0x617
    ctx->r4 = ADD32(0, 0X617);
L_80235148:
    // 0x80235148: jal         0x8006036C
    // 0x8023514C: nop

    func_8006036C_3B76C(rdram, ctx);
        goto after_0;
    // 0x8023514C: nop

    after_0:
L_80235150:
    // 0x80235150: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80235154: bne         $v0, $zero, L_80235240
    if (ctx->r2 != 0) {
        // 0x80235158: nop
    
            goto L_80235240;
    }
    // 0x80235158: nop

    // 0x8023515C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80235160: lb          $v1, -0x3BC7($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC7);
    // 0x80235164: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x80235168: beq         $v0, $zero, L_80235198
    if (ctx->r2 == 0) {
        // 0x8023516C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80235198;
    }
    // 0x8023516C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80235170: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80235174: addu        $at, $at, $v0
    gpr jr_addend_8023517C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80235178: lw          $v0, -0x7080($at)
    ctx->r2 = ADD32(ctx->r1, -0X7080);
    // 0x8023517C: jr          $v0
    // 0x80235180: nop

    switch (jr_addend_8023517C >> 2) {
        case 0: goto L_80235184; break;
        case 1: goto L_8023518C; break;
        case 2: goto L_80235194; break;
        case 3: goto L_80235184; break;
        case 4: goto L_8023518C; break;
        case 5: goto L_80235194; break;
        default: switch_error(__func__, 0x8023517C, 0x80238F80);
    }
    // 0x80235180: nop

L_80235184:
    // 0x80235184: j           L_80235198
    // 0x80235188: addiu       $s1, $zero, 0x66
    ctx->r17 = ADD32(0, 0X66);
        goto L_80235198;
    // 0x80235188: addiu       $s1, $zero, 0x66
    ctx->r17 = ADD32(0, 0X66);
L_8023518C:
    // 0x8023518C: j           L_80235198
    // 0x80235190: addiu       $s1, $zero, 0x67
    ctx->r17 = ADD32(0, 0X67);
        goto L_80235198;
    // 0x80235190: addiu       $s1, $zero, 0x67
    ctx->r17 = ADD32(0, 0X67);
L_80235194:
    // 0x80235194: addiu       $s1, $zero, 0x68
    ctx->r17 = ADD32(0, 0X68);
L_80235198:
    // 0x80235198: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x8023519C: bne         $v0, $zero, L_80235234
    if (ctx->r2 != 0) {
        // 0x802351A0: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80235234;
    }
    // 0x802351A0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802351A4: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x802351A8: lw          $v0, -0x714C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X714C);
    // 0x802351AC: bne         $v0, $zero, L_802351C4
    if (ctx->r2 != 0) {
        // 0x802351B0: nop
    
            goto L_802351C4;
    }
    // 0x802351B0: nop

    // 0x802351B4: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x802351B8: lw          $v0, -0x7798($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7798);
    // 0x802351BC: beq         $v0, $zero, L_802351D4
    if (ctx->r2 == 0) {
        // 0x802351C0: addiu       $a0, $zero, 0x105
        ctx->r4 = ADD32(0, 0X105);
            goto L_802351D4;
    }
    // 0x802351C0: addiu       $a0, $zero, 0x105
    ctx->r4 = ADD32(0, 0X105);
L_802351C4:
    // 0x802351C4: jal         0x8006033C
    // 0x802351C8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x802351C8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x802351CC: beq         $v0, $zero, L_802351FC
    if (ctx->r2 == 0) {
        // 0x802351D0: addiu       $a0, $zero, 0x105
        ctx->r4 = ADD32(0, 0X105);
            goto L_802351FC;
    }
    // 0x802351D0: addiu       $a0, $zero, 0x105
    ctx->r4 = ADD32(0, 0X105);
L_802351D4:
    // 0x802351D4: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    // 0x802351D8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802351DC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x802351E0: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x802351E4: jal         0x8002A33C
    // 0x802351E8: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x802351E8: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    after_2:
    // 0x802351EC: jal         0x8006036C
    // 0x802351F0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8006036C_3B76C(rdram, ctx);
        goto after_3;
    // 0x802351F0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
    // 0x802351F4: j           L_80235280
    // 0x802351F8: nop

        goto L_80235280;
    // 0x802351F8: nop

L_802351FC:
    // 0x802351FC: lw          $v0, 0x184($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X184);
    // 0x80235200: bne         $v0, $s0, L_80235280
    if (ctx->r2 != ctx->r16) {
        // 0x80235204: nop
    
            goto L_80235280;
    }
    // 0x80235204: nop

    // 0x80235208: sw          $zero, 0x184($s2)
    MEM_W(0X184, ctx->r18) = 0;
    // 0x8023520C: jal         0x8006033C
    // 0x80235210: addiu       $a0, $zero, 0x65
    ctx->r4 = ADD32(0, 0X65);
    func_8006033C_3B73C(rdram, ctx);
        goto after_4;
    // 0x80235210: addiu       $a0, $zero, 0x65
    ctx->r4 = ADD32(0, 0X65);
    after_4:
    // 0x80235214: bne         $v0, $zero, L_80235280
    if (ctx->r2 != 0) {
        // 0x80235218: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80235280;
    }
    // 0x80235218: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8023521C: jal         0x800616FC
    // 0x80235220: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_5;
    // 0x80235220: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_5:
    // 0x80235224: jal         0x8006036C
    // 0x80235228: addiu       $a0, $zero, 0x65
    ctx->r4 = ADD32(0, 0X65);
    func_8006036C_3B76C(rdram, ctx);
        goto after_6;
    // 0x80235228: addiu       $a0, $zero, 0x65
    ctx->r4 = ADD32(0, 0X65);
    after_6:
    // 0x8023522C: j           L_80235280
    // 0x80235230: nop

        goto L_80235280;
    // 0x80235230: nop

L_80235234:
    // 0x80235234: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80235238: j           L_80235280
    // 0x8023523C: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
        goto L_80235280;
    // 0x8023523C: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
L_80235240:
    // 0x80235240: lw          $v0, 0x184($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X184);
    // 0x80235244: bne         $v0, $s0, L_80235280
    if (ctx->r2 != ctx->r16) {
        // 0x80235248: nop
    
            goto L_80235280;
    }
    // 0x80235248: nop

    // 0x8023524C: lbu         $v1, 0xBD($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0XBD);
    // 0x80235250: andi        $v0, $v1, 0x40
    ctx->r2 = ctx->r3 & 0X40;
    // 0x80235254: bne         $v0, $zero, L_80235280
    if (ctx->r2 != 0) {
        // 0x80235258: sw          $zero, 0x184($s2)
        MEM_W(0X184, ctx->r18) = 0;
            goto L_80235280;
    }
    // 0x80235258: sw          $zero, 0x184($s2)
    MEM_W(0X184, ctx->r18) = 0;
    // 0x8023525C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x80235260: ori         $v0, $v1, 0x40
    ctx->r2 = ctx->r3 | 0X40;
    // 0x80235264: jal         0x80036E48
    // 0x80235268: sb          $v0, 0xBD($s2)
    MEM_B(0XBD, ctx->r18) = ctx->r2;
    func_80036E48_12248(rdram, ctx);
        goto after_7;
    // 0x80235268: sb          $v0, 0xBD($s2)
    MEM_B(0XBD, ctx->r18) = ctx->r2;
    after_7:
    // 0x8023526C: jal         0x8006036C
    // 0x80235270: addiu       $a0, $zero, 0x5F
    ctx->r4 = ADD32(0, 0X5F);
    func_8006036C_3B76C(rdram, ctx);
        goto after_8;
    // 0x80235270: addiu       $a0, $zero, 0x5F
    ctx->r4 = ADD32(0, 0X5F);
    after_8:
    // 0x80235274: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80235278: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8023527C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_80235280:
    // 0x80235280: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80235284: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80235288: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8023528C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80235290: jr          $ra
    // 0x80235294: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80235294: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80233138_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233138: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8023313C: lb          $v0, 0xE($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XE);
    // 0x80233140: addiu       $a3, $a0, 0x348
    ctx->r7 = ADD32(ctx->r4, 0X348);
    // 0x80233144: bne         $v0, $zero, L_8023316C
    if (ctx->r2 != 0) {
        // 0x80233148: addiu       $a2, $a0, 0x64
        ctx->r6 = ADD32(ctx->r4, 0X64);
            goto L_8023316C;
    }
    // 0x80233148: addiu       $a2, $a0, 0x64
    ctx->r6 = ADD32(ctx->r4, 0X64);
    // 0x8023314C: lh          $v1, 0x56($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X56);
    // 0x80233150: lh          $v0, 0x380($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X380);
    // 0x80233154: addiu       $v0, $v0, -0x400
    ctx->r2 = ADD32(ctx->r2, -0X400);
    // 0x80233158: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8023315C: beq         $v1, $v0, L_80233184
    if (ctx->r3 == ctx->r2) {
        // 0x80233160: addu        $a1, $v1, $zero
        ctx->r5 = ADD32(ctx->r3, 0);
            goto L_80233184;
    }
    // 0x80233160: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x80233164: j           L_8023319C
    // 0x80233168: addiu       $v0, $a1, -0x40
    ctx->r2 = ADD32(ctx->r5, -0X40);
        goto L_8023319C;
    // 0x80233168: addiu       $v0, $a1, -0x40
    ctx->r2 = ADD32(ctx->r5, -0X40);
L_8023316C:
    // 0x8023316C: lh          $v1, 0x56($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X56);
    // 0x80233170: lh          $v0, 0x380($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X380);
    // 0x80233174: addiu       $v0, $v0, 0x400
    ctx->r2 = ADD32(ctx->r2, 0X400);
    // 0x80233178: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8023317C: bne         $v1, $v0, L_80233198
    if (ctx->r3 != ctx->r2) {
        // 0x80233180: addu        $a1, $v1, $zero
        ctx->r5 = ADD32(ctx->r3, 0);
            goto L_80233198;
    }
    // 0x80233180: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
L_80233184:
    // 0x80233184: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80233188: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x8023318C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80233190: j           L_802331A0
    // 0x80233194: sb          $v0, 0x385($a0)
    MEM_B(0X385, ctx->r4) = ctx->r2;
        goto L_802331A0;
    // 0x80233194: sb          $v0, 0x385($a0)
    MEM_B(0X385, ctx->r4) = ctx->r2;
L_80233198:
    // 0x80233198: addiu       $v0, $a1, 0x40
    ctx->r2 = ADD32(ctx->r5, 0X40);
L_8023319C:
    // 0x8023319C: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
L_802331A0:
    // 0x802331A0: lhu         $v0, 0x56($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X56);
    // 0x802331A4: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x802331A8: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
    // 0x802331AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802331B0: sb          $v0, 0x3F($a3)
    MEM_B(0X3F, ctx->r7) = ctx->r2;
    // 0x802331B4: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x802331B8: sb          $v0, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r2;
    // 0x802331BC: sb          $v0, 0x1($a2)
    MEM_B(0X1, ctx->r6) = ctx->r2;
    // 0x802331C0: sb          $v0, 0x2($a2)
    MEM_B(0X2, ctx->r6) = ctx->r2;
    // 0x802331C4: jr          $ra
    // 0x802331C8: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    TRACE_RETURN()
    return;
    // 0x802331C8: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_8022554C_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022554C: jr          $ra
    // 0x80225550: nop

    TRACE_RETURN()
    return;
    // 0x80225550: nop

    // 0x80225554: nop

    // 0x80225558: nop

    // 0x8022555C: nop

;}
RECOMP_FUNC void func_8023641C_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023641C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80236420: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80236424: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80236428: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023642C: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80236430: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x80236434: beq         $v0, $zero, L_80236574
    if (ctx->r2 == 0) {
        // 0x80236438: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80236574;
    }
    // 0x80236438: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8023643C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80236440: addu        $at, $at, $v0
    gpr jr_addend_80236448 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80236444: lw          $v0, -0x7048($at)
    ctx->r2 = ADD32(ctx->r1, -0X7048);
    // 0x80236448: jr          $v0
    // 0x8023644C: nop

    switch (jr_addend_80236448 >> 2) {
        case 0: goto L_80236450; break;
        case 1: goto L_80236498; break;
        case 2: goto L_802364DC; break;
        case 3: goto L_802364FC; break;
        case 4: goto L_80236528; break;
        case 5: goto L_80236558; break;
        default: switch_error(__func__, 0x80236448, 0x80238FB8);
    }
    // 0x8023644C: nop

L_80236450:
    // 0x80236450: jal         0x8006033C
    // 0x80236454: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80236454: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    after_0:
    // 0x80236458: bne         $v0, $zero, L_80236468
    if (ctx->r2 != 0) {
        // 0x8023645C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80236468;
    }
    // 0x8023645C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80236460: j           L_80236574
    // 0x80236464: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80236574;
    // 0x80236464: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80236468:
    // 0x80236468: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8023646C: lb          $v0, -0x3BC7($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC7);
    // 0x80236470: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80236474: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80236478: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8023647C: jal         0x8006033C
    // 0x80236480: lw          $a0, -0x72B4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X72B4);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x80236480: lw          $a0, -0x72B4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X72B4);
    after_1:
    // 0x80236484: bne         $v0, $zero, L_80236570
    if (ctx->r2 != 0) {
        // 0x80236488: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80236570;
    }
    // 0x80236488: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023648C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80236490: j           L_80236574
    // 0x80236494: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80236574;
    // 0x80236494: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80236498:
    // 0x80236498: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8023649C: lb          $v0, -0x3BC7($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC7);
    // 0x802364A0: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x802364A4: lh          $v1, 0x49C8($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X49C8);
    // 0x802364A8: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x802364AC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802364B0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802364B4: lh          $v0, -0x72BC($at)
    ctx->r2 = MEM_H(ctx->r1, -0X72BC);
    // 0x802364B8: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802364BC: beq         $v1, $zero, L_80236574
    if (ctx->r3 == 0) {
        // 0x802364C0: addiu       $a0, $zero, 0x4
        ctx->r4 = ADD32(0, 0X4);
            goto L_80236574;
    }
    // 0x802364C0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x802364C4: jal         0x800616FC
    // 0x802364C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_2;
    // 0x802364C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x802364CC: jal         0x8006036C
    // 0x802364D0: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    func_8006036C_3B76C(rdram, ctx);
        goto after_3;
    // 0x802364D0: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    after_3:
    // 0x802364D4: j           L_80236548
    // 0x802364D8: nop

        goto L_80236548;
    // 0x802364D8: nop

L_802364DC:
    // 0x802364DC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802364E0: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x802364E4: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x802364E8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802364EC: beq         $v0, $zero, L_80236548
    if (ctx->r2 == 0) {
        // 0x802364F0: nop
    
            goto L_80236548;
    }
    // 0x802364F0: nop

    // 0x802364F4: j           L_80236574
    // 0x802364F8: nop

        goto L_80236574;
    // 0x802364F8: nop

L_802364FC:
    // 0x802364FC: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80236500: lb          $v0, -0x3BC7($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC7);
    // 0x80236504: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80236508: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8023650C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80236510: jal         0x8006033C
    // 0x80236514: lw          $a0, -0x72B4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X72B4);
    func_8006033C_3B73C(rdram, ctx);
        goto after_4;
    // 0x80236514: lw          $a0, -0x72B4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X72B4);
    after_4:
    // 0x80236518: beq         $v0, $zero, L_80236574
    if (ctx->r2 == 0) {
        // 0x8023651C: nop
    
            goto L_80236574;
    }
    // 0x8023651C: nop

    // 0x80236520: j           L_80236548
    // 0x80236524: nop

        goto L_80236548;
    // 0x80236524: nop

L_80236528:
    // 0x80236528: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8023652C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80236530: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x80236534: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80236538: bne         $v0, $zero, L_80236574
    if (ctx->r2 != 0) {
        // 0x8023653C: addiu       $a0, $zero, 0x4
        ctx->r4 = ADD32(0, 0X4);
            goto L_80236574;
    }
    // 0x8023653C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x80236540: jal         0x800616FC
    // 0x80236544: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_5;
    // 0x80236544: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_5:
L_80236548:
    // 0x80236548: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8023654C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80236550: j           L_80236574
    // 0x80236554: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80236574;
    // 0x80236554: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80236558:
    // 0x80236558: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8023655C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80236560: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x80236564: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80236568: bne         $v0, $zero, L_80236574
    if (ctx->r2 != 0) {
        // 0x8023656C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80236574;
    }
    // 0x8023656C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80236570:
    // 0x80236570: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80236574:
    // 0x80236574: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80236578: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023657C: jr          $ra
    // 0x80236580: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80236580: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E608_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E608: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E60C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E610: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E614: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022E618: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x8022E61C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022E620: bne         $v1, $v0, L_8022E664
    if (ctx->r3 != ctx->r2) {
        // 0x8022E624: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022E664;
    }
    // 0x8022E624: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E628: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022E62C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022E630: jal         0x80050294
    // 0x8022E634: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8022E634: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022E638: lbu         $v1, 0xCA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XCA);
    // 0x8022E63C: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x8022E640: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022E644: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x8022E648: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022E64C: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022E650: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    // 0x8022E654: sb          $v0, 0x385($s0)
    MEM_B(0X385, ctx->r16) = ctx->r2;
    // 0x8022E658: sb          $zero, 0x384($s0)
    MEM_B(0X384, ctx->r16) = 0;
    // 0x8022E65C: andi        $v1, $v1, 0xFC
    ctx->r3 = ctx->r3 & 0XFC;
    // 0x8022E660: sb          $v1, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r3;
L_8022E664:
    // 0x8022E664: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022E668: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E66C: jr          $ra
    // 0x8022E670: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E670: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A654_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A654: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022A658: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A65C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A660: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022A664: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022A668: lw          $v0, 0x33C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X33C);
    // 0x8022A66C: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x8022A670: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022A674: beq         $v0, $zero, L_8022A680
    if (ctx->r2 == 0) {
        // 0x8022A678: addiu       $s1, $s0, 0x328
        ctx->r17 = ADD32(ctx->r16, 0X328);
            goto L_8022A680;
    }
    // 0x8022A678: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x8022A67C: sh          $zero, 0x330($s0)
    MEM_H(0X330, ctx->r16) = 0;
L_8022A680:
    // 0x8022A680: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022A684: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x8022A688: beq         $v0, $zero, L_8022A90C
    if (ctx->r2 == 0) {
        // 0x8022A68C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8022A90C;
    }
    // 0x8022A68C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022A690: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022A694: addu        $at, $at, $v0
    gpr jr_addend_8022A69C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022A698: lw          $v0, -0x7170($at)
    ctx->r2 = ADD32(ctx->r1, -0X7170);
    // 0x8022A69C: jr          $v0
    // 0x8022A6A0: nop

    switch (jr_addend_8022A69C >> 2) {
        case 0: goto L_8022A6A4; break;
        case 1: goto L_8022A6EC; break;
        case 2: goto L_8022A710; break;
        case 3: goto L_8022A770; break;
        case 4: goto L_8022A78C; break;
        case 5: goto L_8022A8CC; break;
        default: switch_error(__func__, 0x8022A69C, 0x80238E90);
    }
    // 0x8022A6A0: nop

L_8022A6A4:
    // 0x8022A6A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A6A8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022A6AC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022A6B0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022A6B4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022A6B8: sh          $zero, 0x64($s0)
    MEM_H(0X64, ctx->r16) = 0;
    // 0x8022A6BC: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022A6C0: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x8022A6C4: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x8022A6C8: lw          $v0, 0x298($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X298);
    // 0x8022A6CC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022A6D0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022A6D4: lh          $v0, 0x6($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X6);
    // 0x8022A6D8: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x8022A6DC: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022A6E0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022A6E4: lbu         $v0, 0xA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XA);
    // 0x8022A6E8: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
L_8022A6EC:
    // 0x8022A6EC: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022A6F0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022A6F4: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022A6F8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A6FC: bgez        $v0, L_8022A90C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022A700: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022A90C;
    }
    // 0x8022A700: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022A704: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022A708: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022A70C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_8022A710:
    // 0x8022A710: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022A714: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022A718: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022A71C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A720: bgtz        $v0, L_8022A90C
    if (SIGNED(ctx->r2) > 0) {
        // 0x8022A724: addiu       $a0, $zero, 0xB4
        ctx->r4 = ADD32(0, 0XB4);
            goto L_8022A90C;
    }
    // 0x8022A724: addiu       $a0, $zero, 0xB4
    ctx->r4 = ADD32(0, 0XB4);
    // 0x8022A728: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022A72C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022A730: jal         0x8002A33C
    // 0x8022A734: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x8022A734: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022A738: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022A73C: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x8022A740: beq         $v0, $zero, L_8022A768
    if (ctx->r2 == 0) {
        // 0x8022A744: addiu       $v0, $zero, 0x2D
        ctx->r2 = ADD32(0, 0X2D);
            goto L_8022A768;
    }
    // 0x8022A744: addiu       $v0, $zero, 0x2D
    ctx->r2 = ADD32(0, 0X2D);
    // 0x8022A748: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022A74C: lhu         $v1, 0x0($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X0);
    // 0x8022A750: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022A754: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8022A758: andi        $v1, $v1, 0xFFDF
    ctx->r3 = ctx->r3 & 0XFFDF;
    // 0x8022A75C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022A760: j           L_8022A90C
    // 0x8022A764: sh          $v1, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r3;
        goto L_8022A90C;
    // 0x8022A764: sh          $v1, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r3;
L_8022A768:
    // 0x8022A768: j           L_8022A90C
    // 0x8022A76C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
        goto L_8022A90C;
    // 0x8022A76C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_8022A770:
    // 0x8022A770: lh          $v0, 0x4($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4);
    // 0x8022A774: slti        $v0, $v0, 0x4
    ctx->r2 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x8022A778: beq         $v0, $zero, L_8022A78C
    if (ctx->r2 == 0) {
        // 0x8022A77C: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8022A78C;
    }
    // 0x8022A77C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022A780: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022A784: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x8022A788: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
L_8022A78C:
    // 0x8022A78C: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022A790: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022A794: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022A798: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A79C: bgez        $v0, L_8022A7C8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022A7A0: lui         $v1, 0x200
        ctx->r3 = S32(0X200 << 16);
            goto L_8022A7C8;
    }
    // 0x8022A7A0: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x8022A7A4: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022A7A8: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x8022A7AC: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8022A7B0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022A7B4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022A7B8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022A7BC: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022A7C0: j           L_8022A8CC
    // 0x8022A7C4: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
        goto L_8022A8CC;
    // 0x8022A7C4: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
L_8022A7C8:
    // 0x8022A7C8: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x8022A7CC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022A7D0: beq         $v0, $zero, L_8022A7E4
    if (ctx->r2 == 0) {
        // 0x8022A7D4: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_8022A7E4;
    }
    // 0x8022A7D4: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022A7D8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022A7DC: j           L_8022A90C
    // 0x8022A7E0: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_8022A90C;
    // 0x8022A7E0: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8022A7E4:
    // 0x8022A7E4: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022A7E8: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x8022A7EC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022A7F0: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022A7F4: jal         0x8004F820
    // 0x8022A7F8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x8022A7F8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_1:
    // 0x8022A7FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A800: addiu       $a1, $zero, 0x300
    ctx->r5 = ADD32(0, 0X300);
    // 0x8022A804: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x8022A808: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022A80C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022A810: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022A814: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022A818: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022A81C: jal         0x8004DA90
    // 0x8022A820: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x8022A820: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    after_2:
    // 0x8022A824: jal         0x80040F30
    // 0x8022A828: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_3;
    // 0x8022A828: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022A82C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A830: jal         0x8003E934
    // 0x8022A834: sw          $v0, 0x48($s1)
    MEM_W(0X48, ctx->r17) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_4;
    // 0x8022A834: sw          $v0, 0x48($s1)
    MEM_W(0X48, ctx->r17) = ctx->r2;
    after_4:
    // 0x8022A838: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022A83C: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x8022A840: lh          $v1, 0x2E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2E);
    // 0x8022A844: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A848: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022A84C: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x8022A850: bltz        $v0, L_8022A868
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022A854: slti        $v0, $v0, 0x21
        ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
            goto L_8022A868;
    }
    // 0x8022A854: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x8022A858: beq         $v0, $zero, L_8022A878
    if (ctx->r2 == 0) {
        // 0x8022A85C: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022A878;
    }
    // 0x8022A85C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022A860: j           L_8022A8B4
    // 0x8022A864: nop

        goto L_8022A8B4;
    // 0x8022A864: nop

L_8022A868:
    // 0x8022A868: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x8022A86C: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x8022A870: bne         $v0, $zero, L_8022A8B4
    if (ctx->r2 != 0) {
        // 0x8022A874: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022A8B4;
    }
    // 0x8022A874: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_8022A878:
    // 0x8022A878: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x8022A87C: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8022A880: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022A884: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x8022A888: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    // 0x8022A88C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8022A890: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x8022A894: jal         0x8009A3B4
    // 0x8022A898: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8022A898: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    after_5:
    // 0x8022A89C: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8022A8A0: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x8022A8A4: jal         0x8009A3B4
    // 0x8022A8A8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x8022A8A8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_6:
    // 0x8022A8AC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022A8B0: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_8022A8B4:
    // 0x8022A8B4: lw          $v0, 0x48($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X48);
    // 0x8022A8B8: andi        $v0, $v0, 0xF00
    ctx->r2 = ctx->r2 & 0XF00;
    // 0x8022A8BC: beq         $v0, $zero, L_8022A90C
    if (ctx->r2 == 0) {
        // 0x8022A8C0: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_8022A90C;
    }
    // 0x8022A8C0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022A8C4: j           L_8022A90C
    // 0x8022A8C8: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
        goto L_8022A90C;
    // 0x8022A8C8: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_8022A8CC:
    // 0x8022A8CC: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8022A8D0: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x8022A8D4: beq         $v0, $zero, L_8022A8E4
    if (ctx->r2 == 0) {
        // 0x8022A8D8: nop
    
            goto L_8022A8E4;
    }
    // 0x8022A8D8: nop

    // 0x8022A8DC: jal         0x8004F418
    // 0x8022A8E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_7;
    // 0x8022A8E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
L_8022A8E4:
    // 0x8022A8E4: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022A8E8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022A8EC: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022A8F0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A8F4: bgez        $v0, L_8022A90C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022A8F8: addiu       $v1, $zero, 0x1E
        ctx->r3 = ADD32(0, 0X1E);
            goto L_8022A90C;
    }
    // 0x8022A8F8: addiu       $v1, $zero, 0x1E
    ctx->r3 = ADD32(0, 0X1E);
    // 0x8022A8FC: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022A900: sh          $v1, 0x34($s1)
    MEM_H(0X34, ctx->r17) = ctx->r3;
    // 0x8022A904: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022A908: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8022A90C:
    // 0x8022A90C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022A910: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022A914: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A918: jr          $ra
    // 0x8022A91C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022A91C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802323D4_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802323D4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802323D8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802323DC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802323E0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802323E4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x802323E8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802323EC: lb          $v0, 0xA6($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA6);
    // 0x802323F0: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x802323F4: bne         $v0, $zero, L_80232408
    if (ctx->r2 != 0) {
        // 0x802323F8: addiu       $s1, $s0, 0xC4
        ctx->r17 = ADD32(ctx->r16, 0XC4);
            goto L_80232408;
    }
    // 0x802323F8: addiu       $s1, $s0, 0xC4
    ctx->r17 = ADD32(ctx->r16, 0XC4);
    // 0x802323FC: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80232400: jal         0x80231DF8
    // 0x80232404: sh          $v0, 0x382($s0)
    MEM_H(0X382, ctx->r16) = ctx->r2;
    func_80231DF8_ovl31(rdram, ctx);
        goto after_0;
    // 0x80232404: sh          $v0, 0x382($s0)
    MEM_H(0X382, ctx->r16) = ctx->r2;
    after_0:
L_80232408:
    // 0x80232408: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8023240C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80232410: bne         $v1, $v0, L_802324A0
    if (ctx->r3 != ctx->r2) {
        // 0x80232414: nop
    
            goto L_802324A0;
    }
    // 0x80232414: nop

    // 0x80232418: lbu         $v0, 0x64($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X64);
    // 0x8023241C: lbu         $v1, 0x65($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X65);
    // 0x80232420: lbu         $a0, 0x66($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X66);
    // 0x80232424: lbu         $a1, 0x66($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X66);
    // 0x80232428: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x8023242C: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x80232430: andi        $a0, $a0, 0x1F
    ctx->r4 = ctx->r4 & 0X1F;
    // 0x80232434: sll         $v1, $v1, 5
    ctx->r3 = S32(ctx->r3 << 5);
    // 0x80232438: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8023243C: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    // 0x80232440: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x80232444: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80232448: lhu         $a0, 0x15E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X15E);
    // 0x8023244C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80232450: sb          $a1, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r5;
    // 0x80232454: lb          $v1, 0x66($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X66);
    // 0x80232458: addiu       $v0, $zero, -0x8000
    ctx->r2 = ADD32(0, -0X8000);
    // 0x8023245C: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x80232460: slti        $v1, $v1, 0x10
    ctx->r3 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
    // 0x80232464: bne         $v1, $zero, L_802324A0
    if (ctx->r3 != 0) {
        // 0x80232468: sh          $v0, 0x15E($s0)
        MEM_H(0X15E, ctx->r16) = ctx->r2;
            goto L_802324A0;
    }
    // 0x80232468: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8023246C: lb          $v1, 0x64($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X64);
    // 0x80232470: andi        $v0, $v0, 0x7FFF
    ctx->r2 = ctx->r2 & 0X7FFF;
    // 0x80232474: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80232478: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8023247C: sb          $v0, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r2;
    // 0x80232480: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80232484: beq         $v1, $v0, L_802324A0
    if (ctx->r3 == ctx->r2) {
        // 0x80232488: addu        $a0, $v1, $zero
        ctx->r4 = ADD32(ctx->r3, 0);
            goto L_802324A0;
    }
    // 0x80232488: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x8023248C: lbu         $v0, 0x65($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X65);
    // 0x80232490: addiu       $v1, $a0, 0x4
    ctx->r3 = ADD32(ctx->r4, 0X4);
    // 0x80232494: sb          $v1, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r3;
    // 0x80232498: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8023249C: sb          $v0, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r2;
L_802324A0:
    // 0x802324A0: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x802324A4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802324A8: bne         $v1, $v0, L_80232500
    if (ctx->r3 != ctx->r2) {
        // 0x802324AC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80232500;
    }
    // 0x802324AC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802324B0: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x802324B4: beq         $v1, $v0, L_802324F8
    if (ctx->r3 == ctx->r2) {
        // 0x802324B8: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_802324F8;
    }
    // 0x802324B8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x802324BC: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x802324C0: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x802324C4: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
    // 0x802324C8: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x802324CC: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x802324D0: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x802324D4: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x802324D8: sh          $v0, 0x3A($s2)
    MEM_H(0X3A, ctx->r18) = ctx->r2;
    // 0x802324DC: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x802324E0: sb          $v0, 0x3E($s2)
    MEM_B(0X3E, ctx->r18) = ctx->r2;
    // 0x802324E4: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x802324E8: sb          $zero, 0x7($s1)
    MEM_B(0X7, ctx->r17) = 0;
    // 0x802324EC: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x802324F0: j           L_80232500
    // 0x802324F4: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
        goto L_80232500;
    // 0x802324F4: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
L_802324F8:
    // 0x802324F8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x802324FC: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_80232500:
    // 0x80232500: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80232504: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80232508: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8023250C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80232510: jr          $ra
    // 0x80232514: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80232514: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802372AC_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802372AC: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x802372B0: lw          $v1, 0x320($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X320);
    // 0x802372B4: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x802372B8: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x802372BC: and         $a2, $v1, $v0
    ctx->r6 = ctx->r3 & ctx->r2;
    // 0x802372C0: beq         $a2, $zero, L_8023730C
    if (ctx->r6 == 0) {
        // 0x802372C4: lui         $v0, 0x3800
        ctx->r2 = S32(0X3800 << 16);
            goto L_8023730C;
    }
    // 0x802372C4: lui         $v0, 0x3800
    ctx->r2 = S32(0X3800 << 16);
    // 0x802372C8: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x802372CC: beq         $v0, $zero, L_8023730C
    if (ctx->r2 == 0) {
        // 0x802372D0: nop
    
            goto L_8023730C;
    }
    // 0x802372D0: nop

    // 0x802372D4: lhu         $v0, 0x6E($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X6E);
    // 0x802372D8: lhu         $a0, 0x6E($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X6E);
    // 0x802372DC: subu        $v0, $v0, $a2
    ctx->r2 = SUB32(ctx->r2, ctx->r6);
    // 0x802372E0: sh          $v0, 0x6E($a1)
    MEM_H(0X6E, ctx->r5) = ctx->r2;
    // 0x802372E4: lh          $v1, 0x6E($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X6E);
    // 0x802372E8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x802372EC: sh          $v0, 0x30A($a1)
    MEM_H(0X30A, ctx->r5) = ctx->r2;
    // 0x802372F0: bgtz        $v1, L_80237304
    if (SIGNED(ctx->r3) > 0) {
        // 0x802372F4: sh          $a0, 0xB2($a1)
        MEM_H(0XB2, ctx->r5) = ctx->r4;
            goto L_80237304;
    }
    // 0x802372F4: sh          $a0, 0xB2($a1)
    MEM_H(0XB2, ctx->r5) = ctx->r4;
    // 0x802372F8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802372FC: sb          $v0, 0x8($a1)
    MEM_B(0X8, ctx->r5) = ctx->r2;
    // 0x80237300: sb          $zero, 0x9($a1)
    MEM_B(0X9, ctx->r5) = 0;
L_80237304:
    // 0x80237304: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x80237308: sh          $v0, 0x15E($a1)
    MEM_H(0X15E, ctx->r5) = ctx->r2;
L_8023730C:
    // 0x8023730C: jr          $ra
    // 0x80237310: nop

    TRACE_RETURN()
    return;
    // 0x80237310: nop

;}
RECOMP_FUNC void func_80237038_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237038: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023703C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80237040: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x80237044: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x80237048: beq         $v1, $zero, L_80237064
    if (ctx->r3 == 0) {
        // 0x8023704C: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_80237064;
    }
    // 0x8023704C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80237050: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237054: beq         $v1, $v0, L_80237068
    if (ctx->r3 == ctx->r2) {
        // 0x80237058: nop
    
            goto L_80237068;
    }
    // 0x80237058: nop

    // 0x8023705C: j           L_80237088
    // 0x80237060: nop

        goto L_80237088;
    // 0x80237060: nop

L_80237064:
    // 0x80237064: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
L_80237068:
    // 0x80237068: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8023706C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80237070: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x80237074: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80237078: bne         $v0, $zero, L_80237088
    if (ctx->r2 != 0) {
        // 0x8023707C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80237088;
    }
    // 0x8023707C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80237080: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
    // 0x80237084: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
L_80237088:
    // 0x80237088: jal         0x802372AC
    // 0x8023708C: nop

    func_802372AC_ovl31(rdram, ctx);
        goto after_0;
    // 0x8023708C: nop

    after_0:
    // 0x80237090: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80237094: jr          $ra
    // 0x80237098: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80237098: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80234790_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234790: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80234794: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80234798: addu        $fp, $a0, $zero
    ctx->r30 = ADD32(ctx->r4, 0);
    // 0x8023479C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x802347A0: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x802347A4: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x802347A8: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x802347AC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x802347B0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x802347B4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x802347B8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802347BC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802347C0: lw          $s7, 0x18($fp)
    ctx->r23 = MEM_W(ctx->r30, 0X18);
    // 0x802347C4: lw          $s4, 0x8($s7)
    ctx->r20 = MEM_W(ctx->r23, 0X8);
    // 0x802347C8: addu        $s6, $zero, $zero
    ctx->r22 = ADD32(0, 0);
    // 0x802347CC: lui         $s3, 0x8024
    ctx->r19 = S32(0X8024 << 16);
    // 0x802347D0: addiu       $s3, $s3, -0x6F60
    ctx->r19 = ADD32(ctx->r19, -0X6F60);
    // 0x802347D4: lb          $v1, 0x0($s4)
    ctx->r3 = MEM_B(ctx->r20, 0X0);
    // 0x802347D8: addiu       $a3, $fp, 0x14
    ctx->r7 = ADD32(ctx->r30, 0X14);
    // 0x802347DC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802347E0: beq         $v1, $v0, L_80234AEC
    if (ctx->r3 == ctx->r2) {
        // 0x802347E4: sw          $a3, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r7;
            goto L_80234AEC;
    }
    // 0x802347E4: sw          $a3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r7;
    // 0x802347E8: addiu       $s2, $s4, 0x10
    ctx->r18 = ADD32(ctx->r20, 0X10);
    // 0x802347EC: addiu       $s5, $s4, 0xC
    ctx->r21 = ADD32(ctx->r20, 0XC);
L_802347F0:
    // 0x802347F0: jal         0x8006033C
    // 0x802347F4: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x802347F4: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    after_0:
    // 0x802347F8: bnel        $v0, $zero, L_80234AD4
    if (ctx->r2 != 0) {
        // 0x802347FC: addiu       $s2, $s2, 0x18
        ctx->r18 = ADD32(ctx->r18, 0X18);
            goto L_80234AD4;
    }
    goto skip_0;
    // 0x802347FC: addiu       $s2, $s2, 0x18
    ctx->r18 = ADD32(ctx->r18, 0X18);
    skip_0:
    // 0x80234800: lbu         $v1, -0xF($s2)
    ctx->r3 = MEM_BU(ctx->r18, -0XF);
    // 0x80234804: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80234808: beq         $v1, $v0, L_80234900
    if (ctx->r3 == ctx->r2) {
        // 0x8023480C: slti        $v0, $v1, 0x41
        ctx->r2 = SIGNED(ctx->r3) < 0X41 ? 1 : 0;
            goto L_80234900;
    }
    // 0x8023480C: slti        $v0, $v1, 0x41
    ctx->r2 = SIGNED(ctx->r3) < 0X41 ? 1 : 0;
    // 0x80234810: beq         $v0, $zero, L_80234828
    if (ctx->r2 == 0) {
        // 0x80234814: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_80234828;
    }
    // 0x80234814: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80234818: beq         $v1, $v0, L_80234844
    if (ctx->r3 == ctx->r2) {
        // 0x8023481C: nop
    
            goto L_80234844;
    }
    // 0x8023481C: nop

    // 0x80234820: j           L_80234AD4
    // 0x80234824: addiu       $s2, $s2, 0x18
    ctx->r18 = ADD32(ctx->r18, 0X18);
        goto L_80234AD4;
    // 0x80234824: addiu       $s2, $s2, 0x18
    ctx->r18 = ADD32(ctx->r18, 0X18);
L_80234828:
    // 0x80234828: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x8023482C: beq         $v1, $v0, L_802349BC
    if (ctx->r3 == ctx->r2) {
        // 0x80234830: addiu       $v0, $zero, 0xE0
        ctx->r2 = ADD32(0, 0XE0);
            goto L_802349BC;
    }
    // 0x80234830: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
    // 0x80234834: beq         $v1, $v0, L_80234A68
    if (ctx->r3 == ctx->r2) {
        // 0x80234838: nop
    
            goto L_80234A68;
    }
    // 0x80234838: nop

    // 0x8023483C: j           L_80234AD4
    // 0x80234840: addiu       $s2, $s2, 0x18
    ctx->r18 = ADD32(ctx->r18, 0X18);
        goto L_80234AD4;
    // 0x80234840: addiu       $s2, $s2, 0x18
    ctx->r18 = ADD32(ctx->r18, 0X18);
L_80234844:
    // 0x80234844: jal         0x8004EEAC
    // 0x80234848: nop

    func_8004EEAC_2A2AC(rdram, ctx);
        goto after_1;
    // 0x80234848: nop

    after_1:
    // 0x8023484C: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80234850: beq         $s1, $zero, L_80234AD0
    if (ctx->r17 == 0) {
        // 0x80234854: addiu       $s0, $s1, 0x2C
        ctx->r16 = ADD32(ctx->r17, 0X2C);
            goto L_80234AD0;
    }
    // 0x80234854: addiu       $s0, $s1, 0x2C
    ctx->r16 = ADD32(ctx->r17, 0X2C);
    // 0x80234858: lbu         $v0, 0x0($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X0);
    // 0x8023485C: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x80234860: lbu         $v0, -0xE($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0XE);
    // 0x80234864: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
    // 0x80234868: lbu         $v0, -0xD($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0XD);
    // 0x8023486C: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    // 0x80234870: lbu         $v0, -0xC($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0XC);
    // 0x80234874: sb          $v0, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r2;
    // 0x80234878: lbu         $v0, -0xB($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0XB);
    // 0x8023487C: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
    // 0x80234880: lw          $v0, -0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, -0X8);
    // 0x80234884: sw          $v0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r2;
    // 0x80234888: lh          $v0, -0x4($s2)
    ctx->r2 = MEM_H(ctx->r18, -0X4);
    // 0x8023488C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80234890: sw          $v0, 0x34($s1)
    MEM_W(0X34, ctx->r17) = ctx->r2;
    // 0x80234894: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x80234898: lh          $v0, -0x2($s2)
    ctx->r2 = MEM_H(ctx->r18, -0X2);
    // 0x8023489C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802348A0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802348A4: sw          $v0, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->r2;
    // 0x802348A8: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x802348AC: lh          $v0, 0x0($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X0);
    // 0x802348B0: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x802348B4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802348B8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802348BC: sw          $v0, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->r2;
    // 0x802348C0: jal         0x8009A3B4
    // 0x802348C4: sw          $v0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x802348C4: sw          $v0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r2;
    after_2:
    // 0x802348C8: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x802348CC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x802348D0: jal         0x8009A3B4
    // 0x802348D4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x802348D4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x802348D8: sh          $zero, 0x5C($s1)
    MEM_H(0X5C, ctx->r17) = 0;
    // 0x802348DC: sh          $zero, 0x54($s1)
    MEM_H(0X54, ctx->r17) = 0;
    // 0x802348E0: lbu         $v0, -0x9($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0X9);
    // 0x802348E4: lbu         $v1, 0x1($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X1);
    // 0x802348E8: sh          $zero, 0x60($s1)
    MEM_H(0X60, ctx->r17) = 0;
    // 0x802348EC: sh          $zero, 0x58($s1)
    MEM_H(0X58, ctx->r17) = 0;
    // 0x802348F0: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x802348F4: sh          $v0, 0x5E($s1)
    MEM_H(0X5E, ctx->r17) = ctx->r2;
    // 0x802348F8: j           L_80234AC4
    // 0x802348FC: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
        goto L_80234AC4;
    // 0x802348FC: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
L_80234900:
    // 0x80234900: jal         0x8004EF48
    // 0x80234904: nop

    func_8004EF48_2A348(rdram, ctx);
        goto after_4;
    // 0x80234904: nop

    after_4:
    // 0x80234908: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8023490C: beq         $s1, $zero, L_80234AD0
    if (ctx->r17 == 0) {
        // 0x80234910: addiu       $s0, $s1, 0x2C
        ctx->r16 = ADD32(ctx->r17, 0X2C);
            goto L_80234AD0;
    }
    // 0x80234910: addiu       $s0, $s1, 0x2C
    ctx->r16 = ADD32(ctx->r17, 0X2C);
    // 0x80234914: lbu         $v0, 0x0($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X0);
    // 0x80234918: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x8023491C: lbu         $v0, -0xE($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0XE);
    // 0x80234920: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
    // 0x80234924: lbu         $v0, -0xD($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0XD);
    // 0x80234928: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    // 0x8023492C: lbu         $v0, -0xC($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0XC);
    // 0x80234930: sb          $v0, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r2;
    // 0x80234934: lbu         $v0, -0xB($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0XB);
    // 0x80234938: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
    // 0x8023493C: lw          $v0, -0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, -0X8);
    // 0x80234940: sw          $v0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r2;
    // 0x80234944: lh          $v0, -0x4($s2)
    ctx->r2 = MEM_H(ctx->r18, -0X4);
    // 0x80234948: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023494C: sw          $v0, 0x34($s1)
    MEM_W(0X34, ctx->r17) = ctx->r2;
    // 0x80234950: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x80234954: lh          $v0, -0x2($s2)
    ctx->r2 = MEM_H(ctx->r18, -0X2);
    // 0x80234958: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023495C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80234960: sw          $v0, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->r2;
    // 0x80234964: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x80234968: lh          $v0, 0x0($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X0);
    // 0x8023496C: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x80234970: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80234974: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80234978: sw          $v0, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->r2;
    // 0x8023497C: jal         0x8009A3B4
    // 0x80234980: sw          $v0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x80234980: sw          $v0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r2;
    after_5:
    // 0x80234984: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x80234988: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8023498C: jal         0x8009A3B4
    // 0x80234990: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x80234990: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x80234994: sh          $zero, 0x5C($s1)
    MEM_H(0X5C, ctx->r17) = 0;
    // 0x80234998: sh          $zero, 0x54($s1)
    MEM_H(0X54, ctx->r17) = 0;
    // 0x8023499C: lbu         $v0, -0x9($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0X9);
    // 0x802349A0: lbu         $v1, 0x1($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X1);
    // 0x802349A4: sh          $zero, 0x60($s1)
    MEM_H(0X60, ctx->r17) = 0;
    // 0x802349A8: sh          $zero, 0x58($s1)
    MEM_H(0X58, ctx->r17) = 0;
    // 0x802349AC: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x802349B0: sh          $v0, 0x5E($s1)
    MEM_H(0X5E, ctx->r17) = ctx->r2;
    // 0x802349B4: j           L_80234AC4
    // 0x802349B8: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
        goto L_80234AC4;
    // 0x802349B8: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
L_802349BC:
    // 0x802349BC: jal         0x8004EFE4
    // 0x802349C0: nop

    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_7;
    // 0x802349C0: nop

    after_7:
    // 0x802349C4: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x802349C8: beq         $s1, $zero, L_80234AD0
    if (ctx->r17 == 0) {
        // 0x802349CC: addiu       $s0, $s1, 0x2C
        ctx->r16 = ADD32(ctx->r17, 0X2C);
            goto L_80234AD0;
    }
    // 0x802349CC: addiu       $s0, $s1, 0x2C
    ctx->r16 = ADD32(ctx->r17, 0X2C);
    // 0x802349D0: lbu         $v0, 0x0($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X0);
    // 0x802349D4: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x802349D8: lbu         $v0, -0xE($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0XE);
    // 0x802349DC: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
    // 0x802349E0: lbu         $v0, -0xD($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0XD);
    // 0x802349E4: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    // 0x802349E8: lw          $v0, -0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, -0X8);
    // 0x802349EC: sw          $v0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r2;
    // 0x802349F0: lh          $v0, -0x4($s2)
    ctx->r2 = MEM_H(ctx->r18, -0X4);
    // 0x802349F4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802349F8: sw          $v0, 0x34($s1)
    MEM_W(0X34, ctx->r17) = ctx->r2;
    // 0x802349FC: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x80234A00: lh          $v0, -0x2($s2)
    ctx->r2 = MEM_H(ctx->r18, -0X2);
    // 0x80234A04: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234A08: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80234A0C: sw          $v0, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->r2;
    // 0x80234A10: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x80234A14: lh          $v0, 0x0($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X0);
    // 0x80234A18: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x80234A1C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80234A20: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80234A24: sw          $v0, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->r2;
    // 0x80234A28: jal         0x8009A3B4
    // 0x80234A2C: sw          $v0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x80234A2C: sw          $v0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r2;
    after_8:
    // 0x80234A30: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x80234A34: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80234A38: jal         0x8009A3B4
    // 0x80234A3C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_9;
    // 0x80234A3C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_9:
    // 0x80234A40: sh          $zero, 0x5C($s1)
    MEM_H(0X5C, ctx->r17) = 0;
    // 0x80234A44: sh          $zero, 0x54($s1)
    MEM_H(0X54, ctx->r17) = 0;
    // 0x80234A48: lbu         $v0, -0x9($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0X9);
    // 0x80234A4C: lbu         $v1, 0x1($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X1);
    // 0x80234A50: sh          $zero, 0x60($s1)
    MEM_H(0X60, ctx->r17) = 0;
    // 0x80234A54: sh          $zero, 0x58($s1)
    MEM_H(0X58, ctx->r17) = 0;
    // 0x80234A58: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80234A5C: sh          $v0, 0x5E($s1)
    MEM_H(0X5E, ctx->r17) = ctx->r2;
    // 0x80234A60: j           L_80234AC4
    // 0x80234A64: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
        goto L_80234AC4;
    // 0x80234A64: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
L_80234A68:
    // 0x80234A68: jal         0x8004F2C4
    // 0x80234A6C: nop

    func_8004F2C4_2A6C4(rdram, ctx);
        goto after_10;
    // 0x80234A6C: nop

    after_10:
    // 0x80234A70: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80234A74: beq         $s0, $zero, L_80234AD0
    if (ctx->r16 == 0) {
        // 0x80234A78: addiu       $a0, $s0, 0x38
        ctx->r4 = ADD32(ctx->r16, 0X38);
            goto L_80234AD0;
    }
    // 0x80234A78: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x80234A7C: lbu         $v0, 0x0($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X0);
    // 0x80234A80: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80234A84: lbu         $v0, -0xE($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0XE);
    // 0x80234A88: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80234A8C: lbu         $v0, -0xD($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0XD);
    // 0x80234A90: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x80234A94: lw          $v0, -0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, -0X8);
    // 0x80234A98: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x80234A9C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80234AA0: jal         0x8009A3B4
    // 0x80234AA4: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_11;
    // 0x80234AA4: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    after_11:
    // 0x80234AA8: lhu         $v0, -0x4($s2)
    ctx->r2 = MEM_HU(ctx->r18, -0X4);
    // 0x80234AAC: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80234AB0: sh          $v0, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r2;
    // 0x80234AB4: lhu         $v0, -0x2($s2)
    ctx->r2 = MEM_HU(ctx->r18, -0X2);
    // 0x80234AB8: sh          $v0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r2;
    // 0x80234ABC: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x80234AC0: sh          $v0, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r2;
L_80234AC4:
    // 0x80234AC4: sb          $v1, 0x1($s3)
    MEM_B(0X1, ctx->r19) = ctx->r3;
    // 0x80234AC8: sb          $s6, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r22;
    // 0x80234ACC: addiu       $s3, $s3, 0x2
    ctx->r19 = ADD32(ctx->r19, 0X2);
L_80234AD0:
    // 0x80234AD0: addiu       $s2, $s2, 0x18
    ctx->r18 = ADD32(ctx->r18, 0X18);
L_80234AD4:
    // 0x80234AD4: addiu       $s5, $s5, 0x18
    ctx->r21 = ADD32(ctx->r21, 0X18);
    // 0x80234AD8: addiu       $s4, $s4, 0x18
    ctx->r20 = ADD32(ctx->r20, 0X18);
    // 0x80234ADC: lb          $v1, 0x0($s4)
    ctx->r3 = MEM_B(ctx->r20, 0X0);
    // 0x80234AE0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80234AE4: bne         $v1, $v0, L_802347F0
    if (ctx->r3 != ctx->r2) {
        // 0x80234AE8: addiu       $s6, $s6, 0x1
        ctx->r22 = ADD32(ctx->r22, 0X1);
            goto L_802347F0;
    }
    // 0x80234AE8: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
L_80234AEC:
    // 0x80234AEC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80234AF0: sb          $v0, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r2;
    // 0x80234AF4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80234AF8: sb          $v0, 0x1($s3)
    MEM_B(0X1, ctx->r19) = ctx->r2;
    // 0x80234AFC: lhu         $v0, 0x2($s7)
    ctx->r2 = MEM_HU(ctx->r23, 0X2);
    // 0x80234B00: lw          $a3, 0x14($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X14);
    // 0x80234B04: sb          $v0, 0x8($a3)
    MEM_B(0X8, ctx->r7) = ctx->r2;
    // 0x80234B08: lhu         $v0, 0x0($s7)
    ctx->r2 = MEM_HU(ctx->r23, 0X0);
    // 0x80234B0C: sb          $v0, 0x9($a3)
    MEM_B(0X9, ctx->r7) = ctx->r2;
    // 0x80234B10: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80234B14: sb          $v0, 0x8($fp)
    MEM_B(0X8, ctx->r30) = ctx->r2;
    // 0x80234B18: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80234B1C: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80234B20: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80234B24: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80234B28: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80234B2C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80234B30: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80234B34: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80234B38: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80234B3C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80234B40: jr          $ra
    // 0x80234B44: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80234B44: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80234B48: nop

    // 0x80234B4C: nop

;}
RECOMP_FUNC void func_80234220_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234220: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80234224: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80234228: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023422C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80234230: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80234234: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x80234238: addiu       $a1, $a1, -0x3BC8
    ctx->r5 = ADD32(ctx->r5, -0X3BC8);
    // 0x8023423C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80234240: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80234244: sb          $a0, 0x1D($s0)
    MEM_B(0X1D, ctx->r16) = ctx->r4;
    // 0x80234248: sb          $a0, 0x1C($s0)
    MEM_B(0X1C, ctx->r16) = ctx->r4;
    // 0x8023424C: lb          $v1, 0x0($a1)
    ctx->r3 = MEM_B(ctx->r5, 0X0);
    // 0x80234250: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80234254: lb          $v0, -0x3BC7($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC7);
    // 0x80234258: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8023425C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234260: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80234264: lw          $v1, -0x7960($at)
    ctx->r3 = MEM_W(ctx->r1, -0X7960);
    // 0x80234268: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023426C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80234270: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80234274: sw          $zero, 0x18($s0)
    MEM_W(0X18, ctx->r16) = 0;
    // 0x80234278: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x8023427C: lb          $v1, 0x0($a1)
    ctx->r3 = MEM_B(ctx->r5, 0X0);
    // 0x80234280: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80234284: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234288: sb          $a0, -0x6F60($at)
    MEM_B(-0X6F60, ctx->r1) = ctx->r4;
    // 0x8023428C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234290: sb          $v0, -0x6F5F($at)
    MEM_B(-0X6F5F, ctx->r1) = ctx->r2;
    // 0x80234294: sltiu       $v0, $v1, 0x1E
    ctx->r2 = ctx->r3 < 0X1E ? 1 : 0;
    // 0x80234298: beq         $v0, $zero, L_802342F0
    if (ctx->r2 == 0) {
        // 0x8023429C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_802342F0;
    }
    // 0x8023429C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802342A0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802342A4: addu        $at, $at, $v0
    gpr jr_addend_802342AC = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802342A8: lw          $v0, -0x7110($at)
    ctx->r2 = ADD32(ctx->r1, -0X7110);
    // 0x802342AC: jr          $v0
    // 0x802342B0: nop

    switch (jr_addend_802342AC >> 2) {
        case 0: goto L_802342B4; break;
        case 1: goto L_802342F0; break;
        case 2: goto L_802342F0; break;
        case 3: goto L_802342F0; break;
        case 4: goto L_802342F0; break;
        case 5: goto L_802342F0; break;
        case 6: goto L_802342F0; break;
        case 7: goto L_802342F0; break;
        case 8: goto L_802342F0; break;
        case 9: goto L_802342BC; break;
        case 10: goto L_802342F0; break;
        case 11: goto L_802342F0; break;
        case 12: goto L_802342F0; break;
        case 13: goto L_802342F0; break;
        case 14: goto L_802342C4; break;
        case 15: goto L_802342F0; break;
        case 16: goto L_802342F0; break;
        case 17: goto L_802342F0; break;
        case 18: goto L_802342F0; break;
        case 19: goto L_802342CC; break;
        case 20: goto L_802342D4; break;
        case 21: goto L_802342F0; break;
        case 22: goto L_802342F0; break;
        case 23: goto L_802342F0; break;
        case 24: goto L_802342F0; break;
        case 25: goto L_802342F0; break;
        case 26: goto L_802342DC; break;
        case 27: goto L_802342F0; break;
        case 28: goto L_802342F0; break;
        case 29: goto L_802342E4; break;
        default: switch_error(__func__, 0x802342AC, 0x80238EF0);
    }
    // 0x802342B0: nop

L_802342B4:
    // 0x802342B4: j           L_802342E8
    // 0x802342B8: addiu       $a0, $zero, 0x630
    ctx->r4 = ADD32(0, 0X630);
        goto L_802342E8;
    // 0x802342B8: addiu       $a0, $zero, 0x630
    ctx->r4 = ADD32(0, 0X630);
L_802342BC:
    // 0x802342BC: j           L_802342E8
    // 0x802342C0: addiu       $a0, $zero, 0x610
    ctx->r4 = ADD32(0, 0X610);
        goto L_802342E8;
    // 0x802342C0: addiu       $a0, $zero, 0x610
    ctx->r4 = ADD32(0, 0X610);
L_802342C4:
    // 0x802342C4: j           L_802342E8
    // 0x802342C8: addiu       $a0, $zero, 0x610
    ctx->r4 = ADD32(0, 0X610);
        goto L_802342E8;
    // 0x802342C8: addiu       $a0, $zero, 0x610
    ctx->r4 = ADD32(0, 0X610);
L_802342CC:
    // 0x802342CC: j           L_802342E8
    // 0x802342D0: addiu       $a0, $zero, 0x620
    ctx->r4 = ADD32(0, 0X620);
        goto L_802342E8;
    // 0x802342D0: addiu       $a0, $zero, 0x620
    ctx->r4 = ADD32(0, 0X620);
L_802342D4:
    // 0x802342D4: j           L_802342E8
    // 0x802342D8: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
        goto L_802342E8;
    // 0x802342D8: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
L_802342DC:
    // 0x802342DC: j           L_802342E8
    // 0x802342E0: addiu       $a0, $zero, 0x605
    ctx->r4 = ADD32(0, 0X605);
        goto L_802342E8;
    // 0x802342E0: addiu       $a0, $zero, 0x605
    ctx->r4 = ADD32(0, 0X605);
L_802342E4:
    // 0x802342E4: addiu       $a0, $zero, 0x604
    ctx->r4 = ADD32(0, 0X604);
L_802342E8:
    // 0x802342E8: jal         0x80060590
    // 0x802342EC: nop

    func_80060590_3B990(rdram, ctx);
        goto after_0;
    // 0x802342EC: nop

    after_0:
L_802342F0:
    // 0x802342F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802342F4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x802342F8: jal         0x80234310
    // 0x802342FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80234310_ovl31(rdram, ctx);
        goto after_1;
    // 0x802342FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80234300: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80234304: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80234308: jr          $ra
    // 0x8023430C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023430C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022CAD4_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CAD4: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x8022CAD8: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x8022CADC: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x8022CAE0: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x8022CAE4: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x8022CAE8: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x8022CAEC: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x8022CAF0: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x8022CAF4: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x8022CAF8: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x8022CAFC: lbu         $v0, 0xCA($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XCA);
    // 0x8022CB00: addiu       $a0, $s4, 0x368
    ctx->r4 = ADD32(ctx->r20, 0X368);
    // 0x8022CB04: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x8022CB08: addiu       $s5, $s4, 0x348
    ctx->r21 = ADD32(ctx->r20, 0X348);
    // 0x8022CB0C: addiu       $s6, $s4, 0xC4
    ctx->r22 = ADD32(ctx->r20, 0XC4);
    // 0x8022CB10: addiu       $s1, $s4, 0x1D8
    ctx->r17 = ADD32(ctx->r20, 0X1D8);
    // 0x8022CB14: addiu       $s3, $s4, 0x64
    ctx->r19 = ADD32(ctx->r20, 0X64);
    // 0x8022CB18: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8022CB1C: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x8022CB20: andi        $v0, $v0, 0xF7
    ctx->r2 = ctx->r2 & 0XF7;
    // 0x8022CB24: jal         0x800540D0
    // 0x8022CB28: sb          $v0, 0xCA($s4)
    MEM_B(0XCA, ctx->r20) = ctx->r2;
    func_800540D0_2F4D0(rdram, ctx);
        goto after_0;
    // 0x8022CB28: sb          $v0, 0xCA($s4)
    MEM_B(0XCA, ctx->r20) = ctx->r2;
    after_0:
    // 0x8022CB2C: beq         $v0, $zero, L_8022CB40
    if (ctx->r2 == 0) {
        // 0x8022CB30: nop
    
            goto L_8022CB40;
    }
    // 0x8022CB30: nop

    // 0x8022CB34: lbu         $v0, 0xCA($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XCA);
    // 0x8022CB38: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
    // 0x8022CB3C: sb          $v0, 0xCA($s4)
    MEM_B(0XCA, ctx->r20) = ctx->r2;
L_8022CB40:
    // 0x8022CB40: lbu         $v0, 0x1DD($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X1DD);
    // 0x8022CB44: beq         $v0, $zero, L_8022CB50
    if (ctx->r2 == 0) {
        // 0x8022CB48: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_8022CB50;
    }
    // 0x8022CB48: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022CB4C: sb          $v0, 0x1DD($s4)
    MEM_B(0X1DD, ctx->r20) = ctx->r2;
L_8022CB50:
    // 0x8022CB50: lhu         $v0, 0x1D8($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X1D8);
    // 0x8022CB54: beq         $v0, $zero, L_8022CB60
    if (ctx->r2 == 0) {
        // 0x8022CB58: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_8022CB60;
    }
    // 0x8022CB58: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022CB5C: sh          $v0, 0x1D8($s4)
    MEM_H(0X1D8, ctx->r20) = ctx->r2;
L_8022CB60:
    // 0x8022CB60: lw          $v1, 0x350($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X350);
    // 0x8022CB64: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x8022CB68: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8022CB6C: and         $a1, $v1, $v0
    ctx->r5 = ctx->r3 & ctx->r2;
    // 0x8022CB70: beq         $a1, $zero, L_8022CDC0
    if (ctx->r5 == 0) {
        // 0x8022CB74: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022CDC0;
    }
    // 0x8022CB74: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CB78: lbu         $v1, 0x9($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X9);
    // 0x8022CB7C: bne         $v1, $v0, L_8022CB90
    if (ctx->r3 != ctx->r2) {
        // 0x8022CB80: nop
    
            goto L_8022CB90;
    }
    // 0x8022CB80: nop

    // 0x8022CB84: lbu         $v0, 0x1DC($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X1DC);
    // 0x8022CB88: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022CB8C: sb          $v0, 0x1DC($s4)
    MEM_B(0X1DC, ctx->r20) = ctx->r2;
L_8022CB90:
    // 0x8022CB90: lhu         $v0, 0x6E($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X6E);
    // 0x8022CB94: lhu         $a0, 0x6E($s4)
    ctx->r4 = MEM_HU(ctx->r20, 0X6E);
    // 0x8022CB98: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x8022CB9C: sh          $v0, 0x6E($s4)
    MEM_H(0X6E, ctx->r20) = ctx->r2;
    // 0x8022CBA0: lhu         $v0, 0x1D8($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X1D8);
    // 0x8022CBA4: lh          $v1, 0x6E($s4)
    ctx->r3 = MEM_H(ctx->r20, 0X6E);
    // 0x8022CBA8: sh          $a0, 0xB2($s4)
    MEM_H(0XB2, ctx->r20) = ctx->r4;
    // 0x8022CBAC: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8022CBB0: bgtz        $v1, L_8022CBCC
    if (SIGNED(ctx->r3) > 0) {
        // 0x8022CBB4: sh          $v0, 0x1D8($s4)
        MEM_H(0X1D8, ctx->r20) = ctx->r2;
            goto L_8022CBCC;
    }
    // 0x8022CBB4: sh          $v0, 0x1D8($s4)
    MEM_H(0X1D8, ctx->r20) = ctx->r2;
    // 0x8022CBB8: lbu         $v0, 0xCA($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XCA);
    // 0x8022CBBC: addiu       $v1, $zero, 0x7
    ctx->r3 = ADD32(0, 0X7);
    // 0x8022CBC0: sb          $v1, 0x9($s4)
    MEM_B(0X9, ctx->r20) = ctx->r3;
    // 0x8022CBC4: j           L_8022D064
    // 0x8022CBC8: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
        goto L_8022D064;
    // 0x8022CBC8: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
L_8022CBCC:
    // 0x8022CBCC: lbu         $v0, 0xCA($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XCA);
    // 0x8022CBD0: addiu       $v1, $zero, 0x7FFF
    ctx->r3 = ADD32(0, 0X7FFF);
    // 0x8022CBD4: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8022CBD8: bne         $v0, $zero, L_8022CC0C
    if (ctx->r2 != 0) {
        // 0x8022CBDC: sh          $v1, 0x15E($s4)
        MEM_H(0X15E, ctx->r20) = ctx->r3;
            goto L_8022CC0C;
    }
    // 0x8022CBDC: sh          $v1, 0x15E($s4)
    MEM_H(0X15E, ctx->r20) = ctx->r3;
    // 0x8022CBE0: lbu         $v0, 0x2($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X2);
    // 0x8022CBE4: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8022CBE8: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x8022CBEC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022CBF0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022CBF4: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x8022CBF8: lhu         $v0, 0x1D8($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X1D8);
    // 0x8022CBFC: lbu         $v1, 0x9($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X9);
    // 0x8022CC00: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8022CC04: beq         $v0, $zero, L_8022CC20
    if (ctx->r2 == 0) {
        // 0x8022CC08: nop
    
            goto L_8022CC20;
    }
    // 0x8022CC08: nop

L_8022CC0C:
    // 0x8022CC0C: lw          $v0, 0x350($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X350);
    // 0x8022CC10: lui         $v1, 0x2000
    ctx->r3 = S32(0X2000 << 16);
    // 0x8022CC14: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022CC18: beq         $v0, $zero, L_8022CCDC
    if (ctx->r2 == 0) {
        // 0x8022CC1C: addiu       $a0, $zero, 0xA0
        ctx->r4 = ADD32(0, 0XA0);
            goto L_8022CCDC;
    }
    // 0x8022CC1C: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
L_8022CC20:
    // 0x8022CC20: lbu         $v1, 0x9($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X9);
    // 0x8022CC24: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022CC28: beq         $v1, $v0, L_8022D068
    if (ctx->r3 == ctx->r2) {
        // 0x8022CC2C: addiu       $a0, $zero, 0xA2
        ctx->r4 = ADD32(0, 0XA2);
            goto L_8022D068;
    }
    // 0x8022CC2C: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
    // 0x8022CC30: addiu       $s0, $s4, 0x14
    ctx->r16 = ADD32(ctx->r20, 0X14);
    // 0x8022CC34: jal         0x8002A33C
    // 0x8022CC38: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x8022CC38: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022CC3C: lbu         $v0, 0x6($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X6);
    // 0x8022CC40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CC44: addiu       $a1, $s5, 0x10
    ctx->r5 = ADD32(ctx->r21, 0X10);
    // 0x8022CC48: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x8022CC4C: andi        $v0, $v0, 0xDF
    ctx->r2 = ctx->r2 & 0XDF;
    // 0x8022CC50: sb          $v0, 0x6($s6)
    MEM_B(0X6, ctx->r22) = ctx->r2;
    // 0x8022CC54: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x8022CC58: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
    // 0x8022CC5C: sb          $zero, 0x4($s1)
    MEM_B(0X4, ctx->r17) = 0;
    // 0x8022CC60: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
    // 0x8022CC64: lh          $a2, 0x56($s4)
    ctx->r6 = MEM_H(ctx->r20, 0X56);
    // 0x8022CC68: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022CC6C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022CC70: jal         0x8004FEA0
    // 0x8022CC74: sb          $v0, 0x9($s4)
    MEM_B(0X9, ctx->r20) = ctx->r2;
    func_8004FEA0_2B2A0(rdram, ctx);
        goto after_2;
    // 0x8022CC74: sb          $v0, 0x9($s4)
    MEM_B(0X9, ctx->r20) = ctx->r2;
    after_2:
    // 0x8022CC78: addiu       $v1, $zero, 0xC0
    ctx->r3 = ADD32(0, 0XC0);
    // 0x8022CC7C: sh          $v1, 0x44($s4)
    MEM_H(0X44, ctx->r20) = ctx->r3;
    // 0x8022CC80: addiu       $v1, $zero, -0xC0
    ctx->r3 = ADD32(0, -0XC0);
    // 0x8022CC84: sh          $v1, 0x46($s4)
    MEM_H(0X46, ctx->r20) = ctx->r3;
    // 0x8022CC88: lbu         $v1, 0x6($s6)
    ctx->r3 = MEM_BU(ctx->r22, 0X6);
    // 0x8022CC8C: andi        $v1, $v1, 0xFD
    ctx->r3 = ctx->r3 & 0XFD;
    // 0x8022CC90: sb          $v1, 0x6($s6)
    MEM_B(0X6, ctx->r22) = ctx->r3;
    // 0x8022CC94: addiu       $v1, $v0, 0x800
    ctx->r3 = ADD32(ctx->r2, 0X800);
    // 0x8022CC98: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022CC9C: sh          $v1, 0x56($s4)
    MEM_H(0X56, ctx->r20) = ctx->r3;
    // 0x8022CCA0: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x8022CCA4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022CCA8: bne         $v0, $zero, L_8022CCC4
    if (ctx->r2 != 0) {
        // 0x8022CCAC: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_8022CCC4;
    }
    // 0x8022CCAC: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x8022CCB0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x8022CCB4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022CCB8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022CCBC: j           L_8022CDB0
    // 0x8022CCC0: sb          $zero, 0xA($s4)
    MEM_B(0XA, ctx->r20) = 0;
        goto L_8022CDB0;
    // 0x8022CCC0: sb          $zero, 0xA($s4)
    MEM_B(0XA, ctx->r20) = 0;
L_8022CCC4:
    // 0x8022CCC4: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x8022CCC8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022CCCC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CCD0: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
    // 0x8022CCD4: j           L_8022CDB0
    // 0x8022CCD8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
        goto L_8022CDB0;
    // 0x8022CCD8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_8022CCDC:
    // 0x8022CCDC: addiu       $s0, $s4, 0x14
    ctx->r16 = ADD32(ctx->r20, 0X14);
    // 0x8022CCE0: jal         0x8002A33C
    // 0x8022CCE4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_3;
    // 0x8022CCE4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022CCE8: lbu         $v0, 0x1DD($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X1DD);
    // 0x8022CCEC: beq         $v0, $zero, L_8022CD38
    if (ctx->r2 == 0) {
        // 0x8022CCF0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022CD38;
    }
    // 0x8022CCF0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022CCF4: lbu         $v1, 0x1DC($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X1DC);
    // 0x8022CCF8: bne         $v1, $v0, L_8022D068
    if (ctx->r3 != ctx->r2) {
        // 0x8022CCFC: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_8022D068;
    }
    // 0x8022CCFC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022CD00: lbu         $v1, 0x9($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X9);
    // 0x8022CD04: beq         $v1, $v0, L_8022D068
    if (ctx->r3 == ctx->r2) {
        // 0x8022CD08: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_8022D068;
    }
    // 0x8022CD08: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x8022CD0C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x8022CD10: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022CD14: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022CD18: sb          $v0, 0x9($s4)
    MEM_B(0X9, ctx->r20) = ctx->r2;
    // 0x8022CD1C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022CD20: sb          $zero, 0xA($s4)
    MEM_B(0XA, ctx->r20) = 0;
    // 0x8022CD24: jal         0x80050294
    // 0x8022CD28: sb          $v0, 0xAC($s4)
    MEM_B(0XAC, ctx->r20) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_4;
    // 0x8022CD28: sb          $v0, 0xAC($s4)
    MEM_B(0XAC, ctx->r20) = ctx->r2;
    after_4:
    // 0x8022CD2C: lbu         $v0, 0xCA($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XCA);
    // 0x8022CD30: j           L_8022D064
    // 0x8022CD34: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
        goto L_8022D064;
    // 0x8022CD34: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
L_8022CD38:
    // 0x8022CD38: addiu       $a0, $s4, 0x1C
    ctx->r4 = ADD32(ctx->r20, 0X1C);
    // 0x8022CD3C: lh          $a1, 0x56($s4)
    ctx->r5 = MEM_H(ctx->r20, 0X56);
    // 0x8022CD40: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    // 0x8022CD44: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x8022CD48: sb          $v0, 0x1DD($s4)
    MEM_B(0X1DD, ctx->r20) = ctx->r2;
    // 0x8022CD4C: sb          $zero, 0x1DC($s4)
    MEM_B(0X1DC, ctx->r20) = 0;
    // 0x8022CD50: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8022CD54: lh          $v1, 0x4A06($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X4A06);
    // 0x8022CD58: addiu       $a3, $s2, 0x1C
    ctx->r7 = ADD32(ctx->r18, 0X1C);
    // 0x8022CD5C: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x8022CD60: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022CD64: jal         0x8004FAEC
    // 0x8022CD68: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_8004FAEC_2AEEC(rdram, ctx);
        goto after_5;
    // 0x8022CD68: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_5:
    // 0x8022CD6C: bne         $v0, $zero, L_8022D068
    if (ctx->r2 != 0) {
        // 0x8022CD70: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_8022D068;
    }
    // 0x8022CD70: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022CD74: lbu         $v1, 0x9($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X9);
    // 0x8022CD78: beq         $v1, $v0, L_8022D068
    if (ctx->r3 == ctx->r2) {
        // 0x8022CD7C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022D068;
    }
    // 0x8022CD7C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CD80: lh          $a2, 0x56($s4)
    ctx->r6 = MEM_H(ctx->r20, 0X56);
    // 0x8022CD84: lh          $a3, 0x382($s4)
    ctx->r7 = MEM_H(ctx->r20, 0X382);
    // 0x8022CD88: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x8022CD8C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022CD90: sb          $v0, 0x9($s4)
    MEM_B(0X9, ctx->r20) = ctx->r2;
    // 0x8022CD94: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022CD98: jal         0x8004F820
    // 0x8022CD9C: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_6;
    // 0x8022CD9C: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
    after_6:
    // 0x8022CDA0: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x8022CDA4: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x8022CDA8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022CDAC: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
L_8022CDB0:
    // 0x8022CDB0: jal         0x80050294
    // 0x8022CDB4: sb          $v0, 0xAC($s4)
    MEM_B(0XAC, ctx->r20) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_7;
    // 0x8022CDB4: sb          $v0, 0xAC($s4)
    MEM_B(0XAC, ctx->r20) = ctx->r2;
    after_7:
    // 0x8022CDB8: j           L_8022D068
    // 0x8022CDBC: nop

        goto L_8022D068;
    // 0x8022CDBC: nop

L_8022CDC0:
    // 0x8022CDC0: lbu         $v1, 0x9($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X9);
    // 0x8022CDC4: addiu       $v0, $v1, -0x2
    ctx->r2 = ADD32(ctx->r3, -0X2);
    // 0x8022CDC8: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x8022CDCC: bne         $v0, $zero, L_8022D068
    if (ctx->r2 != 0) {
        // 0x8022CDD0: addiu       $v0, $v1, -0x4
        ctx->r2 = ADD32(ctx->r3, -0X4);
            goto L_8022D068;
    }
    // 0x8022CDD0: addiu       $v0, $v1, -0x4
    ctx->r2 = ADD32(ctx->r3, -0X4);
    // 0x8022CDD4: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x8022CDD8: bne         $v0, $zero, L_8022D068
    if (ctx->r2 != 0) {
        // 0x8022CDDC: nop
    
            goto L_8022D068;
    }
    // 0x8022CDDC: nop

    // 0x8022CDE0: lbu         $v0, 0xCA($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XCA);
    // 0x8022CDE4: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8022CDE8: bne         $v0, $zero, L_8022D068
    if (ctx->r2 != 0) {
        // 0x8022CDEC: andi        $v1, $v1, 0xFF
        ctx->r3 = ctx->r3 & 0XFF;
            goto L_8022D068;
    }
    // 0x8022CDEC: andi        $v1, $v1, 0xFF
    ctx->r3 = ctx->r3 & 0XFF;
    // 0x8022CDF0: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022CDF4: beq         $v1, $v0, L_8022D068
    if (ctx->r3 == ctx->r2) {
        // 0x8022CDF8: nop
    
            goto L_8022D068;
    }
    // 0x8022CDF8: nop

    // 0x8022CDFC: lb          $v0, 0x386($s4)
    ctx->r2 = MEM_B(ctx->r20, 0X386);
    // 0x8022CE00: beq         $v0, $zero, L_8022CE10
    if (ctx->r2 == 0) {
        // 0x8022CE04: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022CE10;
    }
    // 0x8022CE04: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022CE08: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022CE0C: sb          $v0, 0x386($s4)
    MEM_B(0X386, ctx->r20) = ctx->r2;
L_8022CE10:
    // 0x8022CE10: lbu         $v0, 0xCA($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XCA);
    // 0x8022CE14: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x8022CE18: beq         $v0, $zero, L_8022D028
    if (ctx->r2 == 0) {
        // 0x8022CE1C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022D028;
    }
    // 0x8022CE1C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CE20: lbu         $v1, 0x9($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X9);
    // 0x8022CE24: beq         $v1, $v0, L_8022CFE4
    if (ctx->r3 == ctx->r2) {
        // 0x8022CE28: addiu       $a0, $s4, 0x1C
        ctx->r4 = ADD32(ctx->r20, 0X1C);
            goto L_8022CFE4;
    }
    // 0x8022CE28: addiu       $a0, $s4, 0x1C
    ctx->r4 = ADD32(ctx->r20, 0X1C);
    // 0x8022CE2C: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    // 0x8022CE30: lh          $a1, 0x56($s4)
    ctx->r5 = MEM_H(ctx->r20, 0X56);
    // 0x8022CE34: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8022CE38: lh          $v1, 0x4A06($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X4A06);
    // 0x8022CE3C: addiu       $a3, $s2, 0x1C
    ctx->r7 = ADD32(ctx->r18, 0X1C);
    // 0x8022CE40: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x8022CE44: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022CE48: jal         0x8004FAEC
    // 0x8022CE4C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_8004FAEC_2AEEC(rdram, ctx);
        goto after_8;
    // 0x8022CE4C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_8:
    // 0x8022CE50: beq         $v0, $zero, L_8022CF50
    if (ctx->r2 == 0) {
        // 0x8022CE54: lui         $v0, 0x8
        ctx->r2 = S32(0X8 << 16);
            goto L_8022CF50;
    }
    // 0x8022CE54: lui         $v0, 0x8
    ctx->r2 = S32(0X8 << 16);
    // 0x8022CE58: lw          $v1, 0x80($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X80);
    // 0x8022CE5C: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8022CE60: beq         $v0, $zero, L_8022CE74
    if (ctx->r2 == 0) {
        // 0x8022CE64: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022CE74;
    }
    // 0x8022CE64: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CE68: sb          $v0, 0x9($s4)
    MEM_B(0X9, ctx->r20) = ctx->r2;
    // 0x8022CE6C: j           L_8022CFE4
    // 0x8022CE70: sb          $zero, 0xA($s4)
    MEM_B(0XA, ctx->r20) = 0;
        goto L_8022CFE4;
    // 0x8022CE70: sb          $zero, 0xA($s4)
    MEM_B(0XA, ctx->r20) = 0;
L_8022CE74:
    // 0x8022CE74: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x8022CE78: ori         $v0, $v0, 0xE847
    ctx->r2 = ctx->r2 | 0XE847;
    // 0x8022CE7C: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8022CE80: bne         $v0, $zero, L_8022CECC
    if (ctx->r2 != 0) {
        // 0x8022CE84: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_8022CECC;
    }
    // 0x8022CE84: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022CE88: lb          $v0, 0x386($s4)
    ctx->r2 = MEM_B(ctx->r20, 0X386);
    // 0x8022CE8C: bne         $v0, $zero, L_8022CECC
    if (ctx->r2 != 0) {
        // 0x8022CE90: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_8022CECC;
    }
    // 0x8022CE90: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022CE94: lbu         $v1, 0x3($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X3);
    // 0x8022CE98: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022CE9C: beq         $v1, $v0, L_8022CEB0
    if (ctx->r3 == ctx->r2) {
        // 0x8022CEA0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022CEB0;
    }
    // 0x8022CEA0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022CEA4: sb          $v0, 0x9($s4)
    MEM_B(0X9, ctx->r20) = ctx->r2;
    // 0x8022CEA8: j           L_8022CFDC
    // 0x8022CEAC: sb          $zero, 0xA($s4)
    MEM_B(0XA, ctx->r20) = 0;
        goto L_8022CFDC;
    // 0x8022CEAC: sb          $zero, 0xA($s4)
    MEM_B(0XA, ctx->r20) = 0;
L_8022CEB0:
    // 0x8022CEB0: sb          $v0, 0x9($s4)
    MEM_B(0X9, ctx->r20) = ctx->r2;
    // 0x8022CEB4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022CEB8: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
    // 0x8022CEBC: sb          $zero, 0x66($s4)
    MEM_B(0X66, ctx->r20) = 0;
    // 0x8022CEC0: sb          $zero, 0x65($s4)
    MEM_B(0X65, ctx->r20) = 0;
    // 0x8022CEC4: j           L_8022CFDC
    // 0x8022CEC8: sb          $zero, 0x64($s4)
    MEM_B(0X64, ctx->r20) = 0;
        goto L_8022CFDC;
    // 0x8022CEC8: sb          $zero, 0x64($s4)
    MEM_B(0X64, ctx->r20) = 0;
L_8022CECC:
    // 0x8022CECC: sb          $zero, 0x9($s4)
    MEM_B(0X9, ctx->r20) = 0;
    // 0x8022CED0: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
    // 0x8022CED4: lbu         $v0, 0x6($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X6);
    // 0x8022CED8: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x8022CEDC: bne         $v0, $zero, L_8022CEF8
    if (ctx->r2 != 0) {
        // 0x8022CEE0: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_8022CEF8;
    }
    // 0x8022CEE0: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022CEE4: lbu         $v0, 0x6($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X6);
    // 0x8022CEE8: sb          $zero, 0x7($s6)
    MEM_B(0X7, ctx->r22) = 0;
    // 0x8022CEEC: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x8022CEF0: sb          $v0, 0x6($s6)
    MEM_B(0X6, ctx->r22) = ctx->r2;
    // 0x8022CEF4: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
L_8022CEF8:
    // 0x8022CEF8: sh          $v0, 0x3A($s5)
    MEM_H(0X3A, ctx->r21) = ctx->r2;
    // 0x8022CEFC: lbu         $v1, 0x3($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X3);
    // 0x8022CF00: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022CF04: beq         $v1, $v0, L_8022CFE4
    if (ctx->r3 == ctx->r2) {
        // 0x8022CF08: nop
    
            goto L_8022CFE4;
    }
    // 0x8022CF08: nop

    // 0x8022CF0C: lbu         $v0, 0x6($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X6);
    // 0x8022CF10: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022CF14: bne         $v0, $zero, L_8022CFE4
    if (ctx->r2 != 0) {
        // 0x8022CF18: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8022CFE4;
    }
    // 0x8022CF18: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022CF1C: sb          $v0, 0x9($s4)
    MEM_B(0X9, ctx->r20) = ctx->r2;
    // 0x8022CF20: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022CF24: sb          $v0, 0xAC($s4)
    MEM_B(0XAC, ctx->r20) = ctx->r2;
    // 0x8022CF28: lbu         $v0, 0x6($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X6);
    // 0x8022CF2C: ori         $v0, $v0, 0x3
    ctx->r2 = ctx->r2 | 0X3;
    // 0x8022CF30: andi        $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 & 0X7F;
    // 0x8022CF34: sb          $v0, 0x6($s6)
    MEM_B(0X6, ctx->r22) = ctx->r2;
    // 0x8022CF38: lbu         $a1, 0xAC($s4)
    ctx->r5 = MEM_BU(ctx->r20, 0XAC);
    // 0x8022CF3C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x8022CF40: jal         0x80050294
    // 0x8022CF44: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_9;
    // 0x8022CF44: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_9:
    // 0x8022CF48: j           L_8022CFE4
    // 0x8022CF4C: nop

        goto L_8022CFE4;
    // 0x8022CF4C: nop

L_8022CF50:
    // 0x8022CF50: lbu         $v1, 0xCA($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0XCA);
    // 0x8022CF54: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022CF58: sb          $zero, 0x9($s4)
    MEM_B(0X9, ctx->r20) = 0;
    // 0x8022CF5C: andi        $v1, $v1, 0x80
    ctx->r3 = ctx->r3 & 0X80;
    // 0x8022CF60: bne         $v1, $zero, L_8022CF78
    if (ctx->r3 != 0) {
        // 0x8022CF64: sb          $v0, 0xA($s4)
        MEM_B(0XA, ctx->r20) = ctx->r2;
            goto L_8022CF78;
    }
    // 0x8022CF64: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
    // 0x8022CF68: lbu         $v0, 0xCA($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XCA);
    // 0x8022CF6C: sb          $zero, 0xCB($s4)
    MEM_B(0XCB, ctx->r20) = 0;
    // 0x8022CF70: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x8022CF74: sb          $v0, 0xCA($s4)
    MEM_B(0XCA, ctx->r20) = ctx->r2;
L_8022CF78:
    // 0x8022CF78: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x8022CF7C: lw          $a0, 0x80($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X80);
    // 0x8022CF80: ori         $v0, $v0, 0xE847
    ctx->r2 = ctx->r2 | 0XE847;
    // 0x8022CF84: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    // 0x8022CF88: sltu        $v0, $v0, $a0
    ctx->r2 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x8022CF8C: bne         $v0, $zero, L_8022CFE4
    if (ctx->r2 != 0) {
        // 0x8022CF90: sh          $v1, 0x382($s4)
        MEM_H(0X382, ctx->r20) = ctx->r3;
            goto L_8022CFE4;
    }
    // 0x8022CF90: sh          $v1, 0x382($s4)
    MEM_H(0X382, ctx->r20) = ctx->r3;
    // 0x8022CF94: lb          $v0, 0x386($s4)
    ctx->r2 = MEM_B(ctx->r20, 0X386);
    // 0x8022CF98: bne         $v0, $zero, L_8022CFE4
    if (ctx->r2 != 0) {
        // 0x8022CF9C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022CFE4;
    }
    // 0x8022CF9C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022CFA0: lbu         $v1, 0x3($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X3);
    // 0x8022CFA4: beq         $v1, $v0, L_8022CFB8
    if (ctx->r3 == ctx->r2) {
        // 0x8022CFA8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022CFB8;
    }
    // 0x8022CFA8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022CFAC: sb          $v0, 0x9($s4)
    MEM_B(0X9, ctx->r20) = ctx->r2;
    // 0x8022CFB0: j           L_8022CFD0
    // 0x8022CFB4: sb          $zero, 0xA($s4)
    MEM_B(0XA, ctx->r20) = 0;
        goto L_8022CFD0;
    // 0x8022CFB4: sb          $zero, 0xA($s4)
    MEM_B(0XA, ctx->r20) = 0;
L_8022CFB8:
    // 0x8022CFB8: sb          $v0, 0x9($s4)
    MEM_B(0X9, ctx->r20) = ctx->r2;
    // 0x8022CFBC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022CFC0: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
    // 0x8022CFC4: sb          $zero, 0x66($s4)
    MEM_B(0X66, ctx->r20) = 0;
    // 0x8022CFC8: sb          $zero, 0x65($s4)
    MEM_B(0X65, ctx->r20) = 0;
    // 0x8022CFCC: sb          $zero, 0x64($s4)
    MEM_B(0X64, ctx->r20) = 0;
L_8022CFD0:
    // 0x8022CFD0: lbu         $v0, 0x6($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X6);
    // 0x8022CFD4: andi        $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 & 0X7F;
    // 0x8022CFD8: sb          $v0, 0x6($s6)
    MEM_B(0X6, ctx->r22) = ctx->r2;
L_8022CFDC:
    // 0x8022CFDC: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022CFE0: sh          $v0, 0x3A($s5)
    MEM_H(0X3A, ctx->r21) = ctx->r2;
L_8022CFE4:
    // 0x8022CFE4: lw          $v0, 0x8($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X8);
    // 0x8022CFE8: lui         $v1, 0xFF
    ctx->r3 = S32(0XFF << 16);
    // 0x8022CFEC: ori         $v1, $v1, 0xFF00
    ctx->r3 = ctx->r3 | 0XFF00;
    // 0x8022CFF0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022CFF4: addiu       $v1, $zero, 0x600
    ctx->r3 = ADD32(0, 0X600);
    // 0x8022CFF8: bne         $v0, $v1, L_8022D068
    if (ctx->r2 != ctx->r3) {
        // 0x8022CFFC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022D068;
    }
    // 0x8022CFFC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D000: lbu         $v1, 0xAC($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0XAC);
    // 0x8022D004: beq         $v1, $v0, L_8022D068
    if (ctx->r3 == ctx->r2) {
        // 0x8022D008: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022D068;
    }
    // 0x8022D008: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D00C: sb          $v0, 0xAC($s4)
    MEM_B(0XAC, ctx->r20) = ctx->r2;
    // 0x8022D010: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x8022D014: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022D018: jal         0x80050294
    // 0x8022D01C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_10;
    // 0x8022D01C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_10:
    // 0x8022D020: j           L_8022D068
    // 0x8022D024: nop

        goto L_8022D068;
    // 0x8022D024: nop

L_8022D028:
    // 0x8022D028: lbu         $v0, 0x9($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X9);
    // 0x8022D02C: bne         $v0, $zero, L_8022D070
    if (ctx->r2 != 0) {
        // 0x8022D030: sll         $v0, $v0, 2
        ctx->r2 = S32(ctx->r2 << 2);
            goto L_8022D070;
    }
    // 0x8022D030: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D034: lbu         $v1, 0xA($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0XA);
    // 0x8022D038: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022D03C: bne         $v1, $v0, L_8022D068
    if (ctx->r3 != ctx->r2) {
        // 0x8022D040: addiu       $v1, $zero, 0x50
        ctx->r3 = ADD32(0, 0X50);
            goto L_8022D068;
    }
    // 0x8022D040: addiu       $v1, $zero, 0x50
    ctx->r3 = ADD32(0, 0X50);
    // 0x8022D044: lbu         $v0, 0xCA($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XCA);
    // 0x8022D048: sh          $v1, 0x44($s4)
    MEM_H(0X44, ctx->r20) = ctx->r3;
    // 0x8022D04C: addiu       $v1, $zero, 0x78
    ctx->r3 = ADD32(0, 0X78);
    // 0x8022D050: sb          $zero, 0xA($s4)
    MEM_B(0XA, ctx->r20) = 0;
    // 0x8022D054: sb          $zero, 0xF($s4)
    MEM_B(0XF, ctx->r20) = 0;
    // 0x8022D058: sb          $v1, 0x385($s4)
    MEM_B(0X385, ctx->r20) = ctx->r3;
    // 0x8022D05C: sb          $zero, 0x384($s4)
    MEM_B(0X384, ctx->r20) = 0;
    // 0x8022D060: andi        $v0, $v0, 0x7E
    ctx->r2 = ctx->r2 & 0X7E;
L_8022D064:
    // 0x8022D064: sb          $v0, 0xCA($s4)
    MEM_B(0XCA, ctx->r20) = ctx->r2;
L_8022D068:
    // 0x8022D068: lbu         $v0, 0x9($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X9);
    // 0x8022D06C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_8022D070:
    // 0x8022D070: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022D074: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022D078: lw          $v0, -0x7BE4($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7BE4);
    // 0x8022D07C: jalr        $v0
    // 0x8022D080: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_11;
    // 0x8022D080: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_11:
    // 0x8022D084: lbu         $v1, 0xA6($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0XA6);
    // 0x8022D088: andi        $v0, $v1, 0x4
    ctx->r2 = ctx->r3 & 0X4;
    // 0x8022D08C: bne         $v0, $zero, L_8022D0A0
    if (ctx->r2 != 0) {
        // 0x8022D090: addiu       $a0, $zero, 0x159
        ctx->r4 = ADD32(0, 0X159);
            goto L_8022D0A0;
    }
    // 0x8022D090: addiu       $a0, $zero, 0x159
    ctx->r4 = ADD32(0, 0X159);
    // 0x8022D094: andi        $v0, $v1, 0x8
    ctx->r2 = ctx->r3 & 0X8;
    // 0x8022D098: beq         $v0, $zero, L_8022D0A8
    if (ctx->r2 == 0) {
        // 0x8022D09C: addiu       $a0, $zero, 0x15A
        ctx->r4 = ADD32(0, 0X15A);
            goto L_8022D0A8;
    }
    // 0x8022D09C: addiu       $a0, $zero, 0x15A
    ctx->r4 = ADD32(0, 0X15A);
L_8022D0A0:
    // 0x8022D0A0: jal         0x8002A33C
    // 0x8022D0A4: addiu       $a1, $s4, 0x14
    ctx->r5 = ADD32(ctx->r20, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_12;
    // 0x8022D0A4: addiu       $a1, $s4, 0x14
    ctx->r5 = ADD32(ctx->r20, 0X14);
    after_12:
L_8022D0A8:
    // 0x8022D0A8: lbu         $v1, 0x9($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X9);
    // 0x8022D0AC: addiu       $v0, $v1, -0x5
    ctx->r2 = ADD32(ctx->r3, -0X5);
    // 0x8022D0B0: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x8022D0B4: bne         $v0, $zero, L_8022D0D0
    if (ctx->r2 != 0) {
        // 0x8022D0B8: andi        $v1, $v1, 0xFF
        ctx->r3 = ctx->r3 & 0XFF;
            goto L_8022D0D0;
    }
    // 0x8022D0B8: andi        $v1, $v1, 0xFF
    ctx->r3 = ctx->r3 & 0XFF;
    // 0x8022D0BC: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8022D0C0: beq         $v1, $v0, L_8022D0D0
    if (ctx->r3 == ctx->r2) {
        // 0x8022D0C4: nop
    
            goto L_8022D0D0;
    }
    // 0x8022D0C4: nop

    // 0x8022D0C8: jal         0x8022ED6C
    // 0x8022D0CC: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_8022ED6C_ovl31(rdram, ctx);
        goto after_13;
    // 0x8022D0CC: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_13:
L_8022D0D0:
    // 0x8022D0D0: lbu         $v1, 0x3($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X3);
    // 0x8022D0D4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022D0D8: bnel        $v1, $v0, L_8022D160
    if (ctx->r3 != ctx->r2) {
        // 0x8022D0DC: addu        $a0, $s5, $zero
        ctx->r4 = ADD32(ctx->r21, 0);
            goto L_8022D160;
    }
    goto skip_0;
    // 0x8022D0DC: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    skip_0:
    // 0x8022D0E0: lh          $v0, 0x15E($s4)
    ctx->r2 = MEM_H(ctx->r20, 0X15E);
    // 0x8022D0E4: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x8022D0E8: beq         $v0, $zero, L_8022D108
    if (ctx->r2 == 0) {
        // 0x8022D0EC: nop
    
            goto L_8022D108;
    }
    // 0x8022D0EC: nop

    // 0x8022D0F0: lb          $v0, 0x2($s3)
    ctx->r2 = MEM_B(ctx->r19, 0X2);
    // 0x8022D0F4: bne         $v0, $zero, L_8022D108
    if (ctx->r2 != 0) {
        // 0x8022D0F8: nop
    
            goto L_8022D108;
    }
    // 0x8022D0F8: nop

    // 0x8022D0FC: lbu         $v0, 0x0($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X0);
    // 0x8022D100: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8022D104: sb          $v0, 0x0($s4)
    MEM_B(0X0, ctx->r20) = ctx->r2;
L_8022D108:
    // 0x8022D108: lbu         $v0, 0x0($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X0);
    // 0x8022D10C: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022D110: bne         $v0, $zero, L_8022D160
    if (ctx->r2 != 0) {
        // 0x8022D114: addu        $a0, $s5, $zero
        ctx->r4 = ADD32(ctx->r21, 0);
            goto L_8022D160;
    }
    // 0x8022D114: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x8022D118: addiu       $a1, $s4, 0x180
    ctx->r5 = ADD32(ctx->r20, 0X180);
    // 0x8022D11C: jal         0x8009A3B4
    // 0x8022D120: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_14;
    // 0x8022D120: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_14:
    // 0x8022D124: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x8022D128: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x8022D12C: lbu         $v1, 0x1($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X1);
    // 0x8022D130: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022D134: addiu       $v0, $s5, 0x8
    ctx->r2 = ADD32(ctx->r21, 0X8);
    // 0x8022D138: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022D13C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x8022D140: lb          $v1, 0x73($s4)
    ctx->r3 = MEM_B(ctx->r20, 0X73);
    // 0x8022D144: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8022D148: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8022D14C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8022D150: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022D154: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8022D158: j           L_8022D1A0
    // 0x8022D15C: lui         $v0, 0x408
    ctx->r2 = S32(0X408 << 16);
        goto L_8022D1A0;
    // 0x8022D15C: lui         $v0, 0x408
    ctx->r2 = S32(0X408 << 16);
L_8022D160:
    // 0x8022D160: addiu       $a1, $s4, 0x180
    ctx->r5 = ADD32(ctx->r20, 0X180);
    // 0x8022D164: jal         0x8009A3B4
    // 0x8022D168: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_15;
    // 0x8022D168: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_15:
    // 0x8022D16C: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x8022D170: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x8022D174: lbu         $v1, 0x1($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X1);
    // 0x8022D178: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022D17C: addiu       $v0, $s5, 0x8
    ctx->r2 = ADD32(ctx->r21, 0X8);
    // 0x8022D180: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022D184: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x8022D188: lb          $v1, 0x73($s4)
    ctx->r3 = MEM_B(ctx->r20, 0X73);
    // 0x8022D18C: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8022D190: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8022D194: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8022D198: lui         $v0, 0x408
    ctx->r2 = S32(0X408 << 16);
    // 0x8022D19C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
L_8022D1A0:
    // 0x8022D1A0: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8022D1A4: jal         0x80051E18
    // 0x8022D1A8: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_16;
    // 0x8022D1A8: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_16:
    // 0x8022D1AC: lbu         $v0, 0x6($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X6);
    // 0x8022D1B0: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022D1B4: beq         $v0, $zero, L_8022D2C4
    if (ctx->r2 == 0) {
        // 0x8022D1B8: addiu       $a0, $s4, 0x228
        ctx->r4 = ADD32(ctx->r20, 0X228);
            goto L_8022D2C4;
    }
    // 0x8022D1B8: addiu       $a0, $s4, 0x228
    ctx->r4 = ADD32(ctx->r20, 0X228);
    // 0x8022D1BC: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x8022D1C0: addiu       $s3, $sp, 0x30
    ctx->r19 = ADD32(ctx->r29, 0X30);
    // 0x8022D1C4: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    // 0x8022D1C8: addiu       $v0, $zero, 0x4D0
    ctx->r2 = ADD32(0, 0X4D0);
    // 0x8022D1CC: sh          $v0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r2;
    // 0x8022D1D0: addiu       $v0, $zero, -0x20
    ctx->r2 = ADD32(0, -0X20);
    // 0x8022D1D4: sh          $zero, 0x28($sp)
    MEM_H(0X28, ctx->r29) = 0;
    // 0x8022D1D8: jal         0x800308E8
    // 0x8022D1DC: sh          $v0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r2;
    func_800308E8_BCE8(rdram, ctx);
        goto after_17;
    // 0x8022D1DC: sh          $v0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r2;
    after_17:
    // 0x8022D1E0: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x8022D1E4: lhu         $v0, 0x190($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X190);
    // 0x8022D1E8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022D1EC: sh          $v0, 0x0($s5)
    MEM_H(0X0, ctx->r21) = ctx->r2;
    // 0x8022D1F0: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x8022D1F4: lhu         $v0, 0x192($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X192);
    // 0x8022D1F8: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x8022D1FC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022D200: sh          $v0, 0x2($s5)
    MEM_H(0X2, ctx->r21) = ctx->r2;
    // 0x8022D204: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x8022D208: lhu         $v0, 0x194($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X194);
    // 0x8022D20C: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x8022D210: addiu       $s2, $s5, 0x18
    ctx->r18 = ADD32(ctx->r21, 0X18);
    // 0x8022D214: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022D218: sh          $v0, 0x4($s5)
    MEM_H(0X4, ctx->r21) = ctx->r2;
    // 0x8022D21C: lbu         $v0, 0x1($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X1);
    // 0x8022D220: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022D224: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8022D228: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    // 0x8022D22C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022D230: lhu         $v0, 0x4($s6)
    ctx->r2 = MEM_HU(ctx->r22, 0X4);
    // 0x8022D234: addiu       $s1, $zero, 0x80
    ctx->r17 = ADD32(0, 0X80);
    // 0x8022D238: lui         $s0, 0x508
    ctx->r16 = S32(0X508 << 16);
    // 0x8022D23C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8022D240: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x8022D244: or          $v0, $v0, $s0
    ctx->r2 = ctx->r2 | ctx->r16;
    // 0x8022D248: jal         0x80051E18
    // 0x8022D24C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80051E18_2D218(rdram, ctx);
        goto after_18;
    // 0x8022D24C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_18:
    // 0x8022D250: addiu       $a0, $s4, 0x268
    ctx->r4 = ADD32(ctx->r20, 0X268);
    // 0x8022D254: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x8022D258: jal         0x800308E8
    // 0x8022D25C: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    func_800308E8_BCE8(rdram, ctx);
        goto after_19;
    // 0x8022D25C: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    after_19:
    // 0x8022D260: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x8022D264: lhu         $v0, 0x1A0($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X1A0);
    // 0x8022D268: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022D26C: sh          $v0, 0x0($s5)
    MEM_H(0X0, ctx->r21) = ctx->r2;
    // 0x8022D270: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x8022D274: lhu         $v0, 0x1A2($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X1A2);
    // 0x8022D278: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022D27C: sh          $v0, 0x2($s5)
    MEM_H(0X2, ctx->r21) = ctx->r2;
    // 0x8022D280: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x8022D284: lhu         $v0, 0x1A4($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X1A4);
    // 0x8022D288: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022D28C: sh          $v0, 0x4($s5)
    MEM_H(0X4, ctx->r21) = ctx->r2;
    // 0x8022D290: lbu         $v0, 0x1($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X1);
    // 0x8022D294: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x8022D298: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x8022D29C: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    // 0x8022D2A0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022D2A4: lhu         $v0, 0x4($s6)
    ctx->r2 = MEM_HU(ctx->r22, 0X4);
    // 0x8022D2A8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022D2AC: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8022D2B0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8022D2B4: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x8022D2B8: or          $v0, $v0, $s0
    ctx->r2 = ctx->r2 | ctx->r16;
    // 0x8022D2BC: jal         0x80051E18
    // 0x8022D2C0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80051E18_2D218(rdram, ctx);
        goto after_20;
    // 0x8022D2C0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_20:
L_8022D2C4:
    // 0x8022D2C4: lbu         $v1, 0x3($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X3);
    // 0x8022D2C8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022D2CC: beq         $v1, $v0, L_8022D2F4
    if (ctx->r3 == ctx->r2) {
        // 0x8022D2D0: nop
    
            goto L_8022D2F4;
    }
    // 0x8022D2D0: nop

    // 0x8022D2D4: lbu         $v0, 0x0($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X0);
    // 0x8022D2D8: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022D2DC: beq         $v0, $zero, L_8022D2F4
    if (ctx->r2 == 0) {
        // 0x8022D2E0: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_8022D2F4;
    }
    // 0x8022D2E0: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x8022D2E4: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    // 0x8022D2E8: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8022D2EC: jal         0x8003B564
    // 0x8022D2F0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_21;
    // 0x8022D2F0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_21:
L_8022D2F4:
    // 0x8022D2F4: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x8022D2F8: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x8022D2FC: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x8022D300: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x8022D304: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x8022D308: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x8022D30C: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x8022D310: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x8022D314: jr          $ra
    // 0x8022D318: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    TRACE_RETURN()
    return;
    // 0x8022D318: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_8022D754_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D754: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022D758: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022D75C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D760: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022D764: lh          $a0, 0x56($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X56);
    // 0x8022D768: lh          $v0, 0x380($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X380);
    // 0x8022D76C: bne         $a0, $v0, L_8022D7B4
    if (ctx->r4 != ctx->r2) {
        // 0x8022D770: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_8022D7B4;
    }
    // 0x8022D770: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x8022D774: lbu         $v0, 0xCA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XCA);
    // 0x8022D778: addiu       $v1, $zero, 0x50
    ctx->r3 = ADD32(0, 0X50);
    // 0x8022D77C: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    // 0x8022D780: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022D784: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D788: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022D78C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022D790: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022D794: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    // 0x8022D798: sb          $zero, 0x384($s0)
    MEM_B(0X384, ctx->r16) = 0;
    // 0x8022D79C: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x8022D7A0: andi        $v0, $v0, 0xFE
    ctx->r2 = ctx->r2 & 0XFE;
    // 0x8022D7A4: jal         0x80050294
    // 0x8022D7A8: sb          $v0, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8022D7A8: sb          $v0, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022D7AC: j           L_8022D7C8
    // 0x8022D7B0: nop

        goto L_8022D7C8;
    // 0x8022D7B0: nop

L_8022D7B4:
    // 0x8022D7B4: slt         $v0, $v0, $a0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8022D7B8: bne         $v0, $zero, L_8022D7C4
    if (ctx->r2 != 0) {
        // 0x8022D7BC: addiu       $v0, $v1, -0x80
        ctx->r2 = ADD32(ctx->r3, -0X80);
            goto L_8022D7C4;
    }
    // 0x8022D7BC: addiu       $v0, $v1, -0x80
    ctx->r2 = ADD32(ctx->r3, -0X80);
    // 0x8022D7C0: addiu       $v0, $v1, 0x80
    ctx->r2 = ADD32(ctx->r3, 0X80);
L_8022D7C4:
    // 0x8022D7C4: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8022D7C8:
    // 0x8022D7C8: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022D7CC: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022D7D0: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022D7D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022D7D8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022D7DC: jr          $ra
    // 0x8022D7E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022D7E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023537C_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023537C: lw          $v1, 0x44($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X44);
    // 0x80235380: lw          $a1, 0x2C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X2C);
    // 0x80235384: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80235388: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023538C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80235390: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80235394: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80235398: sw          $a1, 0x5088($at)
    MEM_W(0X5088, ctx->r1) = ctx->r5;
    // 0x8023539C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802353A0: jr          $ra
    // 0x802353A4: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x802353A4: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_80235D74_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235D74: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80235D78: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80235D7C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80235D80: lh          $v0, 0x24($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X24);
    // 0x80235D84: bgtz        $v0, L_80235D9C
    if (SIGNED(ctx->r2) > 0) {
        // 0x80235D88: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_80235D9C;
    }
    // 0x80235D88: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80235D8C: jal         0x8004F5C4
    // 0x80235D90: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x80235D90: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    after_0:
    // 0x80235D94: j           L_80235DB4
    // 0x80235D98: nop

        goto L_80235DB4;
    // 0x80235D98: nop

L_80235D9C:
    // 0x80235D9C: lhu         $v0, 0x26($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X26);
    // 0x80235DA0: lw          $v1, 0x18($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X18);
    // 0x80235DA4: addiu       $a0, $a0, -0x8
    ctx->r4 = ADD32(ctx->r4, -0X8);
    // 0x80235DA8: sh          $a0, 0x24($a1)
    MEM_H(0X24, ctx->r5) = ctx->r4;
    // 0x80235DAC: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80235DB0: sw          $v1, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r3;
L_80235DB4:
    // 0x80235DB4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80235DB8: jr          $ra
    // 0x80235DBC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80235DBC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80230378_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230378: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023037C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80230380: lbu         $v0, 0xB($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XB);
    // 0x80230384: bne         $v0, $zero, L_802303F8
    if (ctx->r2 != 0) {
        // 0x80230388: nop
    
            goto L_802303F8;
    }
    // 0x80230388: nop

    // 0x8023038C: lhu         $v0, 0x3B2($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X3B2);
    // 0x80230390: sb          $zero, 0x1DC($a0)
    MEM_B(0X1DC, ctx->r4) = 0;
    // 0x80230394: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80230398: bne         $v0, $zero, L_802303B8
    if (ctx->r2 != 0) {
        // 0x8023039C: sb          $zero, 0xE($a0)
        MEM_B(0XE, ctx->r4) = 0;
            goto L_802303B8;
    }
    // 0x8023039C: sb          $zero, 0xE($a0)
    MEM_B(0XE, ctx->r4) = 0;
    // 0x802303A0: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x802303A4: sb          $v1, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r3;
    // 0x802303A8: lbu         $a1, 0xAC($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0XAC);
    // 0x802303AC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802303B0: j           L_802303EC
    // 0x802303B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802303EC;
    // 0x802303B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802303B8:
    // 0x802303B8: sltiu       $v0, $v0, 0x5
    ctx->r2 = ctx->r2 < 0X5 ? 1 : 0;
    // 0x802303BC: beq         $v0, $zero, L_802303D8
    if (ctx->r2 == 0) {
        // 0x802303C0: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_802303D8;
    }
    // 0x802303C0: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x802303C4: sb          $v1, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r3;
    // 0x802303C8: lbu         $a1, 0xAC($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0XAC);
    // 0x802303CC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802303D0: j           L_802303EC
    // 0x802303D4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_802303EC;
    // 0x802303D4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_802303D8:
    // 0x802303D8: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x802303DC: sb          $v1, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r3;
    // 0x802303E0: lbu         $a1, 0xAC($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0XAC);
    // 0x802303E4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802303E8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_802303EC:
    // 0x802303EC: sb          $v0, 0xB($a0)
    MEM_B(0XB, ctx->r4) = ctx->r2;
    // 0x802303F0: jal         0x80050294
    // 0x802303F4: sb          $v1, 0xAD($a0)
    MEM_B(0XAD, ctx->r4) = ctx->r3;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x802303F4: sb          $v1, 0xAD($a0)
    MEM_B(0XAD, ctx->r4) = ctx->r3;
    after_0:
L_802303F8:
    // 0x802303F8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802303FC: jr          $ra
    // 0x80230400: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80230400: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227A70_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227A70: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80227A74: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80227A78: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80227A7C: addiu       $a0, $s1, 0x2C
    ctx->r4 = ADD32(ctx->r17, 0X2C);
    // 0x80227A80: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80227A84: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x80227A88: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x80227A8C: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x80227A90: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x80227A94: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80227A98: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80227A9C: lbu         $v0, 0xAC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XAC);
    // 0x80227AA0: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x80227AA4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80227AA8: jal         0x8009A3B4
    // 0x80227AAC: sb          $v0, 0xAD($s1)
    MEM_B(0XAD, ctx->r17) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80227AAC: sb          $v0, 0xAD($s1)
    MEM_B(0XAD, ctx->r17) = ctx->r2;
    after_0:
    // 0x80227AB0: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
    // 0x80227AB4: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x80227AB8: jal         0x8009A3B4
    // 0x80227ABC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80227ABC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80227AC0: addiu       $a0, $s1, 0x5C
    ctx->r4 = ADD32(ctx->r17, 0X5C);
    // 0x80227AC4: addiu       $a1, $s1, 0x54
    ctx->r5 = ADD32(ctx->r17, 0X54);
    // 0x80227AC8: jal         0x8009A3B4
    // 0x80227ACC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80227ACC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80227AD0: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80227AD4: jal         0x800A3450
    // 0x80227AD8: sh          $v0, 0x15E($s1)
    MEM_H(0X15E, ctx->r17) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80227AD8: sh          $v0, 0x15E($s1)
    MEM_H(0X15E, ctx->r17) = ctx->r2;
    after_3:
    // 0x80227ADC: lbu         $v1, 0x8($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X8);
    // 0x80227AE0: sh          $v0, 0x32A($s1)
    MEM_H(0X32A, ctx->r17) = ctx->r2;
    // 0x80227AE4: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80227AE8: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80227AEC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80227AF0: lw          $v0, -0x7E50($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7E50);
    // 0x80227AF4: jalr        $v0
    // 0x80227AF8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x80227AF8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x80227AFC: lbu         $v0, 0xAD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XAD);
    // 0x80227B00: lbu         $a1, 0xAC($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0XAC);
    // 0x80227B04: beq         $v0, $a1, L_80227B20
    if (ctx->r2 == ctx->r5) {
        // 0x80227B08: addiu       $s2, $s1, 0x328
        ctx->r18 = ADD32(ctx->r17, 0X328);
            goto L_80227B20;
    }
    // 0x80227B08: addiu       $s2, $s1, 0x328
    ctx->r18 = ADD32(ctx->r17, 0X328);
    // 0x80227B0C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80227B10: jal         0x800502EC
    // 0x80227B14: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800502EC_2B6EC(rdram, ctx);
        goto after_5;
    // 0x80227B14: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x80227B18: j           L_80227B28
    // 0x80227B1C: nop

        goto L_80227B28;
    // 0x80227B1C: nop

L_80227B20:
    // 0x80227B20: jal         0x800504EC
    // 0x80227B24: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_800504EC_2B8EC(rdram, ctx);
        goto after_6;
    // 0x80227B24: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
L_80227B28:
    // 0x80227B28: lhu         $v0, 0x3C($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X3C);
    // 0x80227B2C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80227B30: sh          $v0, -0x3D7E($at)
    MEM_H(-0X3D7E, ctx->r1) = ctx->r2;
    // 0x80227B34: jal         0x80051248
    // 0x80227B38: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80051248_2C648(rdram, ctx);
        goto after_7;
    // 0x80227B38: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_7:
    // 0x80227B3C: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80227B40: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80227B44: beq         $v0, $zero, L_80227B5C
    if (ctx->r2 == 0) {
        // 0x80227B48: addiu       $a1, $zero, 0x30
        ctx->r5 = ADD32(0, 0X30);
            goto L_80227B5C;
    }
    // 0x80227B48: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x80227B4C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80227B50: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x80227B54: jal         0x8003B564
    // 0x80227B58: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_8;
    // 0x80227B58: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_8:
L_80227B5C:
    // 0x80227B5C: sw          $zero, 0x4C($s2)
    MEM_W(0X4C, ctx->r18) = 0;
    // 0x80227B60: lui         $s5, 0x8024
    ctx->r21 = S32(0X8024 << 16);
    // 0x80227B64: addiu       $s5, $s5, -0x6FB0
    ctx->r21 = ADD32(ctx->r21, -0X6FB0);
    // 0x80227B68: addiu       $s0, $s1, 0x14
    ctx->r16 = ADD32(ctx->r17, 0X14);
    // 0x80227B6C: lui         $s4, 0x8024
    ctx->r20 = S32(0X8024 << 16);
    // 0x80227B70: addiu       $s4, $s4, -0x6FA8
    ctx->r20 = ADD32(ctx->r20, -0X6FA8);
    // 0x80227B74: addiu       $s3, $s1, 0x1C
    ctx->r19 = ADD32(ctx->r17, 0X1C);
    // 0x80227B78: lui         $s6, 0x8024
    ctx->r22 = S32(0X8024 << 16);
    // 0x80227B7C: addiu       $s6, $s6, -0x7DF8
    ctx->r22 = ADD32(ctx->r22, -0X7DF8);
    // 0x80227B80: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
L_80227B84:
    // 0x80227B84: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80227B88: jal         0x8009A3B4
    // 0x80227B8C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_9;
    // 0x80227B8C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_9:
    // 0x80227B90: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x80227B94: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x80227B98: jal         0x8009A3B4
    // 0x80227B9C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_10;
    // 0x80227B9C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_10:
    // 0x80227BA0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227BA4: lhu         $v0, 0x56($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X56);
    // 0x80227BA8: addiu       $a1, $s1, 0x190
    ctx->r5 = ADD32(ctx->r17, 0X190);
    // 0x80227BAC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80227BB0: jal         0x8009A3B4
    // 0x80227BB4: sh          $v0, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_11;
    // 0x80227BB4: sh          $v0, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r2;
    after_11:
    // 0x80227BB8: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x80227BBC: lh          $v1, 0x16($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X16);
    // 0x80227BC0: lh          $a0, 0x18($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X18);
    // 0x80227BC4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227BC8: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80227BCC: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80227BD0: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x80227BD4: sw          $v1, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r3;
    // 0x80227BD8: sw          $a0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r4;
    // 0x80227BDC: lhu         $v0, 0x3C($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X3C);
    // 0x80227BE0: lhu         $v1, 0x56($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X56);
    // 0x80227BE4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80227BE8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80227BEC: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
    // 0x80227BF0: lw          $v0, 0x4C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4C);
    // 0x80227BF4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80227BF8: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80227BFC: addu        $v0, $v0, $s6
    ctx->r2 = ADD32(ctx->r2, ctx->r22);
    // 0x80227C00: lh          $a3, 0x0($v0)
    ctx->r7 = MEM_H(ctx->r2, 0X0);
    // 0x80227C04: addiu       $a2, $zero, -0x200
    ctx->r6 = ADD32(0, -0X200);
    // 0x80227C08: jal         0x8004DA90
    // 0x80227C0C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_12;
    // 0x80227C0C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_12:
    // 0x80227C10: lw          $v0, 0x4C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4C);
    // 0x80227C14: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227C18: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x80227C1C: lw          $v1, 0x44($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X44);
    // 0x80227C20: lhu         $v0, 0x14($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X14);
    // 0x80227C24: sh          $v0, 0x1C($v1)
    MEM_H(0X1C, ctx->r3) = ctx->r2;
    // 0x80227C28: lw          $v0, 0x4C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4C);
    // 0x80227C2C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227C30: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x80227C34: lw          $v1, 0x44($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X44);
    // 0x80227C38: lhu         $v0, 0x16($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X16);
    // 0x80227C3C: sh          $v0, 0x1E($v1)
    MEM_H(0X1E, ctx->r3) = ctx->r2;
    // 0x80227C40: lw          $v0, 0x4C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4C);
    // 0x80227C44: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227C48: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227C4C: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x80227C50: lw          $v1, 0x44($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X44);
    // 0x80227C54: lhu         $v0, 0x18($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X18);
    // 0x80227C58: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x80227C5C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80227C60: jal         0x8009A3B4
    // 0x80227C64: sh          $v0, 0x20($v1)
    MEM_H(0X20, ctx->r3) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_13;
    // 0x80227C64: sh          $v0, 0x20($v1)
    MEM_H(0X20, ctx->r3) = ctx->r2;
    after_13:
    // 0x80227C68: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80227C6C: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x80227C70: jal         0x8009A3B4
    // 0x80227C74: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_14;
    // 0x80227C74: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_14:
    // 0x80227C78: lhu         $v0, 0x64($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X64);
    // 0x80227C7C: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
    // 0x80227C80: lw          $v0, 0x4C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4C);
    // 0x80227C84: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227C88: sw          $v0, 0x4C($s2)
    MEM_W(0X4C, ctx->r18) = ctx->r2;
    // 0x80227C8C: slti        $v0, $v0, 0x2
    ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x80227C90: bne         $v0, $zero, L_80227B84
    if (ctx->r2 != 0) {
        // 0x80227C94: addu        $a0, $s5, $zero
        ctx->r4 = ADD32(ctx->r21, 0);
            goto L_80227B84;
    }
    // 0x80227C94: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x80227C98: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80227C9C: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80227CA0: beql        $v0, $zero, L_80227D18
    if (ctx->r2 == 0) {
        // 0x80227CA4: sw          $zero, 0x14($s2)
        MEM_W(0X14, ctx->r18) = 0;
            goto L_80227D18;
    }
    goto skip_0;
    // 0x80227CA4: sw          $zero, 0x14($s2)
    MEM_W(0X14, ctx->r18) = 0;
    skip_0:
    // 0x80227CA8: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x80227CAC: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x80227CB0: beq         $v0, $zero, L_80227D14
    if (ctx->r2 == 0) {
        // 0x80227CB4: addiu       $s0, $s2, 0xC
        ctx->r16 = ADD32(ctx->r18, 0XC);
            goto L_80227D14;
    }
    // 0x80227CB4: addiu       $s0, $s2, 0xC
    ctx->r16 = ADD32(ctx->r18, 0XC);
    // 0x80227CB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227CBC: addiu       $a1, $s1, 0x180
    ctx->r5 = ADD32(ctx->r17, 0X180);
    // 0x80227CC0: jal         0x8009A3B4
    // 0x80227CC4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_15;
    // 0x80227CC4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_15:
    // 0x80227CC8: lhu         $v0, 0xE($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XE);
    // 0x80227CCC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227CD0: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x80227CD4: addiu       $v0, $v0, 0x1E
    ctx->r2 = ADD32(ctx->r2, 0X1E);
    // 0x80227CD8: sh          $v0, 0xE($s2)
    MEM_H(0XE, ctx->r18) = ctx->r2;
    // 0x80227CDC: lbu         $v1, 0x1($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X1);
    // 0x80227CE0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80227CE4: addiu       $v0, $s2, 0x14
    ctx->r2 = ADD32(ctx->r18, 0X14);
    // 0x80227CE8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80227CEC: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x80227CF0: lhu         $v1, 0x8($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X8);
    // 0x80227CF4: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x80227CF8: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x80227CFC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80227D00: lui         $v0, 0x488
    ctx->r2 = S32(0X488 << 16);
    // 0x80227D04: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80227D08: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80227D0C: jal         0x80051E18
    // 0x80227D10: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_16;
    // 0x80227D10: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_16:
L_80227D14:
    // 0x80227D14: sw          $zero, 0x14($s2)
    MEM_W(0X14, ctx->r18) = 0;
L_80227D18:
    // 0x80227D18: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80227D1C: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x80227D20: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x80227D24: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x80227D28: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x80227D2C: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80227D30: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80227D34: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80227D38: jr          $ra
    // 0x80227D3C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x80227D3C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_802363D0_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802363D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802363D4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802363D8: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x802363DC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802363E0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802363E4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802363E8: lw          $v0, -0x72C8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X72C8);
    // 0x802363EC: jalr        $v0
    // 0x802363F0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802363F0: nop

    after_0:
    // 0x802363F4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802363F8: jr          $ra
    // 0x802363FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802363FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80232104_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232104: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80232108: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8023210C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232110: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80232114: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80232118: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8023211C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80232120: lh          $v1, 0x4A06($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X4A06);
    // 0x80232124: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    // 0x80232128: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x8023212C: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x80232130: addiu       $a3, $a3, 0x49CC
    ctx->r7 = ADD32(ctx->r7, 0X49CC);
    // 0x80232134: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80232138: jal         0x8004FAEC
    // 0x8023213C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_8004FAEC_2AEEC(rdram, ctx);
        goto after_0;
    // 0x8023213C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_0:
    // 0x80232140: beq         $v0, $zero, L_80232154
    if (ctx->r2 == 0) {
        // 0x80232144: nop
    
            goto L_80232154;
    }
    // 0x80232144: nop

    // 0x80232148: lbu         $v0, 0x1DE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1DE);
    // 0x8023214C: bne         $v0, $zero, L_802321D0
    if (ctx->r2 != 0) {
        // 0x80232150: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_802321D0;
    }
    // 0x80232150: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_80232154:
    // 0x80232154: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80232158: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023215C: bne         $v1, $v0, L_802321A0
    if (ctx->r3 != ctx->r2) {
        // 0x80232160: nop
    
            goto L_802321A0;
    }
    // 0x80232160: nop

    // 0x80232164: lbu         $v0, 0x1DE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1DE);
    // 0x80232168: bne         $v0, $zero, L_802321A0
    if (ctx->r2 != 0) {
        // 0x8023216C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802321A0;
    }
    // 0x8023216C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232170: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x80232174: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80232178: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8023217C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80232180: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80232184: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80232188: jal         0x80050294
    // 0x8023218C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x8023218C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_1:
    // 0x80232190: lbu         $v0, 0xCA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XCA);
    // 0x80232194: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x80232198: j           L_8023224C
    // 0x8023219C: sb          $v0, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r2;
        goto L_8023224C;
    // 0x8023219C: sb          $v0, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r2;
L_802321A0:
    // 0x802321A0: lbu         $v0, 0xCA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XCA);
    // 0x802321A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802321A8: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x802321AC: sb          $v1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r3;
    // 0x802321B0: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
    // 0x802321B4: sb          $v1, 0x385($a0)
    MEM_B(0X385, ctx->r4) = ctx->r3;
    // 0x802321B8: sb          $zero, 0xCB($a0)
    MEM_B(0XCB, ctx->r4) = 0;
    // 0x802321BC: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x802321C0: jal         0x8023225C
    // 0x802321C4: sb          $v0, 0xCA($a0)
    MEM_B(0XCA, ctx->r4) = ctx->r2;
    func_8023225C_ovl31(rdram, ctx);
        goto after_2;
    // 0x802321C4: sb          $v0, 0xCA($a0)
    MEM_B(0XCA, ctx->r4) = ctx->r2;
    after_2:
    // 0x802321C8: j           L_8023224C
    // 0x802321CC: nop

        goto L_8023224C;
    // 0x802321CC: nop

L_802321D0:
    // 0x802321D0: lw          $a0, 0x80($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X80);
    // 0x802321D4: lui         $v1, 0x2
    ctx->r3 = S32(0X2 << 16);
    // 0x802321D8: ori         $v1, $v1, 0xBF1F
    ctx->r3 = ctx->r3 | 0XBF1F;
    // 0x802321DC: sltu        $v1, $v1, $a0
    ctx->r3 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x802321E0: bne         $v1, $zero, L_80232244
    if (ctx->r3 != 0) {
        // 0x802321E4: sb          $v0, 0x1DE($s0)
        MEM_B(0X1DE, ctx->r16) = ctx->r2;
            goto L_80232244;
    }
    // 0x802321E4: sb          $v0, 0x1DE($s0)
    MEM_B(0X1DE, ctx->r16) = ctx->r2;
    // 0x802321E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802321EC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802321F0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802321F4: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x802321F8: lbu         $v1, 0xCA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XCA);
    // 0x802321FC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80232200: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80232204: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80232208: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8023220C: jal         0x80050294
    // 0x80232210: sb          $v1, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r3;
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x80232210: sb          $v1, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r3;
    after_3:
    // 0x80232214: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80232218: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8023221C: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x80232220: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80232224: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80232228: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8023222C: lbu         $v0, 0xC($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XC);
    // 0x80232230: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232234: jal         0x802323D4
    // 0x80232238: sh          $v0, 0xC8($a0)
    MEM_H(0XC8, ctx->r4) = ctx->r2;
    func_802323D4_ovl31(rdram, ctx);
        goto after_4;
    // 0x80232238: sh          $v0, 0xC8($a0)
    MEM_H(0XC8, ctx->r4) = ctx->r2;
    after_4:
    // 0x8023223C: j           L_8023224C
    // 0x80232240: nop

        goto L_8023224C;
    // 0x80232240: nop

L_80232244:
    // 0x80232244: jal         0x80231DF8
    // 0x80232248: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80231DF8_ovl31(rdram, ctx);
        goto after_5;
    // 0x80232248: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
L_8023224C:
    // 0x8023224C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80232250: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80232254: jr          $ra
    // 0x80232258: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80232258: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022534C_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022534C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80225350: lb          $v1, -0x3BC6($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC6);
    // 0x80225354: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80225358: lb          $v0, -0x3BC7($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC7);
    // 0x8022535C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225360: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225364: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80225368: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022536C: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80225370: lw          $v1, -0x7FD0($at)
    ctx->r3 = MEM_W(ctx->r1, -0X7FD0);
    // 0x80225374: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80225378: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022537C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80225380: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80225384: jalr        $v0
    // 0x80225388: addiu       $a0, $a0, -0x35A0
    ctx->r4 = ADD32(ctx->r4, -0X35A0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80225388: addiu       $a0, $a0, -0x35A0
    ctx->r4 = ADD32(ctx->r4, -0X35A0);
    after_0:
    // 0x8022538C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80225390: jr          $ra
    // 0x80225394: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225394: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E674_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E674: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022E678: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022E67C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E680: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8022E684: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x8022E688: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8022E68C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022E690: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022E694: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022E698: bne         $v1, $v0, L_8022E728
    if (ctx->r3 != ctx->r2) {
        // 0x8022E69C: addiu       $s1, $s0, 0xC4
        ctx->r17 = ADD32(ctx->r16, 0XC4);
            goto L_8022E728;
    }
    // 0x8022E69C: addiu       $s1, $s0, 0xC4
    ctx->r17 = ADD32(ctx->r16, 0XC4);
    // 0x8022E6A0: lbu         $v0, 0x64($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X64);
    // 0x8022E6A4: lbu         $v1, 0x65($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X65);
    // 0x8022E6A8: lbu         $a0, 0x66($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X66);
    // 0x8022E6AC: lbu         $a1, 0x66($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X66);
    // 0x8022E6B0: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x8022E6B4: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x8022E6B8: andi        $a0, $a0, 0x1F
    ctx->r4 = ctx->r4 & 0X1F;
    // 0x8022E6BC: sll         $v1, $v1, 5
    ctx->r3 = S32(ctx->r3 << 5);
    // 0x8022E6C0: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8022E6C4: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    // 0x8022E6C8: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x8022E6CC: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022E6D0: lhu         $a0, 0x15E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X15E);
    // 0x8022E6D4: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8022E6D8: sb          $a1, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r5;
    // 0x8022E6DC: lb          $v1, 0x66($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X66);
    // 0x8022E6E0: addiu       $v0, $zero, -0x8000
    ctx->r2 = ADD32(0, -0X8000);
    // 0x8022E6E4: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x8022E6E8: slti        $v1, $v1, 0x10
    ctx->r3 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
    // 0x8022E6EC: bne         $v1, $zero, L_8022E728
    if (ctx->r3 != 0) {
        // 0x8022E6F0: sh          $v0, 0x15E($s0)
        MEM_H(0X15E, ctx->r16) = ctx->r2;
            goto L_8022E728;
    }
    // 0x8022E6F0: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022E6F4: lb          $v1, 0x64($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X64);
    // 0x8022E6F8: andi        $v0, $v0, 0x7FFF
    ctx->r2 = ctx->r2 & 0X7FFF;
    // 0x8022E6FC: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022E700: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022E704: sb          $v0, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r2;
    // 0x8022E708: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022E70C: beq         $v1, $v0, L_8022E728
    if (ctx->r3 == ctx->r2) {
        // 0x8022E710: addu        $a0, $v1, $zero
        ctx->r4 = ADD32(ctx->r3, 0);
            goto L_8022E728;
    }
    // 0x8022E710: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x8022E714: lbu         $v0, 0x65($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X65);
    // 0x8022E718: addiu       $v1, $a0, 0x4
    ctx->r3 = ADD32(ctx->r4, 0X4);
    // 0x8022E71C: sb          $v1, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r3;
    // 0x8022E720: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8022E724: sb          $v0, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r2;
L_8022E728:
    // 0x8022E728: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022E72C: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x8022E730: beq         $v0, $zero, L_8022E87C
    if (ctx->r2 == 0) {
        // 0x8022E734: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8022E87C;
    }
    // 0x8022E734: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022E738: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022E73C: addu        $at, $at, $v0
    gpr jr_addend_8022E744 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022E740: lw          $v0, -0x7140($at)
    ctx->r2 = ADD32(ctx->r1, -0X7140);
    // 0x8022E744: jr          $v0
    // 0x8022E748: nop

    switch (jr_addend_8022E744 >> 2) {
        case 0: goto L_8022E74C; break;
        case 1: goto L_8022E76C; break;
        case 2: goto L_8022E7A4; break;
        case 3: goto L_8022E7D4; break;
        case 4: goto L_8022E7D4; break;
        default: switch_error(__func__, 0x8022E744, 0x80238EC0);
    }
    // 0x8022E748: nop

L_8022E74C:
    // 0x8022E74C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022E750: lh          $a3, 0x44($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X44);
    // 0x8022E754: lh          $v0, 0x46($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X46);
    // 0x8022E758: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022E75C: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022E760: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8022E764: j           L_8022E784
    // 0x8022E768: addiu       $a2, $a2, 0x800
    ctx->r6 = ADD32(ctx->r6, 0X800);
        goto L_8022E784;
    // 0x8022E768: addiu       $a2, $a2, 0x800
    ctx->r6 = ADD32(ctx->r6, 0X800);
L_8022E76C:
    // 0x8022E76C: lhu         $a2, 0x56($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X56);
    // 0x8022E770: lh          $a3, 0x44($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X44);
    // 0x8022E774: lh          $v0, 0x46($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X46);
    // 0x8022E778: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022E77C: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022E780: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
L_8022E784:
    // 0x8022E784: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    // 0x8022E788: jal         0x8004DBA0
    // 0x8022E78C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_0;
    // 0x8022E78C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x8022E790: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x8022E794: lhu         $v1, 0x4E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X4E);
    // 0x8022E798: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022E79C: j           L_8022E87C
    // 0x8022E7A0: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
        goto L_8022E87C;
    // 0x8022E7A0: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
L_8022E7A4:
    // 0x8022E7A4: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x8022E7A8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022E7AC: bne         $v1, $v0, L_8022E87C
    if (ctx->r3 != ctx->r2) {
        // 0x8022E7B0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022E87C;
    }
    // 0x8022E7B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E7B4: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x8022E7B8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022E7BC: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8022E7C0: jal         0x80050294
    // 0x8022E7C4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x8022E7C4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022E7C8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022E7CC: j           L_8022E87C
    // 0x8022E7D0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8022E87C;
    // 0x8022E7D0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022E7D4:
    // 0x8022E7D4: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x8022E7D8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022E7DC: bne         $v1, $v0, L_8022E848
    if (ctx->r3 != ctx->r2) {
        // 0x8022E7E0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022E848;
    }
    // 0x8022E7E0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022E7E4: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022E7E8: bne         $v1, $v0, L_8022E808
    if (ctx->r3 != ctx->r2) {
        // 0x8022E7EC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022E808;
    }
    // 0x8022E7EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E7F0: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x8022E7F4: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8022E7F8: beq         $v0, $zero, L_8022E808
    if (ctx->r2 == 0) {
        // 0x8022E7FC: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_8022E808;
    }
    // 0x8022E7FC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022E800: j           L_8022E820
    // 0x8022E804: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022E820;
    // 0x8022E804: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022E808:
    // 0x8022E808: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022E80C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022E810: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E814: jal         0x80050294
    // 0x8022E818: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x8022E818: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_2:
    // 0x8022E81C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_8022E820:
    // 0x8022E820: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022E824: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x8022E828: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022E82C: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x8022E830: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    // 0x8022E834: sb          $v0, 0x3D($s2)
    MEM_B(0X3D, ctx->r18) = ctx->r2;
    // 0x8022E838: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8022E83C: sb          $zero, 0x3C($s2)
    MEM_B(0X3C, ctx->r18) = 0;
    // 0x8022E840: sb          $zero, 0x6($s1)
    MEM_B(0X6, ctx->r17) = 0;
    // 0x8022E844: sb          $v0, 0x395($s0)
    MEM_B(0X395, ctx->r16) = ctx->r2;
L_8022E848:
    // 0x8022E848: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022E84C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022E850: bne         $v1, $v0, L_8022E87C
    if (ctx->r3 != ctx->r2) {
        // 0x8022E854: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022E87C;
    }
    // 0x8022E854: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022E858: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022E85C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022E860: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022E864: jal         0x8004F820
    // 0x8022E868: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x8022E868: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    after_3:
    // 0x8022E86C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022E870: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022E874: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022E878: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_8022E87C:
    // 0x8022E87C: jal         0x8005044C
    // 0x8022E880: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_4;
    // 0x8022E880: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8022E884: jal         0x80040F30
    // 0x8022E888: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_5;
    // 0x8022E888: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8022E88C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E890: jal         0x8003E934
    // 0x8022E894: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_6;
    // 0x8022E894: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    after_6:
    // 0x8022E898: lw          $v1, 0x4($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4);
    // 0x8022E89C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022E8A0: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x8022E8A4: andi        $v1, $v1, 0x3000
    ctx->r3 = ctx->r3 & 0X3000;
    // 0x8022E8A8: bne         $v1, $v0, L_8022E904
    if (ctx->r3 != ctx->r2) {
        // 0x8022E8AC: nop
    
            goto L_8022E904;
    }
    // 0x8022E8AC: nop

    // 0x8022E8B0: lh          $v0, 0x16($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X16);
    // 0x8022E8B4: bne         $a0, $v0, L_8022E904
    if (ctx->r4 != ctx->r2) {
        // 0x8022E8B8: nop
    
            goto L_8022E904;
    }
    // 0x8022E8B8: nop

    // 0x8022E8BC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022E8C0: bne         $v0, $zero, L_8022E8DC
    if (ctx->r2 != 0) {
        // 0x8022E8C4: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_8022E8DC;
    }
    // 0x8022E8C4: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x8022E8C8: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8022E8CC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022E8D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E8D4: j           L_8022E8E8
    // 0x8022E8D8: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
        goto L_8022E8E8;
    // 0x8022E8D8: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
L_8022E8DC:
    // 0x8022E8DC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022E8E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E8E4: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
L_8022E8E8:
    // 0x8022E8E8: jal         0x80050294
    // 0x8022E8EC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_7;
    // 0x8022E8EC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_7:
    // 0x8022E8F0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022E8F4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022E8F8: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x8022E8FC: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x8022E900: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
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
RECOMP_FUNC void func_80227A10_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227A10: lbu         $v1, 0x438($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X438);
    // 0x80227A14: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80227A18: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80227A1C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80227A20: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80227A24: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227A28: lhu         $v0, -0x7F48($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X7F48);
    // 0x80227A2C: lbu         $v1, 0x438($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X438);
    // 0x80227A30: sh          $v0, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r2;
    // 0x80227A34: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80227A38: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80227A3C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80227A40: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80227A44: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227A48: lhu         $v0, -0x7F46($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X7F46);
    // 0x80227A4C: sh          $v0, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r2;
    // 0x80227A50: lh          $v0, 0x14($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X14);
    // 0x80227A54: lh          $v1, 0x18($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X18);
    // 0x80227A58: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227A5C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80227A60: sw          $v0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r2;
    // 0x80227A64: jr          $ra
    // 0x80227A68: sw          $v1, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r3;
    TRACE_RETURN()
    return;
    // 0x80227A68: sw          $v1, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r3;
    // 0x80227A6C: nop

;}
RECOMP_FUNC void func_80231C8C_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231C8C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231C90: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80231C94: lbu         $v0, 0x385($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X385);
    // 0x80231C98: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80231C9C: sb          $v0, 0x385($a0)
    MEM_B(0X385, ctx->r4) = ctx->r2;
    // 0x80231CA0: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80231CA4: bne         $v0, $zero, L_80231CDC
    if (ctx->r2 != 0) {
        // 0x80231CA8: addiu       $v0, $zero, 0x80
        ctx->r2 = ADD32(0, 0X80);
            goto L_80231CDC;
    }
    // 0x80231CA8: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80231CAC: lbu         $v1, 0xCA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XCA);
    // 0x80231CB0: sh          $v0, 0x44($a0)
    MEM_H(0X44, ctx->r4) = ctx->r2;
    // 0x80231CB4: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x80231CB8: sb          $v0, 0x385($a0)
    MEM_B(0X385, ctx->r4) = ctx->r2;
    // 0x80231CBC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231CC0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80231CC4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80231CC8: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    // 0x80231CCC: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x80231CD0: andi        $v1, $v1, 0xFE
    ctx->r3 = ctx->r3 & 0XFE;
    // 0x80231CD4: jal         0x80050294
    // 0x80231CD8: sb          $v1, 0xCA($a0)
    MEM_B(0XCA, ctx->r4) = ctx->r3;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80231CD8: sb          $v1, 0xCA($a0)
    MEM_B(0XCA, ctx->r4) = ctx->r3;
    after_0:
L_80231CDC:
    // 0x80231CDC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80231CE0: jr          $ra
    // 0x80231CE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80231CE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80233400_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233400: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80233404: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80233408: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023340C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80233410: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80233414: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80233418: jal         0x8009A3B4
    // 0x8023341C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8023341C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80233420: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80233424: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80233428: jal         0x8009A3B4
    // 0x8023342C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8023342C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80233430: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80233434: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80233438: jal         0x8009A3B4
    // 0x8023343C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8023343C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80233440: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80233444: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80233448: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023344C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80233450: lw          $v0, -0x7998($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7998);
    // 0x80233454: jalr        $v0
    // 0x80233458: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x80233458: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8023345C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80233460: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80233464: jr          $ra
    // 0x80233468: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80233468: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80235CA0_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235CA0: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80235CA4: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x80235CA8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80235CAC: beq         $v1, $a0, L_80235D34
    if (ctx->r3 == ctx->r4) {
        // 0x80235CB0: addiu       $sp, $sp, -0x8
        ctx->r29 = ADD32(ctx->r29, -0X8);
            goto L_80235D34;
    }
    // 0x80235CB0: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80235CB4: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80235CB8: beq         $v0, $zero, L_80235D6C
    if (ctx->r2 == 0) {
        // 0x80235CBC: nop
    
            goto L_80235D6C;
    }
    // 0x80235CBC: nop

    // 0x80235CC0: bne         $v1, $zero, L_80235D6C
    if (ctx->r3 != 0) {
        // 0x80235CC4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80235D6C;
    }
    // 0x80235CC4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80235CC8: lb          $v1, 0xC($a1)
    ctx->r3 = MEM_B(ctx->r5, 0XC);
    // 0x80235CCC: beq         $v1, $a0, L_80235D10
    if (ctx->r3 == ctx->r4) {
        // 0x80235CD0: sb          $v0, 0x9($a1)
        MEM_B(0X9, ctx->r5) = ctx->r2;
            goto L_80235D10;
    }
    // 0x80235CD0: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x80235CD4: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80235CD8: beql        $v0, $zero, L_80235CF0
    if (ctx->r2 == 0) {
        // 0x80235CDC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80235CF0;
    }
    goto skip_0;
    // 0x80235CDC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80235CE0: beq         $v1, $zero, L_80235D00
    if (ctx->r3 == 0) {
        // 0x80235CE4: lui         $v0, 0x2E00
        ctx->r2 = S32(0X2E00 << 16);
            goto L_80235D00;
    }
    // 0x80235CE4: lui         $v0, 0x2E00
    ctx->r2 = S32(0X2E00 << 16);
    // 0x80235CE8: j           L_80235D34
    // 0x80235CEC: nop

        goto L_80235D34;
    // 0x80235CEC: nop

L_80235CF0:
    // 0x80235CF0: beq         $v1, $v0, L_80235D24
    if (ctx->r3 == ctx->r2) {
        // 0x80235CF4: lui         $v0, 0x2E00
        ctx->r2 = S32(0X2E00 << 16);
            goto L_80235D24;
    }
    // 0x80235CF4: lui         $v0, 0x2E00
    ctx->r2 = S32(0X2E00 << 16);
    // 0x80235CF8: j           L_80235D34
    // 0x80235CFC: nop

        goto L_80235D34;
    // 0x80235CFC: nop

L_80235D00:
    // 0x80235D00: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x80235D04: sw          $v0, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r2;
    // 0x80235D08: j           L_80235D30
    // 0x80235D0C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_80235D30;
    // 0x80235D0C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_80235D10:
    // 0x80235D10: lui         $v0, 0x2E00
    ctx->r2 = S32(0X2E00 << 16);
    // 0x80235D14: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x80235D18: sw          $v0, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r2;
    // 0x80235D1C: j           L_80235D30
    // 0x80235D20: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
        goto L_80235D30;
    // 0x80235D20: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
L_80235D24:
    // 0x80235D24: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x80235D28: sw          $v0, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r2;
    // 0x80235D2C: addiu       $v0, $zero, 0x808
    ctx->r2 = ADD32(0, 0X808);
L_80235D30:
    // 0x80235D30: sh          $v0, 0x26($a1)
    MEM_H(0X26, ctx->r5) = ctx->r2;
L_80235D34:
    // 0x80235D34: lh          $v0, 0x24($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X24);
    // 0x80235D38: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80235D3C: slti        $v0, $v0, 0x20
    ctx->r2 = SIGNED(ctx->r2) < 0X20 ? 1 : 0;
    // 0x80235D40: bne         $v0, $zero, L_80235D58
    if (ctx->r2 != 0) {
        // 0x80235D44: addiu       $a0, $a0, 0x6
        ctx->r4 = ADD32(ctx->r4, 0X6);
            goto L_80235D58;
    }
    // 0x80235D44: addiu       $a0, $a0, 0x6
    ctx->r4 = ADD32(ctx->r4, 0X6);
    // 0x80235D48: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80235D4C: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x80235D50: j           L_80235D6C
    // 0x80235D54: sh          $zero, 0x24($a1)
    MEM_H(0X24, ctx->r5) = 0;
        goto L_80235D6C;
    // 0x80235D54: sh          $zero, 0x24($a1)
    MEM_H(0X24, ctx->r5) = 0;
L_80235D58:
    // 0x80235D58: lhu         $v0, 0x26($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X26);
    // 0x80235D5C: lw          $v1, 0x18($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X18);
    // 0x80235D60: sh          $a0, 0x24($a1)
    MEM_H(0X24, ctx->r5) = ctx->r4;
    // 0x80235D64: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80235D68: sw          $v1, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r3;
L_80235D6C:
    // 0x80235D6C: jr          $ra
    // 0x80235D70: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x80235D70: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80225CA0_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225CA0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80225CA4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225CA8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225CAC: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80225CB0: addiu       $s3, $s0, 0x3E0
    ctx->r19 = ADD32(ctx->r16, 0X3E0);
    // 0x80225CB4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80225CB8: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x80225CBC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80225CC0: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x80225CC4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80225CC8: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x80225CCC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80225CD0: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80225CD4: sll         $v0, $a0, 24
    ctx->r2 = S32(ctx->r4 << 24);
L_80225CD8:
    // 0x80225CD8: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80225CDC: sll         $v1, $v0, 4
    ctx->r3 = S32(ctx->r2 << 4);
    // 0x80225CE0: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80225CE4: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80225CE8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80225CEC: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80225CF0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80225CF4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80225CF8: lb          $v0, -0x420($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X420);
    // 0x80225CFC: beql        $v0, $zero, L_80225D24
    if (ctx->r2 == 0) {
        // 0x80225D00: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_80225D24;
    }
    goto skip_0;
    // 0x80225D00: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    skip_0:
    // 0x80225D04: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225D08: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80225D0C: lbu         $v1, -0x41E($at)
    ctx->r3 = MEM_BU(ctx->r1, -0X41E);
    // 0x80225D10: beql        $v1, $a2, L_80225D18
    if (ctx->r3 == ctx->r6) {
        // 0x80225D14: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_80225D18;
    }
    goto skip_1;
    // 0x80225D14: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_1:
L_80225D18:
    // 0x80225D18: beql        $v1, $a1, L_80225D20
    if (ctx->r3 == ctx->r5) {
        // 0x80225D1C: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_80225D20;
    }
    goto skip_2;
    // 0x80225D1C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_2:
L_80225D20:
    // 0x80225D20: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
L_80225D24:
    // 0x80225D24: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80225D28: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80225D2C: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80225D30: slti        $v0, $v0, 0x10
    ctx->r2 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x80225D34: bne         $v0, $zero, L_80225CD8
    if (ctx->r2 != 0) {
        // 0x80225D38: sll         $v0, $a0, 24
        ctx->r2 = S32(ctx->r4 << 24);
            goto L_80225CD8;
    }
    // 0x80225D38: sll         $v0, $a0, 24
    ctx->r2 = S32(ctx->r4 << 24);
    // 0x80225D3C: lh          $v1, 0x4E($s3)
    ctx->r3 = MEM_H(ctx->r19, 0X4E);
    // 0x80225D40: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80225D44: bne         $v1, $v0, L_80225D7C
    if (ctx->r3 != ctx->r2) {
        // 0x80225D48: nop
    
            goto L_80225D7C;
    }
    // 0x80225D48: nop

    // 0x80225D4C: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x80225D50: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80225D54: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80225D58: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80225D5C: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x80225D60: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80225D64: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80225D68: lw          $v0, -0x7F64($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7F64);
    // 0x80225D6C: jalr        $v0
    // 0x80225D70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80225D70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80225D74: j           L_80225DE8
    // 0x80225D78: nop

        goto L_80225DE8;
    // 0x80225D78: nop

L_80225D7C:
    // 0x80225D7C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80225D80: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80225D84: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80225D88: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80225D8C: lw          $v0, -0x7F50($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7F50);
    // 0x80225D90: jalr        $v0
    // 0x80225D94: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x80225D94: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80225D98: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x80225D9C: bltz        $v0, L_80225DB4
    if (SIGNED(ctx->r2) < 0) {
        // 0x80225DA0: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_80225DB4;
    }
    // 0x80225DA0: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80225DA4: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x80225DA8: bgez        $v0, L_80225DBC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80225DAC: sll         $v0, $s1, 24
        ctx->r2 = S32(ctx->r17 << 24);
            goto L_80225DBC;
    }
    // 0x80225DAC: sll         $v0, $s1, 24
    ctx->r2 = S32(ctx->r17 << 24);
    // 0x80225DB0: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_80225DB4:
    // 0x80225DB4: sb          $v0, 0x5C($s3)
    MEM_B(0X5C, ctx->r19) = ctx->r2;
    // 0x80225DB8: sll         $v0, $s1, 24
    ctx->r2 = S32(ctx->r17 << 24);
L_80225DBC:
    // 0x80225DBC: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80225DC0: sll         $v1, $s2, 24
    ctx->r3 = S32(ctx->r18 << 24);
    // 0x80225DC4: lbu         $a0, 0x5C($s3)
    ctx->r4 = MEM_BU(ctx->r19, 0X5C);
    // 0x80225DC8: sra         $v1, $v1, 24
    ctx->r3 = S32(SIGNED(ctx->r3) >> 24);
    // 0x80225DCC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80225DD0: slt         $v0, $v0, $a0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80225DD4: beq         $v0, $zero, L_80225DE8
    if (ctx->r2 == 0) {
        // 0x80225DD8: nop
    
            goto L_80225DE8;
    }
    // 0x80225DD8: nop

    // 0x80225DDC: lhu         $v0, 0x4E($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X4E);
    // 0x80225DE0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225DE4: sh          $v0, 0x4E($s3)
    MEM_H(0X4E, ctx->r19) = ctx->r2;
L_80225DE8:
    // 0x80225DE8: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80225DEC: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80225DF0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80225DF4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80225DF8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225DFC: jr          $ra
    // 0x80225E00: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80225E00: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80234310_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234310: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80234314: sw          $fp, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r30;
    // 0x80234318: addu        $fp, $a0, $zero
    ctx->r30 = ADD32(ctx->r4, 0);
    // 0x8023431C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80234320: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x80234324: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x80234328: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x8023432C: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80234330: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80234334: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80234338: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023433C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80234340: lw          $s4, 0x14($fp)
    ctx->r20 = MEM_W(ctx->r30, 0X14);
    // 0x80234344: lh          $v1, 0x0($s4)
    ctx->r3 = MEM_H(ctx->r20, 0X0);
    // 0x80234348: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023434C: beq         $v1, $v0, L_80234720
    if (ctx->r3 == ctx->r2) {
        // 0x80234350: addiu       $s7, $fp, 0x14
        ctx->r23 = ADD32(ctx->r30, 0X14);
            goto L_80234720;
    }
    // 0x80234350: addiu       $s7, $fp, 0x14
    ctx->r23 = ADD32(ctx->r30, 0X14);
    // 0x80234354: addiu       $s6, $zero, 0xFF
    ctx->r22 = ADD32(0, 0XFF);
    // 0x80234358: lui         $s3, 0x8000
    ctx->r19 = S32(0X8000 << 16);
    // 0x8023435C: addiu       $s5, $zero, 0x2
    ctx->r21 = ADD32(0, 0X2);
    // 0x80234360: addiu       $s2, $s4, 0x8
    ctx->r18 = ADD32(ctx->r20, 0X8);
L_80234364:
    // 0x80234364: lbu         $v0, 0x8($s7)
    ctx->r2 = MEM_BU(ctx->r23, 0X8);
    // 0x80234368: lh          $v1, -0x6($s2)
    ctx->r3 = MEM_H(ctx->r18, -0X6);
    // 0x8023436C: sll         $a2, $v0, 24
    ctx->r6 = S32(ctx->r2 << 24);
    // 0x80234370: sra         $v0, $a2, 24
    ctx->r2 = S32(SIGNED(ctx->r6) >> 24);
    // 0x80234374: beq         $v1, $v0, L_8023460C
    if (ctx->r3 == ctx->r2) {
        // 0x80234378: nop
    
            goto L_8023460C;
    }
    // 0x80234378: nop

    // 0x8023437C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80234380: lhu         $v0, 0x49C4($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X49C4);
    // 0x80234384: lb          $a0, -0x4($s2)
    ctx->r4 = MEM_B(ctx->r18, -0X4);
    // 0x80234388: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8023438C: lhu         $v1, 0x49C8($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X49C8);
    // 0x80234390: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80234394: sra         $v0, $v0, 25
    ctx->r2 = S32(SIGNED(ctx->r2) >> 25);
    // 0x80234398: subu        $a1, $v0, $a0
    ctx->r5 = SUB32(ctx->r2, ctx->r4);
    // 0x8023439C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x802343A0: lb          $a0, -0x3($s2)
    ctx->r4 = MEM_B(ctx->r18, -0X3);
    // 0x802343A4: lbu         $v0, -0x2($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0X2);
    // 0x802343A8: sra         $v1, $v1, 25
    ctx->r3 = S32(SIGNED(ctx->r3) >> 25);
    // 0x802343AC: sltu        $v0, $a1, $v0
    ctx->r2 = ctx->r5 < ctx->r2 ? 1 : 0;
    // 0x802343B0: beq         $v0, $zero, L_8023470C
    if (ctx->r2 == 0) {
        // 0x802343B4: subu        $v1, $v1, $a0
        ctx->r3 = SUB32(ctx->r3, ctx->r4);
            goto L_8023470C;
    }
    // 0x802343B4: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x802343B8: lbu         $v0, -0x1($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0X1);
    // 0x802343BC: sltu        $v0, $v1, $v0
    ctx->r2 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x802343C0: beq         $v0, $zero, L_8023470C
    if (ctx->r2 == 0) {
        // 0x802343C4: sra         $v1, $a2, 24
        ctx->r3 = S32(SIGNED(ctx->r6) >> 24);
            goto L_8023470C;
    }
    // 0x802343C4: sra         $v1, $a2, 24
    ctx->r3 = S32(SIGNED(ctx->r6) >> 24);
    // 0x802343C8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802343CC: beql        $v1, $v0, L_80234604
    if (ctx->r3 == ctx->r2) {
        // 0x802343D0: sw          $s4, 0x4($s7)
        MEM_W(0X4, ctx->r23) = ctx->r20;
            goto L_80234604;
    }
    goto skip_0;
    // 0x802343D0: sw          $s4, 0x4($s7)
    MEM_W(0X4, ctx->r23) = ctx->r20;
    skip_0:
    // 0x802343D4: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802343D8: lbu         $v0, -0x6F5F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X6F5F);
    // 0x802343DC: lui         $s1, 0x8024
    ctx->r17 = S32(0X8024 << 16);
    // 0x802343E0: addiu       $s1, $s1, -0x6F60
    ctx->r17 = ADD32(ctx->r17, -0X6F60);
    // 0x802343E4: beql        $v0, $s6, L_80234604
    if (ctx->r2 == ctx->r22) {
        // 0x802343E8: sw          $s4, 0x4($s7)
        MEM_W(0X4, ctx->r23) = ctx->r20;
            goto L_80234604;
    }
    goto skip_1;
    // 0x802343E8: sw          $s4, 0x4($s7)
    MEM_W(0X4, ctx->r23) = ctx->r20;
    skip_1:
    // 0x802343EC: addiu       $s0, $s1, 0x1
    ctx->r16 = ADD32(ctx->r17, 0X1);
L_802343F0:
    // 0x802343F0: jal         0x8004DA68
    // 0x802343F4: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    func_8004DA68_28E68(rdram, ctx);
        goto after_0;
    // 0x802343F4: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    after_0:
    // 0x802343F8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802343FC: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80234400: beq         $v1, $v0, L_802344A4
    if (ctx->r3 == ctx->r2) {
        // 0x80234404: sltiu       $v0, $v1, 0x41
        ctx->r2 = ctx->r3 < 0X41 ? 1 : 0;
            goto L_802344A4;
    }
    // 0x80234404: sltiu       $v0, $v1, 0x41
    ctx->r2 = ctx->r3 < 0X41 ? 1 : 0;
    // 0x80234408: beq         $v0, $zero, L_80234420
    if (ctx->r2 == 0) {
        // 0x8023440C: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_80234420;
    }
    // 0x8023440C: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80234410: beq         $v1, $v0, L_8023443C
    if (ctx->r3 == ctx->r2) {
        // 0x80234414: nop
    
            goto L_8023443C;
    }
    // 0x80234414: nop

    // 0x80234418: j           L_802345F4
    // 0x8023441C: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
        goto L_802345F4;
    // 0x8023441C: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
L_80234420:
    // 0x80234420: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x80234424: beq         $v1, $v0, L_8023450C
    if (ctx->r3 == ctx->r2) {
        // 0x80234428: addiu       $v0, $zero, 0xE0
        ctx->r2 = ADD32(0, 0XE0);
            goto L_8023450C;
    }
    // 0x80234428: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
    // 0x8023442C: beq         $v1, $v0, L_80234564
    if (ctx->r3 == ctx->r2) {
        // 0x80234430: nop
    
            goto L_80234564;
    }
    // 0x80234430: nop

    // 0x80234434: j           L_802345F4
    // 0x80234438: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
        goto L_802345F4;
    // 0x80234438: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
L_8023443C:
    // 0x8023443C: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x80234440: jal         0x80053ED8
    // 0x80234444: nop

    func_80053ED8_2F2D8(rdram, ctx);
        goto after_1;
    // 0x80234444: nop

    after_1:
    // 0x80234448: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8023444C: lw          $v1, -0x714C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X714C);
    // 0x80234450: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80234454: lw          $a0, -0x6F6C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X6F6C);
    // 0x80234458: lbu         $a1, 0x0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X0);
    // 0x8023445C: xor         $v1, $v1, $a0
    ctx->r3 = ctx->r3 ^ ctx->r4;
    // 0x80234460: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
    // 0x80234464: andi        $a1, $a1, 0x1F
    ctx->r5 = ctx->r5 & 0X1F;
    // 0x80234468: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8023446C: srlv        $v0, $s3, $a1
    ctx->r2 = S32(U32(ctx->r19) >> (ctx->r5 & 31));
    // 0x80234470: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x80234474: bne         $v0, $zero, L_802345A4
    if (ctx->r2 != 0) {
        // 0x80234478: nop
    
            goto L_802345A4;
    }
    // 0x80234478: nop

    // 0x8023447C: lbu         $v1, 0x2($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X2);
    // 0x80234480: sb          $s5, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r21;
    // 0x80234484: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80234488: lw          $v0, 0x4020($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4020);
    // 0x8023448C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80234490: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80234494: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x80234498: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x8023449C: j           L_802345E4
    // 0x802344A0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
        goto L_802345E4;
    // 0x802344A0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_802344A4:
    // 0x802344A4: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x802344A8: jal         0x80053ED8
    // 0x802344AC: nop

    func_80053ED8_2F2D8(rdram, ctx);
        goto after_2;
    // 0x802344AC: nop

    after_2:
    // 0x802344B0: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x802344B4: lw          $v1, -0x7798($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7798);
    // 0x802344B8: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x802344BC: lw          $a0, -0x6F70($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X6F70);
    // 0x802344C0: lbu         $a1, 0x0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X0);
    // 0x802344C4: xor         $v1, $v1, $a0
    ctx->r3 = ctx->r3 ^ ctx->r4;
    // 0x802344C8: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
    // 0x802344CC: andi        $a1, $a1, 0x1F
    ctx->r5 = ctx->r5 & 0X1F;
    // 0x802344D0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x802344D4: srlv        $v0, $s3, $a1
    ctx->r2 = S32(U32(ctx->r19) >> (ctx->r5 & 31));
    // 0x802344D8: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x802344DC: bne         $v0, $zero, L_802345A4
    if (ctx->r2 != 0) {
        // 0x802344E0: nop
    
            goto L_802345A4;
    }
    // 0x802344E0: nop

    // 0x802344E4: lbu         $v1, 0x2($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X2);
    // 0x802344E8: sb          $s5, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r21;
    // 0x802344EC: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x802344F0: lw          $v0, -0x22A0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X22A0);
    // 0x802344F4: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x802344F8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802344FC: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x80234500: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x80234504: j           L_802345E4
    // 0x80234508: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
        goto L_802345E4;
    // 0x80234508: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_8023450C:
    // 0x8023450C: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x80234510: jal         0x80053ED8
    // 0x80234514: nop

    func_80053ED8_2F2D8(rdram, ctx);
        goto after_3;
    // 0x80234514: nop

    after_3:
    // 0x80234518: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8023451C: lw          $v1, -0x781C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X781C);
    // 0x80234520: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80234524: lw          $a0, -0x6F68($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X6F68);
    // 0x80234528: lbu         $a1, 0x0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X0);
    // 0x8023452C: xor         $v1, $v1, $a0
    ctx->r3 = ctx->r3 ^ ctx->r4;
    // 0x80234530: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
    // 0x80234534: andi        $a1, $a1, 0x1F
    ctx->r5 = ctx->r5 & 0X1F;
    // 0x80234538: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8023453C: srlv        $v0, $s3, $a1
    ctx->r2 = S32(U32(ctx->r19) >> (ctx->r5 & 31));
    // 0x80234540: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x80234544: bne         $v0, $zero, L_802345A4
    if (ctx->r2 != 0) {
        // 0x80234548: nop
    
            goto L_802345A4;
    }
    // 0x80234548: nop

    // 0x8023454C: lbu         $v0, 0x2($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X2);
    // 0x80234550: sb          $s5, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r21;
    // 0x80234554: lui         $v1, 0x8022
    ctx->r3 = S32(0X8022 << 16);
    // 0x80234558: lw          $v1, -0x26A8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X26A8);
    // 0x8023455C: j           L_802345E4
    // 0x80234560: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
        goto L_802345E4;
    // 0x80234560: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_80234564:
    // 0x80234564: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x80234568: jal         0x80053ED8
    // 0x8023456C: nop

    func_80053ED8_2F2D8(rdram, ctx);
        goto after_4;
    // 0x8023456C: nop

    after_4:
    // 0x80234570: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x80234574: lw          $v1, -0x72C8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X72C8);
    // 0x80234578: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8023457C: lw          $a0, -0x6F64($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X6F64);
    // 0x80234580: lbu         $a1, 0x0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X0);
    // 0x80234584: xor         $v1, $v1, $a0
    ctx->r3 = ctx->r3 ^ ctx->r4;
    // 0x80234588: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
    // 0x8023458C: andi        $a1, $a1, 0x1F
    ctx->r5 = ctx->r5 & 0X1F;
    // 0x80234590: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80234594: srlv        $v0, $s3, $a1
    ctx->r2 = S32(U32(ctx->r19) >> (ctx->r5 & 31));
    // 0x80234598: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8023459C: beq         $v0, $zero, L_802345D0
    if (ctx->r2 == 0) {
        // 0x802345A0: nop
    
            goto L_802345D0;
    }
    // 0x802345A0: nop

L_802345A4:
    // 0x802345A4: lb          $v0, 0x0($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X0);
    // 0x802345A8: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x802345AC: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x802345B0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802345B4: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x802345B8: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x802345BC: lw          $a0, 0x14($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X14);
    // 0x802345C0: jal         0x8006036C
    // 0x802345C4: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    func_8006036C_3B76C(rdram, ctx);
        goto after_5;
    // 0x802345C4: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    after_5:
    // 0x802345C8: j           L_802345F4
    // 0x802345CC: nop

        goto L_802345F4;
    // 0x802345CC: nop

L_802345D0:
    // 0x802345D0: lbu         $v0, 0x2($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X2);
    // 0x802345D4: sb          $s5, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r21;
    // 0x802345D8: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x802345DC: lw          $v1, -0x2344($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X2344);
    // 0x802345E0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_802345E4:
    // 0x802345E4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802345E8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x802345EC: jalr        $v0
    // 0x802345F0: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_6;
    // 0x802345F0: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    after_6:
L_802345F4:
    // 0x802345F4: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x802345F8: bne         $v0, $s6, L_802343F0
    if (ctx->r2 != ctx->r22) {
        // 0x802345FC: addiu       $s1, $s1, 0x2
        ctx->r17 = ADD32(ctx->r17, 0X2);
            goto L_802343F0;
    }
    // 0x802345FC: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x80234600: sw          $s4, 0x4($s7)
    MEM_W(0X4, ctx->r23) = ctx->r20;
L_80234604:
    // 0x80234604: j           L_8023470C
    // 0x80234608: sb          $s5, 0x8($fp)
    MEM_B(0X8, ctx->r30) = ctx->r21;
        goto L_8023470C;
    // 0x80234608: sb          $s5, 0x8($fp)
    MEM_B(0X8, ctx->r30) = ctx->r21;
L_8023460C:
    // 0x8023460C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80234610: lbu         $v0, -0x6F5F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X6F5F);
    // 0x80234614: lui         $s1, 0x8024
    ctx->r17 = S32(0X8024 << 16);
    // 0x80234618: addiu       $s1, $s1, -0x6F60
    ctx->r17 = ADD32(ctx->r17, -0X6F60);
    // 0x8023461C: beql        $v0, $s6, L_80234710
    if (ctx->r2 == ctx->r22) {
        // 0x80234620: addiu       $s4, $s4, 0xC
        ctx->r20 = ADD32(ctx->r20, 0XC);
            goto L_80234710;
    }
    goto skip_2;
    // 0x80234620: addiu       $s4, $s4, 0xC
    ctx->r20 = ADD32(ctx->r20, 0XC);
    skip_2:
    // 0x80234624: addiu       $s0, $s1, 0x1
    ctx->r16 = ADD32(ctx->r17, 0X1);
L_80234628:
    // 0x80234628: jal         0x8004DA68
    // 0x8023462C: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    func_8004DA68_28E68(rdram, ctx);
        goto after_7;
    // 0x8023462C: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    after_7:
    // 0x80234630: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80234634: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80234638: beq         $v1, $v0, L_80234688
    if (ctx->r3 == ctx->r2) {
        // 0x8023463C: sltiu       $v0, $v1, 0x41
        ctx->r2 = ctx->r3 < 0X41 ? 1 : 0;
            goto L_80234688;
    }
    // 0x8023463C: sltiu       $v0, $v1, 0x41
    ctx->r2 = ctx->r3 < 0X41 ? 1 : 0;
    // 0x80234640: beq         $v0, $zero, L_80234658
    if (ctx->r2 == 0) {
        // 0x80234644: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_80234658;
    }
    // 0x80234644: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80234648: beq         $v1, $v0, L_80234674
    if (ctx->r3 == ctx->r2) {
        // 0x8023464C: nop
    
            goto L_80234674;
    }
    // 0x8023464C: nop

    // 0x80234650: j           L_80234700
    // 0x80234654: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
        goto L_80234700;
    // 0x80234654: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
L_80234658:
    // 0x80234658: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x8023465C: beq         $v1, $v0, L_8023469C
    if (ctx->r3 == ctx->r2) {
        // 0x80234660: addiu       $v0, $zero, 0xE0
        ctx->r2 = ADD32(0, 0XE0);
            goto L_8023469C;
    }
    // 0x80234660: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
    // 0x80234664: beq         $v1, $v0, L_802346B0
    if (ctx->r3 == ctx->r2) {
        // 0x80234668: nop
    
            goto L_802346B0;
    }
    // 0x80234668: nop

    // 0x8023466C: j           L_80234700
    // 0x80234670: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
        goto L_80234700;
    // 0x80234670: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
L_80234674:
    // 0x80234674: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80234678: lw          $v0, -0x714C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X714C);
    // 0x8023467C: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80234680: j           L_802346C0
    // 0x80234684: lw          $v1, -0x6F6C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F6C);
        goto L_802346C0;
    // 0x80234684: lw          $v1, -0x6F6C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F6C);
L_80234688:
    // 0x80234688: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8023468C: lw          $v0, -0x7798($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7798);
    // 0x80234690: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80234694: j           L_802346C0
    // 0x80234698: lw          $v1, -0x6F70($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F70);
        goto L_802346C0;
    // 0x80234698: lw          $v1, -0x6F70($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F70);
L_8023469C:
    // 0x8023469C: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x802346A0: lw          $v0, -0x781C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X781C);
    // 0x802346A4: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x802346A8: j           L_802346C0
    // 0x802346AC: lw          $v1, -0x6F68($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F68);
        goto L_802346C0;
    // 0x802346AC: lw          $v1, -0x6F68($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F68);
L_802346B0:
    // 0x802346B0: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x802346B4: lw          $v0, -0x72C8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X72C8);
    // 0x802346B8: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x802346BC: lw          $v1, -0x6F64($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F64);
L_802346C0:
    // 0x802346C0: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x802346C4: xor         $v0, $v0, $v1
    ctx->r2 = ctx->r2 ^ ctx->r3;
    // 0x802346C8: and         $v1, $v0, $v1
    ctx->r3 = ctx->r2 & ctx->r3;
    // 0x802346CC: andi        $a1, $a0, 0x1F
    ctx->r5 = ctx->r4 & 0X1F;
    // 0x802346D0: srlv        $v0, $s3, $a1
    ctx->r2 = S32(U32(ctx->r19) >> (ctx->r5 & 31));
    // 0x802346D4: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x802346D8: beq         $v0, $zero, L_80234700
    if (ctx->r2 == 0) {
        // 0x802346DC: addiu       $s0, $s0, 0x2
        ctx->r16 = ADD32(ctx->r16, 0X2);
            goto L_80234700;
    }
    // 0x802346DC: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x802346E0: lb          $v0, 0x0($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X0);
    // 0x802346E4: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x802346E8: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x802346EC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802346F0: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x802346F4: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x802346F8: jal         0x8006036C
    // 0x802346FC: lw          $a0, 0x14($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X14);
    func_8006036C_3B76C(rdram, ctx);
        goto after_8;
    // 0x802346FC: lw          $a0, 0x14($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X14);
    after_8:
L_80234700:
    // 0x80234700: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80234704: bne         $v0, $s6, L_80234628
    if (ctx->r2 != ctx->r22) {
        // 0x80234708: addiu       $s1, $s1, 0x2
        ctx->r17 = ADD32(ctx->r17, 0X2);
            goto L_80234628;
    }
    // 0x80234708: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
L_8023470C:
    // 0x8023470C: addiu       $s4, $s4, 0xC
    ctx->r20 = ADD32(ctx->r20, 0XC);
L_80234710:
    // 0x80234710: lh          $v1, 0x0($s4)
    ctx->r3 = MEM_H(ctx->r20, 0X0);
    // 0x80234714: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80234718: bne         $v1, $v0, L_80234364
    if (ctx->r3 != ctx->r2) {
        // 0x8023471C: addiu       $s2, $s2, 0xC
        ctx->r18 = ADD32(ctx->r18, 0XC);
            goto L_80234364;
    }
    // 0x8023471C: addiu       $s2, $s2, 0xC
    ctx->r18 = ADD32(ctx->r18, 0XC);
L_80234720:
    // 0x80234720: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80234724: lw          $v0, -0x714C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X714C);
    // 0x80234728: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8023472C: lw          $v1, -0x7798($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7798);
    // 0x80234730: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x80234734: lw          $a0, -0x781C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X781C);
    // 0x80234738: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x8023473C: lw          $a1, -0x72C8($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X72C8);
    // 0x80234740: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234744: sw          $v0, -0x6F6C($at)
    MEM_W(-0X6F6C, ctx->r1) = ctx->r2;
    // 0x80234748: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023474C: sw          $v1, -0x6F70($at)
    MEM_W(-0X6F70, ctx->r1) = ctx->r3;
    // 0x80234750: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234754: sw          $a0, -0x6F68($at)
    MEM_W(-0X6F68, ctx->r1) = ctx->r4;
    // 0x80234758: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023475C: sw          $a1, -0x6F64($at)
    MEM_W(-0X6F64, ctx->r1) = ctx->r5;
    // 0x80234760: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80234764: lw          $fp, 0x30($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X30);
    // 0x80234768: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x8023476C: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x80234770: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x80234774: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80234778: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8023477C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80234780: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80234784: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80234788: jr          $ra
    // 0x8023478C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8023478C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80237160_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237160: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80237164: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80237168: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023716C: jal         0x8004F144
    // 0x80237170: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80237170: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x80237174: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80237178: beq         $v1, $zero, L_802371B4
    if (ctx->r3 == 0) {
        // 0x8023717C: addiu       $a0, $v1, 0x38
        ctx->r4 = ADD32(ctx->r3, 0X38);
            goto L_802371B4;
    }
    // 0x8023717C: addiu       $a0, $v1, 0x38
    ctx->r4 = ADD32(ctx->r3, 0X38);
    // 0x80237180: addiu       $a1, $s0, 0x310
    ctx->r5 = ADD32(ctx->r16, 0X310);
    // 0x80237184: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80237188: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8023718C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80237190: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80237194: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x80237198: jal         0x8009A3B4
    // 0x8023719C: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8023719C: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    after_1:
    // 0x802371A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802371A4: jal         0x8007A1B8
    // 0x802371A8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8007A1B8_555B8(rdram, ctx);
        goto after_2;
    // 0x802371A8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_2:
    // 0x802371AC: jal         0x8004F418
    // 0x802371B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_3;
    // 0x802371B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
L_802371B4:
    // 0x802371B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802371B8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802371BC: jr          $ra
    // 0x802371C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802371C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022FEB4_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FEB4: lh          $v1, 0x56($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X56);
    // 0x8022FEB8: lh          $v0, 0x3AC($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X3AC);
    // 0x8022FEBC: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8022FEC0: bne         $v1, $v0, L_8022FED4
    if (ctx->r3 != ctx->r2) {
        // 0x8022FEC4: addu        $a1, $v1, $zero
        ctx->r5 = ADD32(ctx->r3, 0);
            goto L_8022FED4;
    }
    // 0x8022FEC4: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x8022FEC8: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    // 0x8022FECC: j           L_8022FEEC
    // 0x8022FED0: sh          $zero, 0x1D8($a0)
    MEM_H(0X1D8, ctx->r4) = 0;
        goto L_8022FEEC;
    // 0x8022FED0: sh          $zero, 0x1D8($a0)
    MEM_H(0X1D8, ctx->r4) = 0;
L_8022FED4:
    // 0x8022FED4: lb          $v0, 0xC($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XC);
    // 0x8022FED8: bne         $v0, $zero, L_8022FEE4
    if (ctx->r2 != 0) {
        // 0x8022FEDC: addiu       $v0, $a1, -0x20
        ctx->r2 = ADD32(ctx->r5, -0X20);
            goto L_8022FEE4;
    }
    // 0x8022FEDC: addiu       $v0, $a1, -0x20
    ctx->r2 = ADD32(ctx->r5, -0X20);
    // 0x8022FEE0: addiu       $v0, $a1, 0x20
    ctx->r2 = ADD32(ctx->r5, 0X20);
L_8022FEE4:
    // 0x8022FEE4: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022FEE8: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
L_8022FEEC:
    // 0x8022FEEC: jr          $ra
    // 0x8022FEF0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x8022FEF0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80230404_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230404: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80230408: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023040C: lbu         $v0, 0xB($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XB);
    // 0x80230410: bne         $v0, $zero, L_8023048C
    if (ctx->r2 != 0) {
        // 0x80230414: nop
    
            goto L_8023048C;
    }
    // 0x80230414: nop

    // 0x80230418: lhu         $v1, 0x3B2($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X3B2);
    // 0x8023041C: sb          $zero, 0x1DC($a0)
    MEM_B(0X1DC, ctx->r4) = 0;
    // 0x80230420: andi        $v0, $v1, 0xF
    ctx->r2 = ctx->r3 & 0XF;
    // 0x80230424: sltiu       $v0, $v0, 0x5
    ctx->r2 = ctx->r2 < 0X5 ? 1 : 0;
    // 0x80230428: beq         $v0, $zero, L_80230448
    if (ctx->r2 == 0) {
        // 0x8023042C: sb          $zero, 0xE($a0)
        MEM_B(0XE, ctx->r4) = 0;
            goto L_80230448;
    }
    // 0x8023042C: sb          $zero, 0xE($a0)
    MEM_B(0XE, ctx->r4) = 0;
    // 0x80230430: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80230434: sb          $v1, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r3;
    // 0x80230438: lbu         $a1, 0xAC($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0XAC);
    // 0x8023043C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80230440: j           L_80230480
    // 0x80230444: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80230480;
    // 0x80230444: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80230448:
    // 0x80230448: andi        $v0, $v1, 0x7
    ctx->r2 = ctx->r3 & 0X7;
    // 0x8023044C: sltiu       $v0, $v0, 0xA
    ctx->r2 = ctx->r2 < 0XA ? 1 : 0;
    // 0x80230450: beq         $v0, $zero, L_8023046C
    if (ctx->r2 == 0) {
        // 0x80230454: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_8023046C;
    }
    // 0x80230454: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x80230458: sb          $v1, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r3;
    // 0x8023045C: lbu         $a1, 0xAC($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0XAC);
    // 0x80230460: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80230464: j           L_80230480
    // 0x80230468: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80230480;
    // 0x80230468: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8023046C:
    // 0x8023046C: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x80230470: sb          $v1, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r3;
    // 0x80230474: lbu         $a1, 0xAC($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0XAC);
    // 0x80230478: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023047C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80230480:
    // 0x80230480: sb          $v0, 0xB($a0)
    MEM_B(0XB, ctx->r4) = ctx->r2;
    // 0x80230484: jal         0x80050294
    // 0x80230488: sb          $v1, 0xAD($a0)
    MEM_B(0XAD, ctx->r4) = ctx->r3;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80230488: sb          $v1, 0xAD($a0)
    MEM_B(0XAD, ctx->r4) = ctx->r3;
    after_0:
L_8023048C:
    // 0x8023048C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80230490: jr          $ra
    // 0x80230494: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80230494: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802276D4_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802276D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802276D8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802276DC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802276E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802276E4: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x802276E8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802276EC: bne         $v1, $v0, L_8022770C
    if (ctx->r3 != ctx->r2) {
        // 0x802276F0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022770C;
    }
    // 0x802276F0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802276F4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802276F8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802276FC: jal         0x80050294
    // 0x80227700: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80227700: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_0:
    // 0x80227704: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227708: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_8022770C:
    // 0x8022770C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227710: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227714: jr          $ra
    // 0x80227718: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227718: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022FD50_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FD50: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022FD54: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022FD58: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022FD5C: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8022FD60: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8022FD64: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022FD68: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022FD6C: lbu         $v0, 0x3B4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3B4);
    // 0x8022FD70: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x8022FD74: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x8022FD78: beq         $v0, $zero, L_8022FE74
    if (ctx->r2 == 0) {
        // 0x8022FD7C: addiu       $s3, $s0, 0x1D8
        ctx->r19 = ADD32(ctx->r16, 0X1D8);
            goto L_8022FE74;
    }
    // 0x8022FD7C: addiu       $s3, $s0, 0x1D8
    ctx->r19 = ADD32(ctx->r16, 0X1D8);
    // 0x8022FD80: lh          $v0, 0x1D8($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X1D8);
    // 0x8022FD84: bne         $v0, $zero, L_8022FDF4
    if (ctx->r2 != 0) {
        // 0x8022FD88: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022FDF4;
    }
    // 0x8022FD88: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022FD8C: lhu         $v0, 0x3B2($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X3B2);
    // 0x8022FD90: andi        $v1, $v0, 0xF
    ctx->r3 = ctx->r2 & 0XF;
    // 0x8022FD94: sltiu       $v0, $v1, 0x4
    ctx->r2 = ctx->r3 < 0X4 ? 1 : 0;
    // 0x8022FD98: beq         $v0, $zero, L_8022FDA8
    if (ctx->r2 == 0) {
        // 0x8022FD9C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022FDA8;
    }
    // 0x8022FD9C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022FDA0: j           L_8022FDE8
    // 0x8022FDA4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8022FDE8;
    // 0x8022FDA4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022FDA8:
    // 0x8022FDA8: sltiu       $v0, $v1, 0x7
    ctx->r2 = ctx->r3 < 0X7 ? 1 : 0;
    // 0x8022FDAC: beq         $v0, $zero, L_8022FDBC
    if (ctx->r2 == 0) {
        // 0x8022FDB0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022FDBC;
    }
    // 0x8022FDB0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022FDB4: j           L_8022FDE8
    // 0x8022FDB8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8022FDE8;
    // 0x8022FDB8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022FDBC:
    // 0x8022FDBC: sltiu       $v0, $v1, 0xA
    ctx->r2 = ctx->r3 < 0XA ? 1 : 0;
    // 0x8022FDC0: beq         $v0, $zero, L_8022FDD0
    if (ctx->r2 == 0) {
        // 0x8022FDC4: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022FDD0;
    }
    // 0x8022FDC4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022FDC8: j           L_8022FDE8
    // 0x8022FDCC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8022FDE8;
    // 0x8022FDCC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022FDD0:
    // 0x8022FDD0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FDD4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022FDD8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022FDDC: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022FDE0: jal         0x80050294
    // 0x8022FDE4: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8022FDE4: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    after_0:
L_8022FDE8:
    // 0x8022FDE8: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x8022FDEC: j           L_8022FDFC
    // 0x8022FDF0: sh          $v0, 0x0($s3)
    MEM_H(0X0, ctx->r19) = ctx->r2;
        goto L_8022FDFC;
    // 0x8022FDF0: sh          $v0, 0x0($s3)
    MEM_H(0X0, ctx->r19) = ctx->r2;
L_8022FDF4:
    // 0x8022FDF4: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022FDF8: sh          $v0, 0x1D8($s0)
    MEM_H(0X1D8, ctx->r16) = ctx->r2;
L_8022FDFC:
    // 0x8022FDFC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022FE00: beq         $v0, $zero, L_8022FE74
    if (ctx->r2 == 0) {
        // 0x8022FE04: addiu       $s1, $zero, 0x1
        ctx->r17 = ADD32(0, 0X1);
            goto L_8022FE74;
    }
    // 0x8022FE04: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x8022FE08: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022FE0C: beq         $v0, $s1, L_8022FE30
    if (ctx->r2 == ctx->r17) {
        // 0x8022FE10: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022FE30;
    }
    // 0x8022FE10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FE14: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022FE18: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022FE1C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022FE20: jal         0x80050294
    // 0x8022FE24: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x8022FE24: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022FE28: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022FE2C: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
L_8022FE30:
    // 0x8022FE30: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022FE34: bnel        $v1, $s1, L_8022FE48
    if (ctx->r3 != ctx->r17) {
        // 0x8022FE38: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022FE48;
    }
    goto skip_0;
    // 0x8022FE38: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022FE3C: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022FE40: j           L_8022FE58
    // 0x8022FE44: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
        goto L_8022FE58;
    // 0x8022FE44: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
L_8022FE48:
    // 0x8022FE48: bne         $v1, $v0, L_8022FE64
    if (ctx->r3 != ctx->r2) {
        // 0x8022FE4C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022FE64;
    }
    // 0x8022FE4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FE50: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022FE54: addiu       $v0, $v0, -0x20
    ctx->r2 = ADD32(ctx->r2, -0X20);
L_8022FE58:
    // 0x8022FE58: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022FE5C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022FE60: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022FE64:
    // 0x8022FE64: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022FE68: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022FE6C: jal         0x8004DA90
    // 0x8022FE70: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x8022FE70: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
L_8022FE74:
    // 0x8022FE74: lbu         $v1, 0x6C($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X6C);
    // 0x8022FE78: andi        $v0, $v1, 0x10
    ctx->r2 = ctx->r3 & 0X10;
    // 0x8022FE7C: beq         $v0, $zero, L_8022FE98
    if (ctx->r2 == 0) {
        // 0x8022FE80: ori         $v0, $v1, 0x20
        ctx->r2 = ctx->r3 | 0X20;
            goto L_8022FE98;
    }
    // 0x8022FE80: ori         $v0, $v1, 0x20
    ctx->r2 = ctx->r3 | 0X20;
    // 0x8022FE84: sb          $v0, 0x6C($s2)
    MEM_B(0X6C, ctx->r18) = ctx->r2;
    // 0x8022FE88: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022FE8C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022FE90: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x8022FE94: sh          $zero, 0x0($s3)
    MEM_H(0X0, ctx->r19) = 0;
L_8022FE98:
    // 0x8022FE98: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8022FE9C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8022FEA0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022FEA4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022FEA8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022FEAC: jr          $ra
    // 0x8022FEB0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022FEB0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80225E04_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225E04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225E08: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225E0C: lbu         $v0, 0xB($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XB);
    // 0x80225E10: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80225E14: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80225E18: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80225E1C: lw          $v0, -0x7F78($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7F78);
    // 0x80225E20: jalr        $v0
    // 0x80225E24: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80225E24: nop

    after_0:
    // 0x80225E28: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80225E2C: jr          $ra
    // 0x80225E30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225E30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E020_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E020: lbu         $v0, 0x395($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X395);
    // 0x8022E024: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
    // 0x8022E028: sb          $v0, 0x395($a0)
    MEM_B(0X395, ctx->r4) = ctx->r2;
    // 0x8022E02C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022E030: sltiu       $v0, $v0, 0x21
    ctx->r2 = ctx->r2 < 0X21 ? 1 : 0;
    // 0x8022E034: beq         $v0, $zero, L_8022E04C
    if (ctx->r2 == 0) {
        // 0x8022E038: addiu       $v1, $zero, 0x4
        ctx->r3 = ADD32(0, 0X4);
            goto L_8022E04C;
    }
    // 0x8022E038: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x8022E03C: lbu         $v0, 0xCA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XCA);
    // 0x8022E040: sb          $v1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r3;
    // 0x8022E044: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8022E048: sb          $v0, 0xCA($a0)
    MEM_B(0XCA, ctx->r4) = ctx->r2;
L_8022E04C:
    // 0x8022E04C: jr          $ra
    // 0x8022E050: nop

    TRACE_RETURN()
    return;
    // 0x8022E050: nop

;}
