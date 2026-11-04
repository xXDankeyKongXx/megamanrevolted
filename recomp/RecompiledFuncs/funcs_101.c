#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80228DA8_ovl12(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x80228DB8: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80228DBC: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80228DC0: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80228DC4: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80228DC8: jal         0x80229D58
    // 0x80228DCC: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    func_80229D58_ovl12(rdram, ctx);
        goto after_0;
    // 0x80228DCC: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    after_0:
    // 0x80228DD0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80228DD4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228DD8: sh          $v0, 0x366($s0)
    MEM_H(0X366, ctx->r16) = ctx->r2;
    // 0x80228DDC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80228DE0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80228DE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80228DE8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228DEC: jr          $ra
    // 0x80228DF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228DF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227FB8_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227FB8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227FBC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227FC0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227FC4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80227FC8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227FCC: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x80227FD0: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80227FD4: jal         0x8004FA7C
    // 0x80227FD8: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x80227FD8: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_0:
    // 0x80227FDC: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80227FE0: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x80227FE4: bne         $v0, $zero, L_80228008
    if (ctx->r2 != 0) {
        // 0x80227FE8: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_80228008;
    }
    // 0x80227FE8: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x80227FEC: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80227FF0: jal         0x80229D48
    // 0x80227FF4: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    func_80229D48_ovl12(rdram, ctx);
        goto after_1;
    // 0x80227FF4: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    after_1:
    // 0x80227FF8: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80227FFC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80228000: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80228004: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_80228008:
    // 0x80228008: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022800C: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x80228010: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80228014: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80228018: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022801C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80228020: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228024: jr          $ra
    // 0x80228028: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80228028: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022C4A8_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C4A8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022C4AC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022C4B0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C4B4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022C4B8: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022C4BC: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x8022C4C0: jal         0x8004DA90
    // 0x8022C4C4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8022C4C4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x8022C4C8: jal         0x8003E810
    // 0x8022C4CC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8003E810_19C10(rdram, ctx);
        goto after_1;
    // 0x8022C4CC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_1:
    // 0x8022C4D0: beq         $v0, $zero, L_8022C4E8
    if (ctx->r2 == 0) {
        // 0x8022C4D4: nop
    
            goto L_8022C4E8;
    }
    // 0x8022C4D4: nop

    // 0x8022C4D8: jal         0x8004F418
    // 0x8022C4DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_2;
    // 0x8022C4DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022C4E0: j           L_8022C570
    // 0x8022C4E4: nop

        goto L_8022C570;
    // 0x8022C4E4: nop

L_8022C4E8:
    // 0x8022C4E8: jal         0x8003E934
    // 0x8022C4EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_3;
    // 0x8022C4EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022C4F0: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8022C4F4: lhu         $v1, -0x730C($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X730C);
    // 0x8022C4F8: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8022C4FC: lh          $a3, 0x16($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X16);
    // 0x8022C500: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
    // 0x8022C504: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022C508: addiu       $v0, $a0, -0x64
    ctx->r2 = ADD32(ctx->r4, -0X64);
    // 0x8022C50C: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x8022C510: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8022C514: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022C518: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8022C51C: lhu         $v1, 0x6620($at)
    ctx->r3 = MEM_HU(ctx->r1, 0X6620);
    // 0x8022C520: slt         $v0, $v0, $a3
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x8022C524: beq         $v0, $zero, L_8022C544
    if (ctx->r2 == 0) {
        // 0x8022C528: addu        $a2, $a3, $zero
        ctx->r6 = ADD32(ctx->r7, 0);
            goto L_8022C544;
    }
    // 0x8022C528: addu        $a2, $a3, $zero
    ctx->r6 = ADD32(ctx->r7, 0);
    // 0x8022C52C: addiu       $v0, $v1, -0x64
    ctx->r2 = ADD32(ctx->r3, -0X64);
    // 0x8022C530: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x8022C534: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022C538: addiu       $v0, $zero, -0x10
    ctx->r2 = ADD32(0, -0X10);
    // 0x8022C53C: j           L_8022C570
    // 0x8022C540: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
        goto L_8022C570;
    // 0x8022C540: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
L_8022C544:
    // 0x8022C544: addiu       $v0, $a0, -0x190
    ctx->r2 = ADD32(ctx->r4, -0X190);
    // 0x8022C548: slt         $v0, $a3, $v0
    ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022C54C: beq         $v0, $zero, L_8022C568
    if (ctx->r2 == 0) {
        // 0x8022C550: addiu       $v0, $v1, -0x190
        ctx->r2 = ADD32(ctx->r3, -0X190);
            goto L_8022C568;
    }
    // 0x8022C550: addiu       $v0, $v1, -0x190
    ctx->r2 = ADD32(ctx->r3, -0X190);
    // 0x8022C554: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x8022C558: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022C55C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022C560: j           L_8022C570
    // 0x8022C564: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
        goto L_8022C570;
    // 0x8022C564: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
L_8022C568:
    // 0x8022C568: addu        $v0, $a2, $v1
    ctx->r2 = ADD32(ctx->r6, ctx->r3);
    // 0x8022C56C: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
L_8022C570:
    // 0x8022C570: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022C574: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022C578: jr          $ra
    // 0x8022C57C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022C57C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80228E24_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228E24: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80228E28: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228E2C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228E30: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80228E34: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80228E38: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80228E3C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80228E40: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80228E44: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x80228E48: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80228E4C: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x80228E50: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228E54: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
    // 0x80228E58: sh          $v1, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r3;
    // 0x80228E5C: jal         0x80229D48
    // 0x80228E60: sb          $a1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r5;
    func_80229D48_ovl12(rdram, ctx);
        goto after_0;
    // 0x80228E60: sb          $a1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r5;
    after_0:
    // 0x80228E64: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x80228E68: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80228E6C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80228E70: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x80228E74: addiu       $s2, $s2, 0x49C4
    ctx->r18 = ADD32(ctx->r18, 0X49C4);
    // 0x80228E78: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80228E7C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x80228E80: jal         0x8004F820
    // 0x80228E84: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x80228E84: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_1:
    // 0x80228E88: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228E8C: bgez        $v0, L_80228EBC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80228E90: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_80228EBC;
    }
    // 0x80228E90: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x80228E94: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80228E98: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80228E9C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80228EA0: jal         0x8004F820
    // 0x80228EA4: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x80228EA4: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x80228EA8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228EAC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80228EB0: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80228EB4: j           L_80228ED8
    // 0x80228EB8: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_80228ED8;
    // 0x80228EB8: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_80228EBC:
    // 0x80228EBC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80228EC0: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80228EC4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80228EC8: jal         0x8004F820
    // 0x80228ECC: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x80228ECC: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_3:
    // 0x80228ED0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228ED4: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_80228ED8:
    // 0x80228ED8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80228EDC: sh          $v0, 0x6($s3)
    MEM_H(0X6, ctx->r19) = ctx->r2;
    // 0x80228EE0: lbu         $a3, 0xC($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XC);
    // 0x80228EE4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80228EE8: jal         0x800610AC
    // 0x80228EEC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_4;
    // 0x80228EEC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x80228EF0: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80228EF4: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80228EF8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80228EFC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80228F00: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228F04: jr          $ra
    // 0x80228F08: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80228F08: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80227C74_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227C74: lb          $v0, 0xA7($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XA7);
    // 0x80227C78: bltzl       $v0, L_80227C80
    if (SIGNED(ctx->r2) < 0) {
        // 0x80227C7C: sb          $zero, 0xA($a0)
        MEM_B(0XA, ctx->r4) = 0;
            goto L_80227C80;
    }
    goto skip_0;
    // 0x80227C7C: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    skip_0:
L_80227C80:
    // 0x80227C80: jr          $ra
    // 0x80227C84: nop

    TRACE_RETURN()
    return;
    // 0x80227C84: nop

;}
RECOMP_FUNC void func_80234514_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234514: lhu         $v0, 0x18($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X18);
    // 0x80234518: lw          $a1, 0x20($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X20);
    // 0x8023451C: lhu         $v1, 0x1A($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X1A);
    // 0x80234520: sh          $v0, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r2;
    // 0x80234524: sh          $v1, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r3;
    // 0x80234528: lb          $v1, 0x3($a1)
    ctx->r3 = MEM_B(ctx->r5, 0X3);
    // 0x8023452C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80234530: bgez        $v1, L_80234570
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80234534: addu        $a1, $v1, $zero
        ctx->r5 = ADD32(ctx->r3, 0);
            goto L_80234570;
    }
    // 0x80234534: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x80234538: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023453C: bne         $v1, $v0, L_8023455C
    if (ctx->r3 != ctx->r2) {
        // 0x80234540: andi        $v0, $a1, 0x7F
        ctx->r2 = ctx->r5 & 0X7F;
            goto L_8023455C;
    }
    // 0x80234540: andi        $v0, $a1, 0x7F
    ctx->r2 = ctx->r5 & 0X7F;
    // 0x80234544: lb          $v1, 0xC($a0)
    ctx->r3 = MEM_B(ctx->r4, 0XC);
    // 0x80234548: lb          $v0, 0xD($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XD);
    // 0x8023454C: bne         $v1, $v0, L_8023457C
    if (ctx->r3 != ctx->r2) {
        // 0x80234550: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_8023457C;
    }
    // 0x80234550: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80234554: j           L_802345A0
    // 0x80234558: nop

        goto L_802345A0;
    // 0x80234558: nop

L_8023455C:
    // 0x8023455C: lw          $v1, 0x1C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1C);
    // 0x80234560: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80234564: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80234568: j           L_8023457C
    // 0x8023456C: sw          $v1, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r3;
        goto L_8023457C;
    // 0x8023456C: sw          $v1, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r3;
L_80234570:
    // 0x80234570: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x80234574: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80234578: sw          $v0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r2;
L_8023457C:
    // 0x8023457C: lw          $a1, 0x20($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X20);
    // 0x80234580: lbu         $v0, 0x2($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X2);
    // 0x80234584: sb          $zero, 0xD($a0)
    MEM_B(0XD, ctx->r4) = 0;
    // 0x80234588: sb          $v0, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r2;
    // 0x8023458C: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x80234590: sh          $v0, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r2;
    // 0x80234594: lbu         $v1, 0x1($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X1);
    // 0x80234598: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8023459C: sh          $v1, 0x1A($a0)
    MEM_H(0X1A, ctx->r4) = ctx->r3;
L_802345A0:
    // 0x802345A0: jr          $ra
    // 0x802345A4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x802345A4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x802345A8: nop

    // 0x802345AC: nop

;}
RECOMP_FUNC void func_80225150_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225150: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225154: addiu       $v0, $v0, 0x4BF0
    ctx->r2 = ADD32(ctx->r2, 0X4BF0);
    // 0x80225158: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022515C: sw          $v0, 0x4020($at)
    MEM_W(0X4020, ctx->r1) = ctx->r2;
    // 0x80225160: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225164: addiu       $v0, $v0, 0x4D90
    ctx->r2 = ADD32(ctx->r2, 0X4D90);
    // 0x80225168: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8022516C: sw          $v0, -0x22A0($at)
    MEM_W(-0X22A0, ctx->r1) = ctx->r2;
    // 0x80225170: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225174: addiu       $v0, $v0, 0x4D94
    ctx->r2 = ADD32(ctx->r2, 0X4D94);
    // 0x80225178: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x8022517C: sw          $v0, -0x26A8($at)
    MEM_W(-0X26A8, ctx->r1) = ctx->r2;
    // 0x80225180: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225184: addiu       $v0, $v0, 0x4E54
    ctx->r2 = ADD32(ctx->r2, 0X4E54);
    // 0x80225188: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8022518C: sw          $v0, -0xBD8($at)
    MEM_W(-0XBD8, ctx->r1) = ctx->r2;
    // 0x80225190: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225194: addiu       $v0, $v0, 0x4E84
    ctx->r2 = ADD32(ctx->r2, 0X4E84);
    // 0x80225198: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8022519C: sw          $v0, 0xC68($at)
    MEM_W(0XC68, ctx->r1) = ctx->r2;
    // 0x802251A0: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802251A4: addiu       $v0, $v0, 0x4ED0
    ctx->r2 = ADD32(ctx->r2, 0X4ED0);
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
RECOMP_FUNC void func_80229D98_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229D98: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x80229D9C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229DA0: beq         $a1, $v0, L_80229DCC
    if (ctx->r5 == ctx->r2) {
        // 0x80229DA4: addiu       $v0, $zero, 0x2A
        ctx->r2 = ADD32(0, 0X2A);
            goto L_80229DCC;
    }
    // 0x80229DA4: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x80229DA8: lbu         $a0, 0x2($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X2);
    // 0x80229DAC: bne         $a0, $v0, L_80229DBC
    if (ctx->r4 != ctx->r2) {
        // 0x80229DB0: addiu       $v1, $zero, 0x5
        ctx->r3 = ADD32(0, 0X5);
            goto L_80229DBC;
    }
    // 0x80229DB0: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x80229DB4: j           L_80229DDC
    // 0x80229DB8: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
        goto L_80229DDC;
    // 0x80229DB8: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
L_80229DBC:
    // 0x80229DBC: bne         $a0, $v1, L_80229DDC
    if (ctx->r4 != ctx->r3) {
        // 0x80229DC0: addiu       $v0, $zero, 0x180
        ctx->r2 = ADD32(0, 0X180);
            goto L_80229DDC;
    }
    // 0x80229DC0: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
    // 0x80229DC4: j           L_80229DDC
    // 0x80229DC8: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
        goto L_80229DDC;
    // 0x80229DC8: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
L_80229DCC:
    // 0x80229DCC: lbu         $v0, 0x2($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X2);
    // 0x80229DD0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80229DD4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80229DD8: lbu         $v0, 0x62E0($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X62E0);
L_80229DDC:
    // 0x80229DDC: jr          $ra
    // 0x80229DE0: nop

    TRACE_RETURN()
    return;
    // 0x80229DE0: nop

;}
RECOMP_FUNC void func_80228150_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228150: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228154: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228158: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022815C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228160: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x80228164: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80228168: jal         0x8004FA7C
    // 0x8022816C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x8022816C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_0:
    // 0x80228170: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80228174: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80228178: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022817C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228180: bne         $v0, $zero, L_802281E4
    if (ctx->r2 != 0) {
        // 0x80228184: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_802281E4;
    }
    // 0x80228184: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80228188: lh          $v1, 0x35C($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X35C);
    // 0x8022818C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228190: beq         $v1, $zero, L_802281D4
    if (ctx->r3 == 0) {
        // 0x80228194: sb          $v0, 0xA($s0)
        MEM_B(0XA, ctx->r16) = ctx->r2;
            goto L_802281D4;
    }
    // 0x80228194: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80228198: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022819C: addiu       $a1, $s0, 0x354
    ctx->r5 = ADD32(ctx->r16, 0X354);
    // 0x802281A0: jal         0x8009A3B4
    // 0x802281A4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802281A4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x802281A8: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x802281AC: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x802281B0: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x802281B4: lhu         $a1, 0x352($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X352);
    // 0x802281B8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802281BC: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x802281C0: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x802281C4: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x802281C8: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x802281CC: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x802281D0: sh          $a1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r5;
L_802281D4:
    // 0x802281D4: lhu         $v1, 0x35C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X35C);
    // 0x802281D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802281DC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x802281E0: sh          $v0, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = ctx->r2;
L_802281E4:
    // 0x802281E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802281E8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802281EC: jr          $ra
    // 0x802281F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802281F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802346B0_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802346B0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x802346B4: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x802346B8: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x802346BC: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x802346C0: sw          $ra, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r31;
    // 0x802346C4: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x802346C8: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x802346CC: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x802346D0: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x802346D4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802346D8: lw          $a1, 0x20($s5)
    ctx->r5 = MEM_W(ctx->r21, 0X20);
    // 0x802346DC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802346E0: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    // 0x802346E4: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x802346E8: jal         0x8003BA58
    // 0x802346EC: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    func_8003BA58_16E58(rdram, ctx);
        goto after_0;
    // 0x802346EC: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    after_0:
    // 0x802346F0: sll         $v0, $s3, 16
    ctx->r2 = S32(ctx->r19 << 16);
L_802346F4:
    // 0x802346F4: sra         $s1, $v0, 16
    ctx->r17 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802346F8: addu        $s0, $s5, $s1
    ctx->r16 = ADD32(ctx->r21, ctx->r17);
    // 0x802346FC: lbu         $v0, 0x19($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X19);
    // 0x80234700: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80234704: sb          $v0, 0x19($s0)
    MEM_B(0X19, ctx->r16) = ctx->r2;
    // 0x80234708: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8023470C: bne         $v0, $zero, L_80234884
    if (ctx->r2 != 0) {
        // 0x80234710: addiu       $v0, $s3, 0x1
        ctx->r2 = ADD32(ctx->r19, 0X1);
            goto L_80234884;
    }
    // 0x80234710: addiu       $v0, $s3, 0x1
    ctx->r2 = ADD32(ctx->r19, 0X1);
    // 0x80234714: lbu         $v1, 0x14($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X14);
    // 0x80234718: sll         $v0, $s1, 3
    ctx->r2 = S32(ctx->r17 << 3);
    // 0x8023471C: subu        $v0, $v0, $s1
    ctx->r2 = SUB32(ctx->r2, ctx->r17);
    // 0x80234720: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80234724: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x80234728: sll         $s2, $v0, 1
    ctx->r18 = S32(ctx->r2 << 1);
    // 0x8023472C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80234730: sb          $v1, 0x14($s0)
    MEM_B(0X14, ctx->r16) = ctx->r3;
    // 0x80234734: andi        $v1, $v1, 0xFF
    ctx->r3 = ctx->r3 & 0XFF;
    // 0x80234738: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8023473C: addu        $v1, $v1, $s2
    ctx->r3 = ADD32(ctx->r3, ctx->r18);
    // 0x80234740: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80234744: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80234748: lbu         $v1, 0x7190($at)
    ctx->r3 = MEM_BU(ctx->r1, 0X7190);
    // 0x8023474C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80234750: beql        $v1, $v0, L_80234758
    if (ctx->r3 == ctx->r2) {
        // 0x80234754: sb          $zero, 0x14($s0)
        MEM_B(0X14, ctx->r16) = 0;
            goto L_80234758;
    }
    goto skip_0;
    // 0x80234754: sb          $zero, 0x14($s0)
    MEM_B(0X14, ctx->r16) = 0;
    skip_0:
L_80234758:
    // 0x80234758: lbu         $v0, 0x14($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X14);
    // 0x8023475C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80234760: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x80234764: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80234768: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023476C: lbu         $v0, 0x7191($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X7191);
    // 0x80234770: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80234774: sb          $v0, 0x19($s0)
    MEM_B(0X19, ctx->r16) = ctx->r2;
    // 0x80234778: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8023477C: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x80234780: jal         0x8003BB80
    // 0x80234784: addu        $a3, $s4, $zero
    ctx->r7 = ADD32(ctx->r20, 0);
    func_8003BB80_16F80(rdram, ctx);
        goto after_1;
    // 0x80234784: addu        $a3, $s4, $zero
    ctx->r7 = ADD32(ctx->r20, 0);
    after_1:
    // 0x80234788: lbu         $v0, 0x14($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X14);
    // 0x8023478C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80234790: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x80234794: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80234798: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8023479C: lbu         $a0, 0x7190($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X7190);
    // 0x802347A0: sll         $t1, $s1, 2
    ctx->r9 = S32(ctx->r17 << 2);
    // 0x802347A4: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x802347A8: addu        $v1, $v1, $t1
    ctx->r3 = ADD32(ctx->r3, ctx->r9);
    // 0x802347AC: lbu         $v1, 0x72B4($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X72B4);
    // 0x802347B0: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x802347B4: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x802347B8: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x802347BC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802347C0: sb          $v1, 0x10($sp)
    MEM_B(0X10, ctx->r29) = ctx->r3;
    // 0x802347C4: lbu         $v0, 0x14($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X14);
    // 0x802347C8: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x802347CC: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x802347D0: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802347D4: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x802347D8: lbu         $a0, 0x7190($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X7190);
    // 0x802347DC: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x802347E0: addu        $v1, $v1, $t1
    ctx->r3 = ADD32(ctx->r3, ctx->r9);
    // 0x802347E4: lbu         $v1, 0x72B5($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X72B5);
    // 0x802347E8: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x802347EC: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x802347F0: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x802347F4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802347F8: sb          $v1, 0x12($sp)
    MEM_B(0X12, ctx->r29) = ctx->r3;
    // 0x802347FC: lbu         $v0, 0x14($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X14);
    // 0x80234800: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80234804: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x80234808: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8023480C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80234810: lbu         $a0, 0x7190($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X7190);
    // 0x80234814: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80234818: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8023481C: addu        $v1, $v1, $t1
    ctx->r3 = ADD32(ctx->r3, ctx->r9);
    // 0x80234820: lbu         $v1, 0x72B6($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X72B6);
    // 0x80234824: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80234828: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8023482C: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80234830: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80234834: sb          $v1, 0x14($sp)
    MEM_B(0X14, ctx->r29) = ctx->r3;
    // 0x80234838: lbu         $v0, 0x14($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X14);
    // 0x8023483C: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    // 0x80234840: addu        $a3, $s4, $zero
    ctx->r7 = ADD32(ctx->r20, 0);
    // 0x80234844: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80234848: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x8023484C: lui         $t0, 0x8023
    ctx->r8 = S32(0X8023 << 16);
    // 0x80234850: addu        $t0, $t0, $v0
    ctx->r8 = ADD32(ctx->r8, ctx->r2);
    // 0x80234854: lbu         $t0, 0x7190($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X7190);
    // 0x80234858: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8023485C: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x80234860: addu        $v1, $v1, $t1
    ctx->r3 = ADD32(ctx->r3, ctx->r9);
    // 0x80234864: lbu         $v1, 0x72B7($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X72B7);
    // 0x80234868: sll         $v0, $t0, 1
    ctx->r2 = S32(ctx->r8 << 1);
    // 0x8023486C: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x80234870: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80234874: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80234878: jal         0x8003BC68
    // 0x8023487C: sb          $v1, 0x16($sp)
    MEM_B(0X16, ctx->r29) = ctx->r3;
    func_8003BC68_17068(rdram, ctx);
        goto after_2;
    // 0x8023487C: sb          $v1, 0x16($sp)
    MEM_B(0X16, ctx->r29) = ctx->r3;
    after_2:
    // 0x80234880: addiu       $v0, $s3, 0x1
    ctx->r2 = ADD32(ctx->r19, 0X1);
L_80234884:
    // 0x80234884: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x80234888: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023488C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80234890: slti        $v0, $v0, 0x5
    ctx->r2 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
    // 0x80234894: bne         $v0, $zero, L_802346F4
    if (ctx->r2 != 0) {
        // 0x80234898: sll         $v0, $s3, 16
        ctx->r2 = S32(ctx->r19 << 16);
            goto L_802346F4;
    }
    // 0x80234898: sll         $v0, $s3, 16
    ctx->r2 = S32(ctx->r19 << 16);
    // 0x8023489C: lw          $ra, 0x40($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X40);
    // 0x802348A0: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x802348A4: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x802348A8: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x802348AC: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x802348B0: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x802348B4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802348B8: jr          $ra
    // 0x802348BC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x802348BC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80228AF8_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228AF8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80228AFC: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80228B00: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228B04: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80228B08: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    // 0x80228B0C: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80228B10: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x80228B14: jal         0x80229DE4
    // 0x80228B18: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    func_80229DE4_ovl12(rdram, ctx);
        goto after_0;
    // 0x80228B18: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    after_0:
    // 0x80228B1C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80228B20: beq         $v0, $zero, L_80228B50
    if (ctx->r2 == 0) {
        // 0x80228B24: addiu       $v0, $zero, 0x2A
        ctx->r2 = ADD32(0, 0X2A);
            goto L_80228B50;
    }
    // 0x80228B24: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x80228B28: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x80228B2C: bne         $v1, $v0, L_80228C78
    if (ctx->r3 != ctx->r2) {
        // 0x80228B30: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80228C78;
    }
    // 0x80228B30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228B34: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80228B38: lbu         $a0, 0xAC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XAC);
    // 0x80228B3C: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x80228B40: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x80228B44: sh          $v0, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r2;
    // 0x80228B48: j           L_80228C7C
    // 0x80228B4C: sh          $a0, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r4;
        goto L_80228C7C;
    // 0x80228B4C: sh          $a0, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r4;
L_80228B50:
    // 0x80228B50: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228B54: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80228B58: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80228B5C: jal         0x8004DA90
    // 0x80228B60: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x80228B60: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x80228B64: lh          $a3, 0x354($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X354);
    // 0x80228B68: lh          $a2, 0x35C($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X35C);
    // 0x80228B6C: lh          $a1, 0x14($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X14);
    // 0x80228B70: addu        $a0, $a3, $zero
    ctx->r4 = ADD32(ctx->r7, 0);
    // 0x80228B74: addu        $v0, $a3, $a2
    ctx->r2 = ADD32(ctx->r7, ctx->r6);
    // 0x80228B78: slt         $v0, $v0, $a1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80228B7C: beq         $v0, $zero, L_80228B8C
    if (ctx->r2 == 0) {
        // 0x80228B80: addu        $v1, $a2, $zero
        ctx->r3 = ADD32(ctx->r6, 0);
            goto L_80228B8C;
    }
    // 0x80228B80: addu        $v1, $a2, $zero
    ctx->r3 = ADD32(ctx->r6, 0);
    // 0x80228B84: j           L_80228B9C
    // 0x80228B88: addu        $v0, $a0, $v1
    ctx->r2 = ADD32(ctx->r4, ctx->r3);
        goto L_80228B9C;
    // 0x80228B88: addu        $v0, $a0, $v1
    ctx->r2 = ADD32(ctx->r4, ctx->r3);
L_80228B8C:
    // 0x80228B8C: subu        $v0, $a3, $a2
    ctx->r2 = SUB32(ctx->r7, ctx->r6);
    // 0x80228B90: slt         $v0, $a1, $v0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80228B94: beq         $v0, $zero, L_80228BCC
    if (ctx->r2 == 0) {
        // 0x80228B98: subu        $v0, $a0, $v1
        ctx->r2 = SUB32(ctx->r4, ctx->r3);
            goto L_80228BCC;
    }
    // 0x80228B98: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
L_80228B9C:
    // 0x80228B9C: lhu         $a0, 0x56($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X56);
    // 0x80228BA0: lhu         $v1, 0x350($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X350);
    // 0x80228BA4: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x80228BA8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80228BAC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80228BB0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80228BB4: sh          $v0, 0x366($s0)
    MEM_H(0X366, ctx->r16) = ctx->r2;
    // 0x80228BB8: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x80228BBC: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80228BC0: addiu       $v1, $v1, 0xA
    ctx->r3 = ADD32(ctx->r3, 0XA);
    // 0x80228BC4: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x80228BC8: sh          $v1, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r3;
L_80228BCC:
    // 0x80228BCC: lh          $a3, 0x10($s1)
    ctx->r7 = MEM_H(ctx->r17, 0X10);
    // 0x80228BD0: lh          $a2, 0x16($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X16);
    // 0x80228BD4: lh          $v1, 0x18($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X18);
    // 0x80228BD8: addu        $a1, $a3, $zero
    ctx->r5 = ADD32(ctx->r7, 0);
    // 0x80228BDC: addu        $v0, $a3, $a2
    ctx->r2 = ADD32(ctx->r7, ctx->r6);
    // 0x80228BE0: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80228BE4: beq         $v0, $zero, L_80228BF8
    if (ctx->r2 == 0) {
        // 0x80228BE8: addu        $a0, $a2, $zero
        ctx->r4 = ADD32(ctx->r6, 0);
            goto L_80228BF8;
    }
    // 0x80228BE8: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    // 0x80228BEC: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80228BF0: j           L_80228C0C
    // 0x80228BF4: addu        $v0, $a1, $a0
    ctx->r2 = ADD32(ctx->r5, ctx->r4);
        goto L_80228C0C;
    // 0x80228BF4: addu        $v0, $a1, $a0
    ctx->r2 = ADD32(ctx->r5, ctx->r4);
L_80228BF8:
    // 0x80228BF8: subu        $v0, $a3, $a2
    ctx->r2 = SUB32(ctx->r7, ctx->r6);
    // 0x80228BFC: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80228C00: beq         $v0, $zero, L_80228C3C
    if (ctx->r2 == 0) {
        // 0x80228C04: subu        $v0, $a1, $a0
        ctx->r2 = SUB32(ctx->r5, ctx->r4);
            goto L_80228C3C;
    }
    // 0x80228C04: subu        $v0, $a1, $a0
    ctx->r2 = SUB32(ctx->r5, ctx->r4);
    // 0x80228C08: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
L_80228C0C:
    // 0x80228C0C: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x80228C10: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80228C14: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80228C18: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80228C1C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80228C20: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80228C24: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x80228C28: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x80228C2C: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80228C30: sh          $v1, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r3;
    // 0x80228C34: addiu       $v0, $v0, 0xA
    ctx->r2 = ADD32(ctx->r2, 0XA);
    // 0x80228C38: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
L_80228C3C:
    // 0x80228C3C: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x80228C40: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x80228C44: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x80228C48: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228C4C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80228C50: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80228C54: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80228C58: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80228C5C: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x80228C60: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x80228C64: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80228C68: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    // 0x80228C6C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228C70: bne         $v0, $zero, L_80228C7C
    if (ctx->r2 != 0) {
        // 0x80228C74: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80228C7C;
    }
    // 0x80228C74: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80228C78:
    // 0x80228C78: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80228C7C:
    // 0x80228C7C: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x80228C80: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80228C84: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80228C88: jr          $ra
    // 0x80228C8C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80228C8C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80226C74_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226C74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226C78: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80226C7C: jal         0x80226488
    // 0x80226C80: nop

    func_80226488_ovl12(rdram, ctx);
        goto after_0;
    // 0x80226C80: nop

    after_0:
    // 0x80226C84: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80226C88: jr          $ra
    // 0x80226C8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226C8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802340F8_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802340F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802340FC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80234100: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80234104: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80234108: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8023410C: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x80234110: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80234114: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x80234118: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8023411C: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80234120: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80234124: beq         $v1, $zero, L_80234144
    if (ctx->r3 == 0) {
        // 0x80234128: nop
    
            goto L_80234144;
    }
    // 0x80234128: nop

    // 0x8023412C: jal         0x80234514
    // 0x80234130: nop

    func_80234514_ovl12(rdram, ctx);
        goto after_0;
    // 0x80234130: nop

    after_0:
    // 0x80234134: beq         $v0, $zero, L_80234144
    if (ctx->r2 == 0) {
        // 0x80234138: nop
    
            goto L_80234144;
    }
    // 0x80234138: nop

    // 0x8023413C: jal         0x8004F62C
    // 0x80234140: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F62C_2AA2C(rdram, ctx);
        goto after_1;
    // 0x80234140: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_80234144:
    // 0x80234144: jal         0x8023415C
    // 0x80234148: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8023415C_ovl12(rdram, ctx);
        goto after_2;
    // 0x80234148: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8023414C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80234150: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80234154: jr          $ra
    // 0x80234158: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80234158: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80230BE4_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230BE4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80230BE8: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    // 0x80230BEC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80230BF0: lbu         $a1, 0x3($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X3);
    // 0x80230BF4: lh          $v1, 0x56($a3)
    ctx->r3 = MEM_H(ctx->r7, 0X56);
    // 0x80230BF8: addiu       $v0, $zero, 0x1FF
    ctx->r2 = ADD32(0, 0X1FF);
    // 0x80230BFC: addiu       $a0, $a0, 0x38
    ctx->r4 = ADD32(ctx->r4, 0X38);
    // 0x80230C00: addiu       $a2, $zero, 0x1FF
    ctx->r6 = ADD32(0, 0X1FF);
    // 0x80230C04: addiu       $a3, $a3, 0x14
    ctx->r7 = ADD32(ctx->r7, 0X14);
    // 0x80230C08: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80230C0C: sll         $a1, $a1, 10
    ctx->r5 = S32(ctx->r5 << 10);
    // 0x80230C10: addiu       $a1, $a1, -0x400
    ctx->r5 = ADD32(ctx->r5, -0X400);
    // 0x80230C14: andi        $a1, $a1, 0xC00
    ctx->r5 = ctx->r5 & 0XC00;
    // 0x80230C18: jal         0x8004FD60
    // 0x80230C1C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_8004FD60_2B160(rdram, ctx);
        goto after_0;
    // 0x80230C1C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_0:
    // 0x80230C20: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80230C24: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80230C28: jr          $ra
    // 0x80230C2C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80230C2C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022BB70_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BB70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022BB74: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022BB78: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022BB7C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022BB80: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022BB84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022BB88: jal         0x8009A3B4
    // 0x8022BB8C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022BB8C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022BB90: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022BB94: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022BB98: jal         0x8009A3B4
    // 0x8022BB9C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022BB9C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022BBA0: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022BBA4: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022BBA8: jal         0x8009A3B4
    // 0x8022BBAC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022BBAC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022BBB0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022BBB4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022BBB8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022BBBC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022BBC0: lw          $v0, 0x65F0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X65F0);
    // 0x8022BBC4: jalr        $v0
    // 0x8022BBC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x8022BBC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022BBCC: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022BBD0: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022BBD4: beq         $v0, $zero, L_8022BBEC
    if (ctx->r2 == 0) {
        // 0x8022BBD8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022BBEC;
    }
    // 0x8022BBD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BBDC: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x8022BBE0: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8022BBE4: jal         0x8003B564
    // 0x8022BBE8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_4;
    // 0x8022BBE8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_4:
L_8022BBEC:
    // 0x8022BBEC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022BBF0: beq         $v0, $zero, L_8022BC08
    if (ctx->r2 == 0) {
        // 0x8022BBF4: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_8022BC08;
    }
    // 0x8022BBF4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022BBF8: jal         0x8005044C
    // 0x8022BBFC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_5;
    // 0x8022BBFC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8022BC00: j           L_8022BC0C
    // 0x8022BC04: nop

        goto L_8022BC0C;
    // 0x8022BC04: nop

L_8022BC08:
    // 0x8022BC08: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022BC0C:
    // 0x8022BC0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022BC10: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022BC14: jr          $ra
    // 0x8022BC18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022BC18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227050_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227050: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80227054: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80227058: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8022705C: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x80227060: lui         $s3, 0x8020
    ctx->r19 = S32(0X8020 << 16);
    // 0x80227064: addiu       $s3, $s3, 0x49B0
    ctx->r19 = ADD32(ctx->r19, 0X49B0);
    // 0x80227068: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8022706C: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x80227070: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80227074: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80227078: lw          $s1, 0x24($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X24);
    // 0x8022707C: lbu         $v1, 0x5($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X5);
    // 0x80227080: lw          $a0, 0x28($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X28);
    // 0x80227084: lui         $s4, 0x8021
    ctx->r20 = S32(0X8021 << 16);
    // 0x80227088: addiu       $s4, $s4, 0x9D0
    ctx->r20 = ADD32(ctx->r20, 0X9D0);
    // 0x8022708C: sltiu       $v0, $v1, 0xE
    ctx->r2 = ctx->r3 < 0XE ? 1 : 0;
    // 0x80227090: beq         $v0, $zero, L_8022751C
    if (ctx->r2 == 0) {
        // 0x80227094: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8022751C;
    }
    // 0x80227094: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80227098: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022709C: addu        $at, $at, $v0
    gpr jr_addend_802270A4 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802270A0: lw          $v0, 0x73A8($at)
    ctx->r2 = ADD32(ctx->r1, 0X73A8);
    // 0x802270A4: jr          $v0
    // 0x802270A8: nop

    switch (jr_addend_802270A4 >> 2) {
        case 0: goto L_802270AC; break;
        case 1: goto L_8022710C; break;
        case 2: goto L_80227160; break;
        case 3: goto L_80227184; break;
        case 4: goto L_802271B8; break;
        case 5: goto L_802272B4; break;
        case 6: goto L_802272E4; break;
        case 7: goto L_80227314; break;
        case 8: goto L_80227344; break;
        case 9: goto L_80227378; break;
        case 10: goto L_802273C4; break;
        case 11: goto L_8022749C; break;
        case 12: goto L_802274D0; break;
        case 13: goto L_802274F4; break;
        default: switch_error(__func__, 0x802270A4, 0x802373A8);
    }
    // 0x802270A8: nop

L_802270AC:
    // 0x802270AC: addiu       $s0, $sp, 0x20
    ctx->r16 = ADD32(ctx->r29, 0X20);
    // 0x802270B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802270B4: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x802270B8: jal         0x8009A3B4
    // 0x802270BC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x802270BC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x802270C0: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x802270C4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x802270C8: lh          $v0, 0x16($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X16);
    // 0x802270CC: addiu       $v0, $v0, -0x92
    ctx->r2 = ADD32(ctx->r2, -0X92);
    // 0x802270D0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x802270D4: lh          $v0, 0x18($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X18);
    // 0x802270D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802270DC: addiu       $a1, $s3, 0x14
    ctx->r5 = ADD32(ctx->r19, 0X14);
    // 0x802270E0: jal         0x8004EC38
    // 0x802270E4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_8004EC38_2A038(rdram, ctx);
        goto after_1;
    // 0x802270E4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_1:
    // 0x802270E8: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x802270EC: addiu       $a1, $zero, 0xD4
    ctx->r5 = ADD32(0, 0XD4);
    // 0x802270F0: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x802270F4: jal         0x8003501C
    // 0x802270F8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003501C_1041C(rdram, ctx);
        goto after_2;
    // 0x802270F8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x802270FC: lbu         $v0, 0x0($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X0);
    // 0x80227100: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80227104: j           L_802274E4
    // 0x80227108: sb          $v0, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r2;
        goto L_802274E4;
    // 0x80227108: sb          $v0, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r2;
L_8022710C:
    // 0x8022710C: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x80227110: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x80227114: addiu       $a1, $s3, 0x438
    ctx->r5 = ADD32(ctx->r19, 0X438);
    // 0x80227118: jal         0x8004F820
    // 0x8022711C: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x8022711C: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    after_3:
    // 0x80227120: lhu         $v1, 0x56($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X56);
    // 0x80227124: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80227128: addu        $v1, $v1, $s0
    ctx->r3 = ADD32(ctx->r3, ctx->r16);
    // 0x8022712C: jal         0x8003516C
    // 0x80227130: sh          $v1, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r3;
    func_8003516C_1056C(rdram, ctx);
        goto after_4;
    // 0x80227130: sh          $v1, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r3;
    after_4:
    // 0x80227134: bne         $v0, $zero, L_8022751C
    if (ctx->r2 != 0) {
        // 0x80227138: sll         $v0, $s0, 16
        ctx->r2 = S32(ctx->r16 << 16);
            goto L_8022751C;
    }
    // 0x80227138: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
    // 0x8022713C: bne         $v0, $zero, L_8022751C
    if (ctx->r2 != 0) {
        // 0x80227140: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_8022751C;
    }
    // 0x80227140: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80227144: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
    // 0x80227148: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022714C: sb          $v0, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r2;
    // 0x80227150: lbu         $v0, 0x5($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X5);
    // 0x80227154: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    // 0x80227158: j           L_802274E8
    // 0x8022715C: sw          $v1, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r3;
        goto L_802274E8;
    // 0x8022715C: sw          $v1, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r3;
L_80227160:
    // 0x80227160: lw          $v0, 0x10($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X10);
    // 0x80227164: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80227168: bne         $v0, $zero, L_8022751C
    if (ctx->r2 != 0) {
        // 0x8022716C: sw          $v0, 0x10($s2)
        MEM_W(0X10, ctx->r18) = ctx->r2;
            goto L_8022751C;
    }
    // 0x8022716C: sw          $v0, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r2;
    // 0x80227170: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80227174: jal         0x800616FC
    // 0x80227178: addiu       $a1, $zero, 0x1B
    ctx->r5 = ADD32(0, 0X1B);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_5;
    // 0x80227178: addiu       $a1, $zero, 0x1B
    ctx->r5 = ADD32(0, 0X1B);
    after_5:
    // 0x8022717C: j           L_802274E4
    // 0x80227180: nop

        goto L_802274E4;
    // 0x80227180: nop

L_80227184:
    // 0x80227184: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80227188: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022718C: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80227190: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80227194: bne         $v0, $zero, L_8022751C
    if (ctx->r2 != 0) {
        // 0x80227198: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_8022751C;
    }
    // 0x80227198: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022719C: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
    // 0x802271A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802271A4: sb          $v0, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r2;
    // 0x802271A8: lbu         $v0, 0x5($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X5);
    // 0x802271AC: addiu       $v1, $zero, 0x22
    ctx->r3 = ADD32(0, 0X22);
    // 0x802271B0: j           L_802274E8
    // 0x802271B4: sw          $v1, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r3;
        goto L_802274E8;
    // 0x802271B4: sw          $v1, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r3;
L_802271B8:
    // 0x802271B8: lw          $v0, 0x10($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X10);
    // 0x802271BC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802271C0: bne         $v0, $zero, L_8022751C
    if (ctx->r2 != 0) {
        // 0x802271C4: sw          $v0, 0x10($s2)
        MEM_W(0X10, ctx->r18) = ctx->r2;
            goto L_8022751C;
    }
    // 0x802271C4: sw          $v0, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r2;
    // 0x802271C8: jal         0x80034E74
    // 0x802271CC: nop

    func_80034E74_10274(rdram, ctx);
        goto after_6;
    // 0x802271CC: nop

    after_6:
    // 0x802271D0: addiu       $v0, $zero, -0x4CE
    ctx->r2 = ADD32(0, -0X4CE);
    // 0x802271D4: sh          $v0, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r2;
    // 0x802271D8: lh          $v1, 0x14($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X14);
    // 0x802271DC: addiu       $v0, $zero, 0x71C
    ctx->r2 = ADD32(0, 0X71C);
    // 0x802271E0: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
    // 0x802271E4: lh          $a1, 0x18($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X18);
    // 0x802271E8: addiu       $a0, $s3, 0x438
    ctx->r4 = ADD32(ctx->r19, 0X438);
    // 0x802271EC: addiu       $v0, $zero, 0xA78
    ctx->r2 = ADD32(0, 0XA78);
    // 0x802271F0: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
    // 0x802271F4: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x802271F8: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
    // 0x802271FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227200: sb          $v0, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r2;
    // 0x80227204: addiu       $v0, $zero, -0x514
    ctx->r2 = ADD32(0, -0X514);
    // 0x80227208: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022720C: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x80227210: sw          $v1, 0x34($s1)
    MEM_W(0X34, ctx->r17) = ctx->r3;
    // 0x80227214: sw          $v1, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r3;
    // 0x80227218: sw          $a1, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->r5;
    // 0x8022721C: sw          $a1, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r5;
    // 0x80227220: sh          $v0, 0x438($s3)
    MEM_H(0X438, ctx->r19) = ctx->r2;
    // 0x80227224: addiu       $v0, $zero, 0x692
    ctx->r2 = ADD32(0, 0X692);
    // 0x80227228: sh          $v0, 0x43C($s3)
    MEM_H(0X43C, ctx->r19) = ctx->r2;
    // 0x8022722C: lbu         $v0, 0x0($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X0);
    // 0x80227230: lbu         $v1, 0xBD($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0XBD);
    // 0x80227234: lh          $a2, 0x438($s3)
    ctx->r6 = MEM_H(ctx->r19, 0X438);
    // 0x80227238: lh          $a3, 0x43C($s3)
    ctx->r7 = MEM_H(ctx->r19, 0X43C);
    // 0x8022723C: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x80227240: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80227244: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
    // 0x80227248: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8022724C: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x80227250: sb          $v0, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r2;
    // 0x80227254: sb          $v1, 0xBD($s3)
    MEM_B(0XBD, ctx->r19) = ctx->r3;
    // 0x80227258: sw          $a2, 0x428($s3)
    MEM_W(0X428, ctx->r19) = ctx->r6;
    // 0x8022725C: jal         0x8004EC38
    // 0x80227260: sw          $a3, 0x430($s3)
    MEM_W(0X430, ctx->r19) = ctx->r7;
    func_8004EC38_2A038(rdram, ctx);
        goto after_7;
    // 0x80227260: sw          $a3, 0x430($s3)
    MEM_W(0X430, ctx->r19) = ctx->r7;
    after_7:
    // 0x80227264: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80227268: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022726C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80227270: jal         0x8005F6B4
    // 0x80227274: sh          $v0, 0x442($s3)
    MEM_H(0X442, ctx->r19) = ctx->r2;
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_8;
    // 0x80227274: sh          $v0, 0x442($s3)
    MEM_H(0X442, ctx->r19) = ctx->r2;
    after_8:
    // 0x80227278: lui         $v0, 0xFC9B
    ctx->r2 = S32(0XFC9B << 16);
    // 0x8022727C: sw          $v0, 0x10($s4)
    MEM_W(0X10, ctx->r20) = ctx->r2;
    // 0x80227280: lui         $v0, 0xFD2F
    ctx->r2 = S32(0XFD2F << 16);
    // 0x80227284: sw          $v0, 0x14($s4)
    MEM_W(0X14, ctx->r20) = ctx->r2;
    // 0x80227288: lui         $v0, 0x73C
    ctx->r2 = S32(0X73C << 16);
    // 0x8022728C: sw          $v0, 0x18($s4)
    MEM_W(0X18, ctx->r20) = ctx->r2;
    // 0x80227290: lui         $v0, 0xBA9
    ctx->r2 = S32(0XBA9 << 16);
    // 0x80227294: sw          $v0, 0x40($s4)
    MEM_W(0X40, ctx->r20) = ctx->r2;
    // 0x80227298: lui         $v0, 0xF0
    ctx->r2 = S32(0XF0 << 16);
    // 0x8022729C: sw          $v0, 0x44($s4)
    MEM_W(0X44, ctx->r20) = ctx->r2;
    // 0x802272A0: sw          $zero, 0x48($s4)
    MEM_W(0X48, ctx->r20) = 0;
    // 0x802272A4: lbu         $v0, 0x5($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X5);
    // 0x802272A8: addiu       $v1, $zero, 0x3C
    ctx->r3 = ADD32(0, 0X3C);
    // 0x802272AC: j           L_802274E8
    // 0x802272B0: sw          $v1, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r3;
        goto L_802274E8;
    // 0x802272B0: sw          $v1, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r3;
L_802272B4:
    // 0x802272B4: lw          $v0, 0x10($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X10);
    // 0x802272B8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802272BC: bne         $v0, $zero, L_8022751C
    if (ctx->r2 != 0) {
        // 0x802272C0: sw          $v0, 0x10($s2)
        MEM_W(0X10, ctx->r18) = ctx->r2;
            goto L_8022751C;
    }
    // 0x802272C0: sw          $v0, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r2;
    // 0x802272C4: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x802272C8: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
    // 0x802272CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802272D0: sb          $v0, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r2;
    // 0x802272D4: lbu         $v0, 0x5($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X5);
    // 0x802272D8: addiu       $v1, $zero, 0x2D
    ctx->r3 = ADD32(0, 0X2D);
    // 0x802272DC: j           L_802274E8
    // 0x802272E0: sw          $v1, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r3;
        goto L_802274E8;
    // 0x802272E0: sw          $v1, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r3;
L_802272E4:
    // 0x802272E4: lw          $v0, 0x10($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X10);
    // 0x802272E8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802272EC: bne         $v0, $zero, L_8022751C
    if (ctx->r2 != 0) {
        // 0x802272F0: sw          $v0, 0x10($s2)
        MEM_W(0X10, ctx->r18) = ctx->r2;
            goto L_8022751C;
    }
    // 0x802272F0: sw          $v0, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r2;
    // 0x802272F4: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x802272F8: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
    // 0x802272FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227300: sb          $v0, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r2;
    // 0x80227304: lbu         $v0, 0x5($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X5);
    // 0x80227308: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
    // 0x8022730C: j           L_802274E8
    // 0x80227310: sw          $v1, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r3;
        goto L_802274E8;
    // 0x80227310: sw          $v1, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r3;
L_80227314:
    // 0x80227314: lw          $v0, 0x10($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X10);
    // 0x80227318: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022731C: bne         $v0, $zero, L_8022751C
    if (ctx->r2 != 0) {
        // 0x80227320: sw          $v0, 0x10($s2)
        MEM_W(0X10, ctx->r18) = ctx->r2;
            goto L_8022751C;
    }
    // 0x80227320: sw          $v0, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r2;
    // 0x80227324: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80227328: jal         0x800616FC
    // 0x8022732C: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_9;
    // 0x8022732C: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    after_9:
    // 0x80227330: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80227334: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
    // 0x80227338: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022733C: j           L_802274E4
    // 0x80227340: sb          $v0, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r2;
        goto L_802274E4;
    // 0x80227340: sb          $v0, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r2;
L_80227344:
    // 0x80227344: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80227348: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022734C: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80227350: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80227354: bne         $v0, $zero, L_8022751C
    if (ctx->r2 != 0) {
        // 0x80227358: addiu       $v0, $zero, 0xD
        ctx->r2 = ADD32(0, 0XD);
            goto L_8022751C;
    }
    // 0x80227358: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x8022735C: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
    // 0x80227360: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227364: sb          $v0, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r2;
    // 0x80227368: lbu         $v0, 0x5($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X5);
    // 0x8022736C: addiu       $v1, $zero, 0xA
    ctx->r3 = ADD32(0, 0XA);
    // 0x80227370: j           L_802274E8
    // 0x80227374: sw          $v1, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r3;
        goto L_802274E8;
    // 0x80227374: sw          $v1, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r3;
L_80227378:
    // 0x80227378: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x8022737C: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x80227380: addiu       $a1, $s3, 0x438
    ctx->r5 = ADD32(ctx->r19, 0X438);
    // 0x80227384: jal         0x8004F820
    // 0x80227388: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    func_8004F820_2AC20(rdram, ctx);
        goto after_10;
    // 0x80227388: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    after_10:
    // 0x8022738C: lhu         $v1, 0x56($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X56);
    // 0x80227390: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80227394: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
    // 0x80227398: addu        $v1, $v1, $s0
    ctx->r3 = ADD32(ctx->r3, ctx->r16);
    // 0x8022739C: bne         $v0, $zero, L_8022751C
    if (ctx->r2 != 0) {
        // 0x802273A0: sh          $v1, 0x56($s1)
        MEM_H(0X56, ctx->r17) = ctx->r3;
            goto L_8022751C;
    }
    // 0x802273A0: sh          $v1, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r3;
    // 0x802273A4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802273A8: jal         0x800616FC
    // 0x802273AC: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_11;
    // 0x802273AC: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    after_11:
    // 0x802273B0: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x802273B4: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
    // 0x802273B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802273BC: j           L_802274E4
    // 0x802273C0: sb          $v0, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r2;
        goto L_802274E4;
    // 0x802273C0: sb          $v0, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r2;
L_802273C4:
    // 0x802273C4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802273C8: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x802273CC: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x802273D0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802273D4: bne         $v0, $zero, L_8022751C
    if (ctx->r2 != 0) {
        // 0x802273D8: nop
    
            goto L_8022751C;
    }
    // 0x802273D8: nop

    // 0x802273DC: jal         0x8004F418
    // 0x802273E0: addiu       $s0, $s1, 0x14
    ctx->r16 = ADD32(ctx->r17, 0X14);
    func_8004F418_2A818(rdram, ctx);
        goto after_12;
    // 0x802273E0: addiu       $s0, $s1, 0x14
    ctx->r16 = ADD32(ctx->r17, 0X14);
    after_12:
    // 0x802273E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802273E8: lui         $v0, 0xFAD2
    ctx->r2 = S32(0XFAD2 << 16);
    // 0x802273EC: sw          $v0, 0x10($s4)
    MEM_W(0X10, ctx->r20) = ctx->r2;
    // 0x802273F0: lui         $v0, 0xFD8F
    ctx->r2 = S32(0XFD8F << 16);
    // 0x802273F4: sw          $v0, 0x14($s4)
    MEM_W(0X14, ctx->r20) = ctx->r2;
    // 0x802273F8: lui         $v0, 0x6A1
    ctx->r2 = S32(0X6A1 << 16);
    // 0x802273FC: sw          $v0, 0x18($s4)
    MEM_W(0X18, ctx->r20) = ctx->r2;
    // 0x80227400: lui         $v0, 0x9F9
    ctx->r2 = S32(0X9F9 << 16);
    // 0x80227404: sw          $v0, 0x40($s4)
    MEM_W(0X40, ctx->r20) = ctx->r2;
    // 0x80227408: lui         $v0, 0x40
    ctx->r2 = S32(0X40 << 16);
    // 0x8022740C: sw          $v0, 0x44($s4)
    MEM_W(0X44, ctx->r20) = ctx->r2;
    // 0x80227410: lui         $v0, 0x150
    ctx->r2 = S32(0X150 << 16);
    // 0x80227414: sw          $v0, 0x48($s4)
    MEM_W(0X48, ctx->r20) = ctx->r2;
    // 0x80227418: addiu       $v0, $zero, -0x4B0
    ctx->r2 = ADD32(0, -0X4B0);
    // 0x8022741C: sh          $v0, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r2;
    // 0x80227420: addiu       $v0, $zero, 0x5DC
    ctx->r2 = ADD32(0, 0X5DC);
    // 0x80227424: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
    // 0x80227428: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x8022742C: lh          $v1, 0x18($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X18);
    // 0x80227430: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x80227434: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227438: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022743C: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x80227440: addiu       $v0, $zero, -0xF9E
    ctx->r2 = ADD32(0, -0XF9E);
    // 0x80227444: sw          $v1, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r3;
    // 0x80227448: sh          $v0, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r2;
    // 0x8022744C: addiu       $v0, $zero, -0x2F0
    ctx->r2 = ADD32(0, -0X2F0);
    // 0x80227450: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    // 0x80227454: addiu       $v0, $zero, -0x1E0
    ctx->r2 = ADD32(0, -0X1E0);
    // 0x80227458: jal         0x8004EC38
    // 0x8022745C: sh          $v0, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r2;
    func_8004EC38_2A038(rdram, ctx);
        goto after_13;
    // 0x8022745C: sh          $v0, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r2;
    after_13:
    // 0x80227460: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
    // 0x80227464: addiu       $v0, $zero, 0x320
    ctx->r2 = ADD32(0, 0X320);
    // 0x80227468: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x8022746C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80227470: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
    // 0x80227474: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227478: sb          $v0, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r2;
    // 0x8022747C: lbu         $v0, 0xBD($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0XBD);
    // 0x80227480: addiu       $a0, $s3, 0x438
    ctx->r4 = ADD32(ctx->r19, 0X438);
    // 0x80227484: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80227488: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x8022748C: jal         0x8004EC38
    // 0x80227490: sb          $v0, 0xBD($s3)
    MEM_B(0XBD, ctx->r19) = ctx->r2;
    func_8004EC38_2A038(rdram, ctx);
        goto after_14;
    // 0x80227490: sb          $v0, 0xBD($s3)
    MEM_B(0XBD, ctx->r19) = ctx->r2;
    after_14:
    // 0x80227494: j           L_802274E4
    // 0x80227498: sh          $v0, 0x442($s3)
    MEM_H(0X442, ctx->r19) = ctx->r2;
        goto L_802274E4;
    // 0x80227498: sh          $v0, 0x442($s3)
    MEM_H(0X442, ctx->r19) = ctx->r2;
L_8022749C:
    // 0x8022749C: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x802274A0: slti        $v0, $v0, -0xC1C
    ctx->r2 = SIGNED(ctx->r2) < -0XC1C ? 1 : 0;
    // 0x802274A4: beq         $v0, $zero, L_802274B4
    if (ctx->r2 == 0) {
        // 0x802274A8: addiu       $a0, $s3, 0x438
        ctx->r4 = ADD32(ctx->r19, 0X438);
            goto L_802274B4;
    }
    // 0x802274A8: addiu       $a0, $s3, 0x438
    ctx->r4 = ADD32(ctx->r19, 0X438);
    // 0x802274AC: j           L_802274E4
    // 0x802274B0: sh          $zero, 0x56($s1)
    MEM_H(0X56, ctx->r17) = 0;
        goto L_802274E4;
    // 0x802274B0: sh          $zero, 0x56($s1)
    MEM_H(0X56, ctx->r17) = 0;
L_802274B4:
    // 0x802274B4: lbu         $v0, 0xBD($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0XBD);
    // 0x802274B8: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x802274BC: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x802274C0: jal         0x8004EC38
    // 0x802274C4: sb          $v0, 0xBD($s3)
    MEM_B(0XBD, ctx->r19) = ctx->r2;
    func_8004EC38_2A038(rdram, ctx);
        goto after_15;
    // 0x802274C4: sb          $v0, 0xBD($s3)
    MEM_B(0XBD, ctx->r19) = ctx->r2;
    after_15:
    // 0x802274C8: j           L_8022751C
    // 0x802274CC: sh          $v0, 0x442($s3)
    MEM_H(0X442, ctx->r19) = ctx->r2;
        goto L_8022751C;
    // 0x802274CC: sh          $v0, 0x442($s3)
    MEM_H(0X442, ctx->r19) = ctx->r2;
L_802274D0:
    // 0x802274D0: lh          $v0, 0x18($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X18);
    // 0x802274D4: slti        $v0, $v0, -0x190
    ctx->r2 = SIGNED(ctx->r2) < -0X190 ? 1 : 0;
    // 0x802274D8: beq         $v0, $zero, L_8022751C
    if (ctx->r2 == 0) {
        // 0x802274DC: addiu       $v0, $zero, 0xC00
        ctx->r2 = ADD32(0, 0XC00);
            goto L_8022751C;
    }
    // 0x802274DC: addiu       $v0, $zero, 0xC00
    ctx->r2 = ADD32(0, 0XC00);
    // 0x802274E0: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
L_802274E4:
    // 0x802274E4: lbu         $v0, 0x5($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X5);
L_802274E8:
    // 0x802274E8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802274EC: j           L_8022751C
    // 0x802274F0: sb          $v0, 0x5($s2)
    MEM_B(0X5, ctx->r18) = ctx->r2;
        goto L_8022751C;
    // 0x802274F0: sb          $v0, 0x5($s2)
    MEM_B(0X5, ctx->r18) = ctx->r2;
L_802274F4:
    // 0x802274F4: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x802274F8: slti        $v0, $v0, -0x7CF
    ctx->r2 = SIGNED(ctx->r2) < -0X7CF ? 1 : 0;
    // 0x802274FC: bne         $v0, $zero, L_8022751C
    if (ctx->r2 != 0) {
        // 0x80227500: nop
    
            goto L_8022751C;
    }
    // 0x80227500: nop

    // 0x80227504: jal         0x8004F418
    // 0x80227508: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_16;
    // 0x80227508: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_16:
    // 0x8022750C: lbu         $v0, 0x4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4);
    // 0x80227510: sb          $zero, 0x5($s2)
    MEM_B(0X5, ctx->r18) = 0;
    // 0x80227514: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227518: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
L_8022751C:
    // 0x8022751C: jal         0x8006072C
    // 0x80227520: nop

    func_8006072C_3BB2C(rdram, ctx);
        goto after_17;
    // 0x80227520: nop

    after_17:
    // 0x80227524: beq         $v0, $zero, L_80227574
    if (ctx->r2 == 0) {
        // 0x80227528: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80227574;
    }
    // 0x80227528: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022752C: lbu         $v1, 0x4($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X4);
    // 0x80227530: bne         $v1, $v0, L_80227574
    if (ctx->r3 != ctx->r2) {
        // 0x80227534: nop
    
            goto L_80227574;
    }
    // 0x80227534: nop

    // 0x80227538: lbu         $v0, 0x5($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X5);
    // 0x8022753C: sltiu       $v0, $v0, 0x5
    ctx->r2 = ctx->r2 < 0X5 ? 1 : 0;
    // 0x80227540: beq         $v0, $zero, L_80227550
    if (ctx->r2 == 0) {
        // 0x80227544: nop
    
            goto L_80227550;
    }
    // 0x80227544: nop

    // 0x80227548: jal         0x80034E74
    // 0x8022754C: nop

    func_80034E74_10274(rdram, ctx);
        goto after_18;
    // 0x8022754C: nop

    after_18:
L_80227550:
    // 0x80227550: jal         0x80061798
    // 0x80227554: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80061798_3CB98(rdram, ctx);
        goto after_19;
    // 0x80227554: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_19:
    // 0x80227558: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022755C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227560: sb          $v0, 0x7670($at)
    MEM_B(0X7670, ctx->r1) = ctx->r2;
    // 0x80227564: lbu         $v0, 0x4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4);
    // 0x80227568: sb          $zero, 0x5($s2)
    MEM_B(0X5, ctx->r18) = 0;
    // 0x8022756C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227570: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
L_80227574:
    // 0x80227574: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80227578: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x8022757C: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x80227580: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80227584: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80227588: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022758C: jr          $ra
    // 0x80227590: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80227590: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8022DE20_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DE20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022DE24: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022DE28: jal         0x8004F4F8
    // 0x8022DE2C: nop

    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_0;
    // 0x8022DE2C: nop

    after_0:
    // 0x8022DE30: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022DE34: jr          $ra
    // 0x8022DE38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022DE38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022FF3C_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FF3C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022FF40: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8022FF44: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022FF48: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x8022FF4C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022FF50: lbu         $v1, 0xB($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XB);
    // 0x8022FF54: sltiu       $v0, $v1, 0x18
    ctx->r2 = ctx->r3 < 0X18 ? 1 : 0;
    // 0x8022FF58: beq         $v0, $zero, L_8022FFAC
    if (ctx->r2 == 0) {
        // 0x8022FF5C: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_8022FFAC;
    }
    // 0x8022FF5C: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022FF60: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x8022FF64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FF68: jal         0x8002C678
    // 0x8022FF6C: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    func_8002C678_7A78(rdram, ctx);
        goto after_0;
    // 0x8022FF6C: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    after_0:
    // 0x8022FF70: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x8022FF74: lui         $v1, 0x2AAA
    ctx->r3 = S32(0X2AAA << 16);
    // 0x8022FF78: ori         $v1, $v1, 0xAAAB
    ctx->r3 = ctx->r3 | 0XAAAB;
    // 0x8022FF7C: sll         $v0, $v0, 12
    ctx->r2 = S32(ctx->r2 << 12);
    // 0x8022FF80: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022FF84: lb          $a0, 0xC($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XC);
    // 0x8022FF88: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022FF8C: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    // 0x8022FF90: mfhi        $a2
    ctx->r6 = hi;
    // 0x8022FF94: sra         $v0, $a2, 2
    ctx->r2 = S32(SIGNED(ctx->r6) >> 2);
    // 0x8022FF98: nop

    // 0x8022FF9C: jal         0x800319B4
    // 0x8022FFA0: sh          $v0, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r2;
    func_800319B4_CDB4(rdram, ctx);
        goto after_1;
    // 0x8022FFA0: sh          $v0, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r2;
    after_1:
    // 0x8022FFA4: j           L_8022FFB4
    // 0x8022FFA8: nop

        goto L_8022FFB4;
    // 0x8022FFA8: nop

L_8022FFAC:
    // 0x8022FFAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022FFB0: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_8022FFB4:
    // 0x8022FFB4: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8022FFB8: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022FFBC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022FFC0: jr          $ra
    // 0x8022FFC4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022FFC4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80228864_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228864: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228868: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022886C: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80228870: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80228874: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80228878: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022887C: lw          $v0, 0x64D4($at)
    ctx->r2 = MEM_W(ctx->r1, 0X64D4);
    // 0x80228880: jalr        $v0
    // 0x80228884: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80228884: nop

    after_0:
    // 0x80228888: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022888C: jr          $ra
    // 0x80228890: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228890: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80230F0C_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230F0C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80230F10: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80230F14: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80230F18: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80230F1C: jal         0x8004F144
    // 0x80230F20: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80230F20: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x80230F24: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80230F28: beq         $s0, $zero, L_80230F68
    if (ctx->r16 == 0) {
        // 0x80230F2C: addiu       $a0, $s0, 0x38
        ctx->r4 = ADD32(ctx->r16, 0X38);
            goto L_80230F68;
    }
    // 0x80230F2C: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x80230F30: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80230F34: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80230F38: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80230F3C: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80230F40: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x80230F44: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    // 0x80230F48: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80230F4C: jal         0x8009A3B4
    // 0x80230F50: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80230F50: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    after_1:
    // 0x80230F54: lhu         $v0, 0x3A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3A);
    // 0x80230F58: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80230F5C: addiu       $v0, $v0, -0x28
    ctx->r2 = ADD32(ctx->r2, -0X28);
    // 0x80230F60: jal         0x8004F684
    // 0x80230F64: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
    func_8004F684_2AA84(rdram, ctx);
        goto after_2;
    // 0x80230F64: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
    after_2:
L_80230F68:
    // 0x80230F68: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80230F6C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80230F70: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80230F74: jr          $ra
    // 0x80230F78: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80230F78: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80229E90_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229E90: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80229E94: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229E98: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229E9C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80229EA0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80229EA4: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80229EA8: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    // 0x80229EAC: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80229EB0: jal         0x8004D5D4
    // 0x80229EB4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80229EB4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x80229EB8: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80229EBC: addiu       $v0, $zero, 0x328
    ctx->r2 = ADD32(0, 0X328);
    // 0x80229EC0: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x80229EC4: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x80229EC8: sw          $zero, 0x54($s0)
    MEM_W(0X54, ctx->r16) = 0;
    // 0x80229ECC: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80229ED0: sh          $v0, 0x34A($s0)
    MEM_H(0X34A, ctx->r16) = ctx->r2;
    // 0x80229ED4: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80229ED8: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x80229EDC: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x80229EE0: sw          $zero, 0x58($s0)
    MEM_W(0X58, ctx->r16) = 0;
    // 0x80229EE4: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x80229EE8: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
    // 0x80229EEC: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x80229EF0: sw          $zero, 0x70($s0)
    MEM_W(0X70, ctx->r16) = 0;
    // 0x80229EF4: sw          $zero, 0x74($s0)
    MEM_W(0X74, ctx->r16) = 0;
    // 0x80229EF8: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    // 0x80229EFC: sh          $zero, 0x348($s0)
    MEM_H(0X348, ctx->r16) = 0;
    // 0x80229F00: sh          $zero, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = 0;
    // 0x80229F04: xori        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 ^ 0X1;
    // 0x80229F08: sll         $v1, $v1, 8
    ctx->r3 = S32(ctx->r3 << 8);
    // 0x80229F0C: bne         $v0, $zero, L_80229F2C
    if (ctx->r2 != 0) {
        // 0x80229F10: sh          $v1, 0x14($s0)
        MEM_H(0X14, ctx->r16) = ctx->r3;
            goto L_80229F2C;
    }
    // 0x80229F10: sh          $v1, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r3;
    // 0x80229F14: addiu       $v0, $zero, 0x500
    ctx->r2 = ADD32(0, 0X500);
    // 0x80229F18: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80229F1C: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80229F20: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80229F24: j           L_80229F40
    // 0x80229F28: addiu       $v0, $zero, -0x64
    ctx->r2 = ADD32(0, -0X64);
        goto L_80229F40;
    // 0x80229F28: addiu       $v0, $zero, -0x64
    ctx->r2 = ADD32(0, -0X64);
L_80229F2C:
    // 0x80229F2C: addiu       $v0, $zero, 0x300
    ctx->r2 = ADD32(0, 0X300);
    // 0x80229F30: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80229F34: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80229F38: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80229F3C: addiu       $v0, $zero, -0x96
    ctx->r2 = ADD32(0, -0X96);
L_80229F40:
    // 0x80229F40: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80229F44: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80229F48: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80229F4C: jal         0x8009A3B4
    // 0x80229F50: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80229F50: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80229F54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229F58: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80229F5C: lh          $v1, 0x14($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X14);
    // 0x80229F60: lh          $a3, 0x18($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X18);
    // 0x80229F64: lh          $t0, 0x16($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X16);
    // 0x80229F68: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80229F6C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80229F70: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80229F74: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80229F78: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x80229F7C: sll         $t0, $t0, 16
    ctx->r8 = S32(ctx->r8 << 16);
    // 0x80229F80: sw          $v1, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r3;
    // 0x80229F84: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
    // 0x80229F88: sw          $a3, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r7;
    // 0x80229F8C: sw          $a3, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r7;
    // 0x80229F90: sw          $t0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r8;
    // 0x80229F94: jal         0x80050294
    // 0x80229F98: sw          $t0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r8;
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x80229F98: sw          $t0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r8;
    after_2:
    // 0x80229F9C: jal         0x8004F2C4
    // 0x80229FA0: nop

    func_8004F2C4_2A6C4(rdram, ctx);
        goto after_3;
    // 0x80229FA0: nop

    after_3:
    // 0x80229FA4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80229FA8: beq         $v1, $zero, L_80229FC0
    if (ctx->r3 == 0) {
        // 0x80229FAC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80229FC0;
    }
    // 0x80229FAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229FB0: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80229FB4: addiu       $v0, $zero, 0x1F
    ctx->r2 = ADD32(0, 0X1F);
    // 0x80229FB8: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x80229FBC: sw          $s0, 0x44($v1)
    MEM_W(0X44, ctx->r3) = ctx->r16;
L_80229FC0:
    // 0x80229FC0: sw          $zero, 0x8($s1)
    MEM_W(0X8, ctx->r17) = 0;
    // 0x80229FC4: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80229FC8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229FCC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80229FD0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80229FD4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80229FD8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229FDC: jr          $ra
    // 0x80229FE0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80229FE0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80229A60_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229A60: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80229A64: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229A68: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229A6C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80229A70: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x80229A74: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80229A78: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80229A7C: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x80229A80: addiu       $s2, $s2, 0x49C4
    ctx->r18 = ADD32(ctx->r18, 0X49C4);
    // 0x80229A84: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80229A88: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80229A8C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80229A90: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80229A94: lbu         $v1, 0x34B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34B);
    // 0x80229A98: lhu         $t0, 0x56($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X56);
    // 0x80229A9C: lbu         $t1, 0xAC($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XAC);
    // 0x80229AA0: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x80229AA4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80229AA8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80229AAC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80229AB0: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
    // 0x80229AB4: sh          $t0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r8;
    // 0x80229AB8: jal         0x8004F820
    // 0x80229ABC: sb          $t1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r9;
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80229ABC: sb          $t1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r9;
    after_0:
    // 0x80229AC0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229AC4: bgez        $v0, L_80229AF4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80229AC8: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_80229AF4;
    }
    // 0x80229AC8: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x80229ACC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80229AD0: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80229AD4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80229AD8: jal         0x8004F820
    // 0x80229ADC: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x80229ADC: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_1:
    // 0x80229AE0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229AE4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80229AE8: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80229AEC: j           L_80229B10
    // 0x80229AF0: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_80229B10;
    // 0x80229AF0: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_80229AF4:
    // 0x80229AF4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80229AF8: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80229AFC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80229B00: jal         0x8004F820
    // 0x80229B04: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x80229B04: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x80229B08: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229B0C: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_80229B10:
    // 0x80229B10: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80229B14: sh          $v0, 0x6($s3)
    MEM_H(0X6, ctx->r19) = ctx->r2;
    // 0x80229B18: lbu         $a3, 0xC($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XC);
    // 0x80229B1C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80229B20: jal         0x800610AC
    // 0x80229B24: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_3;
    // 0x80229B24: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x80229B28: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80229B2C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80229B30: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80229B34: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80229B38: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229B3C: jr          $ra
    // 0x80229B40: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80229B40: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022D884_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D884: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022D888: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022D88C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022D890: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D894: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022D898: jal         0x8003E934
    // 0x8022D89C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_0;
    // 0x8022D89C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    after_0:
    // 0x8022D8A0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022D8A4: andi        $s0, $s0, 0x1000
    ctx->r16 = ctx->r16 & 0X1000;
    // 0x8022D8A8: bne         $s0, $zero, L_8022D8E4
    if (ctx->r16 != 0) {
        // 0x8022D8AC: addu        $a1, $a0, $zero
        ctx->r5 = ADD32(ctx->r4, 0);
            goto L_8022D8E4;
    }
    // 0x8022D8AC: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8022D8B0: lhu         $v0, 0x46($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X46);
    // 0x8022D8B4: lhu         $v1, 0x16($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X16);
    // 0x8022D8B8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8022D8BC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022D8C0: sh          $v1, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r3;
    // 0x8022D8C4: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022D8C8: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8022D8CC: sh          $v0, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r2;
    // 0x8022D8D0: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x8022D8D4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022D8D8: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8022D8DC: beq         $v0, $zero, L_8022D8EC
    if (ctx->r2 == 0) {
        // 0x8022D8E0: nop
    
            goto L_8022D8EC;
    }
    // 0x8022D8E0: nop

L_8022D8E4:
    // 0x8022D8E4: sh          $a1, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r5;
    // 0x8022D8E8: sh          $zero, 0x46($s1)
    MEM_H(0X46, ctx->r17) = 0;
L_8022D8EC:
    // 0x8022D8EC: lh          $v0, 0x16($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X16);
    // 0x8022D8F0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D8F4: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x8022D8F8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022D8FC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022D900: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D904: jr          $ra
    // 0x8022D908: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022D908: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80230DB0_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230DB0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80230DB4: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80230DB8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80230DBC: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80230DC0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80230DC4: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80230DC8: lbu         $v1, 0x3($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X3);
    // 0x80230DCC: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x80230DD0: bne         $v1, $zero, L_80230DE4
    if (ctx->r3 != 0) {
        // 0x80230DD4: sb          $v0, 0x0($s1)
        MEM_B(0X0, ctx->r17) = ctx->r2;
            goto L_80230DE4;
    }
    // 0x80230DD4: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x80230DD8: lh          $v0, 0x3E($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X3E);
    // 0x80230DDC: sh          $zero, 0x3E($s1)
    MEM_H(0X3E, ctx->r17) = 0;
    // 0x80230DE0: sw          $v0, 0x44($s1)
    MEM_W(0X44, ctx->r17) = ctx->r2;
L_80230DE4:
    // 0x80230DE4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80230DE8: jal         0x8004D5D4
    // 0x80230DEC: addiu       $a1, $s1, 0x3
    ctx->r5 = ADD32(ctx->r17, 0X3);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80230DEC: addiu       $a1, $s1, 0x3
    ctx->r5 = ADD32(ctx->r17, 0X3);
    after_0:
    // 0x80230DF0: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x80230DF4: jal         0x8002C654
    // 0x80230DF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_1;
    // 0x80230DF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80230DFC: lb          $a0, 0xF($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XF);
    // 0x80230E00: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80230E04: jal         0x800319B4
    // 0x80230E08: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    func_800319B4_CDB4(rdram, ctx);
        goto after_2;
    // 0x80230E08: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    after_2:
    // 0x80230E0C: lbu         $v1, 0x8($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X8);
    // 0x80230E10: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x80230E14: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x80230E18: sw          $v0, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->r2;
    // 0x80230E1C: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80230E20: addiu       $v0, $v0, 0x6C24
    ctx->r2 = ADD32(ctx->r2, 0X6C24);
    // 0x80230E24: sw          $v0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r2;
    // 0x80230E28: sw          $zero, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = 0;
    // 0x80230E2C: sw          $zero, 0x50($s1)
    MEM_W(0X50, ctx->r17) = 0;
    // 0x80230E30: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80230E34: sb          $v1, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r3;
    // 0x80230E38: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80230E3C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80230E40: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80230E44: jr          $ra
    // 0x80230E48: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80230E48: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022DEEC_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DEEC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022DEF0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022DEF4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022DEF8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022DEFC: jal         0x8022E400
    // 0x8022DF00: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    func_8022E400_ovl12(rdram, ctx);
        goto after_0;
    // 0x8022DF00: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x8022DF04: lh          $a0, 0x44($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X44);
    // 0x8022DF08: lhu         $v1, 0xE2($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XE2);
    // 0x8022DF0C: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x8022DF10: addiu       $s1, $s0, 0xD0
    ctx->r17 = ADD32(ctx->r16, 0XD0);
    // 0x8022DF14: sh          $v0, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r2;
    // 0x8022DF18: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x8022DF1C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022DF20: sra         $v0, $v0, 5
    ctx->r2 = S32(SIGNED(ctx->r2) >> 5);
    // 0x8022DF24: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022DF28: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x8022DF2C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022DF30: slti        $v0, $v0, 0x401
    ctx->r2 = SIGNED(ctx->r2) < 0X401 ? 1 : 0;
    // 0x8022DF34: bne         $v0, $zero, L_8022E0AC
    if (ctx->r2 != 0) {
        // 0x8022DF38: sh          $v1, 0xE2($s0)
        MEM_H(0XE2, ctx->r16) = ctx->r3;
            goto L_8022E0AC;
    }
    // 0x8022DF38: sh          $v1, 0xE2($s0)
    MEM_H(0XE2, ctx->r16) = ctx->r3;
    // 0x8022DF3C: lbu         $v0, 0xDE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XDE);
    // 0x8022DF40: lw          $a0, 0xD0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XD0);
    // 0x8022DF44: addiu       $v1, $v1, -0x400
    ctx->r3 = ADD32(ctx->r3, -0X400);
    // 0x8022DF48: sh          $v1, 0xE2($s0)
    MEM_H(0XE2, ctx->r16) = ctx->r3;
    // 0x8022DF4C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022DF50: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022DF54: lbu         $v0, 0x2($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2);
    // 0x8022DF58: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8022DF5C: beq         $v0, $zero, L_8022DF74
    if (ctx->r2 == 0) {
        // 0x8022DF60: addiu       $v1, $zero, -0x1
        ctx->r3 = ADD32(0, -0X1);
            goto L_8022DF74;
    }
    // 0x8022DF60: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x8022DF64: lbu         $v0, 0xDC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XDC);
    // 0x8022DF68: sll         $v0, $v0, 10
    ctx->r2 = S32(ctx->r2 << 10);
    // 0x8022DF6C: j           L_8022DF84
    // 0x8022DF70: addiu       $v0, $v0, 0xC00
    ctx->r2 = ADD32(ctx->r2, 0XC00);
        goto L_8022DF84;
    // 0x8022DF70: addiu       $v0, $v0, 0xC00
    ctx->r2 = ADD32(ctx->r2, 0XC00);
L_8022DF74:
    // 0x8022DF74: lbu         $v0, 0xDC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XDC);
    // 0x8022DF78: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022DF7C: sll         $v0, $v0, 10
    ctx->r2 = S32(ctx->r2 << 10);
    // 0x8022DF80: addiu       $v0, $v0, 0x400
    ctx->r2 = ADD32(ctx->r2, 0X400);
L_8022DF84:
    // 0x8022DF84: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022DF88: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022DF8C: lhu         $v0, 0x16($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X16);
    // 0x8022DF90: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x8022DF94: lhu         $v0, 0x18($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X18);
    // 0x8022DF98: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x8022DF9C: lbu         $a1, 0xC($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0XC);
    // 0x8022DFA0: bne         $a1, $zero, L_8022DFD8
    if (ctx->r5 != 0) {
        // 0x8022DFA4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022DFD8;
    }
    // 0x8022DFA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022DFA8: lhu         $v0, 0x12($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X12);
    // 0x8022DFAC: sll         $a0, $v1, 24
    ctx->r4 = S32(ctx->r3 << 24);
    // 0x8022DFB0: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x8022DFB4: mult        $a0, $v0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022DFB8: mflo        $a0
    ctx->r4 = lo;
    // 0x8022DFBC: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x8022DFC0: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x8022DFC4: addiu       $v0, $v0, -0x200
    ctx->r2 = ADD32(ctx->r2, -0X200);
    // 0x8022DFC8: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x8022DFCC: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x8022DFD0: j           L_8022E070
    // 0x8022DFD4: sh          $v1, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r3;
        goto L_8022E070;
    // 0x8022DFD4: sh          $v1, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r3;
L_8022DFD8:
    // 0x8022DFD8: bnel        $a1, $v0, L_8022E010
    if (ctx->r5 != ctx->r2) {
        // 0x8022DFDC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022E010;
    }
    goto skip_0;
    // 0x8022DFDC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022DFE0: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x8022DFE4: addiu       $v0, $v0, -0x200
    ctx->r2 = ADD32(ctx->r2, -0X200);
    // 0x8022DFE8: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x8022DFEC: lhu         $v0, 0x12($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X12);
    // 0x8022DFF0: sll         $v1, $v1, 24
    ctx->r3 = S32(ctx->r3 << 24);
    // 0x8022DFF4: sra         $v1, $v1, 24
    ctx->r3 = S32(SIGNED(ctx->r3) >> 24);
    // 0x8022DFF8: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022DFFC: mflo        $v1
    ctx->r3 = lo;
    // 0x8022E000: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x8022E004: nop

    // 0x8022E008: j           L_8022E06C
    // 0x8022E00C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
        goto L_8022E06C;
    // 0x8022E00C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
L_8022E010:
    // 0x8022E010: bnel        $a1, $v0, L_8022E048
    if (ctx->r5 != ctx->r2) {
        // 0x8022E014: sll         $v1, $v1, 24
        ctx->r3 = S32(ctx->r3 << 24);
            goto L_8022E048;
    }
    goto skip_1;
    // 0x8022E014: sll         $v1, $v1, 24
    ctx->r3 = S32(ctx->r3 << 24);
    skip_1:
    // 0x8022E018: lhu         $v0, 0x12($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X12);
    // 0x8022E01C: sll         $a0, $v1, 24
    ctx->r4 = S32(ctx->r3 << 24);
    // 0x8022E020: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x8022E024: mult        $a0, $v0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022E028: mflo        $a0
    ctx->r4 = lo;
    // 0x8022E02C: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x8022E030: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x8022E034: addiu       $v0, $v0, 0x200
    ctx->r2 = ADD32(ctx->r2, 0X200);
    // 0x8022E038: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x8022E03C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8022E040: j           L_8022E070
    // 0x8022E044: sh          $v1, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r3;
        goto L_8022E070;
    // 0x8022E044: sh          $v1, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r3;
L_8022E048:
    // 0x8022E048: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x8022E04C: addiu       $v0, $v0, 0x200
    ctx->r2 = ADD32(ctx->r2, 0X200);
    // 0x8022E050: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x8022E054: lhu         $v0, 0x12($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X12);
    // 0x8022E058: sra         $v1, $v1, 24
    ctx->r3 = S32(SIGNED(ctx->r3) >> 24);
    // 0x8022E05C: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022E060: mflo        $v1
    ctx->r3 = lo;
    // 0x8022E064: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x8022E068: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
L_8022E06C:
    // 0x8022E06C: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
L_8022E070:
    // 0x8022E070: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x8022E074: lh          $v1, 0x18($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X18);
    // 0x8022E078: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E07C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022E080: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022E084: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8022E088: jal         0x8022E7B8
    // 0x8022E08C: sw          $v1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r3;
    func_8022E7B8_ovl12(rdram, ctx);
        goto after_1;
    // 0x8022E08C: sw          $v1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r3;
    after_1:
    // 0x8022E090: lbu         $v0, 0xF($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XF);
    // 0x8022E094: sh          $zero, 0x12($s1)
    MEM_H(0X12, ctx->r17) = 0;
    // 0x8022E098: andi        $v0, $v0, 0xFE
    ctx->r2 = ctx->r2 & 0XFE;
    // 0x8022E09C: sb          $v0, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r2;
    // 0x8022E0A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E0A4: j           L_8022E0B4
    // 0x8022E0A8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022E0B4;
    // 0x8022E0A8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022E0AC:
    // 0x8022E0AC: jal         0x8022E284
    // 0x8022E0B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022E284_ovl12(rdram, ctx);
        goto after_2;
    // 0x8022E0B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
L_8022E0B4:
    // 0x8022E0B4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022E0B8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022E0BC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E0C0: jr          $ra
    // 0x8022E0C4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022E0C4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80232640_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232640: lhu         $t3, 0x0($a0)
    ctx->r11 = MEM_HU(ctx->r4, 0X0);
    // 0x80232644: lhu         $t2, 0x2($a0)
    ctx->r10 = MEM_HU(ctx->r4, 0X2);
    // 0x80232648: lhu         $t1, 0x4($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0X4);
    // 0x8023264C: lhu         $t0, 0x6($a0)
    ctx->r8 = MEM_HU(ctx->r4, 0X6);
    // 0x80232650: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x80232654: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x80232658: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023265C: beq         $a1, $v0, L_802326C8
    if (ctx->r5 == ctx->r2) {
        // 0x80232660: addiu       $t4, $zero, 0x1
        ctx->r12 = ADD32(0, 0X1);
            goto L_802326C8;
    }
    // 0x80232660: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80232664: slti        $v0, $a1, 0x2
    ctx->r2 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
    // 0x80232668: beql        $v0, $zero, L_80232680
    if (ctx->r2 == 0) {
        // 0x8023266C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80232680;
    }
    goto skip_0;
    // 0x8023266C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80232670: beq         $a1, $zero, L_80232698
    if (ctx->r5 == 0) {
        // 0x80232674: sll         $a0, $t0, 16
        ctx->r4 = S32(ctx->r8 << 16);
            goto L_80232698;
    }
    // 0x80232674: sll         $a0, $t0, 16
    ctx->r4 = S32(ctx->r8 << 16);
    // 0x80232678: j           L_802327C4
    // 0x8023267C: nop

        goto L_802327C4;
    // 0x8023267C: nop

L_80232680:
    // 0x80232680: beq         $a1, $v0, L_8023271C
    if (ctx->r5 == ctx->r2) {
        // 0x80232684: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8023271C;
    }
    // 0x80232684: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80232688: beq         $a1, $v0, L_80232770
    if (ctx->r5 == ctx->r2) {
        // 0x8023268C: sll         $a0, $t1, 16
        ctx->r4 = S32(ctx->r9 << 16);
            goto L_80232770;
    }
    // 0x8023268C: sll         $a0, $t1, 16
    ctx->r4 = S32(ctx->r9 << 16);
    // 0x80232690: j           L_802327C4
    // 0x80232694: nop

        goto L_802327C4;
    // 0x80232694: nop

L_80232698:
    // 0x80232698: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8023269C: sll         $v1, $t2, 16
    ctx->r3 = S32(ctx->r10 << 16);
    // 0x802326A0: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x802326A4: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x802326A8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802326AC: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x802326B0: bne         $a0, $v1, L_802327C4
    if (ctx->r4 != ctx->r3) {
        // 0x802326B4: nop
    
            goto L_802327C4;
    }
    // 0x802326B4: nop

    // 0x802326B8: sll         $v0, $t1, 16
    ctx->r2 = S32(ctx->r9 << 16);
    // 0x802326BC: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802326C0: j           L_8023279C
    // 0x802326C4: sll         $v0, $t3, 16
    ctx->r2 = S32(ctx->r11 << 16);
        goto L_8023279C;
    // 0x802326C4: sll         $v0, $t3, 16
    ctx->r2 = S32(ctx->r11 << 16);
L_802326C8:
    // 0x802326C8: sll         $a0, $t1, 16
    ctx->r4 = S32(ctx->r9 << 16);
    // 0x802326CC: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x802326D0: sll         $v1, $t3, 16
    ctx->r3 = S32(ctx->r11 << 16);
    // 0x802326D4: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x802326D8: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x802326DC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802326E0: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x802326E4: bne         $a0, $v1, L_802327C4
    if (ctx->r4 != ctx->r3) {
        // 0x802326E8: nop
    
            goto L_802327C4;
    }
    // 0x802326E8: nop

    // 0x802326EC: sll         $v0, $t0, 16
    ctx->r2 = S32(ctx->r8 << 16);
    // 0x802326F0: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802326F4: sll         $v0, $t2, 16
    ctx->r2 = S32(ctx->r10 << 16);
    // 0x802326F8: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802326FC: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80232700: slt         $v0, $a0, $v0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80232704: bne         $v0, $zero, L_802327C4
    if (ctx->r2 != 0) {
        // 0x80232708: nop
    
            goto L_802327C4;
    }
    // 0x80232708: nop

    // 0x8023270C: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
    // 0x80232710: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80232714: j           L_802327BC
    // 0x80232718: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
        goto L_802327BC;
    // 0x80232718: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
L_8023271C:
    // 0x8023271C: sll         $a0, $t0, 16
    ctx->r4 = S32(ctx->r8 << 16);
    // 0x80232720: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80232724: sll         $v1, $t2, 16
    ctx->r3 = S32(ctx->r10 << 16);
    // 0x80232728: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8023272C: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x80232730: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80232734: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80232738: bne         $a0, $v1, L_802327C4
    if (ctx->r4 != ctx->r3) {
        // 0x8023273C: nop
    
            goto L_802327C4;
    }
    // 0x8023273C: nop

    // 0x80232740: sll         $v0, $t1, 16
    ctx->r2 = S32(ctx->r9 << 16);
    // 0x80232744: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80232748: sll         $v0, $t3, 16
    ctx->r2 = S32(ctx->r11 << 16);
    // 0x8023274C: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80232750: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80232754: slt         $v0, $a0, $v0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80232758: bne         $v0, $zero, L_802327C4
    if (ctx->r2 != 0) {
        // 0x8023275C: nop
    
            goto L_802327C4;
    }
    // 0x8023275C: nop

    // 0x80232760: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
    // 0x80232764: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80232768: j           L_802327BC
    // 0x8023276C: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
        goto L_802327BC;
    // 0x8023276C: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
L_80232770:
    // 0x80232770: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80232774: sll         $v1, $t3, 16
    ctx->r3 = S32(ctx->r11 << 16);
    // 0x80232778: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8023277C: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x80232780: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80232784: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80232788: bne         $a0, $v1, L_802327C4
    if (ctx->r4 != ctx->r3) {
        // 0x8023278C: nop
    
            goto L_802327C4;
    }
    // 0x8023278C: nop

    // 0x80232790: sll         $v0, $t0, 16
    ctx->r2 = S32(ctx->r8 << 16);
    // 0x80232794: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80232798: sll         $v0, $t2, 16
    ctx->r2 = S32(ctx->r10 << 16);
L_8023279C:
    // 0x8023279C: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802327A0: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
    // 0x802327A4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802327A8: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
    // 0x802327AC: slt         $v0, $a0, $v0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802327B0: bne         $v0, $zero, L_802327C4
    if (ctx->r2 != 0) {
        // 0x802327B4: nop
    
            goto L_802327C4;
    }
    // 0x802327B4: nop

    // 0x802327B8: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
L_802327BC:
    // 0x802327BC: slt         $v0, $v0, $a0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x802327C0: addu        $t4, $v0, $zero
    ctx->r12 = ADD32(ctx->r2, 0);
L_802327C4:
    // 0x802327C4: jr          $ra
    // 0x802327C8: addu        $v0, $t4, $zero
    ctx->r2 = ADD32(ctx->r12, 0);
    TRACE_RETURN()
    return;
    // 0x802327C8: addu        $v0, $t4, $zero
    ctx->r2 = ADD32(ctx->r12, 0);
;}
RECOMP_FUNC void func_80232E50_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232E50: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80232E54: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80232E58: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80232E5C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80232E60: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232E64: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x80232E68: sltiu       $v0, $v1, 0xA
    ctx->r2 = ctx->r3 < 0XA ? 1 : 0;
    // 0x80232E6C: beq         $v0, $zero, L_80233530
    if (ctx->r2 == 0) {
        // 0x80232E70: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80233530;
    }
    // 0x80232E70: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80232E74: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80232E78: addu        $at, $at, $v0
    gpr jr_addend_80232E80 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80232E7C: lw          $v0, 0x7630($at)
    ctx->r2 = ADD32(ctx->r1, 0X7630);
    // 0x80232E80: jr          $v0
    // 0x80232E84: nop

    switch (jr_addend_80232E80 >> 2) {
        case 0: goto L_80232E88; break;
        case 1: goto L_80232EC8; break;
        case 2: goto L_80232F58; break;
        case 3: goto L_80232FEC; break;
        case 4: goto L_80233068; break;
        case 5: goto L_802333B0; break;
        case 6: goto L_80233404; break;
        case 7: goto L_80233450; break;
        case 8: goto L_80233470; break;
        case 9: goto L_80233520; break;
        default: switch_error(__func__, 0x80232E80, 0x80237630);
    }
    // 0x80232E84: nop

L_80232E88:
    // 0x80232E88: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80232E8C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80232E90: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80232E94: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80232E98: bne         $v0, $zero, L_80233530
    if (ctx->r2 != 0) {
        // 0x80232E9C: nop
    
            goto L_80233530;
    }
    // 0x80232E9C: nop

    // 0x80232EA0: jal         0x80036B58
    // 0x80232EA4: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_80036B58_11F58(rdram, ctx);
        goto after_0;
    // 0x80232EA4: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_0:
    // 0x80232EA8: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x80232EAC: lw          $a1, -0x3AC8($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3AC8);
    // 0x80232EB0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80232EB4: addiu       $a1, $a1, 0x16
    ctx->r5 = ADD32(ctx->r5, 0X16);
    // 0x80232EB8: jal         0x800616FC
    // 0x80232EBC: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    func_800616FC_3CAFC(rdram, ctx);
        goto after_1;
    // 0x80232EBC: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    after_1:
    // 0x80232EC0: j           L_80233510
    // 0x80232EC4: nop

        goto L_80233510;
    // 0x80232EC4: nop

L_80232EC8:
    // 0x80232EC8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80232ECC: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80232ED0: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80232ED4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80232ED8: bne         $v0, $zero, L_80233530
    if (ctx->r2 != 0) {
        // 0x80232EDC: nop
    
            goto L_80233530;
    }
    // 0x80232EDC: nop

    // 0x80232EE0: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80232EE4: lbu         $v0, -0x7388($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7388);
    // 0x80232EE8: bne         $v0, $zero, L_80233530
    if (ctx->r2 != 0) {
        // 0x80232EEC: nop
    
            goto L_80233530;
    }
    // 0x80232EEC: nop

    // 0x80232EF0: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80232EF4: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x80232EF8: jal         0x80070050
    // 0x80232EFC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80070050_4B450(rdram, ctx);
        goto after_2;
    // 0x80232EFC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80232F00: addiu       $a0, $zero, 0x16D
    ctx->r4 = ADD32(0, 0X16D);
    // 0x80232F04: jal         0x8002A33C
    // 0x80232F08: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_3;
    // 0x80232F08: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_3:
    // 0x80232F0C: lui         $a0, 0x200
    ctx->r4 = S32(0X200 << 16);
    // 0x80232F10: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x80232F14: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80232F18: sh          $v0, -0x3F82($at)
    MEM_H(-0X3F82, ctx->r1) = ctx->r2;
    // 0x80232F1C: jal         0x80036B1C
    // 0x80232F20: ori         $a0, $a0, 0x4300
    ctx->r4 = ctx->r4 | 0X4300;
    func_80036B1C_11F1C(rdram, ctx);
        goto after_4;
    // 0x80232F20: ori         $a0, $a0, 0x4300
    ctx->r4 = ctx->r4 | 0X4300;
    after_4:
    // 0x80232F24: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80232F28: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    // 0x80232F2C: sw          $zero, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = 0;
    // 0x80232F30: jal         0x800616FC
    // 0x80232F34: sb          $zero, 0xC($s1)
    MEM_B(0XC, ctx->r17) = 0;
    func_800616FC_3CAFC(rdram, ctx);
        goto after_5;
    // 0x80232F34: sb          $zero, 0xC($s1)
    MEM_B(0XC, ctx->r17) = 0;
    after_5:
    // 0x80232F38: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x80232F3C: lw          $a1, -0x3AC8($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3AC8);
    // 0x80232F40: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x80232F44: addiu       $a1, $a1, 0x28
    ctx->r5 = ADD32(ctx->r5, 0X28);
    // 0x80232F48: jal         0x800616FC
    // 0x80232F4C: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    func_800616FC_3CAFC(rdram, ctx);
        goto after_6;
    // 0x80232F4C: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    after_6:
    // 0x80232F50: j           L_80233510
    // 0x80232F54: nop

        goto L_80233510;
    // 0x80232F54: nop

L_80232F58:
    // 0x80232F58: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80232F5C: lw          $v0, -0x3AC8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3AC8);
    // 0x80232F60: lw          $v1, 0x4C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4C);
    // 0x80232F64: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80232F68: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80232F6C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80232F70: lw          $v0, 0x6CE4($at)
    ctx->r2 = MEM_W(ctx->r1, 0X6CE4);
    // 0x80232F74: sltu        $v1, $v1, $v0
    ctx->r3 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x80232F78: bne         $v1, $zero, L_80232F88
    if (ctx->r3 != 0) {
        // 0x80232F7C: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_80232F88;
    }
    // 0x80232F7C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80232F80: j           L_80232FD0
    // 0x80232F84: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80232FD0;
    // 0x80232F84: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80232F88:
    // 0x80232F88: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80232F8C: addiu       $a0, $a0, -0x2100
    ctx->r4 = ADD32(ctx->r4, -0X2100);
    // 0x80232F90: addiu       $a2, $zero, 0x26
    ctx->r6 = ADD32(0, 0X26);
    // 0x80232F94: addiu       $v1, $a0, 0xC
    ctx->r3 = ADD32(ctx->r4, 0XC);
L_80232F98:
    // 0x80232F98: lb          $v0, 0x0($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X0);
    // 0x80232F9C: beq         $v0, $zero, L_80232FBC
    if (ctx->r2 == 0) {
        // 0x80232FA0: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_80232FBC;
    }
    // 0x80232FA0: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80232FA4: lbu         $v0, -0xA($v1)
    ctx->r2 = MEM_BU(ctx->r3, -0XA);
    // 0x80232FA8: bne         $v0, $a2, L_80232FBC
    if (ctx->r2 != ctx->r6) {
        // 0x80232FAC: nop
    
            goto L_80232FBC;
    }
    // 0x80232FAC: nop

    // 0x80232FB0: lb          $v0, 0x0($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X0);
    // 0x80232FB4: bne         $v0, $zero, L_80232FD0
    if (ctx->r2 != 0) {
        // 0x80232FB8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80232FD0;
    }
    // 0x80232FB8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80232FBC:
    // 0x80232FBC: addiu       $v1, $v1, 0x118
    ctx->r3 = ADD32(ctx->r3, 0X118);
    // 0x80232FC0: slti        $v0, $a1, 0x20
    ctx->r2 = SIGNED(ctx->r5) < 0X20 ? 1 : 0;
    // 0x80232FC4: bne         $v0, $zero, L_80232F98
    if (ctx->r2 != 0) {
        // 0x80232FC8: addiu       $a0, $a0, 0x118
        ctx->r4 = ADD32(ctx->r4, 0X118);
            goto L_80232F98;
    }
    // 0x80232FC8: addiu       $a0, $a0, 0x118
    ctx->r4 = ADD32(ctx->r4, 0X118);
    // 0x80232FCC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80232FD0:
    // 0x80232FD0: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80232FD4: bne         $v0, $zero, L_80233510
    if (ctx->r2 != 0) {
        // 0x80232FD8: nop
    
            goto L_80233510;
    }
    // 0x80232FD8: nop

    // 0x80232FDC: lw          $v0, 0x4C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4C);
    // 0x80232FE0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232FE4: j           L_80233530
    // 0x80232FE8: sw          $v0, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = ctx->r2;
        goto L_80233530;
    // 0x80232FE8: sw          $v0, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = ctx->r2;
L_80232FEC:
    // 0x80232FEC: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80232FF0: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x80232FF4: jal         0x8006FF84
    // 0x80232FF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_7;
    // 0x80232FF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x80232FFC: beq         $v0, $zero, L_80233530
    if (ctx->r2 == 0) {
        // 0x80233000: addiu       $a0, $zero, 0x16D
        ctx->r4 = ADD32(0, 0X16D);
            goto L_80233530;
    }
    // 0x80233000: addiu       $a0, $zero, 0x16D
    ctx->r4 = ADD32(0, 0X16D);
    // 0x80233004: jal         0x8002A33C
    // 0x80233008: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_8;
    // 0x80233008: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_8:
    // 0x8023300C: jal         0x80036B58
    // 0x80233010: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    func_80036B58_11F58(rdram, ctx);
        goto after_9;
    // 0x80233010: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    after_9:
    // 0x80233014: jal         0x80061798
    // 0x80233018: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80061798_3CB98(rdram, ctx);
        goto after_10;
    // 0x80233018: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_10:
    // 0x8023301C: jal         0x80061798
    // 0x80233020: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_80061798_3CB98(rdram, ctx);
        goto after_11;
    // 0x80233020: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_11:
    // 0x80233024: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80233028: lw          $v0, -0x3AC8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3AC8);
    // 0x8023302C: lw          $v1, 0x4C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4C);
    // 0x80233030: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80233034: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80233038: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023303C: lw          $v0, 0x6CE4($at)
    ctx->r2 = MEM_W(ctx->r1, 0X6CE4);
    // 0x80233040: sltu        $v1, $v1, $v0
    ctx->r3 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x80233044: bne         $v1, $zero, L_80233054
    if (ctx->r3 != 0) {
        // 0x80233048: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80233054;
    }
    // 0x80233048: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8023304C: j           L_80233058
    // 0x80233050: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
        goto L_80233058;
    // 0x80233050: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
L_80233054:
    // 0x80233054: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
L_80233058:
    // 0x80233058: jal         0x800616FC
    // 0x8023305C: nop

    func_800616FC_3CAFC(rdram, ctx);
        goto after_12;
    // 0x8023305C: nop

    after_12:
    // 0x80233060: j           L_80233510
    // 0x80233064: nop

        goto L_80233510;
    // 0x80233064: nop

L_80233068:
    // 0x80233068: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8023306C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80233070: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80233074: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80233078: bne         $v0, $zero, L_80233530
    if (ctx->r2 != 0) {
        // 0x8023307C: nop
    
            goto L_80233530;
    }
    // 0x8023307C: nop

    // 0x80233080: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80233084: lbu         $v0, -0x7388($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7388);
    // 0x80233088: bne         $v0, $zero, L_80233530
    if (ctx->r2 != 0) {
        // 0x8023308C: nop
    
            goto L_80233530;
    }
    // 0x8023308C: nop

    // 0x80233090: lui         $s0, 0x801C
    ctx->r16 = S32(0X801C << 16);
    // 0x80233094: addiu       $s0, $s0, -0x3AC8
    ctx->r16 = ADD32(ctx->r16, -0X3AC8);
    // 0x80233098: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8023309C: lw          $v1, 0x4C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4C);
    // 0x802330A0: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x802330A4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802330A8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802330AC: lw          $v0, 0x6CE4($at)
    ctx->r2 = MEM_W(ctx->r1, 0X6CE4);
    // 0x802330B0: sltu        $v1, $v1, $v0
    ctx->r3 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x802330B4: bne         $v1, $zero, L_802330E4
    if (ctx->r3 != 0) {
        // 0x802330B8: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_802330E4;
    }
    // 0x802330B8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802330BC: jal         0x800616FC
    // 0x802330C0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_13;
    // 0x802330C0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_13:
    // 0x802330C4: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    // 0x802330C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802330CC: jal         0x8002A2F8
    // 0x802330D0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_14;
    // 0x802330D0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_14:
    // 0x802330D4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802330D8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802330DC: j           L_80233510
    // 0x802330E0: sb          $v0, 0x7700($at)
    MEM_B(0X7700, ctx->r1) = ctx->r2;
        goto L_80233510;
    // 0x802330E0: sb          $v0, 0x7700($at)
    MEM_B(0X7700, ctx->r1) = ctx->r2;
L_802330E4:
    // 0x802330E4: jal         0x80060D38
    // 0x802330E8: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_80060D38_3C138(rdram, ctx);
        goto after_15;
    // 0x802330E8: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_15:
    // 0x802330EC: jal         0x8006033C
    // 0x802330F0: addiu       $a0, $zero, 0x315
    ctx->r4 = ADD32(0, 0X315);
    func_8006033C_3B73C(rdram, ctx);
        goto after_16;
    // 0x802330F0: addiu       $a0, $zero, 0x315
    ctx->r4 = ADD32(0, 0X315);
    after_16:
    // 0x802330F4: bne         $v0, $zero, L_802331C8
    if (ctx->r2 != 0) {
        // 0x802330F8: addu        $a3, $zero, $zero
        ctx->r7 = ADD32(0, 0);
            goto L_802331C8;
    }
    // 0x802330F8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x802330FC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80233100: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x80233104: bne         $v0, $v1, L_80233130
    if (ctx->r2 != ctx->r3) {
        // 0x80233108: nop
    
            goto L_80233130;
    }
    // 0x80233108: nop

    // 0x8023310C: jal         0x80069820
    // 0x80233110: addiu       $a0, $zero, 0x5C
    ctx->r4 = ADD32(0, 0X5C);
    func_80069820_44C20(rdram, ctx);
        goto after_17;
    // 0x80233110: addiu       $a0, $zero, 0x5C
    ctx->r4 = ADD32(0, 0X5C);
    after_17:
    // 0x80233114: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80233118: jal         0x800616FC
    // 0x8023311C: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_18;
    // 0x8023311C: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    after_18:
    // 0x80233120: jal         0x8006036C
    // 0x80233124: addiu       $a0, $zero, 0x315
    ctx->r4 = ADD32(0, 0X315);
    func_8006036C_3B76C(rdram, ctx);
        goto after_19;
    // 0x80233124: addiu       $a0, $zero, 0x315
    ctx->r4 = ADD32(0, 0X315);
    after_19:
    // 0x80233128: j           L_802331AC
    // 0x8023312C: addiu       $a0, $zero, 0x1B
    ctx->r4 = ADD32(0, 0X1B);
        goto L_802331AC;
    // 0x8023312C: addiu       $a0, $zero, 0x1B
    ctx->r4 = ADD32(0, 0X1B);
L_80233130:
    // 0x80233130: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80233134: lw          $v0, -0x3AC8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3AC8);
    // 0x80233138: bne         $v0, $v1, L_80233188
    if (ctx->r2 != ctx->r3) {
        // 0x8023313C: sll         $v0, $v0, 3
        ctx->r2 = S32(ctx->r2 << 3);
            goto L_80233188;
    }
    // 0x8023313C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80233140: lw          $v0, 0x4C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4C);
    // 0x80233144: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80233148: lw          $a0, 0x6CFC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6CFC);
    // 0x8023314C: addiu       $v1, $zero, -0x4
    ctx->r3 = ADD32(0, -0X4);
    // 0x80233150: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80233154: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x80233158: lui         $v0, 0x8888
    ctx->r2 = S32(0X8888 << 16);
    // 0x8023315C: ori         $v0, $v0, 0x8889
    ctx->r2 = ctx->r2 | 0X8889;
    // 0x80233160: multu       $a0, $v0
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80233164: mfhi        $t3
    ctx->r11 = hi;
    // 0x80233168: srl         $a0, $t3, 3
    ctx->r4 = S32(U32(ctx->r11) >> 3);
    // 0x8023316C: nop

    // 0x80233170: mult        $a0, $a0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80233174: mflo        $a0
    ctx->r4 = lo;
    // 0x80233178: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8023317C: lw          $v0, 0x6CF8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6CF8);
    // 0x80233180: j           L_80233194
    // 0x80233184: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
        goto L_80233194;
    // 0x80233184: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
L_80233188:
    // 0x80233188: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8023318C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80233190: lw          $a0, 0x6CE0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6CE0);
L_80233194:
    // 0x80233194: jal         0x8006982C
    // 0x80233198: nop

    func_8006982C_44C2C(rdram, ctx);
        goto after_20;
    // 0x80233198: nop

    after_20:
    // 0x8023319C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802331A0: jal         0x800616FC
    // 0x802331A4: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_21;
    // 0x802331A4: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    after_21:
    // 0x802331A8: addiu       $a0, $zero, 0x1B
    ctx->r4 = ADD32(0, 0X1B);
L_802331AC:
    // 0x802331AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802331B0: jal         0x8002A2F8
    // 0x802331B4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_22;
    // 0x802331B4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_22:
    // 0x802331B8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802331BC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802331C0: j           L_80233390
    // 0x802331C4: sb          $v0, 0x7700($at)
    MEM_B(0X7700, ctx->r1) = ctx->r2;
        goto L_80233390;
    // 0x802331C4: sb          $v0, 0x7700($at)
    MEM_B(0X7700, ctx->r1) = ctx->r2;
L_802331C8:
    // 0x802331C8: lw          $t2, 0x4C($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X4C);
    // 0x802331CC: addiu       $a0, $s0, -0xC
    ctx->r4 = ADD32(ctx->r16, -0XC);
    // 0x802331D0: addu        $t0, $a0, $zero
    ctx->r8 = ADD32(ctx->r4, 0);
L_802331D4:
    // 0x802331D4: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x802331D8: sltu        $v0, $v0, $t2
    ctx->r2 = ctx->r2 < ctx->r10 ? 1 : 0;
    // 0x802331DC: bnel        $v0, $zero, L_80233244
    if (ctx->r2 != 0) {
        // 0x802331E0: addiu       $a3, $a3, 0x1
        ctx->r7 = ADD32(ctx->r7, 0X1);
            goto L_80233244;
    }
    goto skip_0;
    // 0x802331E0: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    skip_0:
    // 0x802331E4: slti        $v0, $a3, 0x2
    ctx->r2 = SIGNED(ctx->r7) < 0X2 ? 1 : 0;
    // 0x802331E8: beq         $v0, $zero, L_80233238
    if (ctx->r2 == 0) {
        // 0x802331EC: addiu       $v1, $a0, 0x20
        ctx->r3 = ADD32(ctx->r4, 0X20);
            goto L_80233238;
    }
    // 0x802331EC: addiu       $v1, $a0, 0x20
    ctx->r3 = ADD32(ctx->r4, 0X20);
    // 0x802331F0: sll         $v0, $a3, 4
    ctx->r2 = S32(ctx->r7 << 4);
    // 0x802331F4: addu        $t1, $v0, $a0
    ctx->r9 = ADD32(ctx->r2, ctx->r4);
    // 0x802331F8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_802331FC:
    // 0x802331FC: lw          $v0, -0x10($v1)
    ctx->r2 = MEM_W(ctx->r3, -0X10);
    // 0x80233200: addiu       $a1, $v1, -0x10
    ctx->r5 = ADD32(ctx->r3, -0X10);
    // 0x80233204: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x80233208: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_8023320C:
    // 0x8023320C: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x80233210: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x80233214: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x80233218: sh          $v0, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r2;
    // 0x8023321C: slti        $v0, $a2, 0x4
    ctx->r2 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
    // 0x80233220: bne         $v0, $zero, L_8023320C
    if (ctx->r2 != 0) {
        // 0x80233224: addiu       $a0, $a0, 0x2
        ctx->r4 = ADD32(ctx->r4, 0X2);
            goto L_8023320C;
    }
    // 0x80233224: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x80233228: addiu       $v1, $v1, -0x10
    ctx->r3 = ADD32(ctx->r3, -0X10);
    // 0x8023322C: slt         $v0, $t1, $v1
    ctx->r2 = SIGNED(ctx->r9) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80233230: bne         $v0, $zero, L_802331FC
    if (ctx->r2 != 0) {
        // 0x80233234: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_802331FC;
    }
    // 0x80233234: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_80233238:
    // 0x80233238: sw          $t2, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r10;
    // 0x8023323C: j           L_80233254
    // 0x80233240: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
        goto L_80233254;
    // 0x80233240: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
L_80233244:
    // 0x80233244: slti        $v0, $a3, 0x3
    ctx->r2 = SIGNED(ctx->r7) < 0X3 ? 1 : 0;
    // 0x80233248: bne         $v0, $zero, L_802331D4
    if (ctx->r2 != 0) {
        // 0x8023324C: addiu       $t0, $t0, 0x10
        ctx->r8 = ADD32(ctx->r8, 0X10);
            goto L_802331D4;
    }
    // 0x8023324C: addiu       $t0, $t0, 0x10
    ctx->r8 = ADD32(ctx->r8, 0X10);
    // 0x80233250: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80233254:
    // 0x80233254: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80233258: sb          $v0, 0x7700($at)
    MEM_B(0X7700, ctx->r1) = ctx->r2;
    // 0x8023325C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80233260: bne         $v0, $zero, L_80233308
    if (ctx->r2 != 0) {
        // 0x80233264: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80233308;
    }
    // 0x80233264: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80233268: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8023326C: lw          $v1, -0x3AC8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3AC8);
    // 0x80233270: bne         $v1, $v0, L_802332C0
    if (ctx->r3 != ctx->r2) {
        // 0x80233274: sll         $v0, $v1, 3
        ctx->r2 = S32(ctx->r3 << 3);
            goto L_802332C0;
    }
    // 0x80233274: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x80233278: lw          $v0, 0x4C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4C);
    // 0x8023327C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80233280: lw          $a0, 0x6CFC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6CFC);
    // 0x80233284: addiu       $v1, $zero, -0x4
    ctx->r3 = ADD32(0, -0X4);
    // 0x80233288: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8023328C: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x80233290: lui         $v0, 0x8888
    ctx->r2 = S32(0X8888 << 16);
    // 0x80233294: ori         $v0, $v0, 0x8889
    ctx->r2 = ctx->r2 | 0X8889;
    // 0x80233298: multu       $a0, $v0
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023329C: mfhi        $t3
    ctx->r11 = hi;
    // 0x802332A0: srl         $a0, $t3, 3
    ctx->r4 = S32(U32(ctx->r11) >> 3);
    // 0x802332A4: nop

    // 0x802332A8: mult        $a0, $a0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802332AC: mflo        $a0
    ctx->r4 = lo;
    // 0x802332B0: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802332B4: lw          $v0, 0x6CF8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6CF8);
    // 0x802332B8: j           L_802332CC
    // 0x802332BC: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
        goto L_802332CC;
    // 0x802332BC: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
L_802332C0:
    // 0x802332C0: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802332C4: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x802332C8: lw          $a0, 0x6CE0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6CE0);
L_802332CC:
    // 0x802332CC: jal         0x8006982C
    // 0x802332D0: nop

    func_8006982C_44C2C(rdram, ctx);
        goto after_23;
    // 0x802332D0: nop

    after_23:
    // 0x802332D4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802332D8: jal         0x800616FC
    // 0x802332DC: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_24;
    // 0x802332DC: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    after_24:
    // 0x802332E0: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    // 0x802332E4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802332E8: jal         0x8002A2F8
    // 0x802332EC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_25;
    // 0x802332EC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_25:
    // 0x802332F0: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x802332F4: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x802332F8: jal         0x8002A33C
    // 0x802332FC: addiu       $a0, $zero, 0x16E
    ctx->r4 = ADD32(0, 0X16E);
    func_8002A33C_573C(rdram, ctx);
        goto after_26;
    // 0x802332FC: addiu       $a0, $zero, 0x16E
    ctx->r4 = ADD32(0, 0X16E);
    after_26:
    // 0x80233300: j           L_80233390
    // 0x80233304: nop

        goto L_80233390;
    // 0x80233304: nop

L_80233308:
    // 0x80233308: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8023330C: lw          $v1, -0x3AC8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3AC8);
    // 0x80233310: bne         $v1, $v0, L_80233360
    if (ctx->r3 != ctx->r2) {
        // 0x80233314: sll         $v0, $v1, 3
        ctx->r2 = S32(ctx->r3 << 3);
            goto L_80233360;
    }
    // 0x80233314: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x80233318: lw          $v0, 0x4C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4C);
    // 0x8023331C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80233320: lw          $a0, 0x6CFC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6CFC);
    // 0x80233324: addiu       $v1, $zero, -0x4
    ctx->r3 = ADD32(0, -0X4);
    // 0x80233328: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8023332C: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x80233330: lui         $v0, 0x8888
    ctx->r2 = S32(0X8888 << 16);
    // 0x80233334: ori         $v0, $v0, 0x8889
    ctx->r2 = ctx->r2 | 0X8889;
    // 0x80233338: multu       $a0, $v0
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023333C: mfhi        $t3
    ctx->r11 = hi;
    // 0x80233340: srl         $a0, $t3, 3
    ctx->r4 = S32(U32(ctx->r11) >> 3);
    // 0x80233344: nop

    // 0x80233348: mult        $a0, $a0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023334C: mflo        $a0
    ctx->r4 = lo;
    // 0x80233350: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80233354: lw          $v0, 0x6CF8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6CF8);
    // 0x80233358: j           L_8023336C
    // 0x8023335C: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
        goto L_8023336C;
    // 0x8023335C: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
L_80233360:
    // 0x80233360: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80233364: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80233368: lw          $a0, 0x6CE0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6CE0);
L_8023336C:
    // 0x8023336C: jal         0x8006982C
    // 0x80233370: nop

    func_8006982C_44C2C(rdram, ctx);
        goto after_27;
    // 0x80233370: nop

    after_27:
    // 0x80233374: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80233378: jal         0x800616FC
    // 0x8023337C: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_28;
    // 0x8023337C: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    after_28:
    // 0x80233380: addiu       $a0, $zero, 0x1B
    ctx->r4 = ADD32(0, 0X1B);
    // 0x80233384: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80233388: jal         0x8002A2F8
    // 0x8023338C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_29;
    // 0x8023338C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_29:
L_80233390:
    // 0x80233390: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x80233394: addiu       $a0, $a0, -0x3AC8
    ctx->r4 = ADD32(ctx->r4, -0X3AC8);
    // 0x80233398: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x8023339C: sltiu       $v0, $v1, 0x3
    ctx->r2 = ctx->r3 < 0X3 ? 1 : 0;
    // 0x802333A0: beq         $v0, $zero, L_80233510
    if (ctx->r2 == 0) {
        // 0x802333A4: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_80233510;
    }
    // 0x802333A4: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x802333A8: j           L_80233510
    // 0x802333AC: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
        goto L_80233510;
    // 0x802333AC: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
L_802333B0:
    // 0x802333B0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802333B4: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x802333B8: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x802333BC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802333C0: bne         $v0, $zero, L_80233530
    if (ctx->r2 != 0) {
        // 0x802333C4: nop
    
            goto L_80233530;
    }
    // 0x802333C4: nop

    // 0x802333C8: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802333CC: lbu         $a0, 0x7700($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X7700);
    // 0x802333D0: sltiu       $v0, $a0, 0x3
    ctx->r2 = ctx->r4 < 0X3 ? 1 : 0;
    // 0x802333D4: beql        $v0, $zero, L_802333F0
    if (ctx->r2 == 0) {
        // 0x802333D8: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_802333F0;
    }
    goto skip_1;
    // 0x802333D8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    skip_1:
    // 0x802333DC: jal         0x80069850
    // 0x802333E0: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    func_80069850_44C50(rdram, ctx);
        goto after_30;
    // 0x802333E0: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    after_30:
    // 0x802333E4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802333E8: j           L_802333F4
    // 0x802333EC: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
        goto L_802333F4;
    // 0x802333EC: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
L_802333F0:
    // 0x802333F0: addiu       $a1, $zero, 0x1D
    ctx->r5 = ADD32(0, 0X1D);
L_802333F4:
    // 0x802333F4: jal         0x800616FC
    // 0x802333F8: nop

    func_800616FC_3CAFC(rdram, ctx);
        goto after_31;
    // 0x802333F8: nop

    after_31:
    // 0x802333FC: j           L_80233510
    // 0x80233400: nop

        goto L_80233510;
    // 0x80233400: nop

L_80233404:
    // 0x80233404: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80233408: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8023340C: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80233410: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80233414: bne         $v0, $zero, L_80233530
    if (ctx->r2 != 0) {
        // 0x80233418: nop
    
            goto L_80233530;
    }
    // 0x80233418: nop

    // 0x8023341C: jal         0x8002A398
    // 0x80233420: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_8002A398_5798(rdram, ctx);
        goto after_32;
    // 0x80233420: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_32:
    // 0x80233424: bne         $v0, $zero, L_80233530
    if (ctx->r2 != 0) {
        // 0x80233428: nop
    
            goto L_80233530;
    }
    // 0x80233428: nop

    // 0x8023342C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80233430: lbu         $v0, 0x3FF3($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FF3);
    // 0x80233434: beq         $v0, $zero, L_80233508
    if (ctx->r2 == 0) {
        // 0x80233438: addiu       $a0, $zero, 0x9
        ctx->r4 = ADD32(0, 0X9);
            goto L_80233508;
    }
    // 0x80233438: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x8023343C: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x80233440: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
    // 0x80233444: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80233448: j           L_80233530
    // 0x8023344C: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
        goto L_80233530;
    // 0x8023344C: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_80233450:
    // 0x80233450: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80233454: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80233458: bne         $v0, $zero, L_80233530
    if (ctx->r2 != 0) {
        // 0x8023345C: addiu       $a0, $zero, 0x18
        ctx->r4 = ADD32(0, 0X18);
            goto L_80233530;
    }
    // 0x8023345C: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    // 0x80233460: jal         0x8004CB2C
    // 0x80233464: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_33;
    // 0x80233464: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_33:
    // 0x80233468: j           L_80233510
    // 0x8023346C: nop

        goto L_80233510;
    // 0x8023346C: nop

L_80233470:
    // 0x80233470: jal         0x80232B60
    // 0x80233474: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80232B60_ovl12(rdram, ctx);
        goto after_34;
    // 0x80233474: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_34:
    // 0x80233478: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8023347C: lbu         $v1, 0x4A6D($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X4A6D);
    // 0x80233480: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80233484: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80233488: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023348C: sb          $v0, 0x49B8($at)
    MEM_B(0X49B8, ctx->r1) = ctx->r2;
    // 0x80233490: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80233494: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80233498: sb          $v0, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = ctx->r2;
    // 0x8023349C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802334A0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802334A4: sh          $v0, 0x4DEA($at)
    MEM_H(0X4DEA, ctx->r1) = ctx->r2;
    // 0x802334A8: addiu       $v0, $zero, 0x300
    ctx->r2 = ADD32(0, 0X300);
    // 0x802334AC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802334B0: sh          $v0, 0x4DEC($at)
    MEM_H(0X4DEC, ctx->r1) = ctx->r2;
    // 0x802334B4: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x802334B8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802334BC: sw          $v0, 0x4DDC($at)
    MEM_W(0X4DDC, ctx->r1) = ctx->r2;
    // 0x802334C0: lui         $v0, 0x300
    ctx->r2 = S32(0X300 << 16);
    // 0x802334C4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802334C8: sh          $zero, 0x4DE8($at)
    MEM_H(0X4DE8, ctx->r1) = 0;
    // 0x802334CC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802334D0: sw          $zero, 0x4DD8($at)
    MEM_W(0X4DD8, ctx->r1) = 0;
    // 0x802334D4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802334D8: sw          $v0, 0x4DE0($at)
    MEM_W(0X4DE0, ctx->r1) = ctx->r2;
    // 0x802334DC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802334E0: sh          $zero, 0x4DF0($at)
    MEM_H(0X4DF0, ctx->r1) = 0;
    // 0x802334E4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802334E8: sh          $zero, 0x4DF2($at)
    MEM_H(0X4DF2, ctx->r1) = 0;
    // 0x802334EC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802334F0: sh          $zero, 0x4DF4($at)
    MEM_H(0X4DF4, ctx->r1) = 0;
    // 0x802334F4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802334F8: sb          $zero, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = 0;
    // 0x802334FC: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
    // 0x80233500: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80233504: sb          $v1, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r3;
L_80233508:
    // 0x80233508: jal         0x80036E48
    // 0x8023350C: nop

    func_80036E48_12248(rdram, ctx);
        goto after_35;
    // 0x8023350C: nop

    after_35:
L_80233510:
    // 0x80233510: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x80233514: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80233518: j           L_80233530
    // 0x8023351C: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
        goto L_80233530;
    // 0x8023351C: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_80233520:
    // 0x80233520: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80233524: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80233528: beql        $v0, $zero, L_80233530
    if (ctx->r2 == 0) {
        // 0x8023352C: sb          $zero, 0x9($s1)
        MEM_B(0X9, ctx->r17) = 0;
            goto L_80233530;
    }
    goto skip_2;
    // 0x8023352C: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
    skip_2:
L_80233530:
    // 0x80233530: lw          $a0, 0x4C($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4C);
    // 0x80233534: jal         0x80069838
    // 0x80233538: nop

    func_80069838_44C38(rdram, ctx);
        goto after_36;
    // 0x80233538: nop

    after_36:
    // 0x8023353C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80233540: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80233544: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80233548: jr          $ra
    // 0x8023354C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023354C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022FDE0_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FDE0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022FDE4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022FDE8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022FDEC: addiu       $a0, $s1, 0x38
    ctx->r4 = ADD32(ctx->r17, 0X38);
    // 0x8022FDF0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022FDF4: jal         0x8003E6BC
    // 0x8022FDF8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_0;
    // 0x8022FDF8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x8022FDFC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022FE00: addiu       $a0, $a0, 0x49C4
    ctx->r4 = ADD32(ctx->r4, 0X49C4);
    // 0x8022FE04: jal         0x8003E6BC
    // 0x8022FE08: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_1;
    // 0x8022FE08: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_1:
    // 0x8022FE0C: bne         $s0, $v0, L_8022FE34
    if (ctx->r16 != ctx->r2) {
        // 0x8022FE10: nop
    
            goto L_8022FE34;
    }
    // 0x8022FE10: nop

    // 0x8022FE14: jal         0x8006033C
    // 0x8022FE18: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x8022FE18: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    after_2:
    // 0x8022FE1C: beq         $v0, $zero, L_8022FE34
    if (ctx->r2 == 0) {
        // 0x8022FE20: addiu       $v1, $zero, 0x18
        ctx->r3 = ADD32(0, 0X18);
            goto L_8022FE34;
    }
    // 0x8022FE20: addiu       $v1, $zero, 0x18
    ctx->r3 = ADD32(0, 0X18);
    // 0x8022FE24: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x8022FE28: sb          $v1, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r3;
    // 0x8022FE2C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022FE30: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_8022FE34:
    // 0x8022FE34: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022FE38: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022FE3C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022FE40: jr          $ra
    // 0x8022FE44: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022FE44: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802302AC_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802302AC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802302B0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802302B4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802302B8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802302BC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802302C0: lbu         $a0, 0xA($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA);
    // 0x802302C4: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x802302C8: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x802302CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802302D0: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x802302D4: beq         $v1, $v0, L_80230320
    if (ctx->r3 == ctx->r2) {
        // 0x802302D8: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80230320;
    }
    // 0x802302D8: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x802302DC: beql        $v0, $zero, L_802302F4
    if (ctx->r2 == 0) {
        // 0x802302E0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802302F4;
    }
    goto skip_0;
    // 0x802302E0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x802302E4: beq         $v1, $zero, L_8023030C
    if (ctx->r3 == 0) {
        // 0x802302E8: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_8023030C;
    }
    // 0x802302E8: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x802302EC: j           L_802303A4
    // 0x802302F0: nop

        goto L_802303A4;
    // 0x802302F0: nop

L_802302F4:
    // 0x802302F4: beq         $v1, $v0, L_80230350
    if (ctx->r3 == ctx->r2) {
        // 0x802302F8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80230350;
    }
    // 0x802302F8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802302FC: beq         $v1, $v0, L_80230370
    if (ctx->r3 == ctx->r2) {
        // 0x80230300: nop
    
            goto L_80230370;
    }
    // 0x80230300: nop

    // 0x80230304: j           L_802303A4
    // 0x80230308: nop

        goto L_802303A4;
    // 0x80230308: nop

L_8023030C:
    // 0x8023030C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80230310: sb          $v0, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = ctx->r2;
    // 0x80230314: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80230318: j           L_80230340
    // 0x8023031C: sb          $zero, 0x49BA($at)
    MEM_B(0X49BA, ctx->r1) = 0;
        goto L_80230340;
    // 0x8023031C: sb          $zero, 0x49BA($at)
    MEM_B(0X49BA, ctx->r1) = 0;
L_80230320:
    // 0x80230320: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x80230324: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80230328: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8023032C: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80230330: lw          $a1, 0x27EC($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X27EC);
    // 0x80230334: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80230338: jal         0x80061510
    // 0x8023033C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_80061510_3C910(rdram, ctx);
        goto after_0;
    // 0x8023033C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_0:
L_80230340:
    // 0x80230340: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80230344: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230348: j           L_802303A4
    // 0x8023034C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_802303A4;
    // 0x8023034C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80230350:
    // 0x80230350: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80230354: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80230358: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8023035C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80230360: bne         $v0, $zero, L_802303A4
    if (ctx->r2 != 0) {
        // 0x80230364: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_802303A4;
    }
    // 0x80230364: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x80230368: j           L_802303A4
    // 0x8023036C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_802303A4;
    // 0x8023036C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80230370:
    // 0x80230370: jal         0x8003516C
    // 0x80230374: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_1;
    // 0x80230374: nop

    after_1:
    // 0x80230378: bne         $v0, $zero, L_802303A4
    if (ctx->r2 != 0) {
        // 0x8023037C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802303A4;
    }
    // 0x8023037C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80230380: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80230384: sw          $zero, 0x4B34($at)
    MEM_W(0X4B34, ctx->r1) = 0;
    // 0x80230388: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023038C: sb          $zero, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = 0;
    // 0x80230390: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80230394: sb          $zero, 0x49BA($at)
    MEM_B(0X49BA, ctx->r1) = 0;
    // 0x80230398: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8023039C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x802303A0: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_802303A4:
    // 0x802303A4: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x802303A8: addiu       $v0, $v0, -0xB
    ctx->r2 = ADD32(ctx->r2, -0XB);
    // 0x802303AC: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x802303B0: beq         $v0, $zero, L_802303D4
    if (ctx->r2 == 0) {
        // 0x802303B4: nop
    
            goto L_802303D4;
    }
    // 0x802303B4: nop

    // 0x802303B8: jal         0x80061724
    // 0x802303BC: nop

    func_80061724_3CB24(rdram, ctx);
        goto after_2;
    // 0x802303BC: nop

    after_2:
    // 0x802303C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802303C4: sw          $zero, 0x184($s1)
    MEM_W(0X184, ctx->r17) = 0;
    // 0x802303C8: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x802303CC: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x802303D0: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_802303D4:
    // 0x802303D4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802303D8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802303DC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802303E0: jr          $ra
    // 0x802303E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802303E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80229484_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229484: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80229488: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022948C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229490: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80229494: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80229498: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022949C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802294A0: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x802294A4: lbu         $v1, 0xAC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XAC);
    // 0x802294A8: addiu       $a1, $zero, 0xFA
    ctx->r5 = ADD32(0, 0XFA);
    // 0x802294AC: addiu       $a2, $zero, 0xC8
    ctx->r6 = ADD32(0, 0XC8);
    // 0x802294B0: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
    // 0x802294B4: jal         0x80229DE4
    // 0x802294B8: sb          $v1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r3;
    func_80229DE4_ovl12(rdram, ctx);
        goto after_0;
    // 0x802294B8: sb          $v1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r3;
    after_0:
    // 0x802294BC: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x802294C0: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x802294C4: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x802294C8: beq         $v0, $zero, L_8022955C
    if (ctx->r2 == 0) {
        // 0x802294CC: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_8022955C;
    }
    // 0x802294CC: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x802294D0: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x802294D4: jal         0x80229D48
    // 0x802294D8: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    func_80229D48_ovl12(rdram, ctx);
        goto after_1;
    // 0x802294D8: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    after_1:
    // 0x802294DC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802294E0: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802294E4: addiu       $s2, $s2, 0x14
    ctx->r18 = ADD32(ctx->r18, 0X14);
    // 0x802294E8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802294EC: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x802294F0: jal         0x8004F820
    // 0x802294F4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x802294F4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_2:
    // 0x802294F8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802294FC: bgez        $v0, L_80229528
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80229500: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80229528;
    }
    // 0x80229500: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80229504: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80229508: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022950C: jal         0x8004F820
    // 0x80229510: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x80229510: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_3:
    // 0x80229514: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229518: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022951C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80229520: j           L_80229540
    // 0x80229524: srl         $v1, $v0, 3
    ctx->r3 = S32(U32(ctx->r2) >> 3);
        goto L_80229540;
    // 0x80229524: srl         $v1, $v0, 3
    ctx->r3 = S32(U32(ctx->r2) >> 3);
L_80229528:
    // 0x80229528: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022952C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80229530: jal         0x8004F820
    // 0x80229534: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_4;
    // 0x80229534: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_4:
    // 0x80229538: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022953C: sra         $v1, $v0, 19
    ctx->r3 = S32(SIGNED(ctx->r2) >> 19);
L_80229540:
    // 0x80229540: lbu         $v0, 0x3($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X3);
    // 0x80229544: sh          $v1, 0x6($s3)
    MEM_H(0X6, ctx->r19) = ctx->r3;
    // 0x80229548: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022954C: sb          $v0, 0x3($s3)
    MEM_B(0X3, ctx->r19) = ctx->r2;
    // 0x80229550: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x80229554: j           L_802295A4
    // 0x80229558: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
        goto L_802295A4;
    // 0x80229558: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_8022955C:
    // 0x8022955C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80229560: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80229564: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x80229568: jal         0x8004F820
    // 0x8022956C: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_8004F820_2AC20(rdram, ctx);
        goto after_5;
    // 0x8022956C: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_5:
    // 0x80229570: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229574: slt         $v0, $zero, $v0
    ctx->r2 = SIGNED(0) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80229578: beq         $v0, $zero, L_80229588
    if (ctx->r2 == 0) {
        // 0x8022957C: sh          $v0, 0x34E($s0)
        MEM_H(0X34E, ctx->r16) = ctx->r2;
            goto L_80229588;
    }
    // 0x8022957C: sh          $v0, 0x34E($s0)
    MEM_H(0X34E, ctx->r16) = ctx->r2;
    // 0x80229580: j           L_8022958C
    // 0x80229584: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_8022958C;
    // 0x80229584: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80229588:
    // 0x80229588: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_8022958C:
    // 0x8022958C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80229590: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80229594: sb          $v0, 0x3($s3)
    MEM_B(0X3, ctx->r19) = ctx->r2;
    // 0x80229598: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x8022959C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802295A0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_802295A4:
    // 0x802295A4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802295A8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802295AC: jal         0x800610AC
    // 0x802295B0: andi        $a3, $v0, 0xFF
    ctx->r7 = ctx->r2 & 0XFF;
    func_800610AC_3C4AC(rdram, ctx);
        goto after_6;
    // 0x802295B0: andi        $a3, $v0, 0xFF
    ctx->r7 = ctx->r2 & 0XFF;
    after_6:
    // 0x802295B4: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x802295B8: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x802295BC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802295C0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802295C4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802295C8: jr          $ra
    // 0x802295CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802295CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802336C0_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802336C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802336C4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802336C8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802336CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802336D0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802336D4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802336D8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802336DC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802336E0: lw          $v0, 0x6E60($at)
    ctx->r2 = MEM_W(ctx->r1, 0X6E60);
    // 0x802336E4: jalr        $v0
    // 0x802336E8: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802336E8: nop

    after_0:
    // 0x802336EC: sw          $zero, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = 0;
    // 0x802336F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802336F4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802336F8: jr          $ra
    // 0x802336FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802336FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228F0C_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228F0C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80228F10: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228F14: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228F18: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80228F1C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80228F20: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80228F24: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80228F28: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x80228F2C: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x80228F30: bne         $v0, $zero, L_80228F8C
    if (ctx->r2 != 0) {
        // 0x80228F34: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_80228F8C;
    }
    // 0x80228F34: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x80228F38: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80228F3C: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x80228F40: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80228F44: jal         0x8004F820
    // 0x80228F48: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80228F48: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_0:
    // 0x80228F4C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80228F50: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80228F54: lw          $a0, 0x3FF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3FF0);
    // 0x80228F58: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80228F5C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80228F60: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x80228F64: and         $a0, $a0, $v0
    ctx->r4 = ctx->r4 & ctx->r2;
    // 0x80228F68: beq         $a0, $zero, L_80228F8C
    if (ctx->r4 == 0) {
        // 0x80228F6C: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_80228F8C;
    }
    // 0x80228F6C: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80228F70: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80228F74: jal         0x80229CB0
    // 0x80228F78: nop

    func_80229CB0_ovl12(rdram, ctx);
        goto after_1;
    // 0x80228F78: nop

    after_1:
    // 0x80228F7C: lbu         $v1, 0x34B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34B);
    // 0x80228F80: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80228F84: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80228F88: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
L_80228F8C:
    // 0x80228F8C: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80228F90: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x80228F94: bne         $v0, $zero, L_80228FB8
    if (ctx->r2 != 0) {
        // 0x80228F98: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_80228FB8;
    }
    // 0x80228F98: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x80228F9C: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80228FA0: sb          $v1, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r3;
    // 0x80228FA4: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x80228FA8: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x80228FAC: jal         0x80229D48
    // 0x80228FB0: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_80229D48_ovl12(rdram, ctx);
        goto after_2;
    // 0x80228FB0: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_2:
    // 0x80228FB4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80228FB8:
    // 0x80228FB8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80228FBC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80228FC0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228FC4: jr          $ra
    // 0x80228FC8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80228FC8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80233700_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233700: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80233704: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80233708: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023370C: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80233710: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80233714: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80233718: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    // 0x8023371C: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x80233720: jal         0x8004D5D4
    // 0x80233724: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80233724: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x80233728: addiu       $s1, $s0, 0x18
    ctx->r17 = ADD32(ctx->r16, 0X18);
    // 0x8023372C: jal         0x8002C654
    // 0x80233730: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_1;
    // 0x80233730: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x80233734: lb          $a0, 0xF($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XF);
    // 0x80233738: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023373C: jal         0x800319B4
    // 0x80233740: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    func_800319B4_CDB4(rdram, ctx);
        goto after_2;
    // 0x80233740: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    after_2:
    // 0x80233744: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80233748: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8023374C: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x80233750: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
    // 0x80233754: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80233758: addiu       $v0, $v0, 0x6E68
    ctx->r2 = ADD32(ctx->r2, 0X6E68);
    // 0x8023375C: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x80233760: sw          $zero, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = 0;
    // 0x80233764: sw          $zero, 0x50($s0)
    MEM_W(0X50, ctx->r16) = 0;
    // 0x80233768: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8023376C: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    // 0x80233770: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80233774: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80233778: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8023377C: jr          $ra
    // 0x80233780: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80233780: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_802296A0_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802296A0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x802296A4: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x802296A8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x802296AC: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x802296B0: addiu       $s1, $sp, 0x20
    ctx->r17 = ADD32(ctx->r29, 0X20);
    // 0x802296B4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802296B8: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x802296BC: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x802296C0: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802296C4: lhu         $v0, 0x56($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X56);
    // 0x802296C8: lbu         $v1, 0xAC($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0XAC);
    // 0x802296CC: addiu       $s3, $s2, 0x14
    ctx->r19 = ADD32(ctx->r18, 0X14);
    // 0x802296D0: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x802296D4: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x802296D8: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x802296DC: sh          $v0, 0x34C($s2)
    MEM_H(0X34C, ctx->r18) = ctx->r2;
    // 0x802296E0: sb          $v1, 0x34A($s2)
    MEM_B(0X34A, ctx->r18) = ctx->r3;
    // 0x802296E4: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x802296E8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802296EC: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x802296F0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802296F4: sb          $v0, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = ctx->r2;
    // 0x802296F8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802296FC: sb          $zero, 0x49BA($at)
    MEM_B(0X49BA, ctx->r1) = 0;
    // 0x80229700: andi        $v1, $v1, 0xFD
    ctx->r3 = ctx->r3 & 0XFD;
    // 0x80229704: jal         0x8009A3B4
    // 0x80229708: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80229708: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x8022970C: lh          $v0, 0x14($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X14);
    // 0x80229710: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80229714: lh          $v0, 0x16($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X16);
    // 0x80229718: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022971C: addiu       $v0, $v0, -0x30
    ctx->r2 = ADD32(ctx->r2, -0X30);
    // 0x80229720: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80229724: lh          $v0, 0x18($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X18);
    // 0x80229728: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    // 0x8022972C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80229730: jal         0x8004EC38
    // 0x80229734: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_8004EC38_2A038(rdram, ctx);
        goto after_1;
    // 0x80229734: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_1:
    // 0x80229738: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8022973C: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x80229740: lw          $a3, 0x435C($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X435C);
    // 0x80229744: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x80229748: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x8022974C: jal         0x80034FCC
    // 0x80229750: addiu       $a3, $a3, 0x6C
    ctx->r7 = ADD32(ctx->r7, 0X6C);
    func_80034FCC_103CC(rdram, ctx);
        goto after_2;
    // 0x80229750: addiu       $a3, $a3, 0x6C
    ctx->r7 = ADD32(ctx->r7, 0X6C);
    after_2:
    // 0x80229754: lbu         $a0, 0x2($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X2);
    // 0x80229758: jal         0x80229D48
    // 0x8022975C: addiu       $s1, $s2, 0x348
    ctx->r17 = ADD32(ctx->r18, 0X348);
    func_80229D48_ovl12(rdram, ctx);
        goto after_3;
    // 0x8022975C: addiu       $s1, $s2, 0x348
    ctx->r17 = ADD32(ctx->r18, 0X348);
    after_3:
    // 0x80229760: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80229764: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x80229768: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022976C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x80229770: jal         0x8004F820
    // 0x80229774: sb          $v0, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_4;
    // 0x80229774: sb          $v0, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = ctx->r2;
    after_4:
    // 0x80229778: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022977C: bgez        $v0, L_802297A8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80229780: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_802297A8;
    }
    // 0x80229780: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80229784: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x80229788: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022978C: jal         0x8004F820
    // 0x80229790: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_5;
    // 0x80229790: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_5:
    // 0x80229794: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229798: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022979C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x802297A0: j           L_802297C0
    // 0x802297A4: srl         $v1, $v0, 3
    ctx->r3 = S32(U32(ctx->r2) >> 3);
        goto L_802297C0;
    // 0x802297A4: srl         $v1, $v0, 3
    ctx->r3 = S32(U32(ctx->r2) >> 3);
L_802297A8:
    // 0x802297A8: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x802297AC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x802297B0: jal         0x8004F820
    // 0x802297B4: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_6;
    // 0x802297B4: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_6:
    // 0x802297B8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802297BC: sra         $v1, $v0, 19
    ctx->r3 = S32(SIGNED(ctx->r2) >> 19);
L_802297C0:
    // 0x802297C0: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x802297C4: sh          $v1, 0x6($s1)
    MEM_H(0X6, ctx->r17) = ctx->r3;
    // 0x802297C8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802297CC: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    // 0x802297D0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802297D4: sb          $v0, 0x11B($s2)
    MEM_B(0X11B, ctx->r18) = ctx->r2;
    // 0x802297D8: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x802297DC: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x802297E0: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x802297E4: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x802297E8: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802297EC: jr          $ra
    // 0x802297F0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x802297F0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8022CC70_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CC70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022CC74: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022CC78: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022CC7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022CC80: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8022CC84: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022CC88: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022CC8C: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8022CC90: sh          $zero, 0x56($s0)
    MEM_H(0X56, ctx->r16) = 0;
    // 0x8022CC94: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8022CC98: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x8022CC9C: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022CCA0: jal         0x8004D5D4
    // 0x8022CCA4: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022CCA4: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x8022CCA8: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x8022CCAC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022CCB0: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8022CCB4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022CCB8: lhu         $v1, 0x6698($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X6698);
    // 0x8022CCBC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CCC0: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022CCC4: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022CCC8: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022CCCC: addiu       $v0, $v0, 0x668C
    ctx->r2 = ADD32(ctx->r2, 0X668C);
    // 0x8022CCD0: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x8022CCD4: sh          $v1, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r3;
    // 0x8022CCD8: sh          $v1, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r3;
    // 0x8022CCDC: jal         0x8003E934
    // 0x8022CCE0: sh          $v1, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r3;
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x8022CCE0: sh          $v1, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r3;
    after_1:
    // 0x8022CCE4: addiu       $a0, $s0, 0x36C
    ctx->r4 = ADD32(ctx->r16, 0X36C);
    // 0x8022CCE8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022CCEC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022CCF0: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022CCF4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022CCF8: jal         0x8009A3B4
    // 0x8022CCFC: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022CCFC: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    after_2:
    // 0x8022CD00: lbu         $a0, 0x3($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X3);
    // 0x8022CD04: lui         $v1, 0x7FFF
    ctx->r3 = S32(0X7FFF << 16);
    // 0x8022CD08: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x8022CD0C: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022CD10: addiu       $v0, $v0, 0x6680
    ctx->r2 = ADD32(ctx->r2, 0X6680);
    // 0x8022CD14: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x8022CD18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CD1C: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x8022CD20: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
    // 0x8022CD24: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x8022CD28: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x8022CD2C: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8022CD30: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8022CD34: sb          $zero, 0x74($s0)
    MEM_B(0X74, ctx->r16) = 0;
    // 0x8022CD38: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x8022CD3C: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    // 0x8022CD40: sb          $zero, 0x8($s0)
    MEM_B(0X8, ctx->r16) = 0;
    // 0x8022CD44: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022CD48: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022CD4C: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x8022CD50: sh          $zero, 0x348($s0)
    MEM_H(0X348, ctx->r16) = 0;
    // 0x8022CD54: sw          $zero, 0x354($s0)
    MEM_W(0X354, ctx->r16) = 0;
    // 0x8022CD58: sw          $zero, 0x358($s0)
    MEM_W(0X358, ctx->r16) = 0;
    // 0x8022CD5C: beq         $a0, $v0, L_8022CD94
    if (ctx->r4 == ctx->r2) {
        // 0x8022CD60: sw          $v1, 0x350($s0)
        MEM_W(0X350, ctx->r16) = ctx->r3;
            goto L_8022CD94;
    }
    // 0x8022CD60: sw          $v1, 0x350($s0)
    MEM_W(0X350, ctx->r16) = ctx->r3;
    // 0x8022CD64: slti        $v0, $a0, 0x2
    ctx->r2 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    // 0x8022CD68: bnel        $v0, $zero, L_8022CD7C
    if (ctx->r2 != 0) {
        // 0x8022CD6C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022CD7C;
    }
    goto skip_0;
    // 0x8022CD6C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    skip_0:
    // 0x8022CD70: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022CD74: beq         $a0, $v0, L_8022CDB0
    if (ctx->r4 == ctx->r2) {
        // 0x8022CD78: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022CDB0;
    }
    // 0x8022CD78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022CD7C:
    // 0x8022CD7C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022CD80: jal         0x80050294
    // 0x8022CD84: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x8022CD84: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x8022CD88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CD8C: j           L_8022CDD0
    // 0x8022CD90: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_8022CDD0;
    // 0x8022CD90: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022CD94:
    // 0x8022CD94: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CD98: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8022CD9C: jal         0x80050294
    // 0x8022CDA0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_4;
    // 0x8022CDA0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x8022CDA4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022CDA8: j           L_8022CDD0
    // 0x8022CDAC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_8022CDD0;
    // 0x8022CDAC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022CDB0:
    // 0x8022CDB0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022CDB4: jal         0x80050294
    // 0x8022CDB8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x8022CDB8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x8022CDBC: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022CDC0: addiu       $v1, $zero, 0x7
    ctx->r3 = ADD32(0, 0X7);
    // 0x8022CDC4: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    // 0x8022CDC8: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8022CDCC: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_8022CDD0:
    // 0x8022CDD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022CDD4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022CDD8: jr          $ra
    // 0x8022CDDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022CDDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225B20_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225B20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225B24: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225B28: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225B2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225B30: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225B34: bne         $v0, $zero, L_80225B50
    if (ctx->r2 != 0) {
        // 0x80225B38: nop
    
            goto L_80225B50;
    }
    // 0x80225B38: nop

    // 0x80225B3C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225B40: jal         0x800607C4
    // 0x80225B44: addiu       $a0, $a0, 0x5A44
    ctx->r4 = ADD32(ctx->r4, 0X5A44);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x80225B44: addiu       $a0, $a0, 0x5A44
    ctx->r4 = ADD32(ctx->r4, 0X5A44);
    after_0:
    // 0x80225B48: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225B4C: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225B50:
    // 0x80225B50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225B54: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225B58: jr          $ra
    // 0x80225B5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225B5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227F20_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227F20: lhu         $v0, 0x350($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X350);
    // 0x80227F24: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80227F28: sh          $v0, 0x350($a0)
    MEM_H(0X350, ctx->r4) = ctx->r2;
    // 0x80227F2C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227F30: bne         $v0, $zero, L_80227F3C
    if (ctx->r2 != 0) {
        // 0x80227F34: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80227F3C;
    }
    // 0x80227F34: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227F38: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_80227F3C:
    // 0x80227F3C: jr          $ra
    // 0x80227F40: nop

    TRACE_RETURN()
    return;
    // 0x80227F40: nop

;}
RECOMP_FUNC void func_80227B4C_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227B4C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227B50: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227B54: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80227B58: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80227B5C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227B60: lbu         $s0, 0xE($s1)
    ctx->r16 = MEM_BU(ctx->r17, 0XE);
    // 0x80227B64: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    // 0x80227B68: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80227B6C: addiu       $v0, $v0, 0x639C
    ctx->r2 = ADD32(ctx->r2, 0X639C);
    // 0x80227B70: andi        $s0, $s0, 0x3
    ctx->r16 = ctx->r16 & 0X3;
    // 0x80227B74: sll         $s0, $s0, 4
    ctx->r16 = S32(ctx->r16 << 4);
    // 0x80227B78: jal         0x80229D48
    // 0x80227B7C: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    func_80229D48_ovl12(rdram, ctx);
        goto after_0;
    // 0x80227B7C: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    after_0:
    // 0x80227B80: jal         0x800A3450
    // 0x80227B84: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x80227B84: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    after_1:
    // 0x80227B88: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80227B8C: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x80227B90: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80227B94: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80227B98: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227B9C: sh          $v1, 0x350($s1)
    MEM_H(0X350, ctx->r17) = ctx->r3;
    // 0x80227BA0: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x80227BA4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80227BA8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227BAC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227BB0: jr          $ra
    // 0x80227BB4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80227BB4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80228084_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228084: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80228088: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022808C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228090: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80228094: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80228098: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x8022809C: bgez        $v0, L_802280C0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802280A0: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_802280C0;
    }
    // 0x802280A0: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x802280A4: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x802280A8: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x802280AC: beq         $a0, $v0, L_802280C0
    if (ctx->r4 == ctx->r2) {
        // 0x802280B0: nop
    
            goto L_802280C0;
    }
    // 0x802280B0: nop

    // 0x802280B4: jal         0x80229D48
    // 0x802280B8: nop

    func_80229D48_ovl12(rdram, ctx);
        goto after_0;
    // 0x802280B8: nop

    after_0:
    // 0x802280BC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_802280C0:
    // 0x802280C0: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x802280C4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802280C8: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    // 0x802280CC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802280D0: bne         $v0, $zero, L_8022813C
    if (ctx->r2 != 0) {
        // 0x802280D4: addiu       $v0, $zero, 0x49
        ctx->r2 = ADD32(0, 0X49);
            goto L_8022813C;
    }
    // 0x802280D4: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x802280D8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x802280DC: bne         $a0, $v0, L_802280F4
    if (ctx->r4 != ctx->r2) {
        // 0x802280E0: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_802280F4;
    }
    // 0x802280E0: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x802280E4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802280E8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x802280EC: j           L_8022810C
    // 0x802280F0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8022810C;
    // 0x802280F0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802280F4:
    // 0x802280F4: jal         0x80229D58
    // 0x802280F8: nop

    func_80229D58_ovl12(rdram, ctx);
        goto after_1;
    // 0x802280F8: nop

    after_1:
    // 0x802280FC: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80228100: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80228104: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80228108: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_8022810C:
    // 0x8022810C: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x80228110: beq         $v0, $zero, L_80228124
    if (ctx->r2 == 0) {
        // 0x80228114: nop
    
            goto L_80228124;
    }
    // 0x80228114: nop

    // 0x80228118: lhu         $v0, 0xA($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XA);
    // 0x8022811C: j           L_80228134
    // 0x80228120: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
        goto L_80228134;
    // 0x80228120: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
L_80228124:
    // 0x80228124: lhu         $v0, 0xA($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XA);
    // 0x80228128: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022812C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80228130: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
L_80228134:
    // 0x80228134: lhu         $v0, 0x1E($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X1E);
    // 0x80228138: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
L_8022813C:
    // 0x8022813C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80228140: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80228144: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228148: jr          $ra
    // 0x8022814C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022814C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022C580_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C580: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022C584: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C588: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022C58C: jal         0x800A3450
    // 0x8022C590: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022C590: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x8022C594: andi        $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 & 0X7F;
    // 0x8022C598: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022C59C: jal         0x800A3450
    // 0x8022C5A0: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x8022C5A0: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022C5A4: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022C5A8: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8022C5AC: jal         0x800A3450
    // 0x8022C5B0: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x8022C5B0: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    after_2:
    // 0x8022C5B4: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022C5B8: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
    // 0x8022C5BC: sh          $v0, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r2;
    // 0x8022C5C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022C5C4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C5C8: jr          $ra
    // 0x8022C5CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022C5CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226C90_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226C90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226C94: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80226C98: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x80226C9C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80226CA0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226CA4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226CA8: lw          $v0, 0x5DD4($at)
    ctx->r2 = MEM_W(ctx->r1, 0X5DD4);
    // 0x80226CAC: jalr        $v0
    // 0x80226CB0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80226CB0: nop

    after_0:
    // 0x80226CB4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80226CB8: jr          $ra
    // 0x80226CBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226CBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226488_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226488: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022648C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80226490: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80226494: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80226498: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022649C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802264A0: lbu         $v1, 0x4($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X4);
    // 0x802264A4: lui         $s1, 0x8021
    ctx->r17 = S32(0X8021 << 16);
    // 0x802264A8: addiu       $s1, $s1, 0x9D0
    ctx->r17 = ADD32(ctx->r17, 0X9D0);
    // 0x802264AC: sltiu       $v0, $v1, 0xF
    ctx->r2 = ctx->r3 < 0XF ? 1 : 0;
    // 0x802264B0: beq         $v0, $zero, L_80226C44
    if (ctx->r2 == 0) {
        // 0x802264B4: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80226C44;
    }
    // 0x802264B4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802264B8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802264BC: addu        $at, $at, $v0
    gpr jr_addend_802264C4 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802264C0: lw          $v0, 0x7368($at)
    ctx->r2 = ADD32(ctx->r1, 0X7368);
    // 0x802264C4: jr          $v0
    // 0x802264C8: nop

    switch (jr_addend_802264C4 >> 2) {
        case 0: goto L_802264CC; break;
        case 1: goto L_8022655C; break;
        case 2: goto L_80226594; break;
        case 3: goto L_80226604; break;
        case 4: goto L_80226648; break;
        case 5: goto L_802266F4; break;
        case 6: goto L_80226704; break;
        case 7: goto L_8022675C; break;
        case 8: goto L_80226A34; break;
        case 9: goto L_80226A8C; break;
        case 10: goto L_80226AEC; break;
        case 11: goto L_80226B04; break;
        case 12: goto L_80226B20; break;
        case 13: goto L_80226B38; break;
        case 14: goto L_80226BC8; break;
        default: switch_error(__func__, 0x802264C4, 0x80237368);
    }
    // 0x802264C8: nop

L_802264CC:
    // 0x802264CC: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x802264D0: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x802264D4: jal         0x8006FF84
    // 0x802264D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x802264D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x802264DC: beq         $v0, $zero, L_80226C44
    if (ctx->r2 == 0) {
        // 0x802264E0: nop
    
            goto L_80226C44;
    }
    // 0x802264E0: nop

    // 0x802264E4: jal         0x80036B58
    // 0x802264E8: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_80036B58_11F58(rdram, ctx);
        goto after_1;
    // 0x802264E8: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_1:
    // 0x802264EC: jal         0x80226350
    // 0x802264F0: nop

    func_80226350_ovl12(rdram, ctx);
        goto after_2;
    // 0x802264F0: nop

    after_2:
    // 0x802264F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802264F8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802264FC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80226500: sb          $v0, -0x3B95($at)
    MEM_B(-0X3B95, ctx->r1) = ctx->r2;
    // 0x80226504: jal         0x800702F0
    // 0x80226508: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_800702F0_4B6F0(rdram, ctx);
        goto after_3;
    // 0x80226508: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_3:
    // 0x8022650C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80226510: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80226514: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x80226518: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022651C: sb          $s0, 0x4DFB($at)
    MEM_B(0X4DFB, ctx->r1) = ctx->r16;
    // 0x80226520: jal         0x8005F6B4
    // 0x80226524: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_4;
    // 0x80226524: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x80226528: lui         $v0, 0xFF00
    ctx->r2 = S32(0XFF00 << 16);
    // 0x8022652C: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    // 0x80226530: lui         $v0, 0x490
    ctx->r2 = S32(0X490 << 16);
    // 0x80226534: sw          $v0, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r2;
    // 0x80226538: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x8022653C: sw          $v0, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->r2;
    // 0x80226540: lui         $v0, 0x70
    ctx->r2 = S32(0X70 << 16);
    // 0x80226544: sw          $v0, 0x44($s1)
    MEM_W(0X44, ctx->r17) = ctx->r2;
    // 0x80226548: lui         $v0, 0x200
    ctx->r2 = S32(0X200 << 16);
    // 0x8022654C: sw          $zero, 0x10($s1)
    MEM_W(0X10, ctx->r17) = 0;
    // 0x80226550: sw          $v0, 0x48($s1)
    MEM_W(0X48, ctx->r17) = ctx->r2;
    // 0x80226554: j           L_80226C44
    // 0x80226558: sb          $s0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r16;
        goto L_80226C44;
    // 0x80226558: sb          $s0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r16;
L_8022655C:
    // 0x8022655C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80226560: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80226564: bne         $v0, $zero, L_80226C44
    if (ctx->r2 != 0) {
        // 0x80226568: nop
    
            goto L_80226C44;
    }
    // 0x80226568: nop

    // 0x8022656C: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80226570: lbu         $v0, -0x7388($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7388);
    // 0x80226574: bne         $v0, $zero, L_80226C44
    if (ctx->r2 != 0) {
        // 0x80226578: addiu       $a0, $zero, 0x19
        ctx->r4 = ADD32(0, 0X19);
            goto L_80226C44;
    }
    // 0x80226578: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    // 0x8022657C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80226580: jal         0x8002A2F8
    // 0x80226584: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_5;
    // 0x80226584: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x80226588: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022658C: j           L_80226C44
    // 0x80226590: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
        goto L_80226C44;
    // 0x80226590: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
L_80226594:
    // 0x80226594: lbu         $v0, 0x5($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X5);
    // 0x80226598: bne         $v0, $zero, L_802265D4
    if (ctx->r2 != 0) {
        // 0x8022659C: lui         $v1, 0xFFD3
        ctx->r3 = S32(0XFFD3 << 16);
            goto L_802265D4;
    }
    // 0x8022659C: lui         $v1, 0xFFD3
    ctx->r3 = S32(0XFFD3 << 16);
    // 0x802265A0: lw          $v0, 0x18($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X18);
    // 0x802265A4: lui         $v1, 0xFFEE
    ctx->r3 = S32(0XFFEE << 16);
    // 0x802265A8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802265AC: lui         $v1, 0xFDF2
    ctx->r3 = S32(0XFDF2 << 16);
    // 0x802265B0: sw          $v0, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r2;
    // 0x802265B4: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802265B8: bne         $v0, $zero, L_80226C44
    if (ctx->r2 != 0) {
        // 0x802265BC: nop
    
            goto L_80226C44;
    }
    // 0x802265BC: nop

    // 0x802265C0: sw          $v1, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r3;
    // 0x802265C4: lbu         $v0, 0x5($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X5);
    // 0x802265C8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802265CC: j           L_80226C44
    // 0x802265D0: sb          $v0, 0x5($s2)
    MEM_B(0X5, ctx->r18) = ctx->r2;
        goto L_80226C44;
    // 0x802265D0: sb          $v0, 0x5($s2)
    MEM_B(0X5, ctx->r18) = ctx->r2;
L_802265D4:
    // 0x802265D4: lw          $v0, 0x40($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X40);
    // 0x802265D8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802265DC: bgtz        $v0, L_80226C44
    if (SIGNED(ctx->r2) > 0) {
        // 0x802265E0: sw          $v0, 0x40($s1)
        MEM_W(0X40, ctx->r17) = ctx->r2;
            goto L_80226C44;
    }
    // 0x802265E0: sw          $v0, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->r2;
    // 0x802265E4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802265E8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802265EC: jal         0x800616FC
    // 0x802265F0: sw          $zero, 0x40($s1)
    MEM_W(0X40, ctx->r17) = 0;
    func_800616FC_3CAFC(rdram, ctx);
        goto after_6;
    // 0x802265F0: sw          $zero, 0x40($s1)
    MEM_W(0X40, ctx->r17) = 0;
    after_6:
    // 0x802265F4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802265F8: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
    // 0x802265FC: j           L_80226C44
    // 0x80226600: sb          $zero, 0x5($s2)
    MEM_B(0X5, ctx->r18) = 0;
        goto L_80226C44;
    // 0x80226600: sb          $zero, 0x5($s2)
    MEM_B(0X5, ctx->r18) = 0;
L_80226604:
    // 0x80226604: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80226608: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022660C: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80226610: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80226614: bne         $v0, $zero, L_80226C44
    if (ctx->r2 != 0) {
        // 0x80226618: nop
    
            goto L_80226C44;
    }
    // 0x80226618: nop

    // 0x8022661C: jal         0x80036B58
    // 0x80226620: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_80036B58_11F58(rdram, ctx);
        goto after_7;
    // 0x80226620: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_7:
    // 0x80226624: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x80226628: lw          $a1, -0x3AF8($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3AF8);
    // 0x8022662C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80226630: addiu       $a1, $a1, 0x9
    ctx->r5 = ADD32(ctx->r5, 0X9);
    // 0x80226634: jal         0x800616FC
    // 0x80226638: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    func_800616FC_3CAFC(rdram, ctx);
        goto after_8;
    // 0x80226638: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    after_8:
    // 0x8022663C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80226640: j           L_80226C44
    // 0x80226644: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
        goto L_80226C44;
    // 0x80226644: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
L_80226648:
    // 0x80226648: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022664C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80226650: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80226654: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80226658: bne         $v0, $zero, L_80226C44
    if (ctx->r2 != 0) {
        // 0x8022665C: nop
    
            goto L_80226C44;
    }
    // 0x8022665C: nop

    // 0x80226660: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80226664: lbu         $v0, -0x7388($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7388);
    // 0x80226668: bne         $v0, $zero, L_80226C44
    if (ctx->r2 != 0) {
        // 0x8022666C: addiu       $a0, $zero, 0x163
        ctx->r4 = ADD32(0, 0X163);
            goto L_80226C44;
    }
    // 0x8022666C: addiu       $a0, $zero, 0x163
    ctx->r4 = ADD32(0, 0X163);
    // 0x80226670: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80226674: addiu       $s0, $s0, 0x49C4
    ctx->r16 = ADD32(ctx->r16, 0X49C4);
    // 0x80226678: jal         0x8002A33C
    // 0x8022667C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_9;
    // 0x8022667C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_9:
    // 0x80226680: lui         $a0, 0x200
    ctx->r4 = S32(0X200 << 16);
    // 0x80226684: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x80226688: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8022668C: sh          $v0, -0x3F82($at)
    MEM_H(-0X3F82, ctx->r1) = ctx->r2;
    // 0x80226690: jal         0x80036B1C
    // 0x80226694: ori         $a0, $a0, 0x4400
    ctx->r4 = ctx->r4 | 0X4400;
    func_80036B1C_11F1C(rdram, ctx);
        goto after_10;
    // 0x80226694: ori         $a0, $a0, 0x4400
    ctx->r4 = ctx->r4 | 0X4400;
    after_10:
    // 0x80226698: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8022669C: sb          $zero, -0x3A46($at)
    MEM_B(-0X3A46, ctx->r1) = 0;
    // 0x802266A0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x802266A4: sw          $zero, -0x3A40($at)
    MEM_W(-0X3A40, ctx->r1) = 0;
    // 0x802266A8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x802266AC: sw          $zero, -0x3A44($at)
    MEM_W(-0X3A44, ctx->r1) = 0;
    // 0x802266B0: jal         0x80070050
    // 0x802266B4: addiu       $a0, $s0, -0x14
    ctx->r4 = ADD32(ctx->r16, -0X14);
    func_80070050_4B450(rdram, ctx);
        goto after_11;
    // 0x802266B4: addiu       $a0, $s0, -0x14
    ctx->r4 = ADD32(ctx->r16, -0X14);
    after_11:
    // 0x802266B8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x802266BC: jal         0x800616FC
    // 0x802266C0: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_12;
    // 0x802266C0: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    after_12:
    // 0x802266C4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x802266C8: jal         0x800616FC
    // 0x802266CC: addiu       $a1, $zero, 0x23
    ctx->r5 = ADD32(0, 0X23);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_13;
    // 0x802266CC: addiu       $a1, $zero, 0x23
    ctx->r5 = ADD32(0, 0X23);
    after_13:
    // 0x802266D0: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x802266D4: lw          $a1, -0x3AF8($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3AF8);
    // 0x802266D8: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x802266DC: addiu       $a1, $a1, 0x2D
    ctx->r5 = ADD32(ctx->r5, 0X2D);
    // 0x802266E0: jal         0x800616FC
    // 0x802266E4: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    func_800616FC_3CAFC(rdram, ctx);
        goto after_14;
    // 0x802266E4: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    after_14:
    // 0x802266E8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802266EC: j           L_80226C44
    // 0x802266F0: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
        goto L_80226C44;
    // 0x802266F0: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
L_802266F4:
    // 0x802266F4: jal         0x802261C0
    // 0x802266F8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_802261C0_ovl12(rdram, ctx);
        goto after_15;
    // 0x802266F8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_15:
    // 0x802266FC: j           L_80226C44
    // 0x80226700: nop

        goto L_80226C44;
    // 0x80226700: nop

L_80226704:
    // 0x80226704: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80226708: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x8022670C: jal         0x8006FF84
    // 0x80226710: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_16;
    // 0x80226710: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_16:
    // 0x80226714: beq         $v0, $zero, L_80226C44
    if (ctx->r2 == 0) {
        // 0x80226718: addiu       $a0, $zero, 0x163
        ctx->r4 = ADD32(0, 0X163);
            goto L_80226C44;
    }
    // 0x80226718: addiu       $a0, $zero, 0x163
    ctx->r4 = ADD32(0, 0X163);
    // 0x8022671C: jal         0x8002A33C
    // 0x80226720: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_17;
    // 0x80226720: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_17:
    // 0x80226724: jal         0x80036B58
    // 0x80226728: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    func_80036B58_11F58(rdram, ctx);
        goto after_18;
    // 0x80226728: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    after_18:
    // 0x8022672C: jal         0x80061798
    // 0x80226730: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80061798_3CB98(rdram, ctx);
        goto after_19;
    // 0x80226730: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_19:
    // 0x80226734: jal         0x80061798
    // 0x80226738: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_80061798_3CB98(rdram, ctx);
        goto after_20;
    // 0x80226738: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_20:
    // 0x8022673C: jal         0x80061798
    // 0x80226740: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80061798_3CB98(rdram, ctx);
        goto after_21;
    // 0x80226740: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_21:
    // 0x80226744: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80226748: jal         0x800616FC
    // 0x8022674C: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_22;
    // 0x8022674C: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    after_22:
    // 0x80226750: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80226754: j           L_80226C44
    // 0x80226758: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
        goto L_80226C44;
    // 0x80226758: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
L_8022675C:
    // 0x8022675C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80226760: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80226764: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80226768: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022676C: bne         $v0, $zero, L_80226C44
    if (ctx->r2 != 0) {
        // 0x80226770: nop
    
            goto L_80226C44;
    }
    // 0x80226770: nop

    // 0x80226774: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80226778: lbu         $v0, -0x7388($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7388);
    // 0x8022677C: bne         $v0, $zero, L_80226C44
    if (ctx->r2 != 0) {
        // 0x80226780: nop
    
            goto L_80226C44;
    }
    // 0x80226780: nop

    // 0x80226784: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x80226788: addiu       $a0, $a0, -0x3AF8
    ctx->r4 = ADD32(ctx->r4, -0X3AF8);
    // 0x8022678C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80226790: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80226794: lbu         $v1, -0x3A46($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3A46);
    // 0x80226798: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022679C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802267A0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802267A4: lbu         $v0, 0x5CE4($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X5CE4);
    // 0x802267A8: sltu        $v0, $v1, $v0
    ctx->r2 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x802267AC: beq         $v0, $zero, L_802267E0
    if (ctx->r2 == 0) {
        // 0x802267B0: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_802267E0;
    }
    // 0x802267B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802267B4: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    // 0x802267B8: jal         0x8002A2F8
    // 0x802267BC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_23;
    // 0x802267BC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_23:
    // 0x802267C0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802267C4: jal         0x800616FC
    // 0x802267C8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_24;
    // 0x802267C8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_24:
    // 0x802267CC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802267D0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802267D4: sb          $v0, 0x7660($at)
    MEM_B(0X7660, ctx->r1) = ctx->r2;
    // 0x802267D8: j           L_80226A2C
    // 0x802267DC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_80226A2C;
    // 0x802267DC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_802267E0:
    // 0x802267E0: addu        $t2, $v1, $zero
    ctx->r10 = ADD32(ctx->r3, 0);
    // 0x802267E4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x802267E8: addiu       $a0, $a0, -0xC
    ctx->r4 = ADD32(ctx->r4, -0XC);
    // 0x802267EC: addu        $t0, $a0, $zero
    ctx->r8 = ADD32(ctx->r4, 0);
L_802267F0:
    // 0x802267F0: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x802267F4: sltu        $v0, $t2, $v0
    ctx->r2 = ctx->r10 < ctx->r2 ? 1 : 0;
    // 0x802267F8: bnel        $v0, $zero, L_80226860
    if (ctx->r2 != 0) {
        // 0x802267FC: addiu       $a3, $a3, 0x1
        ctx->r7 = ADD32(ctx->r7, 0X1);
            goto L_80226860;
    }
    goto skip_0;
    // 0x802267FC: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    skip_0:
    // 0x80226800: slti        $v0, $a3, 0x2
    ctx->r2 = SIGNED(ctx->r7) < 0X2 ? 1 : 0;
    // 0x80226804: beq         $v0, $zero, L_80226854
    if (ctx->r2 == 0) {
        // 0x80226808: addiu       $v1, $a0, 0x20
        ctx->r3 = ADD32(ctx->r4, 0X20);
            goto L_80226854;
    }
    // 0x80226808: addiu       $v1, $a0, 0x20
    ctx->r3 = ADD32(ctx->r4, 0X20);
    // 0x8022680C: sll         $v0, $a3, 4
    ctx->r2 = S32(ctx->r7 << 4);
    // 0x80226810: addu        $t1, $v0, $a0
    ctx->r9 = ADD32(ctx->r2, ctx->r4);
    // 0x80226814: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_80226818:
    // 0x80226818: lw          $v0, -0x10($v1)
    ctx->r2 = MEM_W(ctx->r3, -0X10);
    // 0x8022681C: addiu       $a1, $v1, -0x10
    ctx->r5 = ADD32(ctx->r3, -0X10);
    // 0x80226820: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x80226824: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_80226828:
    // 0x80226828: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x8022682C: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x80226830: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x80226834: sh          $v0, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r2;
    // 0x80226838: slti        $v0, $a2, 0x4
    ctx->r2 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
    // 0x8022683C: bne         $v0, $zero, L_80226828
    if (ctx->r2 != 0) {
        // 0x80226840: addiu       $a0, $a0, 0x2
        ctx->r4 = ADD32(ctx->r4, 0X2);
            goto L_80226828;
    }
    // 0x80226840: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x80226844: addiu       $v1, $v1, -0x10
    ctx->r3 = ADD32(ctx->r3, -0X10);
    // 0x80226848: slt         $v0, $t1, $v1
    ctx->r2 = SIGNED(ctx->r9) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8022684C: bne         $v0, $zero, L_80226818
    if (ctx->r2 != 0) {
        // 0x80226850: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_80226818;
    }
    // 0x80226850: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_80226854:
    // 0x80226854: sw          $t2, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r10;
    // 0x80226858: j           L_80226870
    // 0x8022685C: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
        goto L_80226870;
    // 0x8022685C: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
L_80226860:
    // 0x80226860: slti        $v0, $a3, 0x3
    ctx->r2 = SIGNED(ctx->r7) < 0X3 ? 1 : 0;
    // 0x80226864: bne         $v0, $zero, L_802267F0
    if (ctx->r2 != 0) {
        // 0x80226868: addiu       $t0, $t0, 0x10
        ctx->r8 = ADD32(ctx->r8, 0X10);
            goto L_802267F0;
    }
    // 0x80226868: addiu       $t0, $t0, 0x10
    ctx->r8 = ADD32(ctx->r8, 0X10);
    // 0x8022686C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80226870:
    // 0x80226870: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226874: sb          $v0, 0x7660($at)
    MEM_B(0X7660, ctx->r1) = ctx->r2;
    // 0x80226878: jal         0x80060D38
    // 0x8022687C: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_80060D38_3C138(rdram, ctx);
        goto after_25;
    // 0x8022687C: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_25:
    // 0x80226880: jal         0x8006033C
    // 0x80226884: addiu       $a0, $zero, 0x314
    ctx->r4 = ADD32(0, 0X314);
    func_8006033C_3B73C(rdram, ctx);
        goto after_26;
    // 0x80226884: addiu       $a0, $zero, 0x314
    ctx->r4 = ADD32(0, 0X314);
    after_26:
    // 0x80226888: bne         $v0, $zero, L_80226900
    if (ctx->r2 != 0) {
        // 0x8022688C: nop
    
            goto L_80226900;
    }
    // 0x8022688C: nop

    // 0x80226890: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80226894: lbu         $v0, 0x7660($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X7660);
    // 0x80226898: bne         $v0, $zero, L_802268D4
    if (ctx->r2 != 0) {
        // 0x8022689C: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_802268D4;
    }
    // 0x8022689C: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x802268A0: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x802268A4: lw          $v0, -0x3AF8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3AF8);
    // 0x802268A8: bne         $v0, $v1, L_80226950
    if (ctx->r2 != ctx->r3) {
        // 0x802268AC: sll         $v0, $v0, 3
        ctx->r2 = S32(ctx->r2 << 3);
            goto L_80226950;
    }
    // 0x802268AC: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x802268B0: jal         0x80069820
    // 0x802268B4: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    func_80069820_44C20(rdram, ctx);
        goto after_27;
    // 0x802268B4: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    after_27:
    // 0x802268B8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802268BC: jal         0x800616FC
    // 0x802268C0: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_28;
    // 0x802268C0: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_28:
    // 0x802268C4: jal         0x8006036C
    // 0x802268C8: addiu       $a0, $zero, 0x314
    ctx->r4 = ADD32(0, 0X314);
    func_8006036C_3B76C(rdram, ctx);
        goto after_29;
    // 0x802268C8: addiu       $a0, $zero, 0x314
    ctx->r4 = ADD32(0, 0X314);
    after_29:
    // 0x802268CC: j           L_80226974
    // 0x802268D0: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
        goto L_80226974;
    // 0x802268D0: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
L_802268D4:
    // 0x802268D4: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x802268D8: lw          $v0, -0x3AF8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3AF8);
    // 0x802268DC: bne         $v0, $v1, L_802269D8
    if (ctx->r2 != ctx->r3) {
        // 0x802268E0: sll         $v0, $v0, 3
        ctx->r2 = S32(ctx->r2 << 3);
            goto L_802269D8;
    }
    // 0x802268E0: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x802268E4: jal         0x80069820
    // 0x802268E8: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    func_80069820_44C20(rdram, ctx);
        goto after_30;
    // 0x802268E8: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    after_30:
    // 0x802268EC: jal         0x8006036C
    // 0x802268F0: addiu       $a0, $zero, 0x314
    ctx->r4 = ADD32(0, 0X314);
    func_8006036C_3B76C(rdram, ctx);
        goto after_31;
    // 0x802268F0: addiu       $a0, $zero, 0x314
    ctx->r4 = ADD32(0, 0X314);
    after_31:
    // 0x802268F4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802268F8: j           L_802269F4
    // 0x802268FC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
        goto L_802269F4;
    // 0x802268FC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
L_80226900:
    // 0x80226900: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80226904: lbu         $v0, 0x7660($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X7660);
    // 0x80226908: bne         $v0, $zero, L_80226998
    if (ctx->r2 != 0) {
        // 0x8022690C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80226998;
    }
    // 0x8022690C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80226910: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80226914: lw          $v1, -0x3AF8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3AF8);
    // 0x80226918: bne         $v1, $v0, L_80226950
    if (ctx->r3 != ctx->r2) {
        // 0x8022691C: sll         $v0, $v1, 3
        ctx->r2 = S32(ctx->r3 << 3);
            goto L_80226950;
    }
    // 0x8022691C: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x80226920: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x80226924: lbu         $a0, -0x3A46($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X3A46);
    // 0x80226928: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022692C: lbu         $v0, 0x5CFC($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X5CFC);
    // 0x80226930: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x80226934: mult        $a0, $a0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80226938: mflo        $a0
    ctx->r4 = lo;
    // 0x8022693C: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80226940: lw          $v0, 0x5CF8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X5CF8);
    // 0x80226944: sll         $a0, $a0, 1
    ctx->r4 = S32(ctx->r4 << 1);
    // 0x80226948: j           L_8022695C
    // 0x8022694C: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
        goto L_8022695C;
    // 0x8022694C: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
L_80226950:
    // 0x80226950: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80226954: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80226958: lw          $a0, 0x5CE0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5CE0);
L_8022695C:
    // 0x8022695C: jal         0x8006982C
    // 0x80226960: nop

    func_8006982C_44C2C(rdram, ctx);
        goto after_32;
    // 0x80226960: nop

    after_32:
    // 0x80226964: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80226968: jal         0x800616FC
    // 0x8022696C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_33;
    // 0x8022696C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_33:
    // 0x80226970: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
L_80226974:
    // 0x80226974: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80226978: jal         0x8002A2F8
    // 0x8022697C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_34;
    // 0x8022697C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_34:
    // 0x80226980: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80226984: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x80226988: jal         0x8002A33C
    // 0x8022698C: addiu       $a0, $zero, 0x164
    ctx->r4 = ADD32(0, 0X164);
    func_8002A33C_573C(rdram, ctx);
        goto after_35;
    // 0x8022698C: addiu       $a0, $zero, 0x164
    ctx->r4 = ADD32(0, 0X164);
    after_35:
    // 0x80226990: j           L_80226A0C
    // 0x80226994: nop

        goto L_80226A0C;
    // 0x80226994: nop

L_80226998:
    // 0x80226998: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022699C: lw          $v1, -0x3AF8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3AF8);
    // 0x802269A0: bne         $v1, $v0, L_802269D8
    if (ctx->r3 != ctx->r2) {
        // 0x802269A4: sll         $v0, $v1, 3
        ctx->r2 = S32(ctx->r3 << 3);
            goto L_802269D8;
    }
    // 0x802269A4: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x802269A8: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x802269AC: lbu         $a0, -0x3A46($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X3A46);
    // 0x802269B0: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802269B4: lbu         $v0, 0x5CFC($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X5CFC);
    // 0x802269B8: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x802269BC: mult        $a0, $a0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802269C0: mflo        $a0
    ctx->r4 = lo;
    // 0x802269C4: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802269C8: lw          $v0, 0x5CF8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X5CF8);
    // 0x802269CC: sll         $a0, $a0, 1
    ctx->r4 = S32(ctx->r4 << 1);
    // 0x802269D0: j           L_802269E4
    // 0x802269D4: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
        goto L_802269E4;
    // 0x802269D4: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
L_802269D8:
    // 0x802269D8: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802269DC: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x802269E0: lw          $a0, 0x5CE0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5CE0);
L_802269E4:
    // 0x802269E4: jal         0x8006982C
    // 0x802269E8: nop

    func_8006982C_44C2C(rdram, ctx);
        goto after_36;
    // 0x802269E8: nop

    after_36:
    // 0x802269EC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802269F0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
L_802269F4:
    // 0x802269F4: jal         0x800616FC
    // 0x802269F8: nop

    func_800616FC_3CAFC(rdram, ctx);
        goto after_37;
    // 0x802269F8: nop

    after_37:
    // 0x802269FC: addiu       $a0, $zero, 0x1B
    ctx->r4 = ADD32(0, 0X1B);
    // 0x80226A00: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80226A04: jal         0x8002A2F8
    // 0x80226A08: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_38;
    // 0x80226A08: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_38:
L_80226A0C:
    // 0x80226A0C: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x80226A10: addiu       $a0, $a0, -0x3AF8
    ctx->r4 = ADD32(ctx->r4, -0X3AF8);
    // 0x80226A14: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80226A18: sltiu       $v0, $v1, 0x3
    ctx->r2 = ctx->r3 < 0X3 ? 1 : 0;
    // 0x80226A1C: beq         $v0, $zero, L_80226A28
    if (ctx->r2 == 0) {
        // 0x80226A20: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_80226A28;
    }
    // 0x80226A20: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x80226A24: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
L_80226A28:
    // 0x80226A28: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_80226A2C:
    // 0x80226A2C: j           L_80226C44
    // 0x80226A30: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
        goto L_80226C44;
    // 0x80226A30: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
L_80226A34:
    // 0x80226A34: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80226A38: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80226A3C: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80226A40: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80226A44: bne         $v0, $zero, L_80226C44
    if (ctx->r2 != 0) {
        // 0x80226A48: nop
    
            goto L_80226C44;
    }
    // 0x80226A48: nop

    // 0x80226A4C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80226A50: lbu         $a0, 0x7660($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X7660);
    // 0x80226A54: sltiu       $v0, $a0, 0x3
    ctx->r2 = ctx->r4 < 0X3 ? 1 : 0;
    // 0x80226A58: beql        $v0, $zero, L_80226A74
    if (ctx->r2 == 0) {
        // 0x80226A5C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80226A74;
    }
    goto skip_1;
    // 0x80226A5C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    skip_1:
    // 0x80226A60: jal         0x80069850
    // 0x80226A64: addiu       $a0, $a0, 0x9
    ctx->r4 = ADD32(ctx->r4, 0X9);
    func_80069850_44C50(rdram, ctx);
        goto after_39;
    // 0x80226A64: addiu       $a0, $a0, 0x9
    ctx->r4 = ADD32(ctx->r4, 0X9);
    after_39:
    // 0x80226A68: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80226A6C: j           L_80226A78
    // 0x80226A70: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
        goto L_80226A78;
    // 0x80226A70: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
L_80226A74:
    // 0x80226A74: addiu       $a1, $zero, 0x1D
    ctx->r5 = ADD32(0, 0X1D);
L_80226A78:
    // 0x80226A78: jal         0x800616FC
    // 0x80226A7C: nop

    func_800616FC_3CAFC(rdram, ctx);
        goto after_40;
    // 0x80226A7C: nop

    after_40:
    // 0x80226A80: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80226A84: j           L_80226C44
    // 0x80226A88: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
        goto L_80226C44;
    // 0x80226A88: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
L_80226A8C:
    // 0x80226A8C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80226A90: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80226A94: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80226A98: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80226A9C: bne         $v0, $zero, L_80226C44
    if (ctx->r2 != 0) {
        // 0x80226AA0: nop
    
            goto L_80226C44;
    }
    // 0x80226AA0: nop

    // 0x80226AA4: jal         0x8002A398
    // 0x80226AA8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_8002A398_5798(rdram, ctx);
        goto after_41;
    // 0x80226AA8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_41:
    // 0x80226AAC: bne         $v0, $zero, L_80226C44
    if (ctx->r2 != 0) {
        // 0x80226AB0: nop
    
            goto L_80226C44;
    }
    // 0x80226AB0: nop

    // 0x80226AB4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80226AB8: lbu         $v0, 0x3FF3($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FF3);
    // 0x80226ABC: bne         $v0, $zero, L_80226AD8
    if (ctx->r2 != 0) {
        // 0x80226AC0: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80226AD8;
    }
    // 0x80226AC0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80226AC4: jal         0x80036E48
    // 0x80226AC8: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    func_80036E48_12248(rdram, ctx);
        goto after_42;
    // 0x80226AC8: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_42:
    // 0x80226ACC: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80226AD0: j           L_80226C44
    // 0x80226AD4: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
        goto L_80226C44;
    // 0x80226AD4: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
L_80226AD8:
    // 0x80226AD8: jal         0x800616FC
    // 0x80226ADC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_43;
    // 0x80226ADC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_43:
    // 0x80226AE0: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x80226AE4: j           L_80226C44
    // 0x80226AE8: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
        goto L_80226C44;
    // 0x80226AE8: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
L_80226AEC:
    // 0x80226AEC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80226AF0: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80226AF4: bne         $v0, $zero, L_80226C44
    if (ctx->r2 != 0) {
        // 0x80226AF8: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_80226C44;
    }
    // 0x80226AF8: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x80226AFC: j           L_80226C44
    // 0x80226B00: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
        goto L_80226C44;
    // 0x80226B00: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
L_80226B04:
    // 0x80226B04: jal         0x80226350
    // 0x80226B08: nop

    func_80226350_ovl12(rdram, ctx);
        goto after_44;
    // 0x80226B08: nop

    after_44:
    // 0x80226B0C: jal         0x80036E48
    // 0x80226B10: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80036E48_12248(rdram, ctx);
        goto after_45;
    // 0x80226B10: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_45:
    // 0x80226B14: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80226B18: j           L_80226C44
    // 0x80226B1C: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
        goto L_80226C44;
    // 0x80226B1C: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
L_80226B20:
    // 0x80226B20: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80226B24: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80226B28: bne         $v0, $zero, L_80226C44
    if (ctx->r2 != 0) {
        // 0x80226B2C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80226C44;
    }
    // 0x80226B2C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80226B30: j           L_80226C44
    // 0x80226B34: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
        goto L_80226C44;
    // 0x80226B34: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
L_80226B38:
    // 0x80226B38: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80226B3C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80226B40: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80226B44: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80226B48: bne         $v0, $zero, L_80226C44
    if (ctx->r2 != 0) {
        // 0x80226B4C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80226C44;
    }
    // 0x80226B4C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226B50: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226B54: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x80226B58: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80226B5C: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80226B60: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226B64: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x80226B68: addiu       $v0, $zero, -0xBE
    ctx->r2 = ADD32(0, -0XBE);
    // 0x80226B6C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226B70: sh          $v0, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = ctx->r2;
    // 0x80226B74: addiu       $v0, $zero, -0x41
    ctx->r2 = ADD32(0, -0X41);
    // 0x80226B78: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226B7C: sh          $v0, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = ctx->r2;
    // 0x80226B80: addiu       $v0, $zero, 0x296
    ctx->r2 = ADD32(0, 0X296);
    // 0x80226B84: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226B88: sh          $v0, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = ctx->r2;
    // 0x80226B8C: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80226B90: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226B94: sh          $v0, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = ctx->r2;
    // 0x80226B98: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80226B9C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226BA0: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x80226BA4: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x80226BA8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226BAC: sb          $v1, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r3;
    // 0x80226BB0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226BB4: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80226BB8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226BBC: sb          $v1, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r3;
    // 0x80226BC0: j           L_80226C44
    // 0x80226BC4: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
        goto L_80226C44;
    // 0x80226BC4: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
L_80226BC8:
    // 0x80226BC8: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80226BCC: addiu       $s1, $s1, 0x47CC
    ctx->r17 = ADD32(ctx->r17, 0X47CC);
    // 0x80226BD0: lb          $v1, 0x0($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X0);
    // 0x80226BD4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80226BD8: bne         $v1, $v0, L_80226C44
    if (ctx->r3 != ctx->r2) {
        // 0x80226BDC: nop
    
            goto L_80226C44;
    }
    // 0x80226BDC: nop

    // 0x80226BE0: jal         0x80036B58
    // 0x80226BE4: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    func_80036B58_11F58(rdram, ctx);
        goto after_46;
    // 0x80226BE4: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    after_46:
    // 0x80226BE8: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80226BEC: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80226BF0: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x80226BF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226BF8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80226BFC: sb          $zero, -0x3B95($at)
    MEM_B(-0X3B95, ctx->r1) = 0;
    // 0x80226C00: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226C04: jal         0x80070050
    // 0x80226C08: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    func_80070050_4B450(rdram, ctx);
        goto after_47;
    // 0x80226C08: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    after_47:
    // 0x80226C0C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226C10: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226C14: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    // 0x80226C18: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226C1C: jal         0x80034844
    // 0x80226C20: sb          $zero, 0x4DFB($at)
    MEM_B(0X4DFB, ctx->r1) = 0;
    func_80034844_FC44(rdram, ctx);
        goto after_48;
    // 0x80226C20: sb          $zero, 0x4DFB($at)
    MEM_B(0X4DFB, ctx->r1) = 0;
    after_48:
    // 0x80226C24: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x80226C28: lb          $a1, -0x3BC4($a1)
    ctx->r5 = MEM_B(ctx->r5, -0X3BC4);
    // 0x80226C2C: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x80226C30: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80226C34: sh          $v0, -0x3F82($at)
    MEM_H(-0X3F82, ctx->r1) = ctx->r2;
    // 0x80226C38: jal         0x800702F0
    // 0x80226C3C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800702F0_4B6F0(rdram, ctx);
        goto after_49;
    // 0x80226C3C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_49:
    // 0x80226C40: sb          $zero, 0x0($s2)
    MEM_B(0X0, ctx->r18) = 0;
L_80226C44:
    // 0x80226C44: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x80226C48: jal         0x80069838
    // 0x80226C4C: lw          $a0, -0x3A44($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A44);
    func_80069838_44C38(rdram, ctx);
        goto after_50;
    // 0x80226C4C: lw          $a0, -0x3A44($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A44);
    after_50:
    // 0x80226C50: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x80226C54: jal         0x80069844
    // 0x80226C58: lbu         $a0, -0x3A46($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X3A46);
    func_80069844_44C44(rdram, ctx);
        goto after_51;
    // 0x80226C58: lbu         $a0, -0x3A46($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X3A46);
    after_51:
    // 0x80226C5C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80226C60: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80226C64: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80226C68: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226C6C: jr          $ra
    // 0x80226C70: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80226C70: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80233A6C_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233A6C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80233A70: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80233A74: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80233A78: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80233A7C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80233A80: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x80233A84: sltiu       $v0, $v1, 0x30
    ctx->r2 = ctx->r3 < 0X30 ? 1 : 0;
    // 0x80233A88: beq         $v0, $zero, L_80233B64
    if (ctx->r2 == 0) {
        // 0x80233A8C: andi        $v0, $v1, 0xF
        ctx->r2 = ctx->r3 & 0XF;
            goto L_80233B64;
    }
    // 0x80233A8C: andi        $v0, $v1, 0xF
    ctx->r2 = ctx->r3 & 0XF;
    // 0x80233A90: bne         $v0, $zero, L_80233B48
    if (ctx->r2 != 0) {
        // 0x80233A94: nop
    
            goto L_80233B48;
    }
    // 0x80233A94: nop

    // 0x80233A98: jal         0x8004F144
    // 0x80233A9C: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80233A9C: nop

    after_0:
    // 0x80233AA0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80233AA4: beq         $s0, $zero, L_80233B48
    if (ctx->r16 == 0) {
        // 0x80233AA8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80233B48;
    }
    // 0x80233AA8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80233AAC: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80233AB0: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x80233AB4: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80233AB8: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x80233ABC: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x80233AC0: lbu         $v1, 0xC($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XC);
    // 0x80233AC4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80233AC8: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x80233ACC: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80233AD0: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x80233AD4: jal         0x800A3450
    // 0x80233AD8: sb          $v1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x80233AD8: sb          $v1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r3;
    after_1:
    // 0x80233ADC: lhu         $v1, 0x20($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X20);
    // 0x80233AE0: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80233AE4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80233AE8: jal         0x800A3450
    // 0x80233AEC: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x80233AEC: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    after_2:
    // 0x80233AF0: lhu         $v1, 0x1C($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X1C);
    // 0x80233AF4: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80233AF8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80233AFC: jal         0x800A3450
    // 0x80233B00: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80233B00: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    after_3:
    // 0x80233B04: lui         $a1, 0x3D48
    ctx->r5 = S32(0X3D48 << 16);
    // 0x80233B08: ori         $a1, $a1, 0x4E
    ctx->r5 = ctx->r5 | 0X4E;
    // 0x80233B0C: lhu         $a0, 0x1E($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X1E);
    // 0x80233B10: lui         $v1, 0x2E40
    ctx->r3 = S32(0X2E40 << 16);
    // 0x80233B14: ori         $v1, $v1, 0x4040
    ctx->r3 = ctx->r3 | 0X4040;
    // 0x80233B18: sw          $v1, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r3;
    // 0x80233B1C: addiu       $v1, $zero, 0x20
    ctx->r3 = ADD32(0, 0X20);
    // 0x80233B20: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80233B24: sw          $a1, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r5;
    // 0x80233B28: sb          $v1, 0x22($s0)
    MEM_B(0X22, ctx->r16) = ctx->r3;
    // 0x80233B2C: sb          $zero, 0x23($s0)
    MEM_B(0X23, ctx->r16) = 0;
    // 0x80233B30: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80233B34: jal         0x800A3450
    // 0x80233B38: sh          $a0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r4;
    func_800A3450_7E850(rdram, ctx);
        goto after_4;
    // 0x80233B38: sh          $a0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r4;
    after_4:
    // 0x80233B3C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80233B40: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80233B44: sh          $v0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r2;
L_80233B48:
    // 0x80233B48: jal         0x800A3450
    // 0x80233B4C: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_5;
    // 0x80233B4C: nop

    after_5:
    // 0x80233B50: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x80233B54: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80233B58: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80233B5C: j           L_80233B6C
    // 0x80233B60: sb          $v1, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r3;
        goto L_80233B6C;
    // 0x80233B60: sb          $v1, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r3;
L_80233B64:
    // 0x80233B64: jal         0x8004F5C4
    // 0x80233B68: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_6;
    // 0x80233B68: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
L_80233B6C:
    // 0x80233B6C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80233B70: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80233B74: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80233B78: jr          $ra
    // 0x80233B7C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80233B7C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80233944_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233944: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80233948: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023394C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80233950: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80233954: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x80233958: sll         $v1, $v0, 24
    ctx->r3 = S32(ctx->r2 << 24);
    // 0x8023395C: sra         $a0, $v1, 24
    ctx->r4 = S32(SIGNED(ctx->r3) >> 24);
    // 0x80233960: blez        $a0, L_80233A54
    if (SIGNED(ctx->r4) <= 0) {
        // 0x80233964: lui         $v0, 0x5555
        ctx->r2 = S32(0X5555 << 16);
            goto L_80233A54;
    }
    // 0x80233964: lui         $v0, 0x5555
    ctx->r2 = S32(0X5555 << 16);
    // 0x80233968: ori         $v0, $v0, 0x5556
    ctx->r2 = ctx->r2 | 0X5556;
    // 0x8023396C: mult        $a0, $v0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80233970: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x80233974: mfhi        $a1
    ctx->r5 = hi;
    // 0x80233978: subu        $v1, $a1, $v1
    ctx->r3 = SUB32(ctx->r5, ctx->r3);
    // 0x8023397C: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80233980: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80233984: subu        $v0, $a0, $v0
    ctx->r2 = SUB32(ctx->r4, ctx->r2);
    // 0x80233988: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8023398C: bne         $v0, $zero, L_802339AC
    if (ctx->r2 != 0) {
        // 0x80233990: nop
    
            goto L_802339AC;
    }
    // 0x80233990: nop

    // 0x80233994: lbu         $v1, 0x22($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X22);
    // 0x80233998: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x8023399C: sltiu       $v0, $v0, 0x80
    ctx->r2 = ctx->r2 < 0X80 ? 1 : 0;
    // 0x802339A0: beq         $v0, $zero, L_802339AC
    if (ctx->r2 == 0) {
        // 0x802339A4: addiu       $v0, $v1, 0x20
        ctx->r2 = ADD32(ctx->r3, 0X20);
            goto L_802339AC;
    }
    // 0x802339A4: addiu       $v0, $v1, 0x20
    ctx->r2 = ADD32(ctx->r3, 0X20);
    // 0x802339A8: sb          $v0, 0x22($s0)
    MEM_B(0X22, ctx->r16) = ctx->r2;
L_802339AC:
    // 0x802339AC: jal         0x800A3450
    // 0x802339B0: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x802339B0: nop

    after_0:
    // 0x802339B4: lhu         $v1, 0x1C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1C);
    // 0x802339B8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802339BC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802339C0: jal         0x800A3450
    // 0x802339C4: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x802339C4: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    after_1:
    // 0x802339C8: lhu         $v1, 0x20($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X20);
    // 0x802339CC: lbu         $a0, 0xE($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XE);
    // 0x802339D0: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802339D4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802339D8: andi        $a0, $a0, 0x1
    ctx->r4 = ctx->r4 & 0X1;
    // 0x802339DC: bne         $a0, $zero, L_802339FC
    if (ctx->r4 != 0) {
        // 0x802339E0: sh          $v1, 0x20($s0)
        MEM_H(0X20, ctx->r16) = ctx->r3;
            goto L_802339FC;
    }
    // 0x802339E0: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    // 0x802339E4: jal         0x800A3450
    // 0x802339E8: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x802339E8: nop

    after_2:
    // 0x802339EC: lhu         $v1, 0x1E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1E);
    // 0x802339F0: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802339F4: j           L_80233A10
    // 0x802339F8: addiu       $v1, $v1, -0x2
    ctx->r3 = ADD32(ctx->r3, -0X2);
        goto L_80233A10;
    // 0x802339F8: addiu       $v1, $v1, -0x2
    ctx->r3 = ADD32(ctx->r3, -0X2);
L_802339FC:
    // 0x802339FC: jal         0x800A3450
    // 0x80233A00: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80233A00: nop

    after_3:
    // 0x80233A04: lhu         $v1, 0x1E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1E);
    // 0x80233A08: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80233A0C: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
L_80233A10:
    // 0x80233A10: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80233A14: sh          $v1, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r3;
    // 0x80233A18: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x80233A1C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80233A20: bne         $v0, $zero, L_80233A34
    if (ctx->r2 != 0) {
        // 0x80233A24: lui         $a0, 0xFFFD
        ctx->r4 = S32(0XFFFD << 16);
            goto L_80233A34;
    }
    // 0x80233A24: lui         $a0, 0xFFFD
    ctx->r4 = S32(0XFFFD << 16);
    // 0x80233A28: lhu         $v0, 0x24($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X24);
    // 0x80233A2C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80233A30: sh          $v0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r2;
L_80233A34:
    // 0x80233A34: lbu         $v1, 0xE($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XE);
    // 0x80233A38: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x80233A3C: ori         $a0, $a0, 0xFDFE
    ctx->r4 = ctx->r4 | 0XFDFE;
    // 0x80233A40: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80233A44: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80233A48: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x80233A4C: j           L_80233A5C
    // 0x80233A50: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
        goto L_80233A5C;
    // 0x80233A50: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
L_80233A54:
    // 0x80233A54: jal         0x8004F5C4
    // 0x80233A58: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_4;
    // 0x80233A58: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
L_80233A5C:
    // 0x80233A5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80233A60: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80233A64: jr          $ra
    // 0x80233A68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80233A68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022EA2C_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EA2C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022EA30: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022EA34: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022EA38: addiu       $a0, $s0, 0xAC
    ctx->r4 = ADD32(ctx->r16, 0XAC);
    // 0x8022EA3C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022EA40: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022EA44: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8022EA48: jal         0x8009A3B4
    // 0x8022EA4C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022EA4C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    after_0:
    // 0x8022EA50: lbu         $a2, 0x0($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X0);
    // 0x8022EA54: lbu         $v1, 0xC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XC);
    // 0x8022EA58: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022EA5C: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    // 0x8022EA60: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022EA64: sw          $zero, 0x54($s0)
    MEM_W(0X54, ctx->r16) = 0;
    // 0x8022EA68: sw          $zero, 0x58($s0)
    MEM_W(0X58, ctx->r16) = 0;
    // 0x8022EA6C: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x8022EA70: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
    // 0x8022EA74: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x8022EA78: sw          $zero, 0x70($s0)
    MEM_W(0X70, ctx->r16) = 0;
    // 0x8022EA7C: sw          $zero, 0x74($s0)
    MEM_W(0X74, ctx->r16) = 0;
    // 0x8022EA80: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8022EA84: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8022EA88: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x8022EA8C: ori         $a2, $a2, 0x6
    ctx->r6 = ctx->r6 | 0X6;
    // 0x8022EA90: sll         $v1, $v1, 9
    ctx->r3 = S32(ctx->r3 << 9);
    // 0x8022EA94: andi        $v1, $v1, 0xE00
    ctx->r3 = ctx->r3 & 0XE00;
    // 0x8022EA98: sb          $a2, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r6;
    // 0x8022EA9C: jal         0x8004D5D4
    // 0x8022EAA0: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_1;
    // 0x8022EAA0: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    after_1:
    // 0x8022EAA4: addiu       $a0, $s0, 0x54
    ctx->r4 = ADD32(ctx->r16, 0X54);
    // 0x8022EAA8: addiu       $s1, $s0, 0x8C
    ctx->r17 = ADD32(ctx->r16, 0X8C);
    // 0x8022EAAC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022EAB0: addiu       $v0, $zero, 0x2F
    ctx->r2 = ADD32(0, 0X2F);
    // 0x8022EAB4: jal         0x80031600
    // 0x8022EAB8: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    func_80031600_CA00(rdram, ctx);
        goto after_2;
    // 0x8022EAB8: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    after_2:
    // 0x8022EABC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022EAC0: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8022EAC4: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022EAC8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022EACC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022EAD0: jal         0x80031DA8
    // 0x8022EAD4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_3;
    // 0x8022EAD4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_3:
    // 0x8022EAD8: lui         $a0, 0x80
    ctx->r4 = S32(0X80 << 16);
    // 0x8022EADC: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022EAE0: ori         $a0, $a0, 0x8080
    ctx->r4 = ctx->r4 | 0X8080;
    // 0x8022EAE4: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x8022EAE8: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    // 0x8022EAEC: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022EAF0: addiu       $v0, $v0, 0x6B0C
    ctx->r2 = ADD32(ctx->r2, 0X6B0C);
    // 0x8022EAF4: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x8022EAF8: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x8022EAFC: sw          $a0, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r4;
    // 0x8022EB00: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022EB04: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    // 0x8022EB08: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8022EB0C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022EB10: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022EB14: jr          $ra
    // 0x8022EB18: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022EB18: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80229DE4_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229DE4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80229DE8: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80229DEC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80229DF0: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x80229DF4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80229DF8: lh          $v0, 0x56($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X56);
    // 0x80229DFC: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x80229E00: sll         $a2, $a1, 20
    ctx->r6 = S32(ctx->r5 << 20);
    // 0x80229E04: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x80229E08: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80229E0C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80229E10: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80229E14: jal         0x8004DC2C
    // 0x80229E18: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_8004DC2C_2902C(rdram, ctx);
        goto after_0;
    // 0x80229E18: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_0:
    // 0x80229E1C: lh          $a1, 0x18($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X18);
    // 0x80229E20: lhu         $a0, 0x14($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X14);
    // 0x80229E24: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80229E28: lhu         $v1, 0x49C4($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X49C4);
    // 0x80229E2C: lh          $a2, 0x20($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X20);
    // 0x80229E30: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x80229E34: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x80229E38: lhu         $v1, 0x18($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X18);
    // 0x80229E3C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80229E40: lhu         $a1, 0x49C8($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X49C8);
    // 0x80229E44: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    // 0x80229E48: andi        $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 & 0XFFFF;
    // 0x80229E4C: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x80229E50: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x80229E54: addu        $v1, $s0, $v1
    ctx->r3 = ADD32(ctx->r16, ctx->r3);
    // 0x80229E58: andi        $s0, $s0, 0xFFFF
    ctx->r16 = ctx->r16 & 0XFFFF;
    // 0x80229E5C: sll         $s0, $s0, 1
    ctx->r16 = S32(ctx->r16 << 1);
    // 0x80229E60: slt         $a0, $a0, $s0
    ctx->r4 = SIGNED(ctx->r4) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x80229E64: beq         $a0, $zero, L_80229E74
    if (ctx->r4 == 0) {
        // 0x80229E68: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80229E74;
    }
    // 0x80229E68: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80229E6C: andi        $v0, $v1, 0xFFFF
    ctx->r2 = ctx->r3 & 0XFFFF;
    // 0x80229E70: slt         $v0, $v0, $s0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r16) ? 1 : 0;
L_80229E74:
    // 0x80229E74: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x80229E78: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80229E7C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80229E80: jr          $ra
    // 0x80229E84: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80229E84: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80229E88: nop

    // 0x80229E8C: nop

;}
RECOMP_FUNC void func_8022DE44_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DE44: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022DE48: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022DE4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022DE50: jal         0x8022E7B8
    // 0x8022DE54: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8022E7B8_ovl12(rdram, ctx);
        goto after_0;
    // 0x8022DE54: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x8022DE58: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022DE5C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022DE60: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022DE64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022DE68: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022DE6C: jr          $ra
    // 0x8022DE70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022DE70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022D90C_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D90C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D910: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D914: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D918: beq         $a1, $zero, L_8022D964
    if (ctx->r5 == 0) {
        // 0x8022D91C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8022D964;
    }
    // 0x8022D91C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022D920: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022D924: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022D928: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    // 0x8022D92C: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x8022D930: sltiu       $v0, $v0, 0x3D
    ctx->r2 = ctx->r2 < 0X3D ? 1 : 0;
    // 0x8022D934: bne         $v0, $zero, L_8022D964
    if (ctx->r2 != 0) {
        // 0x8022D938: nop
    
            goto L_8022D964;
    }
    // 0x8022D938: nop

    // 0x8022D93C: jal         0x800A3450
    // 0x8022D940: sh          $zero, 0x348($s0)
    MEM_H(0X348, ctx->r16) = 0;
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022D940: sh          $zero, 0x348($s0)
    MEM_H(0X348, ctx->r16) = 0;
    after_0:
    // 0x8022D944: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
    // 0x8022D948: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    // 0x8022D94C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022D950: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x8022D954: addiu       $v0, $v0, 0x7D0
    ctx->r2 = ADD32(ctx->r2, 0X7D0);
    // 0x8022D958: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022D95C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022D960: sh          $v1, 0x34A($s0)
    MEM_H(0X34A, ctx->r16) = ctx->r3;
L_8022D964:
    // 0x8022D964: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022D968: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D96C: jr          $ra
    // 0x8022D970: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022D970: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022DE74_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DE74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022DE78: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022DE7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022DE80: jal         0x8022E400
    // 0x8022DE84: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8022E400_ovl12(rdram, ctx);
        goto after_0;
    // 0x8022DE84: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x8022DE88: jal         0x8022E0C8
    // 0x8022DE8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022E0C8_ovl12(rdram, ctx);
        goto after_1;
    // 0x8022DE8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022DE90: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022DE94: bne         $v0, $zero, L_8022DEB4
    if (ctx->r2 != 0) {
        // 0x8022DE98: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022DEB4;
    }
    // 0x8022DE98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022DE9C: lh          $a1, 0x44($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X44);
    // 0x8022DEA0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022DEA4: jal         0x8004DA90
    // 0x8022DEA8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x8022DEA8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x8022DEAC: j           L_8022DEDC
    // 0x8022DEB0: nop

        goto L_8022DEDC;
    // 0x8022DEB0: nop

L_8022DEB4:
    // 0x8022DEB4: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022DEB8: lhu         $v1, 0xE2($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0XE2);
    // 0x8022DEBC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022DEC0: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x8022DEC4: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
    // 0x8022DEC8: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8022DECC: sra         $v0, $v0, 5
    ctx->r2 = S32(SIGNED(ctx->r2) >> 5);
    // 0x8022DED0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022DED4: jal         0x8022E284
    // 0x8022DED8: sh          $v1, 0xE2($a0)
    MEM_H(0XE2, ctx->r4) = ctx->r3;
    func_8022E284_ovl12(rdram, ctx);
        goto after_3;
    // 0x8022DED8: sh          $v1, 0xE2($a0)
    MEM_H(0XE2, ctx->r4) = ctx->r3;
    after_3:
L_8022DEDC:
    // 0x8022DEDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022DEE0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022DEE4: jr          $ra
    // 0x8022DEE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022DEE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80231E0C_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231E0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231E10: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231E14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80231E18: jal         0x80231EE8
    // 0x80231E1C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_80231EE8_ovl12(rdram, ctx);
        goto after_0;
    // 0x80231E1C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x80231E20: jal         0x80231F58
    // 0x80231E24: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80231F58_ovl12(rdram, ctx);
        goto after_1;
    // 0x80231E24: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80231E28: jal         0x802327CC
    // 0x80231E2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802327CC_ovl12(rdram, ctx);
        goto after_2;
    // 0x80231E2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80231E30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80231E34: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231E38: jr          $ra
    // 0x80231E3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80231E3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
