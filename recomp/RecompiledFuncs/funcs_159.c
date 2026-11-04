#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8022E378_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E378: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022E37C: sh          $v0, 0x8($a1)
    MEM_H(0X8, ctx->r5) = ctx->r2;
    // 0x8022E380: sh          $v0, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r2;
    // 0x8022E384: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022E388: addiu       $v0, $v0, -0x16CC
    ctx->r2 = ADD32(ctx->r2, -0X16CC);
    // 0x8022E38C: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x8022E390: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8022E394: sh          $zero, 0x4($a1)
    MEM_H(0X4, ctx->r5) = 0;
    // 0x8022E398: sh          $zero, 0x0($a1)
    MEM_H(0X0, ctx->r5) = 0;
    // 0x8022E39C: sh          $zero, 0xA($a1)
    MEM_H(0XA, ctx->r5) = 0;
    // 0x8022E3A0: sh          $zero, 0x6($a1)
    MEM_H(0X6, ctx->r5) = 0;
    // 0x8022E3A4: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x8022E3A8: sw          $v0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r2;
    // 0x8022E3AC: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x8022E3B0: jr          $ra
    // 0x8022E3B4: sw          $v0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x8022E3B4: sw          $v0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_8022ED3C_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022ED3C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022ED40: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8022ED44: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022ED48: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x8022ED4C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022ED50: lh          $a1, 0x44($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X44);
    // 0x8022ED54: lh          $a2, 0x46($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X46);
    // 0x8022ED58: jal         0x8004DA90
    // 0x8022ED5C: lh          $a3, 0x48($s1)
    ctx->r7 = MEM_H(ctx->r17, 0X48);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8022ED5C: lh          $a3, 0x48($s1)
    ctx->r7 = MEM_H(ctx->r17, 0X48);
    after_0:
    // 0x8022ED60: lh          $v0, 0x4E2($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4E2);
    // 0x8022ED64: bne         $v0, $zero, L_8022EDFC
    if (ctx->r2 != 0) {
        // 0x8022ED68: addiu       $s0, $s1, 0x4FA
        ctx->r16 = ADD32(ctx->r17, 0X4FA);
            goto L_8022EDFC;
    }
    // 0x8022ED68: addiu       $s0, $s1, 0x4FA
    ctx->r16 = ADD32(ctx->r17, 0X4FA);
    // 0x8022ED6C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022ED70: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x8022ED74: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022ED78: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022ED7C: jal         0x8009A3B4
    // 0x8022ED80: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022ED80: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    after_1:
    // 0x8022ED84: lhu         $v0, 0x56($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X56);
    // 0x8022ED88: lh          $v1, 0x4FA($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X4FA);
    // 0x8022ED8C: addiu       $v0, $v0, -0x400
    ctx->r2 = ADD32(ctx->r2, -0X400);
    // 0x8022ED90: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022ED94: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022ED98: sh          $v0, 0x502($s1)
    MEM_H(0X502, ctx->r17) = ctx->r2;
    // 0x8022ED9C: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x8022EDA0: lh          $v0, 0x4FC($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4FC);
    // 0x8022EDA4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022EDA8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8022EDAC: lh          $v0, 0x4FE($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4FE);
    // 0x8022EDB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022EDB4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022EDB8: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8022EDBC: lh          $a2, 0x502($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X502);
    // 0x8022EDC0: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x8022EDC4: addiu       $a3, $zero, 0x7000
    ctx->r7 = ADD32(0, 0X7000);
    // 0x8022EDC8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8022EDCC: jal         0x8004DBA0
    // 0x8022EDD0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_2;
    // 0x8022EDD0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_2:
    // 0x8022EDD4: lhu         $v1, 0x502($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X502);
    // 0x8022EDD8: lbu         $a0, 0xA($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0XA);
    // 0x8022EDDC: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022EDE0: sh          $v0, 0x4E2($s1)
    MEM_H(0X4E2, ctx->r17) = ctx->r2;
    // 0x8022EDE4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8022EDE8: addiu       $v1, $v1, 0x800
    ctx->r3 = ADD32(ctx->r3, 0X800);
    // 0x8022EDEC: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022EDF0: sh          $v1, 0x502($s1)
    MEM_H(0X502, ctx->r17) = ctx->r3;
    // 0x8022EDF4: j           L_8022EE10
    // 0x8022EDF8: sb          $a0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r4;
        goto L_8022EE10;
    // 0x8022EDF8: sb          $a0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r4;
L_8022EDFC:
    // 0x8022EDFC: jal         0x8022F79C
    // 0x8022EE00: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8022F79C_ovl25(rdram, ctx);
        goto after_3;
    // 0x8022EE00: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
    // 0x8022EE04: lhu         $v0, 0x4E2($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4E2);
    // 0x8022EE08: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022EE0C: sh          $v0, 0x4E2($s1)
    MEM_H(0X4E2, ctx->r17) = ctx->r2;
L_8022EE10:
    // 0x8022EE10: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8022EE14: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022EE18: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022EE1C: jr          $ra
    // 0x8022EE20: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022EE20: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80237150_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237150: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80237154: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80237158: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023715C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80237160: jal         0x80032498
    // 0x80237164: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80032498_D898(rdram, ctx);
        goto after_0;
    // 0x80237164: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_0:
    // 0x80237168: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8023716C: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x80237170: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80237174: lhu         $v0, 0x1C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1C);
    // 0x80237178: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8023717C: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x80237180: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80237184: jal         0x800324B4
    // 0x80237188: sh          $v0, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r2;
    func_800324B4_D8B4(rdram, ctx);
        goto after_1;
    // 0x80237188: sh          $v0, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r2;
    after_1:
    // 0x8023718C: lbu         $a3, 0xD($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XD);
    // 0x80237190: lbu         $t0, 0xF($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0XF);
    // 0x80237194: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237198: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x8023719C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802371A0: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x802371A4: lhu         $v0, 0x20($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X20);
    // 0x802371A8: lbu         $a1, 0xE($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XE);
    // 0x802371AC: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x802371B0: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x802371B4: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x802371B8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802371BC: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x802371C0: sb          $a1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r5;
    // 0x802371C4: sll         $a1, $a1, 24
    ctx->r5 = S32(ctx->r5 << 24);
    // 0x802371C8: sra         $a1, $a1, 24
    ctx->r5 = S32(SIGNED(ctx->r5) >> 24);
    // 0x802371CC: sh          $v0, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r2;
    // 0x802371D0: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
    // 0x802371D4: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x802371D8: sll         $a2, $v0, 2
    ctx->r6 = S32(ctx->r2 << 2);
    // 0x802371DC: sll         $a1, $v0, 18
    ctx->r5 = S32(ctx->r2 << 18);
    // 0x802371E0: sll         $v0, $v0, 10
    ctx->r2 = S32(ctx->r2 << 10);
    // 0x802371E4: lui         $v1, 0x2E00
    ctx->r3 = S32(0X2E00 << 16);
    // 0x802371E8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802371EC: lhu         $v1, 0x24($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X24);
    // 0x802371F0: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x802371F4: addu        $a1, $a1, $a2
    ctx->r5 = ADD32(ctx->r5, ctx->r6);
    // 0x802371F8: sw          $a1, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r5;
    // 0x802371FC: sb          $a3, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r7;
    // 0x80237200: sb          $t0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r8;
    // 0x80237204: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x80237208: jal         0x802372D8
    // 0x8023720C: sh          $v1, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r3;
    func_802372D8_ovl25(rdram, ctx);
        goto after_2;
    // 0x8023720C: sh          $v1, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r3;
    after_2:
    // 0x80237210: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x80237214: bne         $v0, $zero, L_8023722C
    if (ctx->r2 != 0) {
        // 0x80237218: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_8023722C;
    }
    // 0x80237218: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8023721C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80237220: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    // 0x80237224: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80237228: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_8023722C:
    // 0x8023722C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80237230: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80237234: jr          $ra
    // 0x80237238: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80237238: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229140_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229140: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229144: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229148: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022914C: jal         0x8003B878
    // 0x80229150: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8003B878_16C78(rdram, ctx);
        goto after_0;
    // 0x80229150: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x80229154: lui         $v1, 0x2C80
    ctx->r3 = S32(0X2C80 << 16);
    // 0x80229158: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x8022915C: lui         $a1, 0x3D08
    ctx->r5 = S32(0X3D08 << 16);
    // 0x80229160: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
    // 0x80229164: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
    // 0x80229168: lhu         $a0, 0x2($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X2);
    // 0x8022916C: ori         $a1, $a1, 0x40C0
    ctx->r5 = ctx->r5 | 0X40C0;
    // 0x80229170: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80229174: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x80229178: sw          $v1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r3;
    // 0x8022917C: lh          $a0, 0x4($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X4);
    // 0x80229180: lui         $v1, 0xE
    ctx->r3 = S32(0XE << 16);
    // 0x80229184: ori         $v1, $v1, 0x40DF
    ctx->r3 = ctx->r3 | 0X40DF;
    // 0x80229188: sw          $v1, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r3;
    // 0x8022918C: addiu       $v1, $zero, 0x5FC0
    ctx->r3 = ADD32(0, 0X5FC0);
    // 0x80229190: sw          $v1, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r3;
    // 0x80229194: addiu       $v1, $zero, 0x5FDF
    ctx->r3 = ADD32(0, 0X5FDF);
    // 0x80229198: sw          $v1, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r3;
    // 0x8022919C: addiu       $v1, $zero, 0x40
    ctx->r3 = ADD32(0, 0X40);
    // 0x802291A0: sw          $v1, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r3;
    // 0x802291A4: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x802291A8: sw          $a1, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r5;
    // 0x802291AC: sw          $v1, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r3;
    // 0x802291B0: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x802291B4: sw          $a0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r4;
    // 0x802291B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802291BC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802291C0: jr          $ra
    // 0x802291C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802291C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022ADD8_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022ADD8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022ADDC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022ADE0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022ADE4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022ADE8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022ADEC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022ADF0: lbu         $v0, 0x4($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X4);
    // 0x8022ADF4: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x8022ADF8: beq         $v0, $zero, L_8022AE94
    if (ctx->r2 == 0) {
        // 0x8022ADFC: addu        $s2, $a1, $zero
        ctx->r18 = ADD32(ctx->r5, 0);
            goto L_8022AE94;
    }
    // 0x8022ADFC: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x8022AE00: lhu         $v0, 0x6($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X6);
    // 0x8022AE04: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022AE08: sra         $v0, $v0, 18
    ctx->r2 = S32(SIGNED(ctx->r2) >> 18);
    // 0x8022AE0C: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x8022AE10: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x8022AE14: jal         0x8003B878
    // 0x8022AE18: lbu         $s0, -0x1E58($s0)
    ctx->r16 = MEM_BU(ctx->r16, -0X1E58);
    func_8003B878_16C78(rdram, ctx);
        goto after_0;
    // 0x8022AE18: lbu         $s0, -0x1E58($s0)
    ctx->r16 = MEM_BU(ctx->r16, -0X1E58);
    after_0:
    // 0x8022AE1C: lbu         $a0, 0x5($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X5);
    // 0x8022AE20: sll         $v1, $a0, 8
    ctx->r3 = S32(ctx->r4 << 8);
    // 0x8022AE24: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8022AE28: sll         $v1, $v1, 8
    ctx->r3 = S32(ctx->r3 << 8);
    // 0x8022AE2C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8022AE30: subu        $v1, $s2, $v1
    ctx->r3 = SUB32(ctx->r18, ctx->r3);
    // 0x8022AE34: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
    // 0x8022AE38: lh          $v1, 0xA($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XA);
    // 0x8022AE3C: lhu         $a0, 0xC($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0XC);
    // 0x8022AE40: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022AE44: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x8022AE48: sw          $v1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r3;
    // 0x8022AE4C: lh          $a1, 0xE($s1)
    ctx->r5 = MEM_H(ctx->r17, 0XE);
    // 0x8022AE50: lui         $v1, 0x3D48
    ctx->r3 = S32(0X3D48 << 16);
    // 0x8022AE54: or          $v1, $s0, $v1
    ctx->r3 = ctx->r16 | ctx->r3;
    // 0x8022AE58: addiu       $a0, $s0, 0x1F
    ctx->r4 = ADD32(ctx->r16, 0X1F);
    // 0x8022AE5C: sw          $v1, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r3;
    // 0x8022AE60: lui         $v1, 0x4E
    ctx->r3 = S32(0X4E << 16);
    // 0x8022AE64: or          $v1, $a0, $v1
    ctx->r3 = ctx->r4 | ctx->r3;
    // 0x8022AE68: ori         $s0, $s0, 0x1F00
    ctx->r16 = ctx->r16 | 0X1F00;
    // 0x8022AE6C: ori         $a0, $a0, 0x1F00
    ctx->r4 = ctx->r4 | 0X1F00;
    // 0x8022AE70: sw          $v1, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r3;
    // 0x8022AE74: sw          $s0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r16;
    // 0x8022AE78: sw          $a0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r4;
    // 0x8022AE7C: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8022AE80: sw          $a1, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r5;
    // 0x8022AE84: lhu         $a0, 0x8($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X8);
    // 0x8022AE88: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x8022AE8C: sw          $v1, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r3;
    // 0x8022AE90: sw          $a0, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r4;
L_8022AE94:
    // 0x8022AE94: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022AE98: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022AE9C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022AEA0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022AEA4: jr          $ra
    // 0x8022AEA8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022AEA8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022FA14_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FA14: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022FA18: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022FA1C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022FA20: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022FA24: lh          $v0, 0x4E4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4E4);
    // 0x8022FA28: bne         $v0, $zero, L_8022FA78
    if (ctx->r2 != 0) {
        // 0x8022FA2C: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022FA78;
    }
    // 0x8022FA2C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022FA30: lh          $a1, 0x4E6($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X4E6);
    // 0x8022FA34: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022FA38: jal         0x8022FA90
    // 0x8022FA3C: sh          $v0, 0x4E4($s0)
    MEM_H(0X4E4, ctx->r16) = ctx->r2;
    func_8022FA90_ovl25(rdram, ctx);
        goto after_0;
    // 0x8022FA3C: sh          $v0, 0x4E4($s0)
    MEM_H(0X4E4, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022FA40: lh          $a1, 0x4E6($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X4E6);
    // 0x8022FA44: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FA48: jal         0x8022FA90
    // 0x8022FA4C: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    func_8022FA90_ovl25(rdram, ctx);
        goto after_1;
    // 0x8022FA4C: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    after_1:
    // 0x8022FA50: lhu         $v0, 0x4E6($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4E6);
    // 0x8022FA54: addiu       $a0, $zero, 0x1A9
    ctx->r4 = ADD32(0, 0X1A9);
    // 0x8022FA58: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022FA5C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022FA60: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022FA64: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8022FA68: jal         0x8002A2F8
    // 0x8022FA6C: sh          $v0, 0x4E6($s0)
    MEM_H(0X4E6, ctx->r16) = ctx->r2;
    func_8002A2F8_56F8(rdram, ctx);
        goto after_2;
    // 0x8022FA6C: sh          $v0, 0x4E6($s0)
    MEM_H(0X4E6, ctx->r16) = ctx->r2;
    after_2:
    // 0x8022FA70: j           L_8022FA80
    // 0x8022FA74: nop

        goto L_8022FA80;
    // 0x8022FA74: nop

L_8022FA78:
    // 0x8022FA78: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022FA7C: sh          $v0, 0x4E4($s0)
    MEM_H(0X4E4, ctx->r16) = ctx->r2;
L_8022FA80:
    // 0x8022FA80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022FA84: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022FA88: jr          $ra
    // 0x8022FA8C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022FA8C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022F3EC_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F3EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F3F0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F3F4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F3F8: addiu       $a0, $s0, 0x4F0
    ctx->r4 = ADD32(ctx->r16, 0X4F0);
    // 0x8022F3FC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022F400: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022F404: jal         0x8009A3B4
    // 0x8022F408: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022F408: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022F40C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022F410: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022F414: sh          $v0, 0x4E2($s0)
    MEM_H(0X4E2, ctx->r16) = ctx->r2;
    // 0x8022F418: addiu       $v0, $zero, 0x600
    ctx->r2 = ADD32(0, 0X600);
    // 0x8022F41C: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022F420: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F424: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8022F428: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8022F42C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022F430: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022F434: sh          $v1, 0x4F8($s0)
    MEM_H(0X4F8, ctx->r16) = ctx->r3;
    // 0x8022F438: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022F43C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F440: jr          $ra
    // 0x8022F444: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F444: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80236410_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236410: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80236414: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80236418: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x8023641C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80236420: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80236424: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80236428: lw          $v0, -0x10A0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X10A0);
    // 0x8023642C: jalr        $v0
    // 0x80236430: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80236430: nop

    after_0:
    // 0x80236434: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80236438: jr          $ra
    // 0x8023643C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023643C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80236440_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236440: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80236444: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80236448: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023644C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80236450: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80236454: bne         $v0, $zero, L_802364B0
    if (ctx->r2 != 0) {
        // 0x80236458: lui         $v1, 0x2E80
        ctx->r3 = S32(0X2E80 << 16);
            goto L_802364B0;
    }
    // 0x80236458: lui         $v1, 0x2E80
    ctx->r3 = S32(0X2E80 << 16);
    // 0x8023645C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80236460: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x80236464: sw          $v1, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r3;
    // 0x80236468: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8023646C: lui         $a0, 0x3D48
    ctx->r4 = S32(0X3D48 << 16);
    // 0x80236470: ori         $a0, $a0, 0xE
    ctx->r4 = ctx->r4 | 0XE;
    // 0x80236474: sw          $a0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r4;
    // 0x80236478: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8023647C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80236480: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80236484: lbu         $v0, -0x108C($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X108C);
    // 0x80236488: sb          $v0, 0x22($s0)
    MEM_B(0X22, ctx->r16) = ctx->r2;
    // 0x8023648C: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80236490: lbu         $a0, -0x108B($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X108B);
    // 0x80236494: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80236498: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x8023649C: sh          $v0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r2;
    // 0x802364A0: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x802364A4: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x802364A8: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    // 0x802364AC: sb          $a0, 0x23($s0)
    MEM_B(0X23, ctx->r16) = ctx->r4;
L_802364B0:
    // 0x802364B0: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x802364B4: sll         $a0, $v0, 24
    ctx->r4 = S32(ctx->r2 << 24);
    // 0x802364B8: sra         $v0, $a0, 24
    ctx->r2 = S32(SIGNED(ctx->r4) >> 24);
    // 0x802364BC: slti        $v0, $v0, 0xC
    ctx->r2 = SIGNED(ctx->r2) < 0XC ? 1 : 0;
    // 0x802364C0: beq         $v0, $zero, L_8023658C
    if (ctx->r2 == 0) {
        // 0x802364C4: lui         $v1, 0x2AAA
        ctx->r3 = S32(0X2AAA << 16);
            goto L_8023658C;
    }
    // 0x802364C4: lui         $v1, 0x2AAA
    ctx->r3 = S32(0X2AAA << 16);
    // 0x802364C8: ori         $v1, $v1, 0xAAAB
    ctx->r3 = ctx->r3 | 0XAAAB;
    // 0x802364CC: sra         $v0, $a0, 25
    ctx->r2 = S32(SIGNED(ctx->r4) >> 25);
    // 0x802364D0: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x802364D4: sra         $a0, $v0, 24
    ctx->r4 = S32(SIGNED(ctx->r2) >> 24);
    // 0x802364D8: mult        $a0, $v1
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802364DC: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x802364E0: mfhi        $t0
    ctx->r8 = hi;
    // 0x802364E4: subu        $v0, $t0, $v0
    ctx->r2 = SUB32(ctx->r8, ctx->r2);
    // 0x802364E8: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x802364EC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802364F0: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x802364F4: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x802364F8: sb          $a0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r4;
    // 0x802364FC: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x80236500: sra         $a0, $a0, 23
    ctx->r4 = S32(SIGNED(ctx->r4) >> 23);
    // 0x80236504: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x80236508: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8023650C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80236510: lbu         $v1, -0x108C($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X108C);
    // 0x80236514: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80236518: sb          $v1, 0x22($s0)
    MEM_B(0X22, ctx->r16) = ctx->r3;
    // 0x8023651C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80236520: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80236524: lbu         $v0, -0x108B($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X108B);
    // 0x80236528: jal         0x800A3450
    // 0x8023652C: sb          $v0, 0x23($s0)
    MEM_B(0X23, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8023652C: sb          $v0, 0x23($s0)
    MEM_B(0X23, ctx->r16) = ctx->r2;
    after_0:
    // 0x80236530: lhu         $v1, 0x1E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1E);
    // 0x80236534: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80236538: addiu       $v1, $v1, -0x6
    ctx->r3 = ADD32(ctx->r3, -0X6);
    // 0x8023653C: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80236540: jal         0x800A3450
    // 0x80236544: sh          $v1, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x80236544: sh          $v1, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r3;
    after_1:
    // 0x80236548: lui         $a3, 0xFFF7
    ctx->r7 = S32(0XFFF7 << 16);
    // 0x8023654C: lbu         $a2, 0xC($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0XC);
    // 0x80236550: lhu         $v1, 0x20($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X20);
    // 0x80236554: ori         $a3, $a3, 0xF7F8
    ctx->r7 = ctx->r7 | 0XF7F8;
    // 0x80236558: lhu         $a0, 0x24($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X24);
    // 0x8023655C: lw          $a1, 0x18($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X18);
    // 0x80236560: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80236564: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x80236568: addiu       $v1, $v1, 0xC
    ctx->r3 = ADD32(ctx->r3, 0XC);
    // 0x8023656C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80236570: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x80236574: addu        $a1, $a1, $a3
    ctx->r5 = ADD32(ctx->r5, ctx->r7);
    // 0x80236578: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    // 0x8023657C: sh          $a0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r4;
    // 0x80236580: sw          $a1, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r5;
    // 0x80236584: j           L_80236594
    // 0x80236588: sb          $a2, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r6;
        goto L_80236594;
    // 0x80236588: sb          $a2, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r6;
L_8023658C:
    // 0x8023658C: jal         0x8004F5C4
    // 0x80236590: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_2;
    // 0x80236590: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
L_80236594:
    // 0x80236594: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80236598: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023659C: jr          $ra
    // 0x802365A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802365A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229D10_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229D10: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80229D14: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80229D18: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80229D1C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80229D20: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80229D24: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80229D28: lb          $v0, 0xC($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XC);
    // 0x80229D2C: lbu         $a0, 0x8($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X8);
    // 0x80229D30: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x80229D34: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80229D38: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80229D3C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80229D40: addiu       $v0, $v0, -0x1FE0
    ctx->r2 = ADD32(ctx->r2, -0X1FE0);
    // 0x80229D44: beq         $a0, $zero, L_80229D60
    if (ctx->r4 == 0) {
        // 0x80229D48: addu        $s2, $v1, $v0
        ctx->r18 = ADD32(ctx->r3, ctx->r2);
            goto L_80229D60;
    }
    // 0x80229D48: addu        $s2, $v1, $v0
    ctx->r18 = ADD32(ctx->r3, ctx->r2);
    // 0x80229D4C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229D50: beq         $a0, $v0, L_80229DA0
    if (ctx->r4 == ctx->r2) {
        // 0x80229D54: nop
    
            goto L_80229DA0;
    }
    // 0x80229D54: nop

    // 0x80229D58: j           L_80229EB8
    // 0x80229D5C: nop

        goto L_80229EB8;
    // 0x80229D5C: nop

L_80229D60:
    // 0x80229D60: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80229D64: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x80229D68: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x80229D6C: lbu         $v0, 0x20($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X20);
    // 0x80229D70: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80229D74: addiu       $a1, $s1, 0x3
    ctx->r5 = ADD32(ctx->r17, 0X3);
    // 0x80229D78: jal         0x8004D5D4
    // 0x80229D7C: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80229D7C: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    after_0:
    // 0x80229D80: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x80229D84: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x80229D88: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x80229D8C: sw          $v1, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->r3;
    // 0x80229D90: sh          $zero, 0xE($s1)
    MEM_H(0XE, ctx->r17) = 0;
    // 0x80229D94: sb          $zero, 0xD($s1)
    MEM_B(0XD, ctx->r17) = 0;
    // 0x80229D98: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229D9C: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_80229DA0:
    // 0x80229DA0: lhu         $s0, 0xE($s1)
    ctx->r16 = MEM_HU(ctx->r17, 0XE);
    // 0x80229DA4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80229DA8: sh          $s0, 0xE($s1)
    MEM_H(0XE, ctx->r17) = ctx->r16;
    // 0x80229DAC: lh          $v1, 0x8($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X8);
    // 0x80229DB0: andi        $s0, $s0, 0xFFFF
    ctx->r16 = ctx->r16 & 0XFFFF;
    // 0x80229DB4: mult        $v1, $s0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80229DB8: mflo        $v1
    ctx->r3 = lo;
    // 0x80229DBC: lh          $v0, 0x0($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X0);
    // 0x80229DC0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80229DC4: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x80229DC8: sh          $v0, 0x38($s1)
    MEM_H(0X38, ctx->r17) = ctx->r2;
    // 0x80229DCC: lh          $v1, 0xA($s2)
    ctx->r3 = MEM_H(ctx->r18, 0XA);
    // 0x80229DD0: mult        $v1, $s0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80229DD4: mflo        $v1
    ctx->r3 = lo;
    // 0x80229DD8: lh          $v0, 0x2($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X2);
    // 0x80229DDC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80229DE0: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x80229DE4: addiu       $v0, $v0, -0x1B1C
    ctx->r2 = ADD32(ctx->r2, -0X1B1C);
    // 0x80229DE8: sh          $v0, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r2;
    // 0x80229DEC: lh          $v1, 0xC($s2)
    ctx->r3 = MEM_H(ctx->r18, 0XC);
    // 0x80229DF0: mult        $v1, $s0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80229DF4: mflo        $v1
    ctx->r3 = lo;
    // 0x80229DF8: lh          $v0, 0x4($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X4);
    // 0x80229DFC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80229E00: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x80229E04: sh          $v0, 0x3C($s1)
    MEM_H(0X3C, ctx->r17) = ctx->r2;
    // 0x80229E08: lh          $v0, 0x18($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X18);
    // 0x80229E0C: mult        $v0, $s0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80229E10: mflo        $v0
    ctx->r2 = lo;
    // 0x80229E14: lhu         $v1, 0x10($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X10);
    // 0x80229E18: sll         $v0, $v0, 7
    ctx->r2 = S32(ctx->r2 << 7);
    // 0x80229E1C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80229E20: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    // 0x80229E24: lh          $v0, 0x1A($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X1A);
    // 0x80229E28: mult        $v0, $s0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80229E2C: mflo        $v0
    ctx->r2 = lo;
    // 0x80229E30: lhu         $v1, 0x12($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X12);
    // 0x80229E34: sll         $v0, $v0, 7
    ctx->r2 = S32(ctx->r2 << 7);
    // 0x80229E38: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80229E3C: sh          $v1, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r3;
    // 0x80229E40: lh          $v0, 0x1C($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X1C);
    // 0x80229E44: mult        $v0, $s0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80229E48: mflo        $v0
    ctx->r2 = lo;
    // 0x80229E4C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80229E50: addiu       $s1, $s1, 0x18
    ctx->r17 = ADD32(ctx->r17, 0X18);
    // 0x80229E54: lhu         $v1, 0x14($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X14);
    // 0x80229E58: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80229E5C: sll         $v0, $v0, 7
    ctx->r2 = S32(ctx->r2 << 7);
    // 0x80229E60: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80229E64: jal         0x80031600
    // 0x80229E68: sh          $v1, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r3;
    func_80031600_CA00(rdram, ctx);
        goto after_1;
    // 0x80229E68: sh          $v1, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r3;
    after_1:
    // 0x80229E6C: lh          $v0, 0xE($s2)
    ctx->r2 = MEM_H(ctx->r18, 0XE);
    // 0x80229E70: mult        $v0, $s0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80229E74: mflo        $v0
    ctx->r2 = lo;
    // 0x80229E78: lh          $v1, 0x6($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X6);
    // 0x80229E7C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80229E80: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x80229E84: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80229E88: sra         $v1, $v1, 4
    ctx->r3 = S32(SIGNED(ctx->r3) >> 4);
    // 0x80229E8C: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x80229E90: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80229E94: nor         $v0, $zero, $v0
    ctx->r2 = ~(0 | ctx->r2);
    // 0x80229E98: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x80229E9C: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80229EA0: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80229EA4: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80229EA8: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x80229EAC: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x80229EB0: jal         0x80031DA8
    // 0x80229EB4: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_2;
    // 0x80229EB4: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    after_2:
L_80229EB8:
    // 0x80229EB8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80229EBC: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80229EC0: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80229EC4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80229EC8: jr          $ra
    // 0x80229ECC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80229ECC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80225340_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225340: jr          $ra
    // 0x80225344: nop

    TRACE_RETURN()
    return;
    // 0x80225344: nop

;}
RECOMP_FUNC void func_8023B4E8_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B4E8: jr          $ra
    // 0x8023B4EC: nop

    TRACE_RETURN()
    return;
    // 0x8023B4EC: nop

;}
RECOMP_FUNC void func_8022C198_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C198: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022C19C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022C1A0: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x8022C1A4: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8022C1A8: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022C1AC: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x8022C1B0: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x8022C1B4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022C1B8: addu        $v1, $v0, $v1
    ctx->r3 = ADD32(ctx->r2, ctx->r3);
    // 0x8022C1BC: lb          $a0, 0x1($v1)
    ctx->r4 = MEM_B(ctx->r3, 0X1);
    // 0x8022C1C0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022C1C4: addiu       $v0, $zero, 0x7E
    ctx->r2 = ADD32(0, 0X7E);
    // 0x8022C1C8: beq         $a0, $v0, L_8022C1E4
    if (ctx->r4 == ctx->r2) {
        // 0x8022C1CC: addiu       $v0, $zero, 0x7F
        ctx->r2 = ADD32(0, 0X7F);
            goto L_8022C1E4;
    }
    // 0x8022C1CC: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x8022C1D0: bne         $a0, $v0, L_8022C1E0
    if (ctx->r4 != ctx->r2) {
        // 0x8022C1D4: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_8022C1E0;
    }
    // 0x8022C1D4: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022C1D8: j           L_8022C1E4
    // 0x8022C1DC: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
        goto L_8022C1E4;
    // 0x8022C1DC: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
L_8022C1E0:
    // 0x8022C1E0: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
L_8022C1E4:
    // 0x8022C1E4: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x8022C1E8: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x8022C1EC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022C1F0: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x8022C1F4: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x8022C1F8: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x8022C1FC: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022C200: sra         $a0, $v0, 24
    ctx->r4 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8022C204: beq         $a0, $v1, L_8022C22C
    if (ctx->r4 == ctx->r3) {
        // 0x8022C208: addiu       $a1, $zero, 0x33
        ctx->r5 = ADD32(0, 0X33);
            goto L_8022C22C;
    }
    // 0x8022C208: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x8022C20C: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x8022C210: jal         0x8003B85C
    // 0x8022C214: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_0;
    // 0x8022C214: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_0:
    // 0x8022C218: lw          $a0, 0x88($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X88);
    // 0x8022C21C: lui         $a1, 0x10
    ctx->r5 = S32(0X10 << 16);
    // 0x8022C220: ori         $a1, $a1, 0xF
    ctx->r5 = ctx->r5 | 0XF;
    // 0x8022C224: jal         0x8003B840
    // 0x8022C228: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_1;
    // 0x8022C228: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_1:
L_8022C22C:
    // 0x8022C22C: lb          $a0, 0x11($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X11);
    // 0x8022C230: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x8022C234: lbu         $v1, 0xC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XC);
    // 0x8022C238: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x8022C23C: sb          $v1, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r3;
    // 0x8022C240: lb          $v1, 0x1($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X1);
    // 0x8022C244: addiu       $v0, $zero, 0x7E
    ctx->r2 = ADD32(0, 0X7E);
    // 0x8022C248: beq         $v1, $v0, L_8022C264
    if (ctx->r3 == ctx->r2) {
        // 0x8022C24C: addiu       $v0, $zero, 0x7F
        ctx->r2 = ADD32(0, 0X7F);
            goto L_8022C264;
    }
    // 0x8022C24C: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x8022C250: bne         $v1, $v0, L_8022C260
    if (ctx->r3 != ctx->r2) {
        // 0x8022C254: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_8022C260;
    }
    // 0x8022C254: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8022C258: j           L_8022C264
    // 0x8022C25C: sb          $zero, 0x11($s0)
    MEM_B(0X11, ctx->r16) = 0;
        goto L_8022C264;
    // 0x8022C25C: sb          $zero, 0x11($s0)
    MEM_B(0X11, ctx->r16) = 0;
L_8022C260:
    // 0x8022C260: sb          $v0, 0x11($s0)
    MEM_B(0X11, ctx->r16) = ctx->r2;
L_8022C264:
    // 0x8022C264: lb          $v1, 0x11($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X11);
    // 0x8022C268: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x8022C26C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022C270: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x8022C274: lb          $v1, 0x10($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X10);
    // 0x8022C278: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    // 0x8022C27C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022C280: sra         $a0, $v0, 24
    ctx->r4 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8022C284: beq         $a0, $v1, L_8022C2AC
    if (ctx->r4 == ctx->r3) {
        // 0x8022C288: addiu       $a1, $zero, 0x33
        ctx->r5 = ADD32(0, 0X33);
            goto L_8022C2AC;
    }
    // 0x8022C288: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x8022C28C: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x8022C290: jal         0x8003B85C
    // 0x8022C294: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_2;
    // 0x8022C294: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_2:
    // 0x8022C298: lw          $a0, 0x88($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X88);
    // 0x8022C29C: lui         $a1, 0x12
    ctx->r5 = S32(0X12 << 16);
    // 0x8022C2A0: ori         $a1, $a1, 0x11
    ctx->r5 = ctx->r5 | 0X11;
    // 0x8022C2A4: jal         0x8003B840
    // 0x8022C2A8: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_3;
    // 0x8022C2A8: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_3:
L_8022C2AC:
    // 0x8022C2AC: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x8022C2B0: sb          $v0, 0x10($s0)
    MEM_B(0X10, ctx->r16) = ctx->r2;
    // 0x8022C2B4: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8022C2B8: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022C2BC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022C2C0: jr          $ra
    // 0x8022C2C4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022C2C4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8022C2C8: nop

    // 0x8022C2CC: nop

;}
RECOMP_FUNC void func_8022B3E0_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B3E0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022B3E4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B3E8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B3EC: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022B3F0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022B3F4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022B3F8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022B3FC: jal         0x8009A3B4
    // 0x8022B400: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022B400: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x8022B404: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022B408: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022B40C: jal         0x8009A3B4
    // 0x8022B410: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022B410: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022B414: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022B418: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022B41C: jal         0x8009A3B4
    // 0x8022B420: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022B420: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022B424: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022B428: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022B42C: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x8022B430: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x8022B434: beq         $v0, $zero, L_8022B534
    if (ctx->r2 == 0) {
        // 0x8022B438: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_8022B534;
    }
    // 0x8022B438: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x8022B43C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022B440: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022B444: addu        $at, $at, $v0
    gpr jr_addend_8022B44C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022B448: lw          $v0, 0xE68($at)
    ctx->r2 = ADD32(ctx->r1, 0XE68);
    // 0x8022B44C: jr          $v0
    // 0x8022B450: nop

    switch (jr_addend_8022B44C >> 2) {
        case 0: goto L_8022B454; break;
        case 1: goto L_8022B4D0; break;
        case 2: goto L_8022B4EC; break;
        case 3: goto L_8022B504; break;
        case 4: goto L_8022B520; break;
        case 5: goto L_8022B534; break;
        default: switch_error(__func__, 0x8022B44C, 0x80240E68);
    }
    // 0x8022B450: nop

L_8022B454:
    // 0x8022B454: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022B458: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B45C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022B460: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022B464: jal         0x8004D5D4
    // 0x8022B468: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_3;
    // 0x8022B468: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_3:
    // 0x8022B46C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B470: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022B474: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022B478: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022B47C: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022B480: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022B484: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022B488: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022B48C: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022B490: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022B494: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022B498: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022B49C: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x8022B4A0: addiu       $v0, $zero, 0x37
    ctx->r2 = ADD32(0, 0X37);
    // 0x8022B4A4: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x8022B4A8: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
    // 0x8022B4AC: jal         0x8022B64C
    // 0x8022B4B0: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
    func_8022B64C_ovl25(rdram, ctx);
        goto after_4;
    // 0x8022B4B0: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
    after_4:
    // 0x8022B4B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B4B8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022B4BC: jal         0x8022B674
    // 0x8022B4C0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8022B674_ovl25(rdram, ctx);
        goto after_5;
    // 0x8022B4C0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x8022B4C4: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022B4C8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022B4CC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022B4D0:
    // 0x8022B4D0: lh          $v1, 0x0($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X0);
    // 0x8022B4D4: addiu       $v0, $zero, 0x92
    ctx->r2 = ADD32(0, 0X92);
    // 0x8022B4D8: bne         $v1, $v0, L_8022B534
    if (ctx->r3 != ctx->r2) {
        // 0x8022B4DC: nop
    
            goto L_8022B534;
    }
    // 0x8022B4DC: nop

    // 0x8022B4E0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022B4E4: j           L_8022B530
    // 0x8022B4E8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022B530;
    // 0x8022B4E8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022B4EC:
    // 0x8022B4EC: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8022B4F0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022B4F4: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
    // 0x8022B4F8: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022B4FC: j           L_8022B530
    // 0x8022B500: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022B530;
    // 0x8022B500: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022B504:
    // 0x8022B504: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x8022B508: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022B50C: bne         $v1, $v0, L_8022B534
    if (ctx->r3 != ctx->r2) {
        // 0x8022B510: nop
    
            goto L_8022B534;
    }
    // 0x8022B510: nop

    // 0x8022B514: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022B518: j           L_8022B530
    // 0x8022B51C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022B530;
    // 0x8022B51C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022B520:
    // 0x8022B520: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022B524: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x8022B528: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x8022B52C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022B530:
    // 0x8022B530: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022B534:
    // 0x8022B534: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022B538: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022B53C: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8022B540: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022B544: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x8022B548: addiu       $v0, $zero, 0x37
    ctx->r2 = ADD32(0, 0X37);
    // 0x8022B54C: beq         $v1, $v0, L_8022B5BC
    if (ctx->r3 == ctx->r2) {
        // 0x8022B550: slti        $v0, $v1, 0x38
        ctx->r2 = SIGNED(ctx->r3) < 0X38 ? 1 : 0;
            goto L_8022B5BC;
    }
    // 0x8022B550: slti        $v0, $v1, 0x38
    ctx->r2 = SIGNED(ctx->r3) < 0X38 ? 1 : 0;
    // 0x8022B554: beq         $v0, $zero, L_8022B574
    if (ctx->r2 == 0) {
        // 0x8022B558: addiu       $v0, $zero, 0x1E
        ctx->r2 = ADD32(0, 0X1E);
            goto L_8022B574;
    }
    // 0x8022B558: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x8022B55C: beq         $v1, $v0, L_8022B5AC
    if (ctx->r3 == ctx->r2) {
        // 0x8022B560: addiu       $v0, $zero, 0x2D
        ctx->r2 = ADD32(0, 0X2D);
            goto L_8022B5AC;
    }
    // 0x8022B560: addiu       $v0, $zero, 0x2D
    ctx->r2 = ADD32(0, 0X2D);
    // 0x8022B564: beq         $v1, $v0, L_8022B5F0
    if (ctx->r3 == ctx->r2) {
        // 0x8022B568: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022B5F0;
    }
    // 0x8022B568: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B56C: j           L_8022B600
    // 0x8022B570: nop

        goto L_8022B600;
    // 0x8022B570: nop

L_8022B574:
    // 0x8022B574: addiu       $v0, $zero, 0x91
    ctx->r2 = ADD32(0, 0X91);
    // 0x8022B578: beq         $v1, $v0, L_8022B5E0
    if (ctx->r3 == ctx->r2) {
        // 0x8022B57C: slti        $v0, $v1, 0x92
        ctx->r2 = SIGNED(ctx->r3) < 0X92 ? 1 : 0;
            goto L_8022B5E0;
    }
    // 0x8022B57C: slti        $v0, $v1, 0x92
    ctx->r2 = SIGNED(ctx->r3) < 0X92 ? 1 : 0;
    // 0x8022B580: beq         $v0, $zero, L_8022B598
    if (ctx->r2 == 0) {
        // 0x8022B584: addiu       $v0, $zero, 0x87
        ctx->r2 = ADD32(0, 0X87);
            goto L_8022B598;
    }
    // 0x8022B584: addiu       $v0, $zero, 0x87
    ctx->r2 = ADD32(0, 0X87);
    // 0x8022B588: beq         $v1, $v0, L_8022B5CC
    if (ctx->r3 == ctx->r2) {
        // 0x8022B58C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022B5CC;
    }
    // 0x8022B58C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B590: j           L_8022B600
    // 0x8022B594: nop

        goto L_8022B600;
    // 0x8022B594: nop

L_8022B598:
    // 0x8022B598: addiu       $v0, $zero, 0xAF
    ctx->r2 = ADD32(0, 0XAF);
    // 0x8022B59C: beq         $v1, $v0, L_8022B5F0
    if (ctx->r3 == ctx->r2) {
        // 0x8022B5A0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022B5F0;
    }
    // 0x8022B5A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B5A4: j           L_8022B600
    // 0x8022B5A8: nop

        goto L_8022B600;
    // 0x8022B5A8: nop

L_8022B5AC:
    // 0x8022B5AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B5B0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022B5B4: j           L_8022B5F8
    // 0x8022B5B8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
        goto L_8022B5F8;
    // 0x8022B5B8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_8022B5BC:
    // 0x8022B5BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B5C0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022B5C4: j           L_8022B5F8
    // 0x8022B5C8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
        goto L_8022B5F8;
    // 0x8022B5C8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_8022B5CC:
    // 0x8022B5CC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022B5D0: jal         0x8022B64C
    // 0x8022B5D4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8022B64C_ovl25(rdram, ctx);
        goto after_6;
    // 0x8022B5D4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_6:
    // 0x8022B5D8: j           L_8022B5F0
    // 0x8022B5DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_8022B5F0;
    // 0x8022B5DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022B5E0:
    // 0x8022B5E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B5E4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022B5E8: j           L_8022B5F8
    // 0x8022B5EC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
        goto L_8022B5F8;
    // 0x8022B5EC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_8022B5F0:
    // 0x8022B5F0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022B5F4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_8022B5F8:
    // 0x8022B5F8: jal         0x8022B674
    // 0x8022B5FC: nop

    func_8022B674_ovl25(rdram, ctx);
        goto after_7;
    // 0x8022B5FC: nop

    after_7:
L_8022B600:
    // 0x8022B600: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B604: jal         0x8022B69C
    // 0x8022B608: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8022B69C_ovl25(rdram, ctx);
        goto after_8;
    // 0x8022B608: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_8:
    // 0x8022B60C: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022B610: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x8022B614: beq         $a1, $v0, L_8022B630
    if (ctx->r5 == ctx->r2) {
        // 0x8022B618: nop
    
            goto L_8022B630;
    }
    // 0x8022B618: nop

    // 0x8022B61C: lh          $a2, 0x2($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X2);
    // 0x8022B620: jal         0x80050294
    // 0x8022B624: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_9;
    // 0x8022B624: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
    // 0x8022B628: j           L_8022B638
    // 0x8022B62C: nop

        goto L_8022B638;
    // 0x8022B62C: nop

L_8022B630:
    // 0x8022B630: jal         0x8005044C
    // 0x8022B634: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_10;
    // 0x8022B634: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_10:
L_8022B638:
    // 0x8022B638: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022B63C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022B640: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B644: jr          $ra
    // 0x8022B648: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022B648: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802366E0_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802366E0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802366E4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802366E8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802366EC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802366F0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802366F4: lbu         $v0, 0xE($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XE);
    // 0x802366F8: lui         $v1, 0x6666
    ctx->r3 = S32(0X6666 << 16);
    // 0x802366FC: ori         $v1, $v1, 0x6667
    ctx->r3 = ctx->r3 | 0X6667;
    // 0x80236700: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80236704: sra         $a0, $v0, 24
    ctx->r4 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80236708: mult        $a0, $v1
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023670C: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x80236710: mfhi        $t0
    ctx->r8 = hi;
    // 0x80236714: sra         $v1, $t0, 1
    ctx->r3 = S32(SIGNED(ctx->r8) >> 1);
    // 0x80236718: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8023671C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80236720: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80236724: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x80236728: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x8023672C: bne         $a0, $zero, L_80236828
    if (ctx->r4 != 0) {
        // 0x80236730: nop
    
            goto L_80236828;
    }
    // 0x80236730: nop

    // 0x80236734: jal         0x8004F144
    // 0x80236738: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80236738: nop

    after_0:
    // 0x8023673C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80236740: beq         $s0, $zero, L_80236828
    if (ctx->r16 == 0) {
        // 0x80236744: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80236828;
    }
    // 0x80236744: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80236748: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8023674C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80236750: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80236754: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x80236758: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x8023675C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80236760: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x80236764: addiu       $s0, $s0, 0x38
    ctx->r16 = ADD32(ctx->r16, 0X38);
    // 0x80236768: lw          $a1, 0x44($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X44);
    // 0x8023676C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236770: jal         0x8009A3B4
    // 0x80236774: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80236774: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80236778: jal         0x800A3450
    // 0x8023677C: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x8023677C: nop

    after_2:
    // 0x80236780: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80236784: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x80236788: beq         $v0, $zero, L_802367A0
    if (ctx->r2 == 0) {
        // 0x8023678C: addu        $a0, $v1, $zero
        ctx->r4 = ADD32(ctx->r3, 0);
            goto L_802367A0;
    }
    // 0x8023678C: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x80236790: srl         $v0, $v1, 2
    ctx->r2 = S32(U32(ctx->r3) >> 2);
    // 0x80236794: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80236798: j           L_802367B0
    // 0x8023679C: ori         $a3, $v0, 0xFD00
    ctx->r7 = ctx->r2 | 0XFD00;
        goto L_802367B0;
    // 0x8023679C: ori         $a3, $v0, 0xFD00
    ctx->r7 = ctx->r2 | 0XFD00;
L_802367A0:
    // 0x802367A0: sll         $v0, $v1, 21
    ctx->r2 = S32(ctx->r3 << 21);
    // 0x802367A4: srl         $v0, $v0, 23
    ctx->r2 = S32(U32(ctx->r2) >> 23);
    // 0x802367A8: addiu       $v1, $zero, -0x300
    ctx->r3 = ADD32(0, -0X300);
    // 0x802367AC: subu        $a3, $v1, $v0
    ctx->r7 = SUB32(ctx->r3, ctx->r2);
L_802367B0:
    // 0x802367B0: sll         $v1, $a0, 16
    ctx->r3 = S32(ctx->r4 << 16);
    // 0x802367B4: sra         $v0, $v1, 20
    ctx->r2 = S32(SIGNED(ctx->r3) >> 20);
    // 0x802367B8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802367BC: beq         $v0, $zero, L_802367D4
    if (ctx->r2 == 0) {
        // 0x802367C0: sra         $v0, $v1, 22
        ctx->r2 = S32(SIGNED(ctx->r3) >> 22);
            goto L_802367D4;
    }
    // 0x802367C0: sra         $v0, $v1, 22
    ctx->r2 = S32(SIGNED(ctx->r3) >> 22);
    // 0x802367C4: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x802367C8: addiu       $v1, $zero, 0x180
    ctx->r3 = ADD32(0, 0X180);
    // 0x802367CC: j           L_802367DC
    // 0x802367D0: subu        $a2, $v1, $v0
    ctx->r6 = SUB32(ctx->r3, ctx->r2);
        goto L_802367DC;
    // 0x802367D0: subu        $a2, $v1, $v0
    ctx->r6 = SUB32(ctx->r3, ctx->r2);
L_802367D4:
    // 0x802367D4: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x802367D8: addiu       $a2, $v0, -0x180
    ctx->r6 = ADD32(ctx->r2, -0X180);
L_802367DC:
    // 0x802367DC: sll         $v1, $a0, 16
    ctx->r3 = S32(ctx->r4 << 16);
    // 0x802367E0: sra         $v0, $v1, 24
    ctx->r2 = S32(SIGNED(ctx->r3) >> 24);
    // 0x802367E4: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802367E8: beq         $v0, $zero, L_80236800
    if (ctx->r2 == 0) {
        // 0x802367EC: sra         $v0, $v1, 26
        ctx->r2 = S32(SIGNED(ctx->r3) >> 26);
            goto L_80236800;
    }
    // 0x802367EC: sra         $v0, $v1, 26
    ctx->r2 = S32(SIGNED(ctx->r3) >> 26);
    // 0x802367F0: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x802367F4: addiu       $v1, $zero, 0x100
    ctx->r3 = ADD32(0, 0X100);
    // 0x802367F8: j           L_80236804
    // 0x802367FC: subu        $a1, $v1, $v0
    ctx->r5 = SUB32(ctx->r3, ctx->r2);
        goto L_80236804;
    // 0x802367FC: subu        $a1, $v1, $v0
    ctx->r5 = SUB32(ctx->r3, ctx->r2);
L_80236800:
    // 0x80236800: ori         $a1, $v0, 0xFF00
    ctx->r5 = ctx->r2 | 0XFF00;
L_80236804:
    // 0x80236804: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x80236808: lhu         $v1, 0x2($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X2);
    // 0x8023680C: lhu         $a0, 0x4($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X4);
    // 0x80236810: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x80236814: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x80236818: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x8023681C: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
    // 0x80236820: sh          $v1, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r3;
    // 0x80236824: sh          $a0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r4;
L_80236828:
    // 0x80236828: lbu         $v0, 0xE($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XE);
    // 0x8023682C: addiu       $v1, $zero, 0x29
    ctx->r3 = ADD32(0, 0X29);
    // 0x80236830: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80236834: sb          $v0, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r2;
    // 0x80236838: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8023683C: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80236840: bne         $v0, $v1, L_80236850
    if (ctx->r2 != ctx->r3) {
        // 0x80236844: nop
    
            goto L_80236850;
    }
    // 0x80236844: nop

    // 0x80236848: jal         0x8004F5C4
    // 0x8023684C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_3;
    // 0x8023684C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
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
;}
RECOMP_FUNC void func_80228180_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228180: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80228184: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80228188: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022818C: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x80228190: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80228194: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x80228198: sltu        $v1, $zero, $v0
    ctx->r3 = 0 < ctx->r2 ? 1 : 0;
    // 0x8022819C: sltiu       $v0, $v0, 0x6
    ctx->r2 = ctx->r2 < 0X6 ? 1 : 0;
    // 0x802281A0: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x802281A4: beq         $v1, $zero, L_802281C0
    if (ctx->r3 == 0) {
        // 0x802281A8: addu        $s1, $a1, $zero
        ctx->r17 = ADD32(ctx->r5, 0);
            goto L_802281C0;
    }
    // 0x802281A8: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x802281AC: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x802281B0: lb          $v0, 0xE($v0)
    ctx->r2 = MEM_B(ctx->r2, 0XE);
    // 0x802281B4: blez        $v0, L_802281C0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x802281B8: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_802281C0;
    }
    // 0x802281B8: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x802281BC: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_802281C0:
    // 0x802281C0: lbu         $v1, 0xB($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XB);
    // 0x802281C4: sltiu       $v0, $v1, 0xC
    ctx->r2 = ctx->r3 < 0XC ? 1 : 0;
    // 0x802281C8: beq         $v0, $zero, L_8022855C
    if (ctx->r2 == 0) {
        // 0x802281CC: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8022855C;
    }
    // 0x802281CC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802281D0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802281D4: addu        $at, $at, $v0
    gpr jr_addend_802281DC = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802281D8: lw          $v0, 0xCC0($at)
    ctx->r2 = ADD32(ctx->r1, 0XCC0);
    // 0x802281DC: jr          $v0
    // 0x802281E0: nop

    switch (jr_addend_802281DC >> 2) {
        case 0: goto L_802281E4; break;
        case 1: goto L_802281FC; break;
        case 2: goto L_80228218; break;
        case 3: goto L_802282D0; break;
        case 4: goto L_802282E8; break;
        case 5: goto L_80228330; break;
        case 6: goto L_80228354; break;
        case 7: goto L_80228370; break;
        case 8: goto L_802283C8; break;
        case 9: goto L_8022845C; break;
        case 10: goto L_802284BC; break;
        case 11: goto L_80228500; break;
        default: switch_error(__func__, 0x802281DC, 0x80240CC0);
    }
    // 0x802281E0: nop

L_802281E4:
    // 0x802281E4: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x802281E8: sh          $zero, 0xE($s1)
    MEM_H(0XE, ctx->r17) = 0;
    // 0x802281EC: sh          $zero, 0x10($s1)
    MEM_H(0X10, ctx->r17) = 0;
    // 0x802281F0: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x802281F4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802281F8: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_802281FC:
    // 0x802281FC: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x80228200: lbu         $v1, 0x9($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X9);
    // 0x80228204: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80228208: beq         $v1, $v0, L_802284F0
    if (ctx->r3 == ctx->r2) {
        // 0x8022820C: nop
    
            goto L_802284F0;
    }
    // 0x8022820C: nop

    // 0x80228210: j           L_8022855C
    // 0x80228214: nop

        goto L_8022855C;
    // 0x80228214: nop

L_80228218:
    // 0x80228218: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x8022821C: addiu       $v0, $v0, -0x80
    ctx->r2 = ADD32(ctx->r2, -0X80);
    // 0x80228220: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x80228224: lhu         $v0, 0xE($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XE);
    // 0x80228228: addiu       $v1, $zero, 0x60
    ctx->r3 = ADD32(0, 0X60);
    // 0x8022822C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228230: sh          $v0, 0xE($s1)
    MEM_H(0XE, ctx->r17) = ctx->r2;
    // 0x80228234: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228238: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022823C: bne         $v0, $v1, L_8022855C
    if (ctx->r2 != ctx->r3) {
        // 0x80228240: nop
    
            goto L_8022855C;
    }
    // 0x80228240: nop

    // 0x80228244: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x80228248: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x8022824C: beq         $v0, $zero, L_8022828C
    if (ctx->r2 == 0) {
        // 0x80228250: sh          $zero, 0x16($s0)
        MEM_H(0X16, ctx->r16) = 0;
            goto L_8022828C;
    }
    // 0x80228250: sh          $zero, 0x16($s0)
    MEM_H(0X16, ctx->r16) = 0;
    // 0x80228254: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80228258: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022825C: addu        $at, $at, $v0
    gpr jr_addend_80228264 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80228260: lw          $v0, 0xCF0($at)
    ctx->r2 = ADD32(ctx->r1, 0XCF0);
    // 0x80228264: jr          $v0
    // 0x80228268: nop

    switch (jr_addend_80228264 >> 2) {
        case 0: goto L_80228274; break;
        case 1: goto L_8022826C; break;
        case 2: goto L_8022827C; break;
        case 3: goto L_80228284; break;
        case 4: goto L_80228284; break;
        default: switch_error(__func__, 0x80228264, 0x80240CF0);
    }
    // 0x80228268: nop

L_8022826C:
    // 0x8022826C: j           L_80228288
    // 0x80228270: addiu       $v0, $zero, 0xA00
    ctx->r2 = ADD32(0, 0XA00);
        goto L_80228288;
    // 0x80228270: addiu       $v0, $zero, 0xA00
    ctx->r2 = ADD32(0, 0XA00);
L_80228274:
    // 0x80228274: j           L_80228288
    // 0x80228278: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
        goto L_80228288;
    // 0x80228278: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
L_8022827C:
    // 0x8022827C: j           L_80228288
    // 0x80228280: addiu       $v0, $zero, 0xA00
    ctx->r2 = ADD32(0, 0XA00);
        goto L_80228288;
    // 0x80228280: addiu       $v0, $zero, 0xA00
    ctx->r2 = ADD32(0, 0XA00);
L_80228284:
    // 0x80228284: addiu       $v0, $zero, 0xC00
    ctx->r2 = ADD32(0, 0XC00);
L_80228288:
    // 0x80228288: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
L_8022828C:
    // 0x8022828C: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x80228290: bne         $v0, $zero, L_802282A4
    if (ctx->r2 != 0) {
        // 0x80228294: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_802282A4;
    }
    // 0x80228294: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80228298: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022829C: j           L_802284EC
    // 0x802282A0: sh          $zero, 0xE($s1)
    MEM_H(0XE, ctx->r17) = 0;
        goto L_802284EC;
    // 0x802282A0: sh          $zero, 0xE($s1)
    MEM_H(0XE, ctx->r17) = 0;
L_802282A4:
    // 0x802282A4: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x802282A8: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x802282AC: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x802282B0: beq         $v0, $zero, L_802282C0
    if (ctx->r2 == 0) {
        // 0x802282B4: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_802282C0;
    }
    // 0x802282B4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x802282B8: j           L_802284EC
    // 0x802282BC: sh          $v0, 0xE($s1)
    MEM_H(0XE, ctx->r17) = ctx->r2;
        goto L_802284EC;
    // 0x802282BC: sh          $v0, 0xE($s1)
    MEM_H(0XE, ctx->r17) = ctx->r2;
L_802282C0:
    // 0x802282C0: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x802282C4: sh          $v0, 0xE($s1)
    MEM_H(0XE, ctx->r17) = ctx->r2;
    // 0x802282C8: j           L_802284F0
    // 0x802282CC: sh          $zero, 0x10($s1)
    MEM_H(0X10, ctx->r17) = 0;
        goto L_802284F0;
    // 0x802282CC: sh          $zero, 0x10($s1)
    MEM_H(0X10, ctx->r17) = 0;
L_802282D0:
    // 0x802282D0: lh          $v0, 0xE($s1)
    ctx->r2 = MEM_H(ctx->r17, 0XE);
    // 0x802282D4: beq         $v0, $zero, L_802284F0
    if (ctx->r2 == 0) {
        // 0x802282D8: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_802284F0;
    }
    // 0x802282D8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802282DC: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x802282E0: j           L_8022855C
    // 0x802282E4: sh          $v0, 0xE($s1)
    MEM_H(0XE, ctx->r17) = ctx->r2;
        goto L_8022855C;
    // 0x802282E4: sh          $v0, 0xE($s1)
    MEM_H(0XE, ctx->r17) = ctx->r2;
L_802282E8:
    // 0x802282E8: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x802282EC: addiu       $v0, $v0, -0x10
    ctx->r2 = ADD32(ctx->r2, -0X10);
    // 0x802282F0: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x802282F4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802282F8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802282FC: slti        $v0, $v0, -0x7FF
    ctx->r2 = SIGNED(ctx->r2) < -0X7FF ? 1 : 0;
    // 0x80228300: beq         $v0, $zero, L_80228314
    if (ctx->r2 == 0) {
        // 0x80228304: addiu       $v1, $zero, -0x800
        ctx->r3 = ADD32(0, -0X800);
            goto L_80228314;
    }
    // 0x80228304: addiu       $v1, $zero, -0x800
    ctx->r3 = ADD32(0, -0X800);
    // 0x80228308: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8022830C: j           L_802284F4
    // 0x80228310: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
        goto L_802284F4;
    // 0x80228310: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
L_80228314:
    // 0x80228314: lh          $v0, 0x46($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X46);
    // 0x80228318: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022831C: slti        $v0, $v0, 0x3
    ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x80228320: bne         $v0, $zero, L_8022855C
    if (ctx->r2 != 0) {
        // 0x80228324: addiu       $v0, $v1, -0x1
        ctx->r2 = ADD32(ctx->r3, -0X1);
            goto L_8022855C;
    }
    // 0x80228324: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80228328: j           L_8022855C
    // 0x8022832C: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
        goto L_8022855C;
    // 0x8022832C: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
L_80228330:
    // 0x80228330: lh          $v0, 0x10($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X10);
    // 0x80228334: bne         $v0, $zero, L_80228348
    if (ctx->r2 != 0) {
        // 0x80228338: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80228348;
    }
    // 0x80228338: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022833C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80228340: j           L_8022855C
    // 0x80228344: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
        goto L_8022855C;
    // 0x80228344: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_80228348:
    // 0x80228348: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022834C: j           L_8022855C
    // 0x80228350: sh          $v0, 0x10($s1)
    MEM_H(0X10, ctx->r17) = ctx->r2;
        goto L_8022855C;
    // 0x80228350: sh          $v0, 0x10($s1)
    MEM_H(0X10, ctx->r17) = ctx->r2;
L_80228354:
    // 0x80228354: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x80228358: lb          $v1, 0xE($v0)
    ctx->r3 = MEM_B(ctx->r2, 0XE);
    // 0x8022835C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80228360: beq         $v1, $v0, L_802284F0
    if (ctx->r3 == ctx->r2) {
        // 0x80228364: nop
    
            goto L_802284F0;
    }
    // 0x80228364: nop

    // 0x80228368: j           L_8022855C
    // 0x8022836C: nop

        goto L_8022855C;
    // 0x8022836C: nop

L_80228370:
    // 0x80228370: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x80228374: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x80228378: beq         $v0, $zero, L_802283B8
    if (ctx->r2 == 0) {
        // 0x8022837C: sh          $zero, 0x16($s0)
        MEM_H(0X16, ctx->r16) = 0;
            goto L_802283B8;
    }
    // 0x8022837C: sh          $zero, 0x16($s0)
    MEM_H(0X16, ctx->r16) = 0;
    // 0x80228380: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80228384: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80228388: addu        $at, $at, $v0
    gpr jr_addend_80228390 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022838C: lw          $v0, 0xD08($at)
    ctx->r2 = ADD32(ctx->r1, 0XD08);
    // 0x80228390: jr          $v0
    // 0x80228394: nop

    switch (jr_addend_80228390 >> 2) {
        case 0: goto L_802283A0; break;
        case 1: goto L_80228398; break;
        case 2: goto L_802283A8; break;
        case 3: goto L_802283B0; break;
        case 4: goto L_802283B0; break;
        default: switch_error(__func__, 0x80228390, 0x80240D08);
    }
    // 0x80228394: nop

L_80228398:
    // 0x80228398: j           L_802283B4
    // 0x8022839C: addiu       $v0, $zero, 0xA00
    ctx->r2 = ADD32(0, 0XA00);
        goto L_802283B4;
    // 0x8022839C: addiu       $v0, $zero, 0xA00
    ctx->r2 = ADD32(0, 0XA00);
L_802283A0:
    // 0x802283A0: j           L_802283B4
    // 0x802283A4: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
        goto L_802283B4;
    // 0x802283A4: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
L_802283A8:
    // 0x802283A8: j           L_802283B4
    // 0x802283AC: addiu       $v0, $zero, 0xA00
    ctx->r2 = ADD32(0, 0XA00);
        goto L_802283B4;
    // 0x802283AC: addiu       $v0, $zero, 0xA00
    ctx->r2 = ADD32(0, 0XA00);
L_802283B0:
    // 0x802283B0: addiu       $v0, $zero, 0xC00
    ctx->r2 = ADD32(0, 0XC00);
L_802283B4:
    // 0x802283B4: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
L_802283B8:
    // 0x802283B8: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x802283BC: addiu       $v1, $zero, -0x800
    ctx->r3 = ADD32(0, -0X800);
    // 0x802283C0: j           L_802284F4
    // 0x802283C4: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
        goto L_802284F4;
    // 0x802283C4: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
L_802283C8:
    // 0x802283C8: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x802283CC: lbu         $v1, 0x9($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X9);
    // 0x802283D0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802283D4: bne         $v1, $v0, L_8022855C
    if (ctx->r3 != ctx->r2) {
        // 0x802283D8: addiu       $v0, $zero, 0x80
        ctx->r2 = ADD32(0, 0X80);
            goto L_8022855C;
    }
    // 0x802283D8: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x802283DC: sh          $v0, 0xE($s1)
    MEM_H(0XE, ctx->r17) = ctx->r2;
    // 0x802283E0: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x802283E4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802283E8: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x802283EC: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x802283F0: beq         $v0, $zero, L_802284F0
    if (ctx->r2 == 0) {
        // 0x802283F4: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_802284F0;
    }
    // 0x802283F4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802283F8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802283FC: addu        $at, $at, $v0
    gpr jr_addend_80228404 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80228400: lw          $v0, 0xD20($at)
    ctx->r2 = ADD32(ctx->r1, 0XD20);
    // 0x80228404: jr          $v0
    // 0x80228408: nop

    switch (jr_addend_80228404 >> 2) {
        case 0: goto L_8022840C; break;
        case 1: goto L_80228418; break;
        case 2: goto L_80228428; break;
        case 3: goto L_80228438; break;
        case 4: goto L_80228448; break;
        default: switch_error(__func__, 0x80228404, 0x80240D20);
    }
    // 0x80228408: nop

L_8022840C:
    // 0x8022840C: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x80228410: j           L_802284F0
    // 0x80228414: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
        goto L_802284F0;
    // 0x80228414: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
L_80228418:
    // 0x80228418: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022841C: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80228420: j           L_802284F0
    // 0x80228424: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
        goto L_802284F0;
    // 0x80228424: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
L_80228428:
    // 0x80228428: addiu       $v0, $zero, -0x4
    ctx->r2 = ADD32(0, -0X4);
    // 0x8022842C: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80228430: j           L_80228454
    // 0x80228434: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_80228454;
    // 0x80228434: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_80228438:
    // 0x80228438: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022843C: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80228440: j           L_80228454
    // 0x80228444: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_80228454;
    // 0x80228444: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_80228448:
    // 0x80228448: addiu       $v0, $zero, -0x8
    ctx->r2 = ADD32(0, -0X8);
    // 0x8022844C: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80228450: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_80228454:
    // 0x80228454: j           L_802284F0
    // 0x80228458: sh          $v0, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r2;
        goto L_802284F0;
    // 0x80228458: sh          $v0, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r2;
L_8022845C:
    // 0x8022845C: lh          $v0, 0xE($s1)
    ctx->r2 = MEM_H(ctx->r17, 0XE);
    // 0x80228460: bne         $v0, $zero, L_8022847C
    if (ctx->r2 != 0) {
        // 0x80228464: nop
    
            goto L_8022847C;
    }
    // 0x80228464: nop

    // 0x80228468: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8022846C: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x80228470: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80228474: j           L_802284F4
    // 0x80228478: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
        goto L_802284F4;
    // 0x80228478: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
L_8022847C:
    // 0x8022847C: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x80228480: lhu         $a1, 0x44($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X44);
    // 0x80228484: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x80228488: lhu         $a2, 0x46($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X46);
    // 0x8022848C: lhu         $a0, 0x18($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X18);
    // 0x80228490: lhu         $a3, 0x48($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X48);
    // 0x80228494: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80228498: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x8022849C: addu        $a0, $a0, $a3
    ctx->r4 = ADD32(ctx->r4, ctx->r7);
    // 0x802284A0: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x802284A4: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
    // 0x802284A8: sh          $a0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r4;
    // 0x802284AC: lhu         $v0, 0xE($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XE);
    // 0x802284B0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802284B4: j           L_8022855C
    // 0x802284B8: sh          $v0, 0xE($s1)
    MEM_H(0XE, ctx->r17) = ctx->r2;
        goto L_8022855C;
    // 0x802284B8: sh          $v0, 0xE($s1)
    MEM_H(0XE, ctx->r17) = ctx->r2;
L_802284BC:
    // 0x802284BC: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x802284C0: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x802284C4: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x802284C8: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x802284CC: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x802284D0: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x802284D4: sh          $zero, 0x16($s1)
    MEM_H(0X16, ctx->r17) = 0;
    // 0x802284D8: sh          $zero, 0x14($s1)
    MEM_H(0X14, ctx->r17) = 0;
    // 0x802284DC: sh          $zero, 0x12($s1)
    MEM_H(0X12, ctx->r17) = 0;
    // 0x802284E0: sh          $zero, 0xE($s1)
    MEM_H(0XE, ctx->r17) = 0;
    // 0x802284E4: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x802284E8: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
L_802284EC:
    // 0x802284EC: sh          $v0, 0x10($s1)
    MEM_H(0X10, ctx->r17) = ctx->r2;
L_802284F0:
    // 0x802284F0: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
L_802284F4:
    // 0x802284F4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802284F8: j           L_8022855C
    // 0x802284FC: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
        goto L_8022855C;
    // 0x802284FC: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_80228500:
    // 0x80228500: lh          $v0, 0x10($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X10);
    // 0x80228504: bne         $v0, $zero, L_8022853C
    if (ctx->r2 != 0) {
        // 0x80228508: addiu       $v0, $zero, -0x8
        ctx->r2 = ADD32(0, -0X8);
            goto L_8022853C;
    }
    // 0x80228508: addiu       $v0, $zero, -0x8
    ctx->r2 = ADD32(0, -0X8);
    // 0x8022850C: addiu       $a0, $zero, 0x1A0
    ctx->r4 = ADD32(0, 0X1A0);
    // 0x80228510: jal         0x8002A33C
    // 0x80228514: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x80228514: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x80228518: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8022851C: lhu         $v0, 0x6($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X6);
    // 0x80228520: andi        $v0, $v0, 0xF00
    ctx->r2 = ctx->r2 & 0XF00;
    // 0x80228524: sh          $v0, 0x1C($s1)
    MEM_H(0X1C, ctx->r17) = ctx->r2;
    // 0x80228528: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022852C: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x80228530: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228534: j           L_8022854C
    // 0x80228538: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8022854C;
    // 0x80228538: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022853C:
    // 0x8022853C: sh          $v0, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r2;
    // 0x80228540: lhu         $v0, 0x10($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X10);
    // 0x80228544: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80228548: sh          $v0, 0x10($s1)
    MEM_H(0X10, ctx->r17) = ctx->r2;
L_8022854C:
    // 0x8022854C: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x80228550: lhu         $v1, 0x48($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X48);
    // 0x80228554: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80228558: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
L_8022855C:
    // 0x8022855C: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x80228560: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x80228564: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x80228568: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022856C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80228570: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80228574: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80228578: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x8022857C: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x80228580: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x80228584: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80228588: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8022858C: jr          $ra
    // 0x80228590: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80228590: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_802352CC_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802352CC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802352D0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802352D4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802352D8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802352DC: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x802352E0: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x802352E4: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x802352E8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802352EC: jal         0x8009A3B4
    // 0x802352F0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x802352F0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x802352F4: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x802352F8: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x802352FC: jal         0x8009A3B4
    // 0x80235300: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80235300: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80235304: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80235308: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8023530C: jal         0x8009A3B4
    // 0x80235310: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80235310: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80235314: jal         0x800A3450
    // 0x80235318: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80235318: nop

    after_3:
    // 0x8023531C: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
    // 0x80235320: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80235324: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80235328: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023532C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80235330: lw          $v0, -0x1104($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1104);
    // 0x80235334: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235338: jalr        $v0
    // 0x8023533C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x8023533C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_4:
    // 0x80235340: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235344: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x80235348: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x8023534C: lh          $a2, 0x18($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X18);
    // 0x80235350: lhu         $a3, 0x14($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X14);
    // 0x80235354: lhu         $t0, 0x16($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X16);
    // 0x80235358: lhu         $t1, 0x18($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X18);
    // 0x8023535C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80235360: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80235364: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80235368: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8023536C: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80235370: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80235374: sw          $a2, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r6;
    // 0x80235378: sh          $a3, 0x90($s0)
    MEM_H(0X90, ctx->r16) = ctx->r7;
    // 0x8023537C: sh          $t0, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r8;
    // 0x80235380: jal         0x80235B90
    // 0x80235384: sh          $t1, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r9;
    func_80235B90_ovl25(rdram, ctx);
        goto after_5;
    // 0x80235384: sh          $t1, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r9;
    after_5:
    // 0x80235388: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x8023538C: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x80235390: beq         $v0, $zero, L_802353A8
    if (ctx->r2 == 0) {
        // 0x80235394: andi        $v0, $v1, 0xFE
        ctx->r2 = ctx->r3 & 0XFE;
            goto L_802353A8;
    }
    // 0x80235394: andi        $v0, $v1, 0xFE
    ctx->r2 = ctx->r3 & 0XFE;
    // 0x80235398: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x8023539C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802353A0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x802353A4: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_802353A8:
    // 0x802353A8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802353AC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802353B0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802353B4: jr          $ra
    // 0x802353B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802353B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023C490_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023C490: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023C494: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023C498: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023C49C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023C4A0: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x8023C4A4: bne         $v0, $zero, L_8023C510
    if (ctx->r2 != 0) {
        // 0x8023C4A8: nop
    
            goto L_8023C510;
    }
    // 0x8023C4A8: nop

    // 0x8023C4AC: jal         0x8004F488
    // 0x8023C4B0: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    func_8004F488_2A888(rdram, ctx);
        goto after_0;
    // 0x8023C4B0: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    after_0:
    // 0x8023C4B4: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    // 0x8023C4B8: jal         0x8004F488
    // 0x8023C4BC: sw          $zero, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = 0;
    func_8004F488_2A888(rdram, ctx);
        goto after_1;
    // 0x8023C4BC: sw          $zero, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = 0;
    after_1:
    // 0x8023C4C0: lw          $a0, 0x34($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X34);
    // 0x8023C4C4: jal         0x8004F488
    // 0x8023C4C8: sw          $zero, 0x30($s0)
    MEM_W(0X30, ctx->r16) = 0;
    func_8004F488_2A888(rdram, ctx);
        goto after_2;
    // 0x8023C4C8: sw          $zero, 0x30($s0)
    MEM_W(0X30, ctx->r16) = 0;
    after_2:
    // 0x8023C4CC: lw          $v0, 0x28($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X28);
    // 0x8023C4D0: sw          $zero, 0x34($s0)
    MEM_W(0X34, ctx->r16) = 0;
    // 0x8023C4D4: lbu         $a1, 0x0($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X0);
    // 0x8023C4D8: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8023C4DC: addiu       $a0, $a0, 0x47B8
    ctx->r4 = ADD32(ctx->r4, 0X47B8);
    // 0x8023C4E0: addiu       $v1, $zero, -0x100
    ctx->r3 = ADD32(0, -0X100);
    // 0x8023C4E4: sh          $v1, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r3;
    // 0x8023C4E8: lui         $v1, 0xFF00
    ctx->r3 = S32(0XFF00 << 16);
    // 0x8023C4EC: sh          $zero, 0x14($v0)
    MEM_H(0X14, ctx->r2) = 0;
    // 0x8023C4F0: sh          $zero, 0x18($v0)
    MEM_H(0X18, ctx->r2) = 0;
    // 0x8023C4F4: sw          $zero, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = 0;
    // 0x8023C4F8: sw          $v1, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r3;
    // 0x8023C4FC: sw          $zero, 0x24($v0)
    MEM_W(0X24, ctx->r2) = 0;
    // 0x8023C500: ori         $a1, $a1, 0x2
    ctx->r5 = ctx->r5 | 0X2;
    // 0x8023C504: sb          $a1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r5;
    // 0x8023C508: jal         0x8023C540
    // 0x8023C50C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8023C540_ovl25(rdram, ctx);
        goto after_3;
    // 0x8023C50C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_3:
L_8023C510:
    // 0x8023C510: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x8023C514: addiu       $v0, $zero, 0xC8
    ctx->r2 = ADD32(0, 0XC8);
    // 0x8023C518: bne         $v1, $v0, L_8023C530
    if (ctx->r3 != ctx->r2) {
        // 0x8023C51C: addiu       $a0, $zero, 0xA
        ctx->r4 = ADD32(0, 0XA);
            goto L_8023C530;
    }
    // 0x8023C51C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x8023C520: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023C524: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x8023C528: jal         0x80036E48
    // 0x8023C52C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    func_80036E48_12248(rdram, ctx);
        goto after_4;
    // 0x8023C52C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    after_4:
L_8023C530:
    // 0x8023C530: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023C534: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023C538: jr          $ra
    // 0x8023C53C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023C53C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023A6E8_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A6E8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023A6EC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023A6F0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023A6F4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023A6F8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023A6FC: lw          $v0, 0x10($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X10);
    // 0x8023A700: bne         $v0, $zero, L_8023A75C
    if (ctx->r2 != 0) {
        // 0x8023A704: addiu       $a0, $zero, 0x8
        ctx->r4 = ADD32(0, 0X8);
            goto L_8023A75C;
    }
    // 0x8023A704: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x8023A708: jal         0x8023AB14
    // 0x8023A70C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8023AB14_ovl25(rdram, ctx);
        goto after_0;
    // 0x8023A70C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x8023A710: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x8023A714: addiu       $s0, $zero, 0x3
    ctx->r16 = ADD32(0, 0X3);
    // 0x8023A718: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8023A71C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023A720: sb          $s0, 0x4430($at)
    MEM_B(0X4430, ctx->r1) = ctx->r16;
    // 0x8023A724: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023A728: sb          $v0, 0x445F($at)
    MEM_B(0X445F, ctx->r1) = ctx->r2;
    // 0x8023A72C: jal         0x8023AB14
    // 0x8023A730: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8023AB14_ovl25(rdram, ctx);
        goto after_1;
    // 0x8023A730: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x8023A734: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8023A738: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023A73C: sb          $s0, 0x4468($at)
    MEM_B(0X4468, ctx->r1) = ctx->r16;
    // 0x8023A740: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023A744: sb          $v0, 0x4497($at)
    MEM_B(0X4497, ctx->r1) = ctx->r2;
    // 0x8023A748: jal         0x8004F488
    // 0x8023A74C: lw          $a0, 0x28($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X28);
    func_8004F488_2A888(rdram, ctx);
        goto after_2;
    // 0x8023A74C: lw          $a0, 0x28($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X28);
    after_2:
    // 0x8023A750: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8023A754: jal         0x8005FA7C
    // 0x8023A758: addiu       $a0, $a0, -0xC64
    ctx->r4 = ADD32(ctx->r4, -0XC64);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_3;
    // 0x8023A758: addiu       $a0, $a0, -0xC64
    ctx->r4 = ADD32(ctx->r4, -0XC64);
    after_3:
L_8023A75C:
    // 0x8023A75C: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x8023A760: addiu       $v0, $zero, 0x7C
    ctx->r2 = ADD32(0, 0X7C);
    // 0x8023A764: bne         $v1, $v0, L_8023A774
    if (ctx->r3 != ctx->r2) {
        // 0x8023A768: addiu       $v0, $zero, 0xC
        ctx->r2 = ADD32(0, 0XC);
            goto L_8023A774;
    }
    // 0x8023A768: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8023A76C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023A770: sb          $v0, 0x445F($at)
    MEM_B(0X445F, ctx->r1) = ctx->r2;
L_8023A774:
    // 0x8023A774: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023A778: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023A77C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023A780: jr          $ra
    // 0x8023A784: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023A784: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023A2FC_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A2FC: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x8023A300: bne         $v0, $zero, L_8023A320
    if (ctx->r2 != 0) {
        // 0x8023A304: addiu       $v1, $zero, 0x2
        ctx->r3 = ADD32(0, 0X2);
            goto L_8023A320;
    }
    // 0x8023A304: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x8023A308: lw          $v0, 0x28($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X28);
    // 0x8023A30C: lbu         $a0, 0xD($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0XD);
    // 0x8023A310: sb          $v1, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r3;
    // 0x8023A314: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
    // 0x8023A318: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8023A31C: sb          $a0, 0xD($v0)
    MEM_B(0XD, ctx->r2) = ctx->r4;
L_8023A320:
    // 0x8023A320: jr          $ra
    // 0x8023A324: nop

    TRACE_RETURN()
    return;
    // 0x8023A324: nop

;}
RECOMP_FUNC void func_80235B90_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235B90: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80235B94: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80235B98: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80235B9C: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x80235BA0: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80235BA4: lw          $v0, 0xC0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC0);
    // 0x80235BA8: lui         $v1, 0xA00
    ctx->r3 = S32(0XA00 << 16);
    // 0x80235BAC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80235BB0: beq         $v0, $zero, L_80235BC8
    if (ctx->r2 == 0) {
        // 0x80235BB4: addu        $s1, $a1, $zero
        ctx->r17 = ADD32(ctx->r5, 0);
            goto L_80235BC8;
    }
    // 0x80235BB4: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x80235BB8: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80235BBC: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80235BC0: j           L_80235C6C
    // 0x80235BC4: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
        goto L_80235C6C;
    // 0x80235BC4: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
L_80235BC8:
    // 0x80235BC8: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x80235BCC: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80235BD0: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x80235BD4: bltz        $v1, L_80235C30
    if (SIGNED(ctx->r3) < 0) {
        // 0x80235BD8: sll         $a1, $v0, 7
        ctx->r5 = S32(ctx->r2 << 7);
            goto L_80235C30;
    }
    // 0x80235BD8: sll         $a1, $v0, 7
    ctx->r5 = S32(ctx->r2 << 7);
    // 0x80235BDC: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80235BE0: beq         $v0, $zero, L_80235C30
    if (ctx->r2 == 0) {
        // 0x80235BE4: nop
    
            goto L_80235C30;
    }
    // 0x80235BE4: nop

    // 0x80235BE8: lb          $a0, 0xC($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XC);
    // 0x80235BEC: bne         $a0, $zero, L_80235C08
    if (ctx->r4 != 0) {
        // 0x80235BF0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80235C08;
    }
    // 0x80235BF0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80235BF4: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x80235BF8: lh          $v1, 0xA($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XA);
    // 0x80235BFC: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80235C00: bne         $v0, $zero, L_80235C24
    if (ctx->r2 != 0) {
        // 0x80235C04: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80235C24;
    }
    // 0x80235C04: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80235C08:
    // 0x80235C08: bne         $a0, $v0, L_80235C30
    if (ctx->r4 != ctx->r2) {
        // 0x80235C0C: nop
    
            goto L_80235C30;
    }
    // 0x80235C0C: nop

    // 0x80235C10: lh          $v1, 0x14($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X14);
    // 0x80235C14: lh          $v0, 0xA($s1)
    ctx->r2 = MEM_H(ctx->r17, 0XA);
    // 0x80235C18: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80235C1C: beq         $v0, $zero, L_80235C30
    if (ctx->r2 == 0) {
        // 0x80235C20: nop
    
            goto L_80235C30;
    }
    // 0x80235C20: nop

L_80235C24:
    // 0x80235C24: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80235C28: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80235C2C: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
L_80235C30:
    // 0x80235C30: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80235C34: addiu       $v0, $s0, 0xC0
    ctx->r2 = ADD32(ctx->r16, 0XC0);
    // 0x80235C38: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80235C3C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80235C40: lui         $v0, 0x400
    ctx->r2 = S32(0X400 << 16);
    // 0x80235C44: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x80235C48: lh          $v1, 0xC($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XC);
    // 0x80235C4C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80235C50: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x80235C54: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    // 0x80235C58: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80235C5C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80235C60: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80235C64: jal         0x80051E18
    // 0x80235C68: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_0;
    // 0x80235C68: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_0:
L_80235C6C:
    // 0x80235C6C: sw          $zero, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = 0;
    // 0x80235C70: jal         0x8003F754
    // 0x80235C74: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003F754_1AB54(rdram, ctx);
        goto after_1;
    // 0x80235C74: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80235C78: beq         $v0, $zero, L_80235C8C
    if (ctx->r2 == 0) {
        // 0x80235C7C: nop
    
            goto L_80235C8C;
    }
    // 0x80235C7C: nop

    // 0x80235C80: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80235C84: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80235C88: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
L_80235C8C:
    // 0x80235C8C: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x80235C90: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80235C94: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80235C98: jr          $ra
    // 0x80235C9C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80235C9C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8022A638_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A638: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A63C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A640: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022A644: jal         0x800A3450
    // 0x8022A648: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022A648: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    after_0:
    // 0x8022A64C: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x8022A650: bne         $v1, $zero, L_8022A6B0
    if (ctx->r3 != 0) {
        // 0x8022A654: addu        $a1, $v0, $zero
        ctx->r5 = ADD32(ctx->r2, 0);
            goto L_8022A6B0;
    }
    // 0x8022A654: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8022A658: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022A65C: andi        $v1, $a1, 0x7
    ctx->r3 = ctx->r5 & 0X7;
    // 0x8022A660: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    // 0x8022A664: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022A668: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022A66C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8022A670: srl         $v1, $a1, 2
    ctx->r3 = S32(U32(ctx->r5) >> 2);
    // 0x8022A674: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x8022A678: sh          $v0, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r2;
    // 0x8022A67C: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x8022A680: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022A684: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x8022A688: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x8022A68C: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x8022A690: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x8022A694: sh          $v0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r2;
    // 0x8022A698: lhu         $v0, 0x2($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X2);
    // 0x8022A69C: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x8022A6A0: sh          $v0, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r2;
    // 0x8022A6A4: lhu         $v0, 0x4($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X4);
    // 0x8022A6A8: j           L_8022A71C
    // 0x8022A6AC: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
        goto L_8022A71C;
    // 0x8022A6AC: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
L_8022A6B0:
    // 0x8022A6B0: lhu         $v0, 0x6($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6);
    // 0x8022A6B4: lhu         $v1, 0x8($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X8);
    // 0x8022A6B8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022A6BC: sh          $v0, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r2;
    // 0x8022A6C0: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x8022A6C4: lh          $a0, 0x6($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X6);
    // 0x8022A6C8: addiu       $v1, $v1, 0x3
    ctx->r3 = ADD32(ctx->r3, 0X3);
    // 0x8022A6CC: sh          $v1, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r3;
    // 0x8022A6D0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022A6D4: slti        $a0, $a0, 0x35
    ctx->r4 = SIGNED(ctx->r4) < 0X35 ? 1 : 0;
    // 0x8022A6D8: bne         $a0, $zero, L_8022A6F8
    if (ctx->r4 != 0) {
        // 0x8022A6DC: sb          $v0, 0x5($s0)
        MEM_B(0X5, ctx->r16) = ctx->r2;
            goto L_8022A6F8;
    }
    // 0x8022A6DC: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
    // 0x8022A6E0: lhu         $v1, 0xC($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XC);
    // 0x8022A6E4: srl         $v0, $a1, 4
    ctx->r2 = S32(U32(ctx->r5) >> 4);
    // 0x8022A6E8: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8022A6EC: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x8022A6F0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022A6F4: sh          $v1, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r3;
L_8022A6F8:
    // 0x8022A6F8: lhu         $v0, 0xE($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XE);
    // 0x8022A6FC: srl         $v1, $a1, 6
    ctx->r3 = S32(U32(ctx->r5) >> 6);
    // 0x8022A700: lh          $a0, 0x6($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X6);
    // 0x8022A704: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x8022A708: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x8022A70C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022A710: bne         $a0, $zero, L_8022A71C
    if (ctx->r4 != 0) {
        // 0x8022A714: sh          $v0, 0xE($s0)
        MEM_H(0XE, ctx->r16) = ctx->r2;
            goto L_8022A71C;
    }
    // 0x8022A714: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
    // 0x8022A718: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
L_8022A71C:
    // 0x8022A71C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022A720: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A724: jr          $ra
    // 0x8022A728: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A728: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022DABC_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DABC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022DAC0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022DAC4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022DAC8: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022DACC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022DAD0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022DAD4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022DAD8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022DADC: jal         0x8009A3B4
    // 0x8022DAE0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022DAE0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x8022DAE4: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022DAE8: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022DAEC: jal         0x8009A3B4
    // 0x8022DAF0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022DAF0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022DAF4: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022DAF8: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022DAFC: jal         0x8009A3B4
    // 0x8022DB00: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022DB00: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022DB04: lui         $s2, 0x801C
    ctx->r18 = S32(0X801C << 16);
    // 0x8022DB08: addiu       $s2, $s2, -0x3A50
    ctx->r18 = ADD32(ctx->r18, -0X3A50);
    // 0x8022DB0C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022DB10: lbu         $v1, -0x3A47($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3A47);
    // 0x8022DB14: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022DB18: bne         $v1, $v0, L_8022DCDC
    if (ctx->r3 != ctx->r2) {
        // 0x8022DB1C: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_8022DCDC;
    }
    // 0x8022DB1C: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x8022DB20: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022DB24: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x8022DB28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022DB2C: bne         $v1, $v0, L_8022DBBC
    if (ctx->r3 != ctx->r2) {
        // 0x8022DB30: addiu       $v0, $v1, -0x16
        ctx->r2 = ADD32(ctx->r3, -0X16);
            goto L_8022DBBC;
    }
    // 0x8022DB30: addiu       $v0, $v1, -0x16
    ctx->r2 = ADD32(ctx->r3, -0X16);
    // 0x8022DB34: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022DB38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022DB3C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022DB40: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022DB44: jal         0x8004D5D4
    // 0x8022DB48: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_3;
    // 0x8022DB48: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_3:
    // 0x8022DB4C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022DB50: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022DB54: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022DB58: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022DB5C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022DB60: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022DB64: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x8022DB68: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x8022DB6C: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8022DB70: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8022DB74: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x8022DB78: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x8022DB7C: sb          $zero, 0x4E4($s0)
    MEM_B(0X4E4, ctx->r16) = 0;
    // 0x8022DB80: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022DB84: lw          $v0, -0x1890($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1890);
    // 0x8022DB88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022DB8C: sb          $zero, 0x4E5($s0)
    MEM_B(0X4E5, ctx->r16) = 0;
    // 0x8022DB90: sb          $zero, 0x4E6($s0)
    MEM_B(0X4E6, ctx->r16) = 0;
    // 0x8022DB94: sw          $v0, 0x4E8($s0)
    MEM_W(0X4E8, ctx->r16) = ctx->r2;
    // 0x8022DB98: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022DB9C: lw          $v0, -0x1870($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1870);
    // 0x8022DBA0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x8022DBA4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022DBA8: sb          $zero, 0x4E7($s0)
    MEM_B(0X4E7, ctx->r16) = 0;
    // 0x8022DBAC: jal         0x80050294
    // 0x8022DBB0: sw          $v0, 0x4EC($s0)
    MEM_W(0X4EC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_4;
    // 0x8022DBB0: sw          $v0, 0x4EC($s0)
    MEM_W(0X4EC, ctx->r16) = ctx->r2;
    after_4:
    // 0x8022DBB4: j           L_8022DBD8
    // 0x8022DBB8: nop

        goto L_8022DBD8;
    // 0x8022DBB8: nop

L_8022DBBC:
    // 0x8022DBBC: sltiu       $v0, $v0, 0x28
    ctx->r2 = ctx->r2 < 0X28 ? 1 : 0;
    // 0x8022DBC0: bne         $v0, $zero, L_8022DBD0
    if (ctx->r2 != 0) {
        // 0x8022DBC4: slti        $v0, $v1, 0x1AF
        ctx->r2 = SIGNED(ctx->r3) < 0X1AF ? 1 : 0;
            goto L_8022DBD0;
    }
    // 0x8022DBC4: slti        $v0, $v1, 0x1AF
    ctx->r2 = SIGNED(ctx->r3) < 0X1AF ? 1 : 0;
    // 0x8022DBC8: bne         $v0, $zero, L_8022DBD8
    if (ctx->r2 != 0) {
        // 0x8022DBCC: nop
    
            goto L_8022DBD8;
    }
    // 0x8022DBCC: nop

L_8022DBD0:
    // 0x8022DBD0: jal         0x8005044C
    // 0x8022DBD4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_5;
    // 0x8022DBD4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
L_8022DBD8:
    // 0x8022DBD8: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x8022DBDC: addiu       $v0, $zero, 0x10E
    ctx->r2 = ADD32(0, 0X10E);
    // 0x8022DBE0: beq         $v1, $v0, L_8022DC90
    if (ctx->r3 == ctx->r2) {
        // 0x8022DBE4: slti        $v0, $v1, 0x10F
        ctx->r2 = SIGNED(ctx->r3) < 0X10F ? 1 : 0;
            goto L_8022DC90;
    }
    // 0x8022DBE4: slti        $v0, $v1, 0x10F
    ctx->r2 = SIGNED(ctx->r3) < 0X10F ? 1 : 0;
    // 0x8022DBE8: beq         $v0, $zero, L_8022DC34
    if (ctx->r2 == 0) {
        // 0x8022DBEC: addiu       $v0, $zero, 0x69
        ctx->r2 = ADD32(0, 0X69);
            goto L_8022DC34;
    }
    // 0x8022DBEC: addiu       $v0, $zero, 0x69
    ctx->r2 = ADD32(0, 0X69);
    // 0x8022DBF0: beq         $v1, $v0, L_8022DC7C
    if (ctx->r3 == ctx->r2) {
        // 0x8022DBF4: slti        $v0, $v1, 0x6A
        ctx->r2 = SIGNED(ctx->r3) < 0X6A ? 1 : 0;
            goto L_8022DC7C;
    }
    // 0x8022DBF4: slti        $v0, $v1, 0x6A
    ctx->r2 = SIGNED(ctx->r3) < 0X6A ? 1 : 0;
    // 0x8022DBF8: beq         $v0, $zero, L_8022DC18
    if (ctx->r2 == 0) {
        // 0x8022DBFC: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_8022DC18;
    }
    // 0x8022DBFC: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x8022DC00: beq         $v1, $v0, L_8022DC7C
    if (ctx->r3 == ctx->r2) {
        // 0x8022DC04: addiu       $v0, $zero, 0x4B
        ctx->r2 = ADD32(0, 0X4B);
            goto L_8022DC7C;
    }
    // 0x8022DC04: addiu       $v0, $zero, 0x4B
    ctx->r2 = ADD32(0, 0X4B);
    // 0x8022DC08: beql        $v1, $v0, L_8022DC94
    if (ctx->r3 == ctx->r2) {
        // 0x8022DC0C: sb          $zero, 0x4($s1)
        MEM_B(0X4, ctx->r17) = 0;
            goto L_8022DC94;
    }
    goto skip_0;
    // 0x8022DC0C: sb          $zero, 0x4($s1)
    MEM_B(0X4, ctx->r17) = 0;
    skip_0:
    // 0x8022DC10: j           L_8022DCD4
    // 0x8022DC14: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_8022DCD4;
    // 0x8022DC14: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022DC18:
    // 0x8022DC18: addiu       $v0, $zero, 0xA5
    ctx->r2 = ADD32(0, 0XA5);
    // 0x8022DC1C: beq         $v1, $v0, L_8022DCA4
    if (ctx->r3 == ctx->r2) {
        // 0x8022DC20: addiu       $v0, $zero, 0xB4
        ctx->r2 = ADD32(0, 0XB4);
            goto L_8022DCA4;
    }
    // 0x8022DC20: addiu       $v0, $zero, 0xB4
    ctx->r2 = ADD32(0, 0XB4);
    // 0x8022DC24: beql        $v1, $v0, L_8022DC80
    if (ctx->r3 == ctx->r2) {
        // 0x8022DC28: sb          $zero, 0x6($s1)
        MEM_B(0X6, ctx->r17) = 0;
            goto L_8022DC80;
    }
    goto skip_1;
    // 0x8022DC28: sb          $zero, 0x6($s1)
    MEM_B(0X6, ctx->r17) = 0;
    skip_1:
    // 0x8022DC2C: j           L_8022DCD4
    // 0x8022DC30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_8022DCD4;
    // 0x8022DC30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022DC34:
    // 0x8022DC34: addiu       $v0, $zero, 0x19A
    ctx->r2 = ADD32(0, 0X19A);
    // 0x8022DC38: beq         $v1, $v0, L_8022DCBC
    if (ctx->r3 == ctx->r2) {
        // 0x8022DC3C: slti        $v0, $v1, 0x19B
        ctx->r2 = SIGNED(ctx->r3) < 0X19B ? 1 : 0;
            goto L_8022DCBC;
    }
    // 0x8022DC3C: slti        $v0, $v1, 0x19B
    ctx->r2 = SIGNED(ctx->r3) < 0X19B ? 1 : 0;
    // 0x8022DC40: beq         $v0, $zero, L_8022DC60
    if (ctx->r2 == 0) {
        // 0x8022DC44: addiu       $v0, $zero, 0x12C
        ctx->r2 = ADD32(0, 0X12C);
            goto L_8022DC60;
    }
    // 0x8022DC44: addiu       $v0, $zero, 0x12C
    ctx->r2 = ADD32(0, 0X12C);
    // 0x8022DC48: beq         $v1, $v0, L_8022DC7C
    if (ctx->r3 == ctx->r2) {
        // 0x8022DC4C: addiu       $v0, $zero, 0x17C
        ctx->r2 = ADD32(0, 0X17C);
            goto L_8022DC7C;
    }
    // 0x8022DC4C: addiu       $v0, $zero, 0x17C
    ctx->r2 = ADD32(0, 0X17C);
    // 0x8022DC50: beql        $v1, $v0, L_8022DCA8
    if (ctx->r3 == ctx->r2) {
        // 0x8022DC54: sb          $zero, 0x6($s1)
        MEM_B(0X6, ctx->r17) = 0;
            goto L_8022DCA8;
    }
    goto skip_2;
    // 0x8022DC54: sb          $zero, 0x6($s1)
    MEM_B(0X6, ctx->r17) = 0;
    skip_2:
    // 0x8022DC58: j           L_8022DCD4
    // 0x8022DC5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_8022DCD4;
    // 0x8022DC5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022DC60:
    // 0x8022DC60: addiu       $v0, $zero, 0x1AE
    ctx->r2 = ADD32(0, 0X1AE);
    // 0x8022DC64: beq         $v1, $v0, L_8022DC7C
    if (ctx->r3 == ctx->r2) {
        // 0x8022DC68: addiu       $v0, $zero, 0x1F4
        ctx->r2 = ADD32(0, 0X1F4);
            goto L_8022DC7C;
    }
    // 0x8022DC68: addiu       $v0, $zero, 0x1F4
    ctx->r2 = ADD32(0, 0X1F4);
    // 0x8022DC6C: beql        $v1, $v0, L_8022DC94
    if (ctx->r3 == ctx->r2) {
        // 0x8022DC70: sb          $zero, 0x4($s1)
        MEM_B(0X4, ctx->r17) = 0;
            goto L_8022DC94;
    }
    goto skip_3;
    // 0x8022DC70: sb          $zero, 0x4($s1)
    MEM_B(0X4, ctx->r17) = 0;
    skip_3:
    // 0x8022DC74: j           L_8022DCD4
    // 0x8022DC78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_8022DCD4;
    // 0x8022DC78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022DC7C:
    // 0x8022DC7C: sb          $zero, 0x6($s1)
    MEM_B(0X6, ctx->r17) = 0;
L_8022DC80:
    // 0x8022DC80: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022DC84: lw          $v0, -0x186C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X186C);
    // 0x8022DC88: j           L_8022DCB4
    // 0x8022DC8C: sb          $zero, 0x7($s1)
    MEM_B(0X7, ctx->r17) = 0;
        goto L_8022DCB4;
    // 0x8022DC8C: sb          $zero, 0x7($s1)
    MEM_B(0X7, ctx->r17) = 0;
L_8022DC90:
    // 0x8022DC90: sb          $zero, 0x4($s1)
    MEM_B(0X4, ctx->r17) = 0;
L_8022DC94:
    // 0x8022DC94: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022DC98: lw          $v0, -0x188C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X188C);
    // 0x8022DC9C: sb          $zero, 0x5($s1)
    MEM_B(0X5, ctx->r17) = 0;
    // 0x8022DCA0: sw          $v0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r2;
L_8022DCA4:
    // 0x8022DCA4: sb          $zero, 0x6($s1)
    MEM_B(0X6, ctx->r17) = 0;
L_8022DCA8:
    // 0x8022DCA8: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022DCAC: lw          $v0, -0x1870($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1870);
    // 0x8022DCB0: sb          $zero, 0x7($s1)
    MEM_B(0X7, ctx->r17) = 0;
L_8022DCB4:
    // 0x8022DCB4: j           L_8022DCD0
    // 0x8022DCB8: sw          $v0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r2;
        goto L_8022DCD0;
    // 0x8022DCB8: sw          $v0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r2;
L_8022DCBC:
    // 0x8022DCBC: sb          $zero, 0x4($s1)
    MEM_B(0X4, ctx->r17) = 0;
    // 0x8022DCC0: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022DCC4: lw          $v0, -0x188C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X188C);
    // 0x8022DCC8: sb          $zero, 0x5($s1)
    MEM_B(0X5, ctx->r17) = 0;
    // 0x8022DCCC: sw          $v0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r2;
L_8022DCD0:
    // 0x8022DCD0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022DCD4:
    // 0x8022DCD4: jal         0x8022D970
    // 0x8022DCD8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8022D970_ovl25(rdram, ctx);
        goto after_6;
    // 0x8022DCD8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_6:
L_8022DCDC:
    // 0x8022DCDC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022DCE0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022DCE4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022DCE8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022DCEC: jr          $ra
    // 0x8022DCF0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022DCF0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8022DCF4: nop

    // 0x8022DCF8: nop

    // 0x8022DCFC: nop

;}
RECOMP_FUNC void func_80225670_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225670: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225674: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225678: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022567C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80225680: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80225684: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225688: jal         0x8009A3B4
    // 0x8022568C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022568C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80225690: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80225694: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80225698: jal         0x8009A3B4
    // 0x8022569C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022569C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x802256A0: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x802256A4: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x802256A8: jal         0x8009A3B4
    // 0x802256AC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x802256AC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x802256B0: jal         0x800A3450
    // 0x802256B4: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x802256B4: nop

    after_3:
    // 0x802256B8: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x802256BC: sh          $v0, 0x32E($s0)
    MEM_H(0X32E, ctx->r16) = ctx->r2;
    // 0x802256C0: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x802256C4: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802256C8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802256CC: lw          $v0, -0x24F0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X24F0);
    // 0x802256D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802256D4: jalr        $v0
    // 0x802256D8: addiu       $a1, $s0, 0x328
    ctx->r5 = ADD32(ctx->r16, 0X328);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x802256D8: addiu       $a1, $s0, 0x328
    ctx->r5 = ADD32(ctx->r16, 0X328);
    after_4:
    // 0x802256DC: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x802256E0: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x802256E4: beq         $a1, $v0, L_80225700
    if (ctx->r5 == ctx->r2) {
        // 0x802256E8: nop
    
            goto L_80225700;
    }
    // 0x802256E8: nop

    // 0x802256EC: lb          $a2, 0xC($s0)
    ctx->r6 = MEM_B(ctx->r16, 0XC);
    // 0x802256F0: jal         0x80050294
    // 0x802256F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x802256F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x802256F8: j           L_8022570C
    // 0x802256FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_8022570C;
    // 0x802256FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80225700:
    // 0x80225700: jal         0x8005044C
    // 0x80225704: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_6;
    // 0x80225704: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x80225708: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022570C:
    // 0x8022570C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80225710: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x80225714: jal         0x80047284
    // 0x80225718: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_7;
    // 0x80225718: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_7:
    // 0x8022571C: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x80225720: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x80225724: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225728: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022572C: jr          $ra
    // 0x80225730: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225730: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022C170_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C170: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022C174: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x8022C178: sb          $zero, 0x11($a1)
    MEM_B(0X11, ctx->r5) = 0;
    // 0x8022C17C: sb          $zero, 0xF($a1)
    MEM_B(0XF, ctx->r5) = 0;
    // 0x8022C180: sb          $v0, 0x10($a1)
    MEM_B(0X10, ctx->r5) = ctx->r2;
    // 0x8022C184: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022C188: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x8022C18C: lw          $v0, -0x1BF8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1BF8);
    // 0x8022C190: jr          $ra
    // 0x8022C194: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x8022C194: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_80232CF0_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232CF0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80232CF4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232CF8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232CFC: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80232D00: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80232D04: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80232D08: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80232D0C: jal         0x8009A3B4
    // 0x80232D10: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80232D10: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x80232D14: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80232D18: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80232D1C: jal         0x8009A3B4
    // 0x80232D20: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80232D20: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80232D24: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80232D28: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80232D2C: jal         0x8009A3B4
    // 0x80232D30: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80232D30: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80232D34: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80232D38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232D3C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80232D40: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80232D44: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80232D48: lw          $v0, -0x1450($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1450);
    // 0x80232D4C: addiu       $s1, $s0, 0x400
    ctx->r17 = ADD32(ctx->r16, 0X400);
    // 0x80232D50: jalr        $v0
    // 0x80232D54: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x80232D54: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_3:
    // 0x80232D58: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232D5C: jal         0x80232F40
    // 0x80232D60: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_80232F40_ovl25(rdram, ctx);
        goto after_4;
    // 0x80232D60: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_4:
    // 0x80232D64: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80232D68: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80232D6C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232D70: jr          $ra
    // 0x80232D74: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80232D74: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80225530_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225530: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225534: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225538: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x8022553C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80225540: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80225544: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80225548: lw          $v0, -0x2500($at)
    ctx->r2 = MEM_W(ctx->r1, -0X2500);
    // 0x8022554C: jalr        $v0
    // 0x80225550: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80225550: nop

    after_0:
    // 0x80225554: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80225558: jr          $ra
    // 0x8022555C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022555C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023B75C_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B75C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023B760: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023B764: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x8023B768: addiu       $v0, $zero, 0x154
    ctx->r2 = ADD32(0, 0X154);
    // 0x8023B76C: bne         $v1, $v0, L_8023B788
    if (ctx->r3 != ctx->r2) {
        // 0x8023B770: nop
    
            goto L_8023B788;
    }
    // 0x8023B770: nop

    // 0x8023B774: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8023B778: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x8023B77C: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x8023B780: jal         0x80036E48
    // 0x8023B784: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80036E48_12248(rdram, ctx);
        goto after_0;
    // 0x8023B784: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_0:
L_8023B788:
    // 0x8023B788: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023B78C: jr          $ra
    // 0x8023B790: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023B790: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80232F14_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232F14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80232F18: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232F1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80232F20: jal         0x800504EC
    // 0x80232F24: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_800504EC_2B8EC(rdram, ctx);
        goto after_0;
    // 0x80232F24: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x80232F28: jal         0x8005129C
    // 0x80232F2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005129C_2C69C(rdram, ctx);
        goto after_1;
    // 0x80232F2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80232F30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80232F34: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232F38: jr          $ra
    // 0x80232F3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80232F3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023B708_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B708: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023B70C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023B710: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x8023B714: bne         $v0, $zero, L_8023B728
    if (ctx->r2 != 0) {
        // 0x8023B718: nop
    
            goto L_8023B728;
    }
    // 0x8023B718: nop

    // 0x8023B71C: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8023B720: jal         0x8005FA7C
    // 0x8023B724: addiu       $a0, $a0, -0x3F0
    ctx->r4 = ADD32(ctx->r4, -0X3F0);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_0;
    // 0x8023B724: addiu       $a0, $a0, -0x3F0
    ctx->r4 = ADD32(ctx->r4, -0X3F0);
    after_0:
L_8023B728:
    // 0x8023B728: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023B72C: jr          $ra
    // 0x8023B730: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023B730: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225C20_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225C20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225C24: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225C28: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225C2C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80225C30: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80225C34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225C38: jal         0x8009A3B4
    // 0x80225C3C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80225C3C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80225C40: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80225C44: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80225C48: jal         0x8009A3B4
    // 0x80225C4C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80225C4C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80225C50: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80225C54: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80225C58: jal         0x8009A3B4
    // 0x80225C5C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80225C5C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80225C60: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x80225C64: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80225C68: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x80225C6C: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x80225C70: beq         $v0, $zero, L_80225D90
    if (ctx->r2 == 0) {
        // 0x80225C74: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80225D90;
    }
    // 0x80225C74: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80225C78: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80225C7C: addu        $at, $at, $v0
    gpr jr_addend_80225C84 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80225C80: lw          $v0, 0xC40($at)
    ctx->r2 = ADD32(ctx->r1, 0XC40);
    // 0x80225C84: jr          $v0
    // 0x80225C88: nop

    switch (jr_addend_80225C84 >> 2) {
        case 0: goto L_80225C8C; break;
        case 1: goto L_80225D00; break;
        case 2: goto L_80225CEC; break;
        case 3: goto L_80225D10; break;
        case 4: goto L_80225D80; break;
        default: switch_error(__func__, 0x80225C84, 0x80240C40);
    }
    // 0x80225C88: nop

L_80225C8C:
    // 0x80225C8C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80225C90: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80225C94: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80225C98: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80225C9C: jal         0x8004D5FC
    // 0x80225CA0: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5FC_289FC(rdram, ctx);
        goto after_3;
    // 0x80225CA0: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_3:
    // 0x80225CA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80225CA8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80225CAC: addiu       $a2, $zero, 0x2E
    ctx->r6 = ADD32(0, 0X2E);
    // 0x80225CB0: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80225CB4: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80225CB8: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80225CBC: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80225CC0: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80225CC4: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80225CC8: addiu       $v0, $zero, 0xC0
    ctx->r2 = ADD32(0, 0XC0);
    // 0x80225CCC: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x80225CD0: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x80225CD4: jal         0x80050294
    // 0x80225CD8: sh          $v0, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_4;
    // 0x80225CD8: sh          $v0, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r2;
    after_4:
    // 0x80225CDC: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80225CE0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225CE4: j           L_80225D90
    // 0x80225CE8: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_80225D90;
    // 0x80225CE8: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80225CEC:
    // 0x80225CEC: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80225CF0: lh          $a3, 0x48($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X48);
    // 0x80225CF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80225CF8: jal         0x8004DA90
    // 0x80225CFC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_5;
    // 0x80225CFC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
L_80225D00:
    // 0x80225D00: jal         0x8005044C
    // 0x80225D04: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_6;
    // 0x80225D04: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x80225D08: j           L_80225D94
    // 0x80225D0C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_80225D94;
    // 0x80225D0C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80225D10:
    // 0x80225D10: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x80225D14: slti        $v0, $v0, 0x40
    ctx->r2 = SIGNED(ctx->r2) < 0X40 ? 1 : 0;
    // 0x80225D18: beq         $v0, $zero, L_80225D38
    if (ctx->r2 == 0) {
        // 0x80225D1C: nop
    
            goto L_80225D38;
    }
    // 0x80225D1C: nop

    // 0x80225D20: lbu         $v1, 0xC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XC);
    // 0x80225D24: lhu         $v0, 0x58($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X58);
    // 0x80225D28: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80225D2C: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    // 0x80225D30: sh          $v0, 0x58($s0)
    MEM_H(0X58, ctx->r16) = ctx->r2;
    // 0x80225D34: sb          $v1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r3;
L_80225D38:
    // 0x80225D38: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x80225D3C: slti        $v0, $v0, 0x3C
    ctx->r2 = SIGNED(ctx->r2) < 0X3C ? 1 : 0;
    // 0x80225D40: beq         $v0, $zero, L_80225D6C
    if (ctx->r2 == 0) {
        // 0x80225D44: nop
    
            goto L_80225D6C;
    }
    // 0x80225D44: nop

    // 0x80225D48: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80225D4C: lhu         $v1, 0x44($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X44);
    // 0x80225D50: lhu         $a0, 0x48($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X48);
    // 0x80225D54: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225D58: addiu       $v1, $v1, -0x8
    ctx->r3 = ADD32(ctx->r3, -0X8);
    // 0x80225D5C: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x80225D60: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    // 0x80225D64: sh          $a0, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r4;
    // 0x80225D68: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
L_80225D6C:
    // 0x80225D6C: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80225D70: lh          $a3, 0x48($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X48);
    // 0x80225D74: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80225D78: jal         0x8004DA90
    // 0x80225D7C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_7;
    // 0x80225D7C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_7:
L_80225D80:
    // 0x80225D80: jal         0x800504EC
    // 0x80225D84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800504EC_2B8EC(rdram, ctx);
        goto after_8;
    // 0x80225D84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
    // 0x80225D88: jal         0x8005129C
    // 0x80225D8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005129C_2C69C(rdram, ctx);
        goto after_9;
    // 0x80225D8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
L_80225D90:
    // 0x80225D90: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80225D94:
    // 0x80225D94: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80225D98: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x80225D9C: jal         0x80047284
    // 0x80225DA0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_10;
    // 0x80225DA0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_10:
    // 0x80225DA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225DA8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225DAC: jr          $ra
    // 0x80225DB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225DB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80225DB4: nop

    // 0x80225DB8: nop

    // 0x80225DBC: nop

;}
RECOMP_FUNC void func_8022620C_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022620C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80226210: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x80226214: slti        $v0, $v1, 0x64
    ctx->r2 = SIGNED(ctx->r3) < 0X64 ? 1 : 0;
    // 0x80226218: beq         $v0, $zero, L_80226230
    if (ctx->r2 == 0) {
        // 0x8022621C: slti        $v0, $v1, 0x7C
        ctx->r2 = SIGNED(ctx->r3) < 0X7C ? 1 : 0;
            goto L_80226230;
    }
    // 0x8022621C: slti        $v0, $v1, 0x7C
    ctx->r2 = SIGNED(ctx->r3) < 0X7C ? 1 : 0;
    // 0x80226220: lhu         $v0, 0x14($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X14);
    // 0x80226224: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x80226228: j           L_80226260
    // 0x8022622C: sh          $v0, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r2;
        goto L_80226260;
    // 0x8022622C: sh          $v0, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r2;
L_80226230:
    // 0x80226230: beq         $v0, $zero, L_80226254
    if (ctx->r2 == 0) {
        // 0x80226234: nop
    
            goto L_80226254;
    }
    // 0x80226234: nop

    // 0x80226238: lhu         $v0, 0x58($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X58);
    // 0x8022623C: lhu         $v1, 0x14($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X14);
    // 0x80226240: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x80226244: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x80226248: sh          $v0, 0x58($a0)
    MEM_H(0X58, ctx->r4) = ctx->r2;
    // 0x8022624C: j           L_80226260
    // 0x80226250: sh          $v1, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r3;
        goto L_80226260;
    // 0x80226250: sh          $v1, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r3;
L_80226254:
    // 0x80226254: lhu         $v0, 0x18($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X18);
    // 0x80226258: addiu       $v0, $v0, -0x30
    ctx->r2 = ADD32(ctx->r2, -0X30);
    // 0x8022625C: sh          $v0, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r2;
L_80226260:
    // 0x80226260: jr          $ra
    // 0x80226264: nop

    TRACE_RETURN()
    return;
    // 0x80226264: nop

;}
RECOMP_FUNC void func_80227FA0_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227FA0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227FA4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227FA8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227FAC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80227FB0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227FB4: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80227FB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227FBC: beq         $v1, $v0, L_80228070
    if (ctx->r3 == ctx->r2) {
        // 0x80227FC0: addu        $s1, $a1, $zero
        ctx->r17 = ADD32(ctx->r5, 0);
            goto L_80228070;
    }
    // 0x80227FC0: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x80227FC4: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80227FC8: beql        $v0, $zero, L_80227FE0
    if (ctx->r2 == 0) {
        // 0x80227FCC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80227FE0;
    }
    goto skip_0;
    // 0x80227FCC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80227FD0: beq         $v1, $zero, L_80227FF0
    if (ctx->r3 == 0) {
        // 0x80227FD4: nop
    
            goto L_80227FF0;
    }
    // 0x80227FD4: nop

    // 0x80227FD8: j           L_8022816C
    // 0x80227FDC: nop

        goto L_8022816C;
    // 0x80227FDC: nop

L_80227FE0:
    // 0x80227FE0: beq         $v1, $v0, L_80228110
    if (ctx->r3 == ctx->r2) {
        // 0x80227FE4: nop
    
            goto L_80228110;
    }
    // 0x80227FE4: nop

    // 0x80227FE8: j           L_8022816C
    // 0x80227FEC: nop

        goto L_8022816C;
    // 0x80227FEC: nop

L_80227FF0:
    // 0x80227FF0: jal         0x8004F144
    // 0x80227FF4: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80227FF4: nop

    after_0:
    // 0x80227FF8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80227FFC: beq         $v1, $zero, L_80228028
    if (ctx->r3 == 0) {
        // 0x80228000: addiu       $a0, $v1, 0x38
        ctx->r4 = ADD32(ctx->r3, 0X38);
            goto L_80228028;
    }
    // 0x80228000: addiu       $a0, $v1, 0x38
    ctx->r4 = ADD32(ctx->r3, 0X38);
    // 0x80228004: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80228008: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022800C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80228010: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80228014: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80228018: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8022801C: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x80228020: jal         0x8009A3B4
    // 0x80228024: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80228024: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    after_1:
L_80228028:
    // 0x80228028: sh          $zero, 0xE($s1)
    MEM_H(0XE, ctx->r17) = 0;
    // 0x8022802C: lh          $v0, 0x18($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X18);
    // 0x80228030: slti        $v0, $v0, 0x400
    ctx->r2 = SIGNED(ctx->r2) < 0X400 ? 1 : 0;
    // 0x80228034: beq         $v0, $zero, L_802280E4
    if (ctx->r2 == 0) {
        // 0x80228038: nop
    
            goto L_802280E4;
    }
    // 0x80228038: nop

    // 0x8022803C: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x80228040: bgez        $v0, L_80228050
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80228044: sh          $zero, 0x46($s0)
        MEM_H(0X46, ctx->r16) = 0;
            goto L_80228050;
    }
    // 0x80228044: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80228048: j           L_80228054
    // 0x8022804C: addiu       $v0, $zero, -0x100
    ctx->r2 = ADD32(0, -0X100);
        goto L_80228054;
    // 0x8022804C: addiu       $v0, $zero, -0x100
    ctx->r2 = ADD32(0, -0X100);
L_80228050:
    // 0x80228050: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
L_80228054:
    // 0x80228054: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80228058: addiu       $v0, $zero, -0x80
    ctx->r2 = ADD32(0, -0X80);
    // 0x8022805C: sh          $v0, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r2;
    // 0x80228060: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228064: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80228068: j           L_8022816C
    // 0x8022806C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8022816C;
    // 0x8022806C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80228070:
    // 0x80228070: lh          $a1, 0x48($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X48);
    // 0x80228074: lh          $a3, 0x44($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X44);
    // 0x80228078: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022807C: jal         0x8004DA90
    // 0x80228080: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x80228080: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x80228084: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x80228088: bltzl       $v0, L_80228090
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022808C: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_80228090;
    }
    goto skip_1;
    // 0x8022808C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_1:
L_80228090:
    // 0x80228090: slti        $v0, $v0, 0x601
    ctx->r2 = SIGNED(ctx->r2) < 0X601 ? 1 : 0;
    // 0x80228094: beq         $v0, $zero, L_802280AC
    if (ctx->r2 == 0) {
        // 0x80228098: nop
    
            goto L_802280AC;
    }
    // 0x80228098: nop

    // 0x8022809C: lh          $v0, 0x18($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X18);
    // 0x802280A0: slti        $v0, $v0, 0x400
    ctx->r2 = SIGNED(ctx->r2) < 0X400 ? 1 : 0;
    // 0x802280A4: bne         $v0, $zero, L_8022816C
    if (ctx->r2 != 0) {
        // 0x802280A8: nop
    
            goto L_8022816C;
    }
    // 0x802280A8: nop

L_802280AC:
    // 0x802280AC: jal         0x8004F144
    // 0x802280B0: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_3;
    // 0x802280B0: nop

    after_3:
    // 0x802280B4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802280B8: beq         $v1, $zero, L_802280E4
    if (ctx->r3 == 0) {
        // 0x802280BC: addiu       $a0, $v1, 0x38
        ctx->r4 = ADD32(ctx->r3, 0X38);
            goto L_802280E4;
    }
    // 0x802280BC: addiu       $a0, $v1, 0x38
    ctx->r4 = ADD32(ctx->r3, 0X38);
    // 0x802280C0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x802280C4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802280C8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802280CC: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x802280D0: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x802280D4: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x802280D8: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x802280DC: jal         0x8009A3B4
    // 0x802280E0: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x802280E0: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    after_4:
L_802280E4:
    // 0x802280E4: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x802280E8: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x802280EC: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x802280F0: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x802280F4: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x802280F8: addiu       $v0, $zero, -0x200
    ctx->r2 = ADD32(0, -0X200);
    // 0x802280FC: sh          $v0, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r2;
    // 0x80228100: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80228104: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x80228108: j           L_8022816C
    // 0x8022810C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8022816C;
    // 0x8022810C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80228110:
    // 0x80228110: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x80228114: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80228118: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8022811C: lh          $v1, 0xE($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XE);
    // 0x80228120: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80228124: bne         $v1, $v0, L_80228130
    if (ctx->r3 != ctx->r2) {
        // 0x80228128: addiu       $v0, $zero, -0x400
        ctx->r2 = ADD32(0, -0X400);
            goto L_80228130;
    }
    // 0x80228128: addiu       $v0, $zero, -0x400
    ctx->r2 = ADD32(0, -0X400);
    // 0x8022812C: sh          $v0, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r2;
L_80228130:
    // 0x80228130: lhu         $v0, 0xE($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XE);
    // 0x80228134: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228138: sh          $v0, 0xE($s1)
    MEM_H(0XE, ctx->r17) = ctx->r2;
    // 0x8022813C: lh          $a1, 0x48($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X48);
    // 0x80228140: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x80228144: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228148: jal         0x8004DA90
    // 0x8022814C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_5;
    // 0x8022814C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_5:
    // 0x80228150: lh          $v0, 0x16($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X16);
    // 0x80228154: slti        $v0, $v0, -0x7F
    ctx->r2 = SIGNED(ctx->r2) < -0X7F ? 1 : 0;
    // 0x80228158: bne         $v0, $zero, L_8022816C
    if (ctx->r2 != 0) {
        // 0x8022815C: nop
    
            goto L_8022816C;
    }
    // 0x8022815C: nop

    // 0x80228160: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80228164: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80228168: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_8022816C:
    // 0x8022816C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80228170: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80228174: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228178: jr          $ra
    // 0x8022817C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022817C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022F604_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F604: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8022F608: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x8022F60C: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x8022F610: sw          $ra, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r31;
    // 0x8022F614: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x8022F618: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x8022F61C: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x8022F620: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x8022F624: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8022F628: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022F62C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022F630: lh          $a1, 0x44($s3)
    ctx->r5 = MEM_H(ctx->r19, 0X44);
    // 0x8022F634: lh          $a2, 0x46($s3)
    ctx->r6 = MEM_H(ctx->r19, 0X46);
    // 0x8022F638: lh          $a3, 0x48($s3)
    ctx->r7 = MEM_H(ctx->r19, 0X48);
    // 0x8022F63C: jal         0x8004DA90
    // 0x8022F640: addiu       $s7, $s3, 0x4E0
    ctx->r23 = ADD32(ctx->r19, 0X4E0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8022F640: addiu       $s7, $s3, 0x4E0
    ctx->r23 = ADD32(ctx->r19, 0X4E0);
    after_0:
    // 0x8022F644: lh          $v0, 0x4E4($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X4E4);
    // 0x8022F648: bne         $v0, $zero, L_8022F6E8
    if (ctx->r2 != 0) {
        // 0x8022F64C: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022F6E8;
    }
    // 0x8022F64C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022F650: jal         0x800A3450
    // 0x8022F654: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x8022F654: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    after_1:
    // 0x8022F658: addiu       $s6, $zero, 0x5
    ctx->r22 = ADD32(0, 0X5);
    // 0x8022F65C: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8022F660: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022F664: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022F668: lbu         $v0, -0x1600($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X1600);
    // 0x8022F66C: addiu       $s5, $zero, 0x80
    ctx->r21 = ADD32(0, 0X80);
    // 0x8022F670: addiu       $s4, $zero, 0x2
    ctx->r20 = ADD32(0, 0X2);
    // 0x8022F674: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022F678: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8022F67C: sh          $v0, 0x4E4($s3)
    MEM_H(0X4E4, ctx->r19) = ctx->r2;
L_8022F680:
    // 0x8022F680: jal         0x800A3450
    // 0x8022F684: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x8022F684: nop

    after_2:
    // 0x8022F688: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022F68C: lui         $s1, 0x8024
    ctx->r17 = S32(0X8024 << 16);
    // 0x8022F690: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
    // 0x8022F694: jal         0x8004F144
    // 0x8022F698: lbu         $s1, -0x15F8($s1)
    ctx->r17 = MEM_BU(ctx->r17, -0X15F8);
    func_8004F144_2A544(rdram, ctx);
        goto after_3;
    // 0x8022F698: lbu         $s1, -0x15F8($s1)
    ctx->r17 = MEM_BU(ctx->r17, -0X15F8);
    after_3:
    // 0x8022F69C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022F6A0: beql        $s0, $zero, L_8022F6D4
    if (ctx->r16 == 0) {
        // 0x8022F6A4: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_8022F6D4;
    }
    goto skip_0;
    // 0x8022F6A4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_0:
    // 0x8022F6A8: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x8022F6AC: sll         $a1, $s1, 3
    ctx->r5 = S32(ctx->r17 << 3);
    // 0x8022F6B0: addu        $a1, $a1, $s3
    ctx->r5 = ADD32(ctx->r5, ctx->r19);
    // 0x8022F6B4: addiu       $a1, $a1, 0x180
    ctx->r5 = ADD32(ctx->r5, 0X180);
    // 0x8022F6B8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022F6BC: sb          $s6, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r22;
    // 0x8022F6C0: sb          $s5, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r21;
    // 0x8022F6C4: jal         0x8009A3B4
    // 0x8022F6C8: sb          $s4, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r20;
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8022F6C8: sb          $s4, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r20;
    after_4:
    // 0x8022F6CC: sb          $s4, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r20;
    // 0x8022F6D0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_8022F6D4:
    // 0x8022F6D4: sltiu       $v0, $s2, 0x3
    ctx->r2 = ctx->r18 < 0X3 ? 1 : 0;
    // 0x8022F6D8: bne         $v0, $zero, L_8022F680
    if (ctx->r2 != 0) {
        // 0x8022F6DC: nop
    
            goto L_8022F680;
    }
    // 0x8022F6DC: nop

    // 0x8022F6E0: j           L_8022F6F4
    // 0x8022F6E4: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
        goto L_8022F6F4;
    // 0x8022F6E4: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
L_8022F6E8:
    // 0x8022F6E8: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022F6EC: sh          $v0, 0x4E4($s3)
    MEM_H(0X4E4, ctx->r19) = ctx->r2;
    // 0x8022F6F0: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
L_8022F6F4:
    // 0x8022F6F4: addu        $s0, $s7, $zero
    ctx->r16 = ADD32(ctx->r23, 0);
    // 0x8022F6F8: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
L_8022F6FC:
    // 0x8022F6FC: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x8022F700: addu        $a1, $a1, $s1
    ctx->r5 = ADD32(ctx->r5, ctx->r17);
    // 0x8022F704: lbu         $a1, -0x1680($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X1680);
    // 0x8022F708: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8022F70C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022F710: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x8022F714: addu        $a1, $a1, $s3
    ctx->r5 = ADD32(ctx->r5, ctx->r19);
    // 0x8022F718: jal         0x8009A3B4
    // 0x8022F71C: addiu       $a1, $a1, 0x180
    ctx->r5 = ADD32(ctx->r5, 0X180);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8022F71C: addiu       $a1, $a1, 0x180
    ctx->r5 = ADD32(ctx->r5, 0X180);
    after_5:
    // 0x8022F720: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8022F724: addu        $v1, $v1, $s1
    ctx->r3 = ADD32(ctx->r3, ctx->r17);
    // 0x8022F728: lbu         $v1, -0x167F($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X167F);
    // 0x8022F72C: lhu         $v0, 0x12($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X12);
    // 0x8022F730: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022F734: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x8022F738: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x8022F73C: lhu         $v0, 0x10($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X10);
    // 0x8022F740: sh          $v0, 0x1C($v1)
    MEM_H(0X1C, ctx->r3) = ctx->r2;
    // 0x8022F744: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x8022F748: lhu         $v0, 0x12($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X12);
    // 0x8022F74C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8022F750: sh          $v0, 0x1E($v1)
    MEM_H(0X1E, ctx->r3) = ctx->r2;
    // 0x8022F754: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x8022F758: lhu         $v0, 0x14($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X14);
    // 0x8022F75C: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x8022F760: sh          $v0, 0x20($v1)
    MEM_H(0X20, ctx->r3) = ctx->r2;
    // 0x8022F764: sltiu       $v0, $s2, 0x4
    ctx->r2 = ctx->r18 < 0X4 ? 1 : 0;
    // 0x8022F768: bne         $v0, $zero, L_8022F6FC
    if (ctx->r2 != 0) {
        // 0x8022F76C: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_8022F6FC;
    }
    // 0x8022F76C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8022F770: lw          $ra, 0x40($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X40);
    // 0x8022F774: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x8022F778: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x8022F77C: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x8022F780: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x8022F784: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8022F788: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8022F78C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022F790: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022F794: jr          $ra
    // 0x8022F798: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x8022F798: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8022F79C_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F79C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022F7A0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022F7A4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F7A8: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022F7AC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022F7B0: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x8022F7B4: lui         $v0, 0xF4
    ctx->r2 = S32(0XF4 << 16);
    // 0x8022F7B8: ori         $v0, $v0, 0x2400
    ctx->r2 = ctx->r2 | 0X2400;
    // 0x8022F7BC: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8022F7C0: bne         $v0, $zero, L_8022F858
    if (ctx->r2 != 0) {
        // 0x8022F7C4: nop
    
            goto L_8022F858;
    }
    // 0x8022F7C4: nop

    // 0x8022F7C8: lh          $v0, 0x4E4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4E4);
    // 0x8022F7CC: bne         $v0, $zero, L_8022F850
    if (ctx->r2 != 0) {
        // 0x8022F7D0: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022F850;
    }
    // 0x8022F7D0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022F7D4: lui         $v0, 0x53
    ctx->r2 = S32(0X53 << 16);
    // 0x8022F7D8: ori         $v0, $v0, 0xEC60
    ctx->r2 = ctx->r2 | 0XEC60;
    // 0x8022F7DC: lui         $a0, 0x55
    ctx->r4 = S32(0X55 << 16);
    // 0x8022F7E0: lw          $a1, 0x80($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X80);
    // 0x8022F7E4: ori         $a0, $a0, 0x7300
    ctx->r4 = ctx->r4 | 0X7300;
    // 0x8022F7E8: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x8022F7EC: sh          $v1, 0x4E4($s0)
    MEM_H(0X4E4, ctx->r16) = ctx->r3;
    // 0x8022F7F0: sltu        $v0, $v0, $a1
    ctx->r2 = ctx->r2 < ctx->r5 ? 1 : 0;
    // 0x8022F7F4: sltu        $a0, $a0, $a1
    ctx->r4 = ctx->r4 < ctx->r5 ? 1 : 0;
    // 0x8022F7F8: bne         $a0, $zero, L_8022F804
    if (ctx->r4 != 0) {
        // 0x8022F7FC: xori        $s1, $v0, 0x1
        ctx->r17 = ctx->r2 ^ 0X1;
            goto L_8022F804;
    }
    // 0x8022F7FC: xori        $s1, $v0, 0x1
    ctx->r17 = ctx->r2 ^ 0X1;
    // 0x8022F800: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_8022F804:
    // 0x8022F804: lui         $v0, 0x22
    ctx->r2 = S32(0X22 << 16);
    // 0x8022F808: ori         $v0, $v0, 0x5510
    ctx->r2 = ctx->r2 | 0X5510;
    // 0x8022F80C: sltu        $v0, $v0, $a1
    ctx->r2 = ctx->r2 < ctx->r5 ? 1 : 0;
    // 0x8022F810: beql        $v0, $zero, L_8022F818
    if (ctx->r2 == 0) {
        // 0x8022F814: addiu       $s1, $zero, 0x3
        ctx->r17 = ADD32(0, 0X3);
            goto L_8022F818;
    }
    goto skip_0;
    // 0x8022F814: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
    skip_0:
L_8022F818:
    // 0x8022F818: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F81C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022F820: jal         0x8022F86C
    // 0x8022F824: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_8022F86C_ovl25(rdram, ctx);
        goto after_0;
    // 0x8022F824: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_0:
    // 0x8022F828: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F82C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022F830: jal         0x8022F86C
    // 0x8022F834: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_8022F86C_ovl25(rdram, ctx);
        goto after_1;
    // 0x8022F834: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_1:
    // 0x8022F838: addiu       $a0, $zero, 0x1A5
    ctx->r4 = ADD32(0, 0X1A5);
    // 0x8022F83C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022F840: jal         0x8002A2F8
    // 0x8022F844: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_2;
    // 0x8022F844: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x8022F848: j           L_8022F858
    // 0x8022F84C: nop

        goto L_8022F858;
    // 0x8022F84C: nop

L_8022F850:
    // 0x8022F850: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022F854: sh          $v0, 0x4E4($s0)
    MEM_H(0X4E4, ctx->r16) = ctx->r2;
L_8022F858:
    // 0x8022F858: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022F85C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022F860: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022F864: jr          $ra
    // 0x8022F868: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022F868: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8023A9E0_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A9E0: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x8023A9E4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023A9E8: sb          $zero, 0x3262($at)
    MEM_B(0X3262, ctx->r1) = 0;
    // 0x8023A9EC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023A9F0: sb          $zero, 0x3261($at)
    MEM_B(0X3261, ctx->r1) = 0;
    // 0x8023A9F4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023A9F8: sb          $zero, 0x3260($at)
    MEM_B(0X3260, ctx->r1) = 0;
    // 0x8023A9FC: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8023AA00: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8023AA04: lw          $v0, -0x4F0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4F0);
    // 0x8023AA08: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023AA0C: sb          $zero, 0x3265($at)
    MEM_B(0X3265, ctx->r1) = 0;
    // 0x8023AA10: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023AA14: sb          $zero, 0x3264($at)
    MEM_B(0X3264, ctx->r1) = 0;
    // 0x8023AA18: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023AA1C: sb          $zero, 0x3263($at)
    MEM_B(0X3263, ctx->r1) = 0;
    // 0x8023AA20: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023AA24: sw          $v0, 0x3268($at)
    MEM_W(0X3268, ctx->r1) = ctx->r2;
    // 0x8023AA28: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8023AA2C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8023AA30: lw          $v0, -0x4E4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4E4);
    // 0x8023AA34: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023AA38: jr          $ra
    // 0x8023AA3C: sw          $v0, 0x326C($at)
    MEM_W(0X326C, ctx->r1) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x8023AA3C: sw          $v0, 0x326C($at)
    MEM_W(0X326C, ctx->r1) = ctx->r2;
;}
RECOMP_FUNC void func_80233CEC_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233CEC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80233CF0: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80233CF4: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    // 0x80233CF8: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x80233CFC: lui         $s5, 0x2E80
    ctx->r21 = S32(0X2E80 << 16);
    // 0x80233D00: ori         $s5, $s5, 0x8080
    ctx->r21 = ctx->r21 | 0X8080;
    // 0x80233D04: sw          $fp, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r30;
    // 0x80233D08: lui         $fp, 0x3D48
    ctx->r30 = S32(0X3D48 << 16);
    // 0x80233D0C: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x80233D10: lui         $s7, 0x2E
    ctx->r23 = S32(0X2E << 16);
    // 0x80233D14: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x80233D18: addiu       $s6, $zero, 0x14
    ctx->r22 = ADD32(0, 0X14);
    // 0x80233D1C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80233D20: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x80233D24: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80233D28: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x80233D2C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80233D30: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80233D34: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
L_80233D38:
    // 0x80233D38: lui         $s1, 0x8024
    ctx->r17 = S32(0X8024 << 16);
    // 0x80233D3C: addu        $s1, $s1, $s2
    ctx->r17 = ADD32(ctx->r17, ctx->r18);
    // 0x80233D40: lbu         $s1, -0x1244($s1)
    ctx->r17 = MEM_BU(ctx->r17, -0X1244);
    // 0x80233D44: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x80233D48: addu        $s0, $s0, $s2
    ctx->r16 = ADD32(ctx->r16, ctx->r18);
    // 0x80233D4C: lbu         $s0, -0x1243($s0)
    ctx->r16 = MEM_BU(ctx->r16, -0X1243);
    // 0x80233D50: jal         0x8003B878
    // 0x80233D54: addiu       $s2, $s2, 0x2
    ctx->r18 = ADD32(ctx->r18, 0X2);
    func_8003B878_16C78(rdram, ctx);
        goto after_0;
    // 0x80233D54: addiu       $s2, $s2, 0x2
    ctx->r18 = ADD32(ctx->r18, 0X2);
    after_0:
    // 0x80233D58: sw          $s5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r21;
    // 0x80233D5C: lw          $v1, 0xD8($s3)
    ctx->r3 = MEM_W(ctx->r19, 0XD8);
    // 0x80233D60: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x80233D64: sw          $v1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r3;
    // 0x80233D68: lw          $a2, 0xDC($s3)
    ctx->r6 = MEM_W(ctx->r19, 0XDC);
    // 0x80233D6C: sll         $a0, $s0, 8
    ctx->r4 = S32(ctx->r16 << 8);
    // 0x80233D70: or          $v1, $s1, $fp
    ctx->r3 = ctx->r17 | ctx->r30;
    // 0x80233D74: or          $v1, $a0, $v1
    ctx->r3 = ctx->r4 | ctx->r3;
    // 0x80233D78: addiu       $a1, $s1, 0x1F
    ctx->r5 = ADD32(ctx->r17, 0X1F);
    // 0x80233D7C: sw          $v1, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r3;
    // 0x80233D80: or          $v1, $a1, $s7
    ctx->r3 = ctx->r5 | ctx->r23;
    // 0x80233D84: or          $a0, $a0, $v1
    ctx->r4 = ctx->r4 | ctx->r3;
    // 0x80233D88: addiu       $s0, $s0, 0x1F
    ctx->r16 = ADD32(ctx->r16, 0X1F);
    // 0x80233D8C: sll         $s0, $s0, 8
    ctx->r16 = S32(ctx->r16 << 8);
    // 0x80233D90: or          $s1, $s0, $s1
    ctx->r17 = ctx->r16 | ctx->r17;
    // 0x80233D94: or          $s0, $s0, $a1
    ctx->r16 = ctx->r16 | ctx->r5;
    // 0x80233D98: sw          $a0, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r4;
    // 0x80233D9C: sw          $s1, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r17;
    // 0x80233DA0: sw          $s0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r16;
    // 0x80233DA4: sw          $s6, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r22;
    // 0x80233DA8: sw          $a2, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r6;
    // 0x80233DAC: slti        $v0, $s4, 0x4
    ctx->r2 = SIGNED(ctx->r20) < 0X4 ? 1 : 0;
    // 0x80233DB0: bne         $v0, $zero, L_80233D38
    if (ctx->r2 != 0) {
        // 0x80233DB4: addiu       $s3, $s3, 0x8
        ctx->r19 = ADD32(ctx->r19, 0X8);
            goto L_80233D38;
    }
    // 0x80233DB4: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x80233DB8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80233DBC: lw          $fp, 0x30($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X30);
    // 0x80233DC0: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x80233DC4: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x80233DC8: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x80233DCC: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80233DD0: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80233DD4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80233DD8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80233DDC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80233DE0: jr          $ra
    // 0x80233DE4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80233DE4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80233DE8: nop

    // 0x80233DEC: nop

;}
RECOMP_FUNC void func_80238374_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238374: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80238378: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023837C: jal         0x8004F62C
    // 0x80238380: nop

    func_8004F62C_2AA2C(rdram, ctx);
        goto after_0;
    // 0x80238380: nop

    after_0:
    // 0x80238384: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80238388: jr          $ra
    // 0x8023838C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023838C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80232AC0_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232AC0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80232AC4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80232AC8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80232ACC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232AD0: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x80232AD4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80232AD8: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x80232ADC: jal         0x8004EFE4
    // 0x80232AE0: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_0;
    // 0x80232AE0: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    after_0:
    // 0x80232AE4: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x80232AE8: beq         $a1, $zero, L_80232B6C
    if (ctx->r5 == 0) {
        // 0x80232AEC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80232B6C;
    }
    // 0x80232AEC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80232AF0: sw          $a1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r5;
    // 0x80232AF4: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x80232AF8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80232AFC: sb          $v0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r2;
    // 0x80232B00: sb          $zero, 0x4($a1)
    MEM_B(0X4, ctx->r5) = 0;
    // 0x80232B04: sb          $zero, 0x3($a1)
    MEM_B(0X3, ctx->r5) = 0;
    // 0x80232B08: sb          $zero, 0xD($a1)
    MEM_B(0XD, ctx->r5) = 0;
    // 0x80232B0C: lhu         $v0, 0x14($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X14);
    // 0x80232B10: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80232B14: lhu         $v1, -0x1468($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X1468);
    // 0x80232B18: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80232B1C: sh          $v0, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r2;
    // 0x80232B20: lhu         $v0, 0x16($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X16);
    // 0x80232B24: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80232B28: lhu         $v1, -0x1466($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X1466);
    // 0x80232B2C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80232B30: sh          $v0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r2;
    // 0x80232B34: lhu         $v0, 0x18($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X18);
    // 0x80232B38: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80232B3C: lhu         $v1, -0x1464($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X1464);
    // 0x80232B40: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80232B44: sh          $v0, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r2;
    // 0x80232B48: lh          $v0, 0x14($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X14);
    // 0x80232B4C: lh          $v1, 0x16($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X16);
    // 0x80232B50: lh          $a0, 0x18($a1)
    ctx->r4 = MEM_H(ctx->r5, 0X18);
    // 0x80232B54: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80232B58: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80232B5C: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80232B60: sw          $v0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->r2;
    // 0x80232B64: sw          $v1, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->r3;
    // 0x80232B68: sw          $a0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->r4;
L_80232B6C:
    // 0x80232B6C: jal         0x8004EFE4
    // 0x80232B70: nop

    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_1;
    // 0x80232B70: nop

    after_1:
    // 0x80232B74: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x80232B78: beq         $a1, $zero, L_80232BFC
    if (ctx->r5 == 0) {
        // 0x80232B7C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80232BFC;
    }
    // 0x80232B7C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80232B80: sw          $a1, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r5;
    // 0x80232B84: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x80232B88: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80232B8C: sb          $v0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r2;
    // 0x80232B90: sb          $zero, 0x4($a1)
    MEM_B(0X4, ctx->r5) = 0;
    // 0x80232B94: sb          $zero, 0x3($a1)
    MEM_B(0X3, ctx->r5) = 0;
    // 0x80232B98: sb          $zero, 0xD($a1)
    MEM_B(0XD, ctx->r5) = 0;
    // 0x80232B9C: lhu         $v0, 0x14($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X14);
    // 0x80232BA0: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80232BA4: lhu         $v1, -0x1468($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X1468);
    // 0x80232BA8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80232BAC: sh          $v0, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r2;
    // 0x80232BB0: lhu         $v0, 0x16($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X16);
    // 0x80232BB4: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80232BB8: lhu         $v1, -0x1466($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X1466);
    // 0x80232BBC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80232BC0: sh          $v0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r2;
    // 0x80232BC4: lhu         $v0, 0x18($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X18);
    // 0x80232BC8: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80232BCC: lhu         $v1, -0x1464($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X1464);
    // 0x80232BD0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80232BD4: sh          $v0, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r2;
    // 0x80232BD8: lh          $v0, 0x14($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X14);
    // 0x80232BDC: lh          $v1, 0x16($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X16);
    // 0x80232BE0: lh          $a0, 0x18($a1)
    ctx->r4 = MEM_H(ctx->r5, 0X18);
    // 0x80232BE4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80232BE8: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80232BEC: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80232BF0: sw          $v0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->r2;
    // 0x80232BF4: sw          $v1, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->r3;
    // 0x80232BF8: sw          $a0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->r4;
L_80232BFC:
    // 0x80232BFC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80232C00: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80232C04: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232C08: jr          $ra
    // 0x80232C0C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80232C0C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80235CA0_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235CA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80235CA4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80235CA8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80235CAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80235CB0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80235CB4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80235CB8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80235CBC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80235CC0: lw          $v0, -0x10B4($at)
    ctx->r2 = MEM_W(ctx->r1, -0X10B4);
    // 0x80235CC4: jalr        $v0
    // 0x80235CC8: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80235CC8: nop

    after_0:
    // 0x80235CCC: jal         0x800472C0
    // 0x80235CD0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800472C0_226C0(rdram, ctx);
        goto after_1;
    // 0x80235CD0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80235CD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80235CD8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80235CDC: jr          $ra
    // 0x80235CE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80235CE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80236B30_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236B30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80236B34: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80236B38: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x80236B3C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80236B40: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80236B44: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80236B48: lw          $v0, -0x1068($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1068);
    // 0x80236B4C: jalr        $v0
    // 0x80236B50: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80236B50: nop

    after_0:
    // 0x80236B54: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80236B58: jr          $ra
    // 0x80236B5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80236B5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E530_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E530: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022E534: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E538: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E53C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022E540: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022E544: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8022E548: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022E54C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022E550: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022E554: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022E558: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022E55C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022E560: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022E564: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x8022E568: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8022E56C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022E570: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8022E574: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8022E578: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8022E57C: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x8022E580: sh          $zero, 0x50($s0)
    MEM_H(0X50, ctx->r16) = 0;
    // 0x8022E584: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    // 0x8022E588: sh          $zero, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = 0;
    // 0x8022E58C: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022E590: jal         0x8004D5D4
    // 0x8022E594: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022E594: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x8022E598: jal         0x80049ECC
    // 0x8022E59C: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    func_80049ECC_252CC(rdram, ctx);
        goto after_1;
    // 0x8022E59C: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    after_1:
    // 0x8022E5A0: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8022E5A4: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x8022E5A8: lui         $v1, 0x8019
    ctx->r3 = S32(0X8019 << 16);
    // 0x8022E5AC: lw          $v1, 0x3C60($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3C60);
    // 0x8022E5B0: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x8022E5B4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022E5B8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022E5BC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8022E5C0: addiu       $a0, $s0, 0x4F0
    ctx->r4 = ADD32(ctx->r16, 0X4F0);
    // 0x8022E5C4: addiu       $a1, $s0, 0x4E8
    ctx->r5 = ADD32(ctx->r16, 0X4E8);
    // 0x8022E5C8: lbu         $v1, 0x8($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X8);
    // 0x8022E5CC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022E5D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E5D4: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x8022E5D8: sb          $v0, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r2;
    // 0x8022E5DC: sh          $zero, 0x4E8($s0)
    MEM_H(0X4E8, ctx->r16) = 0;
    // 0x8022E5E0: sh          $zero, 0x4EA($s0)
    MEM_H(0X4EA, ctx->r16) = 0;
    // 0x8022E5E4: sh          $zero, 0x4EC($s0)
    MEM_H(0X4EC, ctx->r16) = 0;
    // 0x8022E5E8: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x8022E5EC: sh          $v1, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r3;
    // 0x8022E5F0: jal         0x8009A3B4
    // 0x8022E5F4: sh          $v1, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r3;
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022E5F4: sh          $v1, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r3;
    after_2:
    // 0x8022E5F8: lhu         $a0, 0x4E8($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X4E8);
    // 0x8022E5FC: lhu         $v0, 0x4EC($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4EC);
    // 0x8022E600: lhu         $v1, 0x4EA($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X4EA);
    // 0x8022E604: addiu       $v0, $v0, -0xE00
    ctx->r2 = ADD32(ctx->r2, -0XE00);
    // 0x8022E608: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x8022E60C: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022E610: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022E614: addiu       $v1, $v1, -0x800
    ctx->r3 = ADD32(ctx->r3, -0X800);
    // 0x8022E618: sh          $a0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r4;
    // 0x8022E61C: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
    // 0x8022E620: lh          $v1, 0x14($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X14);
    // 0x8022E624: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x8022E628: lh          $a1, 0x16($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X16);
    // 0x8022E62C: addiu       $v0, $v0, 0x400
    ctx->r2 = ADD32(ctx->r2, 0X400);
    // 0x8022E630: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022E634: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022E638: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8022E63C: sh          $v0, 0x4E0($s0)
    MEM_H(0X4E0, ctx->r16) = ctx->r2;
    // 0x8022E640: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
    // 0x8022E644: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x8022E648: sw          $a1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r5;
L_8022E64C:
    // 0x8022E64C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022E650: addu        $at, $at, $a2
    ctx->r1 = ADD32(ctx->r1, ctx->r6);
    // 0x8022E654: sw          $zero, 0x11B0($at)
    MEM_W(0X11B0, ctx->r1) = 0;
    // 0x8022E658: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022E65C: addu        $at, $at, $a2
    ctx->r1 = ADD32(ctx->r1, ctx->r6);
    // 0x8022E660: sw          $zero, 0x11B4($at)
    MEM_W(0X11B4, ctx->r1) = 0;
    // 0x8022E664: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x8022E668: sltiu       $v0, $a2, 0x40
    ctx->r2 = ctx->r6 < 0X40 ? 1 : 0;
    // 0x8022E66C: bne         $v0, $zero, L_8022E64C
    if (ctx->r2 != 0) {
        // 0x8022E670: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022E64C;
    }
    // 0x8022E670: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E674: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022E678: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022E67C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022E680: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
    // 0x8022E684: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x8022E688: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022E68C: jal         0x80050294
    // 0x8022E690: sh          $zero, 0x6($s1)
    MEM_H(0X6, ctx->r17) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x8022E690: sh          $zero, 0x6($s1)
    MEM_H(0X6, ctx->r17) = 0;
    after_3:
    // 0x8022E694: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E698: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022E69C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022E6A0: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022E6A4: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x8022E6A8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022E6AC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022E6B0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E6B4: jr          $ra
    // 0x8022E6B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022E6B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80236B60_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236B60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80236B64: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80236B68: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80236B6C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80236B70: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80236B74: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80236B78: lw          $v0, -0x1060($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1060);
    // 0x80236B7C: jalr        $v0
    // 0x80236B80: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80236B80: nop

    after_0:
    // 0x80236B84: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80236B88: jr          $ra
    // 0x80236B8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80236B8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B91C_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B91C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022B920: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022B924: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022B928: addiu       $a0, $s1, 0x2C
    ctx->r4 = ADD32(ctx->r17, 0X2C);
    // 0x8022B92C: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x8022B930: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022B934: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022B938: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022B93C: jal         0x8009A3B4
    // 0x8022B940: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022B940: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x8022B944: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
    // 0x8022B948: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x8022B94C: jal         0x8009A3B4
    // 0x8022B950: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022B950: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022B954: addiu       $a0, $s1, 0x5C
    ctx->r4 = ADD32(ctx->r17, 0X5C);
    // 0x8022B958: addiu       $a1, $s1, 0x54
    ctx->r5 = ADD32(ctx->r17, 0X54);
    // 0x8022B95C: jal         0x8009A3B4
    // 0x8022B960: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022B960: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022B964: lbu         $v1, 0x8($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X8);
    // 0x8022B968: lui         $s2, 0x801C
    ctx->r18 = S32(0X801C << 16);
    // 0x8022B96C: addiu       $s2, $s2, -0x3A50
    ctx->r18 = ADD32(ctx->r18, -0X3A50);
    // 0x8022B970: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x8022B974: beq         $v0, $zero, L_8022BA6C
    if (ctx->r2 == 0) {
        // 0x8022B978: addiu       $s0, $s1, 0x4E0
        ctx->r16 = ADD32(ctx->r17, 0X4E0);
            goto L_8022BA6C;
    }
    // 0x8022B978: addiu       $s0, $s1, 0x4E0
    ctx->r16 = ADD32(ctx->r17, 0X4E0);
    // 0x8022B97C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022B980: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022B984: addu        $at, $at, $v0
    gpr jr_addend_8022B98C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022B988: lw          $v0, 0xE80($at)
    ctx->r2 = ADD32(ctx->r1, 0XE80);
    // 0x8022B98C: jr          $v0
    // 0x8022B990: nop

    switch (jr_addend_8022B98C >> 2) {
        case 0: goto L_8022B994; break;
        case 1: goto L_8022BA5C; break;
        case 2: goto L_8022BA24; break;
        case 3: goto L_8022BA38; break;
        case 4: goto L_8022BA5C; break;
        default: switch_error(__func__, 0x8022B98C, 0x80240E80);
    }
    // 0x8022B990: nop

L_8022B994:
    // 0x8022B994: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8022B998: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022B99C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022B9A0: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022B9A4: jal         0x8004D5D4
    // 0x8022B9A8: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_3;
    // 0x8022B9A8: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    after_3:
    // 0x8022B9AC: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022B9B0: sh          $v0, 0x15C($s1)
    MEM_H(0X15C, ctx->r17) = ctx->r2;
    // 0x8022B9B4: sh          $v0, 0x15A($s1)
    MEM_H(0X15A, ctx->r17) = ctx->r2;
    // 0x8022B9B8: sh          $v0, 0x158($s1)
    MEM_H(0X158, ctx->r17) = ctx->r2;
    // 0x8022B9BC: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022B9C0: sh          $v0, 0x15E($s1)
    MEM_H(0X15E, ctx->r17) = ctx->r2;
    // 0x8022B9C4: sw          $zero, 0x78($s1)
    MEM_W(0X78, ctx->r17) = 0;
    // 0x8022B9C8: sh          $zero, 0x44($s1)
    MEM_H(0X44, ctx->r17) = 0;
    // 0x8022B9CC: sh          $zero, 0x46($s1)
    MEM_H(0X46, ctx->r17) = 0;
    // 0x8022B9D0: sh          $zero, 0x48($s1)
    MEM_H(0X48, ctx->r17) = 0;
    // 0x8022B9D4: sb          $zero, 0xC($s1)
    MEM_B(0XC, ctx->r17) = 0;
    // 0x8022B9D8: sb          $zero, 0xD($s1)
    MEM_B(0XD, ctx->r17) = 0;
    // 0x8022B9DC: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
    // 0x8022B9E0: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022B9E4: lw          $v0, -0x1D60($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1D60);
    // 0x8022B9E8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022B9EC: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x8022B9F0: sb          $zero, 0x6($s0)
    MEM_B(0X6, ctx->r16) = 0;
    // 0x8022B9F4: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x8022B9F8: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022B9FC: lw          $v0, -0x1D3C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1D3C);
    // 0x8022BA00: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022BA04: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022BA08: sb          $zero, 0x7($s0)
    MEM_B(0X7, ctx->r16) = 0;
    // 0x8022BA0C: jal         0x80050294
    // 0x8022BA10: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_4;
    // 0x8022BA10: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    after_4:
    // 0x8022BA14: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x8022BA18: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022BA1C: j           L_8022BA6C
    // 0x8022BA20: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
        goto L_8022BA6C;
    // 0x8022BA20: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_8022BA24:
    // 0x8022BA24: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x8022BA28: addiu       $v1, $zero, 0x20
    ctx->r3 = ADD32(0, 0X20);
    // 0x8022BA2C: sh          $v1, 0x48($s1)
    MEM_H(0X48, ctx->r17) = ctx->r3;
    // 0x8022BA30: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022BA34: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_8022BA38:
    // 0x8022BA38: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022BA3C: lh          $a1, 0x48($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X48);
    // 0x8022BA40: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022BA44: jal         0x8004DA90
    // 0x8022BA48: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_5;
    // 0x8022BA48: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_5:
    // 0x8022BA4C: jal         0x8005044C
    // 0x8022BA50: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_6;
    // 0x8022BA50: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
    // 0x8022BA54: j           L_8022BA6C
    // 0x8022BA58: nop

        goto L_8022BA6C;
    // 0x8022BA58: nop

L_8022BA5C:
    // 0x8022BA5C: jal         0x80051770
    // 0x8022BA60: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80051770_2CB70(rdram, ctx);
        goto after_7;
    // 0x8022BA60: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_7:
    // 0x8022BA64: jal         0x80051248
    // 0x8022BA68: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80051248_2C648(rdram, ctx);
        goto after_8;
    // 0x8022BA68: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_8:
L_8022BA6C:
    // 0x8022BA6C: lbu         $v1, 0x9($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X9);
    // 0x8022BA70: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022BA74: bne         $v1, $v0, L_8022BB6C
    if (ctx->r3 != ctx->r2) {
        // 0x8022BA78: addiu       $v0, $zero, 0x2D
        ctx->r2 = ADD32(0, 0X2D);
            goto L_8022BB6C;
    }
    // 0x8022BA78: addiu       $v0, $zero, 0x2D
    ctx->r2 = ADD32(0, 0X2D);
    // 0x8022BA7C: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x8022BA80: bne         $v1, $v0, L_8022BA9C
    if (ctx->r3 != ctx->r2) {
        // 0x8022BA84: addiu       $v0, $zero, 0x35
        ctx->r2 = ADD32(0, 0X35);
            goto L_8022BA9C;
    }
    // 0x8022BA84: addiu       $v0, $zero, 0x35
    ctx->r2 = ADD32(0, 0X35);
    // 0x8022BA88: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
    // 0x8022BA8C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022BA90: lw          $v0, -0x1D5C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1D5C);
    // 0x8022BA94: j           L_8022BB20
    // 0x8022BA98: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
        goto L_8022BB20;
    // 0x8022BA98: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
L_8022BA9C:
    // 0x8022BA9C: beq         $v1, $v0, L_8022BB10
    if (ctx->r3 == ctx->r2) {
        // 0x8022BAA0: addiu       $v0, $zero, 0x41
        ctx->r2 = ADD32(0, 0X41);
            goto L_8022BB10;
    }
    // 0x8022BAA0: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x8022BAA4: bne         $v1, $v0, L_8022BAC0
    if (ctx->r3 != ctx->r2) {
        // 0x8022BAA8: addiu       $v0, $zero, 0x96
        ctx->r2 = ADD32(0, 0X96);
            goto L_8022BAC0;
    }
    // 0x8022BAA8: addiu       $v0, $zero, 0x96
    ctx->r2 = ADD32(0, 0X96);
    // 0x8022BAAC: sb          $zero, 0x6($s0)
    MEM_B(0X6, ctx->r16) = 0;
    // 0x8022BAB0: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022BAB4: lw          $v0, -0x1D34($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1D34);
    // 0x8022BAB8: j           L_8022BB5C
    // 0x8022BABC: sb          $zero, 0x7($s0)
    MEM_B(0X7, ctx->r16) = 0;
        goto L_8022BB5C;
    // 0x8022BABC: sb          $zero, 0x7($s0)
    MEM_B(0X7, ctx->r16) = 0;
L_8022BAC0:
    // 0x8022BAC0: beq         $v1, $v0, L_8022BB4C
    if (ctx->r3 == ctx->r2) {
        // 0x8022BAC4: addiu       $v0, $zero, 0xA0
        ctx->r2 = ADD32(0, 0XA0);
            goto L_8022BB4C;
    }
    // 0x8022BAC4: addiu       $v0, $zero, 0xA0
    ctx->r2 = ADD32(0, 0XA0);
    // 0x8022BAC8: bne         $v1, $v0, L_8022BAE4
    if (ctx->r3 != ctx->r2) {
        // 0x8022BACC: addiu       $v0, $zero, 0xA8
        ctx->r2 = ADD32(0, 0XA8);
            goto L_8022BAE4;
    }
    // 0x8022BACC: addiu       $v0, $zero, 0xA8
    ctx->r2 = ADD32(0, 0XA8);
    // 0x8022BAD0: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
    // 0x8022BAD4: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022BAD8: lw          $v0, -0x1D5C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1D5C);
    // 0x8022BADC: j           L_8022BB20
    // 0x8022BAE0: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
        goto L_8022BB20;
    // 0x8022BAE0: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
L_8022BAE4:
    // 0x8022BAE4: beq         $v1, $v0, L_8022BB10
    if (ctx->r3 == ctx->r2) {
        // 0x8022BAE8: addiu       $v0, $zero, 0xC8
        ctx->r2 = ADD32(0, 0XC8);
            goto L_8022BB10;
    }
    // 0x8022BAE8: addiu       $v0, $zero, 0xC8
    ctx->r2 = ADD32(0, 0XC8);
    // 0x8022BAEC: bne         $v1, $v0, L_8022BB08
    if (ctx->r3 != ctx->r2) {
        // 0x8022BAF0: addiu       $v0, $zero, 0xD0
        ctx->r2 = ADD32(0, 0XD0);
            goto L_8022BB08;
    }
    // 0x8022BAF0: addiu       $v0, $zero, 0xD0
    ctx->r2 = ADD32(0, 0XD0);
    // 0x8022BAF4: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
    // 0x8022BAF8: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022BAFC: lw          $v0, -0x1D5C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1D5C);
    // 0x8022BB00: j           L_8022BB20
    // 0x8022BB04: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
        goto L_8022BB20;
    // 0x8022BB04: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
L_8022BB08:
    // 0x8022BB08: bne         $v1, $v0, L_8022BB28
    if (ctx->r3 != ctx->r2) {
        // 0x8022BB0C: addiu       $v0, $zero, 0xDA
        ctx->r2 = ADD32(0, 0XDA);
            goto L_8022BB28;
    }
    // 0x8022BB0C: addiu       $v0, $zero, 0xDA
    ctx->r2 = ADD32(0, 0XDA);
L_8022BB10:
    // 0x8022BB10: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
    // 0x8022BB14: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022BB18: lw          $v0, -0x1D60($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1D60);
    // 0x8022BB1C: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
L_8022BB20:
    // 0x8022BB20: j           L_8022BB60
    // 0x8022BB24: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
        goto L_8022BB60;
    // 0x8022BB24: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
L_8022BB28:
    // 0x8022BB28: bne         $v1, $v0, L_8022BB44
    if (ctx->r3 != ctx->r2) {
        // 0x8022BB2C: addiu       $v0, $zero, 0xE6
        ctx->r2 = ADD32(0, 0XE6);
            goto L_8022BB44;
    }
    // 0x8022BB2C: addiu       $v0, $zero, 0xE6
    ctx->r2 = ADD32(0, 0XE6);
    // 0x8022BB30: sb          $zero, 0x6($s0)
    MEM_B(0X6, ctx->r16) = 0;
    // 0x8022BB34: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022BB38: lw          $v0, -0x1D38($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1D38);
    // 0x8022BB3C: j           L_8022BB5C
    // 0x8022BB40: sb          $zero, 0x7($s0)
    MEM_B(0X7, ctx->r16) = 0;
        goto L_8022BB5C;
    // 0x8022BB40: sb          $zero, 0x7($s0)
    MEM_B(0X7, ctx->r16) = 0;
L_8022BB44:
    // 0x8022BB44: bne         $v1, $v0, L_8022BB64
    if (ctx->r3 != ctx->r2) {
        // 0x8022BB48: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022BB64;
    }
    // 0x8022BB48: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_8022BB4C:
    // 0x8022BB4C: sb          $zero, 0x6($s0)
    MEM_B(0X6, ctx->r16) = 0;
    // 0x8022BB50: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022BB54: lw          $v0, -0x1D3C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1D3C);
    // 0x8022BB58: sb          $zero, 0x7($s0)
    MEM_B(0X7, ctx->r16) = 0;
L_8022BB5C:
    // 0x8022BB5C: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
L_8022BB60:
    // 0x8022BB60: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_8022BB64:
    // 0x8022BB64: jal         0x8022B7D0
    // 0x8022BB68: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8022B7D0_ovl25(rdram, ctx);
        goto after_9;
    // 0x8022BB68: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_9:
L_8022BB6C:
    // 0x8022BB6C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022BB70: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022BB74: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022BB78: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022BB7C: jr          $ra
    // 0x8022BB80: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022BB80: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8022BB84: nop

    // 0x8022BB88: nop

    // 0x8022BB8C: nop

;}
RECOMP_FUNC void func_80226C60_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226C60: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80226C64: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80226C68: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80226C6C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226C70: andi        $s0, $a1, 0xFF
    ctx->r16 = ctx->r5 & 0XFF;
    // 0x80226C74: sll         $v1, $s0, 7
    ctx->r3 = S32(ctx->r16 << 7);
    // 0x80226C78: addiu       $v1, $v1, 0x14
    ctx->r3 = ADD32(ctx->r3, 0X14);
    // 0x80226C7C: addu        $v1, $s1, $v1
    ctx->r3 = ADD32(ctx->r17, ctx->r3);
    // 0x80226C80: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80226C84: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80226C88: lb          $v0, 0x0($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X0);
    // 0x80226C8C: andi        $a2, $a2, 0xFF
    ctx->r6 = ctx->r6 & 0XFF;
    // 0x80226C90: sll         $a2, $a2, 4
    ctx->r6 = S32(ctx->r6 << 4);
    // 0x80226C94: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80226C98: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80226C9C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226CA0: lw          $v0, -0x24A0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X24A0);
    // 0x80226CA4: addu        $s2, $v1, $a2
    ctx->r18 = ADD32(ctx->r3, ctx->r6);
    // 0x80226CA8: jalr        $v0
    // 0x80226CAC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80226CAC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_0:
    // 0x80226CB0: lbu         $v0, 0x1($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X1);
    // 0x80226CB4: srav        $v0, $v0, $s0
    ctx->r2 = S32(SIGNED(ctx->r2) >> (ctx->r16 & 31));
    // 0x80226CB8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80226CBC: beq         $v0, $zero, L_80226CE4
    if (ctx->r2 == 0) {
        // 0x80226CC0: nop
    
            goto L_80226CE4;
    }
    // 0x80226CC0: nop

    // 0x80226CC4: lb          $v0, 0xB($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XB);
    // 0x80226CC8: lw          $a1, 0x10($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X10);
    // 0x80226CCC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80226CD0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80226CD4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226CD8: lw          $v0, -0x248C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X248C);
    // 0x80226CDC: jalr        $v0
    // 0x80226CE0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x80226CE0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_1:
L_80226CE4:
    // 0x80226CE4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80226CE8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80226CEC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80226CF0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226CF4: jr          $ra
    // 0x80226CF8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80226CF8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80236324_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236324: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80236328: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023632C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80236330: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80236334: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80236338: jal         0x8004F144
    // 0x8023633C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8023633C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    after_0:
    // 0x80236340: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80236344: beq         $a0, $zero, L_802363F0
    if (ctx->r4 == 0) {
        // 0x80236348: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802363F0;
    }
    // 0x80236348: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023634C: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x80236350: addiu       $v0, $zero, 0x85
    ctx->r2 = ADD32(0, 0X85);
    // 0x80236354: sb          $v0, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r2;
    // 0x80236358: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x8023635C: sh          $v0, 0x1C($a0)
    MEM_H(0X1C, ctx->r4) = ctx->r2;
    // 0x80236360: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x80236364: sh          $v0, 0x1E($a0)
    MEM_H(0X1E, ctx->r4) = ctx->r2;
    // 0x80236368: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x8023636C: sh          $v0, 0x20($a0)
    MEM_H(0X20, ctx->r4) = ctx->r2;
    // 0x80236370: lhu         $v0, 0x44($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X44);
    // 0x80236374: sh          $v0, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r2;
    // 0x80236378: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x8023637C: sh          $v0, 0x32($a0)
    MEM_H(0X32, ctx->r4) = ctx->r2;
    // 0x80236380: lhu         $v0, 0x48($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X48);
    // 0x80236384: sh          $v0, 0x34($a0)
    MEM_H(0X34, ctx->r4) = ctx->r2;
    // 0x80236388: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8023638C: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80236390: bne         $v1, $v0, L_802363A8
    if (ctx->r3 != ctx->r2) {
        // 0x80236394: addiu       $v0, $zero, 0x41
        ctx->r2 = ADD32(0, 0X41);
            goto L_802363A8;
    }
    // 0x80236394: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x80236398: lh          $v0, 0x64($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X64);
    // 0x8023639C: addiu       $v1, $s1, 0x10
    ctx->r3 = ADD32(ctx->r17, 0X10);
    // 0x802363A0: j           L_802363E4
    // 0x802363A4: sb          $v1, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r3;
        goto L_802363E4;
    // 0x802363A4: sb          $v1, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r3;
L_802363A8:
    // 0x802363A8: bnel        $v1, $v0, L_802363C4
    if (ctx->r3 != ctx->r2) {
        // 0x802363AC: addiu       $v0, $zero, 0x42
        ctx->r2 = ADD32(0, 0X42);
            goto L_802363C4;
    }
    goto skip_0;
    // 0x802363AC: addiu       $v0, $zero, 0x42
    ctx->r2 = ADD32(0, 0X42);
    skip_0:
    // 0x802363B0: lh          $v0, 0x64($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X64);
    // 0x802363B4: addiu       $v1, $s1, 0x10
    ctx->r3 = ADD32(ctx->r17, 0X10);
    // 0x802363B8: sb          $v1, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r3;
    // 0x802363BC: j           L_802363E8
    // 0x802363C0: addiu       $v0, $v0, -0x400
    ctx->r2 = ADD32(ctx->r2, -0X400);
        goto L_802363E8;
    // 0x802363C0: addiu       $v0, $v0, -0x400
    ctx->r2 = ADD32(ctx->r2, -0X400);
L_802363C4:
    // 0x802363C4: bne         $v1, $v0, L_802363DC
    if (ctx->r3 != ctx->r2) {
        // 0x802363C8: ori         $v0, $zero, 0xFFFF
        ctx->r2 = 0 | 0XFFFF;
            goto L_802363DC;
    }
    // 0x802363C8: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    // 0x802363CC: sw          $v0, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->r2;
    // 0x802363D0: addiu       $v0, $s1, 0x10
    ctx->r2 = ADD32(ctx->r17, 0X10);
    // 0x802363D4: j           L_802363F0
    // 0x802363D8: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
        goto L_802363F0;
    // 0x802363D8: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
L_802363DC:
    // 0x802363DC: lh          $v0, 0x64($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X64);
    // 0x802363E0: sb          $s1, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r17;
L_802363E4:
    // 0x802363E4: addiu       $v0, $v0, 0x400
    ctx->r2 = ADD32(ctx->r2, 0X400);
L_802363E8:
    // 0x802363E8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x802363EC: sw          $v0, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->r2;
L_802363F0:
    // 0x802363F0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802363F4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802363F8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802363FC: jr          $ra
    // 0x80236400: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80236400: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80236404: nop

    // 0x80236408: nop

    // 0x8023640C: nop

;}
RECOMP_FUNC void func_8022539C_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022539C: jr          $ra
    // 0x802253A0: nop

    TRACE_RETURN()
    return;
    // 0x802253A0: nop

;}
RECOMP_FUNC void func_8023C0E0_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023C0E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023C0E4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023C0E8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023C0EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023C0F0: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x8023C0F4: bne         $v0, $zero, L_8023C160
    if (ctx->r2 != 0) {
        // 0x8023C0F8: lw          $a0, 0x24($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X24);
            goto L_8023C160;
    }
    // 0x8023C0F8: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    // 0x8023C0FC: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8023C100: addiu       $v1, $v1, 0x49B0
    ctx->r3 = ADD32(ctx->r3, 0X49B0);
    // 0x8023C104: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8023C108: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8023C10C: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8023C110: lbu         $v1, 0x8($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X8);
    // 0x8023C114: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x8023C118: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8023C11C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8023C120: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x8023C124: sb          $v1, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r3;
    // 0x8023C128: lw          $v1, 0x28($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X28);
    // 0x8023C12C: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8023C130: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8023C134: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8023C138: jal         0x8004F488
    // 0x8023C13C: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    func_8004F488_2A888(rdram, ctx);
        goto after_0;
    // 0x8023C13C: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    after_0:
    // 0x8023C140: jal         0x8004F418
    // 0x8023C144: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    func_8004F418_2A818(rdram, ctx);
        goto after_1;
    // 0x8023C144: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    after_1:
    // 0x8023C148: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8023C14C: addiu       $a0, $a0, 0x47B8
    ctx->r4 = ADD32(ctx->r4, 0X47B8);
    // 0x8023C150: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8023C154: sw          $zero, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = 0;
    // 0x8023C158: jal         0x8023C540
    // 0x8023C15C: sw          $zero, 0x30($s0)
    MEM_W(0X30, ctx->r16) = 0;
    func_8023C540_ovl25(rdram, ctx);
        goto after_2;
    // 0x8023C15C: sw          $zero, 0x30($s0)
    MEM_W(0X30, ctx->r16) = 0;
    after_2:
L_8023C160:
    // 0x8023C160: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023C164: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023C168: jr          $ra
    // 0x8023C16C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023C16C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80239B10_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239B10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80239B14: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80239B18: lui         $a3, 0x801C
    ctx->r7 = S32(0X801C << 16);
    // 0x80239B1C: addiu       $a3, $a3, -0x3AA2
    ctx->r7 = ADD32(ctx->r7, -0X3AA2);
    // 0x80239B20: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x80239B24: addiu       $a1, $a1, 0x5090
    ctx->r5 = ADD32(ctx->r5, 0X5090);
    // 0x80239B28: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
L_80239B2C:
    // 0x80239B2C: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80239B30: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80239B34: lw          $v0, 0x5088($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X5088);
    // 0x80239B38: beq         $v0, $zero, L_80239B58
    if (ctx->r2 == 0) {
        // 0x80239B3C: addiu       $a2, $a2, 0xC
        ctx->r6 = ADD32(ctx->r6, 0XC);
            goto L_80239B58;
    }
    // 0x80239B3C: addiu       $a2, $a2, 0xC
    ctx->r6 = ADD32(ctx->r6, 0XC);
    // 0x80239B40: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x80239B44: lhu         $v1, 0x0($a3)
    ctx->r3 = MEM_HU(ctx->r7, 0X0);
    // 0x80239B48: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80239B4C: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
    // 0x80239B50: j           L_80239B2C
    // 0x80239B54: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
        goto L_80239B2C;
    // 0x80239B54: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
L_80239B58:
    // 0x80239B58: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80239B5C: jal         0x8004F62C
    // 0x80239B60: sh          $zero, -0x3AA2($at)
    MEM_H(-0X3AA2, ctx->r1) = 0;
    func_8004F62C_2AA2C(rdram, ctx);
        goto after_0;
    // 0x80239B60: sh          $zero, -0x3AA2($at)
    MEM_H(-0X3AA2, ctx->r1) = 0;
    after_0:
    // 0x80239B64: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80239B68: jr          $ra
    // 0x80239B6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80239B6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802399C4_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802399C4: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x802399C8: lh          $v0, -0x3BBC($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X3BBC);
    // 0x802399CC: bgtz        $v0, L_802399DC
    if (SIGNED(ctx->r2) > 0) {
        // 0x802399D0: ori         $v0, $zero, 0xFFFF
        ctx->r2 = 0 | 0XFFFF;
            goto L_802399DC;
    }
    // 0x802399D0: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    // 0x802399D4: j           L_802399E8
    // 0x802399D8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_802399E8;
    // 0x802399D8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_802399DC:
    // 0x802399DC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x802399E0: sh          $v0, -0x3AA4($at)
    MEM_H(-0X3AA4, ctx->r1) = ctx->r2;
    // 0x802399E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802399E8:
    // 0x802399E8: jr          $ra
    // 0x802399EC: nop

    TRACE_RETURN()
    return;
    // 0x802399EC: nop

;}
