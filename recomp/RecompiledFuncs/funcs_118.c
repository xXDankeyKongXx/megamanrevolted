#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80225FEC_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225FEC: jr          $ra
    // 0x80225FF0: nop

    TRACE_RETURN()
    return;
    // 0x80225FF0: nop

;}
RECOMP_FUNC void func_8022ABA8_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022ABA8: lhu         $v0, 0x350($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X350);
    // 0x8022ABAC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022ABB0: sh          $v0, 0x350($a0)
    MEM_H(0X350, ctx->r4) = ctx->r2;
    // 0x8022ABB4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022ABB8: bne         $v0, $zero, L_8022ABC4
    if (ctx->r2 != 0) {
        // 0x8022ABBC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022ABC4;
    }
    // 0x8022ABBC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022ABC0: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_8022ABC4:
    // 0x8022ABC4: jr          $ra
    // 0x8022ABC8: nop

    TRACE_RETURN()
    return;
    // 0x8022ABC8: nop

;}
RECOMP_FUNC void func_80228214_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228214: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80228218: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x8022821C: sb          $zero, 0xE($a1)
    MEM_B(0XE, ctx->r5) = 0;
    // 0x80228220: sb          $zero, 0xC($a1)
    MEM_B(0XC, ctx->r5) = 0;
    // 0x80228224: sb          $v0, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r2;
    // 0x80228228: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022822C: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80228230: lw          $v0, 0x18FC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X18FC);
    // 0x80228234: jr          $ra
    // 0x80228238: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80228238: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_8022BA98_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BA98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022BA9C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022BAA0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022BAA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022BAA8: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x8022BAAC: bgez        $v0, L_8022BAE0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022BAB0: nop
    
            goto L_8022BAE0;
    }
    // 0x8022BAB0: nop

    // 0x8022BAB4: jal         0x8022C1C8
    // 0x8022BAB8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_8022C1C8_ovl15(rdram, ctx);
        goto after_0;
    // 0x8022BAB8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_0:
    // 0x8022BABC: lbu         $v1, 0x34A($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34A);
    // 0x8022BAC0: lhu         $a0, 0x348($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X348);
    // 0x8022BAC4: lbu         $a1, 0xD($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XD);
    // 0x8022BAC8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022BACC: ori         $a0, $a0, 0x2
    ctx->r4 = ctx->r4 | 0X2;
    // 0x8022BAD0: andi        $a1, $a1, 0x7
    ctx->r5 = ctx->r5 & 0X7;
    // 0x8022BAD4: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x8022BAD8: sh          $a0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r4;
    // 0x8022BADC: sb          $a1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r5;
L_8022BAE0:
    // 0x8022BAE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022BAE4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022BAE8: jr          $ra
    // 0x8022BAEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022BAEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E4B0_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E4B0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022E4B4: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022E4B8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022E4BC: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8022E4C0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022E4C4: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8022E4C8: lbu         $v1, 0x3($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X3);
    // 0x8022E4CC: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x8022E4D0: bne         $v1, $zero, L_8022E4E4
    if (ctx->r3 != 0) {
        // 0x8022E4D4: sb          $v0, 0x0($s1)
        MEM_B(0X0, ctx->r17) = ctx->r2;
            goto L_8022E4E4;
    }
    // 0x8022E4D4: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x8022E4D8: lh          $v0, 0x3E($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X3E);
    // 0x8022E4DC: sh          $zero, 0x3E($s1)
    MEM_H(0X3E, ctx->r17) = 0;
    // 0x8022E4E0: sw          $v0, 0x44($s1)
    MEM_W(0X44, ctx->r17) = ctx->r2;
L_8022E4E4:
    // 0x8022E4E4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022E4E8: jal         0x8004D5D4
    // 0x8022E4EC: addiu       $a1, $s1, 0x3
    ctx->r5 = ADD32(ctx->r17, 0X3);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022E4EC: addiu       $a1, $s1, 0x3
    ctx->r5 = ADD32(ctx->r17, 0X3);
    after_0:
    // 0x8022E4F0: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x8022E4F4: jal         0x8002C654
    // 0x8022E4F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_1;
    // 0x8022E4F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022E4FC: lb          $a0, 0xF($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XF);
    // 0x8022E500: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022E504: jal         0x800319B4
    // 0x8022E508: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    func_800319B4_CDB4(rdram, ctx);
        goto after_2;
    // 0x8022E508: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    after_2:
    // 0x8022E50C: lbu         $v1, 0x8($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X8);
    // 0x8022E510: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8022E514: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x8022E518: sw          $v0, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->r2;
    // 0x8022E51C: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022E520: addiu       $v0, $v0, 0x2A14
    ctx->r2 = ADD32(ctx->r2, 0X2A14);
    // 0x8022E524: sw          $v0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r2;
    // 0x8022E528: sw          $zero, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = 0;
    // 0x8022E52C: sw          $zero, 0x50($s1)
    MEM_W(0X50, ctx->r17) = 0;
    // 0x8022E530: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022E534: sb          $v1, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r3;
    // 0x8022E538: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8022E53C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022E540: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022E544: jr          $ra
    // 0x8022E548: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022E548: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022D970_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D970: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D974: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D978: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D97C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022D980: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022D984: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022D988: jal         0x8009A3B4
    // 0x8022D98C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022D98C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022D990: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022D994: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022D998: jal         0x8009A3B4
    // 0x8022D99C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022D99C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022D9A0: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022D9A4: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022D9A8: jal         0x8009A3B4
    // 0x8022D9AC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022D9AC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022D9B0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022D9B4: bne         $v0, $zero, L_8022D9E4
    if (ctx->r2 != 0) {
        // 0x8022D9B8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022D9E4;
    }
    // 0x8022D9B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D9BC: jal         0x8022DA04
    // 0x8022D9C0: addiu       $a1, $s0, 0x348
    ctx->r5 = ADD32(ctx->r16, 0X348);
    func_8022DA04_ovl15(rdram, ctx);
        goto after_3;
    // 0x8022D9C0: addiu       $a1, $s0, 0x348
    ctx->r5 = ADD32(ctx->r16, 0X348);
    after_3:
    // 0x8022D9C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D9C8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022D9CC: jal         0x80050294
    // 0x8022D9D0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_4;
    // 0x8022D9D0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x8022D9D4: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022D9D8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022D9DC: j           L_8022D9F4
    // 0x8022D9E0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_8022D9F4;
    // 0x8022D9E0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022D9E4:
    // 0x8022D9E4: jal         0x8022DAB8
    // 0x8022D9E8: addiu       $a1, $s0, 0x348
    ctx->r5 = ADD32(ctx->r16, 0X348);
    func_8022DAB8_ovl15(rdram, ctx);
        goto after_5;
    // 0x8022D9E8: addiu       $a1, $s0, 0x348
    ctx->r5 = ADD32(ctx->r16, 0X348);
    after_5:
    // 0x8022D9EC: jal         0x8005044C
    // 0x8022D9F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_6;
    // 0x8022D9F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
L_8022D9F4:
    // 0x8022D9F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022D9F8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D9FC: jr          $ra
    // 0x8022DA00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022DA00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B2A4_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B2A4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022B2A8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B2AC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B2B0: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022B2B4: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022B2B8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022B2BC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022B2C0: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022B2C4: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022B2C8: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022B2CC: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022B2D0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022B2D4: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
    // 0x8022B2D8: sh          $v1, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r3;
    // 0x8022B2DC: jal         0x8022C1C8
    // 0x8022B2E0: sb          $a1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r5;
    func_8022C1C8_ovl15(rdram, ctx);
        goto after_0;
    // 0x8022B2E0: sb          $a1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r5;
    after_0:
    // 0x8022B2E4: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x8022B2E8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022B2EC: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022B2F0: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8022B2F4: addiu       $s2, $s2, 0x49C4
    ctx->r18 = ADD32(ctx->r18, 0X49C4);
    // 0x8022B2F8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022B2FC: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x8022B300: jal         0x8004F820
    // 0x8022B304: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x8022B304: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022B308: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B30C: bgez        $v0, L_8022B33C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022B310: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_8022B33C;
    }
    // 0x8022B310: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x8022B314: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022B318: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022B31C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022B320: jal         0x8004F820
    // 0x8022B324: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x8022B324: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x8022B328: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B32C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022B330: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8022B334: j           L_8022B358
    // 0x8022B338: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_8022B358;
    // 0x8022B338: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_8022B33C:
    // 0x8022B33C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022B340: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022B344: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022B348: jal         0x8004F820
    // 0x8022B34C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x8022B34C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_3:
    // 0x8022B350: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B354: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_8022B358:
    // 0x8022B358: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022B35C: sh          $v0, 0x6($s3)
    MEM_H(0X6, ctx->r19) = ctx->r2;
    // 0x8022B360: lbu         $a3, 0xC($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XC);
    // 0x8022B364: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022B368: jal         0x800610AC
    // 0x8022B36C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_4;
    // 0x8022B36C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x8022B370: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022B374: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022B378: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022B37C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022B380: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B384: jr          $ra
    // 0x8022B388: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022B388: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022BEE0_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BEE0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022BEE4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022BEE8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022BEEC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022BEF0: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x8022BEF4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022BEF8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022BEFC: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8022BF00: addiu       $s2, $s2, 0x49C4
    ctx->r18 = ADD32(ctx->r18, 0X49C4);
    // 0x8022BF04: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022BF08: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022BF0C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022BF10: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022BF14: lbu         $v1, 0x34B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022BF18: lhu         $t0, 0x56($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X56);
    // 0x8022BF1C: lbu         $t1, 0xAC($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022BF20: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x8022BF24: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022BF28: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022BF2C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022BF30: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
    // 0x8022BF34: sh          $t0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r8;
    // 0x8022BF38: jal         0x8004F820
    // 0x8022BF3C: sb          $t1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r9;
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022BF3C: sb          $t1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r9;
    after_0:
    // 0x8022BF40: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022BF44: bgez        $v0, L_8022BF74
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022BF48: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_8022BF74;
    }
    // 0x8022BF48: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x8022BF4C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022BF50: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022BF54: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022BF58: jal         0x8004F820
    // 0x8022BF5C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x8022BF5C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_1:
    // 0x8022BF60: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022BF64: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022BF68: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8022BF6C: j           L_8022BF90
    // 0x8022BF70: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_8022BF90;
    // 0x8022BF70: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_8022BF74:
    // 0x8022BF74: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022BF78: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022BF7C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022BF80: jal         0x8004F820
    // 0x8022BF84: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x8022BF84: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x8022BF88: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022BF8C: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_8022BF90:
    // 0x8022BF90: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022BF94: sh          $v0, 0x6($s3)
    MEM_H(0X6, ctx->r19) = ctx->r2;
    // 0x8022BF98: lbu         $a3, 0xC($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XC);
    // 0x8022BF9C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022BFA0: jal         0x800610AC
    // 0x8022BFA4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_3;
    // 0x8022BFA4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x8022BFA8: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022BFAC: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022BFB0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022BFB4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022BFB8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022BFBC: jr          $ra
    // 0x8022BFC0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022BFC0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022D530_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D530: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D534: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D538: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022D53C: jal         0x800A3450
    // 0x8022D540: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022D540: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    after_0:
    // 0x8022D544: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x8022D548: bne         $v1, $zero, L_8022D5C0
    if (ctx->r3 != 0) {
        // 0x8022D54C: addu        $a2, $v0, $zero
        ctx->r6 = ADD32(ctx->r2, 0);
            goto L_8022D5C0;
    }
    // 0x8022D54C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x8022D550: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022D554: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    // 0x8022D558: andi        $v0, $a2, 0x7
    ctx->r2 = ctx->r6 & 0X7;
    // 0x8022D55C: addiu       $v1, $zero, 0x40
    ctx->r3 = ADD32(0, 0X40);
    // 0x8022D560: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
    // 0x8022D564: sll         $a0, $a2, 16
    ctx->r4 = S32(ctx->r6 << 16);
    // 0x8022D568: sh          $v0, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r2;
    // 0x8022D56C: sra         $v0, $a0, 18
    ctx->r2 = S32(SIGNED(ctx->r4) >> 18);
    // 0x8022D570: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x8022D574: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8022D578: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8022D57C: sra         $v0, $a0, 20
    ctx->r2 = S32(SIGNED(ctx->r4) >> 20);
    // 0x8022D580: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x8022D584: sh          $v1, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r3;
    // 0x8022D588: lhu         $v1, 0x0($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X0);
    // 0x8022D58C: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x8022D590: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x8022D594: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8022D598: sh          $v1, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r3;
    // 0x8022D59C: lhu         $v0, 0x2($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X2);
    // 0x8022D5A0: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x8022D5A4: sh          $v0, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r2;
    // 0x8022D5A8: lhu         $v0, 0x4($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X4);
    // 0x8022D5AC: sra         $a0, $a0, 22
    ctx->r4 = S32(SIGNED(ctx->r4) >> 22);
    // 0x8022D5B0: andi        $a0, $a0, 0x1F
    ctx->r4 = ctx->r4 & 0X1F;
    // 0x8022D5B4: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8022D5B8: j           L_8022D604
    // 0x8022D5BC: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
        goto L_8022D604;
    // 0x8022D5BC: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
L_8022D5C0:
    // 0x8022D5C0: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x8022D5C4: lhu         $v1, 0x6($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X6);
    // 0x8022D5C8: lhu         $a0, 0x8($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X8);
    // 0x8022D5CC: lhu         $a1, 0xC($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0XC);
    // 0x8022D5D0: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8022D5D4: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x8022D5D8: sh          $v1, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r3;
    // 0x8022D5DC: lh          $v1, 0x6($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X6);
    // 0x8022D5E0: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x8022D5E4: addiu       $a1, $a1, -0x8
    ctx->r5 = ADD32(ctx->r5, -0X8);
    // 0x8022D5E8: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
    // 0x8022D5EC: andi        $v0, $a2, 0x7
    ctx->r2 = ctx->r6 & 0X7;
    // 0x8022D5F0: subu        $a1, $a1, $v0
    ctx->r5 = SUB32(ctx->r5, ctx->r2);
    // 0x8022D5F4: sh          $a0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r4;
    // 0x8022D5F8: bne         $v1, $zero, L_8022D604
    if (ctx->r3 != 0) {
        // 0x8022D5FC: sh          $a1, 0xC($s0)
        MEM_H(0XC, ctx->r16) = ctx->r5;
            goto L_8022D604;
    }
    // 0x8022D5FC: sh          $a1, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r5;
    // 0x8022D600: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
L_8022D604:
    // 0x8022D604: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022D608: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D60C: jr          $ra
    // 0x8022D610: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022D610: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227610_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227610: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227614: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227618: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022761C: addiu       $a0, $s1, 0x2C
    ctx->r4 = ADD32(ctx->r17, 0X2C);
    // 0x80227620: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x80227624: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80227628: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022762C: jal         0x8009A3B4
    // 0x80227630: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80227630: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x80227634: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
    // 0x80227638: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x8022763C: jal         0x8009A3B4
    // 0x80227640: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80227640: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80227644: addiu       $a0, $s1, 0x5C
    ctx->r4 = ADD32(ctx->r17, 0X5C);
    // 0x80227648: addiu       $a1, $s1, 0x54
    ctx->r5 = ADD32(ctx->r17, 0X54);
    // 0x8022764C: jal         0x8009A3B4
    // 0x80227650: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80227650: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80227654: lbu         $v1, 0xAC($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XAC);
    // 0x80227658: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x8022765C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80227660: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x80227664: addiu       $a1, $a1, -0x3A50
    ctx->r5 = ADD32(ctx->r5, -0X3A50);
    // 0x80227668: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022766C: sb          $v1, 0xAD($s1)
    MEM_B(0XAD, ctx->r17) = ctx->r3;
    // 0x80227670: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227674: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227678: lw          $v0, 0x17C0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X17C0);
    // 0x8022767C: addiu       $s0, $s1, 0x4E0
    ctx->r16 = ADD32(ctx->r17, 0X4E0);
    // 0x80227680: jalr        $v0
    // 0x80227684: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x80227684: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80227688: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022768C: jal         0x80228264
    // 0x80227690: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80228264_ovl15(rdram, ctx);
        goto after_4;
    // 0x80227690: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80227694: lbu         $a1, 0xAC($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0XAC);
    // 0x80227698: lbu         $v0, 0xAD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XAD);
    // 0x8022769C: beq         $a1, $v0, L_802276B8
    if (ctx->r5 == ctx->r2) {
        // 0x802276A0: nop
    
            goto L_802276B8;
    }
    // 0x802276A0: nop

    // 0x802276A4: lh          $a2, 0x4E2($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X4E2);
    // 0x802276A8: jal         0x80050294
    // 0x802276AC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x802276AC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_5:
    // 0x802276B0: j           L_802276C0
    // 0x802276B4: nop

        goto L_802276C0;
    // 0x802276B4: nop

L_802276B8:
    // 0x802276B8: jal         0x8005044C
    // 0x802276BC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_6;
    // 0x802276BC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
L_802276C0:
    // 0x802276C0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802276C4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802276C8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802276CC: jr          $ra
    // 0x802276D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802276D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022E480_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E480: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E484: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022E488: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8022E48C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022E490: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022E494: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022E498: lw          $v0, 0x29F0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X29F0);
    // 0x8022E49C: jalr        $v0
    // 0x8022E4A0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022E4A0: nop

    after_0:
    // 0x8022E4A4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022E4A8: jr          $ra
    // 0x8022E4AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E4AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022FC60_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FC60: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022FC64: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022FC68: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022FC6C: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8022FC70: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8022FC74: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022FC78: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022FC7C: lbu         $a0, 0xC($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0XC);
    // 0x8022FC80: jal         0x80053ED8
    // 0x8022FC84: addiu       $s0, $s1, 0x28
    ctx->r16 = ADD32(ctx->r17, 0X28);
    func_80053ED8_2F2D8(rdram, ctx);
        goto after_0;
    // 0x8022FC84: addiu       $s0, $s1, 0x28
    ctx->r16 = ADD32(ctx->r17, 0X28);
    after_0:
    // 0x8022FC88: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x8022FC8C: lh          $v0, 0x44($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X44);
    // 0x8022FC90: bne         $v0, $zero, L_8022FCA8
    if (ctx->r2 != 0) {
        // 0x8022FC94: nop
    
            goto L_8022FCA8;
    }
    // 0x8022FC94: nop

    // 0x8022FC98: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x8022FC9C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022FCA0: j           L_8022FDB0
    // 0x8022FCA4: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
        goto L_8022FDB0;
    // 0x8022FCA4: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_8022FCA8:
    // 0x8022FCA8: lb          $v0, 0xF($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XF);
    // 0x8022FCAC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022FCB0: slti        $v0, $v0, 0x40
    ctx->r2 = SIGNED(ctx->r2) < 0X40 ? 1 : 0;
    // 0x8022FCB4: beq         $v0, $zero, L_8022FCC0
    if (ctx->r2 == 0) {
        // 0x8022FCB8: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_8022FCC0;
    }
    // 0x8022FCB8: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022FCBC: sb          $v0, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r2;
L_8022FCC0:
    // 0x8022FCC0: lhu         $v0, 0x14($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X14);
    // 0x8022FCC4: sh          $v0, 0x1C($s1)
    MEM_H(0X1C, ctx->r17) = ctx->r2;
    // 0x8022FCC8: lhu         $v0, 0x16($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X16);
    // 0x8022FCCC: sh          $v0, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r2;
    // 0x8022FCD0: lhu         $v0, 0x18($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X18);
    // 0x8022FCD4: sh          $v0, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r2;
    // 0x8022FCD8: lhu         $a0, 0x56($s3)
    ctx->r4 = MEM_HU(ctx->r19, 0X56);
    // 0x8022FCDC: jal         0x800324B4
    // 0x8022FCE0: andi        $a0, $a0, 0xFFF
    ctx->r4 = ctx->r4 & 0XFFF;
    func_800324B4_D8B4(rdram, ctx);
        goto after_1;
    // 0x8022FCE0: andi        $a0, $a0, 0xFFF
    ctx->r4 = ctx->r4 & 0XFFF;
    after_1:
    // 0x8022FCE4: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x8022FCE8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022FCEC: lhu         $v0, 0x1C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X1C);
    // 0x8022FCF0: sll         $v1, $v1, 6
    ctx->r3 = S32(ctx->r3 << 6);
    // 0x8022FCF4: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x8022FCF8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022FCFC: sh          $v0, 0x1C($s1)
    MEM_H(0X1C, ctx->r17) = ctx->r2;
    // 0x8022FD00: lhu         $a0, 0x56($s3)
    ctx->r4 = MEM_HU(ctx->r19, 0X56);
    // 0x8022FD04: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x8022FD08: jal         0x80032498
    // 0x8022FD0C: andi        $a0, $a0, 0xFFF
    ctx->r4 = ctx->r4 & 0XFFF;
    func_80032498_D898(rdram, ctx);
        goto after_2;
    // 0x8022FD0C: andi        $a0, $a0, 0xFFF
    ctx->r4 = ctx->r4 & 0XFFF;
    after_2:
    // 0x8022FD10: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x8022FD14: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022FD18: sll         $v1, $v1, 6
    ctx->r3 = S32(ctx->r3 << 6);
    // 0x8022FD1C: lhu         $v0, 0x20($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X20);
    // 0x8022FD20: lhu         $a0, 0x1E($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X1E);
    // 0x8022FD24: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x8022FD28: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022FD2C: addiu       $a0, $a0, -0x10
    ctx->r4 = ADD32(ctx->r4, -0X10);
    // 0x8022FD30: sh          $v0, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r2;
    // 0x8022FD34: sh          $a0, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r4;
L_8022FD38:
    // 0x8022FD38: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8022FD3C: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x8022FD40: beq         $v0, $zero, L_8022FD80
    if (ctx->r2 == 0) {
        // 0x8022FD44: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022FD80;
    }
    // 0x8022FD44: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022FD48: lhu         $a1, 0x56($s3)
    ctx->r5 = MEM_HU(ctx->r19, 0X56);
    // 0x8022FD4C: lb          $a2, 0x1($s0)
    ctx->r6 = MEM_B(ctx->r16, 0X1);
    // 0x8022FD50: jal         0x8022FDCC
    // 0x8022FD54: andi        $a1, $a1, 0xFFF
    ctx->r5 = ctx->r5 & 0XFFF;
    func_8022FDCC_ovl15(rdram, ctx);
        goto after_3;
    // 0x8022FD54: andi        $a1, $a1, 0xFFF
    ctx->r5 = ctx->r5 & 0XFFF;
    after_3:
    // 0x8022FD58: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x8022FD5C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022FD60: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
    // 0x8022FD64: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022FD68: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8022FD6C: slti        $v0, $v0, 0x9
    ctx->r2 = SIGNED(ctx->r2) < 0X9 ? 1 : 0;
    // 0x8022FD70: beql        $v0, $zero, L_8022FDA0
    if (ctx->r2 == 0) {
        // 0x8022FD74: sb          $zero, 0x1($s0)
        MEM_B(0X1, ctx->r16) = 0;
            goto L_8022FDA0;
    }
    goto skip_0;
    // 0x8022FD74: sb          $zero, 0x1($s0)
    MEM_B(0X1, ctx->r16) = 0;
    skip_0:
    // 0x8022FD78: j           L_8022FDA4
    // 0x8022FD7C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
        goto L_8022FDA4;
    // 0x8022FD7C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_8022FD80:
    // 0x8022FD80: lbu         $v0, 0xF($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XF);
    // 0x8022FD84: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022FD88: sra         $v0, $v0, 25
    ctx->r2 = S32(SIGNED(ctx->r2) >> 25);
    // 0x8022FD8C: sltu        $v0, $s2, $v0
    ctx->r2 = ctx->r18 < ctx->r2 ? 1 : 0;
    // 0x8022FD90: beql        $v0, $zero, L_8022FDA4
    if (ctx->r2 == 0) {
        // 0x8022FD94: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_8022FDA4;
    }
    goto skip_1;
    // 0x8022FD94: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_1:
    // 0x8022FD98: ori         $v0, $v1, 0x1
    ctx->r2 = ctx->r3 | 0X1;
    // 0x8022FD9C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_8022FDA0:
    // 0x8022FDA0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_8022FDA4:
    // 0x8022FDA4: sltiu       $v0, $s2, 0x4
    ctx->r2 = ctx->r18 < 0X4 ? 1 : 0;
    // 0x8022FDA8: bne         $v0, $zero, L_8022FD38
    if (ctx->r2 != 0) {
        // 0x8022FDAC: addiu       $s0, $s0, 0x2
        ctx->r16 = ADD32(ctx->r16, 0X2);
            goto L_8022FD38;
    }
    // 0x8022FDAC: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
L_8022FDB0:
    // 0x8022FDB0: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8022FDB4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8022FDB8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022FDBC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022FDC0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022FDC4: jr          $ra
    // 0x8022FDC8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022FDC8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022F2C0_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F2C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F2C4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F2C8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F2CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022F2D0: jal         0x80053ED8
    // 0x8022F2D4: lbu         $a0, 0xC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XC);
    func_80053ED8_2F2D8(rdram, ctx);
        goto after_0;
    // 0x8022F2D4: lbu         $a0, 0xC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XC);
    after_0:
    // 0x8022F2D8: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022F2DC: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x8022F2E0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022F2E4: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x8022F2E8: bne         $v1, $v0, L_8022F2FC
    if (ctx->r3 != ctx->r2) {
        // 0x8022F2EC: nop
    
            goto L_8022F2FC;
    }
    // 0x8022F2EC: nop

    // 0x8022F2F0: lb          $v0, 0xC($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XC);
    // 0x8022F2F4: beq         $v0, $zero, L_8022F318
    if (ctx->r2 == 0) {
        // 0x8022F2F8: nop
    
            goto L_8022F318;
    }
    // 0x8022F2F8: nop

L_8022F2FC:
    // 0x8022F2FC: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8022F300: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022F304: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022F308: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022F30C: lw          $v0, 0x2A68($at)
    ctx->r2 = MEM_W(ctx->r1, 0X2A68);
    // 0x8022F310: jalr        $v0
    // 0x8022F314: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x8022F314: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_8022F318:
    // 0x8022F318: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022F31C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F320: jr          $ra
    // 0x8022F324: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F324: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A138_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A138: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A13C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A140: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A144: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022A148: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x8022A14C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022A150: sh          $zero, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = 0;
    // 0x8022A154: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022A158: sh          $v0, 0x366($s0)
    MEM_H(0X366, ctx->r16) = ctx->r2;
    // 0x8022A15C: jal         0x8022C218
    // 0x8022A160: sh          $v0, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r2;
    func_8022C218_ovl15(rdram, ctx);
        goto after_0;
    // 0x8022A160: sh          $v0, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022A164: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022A168: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022A16C: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8022A170: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8022A174: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022A178: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8022A17C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022A180: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A184: jr          $ra
    // 0x8022A188: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A188: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022ED54_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022ED54: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022ED58: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022ED5C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022ED60: lui         $a0, 0xFF
    ctx->r4 = S32(0XFF << 16);
    // 0x8022ED64: ori         $a0, $a0, 0xFF00
    ctx->r4 = ctx->r4 | 0XFF00;
    // 0x8022ED68: lui         $v1, 0x1
    ctx->r3 = S32(0X1 << 16);
    // 0x8022ED6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022ED70: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x8022ED74: ori         $v1, $v1, 0x1000
    ctx->r3 = ctx->r3 | 0X1000;
    // 0x8022ED78: lw          $a1, 0x44($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X44);
    // 0x8022ED7C: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x8022ED80: beql        $v0, $v1, L_8022EDC8
    if (ctx->r2 == ctx->r3) {
        // 0x8022ED84: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022EDC8;
    }
    goto skip_0;
    // 0x8022ED84: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
    // 0x8022ED88: beq         $a1, $zero, L_8022EDA0
    if (ctx->r5 == 0) {
        // 0x8022ED8C: nop
    
            goto L_8022EDA0;
    }
    // 0x8022ED8C: nop

    // 0x8022ED90: jal         0x8006033C
    // 0x8022ED94: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8022ED94: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    after_0:
    // 0x8022ED98: beq         $v0, $zero, L_8022EDC8
    if (ctx->r2 == 0) {
        // 0x8022ED9C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022EDC8;
    }
    // 0x8022ED9C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8022EDA0:
    // 0x8022EDA0: lb          $a0, 0xC($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XC);
    // 0x8022EDA4: jal         0x8006033C
    // 0x8022EDA8: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x8022EDA8: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    after_1:
    // 0x8022EDAC: bne         $v0, $zero, L_8022EDC8
    if (ctx->r2 != 0) {
        // 0x8022EDB0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022EDC8;
    }
    // 0x8022EDB0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022EDB4: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x8022EDB8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022EDBC: bne         $v1, $v0, L_8022EDC8
    if (ctx->r3 != ctx->r2) {
        // 0x8022EDC0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022EDC8;
    }
    // 0x8022EDC0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022EDC4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8022EDC8:
    // 0x8022EDC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022EDCC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022EDD0: jr          $ra
    // 0x8022EDD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022EDD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228E80_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228E80: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80228E84: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80228E88: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x80228E8C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80228E90: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x80228E94: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80228E98: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80228E9C: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80228EA0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80228EA4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80228EA8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80228EAC: lhu         $v0, 0x4($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X4);
    // 0x80228EB0: addu        $s5, $zero, $zero
    ctx->r21 = ADD32(0, 0);
    // 0x80228EB4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80228EB8: sh          $v0, 0x4($s4)
    MEM_H(0X4, ctx->r20) = ctx->r2;
    // 0x80228EBC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228EC0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80228EC4: bgtz        $v0, L_80229028
    if (SIGNED(ctx->r2) > 0) {
        // 0x80228EC8: addu        $s6, $zero, $zero
        ctx->r22 = ADD32(0, 0);
            goto L_80229028;
    }
    // 0x80228EC8: addu        $s6, $zero, $zero
    ctx->r22 = ADD32(0, 0);
    // 0x80228ECC: bne         $v0, $zero, L_80228F3C
    if (ctx->r2 != 0) {
        // 0x80228ED0: nop
    
            goto L_80228F3C;
    }
    // 0x80228ED0: nop

    // 0x80228ED4: lh          $v0, 0x6($s4)
    ctx->r2 = MEM_H(ctx->r20, 0X6);
    // 0x80228ED8: lh          $v1, 0x8($s4)
    ctx->r3 = MEM_H(ctx->r20, 0X8);
    // 0x80228EDC: lh          $a0, 0xA($s4)
    ctx->r4 = MEM_H(ctx->r20, 0XA);
    // 0x80228EE0: lh          $a1, 0xC($s4)
    ctx->r5 = MEM_H(ctx->r20, 0XC);
    // 0x80228EE4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228EE8: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80228EEC: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80228EF0: sw          $v1, 0x14($s4)
    MEM_W(0X14, ctx->r20) = ctx->r3;
    // 0x80228EF4: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    // 0x80228EF8: sw          $v0, 0x10($s4)
    MEM_W(0X10, ctx->r20) = ctx->r2;
    // 0x80228EFC: bgez        $a1, L_80228F30
    if (SIGNED(ctx->r5) >= 0) {
        // 0x80228F00: sw          $a0, 0x20($s4)
        MEM_W(0X20, ctx->r20) = ctx->r4;
            goto L_80228F30;
    }
    // 0x80228F00: sw          $a0, 0x20($s4)
    MEM_W(0X20, ctx->r20) = ctx->r4;
    // 0x80228F04: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80228F08: beq         $a1, $v0, L_80228F3C
    if (ctx->r5 == ctx->r2) {
        // 0x80228F0C: andi        $v0, $v1, 0x7F
        ctx->r2 = ctx->r3 & 0X7F;
            goto L_80228F3C;
    }
    // 0x80228F0C: andi        $v0, $v1, 0x7F
    ctx->r2 = ctx->r3 & 0X7F;
    // 0x80228F10: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x80228F14: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80228F18: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80228F1C: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80228F20: addiu       $v0, $v0, 0x1D80
    ctx->r2 = ADD32(ctx->r2, 0X1D80);
    // 0x80228F24: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80228F28: j           L_80228F3C
    // 0x80228F2C: sw          $v1, 0x2C($s4)
    MEM_W(0X2C, ctx->r20) = ctx->r3;
        goto L_80228F3C;
    // 0x80228F2C: sw          $v1, 0x2C($s4)
    MEM_W(0X2C, ctx->r20) = ctx->r3;
L_80228F30:
    // 0x80228F30: lw          $v0, 0x2C($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X2C);
    // 0x80228F34: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
    // 0x80228F38: sw          $v0, 0x2C($s4)
    MEM_W(0X2C, ctx->r20) = ctx->r2;
L_80228F3C:
    // 0x80228F3C: lw          $v1, 0x2C($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X2C);
    // 0x80228F40: lh          $v0, 0x0($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X0);
    // 0x80228F44: beq         $v0, $zero, L_8022901C
    if (ctx->r2 == 0) {
        // 0x80228F48: addiu       $a0, $s3, 0x1C
        ctx->r4 = ADD32(ctx->r19, 0X1C);
            goto L_8022901C;
    }
    // 0x80228F48: addiu       $a0, $s3, 0x1C
    ctx->r4 = ADD32(ctx->r19, 0X1C);
    // 0x80228F4C: lh          $s2, 0x2($v1)
    ctx->r18 = MEM_H(ctx->r3, 0X2);
    // 0x80228F50: lh          $v0, 0x14($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X14);
    // 0x80228F54: addiu       $a1, $s3, 0x14
    ctx->r5 = ADD32(ctx->r19, 0X14);
    // 0x80228F58: lh          $s1, 0x4($v1)
    ctx->r17 = MEM_H(ctx->r3, 0X4);
    // 0x80228F5C: lh          $v1, 0x18($s3)
    ctx->r3 = MEM_H(ctx->r19, 0X18);
    // 0x80228F60: lw          $a2, 0x3C($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X3C);
    // 0x80228F64: subu        $s2, $s2, $v0
    ctx->r18 = SUB32(ctx->r18, ctx->r2);
    // 0x80228F68: lw          $v0, 0x1C($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X1C);
    // 0x80228F6C: subu        $s1, $s1, $v1
    ctx->r17 = SUB32(ctx->r17, ctx->r3);
    // 0x80228F70: lw          $v1, 0x34($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X34);
    // 0x80228F74: sll         $s2, $s2, 16
    ctx->r18 = S32(ctx->r18 << 16);
    // 0x80228F78: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x80228F7C: sw          $v0, 0x1C($s3)
    MEM_W(0X1C, ctx->r19) = ctx->r2;
    // 0x80228F80: lw          $v0, 0x24($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X24);
    // 0x80228F84: sll         $s1, $s1, 16
    ctx->r17 = S32(ctx->r17 << 16);
    // 0x80228F88: addu        $a2, $a2, $s1
    ctx->r6 = ADD32(ctx->r6, ctx->r17);
    // 0x80228F8C: sw          $a2, 0x3C($s3)
    MEM_W(0X3C, ctx->r19) = ctx->r6;
    // 0x80228F90: addu        $v1, $v1, $s2
    ctx->r3 = ADD32(ctx->r3, ctx->r18);
    // 0x80228F94: sw          $v1, 0x34($s3)
    MEM_W(0X34, ctx->r19) = ctx->r3;
    // 0x80228F98: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x80228F9C: jal         0x8004DD04
    // 0x80228FA0: sw          $v0, 0x24($s3)
    MEM_W(0X24, ctx->r19) = ctx->r2;
    func_8004DD04_29104(rdram, ctx);
        goto after_0;
    // 0x80228FA0: sw          $v0, 0x24($s3)
    MEM_W(0X24, ctx->r19) = ctx->r2;
    after_0:
    // 0x80228FA4: addiu       $a0, $s3, 0x34
    ctx->r4 = ADD32(ctx->r19, 0X34);
    // 0x80228FA8: jal         0x8004DD04
    // 0x80228FAC: addiu       $a1, $s3, 0x2C
    ctx->r5 = ADD32(ctx->r19, 0X2C);
    func_8004DD04_29104(rdram, ctx);
        goto after_1;
    // 0x80228FAC: addiu       $a1, $s3, 0x2C
    ctx->r5 = ADD32(ctx->r19, 0X2C);
    after_1:
    // 0x80228FB0: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80228FB4: addiu       $s0, $s0, 0x49CC
    ctx->r16 = ADD32(ctx->r16, 0X49CC);
    // 0x80228FB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228FBC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80228FC0: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80228FC4: lw          $v1, 0x49D4($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X49D4);
    // 0x80228FC8: lw          $a2, 0x18($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X18);
    // 0x80228FCC: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x80228FD0: lw          $a3, 0x49EC($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X49EC);
    // 0x80228FD4: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x80228FD8: addu        $v1, $v1, $s1
    ctx->r3 = ADD32(ctx->r3, ctx->r17);
    // 0x80228FDC: addu        $a2, $a2, $s2
    ctx->r6 = ADD32(ctx->r6, ctx->r18);
    // 0x80228FE0: addu        $a3, $a3, $s1
    ctx->r7 = ADD32(ctx->r7, ctx->r17);
    // 0x80228FE4: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x80228FE8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228FEC: sw          $v1, 0x49D4($at)
    MEM_W(0X49D4, ctx->r1) = ctx->r3;
    // 0x80228FF0: sw          $a2, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r6;
    // 0x80228FF4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228FF8: sw          $a3, 0x49EC($at)
    MEM_W(0X49EC, ctx->r1) = ctx->r7;
    // 0x80228FFC: jal         0x8004DD04
    // 0x80229000: addiu       $a1, $s0, -0x8
    ctx->r5 = ADD32(ctx->r16, -0X8);
    func_8004DD04_29104(rdram, ctx);
        goto after_2;
    // 0x80229000: addiu       $a1, $s0, -0x8
    ctx->r5 = ADD32(ctx->r16, -0X8);
    after_2:
    // 0x80229004: addiu       $a0, $s0, 0x18
    ctx->r4 = ADD32(ctx->r16, 0X18);
    // 0x80229008: jal         0x8004DD04
    // 0x8022900C: addiu       $a1, $s0, 0x10
    ctx->r5 = ADD32(ctx->r16, 0X10);
    func_8004DD04_29104(rdram, ctx);
        goto after_3;
    // 0x8022900C: addiu       $a1, $s0, 0x10
    ctx->r5 = ADD32(ctx->r16, 0X10);
    after_3:
    // 0x80229010: lw          $v0, 0x2C($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X2C);
    // 0x80229014: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
    // 0x80229018: sw          $v0, 0x2C($s4)
    MEM_W(0X2C, ctx->r20) = ctx->r2;
L_8022901C:
    // 0x8022901C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80229020: jal         0x802291F4
    // 0x80229024: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_802291F4_ovl15(rdram, ctx);
        goto after_4;
    // 0x80229024: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_4:
L_80229028:
    // 0x80229028: lw          $v0, 0x10($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X10);
    // 0x8022902C: lw          $v1, 0x18($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X18);
    // 0x80229030: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80229034: sw          $v0, 0x10($s4)
    MEM_W(0X10, ctx->r20) = ctx->r2;
    // 0x80229038: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022903C: sh          $v0, 0x44($s3)
    MEM_H(0X44, ctx->r19) = ctx->r2;
    // 0x80229040: lw          $v0, 0x14($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X14);
    // 0x80229044: lw          $v1, 0x1C($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X1C);
    // 0x80229048: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022904C: sw          $v0, 0x14($s4)
    MEM_W(0X14, ctx->r20) = ctx->r2;
    // 0x80229050: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80229054: sh          $v0, 0x48($s3)
    MEM_H(0X48, ctx->r19) = ctx->r2;
    // 0x80229058: lw          $v0, 0x20($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X20);
    // 0x8022905C: lw          $v1, 0x24($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X24);
    // 0x80229060: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80229064: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80229068: sw          $v0, 0x20($s4)
    MEM_W(0X20, ctx->r20) = ctx->r2;
    // 0x8022906C: lh          $a1, 0x44($s3)
    ctx->r5 = MEM_H(ctx->r19, 0X44);
    // 0x80229070: lh          $a3, 0x48($s3)
    ctx->r7 = MEM_H(ctx->r19, 0X48);
    // 0x80229074: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80229078: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022907C: jal         0x8004DA90
    // 0x80229080: sh          $v0, 0x56($s3)
    MEM_H(0X56, ctx->r19) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_5;
    // 0x80229080: sh          $v0, 0x56($s3)
    MEM_H(0X56, ctx->r19) = ctx->r2;
    after_5:
    // 0x80229084: lbu         $v0, 0x9($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X9);
    // 0x80229088: bne         $v0, $zero, L_802290E8
    if (ctx->r2 != 0) {
        // 0x8022908C: nop
    
            goto L_802290E8;
    }
    // 0x8022908C: nop

    // 0x80229090: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x80229094: addiu       $a1, $a1, 0x1DF0
    ctx->r5 = ADD32(ctx->r5, 0X1DF0);
    // 0x80229098: jal         0x8004DEE8
    // 0x8022909C: addiu       $a0, $s3, 0x14
    ctx->r4 = ADD32(ctx->r19, 0X14);
    func_8004DEE8_292E8(rdram, ctx);
        goto after_6;
    // 0x8022909C: addiu       $a0, $s3, 0x14
    ctx->r4 = ADD32(ctx->r19, 0X14);
    after_6:
    // 0x802290A0: sltiu       $v0, $v0, 0x40
    ctx->r2 = ctx->r2 < 0X40 ? 1 : 0;
    // 0x802290A4: beq         $v0, $zero, L_802290E8
    if (ctx->r2 == 0) {
        // 0x802290A8: nop
    
            goto L_802290E8;
    }
    // 0x802290A8: nop

    // 0x802290AC: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802290B0: addiu       $v0, $v0, 0x1D80
    ctx->r2 = ADD32(ctx->r2, 0X1D80);
    // 0x802290B4: sw          $v0, 0x2C($s4)
    MEM_W(0X2C, ctx->r20) = ctx->r2;
    // 0x802290B8: lh          $v0, 0x0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X0);
    // 0x802290BC: beq         $v0, $zero, L_802290D4
    if (ctx->r2 == 0) {
        // 0x802290C0: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_802290D4;
    }
    // 0x802290C0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x802290C4: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802290C8: lhu         $v0, 0x1D88($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X1D88);
    // 0x802290CC: j           L_802290DC
    // 0x802290D0: sh          $v0, 0x4($s4)
    MEM_H(0X4, ctx->r20) = ctx->r2;
        goto L_802290DC;
    // 0x802290D0: sh          $v0, 0x4($s4)
    MEM_H(0X4, ctx->r20) = ctx->r2;
L_802290D4:
    // 0x802290D4: jal         0x802291F4
    // 0x802290D8: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_802291F4_ovl15(rdram, ctx);
        goto after_7;
    // 0x802290D8: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_7:
L_802290DC:
    // 0x802290DC: lbu         $v0, 0x9($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X9);
    // 0x802290E0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802290E4: sb          $v0, 0x9($s3)
    MEM_B(0X9, ctx->r19) = ctx->r2;
L_802290E8:
    // 0x802290E8: lw          $a0, 0xC0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0XC0);
    // 0x802290EC: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x802290F0: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x802290F4: and         $v1, $a0, $v0
    ctx->r3 = ctx->r4 & ctx->r2;
    // 0x802290F8: beq         $v1, $zero, L_8022910C
    if (ctx->r3 == 0) {
        // 0x802290FC: lui         $v0, 0x1C00
        ctx->r2 = S32(0X1C00 << 16);
            goto L_8022910C;
    }
    // 0x802290FC: lui         $v0, 0x1C00
    ctx->r2 = S32(0X1C00 << 16);
    // 0x80229100: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x80229104: bnel        $v0, $zero, L_8022910C
    if (ctx->r2 != 0) {
        // 0x80229108: addu        $s5, $v1, $zero
        ctx->r21 = ADD32(ctx->r3, 0);
            goto L_8022910C;
    }
    goto skip_0;
    // 0x80229108: addu        $s5, $v1, $zero
    ctx->r21 = ADD32(ctx->r3, 0);
    skip_0:
L_8022910C:
    // 0x8022910C: lw          $a0, 0xC8($s3)
    ctx->r4 = MEM_W(ctx->r19, 0XC8);
    // 0x80229110: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x80229114: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x80229118: and         $v1, $a0, $v0
    ctx->r3 = ctx->r4 & ctx->r2;
    // 0x8022911C: beq         $v1, $zero, L_80229130
    if (ctx->r3 == 0) {
        // 0x80229120: lui         $v0, 0x1C00
        ctx->r2 = S32(0X1C00 << 16);
            goto L_80229130;
    }
    // 0x80229120: lui         $v0, 0x1C00
    ctx->r2 = S32(0X1C00 << 16);
    // 0x80229124: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x80229128: bnel        $v0, $zero, L_80229130
    if (ctx->r2 != 0) {
        // 0x8022912C: addu        $s6, $v1, $zero
        ctx->r22 = ADD32(ctx->r3, 0);
            goto L_80229130;
    }
    goto skip_1;
    // 0x8022912C: addu        $s6, $v1, $zero
    ctx->r22 = ADD32(ctx->r3, 0);
    skip_1:
L_80229130:
    // 0x80229130: slt         $v0, $s5, $s6
    ctx->r2 = SIGNED(ctx->r21) < SIGNED(ctx->r22) ? 1 : 0;
    // 0x80229134: bnel        $v0, $zero, L_8022913C
    if (ctx->r2 != 0) {
        // 0x80229138: addu        $s5, $s6, $zero
        ctx->r21 = ADD32(ctx->r22, 0);
            goto L_8022913C;
    }
    goto skip_2;
    // 0x80229138: addu        $s5, $s6, $zero
    ctx->r21 = ADD32(ctx->r22, 0);
    skip_2:
L_8022913C:
    // 0x8022913C: beq         $s5, $zero, L_802291CC
    if (ctx->r21 == 0) {
        // 0x80229140: nop
    
            goto L_802291CC;
    }
    // 0x80229140: nop

    // 0x80229144: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80229148: lhu         $v0, -0x3AA4($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3AA4);
    // 0x8022914C: bne         $v0, $zero, L_802291CC
    if (ctx->r2 != 0) {
        // 0x80229150: addiu       $a0, $zero, 0x1E
        ctx->r4 = ADD32(0, 0X1E);
            goto L_802291CC;
    }
    // 0x80229150: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    // 0x80229154: addiu       $a1, $zero, 0x400
    ctx->r5 = ADD32(0, 0X400);
    // 0x80229158: addiu       $a2, $zero, 0x2800
    ctx->r6 = ADD32(0, 0X2800);
    // 0x8022915C: jal         0x8003491C
    // 0x80229160: addiu       $a3, $s3, 0x14
    ctx->r7 = ADD32(ctx->r19, 0X14);
    func_8003491C_FD1C(rdram, ctx);
        goto after_8;
    // 0x80229160: addiu       $a3, $s3, 0x14
    ctx->r7 = ADD32(ctx->r19, 0X14);
    after_8:
    // 0x80229164: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80229168: lhu         $v0, -0x3BBC($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3BBC);
    // 0x8022916C: subu        $v0, $v0, $s5
    ctx->r2 = SUB32(ctx->r2, ctx->r21);
    // 0x80229170: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80229174: sh          $v0, -0x3BBC($at)
    MEM_H(-0X3BBC, ctx->r1) = ctx->r2;
    // 0x80229178: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022917C: bgez        $v0, L_8022918C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80229180: nop
    
            goto L_8022918C;
    }
    // 0x80229180: nop

    // 0x80229184: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80229188: sh          $zero, -0x3BBC($at)
    MEM_H(-0X3BBC, ctx->r1) = 0;
L_8022918C:
    // 0x8022918C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80229190: lhu         $v0, -0x3BBA($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3BBA);
    // 0x80229194: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x80229198: lh          $a0, -0x3BBC($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X3BBC);
    // 0x8022919C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802291A0: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802291A4: srl         $v0, $v0, 31
    ctx->r2 = S32(U32(ctx->r2) >> 31);
    // 0x802291A8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802291AC: sra         $v1, $v1, 1
    ctx->r3 = S32(SIGNED(ctx->r3) >> 1);
    // 0x802291B0: slt         $v1, $v1, $a0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x802291B4: bne         $v1, $zero, L_802291CC
    if (ctx->r3 != 0) {
        // 0x802291B8: nop
    
            goto L_802291CC;
    }
    // 0x802291B8: nop

    // 0x802291BC: lw          $v1, 0x28($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X28);
    // 0x802291C0: lbu         $v0, 0xC($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XC);
    // 0x802291C4: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x802291C8: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
L_802291CC:
    // 0x802291CC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x802291D0: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x802291D4: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x802291D8: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x802291DC: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x802291E0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x802291E4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802291E8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802291EC: jr          $ra
    // 0x802291F0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x802291F0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80226D50_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226D50: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80226D54: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80226D58: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80226D5C: addiu       $a0, $s1, 0x2C
    ctx->r4 = ADD32(ctx->r17, 0X2C);
    // 0x80226D60: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x80226D64: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80226D68: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80226D6C: jal         0x8009A3B4
    // 0x80226D70: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80226D70: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x80226D74: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
    // 0x80226D78: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x80226D7C: jal         0x8009A3B4
    // 0x80226D80: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80226D80: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80226D84: addiu       $a0, $s1, 0x5C
    ctx->r4 = ADD32(ctx->r17, 0X5C);
    // 0x80226D88: addiu       $a1, $s1, 0x54
    ctx->r5 = ADD32(ctx->r17, 0X54);
    // 0x80226D8C: jal         0x8009A3B4
    // 0x80226D90: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80226D90: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80226D94: lbu         $v1, 0xAC($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XAC);
    // 0x80226D98: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x80226D9C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80226DA0: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x80226DA4: addiu       $a1, $a1, -0x3A50
    ctx->r5 = ADD32(ctx->r5, -0X3A50);
    // 0x80226DA8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80226DAC: sb          $v1, 0xAD($s1)
    MEM_B(0XAD, ctx->r17) = ctx->r3;
    // 0x80226DB0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226DB4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226DB8: lw          $v0, 0x1620($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1620);
    // 0x80226DBC: addiu       $s0, $s1, 0x4E0
    ctx->r16 = ADD32(ctx->r17, 0X4E0);
    // 0x80226DC0: jalr        $v0
    // 0x80226DC4: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x80226DC4: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80226DC8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80226DCC: jal         0x802274DC
    // 0x80226DD0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_802274DC_ovl15(rdram, ctx);
        goto after_4;
    // 0x80226DD0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80226DD4: lbu         $a1, 0xAC($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0XAC);
    // 0x80226DD8: lbu         $v0, 0xAD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XAD);
    // 0x80226DDC: beq         $a1, $v0, L_80226DF8
    if (ctx->r5 == ctx->r2) {
        // 0x80226DE0: nop
    
            goto L_80226DF8;
    }
    // 0x80226DE0: nop

    // 0x80226DE4: lh          $a2, 0x4E2($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X4E2);
    // 0x80226DE8: jal         0x80050294
    // 0x80226DEC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x80226DEC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_5:
    // 0x80226DF0: j           L_80226E00
    // 0x80226DF4: nop

        goto L_80226E00;
    // 0x80226DF4: nop

L_80226DF8:
    // 0x80226DF8: jal         0x8005044C
    // 0x80226DFC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_6;
    // 0x80226DFC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
L_80226E00:
    // 0x80226E00: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80226E04: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80226E08: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226E0C: jr          $ra
    // 0x80226E10: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80226E10: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022E6AC_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E6AC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022E6B0: lw          $v0, 0x4B34($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4B34);
    // 0x8022E6B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E6B8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E6BC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E6C0: bne         $v0, $s0, L_8022E6D8
    if (ctx->r2 != ctx->r16) {
        // 0x8022E6C4: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8022E6D8;
    }
    // 0x8022E6C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022E6C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E6CC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022E6D0: j           L_8022E73C
    // 0x8022E6D4: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
        goto L_8022E73C;
    // 0x8022E6D4: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_8022E6D8:
    // 0x8022E6D8: lw          $v1, 0x4C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4C);
    // 0x8022E6DC: lui         $v0, 0x2000
    ctx->r2 = S32(0X2000 << 16);
    // 0x8022E6E0: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8022E6E4: beq         $v0, $zero, L_8022E724
    if (ctx->r2 == 0) {
        // 0x8022E6E8: nop
    
            goto L_8022E724;
    }
    // 0x8022E6E8: nop

    // 0x8022E6EC: jal         0x8022ED54
    // 0x8022E6F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022ED54_ovl15(rdram, ctx);
        goto after_0;
    // 0x8022E6F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8022E6F4: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022E6F8: beq         $v0, $zero, L_8022E708
    if (ctx->r2 == 0) {
        // 0x8022E6FC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022E708;
    }
    // 0x8022E6FC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022E700: j           L_8022E73C
    // 0x8022E704: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022E73C;
    // 0x8022E704: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022E708:
    // 0x8022E708: jal         0x8022EA84
    // 0x8022E70C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022EA84_ovl15(rdram, ctx);
        goto after_1;
    // 0x8022E70C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022E710: addiu       $a0, $zero, 0x13D
    ctx->r4 = ADD32(0, 0X13D);
    // 0x8022E714: jal         0x8002A33C
    // 0x8022E718: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x8022E718: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    after_2:
    // 0x8022E71C: j           L_8022E73C
    // 0x8022E720: nop

        goto L_8022E73C;
    // 0x8022E720: nop

L_8022E724:
    // 0x8022E724: bgez        $v1, L_8022E73C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8022E728: nop
    
            goto L_8022E73C;
    }
    // 0x8022E728: nop

    // 0x8022E72C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022E730: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022E734: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022E738: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022E73C:
    // 0x8022E73C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022E740: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E744: jr          $ra
    // 0x8022E748: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E748: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226284_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226284: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80226288: bne         $v0, $zero, L_802262B0
    if (ctx->r2 != 0) {
        // 0x8022628C: nop
    
            goto L_802262B0;
    }
    // 0x8022628C: nop

    // 0x80226290: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x80226294: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80226298: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022629C: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x802262A0: lw          $v1, 0x2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X2C);
    // 0x802262A4: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x802262A8: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x802262AC: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
L_802262B0:
    // 0x802262B0: jr          $ra
    // 0x802262B4: nop

    TRACE_RETURN()
    return;
    // 0x802262B4: nop

;}
RECOMP_FUNC void func_8022DDEC_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DDEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022DDF0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022DDF4: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8022DDF8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022DDFC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022DE00: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022DE04: lw          $v0, 0x26F0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X26F0);
    // 0x8022DE08: jalr        $v0
    // 0x8022DE0C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022DE0C: nop

    after_0:
    // 0x8022DE10: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022DE14: jr          $ra
    // 0x8022DE18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022DE18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228264_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228264: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80228268: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022826C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x80228270: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80228274: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80228278: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x8022827C: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x80228280: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80228284: addu        $v1, $v0, $v1
    ctx->r3 = ADD32(ctx->r2, ctx->r3);
    // 0x80228288: lb          $a0, 0x1($v1)
    ctx->r4 = MEM_B(ctx->r3, 0X1);
    // 0x8022828C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80228290: addiu       $v0, $zero, 0x3F
    ctx->r2 = ADD32(0, 0X3F);
    // 0x80228294: beq         $a0, $v0, L_802282B0
    if (ctx->r4 == ctx->r2) {
        // 0x80228298: addiu       $v0, $zero, 0x7F
        ctx->r2 = ADD32(0, 0X7F);
            goto L_802282B0;
    }
    // 0x80228298: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x8022829C: bne         $a0, $v0, L_802282AC
    if (ctx->r4 != ctx->r2) {
        // 0x802282A0: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_802282AC;
    }
    // 0x802282A0: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x802282A4: j           L_802282B0
    // 0x802282A8: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
        goto L_802282B0;
    // 0x802282A8: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
L_802282AC:
    // 0x802282AC: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
L_802282B0:
    // 0x802282B0: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x802282B4: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x802282B8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802282BC: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x802282C0: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x802282C4: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x802282C8: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x802282CC: sra         $a0, $v0, 24
    ctx->r4 = S32(SIGNED(ctx->r2) >> 24);
    // 0x802282D0: beq         $a0, $v1, L_802282F8
    if (ctx->r4 == ctx->r3) {
        // 0x802282D4: addiu       $a1, $zero, 0x33
        ctx->r5 = ADD32(0, 0X33);
            goto L_802282F8;
    }
    // 0x802282D4: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x802282D8: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x802282DC: jal         0x8003B85C
    // 0x802282E0: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_0;
    // 0x802282E0: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_0:
    // 0x802282E4: lw          $a0, 0x88($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X88);
    // 0x802282E8: lui         $a1, 0x11
    ctx->r5 = S32(0X11 << 16);
    // 0x802282EC: ori         $a1, $a1, 0x10
    ctx->r5 = ctx->r5 | 0X10;
    // 0x802282F0: jal         0x8003B840
    // 0x802282F4: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_1;
    // 0x802282F4: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_1:
L_802282F8:
    // 0x802282F8: lb          $a0, 0x11($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X11);
    // 0x802282FC: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x80228300: lbu         $v1, 0xC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XC);
    // 0x80228304: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x80228308: sb          $v1, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r3;
    // 0x8022830C: lb          $v1, 0x1($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X1);
    // 0x80228310: addiu       $v0, $zero, 0x3F
    ctx->r2 = ADD32(0, 0X3F);
    // 0x80228314: beq         $v1, $v0, L_80228330
    if (ctx->r3 == ctx->r2) {
        // 0x80228318: addiu       $v0, $zero, 0x7F
        ctx->r2 = ADD32(0, 0X7F);
            goto L_80228330;
    }
    // 0x80228318: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x8022831C: bne         $v1, $v0, L_8022832C
    if (ctx->r3 != ctx->r2) {
        // 0x80228320: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_8022832C;
    }
    // 0x80228320: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x80228324: j           L_80228330
    // 0x80228328: sb          $zero, 0x11($s0)
    MEM_B(0X11, ctx->r16) = 0;
        goto L_80228330;
    // 0x80228328: sb          $zero, 0x11($s0)
    MEM_B(0X11, ctx->r16) = 0;
L_8022832C:
    // 0x8022832C: sb          $v0, 0x11($s0)
    MEM_B(0X11, ctx->r16) = ctx->r2;
L_80228330:
    // 0x80228330: lb          $v1, 0x11($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X11);
    // 0x80228334: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x80228338: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022833C: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80228340: lb          $v1, 0x10($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X10);
    // 0x80228344: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    // 0x80228348: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022834C: sra         $a0, $v0, 24
    ctx->r4 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80228350: beq         $a0, $v1, L_80228378
    if (ctx->r4 == ctx->r3) {
        // 0x80228354: addiu       $a1, $zero, 0x33
        ctx->r5 = ADD32(0, 0X33);
            goto L_80228378;
    }
    // 0x80228354: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x80228358: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x8022835C: jal         0x8003B85C
    // 0x80228360: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_2;
    // 0x80228360: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_2:
    // 0x80228364: lw          $a0, 0x88($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X88);
    // 0x80228368: lui         $a1, 0x13
    ctx->r5 = S32(0X13 << 16);
    // 0x8022836C: ori         $a1, $a1, 0x12
    ctx->r5 = ctx->r5 | 0X12;
    // 0x80228370: jal         0x8003B840
    // 0x80228374: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_3;
    // 0x80228374: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_3:
L_80228378:
    // 0x80228378: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x8022837C: sb          $v0, 0x10($s0)
    MEM_B(0X10, ctx->r16) = ctx->r2;
    // 0x80228380: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80228384: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80228388: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022838C: jr          $ra
    // 0x80228390: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80228390: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80228394: nop

    // 0x80228398: nop

    // 0x8022839C: nop

;}
RECOMP_FUNC void func_8022B904_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B904: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022B908: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B90C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B910: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022B914: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022B918: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022B91C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022B920: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022B924: lbu         $v1, 0xAC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022B928: addiu       $a1, $zero, 0xFA
    ctx->r5 = ADD32(0, 0XFA);
    // 0x8022B92C: addiu       $a2, $zero, 0xC8
    ctx->r6 = ADD32(0, 0XC8);
    // 0x8022B930: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
    // 0x8022B934: jal         0x8022C264
    // 0x8022B938: sb          $v1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r3;
    func_8022C264_ovl15(rdram, ctx);
        goto after_0;
    // 0x8022B938: sb          $v1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r3;
    after_0:
    // 0x8022B93C: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8022B940: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x8022B944: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022B948: beq         $v0, $zero, L_8022B9DC
    if (ctx->r2 == 0) {
        // 0x8022B94C: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_8022B9DC;
    }
    // 0x8022B94C: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x8022B950: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022B954: jal         0x8022C1C8
    // 0x8022B958: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    func_8022C1C8_ovl15(rdram, ctx);
        goto after_1;
    // 0x8022B958: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    after_1:
    // 0x8022B95C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022B960: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022B964: addiu       $s2, $s2, 0x14
    ctx->r18 = ADD32(ctx->r18, 0X14);
    // 0x8022B968: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022B96C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x8022B970: jal         0x8004F820
    // 0x8022B974: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x8022B974: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_2:
    // 0x8022B978: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B97C: bgez        $v0, L_8022B9A8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022B980: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022B9A8;
    }
    // 0x8022B980: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022B984: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022B988: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022B98C: jal         0x8004F820
    // 0x8022B990: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x8022B990: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_3:
    // 0x8022B994: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B998: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022B99C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8022B9A0: j           L_8022B9C0
    // 0x8022B9A4: srl         $v1, $v0, 3
    ctx->r3 = S32(U32(ctx->r2) >> 3);
        goto L_8022B9C0;
    // 0x8022B9A4: srl         $v1, $v0, 3
    ctx->r3 = S32(U32(ctx->r2) >> 3);
L_8022B9A8:
    // 0x8022B9A8: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022B9AC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022B9B0: jal         0x8004F820
    // 0x8022B9B4: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_4;
    // 0x8022B9B4: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_4:
    // 0x8022B9B8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B9BC: sra         $v1, $v0, 19
    ctx->r3 = S32(SIGNED(ctx->r2) >> 19);
L_8022B9C0:
    // 0x8022B9C0: lbu         $v0, 0x3($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X3);
    // 0x8022B9C4: sh          $v1, 0x6($s3)
    MEM_H(0X6, ctx->r19) = ctx->r3;
    // 0x8022B9C8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022B9CC: sb          $v0, 0x3($s3)
    MEM_B(0X3, ctx->r19) = ctx->r2;
    // 0x8022B9D0: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x8022B9D4: j           L_8022BA24
    // 0x8022B9D8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
        goto L_8022BA24;
    // 0x8022B9D8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_8022B9DC:
    // 0x8022B9DC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022B9E0: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022B9E4: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x8022B9E8: jal         0x8004F820
    // 0x8022B9EC: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_8004F820_2AC20(rdram, ctx);
        goto after_5;
    // 0x8022B9EC: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_5:
    // 0x8022B9F0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B9F4: slt         $v0, $zero, $v0
    ctx->r2 = SIGNED(0) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022B9F8: beq         $v0, $zero, L_8022BA08
    if (ctx->r2 == 0) {
        // 0x8022B9FC: sh          $v0, 0x34E($s0)
        MEM_H(0X34E, ctx->r16) = ctx->r2;
            goto L_8022BA08;
    }
    // 0x8022B9FC: sh          $v0, 0x34E($s0)
    MEM_H(0X34E, ctx->r16) = ctx->r2;
    // 0x8022BA00: j           L_8022BA0C
    // 0x8022BA04: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_8022BA0C;
    // 0x8022BA04: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_8022BA08:
    // 0x8022BA08: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_8022BA0C:
    // 0x8022BA0C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022BA10: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022BA14: sb          $v0, 0x3($s3)
    MEM_B(0X3, ctx->r19) = ctx->r2;
    // 0x8022BA18: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x8022BA1C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022BA20: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_8022BA24:
    // 0x8022BA24: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022BA28: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022BA2C: jal         0x800610AC
    // 0x8022BA30: andi        $a3, $v0, 0xFF
    ctx->r7 = ctx->r2 & 0XFF;
    func_800610AC_3C4AC(rdram, ctx);
        goto after_6;
    // 0x8022BA30: andi        $a3, $v0, 0xFF
    ctx->r7 = ctx->r2 & 0XFF;
    after_6:
    // 0x8022BA34: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022BA38: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022BA3C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022BA40: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022BA44: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022BA48: jr          $ra
    // 0x8022BA4C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022BA4C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022AD6C_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AD6C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022AD70: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022AD74: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022AD78: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8022AD7C: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8022AD80: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022AD84: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022AD88: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022AD8C: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x8022AD90: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x8022AD94: bne         $v1, $v0, L_8022ADB0
    if (ctx->r3 != ctx->r2) {
        // 0x8022AD98: addiu       $s2, $s0, 0x348
        ctx->r18 = ADD32(ctx->r16, 0X348);
            goto L_8022ADB0;
    }
    // 0x8022AD98: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x8022AD9C: lui         $s1, 0x8023
    ctx->r17 = S32(0X8023 << 16);
    // 0x8022ADA0: addiu       $s1, $s1, 0x2580
    ctx->r17 = ADD32(ctx->r17, 0X2580);
    // 0x8022ADA4: lui         $s3, 0x8023
    ctx->r19 = S32(0X8023 << 16);
    // 0x8022ADA8: j           L_8022ADC0
    // 0x8022ADAC: addiu       $s3, $s3, 0x25A0
    ctx->r19 = ADD32(ctx->r19, 0X25A0);
        goto L_8022ADC0;
    // 0x8022ADAC: addiu       $s3, $s3, 0x25A0
    ctx->r19 = ADD32(ctx->r19, 0X25A0);
L_8022ADB0:
    // 0x8022ADB0: lui         $s1, 0x8023
    ctx->r17 = S32(0X8023 << 16);
    // 0x8022ADB4: addiu       $s1, $s1, 0x2570
    ctx->r17 = ADD32(ctx->r17, 0X2570);
    // 0x8022ADB8: lui         $s3, 0x8023
    ctx->r19 = S32(0X8023 << 16);
    // 0x8022ADBC: addiu       $s3, $s3, 0x2590
    ctx->r19 = ADD32(ctx->r19, 0X2590);
L_8022ADC0:
    // 0x8022ADC0: lui         $s4, 0x8023
    ctx->r20 = S32(0X8023 << 16);
    // 0x8022ADC4: jal         0x800A3450
    // 0x8022ADC8: addiu       $s4, $s4, 0x25B0
    ctx->r20 = ADD32(ctx->r20, 0X25B0);
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022ADC8: addiu       $s4, $s4, 0x25B0
    ctx->r20 = ADD32(ctx->r20, 0X25B0);
    after_0:
    // 0x8022ADCC: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022ADD0: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x8022ADD4: lbu         $s1, 0x0($v0)
    ctx->r17 = MEM_BU(ctx->r2, 0X0);
    // 0x8022ADD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022ADDC: andi        $v1, $s1, 0xFF
    ctx->r3 = ctx->r17 & 0XFF;
    // 0x8022ADE0: beq         $v1, $v0, L_8022AE6C
    if (ctx->r3 == ctx->r2) {
        // 0x8022ADE4: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8022AE6C;
    }
    // 0x8022ADE4: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022ADE8: beql        $v0, $zero, L_8022AE00
    if (ctx->r2 == 0) {
        // 0x8022ADEC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022AE00;
    }
    goto skip_0;
    // 0x8022ADEC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022ADF0: beq         $v1, $zero, L_8022AE10
    if (ctx->r3 == 0) {
        // 0x8022ADF4: nop
    
            goto L_8022AE10;
    }
    // 0x8022ADF4: nop

    // 0x8022ADF8: j           L_8022AEFC
    // 0x8022ADFC: nop

        goto L_8022AEFC;
    // 0x8022ADFC: nop

L_8022AE00:
    // 0x8022AE00: beq         $v1, $v0, L_8022AE80
    if (ctx->r3 == ctx->r2) {
        // 0x8022AE04: nop
    
            goto L_8022AE80;
    }
    // 0x8022AE04: nop

    // 0x8022AE08: j           L_8022AEFC
    // 0x8022AE0C: nop

        goto L_8022AEFC;
    // 0x8022AE0C: nop

L_8022AE10:
    // 0x8022AE10: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022AE14: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x8022AE18: bne         $v0, $zero, L_8022AE3C
    if (ctx->r2 != 0) {
        // 0x8022AE1C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022AE3C;
    }
    // 0x8022AE1C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022AE20: jal         0x800A3450
    // 0x8022AE24: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x8022AE24: nop

    after_1:
    // 0x8022AE28: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022AE2C: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x8022AE30: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x8022AE34: beq         $v0, $zero, L_8022AE48
    if (ctx->r2 == 0) {
        // 0x8022AE38: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022AE48;
    }
    // 0x8022AE38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022AE3C:
    // 0x8022AE3C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022AE40: j           L_8022AE5C
    // 0x8022AE44: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_8022AE5C;
    // 0x8022AE44: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8022AE48:
    // 0x8022AE48: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022AE4C: jal         0x8022C1D8
    // 0x8022AE50: nop

    func_8022C1D8_ovl15(rdram, ctx);
        goto after_2;
    // 0x8022AE50: nop

    after_2:
    // 0x8022AE54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022AE58: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_8022AE5C:
    // 0x8022AE5C: jal         0x8022C218
    // 0x8022AE60: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_8022C218_ovl15(rdram, ctx);
        goto after_3;
    // 0x8022AE60: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_3:
    // 0x8022AE64: j           L_8022AF20
    // 0x8022AE68: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
        goto L_8022AF20;
    // 0x8022AE68: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
L_8022AE6C:
    // 0x8022AE6C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022AE70: jal         0x8022C1C8
    // 0x8022AE74: nop

    func_8022C1C8_ovl15(rdram, ctx);
        goto after_4;
    // 0x8022AE74: nop

    after_4:
    // 0x8022AE78: j           L_8022AF20
    // 0x8022AE7C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_8022AF20;
    // 0x8022AE7C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022AE80:
    // 0x8022AE80: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x8022AE84: lhu         $v0, 0xC($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XC);
    // 0x8022AE88: lhu         $a2, 0x14($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X14);
    // 0x8022AE8C: lhu         $a1, 0x18($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X18);
    // 0x8022AE90: lhu         $a0, 0x16($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X16);
    // 0x8022AE94: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8022AE98: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8022AE9C: sra         $a3, $a2, 17
    ctx->r7 = S32(SIGNED(ctx->r6) >> 17);
    // 0x8022AEA0: lhu         $v0, 0x10($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X10);
    // 0x8022AEA4: addu        $v1, $v1, $a3
    ctx->r3 = ADD32(ctx->r3, ctx->r7);
    // 0x8022AEA8: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022AEAC: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8022AEB0: andi        $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 & 0XFFFF;
    // 0x8022AEB4: slt         $v1, $v1, $a2
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x8022AEB8: subu        $a1, $a1, $v0
    ctx->r5 = SUB32(ctx->r5, ctx->r2);
    // 0x8022AEBC: sra         $v0, $a0, 17
    ctx->r2 = S32(SIGNED(ctx->r4) >> 17);
    // 0x8022AEC0: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x8022AEC4: beq         $v1, $zero, L_8022AEF4
    if (ctx->r3 == 0) {
        // 0x8022AEC8: sra         $a0, $a0, 16
        ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
            goto L_8022AEF4;
    }
    // 0x8022AEC8: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8022AECC: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x8022AED0: slt         $v0, $v0, $a0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8022AED4: beq         $v0, $zero, L_8022AEF4
    if (ctx->r2 == 0) {
        // 0x8022AED8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022AEF4;
    }
    // 0x8022AED8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022AEDC: jal         0x8022C218
    // 0x8022AEE0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8022C218_ovl15(rdram, ctx);
        goto after_5;
    // 0x8022AEE0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x8022AEE4: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022AEE8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022AEEC: j           L_8022AF20
    // 0x8022AEF0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_8022AF20;
    // 0x8022AEF0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022AEF4:
    // 0x8022AEF4: j           L_8022AF20
    // 0x8022AEF8: addiu       $s1, $zero, 0xFF
    ctx->r17 = ADD32(0, 0XFF);
        goto L_8022AF20;
    // 0x8022AEF8: addiu       $s1, $zero, 0xFF
    ctx->r17 = ADD32(0, 0XFF);
L_8022AEFC:
    // 0x8022AEFC: jal         0x800A3450
    // 0x8022AF00: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_6;
    // 0x8022AF00: nop

    after_6:
    // 0x8022AF04: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022AF08: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022AF0C: jal         0x8022C1D8
    // 0x8022AF10: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    func_8022C1D8_ovl15(rdram, ctx);
        goto after_7;
    // 0x8022AF10: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    after_7:
    // 0x8022AF14: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022AF18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022AF1C: sh          $v0, 0x1E($s2)
    MEM_H(0X1E, ctx->r18) = ctx->r2;
L_8022AF20:
    // 0x8022AF20: jal         0x800A3450
    // 0x8022AF24: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_8;
    // 0x8022AF24: nop

    after_8:
    // 0x8022AF28: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022AF2C: addu        $v0, $s4, $v0
    ctx->r2 = ADD32(ctx->r20, ctx->r2);
    // 0x8022AF30: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x8022AF34: andi        $v1, $s1, 0xFF
    ctx->r3 = ctx->r17 & 0XFF;
    // 0x8022AF38: sh          $v0, 0x8($s2)
    MEM_H(0X8, ctx->r18) = ctx->r2;
    // 0x8022AF3C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022AF40: beq         $v1, $v0, L_8022AF58
    if (ctx->r3 == ctx->r2) {
        // 0x8022AF44: nop
    
            goto L_8022AF58;
    }
    // 0x8022AF44: nop

    // 0x8022AF48: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022AF4C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022AF50: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x8022AF54: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022AF58:
    // 0x8022AF58: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8022AF5C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8022AF60: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022AF64: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022AF68: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022AF6C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022AF70: jr          $ra
    // 0x8022AF74: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022AF74: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022A504_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A504: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022A508: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A50C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A510: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022A514: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022A518: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x8022A51C: bgez        $v0, L_8022A540
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022A520: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_8022A540;
    }
    // 0x8022A520: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022A524: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022A528: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x8022A52C: beq         $a0, $v0, L_8022A540
    if (ctx->r4 == ctx->r2) {
        // 0x8022A530: nop
    
            goto L_8022A540;
    }
    // 0x8022A530: nop

    // 0x8022A534: jal         0x8022C1C8
    // 0x8022A538: nop

    func_8022C1C8_ovl15(rdram, ctx);
        goto after_0;
    // 0x8022A538: nop

    after_0:
    // 0x8022A53C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022A540:
    // 0x8022A540: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x8022A544: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022A548: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    // 0x8022A54C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A550: bne         $v0, $zero, L_8022A5BC
    if (ctx->r2 != 0) {
        // 0x8022A554: addiu       $v0, $zero, 0x49
        ctx->r2 = ADD32(0, 0X49);
            goto L_8022A5BC;
    }
    // 0x8022A554: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x8022A558: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022A55C: bne         $a0, $v0, L_8022A574
    if (ctx->r4 != ctx->r2) {
        // 0x8022A560: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_8022A574;
    }
    // 0x8022A560: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8022A564: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022A568: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022A56C: j           L_8022A58C
    // 0x8022A570: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8022A58C;
    // 0x8022A570: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022A574:
    // 0x8022A574: jal         0x8022C1D8
    // 0x8022A578: nop

    func_8022C1D8_ovl15(rdram, ctx);
        goto after_1;
    // 0x8022A578: nop

    after_1:
    // 0x8022A57C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022A580: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022A584: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022A588: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_8022A58C:
    // 0x8022A58C: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x8022A590: beq         $v0, $zero, L_8022A5A4
    if (ctx->r2 == 0) {
        // 0x8022A594: nop
    
            goto L_8022A5A4;
    }
    // 0x8022A594: nop

    // 0x8022A598: lhu         $v0, 0xA($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XA);
    // 0x8022A59C: j           L_8022A5B4
    // 0x8022A5A0: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
        goto L_8022A5B4;
    // 0x8022A5A0: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
L_8022A5A4:
    // 0x8022A5A4: lhu         $v0, 0xA($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XA);
    // 0x8022A5A8: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022A5AC: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022A5B0: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
L_8022A5B4:
    // 0x8022A5B4: lhu         $v0, 0x1E($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X1E);
    // 0x8022A5B8: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
L_8022A5BC:
    // 0x8022A5BC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022A5C0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022A5C4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A5C8: jr          $ra
    // 0x8022A5CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022A5CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80228880_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228880: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228884: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80228888: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x8022888C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80228890: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80228894: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80228898: lw          $v0, 0x1DBC($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1DBC);
    // 0x8022889C: jalr        $v0
    // 0x802288A0: addiu       $a1, $a0, 0xD0
    ctx->r5 = ADD32(ctx->r4, 0XD0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802288A0: addiu       $a1, $a0, 0xD0
    ctx->r5 = ADD32(ctx->r4, 0XD0);
    after_0:
    // 0x802288A4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802288A8: jr          $ra
    // 0x802288AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802288AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022BDEC_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BDEC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022BDF0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022BDF4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022BDF8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022BDFC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022BE00: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022BE04: lh          $a0, 0x34C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X34C);
    // 0x8022BE08: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022BE0C: jal         0x8004FA7C
    // 0x8022BE10: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x8022BE10: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    after_0:
    // 0x8022BE14: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8022BE18: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x8022BE1C: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8022BE20: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x8022BE24: beq         $v0, $zero, L_8022BE3C
    if (ctx->r2 == 0) {
        // 0x8022BE28: nop
    
            goto L_8022BE3C;
    }
    // 0x8022BE28: nop

    // 0x8022BE2C: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022BE30: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x8022BE34: beq         $v0, $zero, L_8022BE88
    if (ctx->r2 == 0) {
        // 0x8022BE38: nop
    
            goto L_8022BE88;
    }
    // 0x8022BE38: nop

L_8022BE3C:
    // 0x8022BE3C: jal         0x8003516C
    // 0x8022BE40: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_1;
    // 0x8022BE40: nop

    after_1:
    // 0x8022BE44: bne         $v0, $zero, L_8022BE88
    if (ctx->r2 != 0) {
        // 0x8022BE48: nop
    
            goto L_8022BE88;
    }
    // 0x8022BE48: nop

    // 0x8022BE4C: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x8022BE50: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022BE54: sb          $zero, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = 0;
    // 0x8022BE58: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022BE5C: sb          $zero, 0x49BA($at)
    MEM_B(0X49BA, ctx->r1) = 0;
    // 0x8022BE60: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022BE64: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x8022BE68: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022BE6C: lbu         $v1, 0xD($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XD);
    // 0x8022BE70: lbu         $a0, 0x34A($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X34A);
    // 0x8022BE74: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022BE78: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x8022BE7C: sb          $a0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r4;
    // 0x8022BE80: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    // 0x8022BE84: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
L_8022BE88:
    // 0x8022BE88: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022BE8C: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x8022BE90: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022BE94: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022BE98: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022BE9C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022BEA0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022BEA4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022BEA8: jr          $ra
    // 0x8022BEAC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022BEAC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022589C_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022589C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802258A0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802258A4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802258A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802258AC: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802258B0: bne         $v0, $zero, L_802258D8
    if (ctx->r2 != 0) {
        // 0x802258B4: nop
    
            goto L_802258D8;
    }
    // 0x802258B4: nop

    // 0x802258B8: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802258BC: jal         0x800607C4
    // 0x802258C0: addiu       $a0, $a0, 0x96C
    ctx->r4 = ADD32(ctx->r4, 0X96C);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x802258C0: addiu       $a0, $a0, 0x96C
    ctx->r4 = ADD32(ctx->r4, 0X96C);
    after_0:
    // 0x802258C4: jal         0x80225A4C
    // 0x802258C8: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_80225A4C_ovl15(rdram, ctx);
        goto after_1;
    // 0x802258C8: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_1:
    // 0x802258CC: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802258D0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802258D4: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_802258D8:
    // 0x802258D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802258DC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802258E0: jr          $ra
    // 0x802258E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802258E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802293FC_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802293FC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80229400: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80229404: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229408: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022940C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x80229410: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80229414: addiu       $s4, $sp, 0x10
    ctx->r20 = ADD32(ctx->r29, 0X10);
    // 0x80229418: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x8022941C: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x80229420: addiu       $a1, $a1, 0x2B90
    ctx->r5 = ADD32(ctx->r5, 0X2B90);
    // 0x80229424: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80229428: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8022942C: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80229430: jal         0x8009A3B4
    // 0x80229434: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80229434: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    after_0:
    // 0x80229438: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022943C: addiu       $s3, $s0, 0x14
    ctx->r19 = ADD32(ctx->r16, 0X14);
    // 0x80229440: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x80229444: jal         0x8009A3B4
    // 0x80229448: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80229448: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x8022944C: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80229450: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80229454: jal         0x8009A3B4
    // 0x80229458: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80229458: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x8022945C: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80229460: addiu       $s2, $s0, 0x54
    ctx->r18 = ADD32(ctx->r16, 0X54);
    // 0x80229464: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80229468: jal         0x8009A3B4
    // 0x8022946C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8022946C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x80229470: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80229474: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80229478: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022947C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80229480: lw          $v0, 0x1DE0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1DE0);
    // 0x80229484: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229488: jalr        $v0
    // 0x8022948C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x8022948C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_4:
    // 0x80229490: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80229494: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80229498: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022949C: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x802294A0: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x802294A4: lh          $a0, -0x2400($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X2400);
    // 0x802294A8: lhu         $v1, 0x2($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X2);
    // 0x802294AC: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x802294B0: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x802294B4: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x802294B8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802294BC: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
    // 0x802294C0: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x802294C4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x802294C8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802294CC: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x802294D0: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x802294D4: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x802294D8: lh          $a2, 0x18($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X18);
    // 0x802294DC: addiu       $s1, $s0, 0x8C
    ctx->r17 = ADD32(ctx->r16, 0X8C);
    // 0x802294E0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802294E4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802294E8: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x802294EC: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x802294F0: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x802294F4: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x802294F8: jal         0x80031600
    // 0x802294FC: sw          $a2, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r6;
    func_80031600_CA00(rdram, ctx);
        goto after_5;
    // 0x802294FC: sw          $a2, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r6;
    after_5:
    // 0x80229500: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80229504: jal         0x80031DA8
    // 0x80229508: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_80031DA8_D1A8(rdram, ctx);
        goto after_6;
    // 0x80229508: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_6:
    // 0x8022950C: addiu       $a0, $s0, 0xAC
    ctx->r4 = ADD32(ctx->r16, 0XAC);
    // 0x80229510: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x80229514: jal         0x8009A3B4
    // 0x80229518: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x80229518: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_7:
    // 0x8022951C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229520: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80229524: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x80229528: jal         0x80047284
    // 0x8022952C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_8;
    // 0x8022952C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_8:
    // 0x80229530: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80229534: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80229538: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8022953C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80229540: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80229544: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80229548: jr          $ra
    // 0x8022954C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022954C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8022580C_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022580C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225810: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225814: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225818: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022581C: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225820: bne         $v0, $zero, L_80225848
    if (ctx->r2 != 0) {
        // 0x80225824: nop
    
            goto L_80225848;
    }
    // 0x80225824: nop

    // 0x80225828: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8022582C: jal         0x800607C4
    // 0x80225830: addiu       $a0, $a0, 0x95C
    ctx->r4 = ADD32(ctx->r4, 0X95C);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x80225830: addiu       $a0, $a0, 0x95C
    ctx->r4 = ADD32(ctx->r4, 0X95C);
    after_0:
    // 0x80225834: jal         0x80225A4C
    // 0x80225838: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_80225A4C_ovl15(rdram, ctx);
        goto after_1;
    // 0x80225838: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_1:
    // 0x8022583C: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225840: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225844: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225848:
    // 0x80225848: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022584C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225850: jr          $ra
    // 0x80225854: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225854: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022844C_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022844C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80228450: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80228454: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228458: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8022845C: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x80228460: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80228464: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80228468: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x8022846C: sltiu       $v0, $v1, 0xB
    ctx->r2 = ctx->r3 < 0XB ? 1 : 0;
    // 0x80228470: beq         $v0, $zero, L_80228788
    if (ctx->r2 == 0) {
        // 0x80228474: addu        $s2, $a2, $zero
        ctx->r18 = ADD32(ctx->r6, 0);
            goto L_80228788;
    }
    // 0x80228474: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x80228478: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022847C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80228480: addu        $at, $at, $v0
    gpr jr_addend_80228488 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80228484: lw          $v0, 0x2B60($at)
    ctx->r2 = ADD32(ctx->r1, 0X2B60);
    // 0x80228488: jr          $v0
    // 0x8022848C: nop

    switch (jr_addend_80228488 >> 2) {
        case 0: goto L_80228490; break;
        case 1: goto L_802284E4; break;
        case 2: goto L_80228530; break;
        case 3: goto L_802285EC; break;
        case 4: goto L_80228644; break;
        case 5: goto L_80228694; break;
        case 6: goto L_802286BC; break;
        case 7: goto L_8022871C; break;
        case 8: goto L_80228750; break;
        case 9: goto L_80228768; break;
        case 10: goto L_80228788; break;
        default: switch_error(__func__, 0x80228488, 0x80232B60);
    }
    // 0x8022848C: nop

L_80228490:
    // 0x80228490: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80228494: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228498: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022849C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x802284A0: jal         0x8004D5D4
    // 0x802284A4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x802284A4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x802284A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802284AC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802284B0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802284B4: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x802284B8: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x802284BC: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x802284C0: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x802284C4: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x802284C8: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x802284CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802284D0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802284D4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802284D8: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x802284DC: j           L_80228774
    // 0x802284E0: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
        goto L_80228774;
    // 0x802284E0: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
L_802284E4:
    // 0x802284E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802284E8: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x802284EC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802284F0: jal         0x8004DA90
    // 0x802284F4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x802284F4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x802284F8: lw          $v0, 0x10($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X10);
    // 0x802284FC: slti        $v0, $v0, 0xD
    ctx->r2 = SIGNED(ctx->r2) < 0XD ? 1 : 0;
    // 0x80228500: bne         $v0, $zero, L_80228514
    if (ctx->r2 != 0) {
        // 0x80228504: nop
    
            goto L_80228514;
    }
    // 0x80228504: nop

    // 0x80228508: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022850C: addiu       $v0, $v0, -0x16
    ctx->r2 = ADD32(ctx->r2, -0X16);
    // 0x80228510: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_80228514:
    // 0x80228514: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x80228518: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8022851C: bne         $v1, $v0, L_80228788
    if (ctx->r3 != ctx->r2) {
        // 0x80228520: addiu       $v1, $zero, 0x2
        ctx->r3 = ADD32(0, 0X2);
            goto L_80228788;
    }
    // 0x80228520: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80228524: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80228528: j           L_80228780
    // 0x8022852C: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
        goto L_80228780;
    // 0x8022852C: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
L_80228530:
    // 0x80228530: lbu         $v0, 0xA4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA4);
    // 0x80228534: sltiu       $v0, $v0, 0x11
    ctx->r2 = ctx->r2 < 0X11 ? 1 : 0;
    // 0x80228538: beq         $v0, $zero, L_802285A4
    if (ctx->r2 == 0) {
        // 0x8022853C: addiu       $a0, $sp, 0x18
        ctx->r4 = ADD32(ctx->r29, 0X18);
            goto L_802285A4;
    }
    // 0x8022853C: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x80228540: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80228544: addiu       $a2, $zero, 0x2E
    ctx->r6 = ADD32(0, 0X2E);
    // 0x80228548: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022854C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80228550: jal         0x8004DC2C
    // 0x80228554: addiu       $a1, $a1, -0x1B8
    ctx->r5 = ADD32(ctx->r5, -0X1B8);
    func_8004DC2C_2902C(rdram, ctx);
        goto after_2;
    // 0x80228554: addiu       $a1, $a1, -0x1B8
    ctx->r5 = ADD32(ctx->r5, -0X1B8);
    after_2:
    // 0x80228558: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x8022855C: jal         0x8004DD04
    // 0x80228560: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_8004DD04_29104(rdram, ctx);
        goto after_3;
    // 0x80228560: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_3:
    // 0x80228564: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x80228568: lhu         $v1, 0x28($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X28);
    // 0x8022856C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80228570: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x80228574: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x80228578: lhu         $v1, 0x2C($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X2C);
    // 0x8022857C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80228580: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x80228584: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x80228588: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x8022858C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80228590: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80228594: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x80228598: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x8022859C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802285A0: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
L_802285A4:
    // 0x802285A4: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x802285A8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802285AC: bne         $v1, $v0, L_80228788
    if (ctx->r3 != ctx->r2) {
        // 0x802285B0: addiu       $v0, $zero, 0x69
        ctx->r2 = ADD32(0, 0X69);
            goto L_80228788;
    }
    // 0x802285B0: addiu       $v0, $zero, 0x69
    ctx->r2 = ADD32(0, 0X69);
    // 0x802285B4: lw          $a1, 0x10($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X10);
    // 0x802285B8: bne         $a1, $v0, L_802285D8
    if (ctx->r5 != ctx->r2) {
        // 0x802285BC: addiu       $v0, $zero, 0xB4
        ctx->r2 = ADD32(0, 0XB4);
            goto L_802285D8;
    }
    // 0x802285BC: addiu       $v0, $zero, 0xB4
    ctx->r2 = ADD32(0, 0XB4);
    // 0x802285C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802285C4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802285C8: jal         0x802287A0
    // 0x802285CC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_802287A0_ovl15(rdram, ctx);
        goto after_4;
    // 0x802285CC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x802285D0: j           L_80228788
    // 0x802285D4: nop

        goto L_80228788;
    // 0x802285D4: nop

L_802285D8:
    // 0x802285D8: bne         $a1, $v0, L_80228788
    if (ctx->r5 != ctx->r2) {
        // 0x802285DC: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_80228788;
    }
    // 0x802285DC: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x802285E0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802285E4: j           L_80228780
    // 0x802285E8: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
        goto L_80228780;
    // 0x802285E8: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
L_802285EC:
    // 0x802285EC: lbu         $v1, 0xA4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA4);
    // 0x802285F0: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
    // 0x802285F4: bne         $v1, $v0, L_8022860C
    if (ctx->r3 != ctx->r2) {
        // 0x802285F8: addiu       $v0, $zero, 0x1A
        ctx->r2 = ADD32(0, 0X1A);
            goto L_8022860C;
    }
    // 0x802285F8: addiu       $v0, $zero, 0x1A
    ctx->r2 = ADD32(0, 0X1A);
    // 0x802285FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228600: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80228604: j           L_8022861C
    // 0x80228608: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
        goto L_8022861C;
    // 0x80228608: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
L_8022860C:
    // 0x8022860C: bne         $v1, $v0, L_80228624
    if (ctx->r3 != ctx->r2) {
        // 0x80228610: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80228624;
    }
    // 0x80228610: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228614: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80228618: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
L_8022861C:
    // 0x8022861C: jal         0x802287A0
    // 0x80228620: nop

    func_802287A0_ovl15(rdram, ctx);
        goto after_5;
    // 0x80228620: nop

    after_5:
L_80228624:
    // 0x80228624: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x80228628: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x8022862C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80228630: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x80228634: beq         $v0, $v1, L_8022877C
    if (ctx->r2 == ctx->r3) {
        // 0x80228638: nop
    
            goto L_8022877C;
    }
    // 0x80228638: nop

    // 0x8022863C: j           L_80228788
    // 0x80228640: nop

        goto L_80228788;
    // 0x80228640: nop

L_80228644:
    // 0x80228644: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x80228648: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022864C: bne         $v1, $v0, L_80228788
    if (ctx->r3 != ctx->r2) {
        // 0x80228650: addiu       $v0, $zero, 0xB4
        ctx->r2 = ADD32(0, 0XB4);
            goto L_80228788;
    }
    // 0x80228650: addiu       $v0, $zero, 0xB4
    ctx->r2 = ADD32(0, 0XB4);
    // 0x80228654: lw          $a1, 0x10($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X10);
    // 0x80228658: beq         $a1, $v0, L_802286F4
    if (ctx->r5 == ctx->r2) {
        // 0x8022865C: slti        $v0, $a1, 0xB5
        ctx->r2 = SIGNED(ctx->r5) < 0XB5 ? 1 : 0;
            goto L_802286F4;
    }
    // 0x8022865C: slti        $v0, $a1, 0xB5
    ctx->r2 = SIGNED(ctx->r5) < 0XB5 ? 1 : 0;
    // 0x80228660: beq         $v0, $zero, L_80228678
    if (ctx->r2 == 0) {
        // 0x80228664: addiu       $v0, $zero, 0x78
        ctx->r2 = ADD32(0, 0X78);
            goto L_80228678;
    }
    // 0x80228664: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x80228668: beq         $a1, $v0, L_802286F8
    if (ctx->r5 == ctx->r2) {
        // 0x8022866C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802286F8;
    }
    // 0x8022866C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228670: j           L_80228788
    // 0x80228674: nop

        goto L_80228788;
    // 0x80228674: nop

L_80228678:
    // 0x80228678: addiu       $v0, $zero, 0x10E
    ctx->r2 = ADD32(0, 0X10E);
    // 0x8022867C: beq         $a1, $v0, L_802286F4
    if (ctx->r5 == ctx->r2) {
        // 0x80228680: addiu       $v0, $zero, 0x118
        ctx->r2 = ADD32(0, 0X118);
            goto L_802286F4;
    }
    // 0x80228680: addiu       $v0, $zero, 0x118
    ctx->r2 = ADD32(0, 0X118);
    // 0x80228684: beq         $a1, $v0, L_8022877C
    if (ctx->r5 == ctx->r2) {
        // 0x80228688: nop
    
            goto L_8022877C;
    }
    // 0x80228688: nop

    // 0x8022868C: j           L_80228788
    // 0x80228690: nop

        goto L_80228788;
    // 0x80228690: nop

L_80228694:
    // 0x80228694: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x80228698: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022869C: bne         $v1, $v0, L_80228788
    if (ctx->r3 != ctx->r2) {
        // 0x802286A0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80228788;
    }
    // 0x802286A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802286A4: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x802286A8: bne         $v1, $v0, L_80228788
    if (ctx->r3 != ctx->r2) {
        // 0x802286AC: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_80228788;
    }
    // 0x802286AC: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x802286B0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802286B4: j           L_8022877C
    // 0x802286B8: sh          $zero, 0x2($s2)
    MEM_H(0X2, ctx->r18) = 0;
        goto L_8022877C;
    // 0x802286B8: sh          $zero, 0x2($s2)
    MEM_H(0X2, ctx->r18) = 0;
L_802286BC:
    // 0x802286BC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802286C0: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x802286C4: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x802286C8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802286CC: bne         $v1, $v0, L_80228788
    if (ctx->r3 != ctx->r2) {
        // 0x802286D0: nop
    
            goto L_80228788;
    }
    // 0x802286D0: nop

    // 0x802286D4: lw          $a1, 0x10($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X10);
    // 0x802286D8: xori        $v1, $a1, 0x23
    ctx->r3 = ctx->r5 ^ 0X23;
    // 0x802286DC: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x802286E0: xori        $v0, $a1, 0x46
    ctx->r2 = ctx->r5 ^ 0X46;
    // 0x802286E4: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x802286E8: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x802286EC: beq         $v1, $zero, L_8022870C
    if (ctx->r3 == 0) {
        // 0x802286F0: addiu       $v0, $zero, 0x96
        ctx->r2 = ADD32(0, 0X96);
            goto L_8022870C;
    }
    // 0x802286F0: addiu       $v0, $zero, 0x96
    ctx->r2 = ADD32(0, 0X96);
L_802286F4:
    // 0x802286F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_802286F8:
    // 0x802286F8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802286FC: jal         0x802287A0
    // 0x80228700: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_802287A0_ovl15(rdram, ctx);
        goto after_6;
    // 0x80228700: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_6:
    // 0x80228704: j           L_80228788
    // 0x80228708: nop

        goto L_80228788;
    // 0x80228708: nop

L_8022870C:
    // 0x8022870C: beq         $a1, $v0, L_8022877C
    if (ctx->r5 == ctx->r2) {
        // 0x80228710: nop
    
            goto L_8022877C;
    }
    // 0x80228710: nop

    // 0x80228714: j           L_80228788
    // 0x80228718: nop

        goto L_80228788;
    // 0x80228718: nop

L_8022871C:
    // 0x8022871C: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x80228720: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80228724: bne         $v1, $v0, L_80228788
    if (ctx->r3 != ctx->r2) {
        // 0x80228728: addiu       $v0, $zero, 0xE6
        ctx->r2 = ADD32(0, 0XE6);
            goto L_80228788;
    }
    // 0x80228728: addiu       $v0, $zero, 0xE6
    ctx->r2 = ADD32(0, 0XE6);
    // 0x8022872C: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x80228730: bne         $v1, $v0, L_80228788
    if (ctx->r3 != ctx->r2) {
        // 0x80228734: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80228788;
    }
    // 0x80228734: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228738: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022873C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x80228740: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80228744: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80228748: j           L_80228774
    // 0x8022874C: sh          $zero, 0x2($a1)
    MEM_H(0X2, ctx->r5) = 0;
        goto L_80228774;
    // 0x8022874C: sh          $zero, 0x2($a1)
    MEM_H(0X2, ctx->r5) = 0;
L_80228750:
    // 0x80228750: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x80228754: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80228758: beq         $v1, $v0, L_8022877C
    if (ctx->r3 == ctx->r2) {
        // 0x8022875C: nop
    
            goto L_8022877C;
    }
    // 0x8022875C: nop

    // 0x80228760: j           L_80228788
    // 0x80228764: nop

        goto L_80228788;
    // 0x80228764: nop

L_80228768:
    // 0x80228768: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022876C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80228770: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
L_80228774:
    // 0x80228774: jal         0x802287A0
    // 0x80228778: nop

    func_802287A0_ovl15(rdram, ctx);
        goto after_7;
    // 0x80228778: nop

    after_7:
L_8022877C:
    // 0x8022877C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
L_80228780:
    // 0x80228780: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228784: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80228788:
    // 0x80228788: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8022878C: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x80228790: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80228794: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80228798: jr          $ra
    // 0x8022879C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8022879C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8022EA84_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EA84: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022EA88: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022EA8C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022EA90: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022EA94: jal         0x8004F2C4
    // 0x8022EA98: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8004F2C4_2A6C4(rdram, ctx);
        goto after_0;
    // 0x8022EA98: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x8022EA9C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022EAA0: beq         $s0, $zero, L_8022EB24
    if (ctx->r16 == 0) {
        // 0x8022EAA4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022EB24;
    }
    // 0x8022EAA4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022EAA8: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x8022EAAC: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x8022EAB0: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x8022EAB4: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    // 0x8022EAB8: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x8022EABC: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    // 0x8022EAC0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022EAC4: jal         0x8009A3B4
    // 0x8022EAC8: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022EAC8: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022EACC: lhu         $v0, 0x3A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3A);
    // 0x8022EAD0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022EAD4: addiu       $a1, $a0, 0x3
    ctx->r5 = ADD32(ctx->r4, 0X3);
    // 0x8022EAD8: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    // 0x8022EADC: sb          $zero, 0xB($a0)
    MEM_B(0XB, ctx->r4) = 0;
    // 0x8022EAE0: sw          $s1, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->r17;
    // 0x8022EAE4: addiu       $v0, $v0, -0x50
    ctx->r2 = ADD32(ctx->r2, -0X50);
    // 0x8022EAE8: jal         0x8004D5D4
    // 0x8022EAEC: sh          $v0, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_2;
    // 0x8022EAEC: sh          $v0, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r2;
    after_2:
    // 0x8022EAF0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022EAF4: addiu       $a1, $s1, 0x3
    ctx->r5 = ADD32(ctx->r17, 0X3);
    // 0x8022EAF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022EAFC: jal         0x8004D5D4
    // 0x8022EB00: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_3;
    // 0x8022EB00: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    after_3:
    // 0x8022EB04: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x8022EB08: jal         0x8002C654
    // 0x8022EB0C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_4;
    // 0x8022EB0C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8022EB10: lb          $a0, 0xF($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XF);
    // 0x8022EB14: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022EB18: jal         0x800319B4
    // 0x8022EB1C: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    func_800319B4_CDB4(rdram, ctx);
        goto after_5;
    // 0x8022EB1C: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    after_5:
    // 0x8022EB20: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
L_8022EB24:
    // 0x8022EB24: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022EB28: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022EB2C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022EB30: jr          $ra
    // 0x8022EB34: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022EB34: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802267B8_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802267B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802267BC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802267C0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802267C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802267C8: lbu         $v1, 0x5($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X5);
    // 0x802267CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802267D0: beq         $v1, $v0, L_80226838
    if (ctx->r3 == ctx->r2) {
        // 0x802267D4: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80226838;
    }
    // 0x802267D4: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x802267D8: beql        $v0, $zero, L_802267F0
    if (ctx->r2 == 0) {
        // 0x802267DC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802267F0;
    }
    goto skip_0;
    // 0x802267DC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x802267E0: beq         $v1, $zero, L_80226800
    if (ctx->r3 == 0) {
        // 0x802267E4: addiu       $a0, $zero, 0x56
        ctx->r4 = ADD32(0, 0X56);
            goto L_80226800;
    }
    // 0x802267E4: addiu       $a0, $zero, 0x56
    ctx->r4 = ADD32(0, 0X56);
    // 0x802267E8: j           L_80226908
    // 0x802267EC: nop

        goto L_80226908;
    // 0x802267EC: nop

L_802267F0:
    // 0x802267F0: beq         $v1, $v0, L_80226884
    if (ctx->r3 == ctx->r2) {
        // 0x802267F4: addiu       $v1, $zero, 0x2
        ctx->r3 = ADD32(0, 0X2);
            goto L_80226884;
    }
    // 0x802267F4: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x802267F8: j           L_80226908
    // 0x802267FC: nop

        goto L_80226908;
    // 0x802267FC: nop

L_80226800:
    // 0x80226800: jal         0x8004CB2C
    // 0x80226804: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_0;
    // 0x80226804: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_0:
    // 0x80226808: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022680C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80226810: jal         0x80036B00
    // 0x80226814: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80036B00_11F00(rdram, ctx);
        goto after_1;
    // 0x80226814: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x80226818: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022681C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80226820: beq         $v0, $zero, L_80226874
    if (ctx->r2 == 0) {
        // 0x80226824: nop
    
            goto L_80226874;
    }
    // 0x80226824: nop

    // 0x80226828: jal         0x80054578
    // 0x8022682C: nop

    func_80054578_2F978(rdram, ctx);
        goto after_2;
    // 0x8022682C: nop

    after_2:
    // 0x80226830: j           L_80226874
    // 0x80226834: nop

        goto L_80226874;
    // 0x80226834: nop

L_80226838:
    // 0x80226838: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8022683C: lbu         $v0, -0x7388($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7388);
    // 0x80226840: bne         $v0, $zero, L_80226908
    if (ctx->r2 != 0) {
        // 0x80226844: nop
    
            goto L_80226908;
    }
    // 0x80226844: nop

    // 0x80226848: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022684C: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80226850: bne         $v0, $zero, L_80226908
    if (ctx->r2 != 0) {
        // 0x80226854: nop
    
            goto L_80226908;
    }
    // 0x80226854: nop

    // 0x80226858: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022685C: jal         0x80070050
    // 0x80226860: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_80070050_4B450(rdram, ctx);
        goto after_3;
    // 0x80226860: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_3:
    // 0x80226864: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226868: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022686C: jal         0x80034844
    // 0x80226870: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    func_80034844_FC44(rdram, ctx);
        goto after_4;
    // 0x80226870: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    after_4:
L_80226874:
    // 0x80226874: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x80226878: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022687C: j           L_80226908
    // 0x80226880: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
        goto L_80226908;
    // 0x80226880: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_80226884:
    // 0x80226884: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80226888: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x8022688C: lbu         $a0, 0x0($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X0);
    // 0x80226890: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x80226894: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226898: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x8022689C: addiu       $v0, $zero, 0x3200
    ctx->r2 = ADD32(0, 0X3200);
    // 0x802268A0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802268A4: sh          $v0, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = ctx->r2;
    // 0x802268A8: addiu       $v0, $zero, -0x262
    ctx->r2 = ADD32(0, -0X262);
    // 0x802268AC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802268B0: sh          $v0, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = ctx->r2;
    // 0x802268B4: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x802268B8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802268BC: sh          $v0, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = ctx->r2;
    // 0x802268C0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802268C4: sh          $v0, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = ctx->r2;
    // 0x802268C8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802268CC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802268D0: sb          $v1, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r3;
    // 0x802268D4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802268D8: sb          $v1, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r3;
    // 0x802268DC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802268E0: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x802268E4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802268E8: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x802268EC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802268F0: sb          $v1, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r3;
    // 0x802268F4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802268F8: sb          $zero, 0x4A26($at)
    MEM_B(0X4A26, ctx->r1) = 0;
    // 0x802268FC: andi        $a0, $a0, 0xFC
    ctx->r4 = ctx->r4 & 0XFC;
    // 0x80226900: sb          $a0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r4;
    // 0x80226904: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
L_80226908:
    // 0x80226908: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022690C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226910: jr          $ra
    // 0x80226914: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226914: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802274DC_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802274DC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802274E0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802274E4: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x802274E8: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x802274EC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x802274F0: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x802274F4: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x802274F8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802274FC: addu        $v1, $v0, $v1
    ctx->r3 = ADD32(ctx->r2, ctx->r3);
    // 0x80227500: lb          $a0, 0x1($v1)
    ctx->r4 = MEM_B(ctx->r3, 0X1);
    // 0x80227504: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80227508: addiu       $v0, $zero, 0x7E
    ctx->r2 = ADD32(0, 0X7E);
    // 0x8022750C: beq         $a0, $v0, L_80227528
    if (ctx->r4 == ctx->r2) {
        // 0x80227510: addiu       $v0, $zero, 0x7F
        ctx->r2 = ADD32(0, 0X7F);
            goto L_80227528;
    }
    // 0x80227510: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x80227514: bne         $a0, $v0, L_80227524
    if (ctx->r4 != ctx->r2) {
        // 0x80227518: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_80227524;
    }
    // 0x80227518: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022751C: j           L_80227528
    // 0x80227520: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
        goto L_80227528;
    // 0x80227520: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
L_80227524:
    // 0x80227524: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
L_80227528:
    // 0x80227528: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x8022752C: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x80227530: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80227534: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80227538: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x8022753C: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x80227540: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80227544: sra         $a0, $v0, 24
    ctx->r4 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80227548: beq         $a0, $v1, L_80227570
    if (ctx->r4 == ctx->r3) {
        // 0x8022754C: addiu       $a1, $zero, 0x2A
        ctx->r5 = ADD32(0, 0X2A);
            goto L_80227570;
    }
    // 0x8022754C: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x80227550: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    // 0x80227554: jal         0x8003B85C
    // 0x80227558: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_0;
    // 0x80227558: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_0:
    // 0x8022755C: lw          $a0, 0x88($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X88);
    // 0x80227560: lui         $a1, 0x11
    ctx->r5 = S32(0X11 << 16);
    // 0x80227564: ori         $a1, $a1, 0x10
    ctx->r5 = ctx->r5 | 0X10;
    // 0x80227568: jal         0x8003B840
    // 0x8022756C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_1;
    // 0x8022756C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_1:
L_80227570:
    // 0x80227570: lb          $a0, 0x11($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X11);
    // 0x80227574: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x80227578: lbu         $v1, 0xC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XC);
    // 0x8022757C: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x80227580: sb          $v1, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r3;
    // 0x80227584: lb          $v1, 0x1($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X1);
    // 0x80227588: addiu       $v0, $zero, 0x7E
    ctx->r2 = ADD32(0, 0X7E);
    // 0x8022758C: beq         $v1, $v0, L_802275A8
    if (ctx->r3 == ctx->r2) {
        // 0x80227590: addiu       $v0, $zero, 0x7F
        ctx->r2 = ADD32(0, 0X7F);
            goto L_802275A8;
    }
    // 0x80227590: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x80227594: bne         $v1, $v0, L_802275A4
    if (ctx->r3 != ctx->r2) {
        // 0x80227598: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_802275A4;
    }
    // 0x80227598: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8022759C: j           L_802275A8
    // 0x802275A0: sb          $zero, 0x11($s0)
    MEM_B(0X11, ctx->r16) = 0;
        goto L_802275A8;
    // 0x802275A0: sb          $zero, 0x11($s0)
    MEM_B(0X11, ctx->r16) = 0;
L_802275A4:
    // 0x802275A4: sb          $v0, 0x11($s0)
    MEM_B(0X11, ctx->r16) = ctx->r2;
L_802275A8:
    // 0x802275A8: lb          $v1, 0x11($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X11);
    // 0x802275AC: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x802275B0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802275B4: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x802275B8: lb          $v1, 0x10($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X10);
    // 0x802275BC: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    // 0x802275C0: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x802275C4: sra         $a0, $v0, 24
    ctx->r4 = S32(SIGNED(ctx->r2) >> 24);
    // 0x802275C8: beq         $a0, $v1, L_802275F0
    if (ctx->r4 == ctx->r3) {
        // 0x802275CC: addiu       $a1, $zero, 0x2A
        ctx->r5 = ADD32(0, 0X2A);
            goto L_802275F0;
    }
    // 0x802275CC: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x802275D0: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    // 0x802275D4: jal         0x8003B85C
    // 0x802275D8: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_2;
    // 0x802275D8: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_2:
    // 0x802275DC: lw          $a0, 0x88($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X88);
    // 0x802275E0: lui         $a1, 0x13
    ctx->r5 = S32(0X13 << 16);
    // 0x802275E4: ori         $a1, $a1, 0x12
    ctx->r5 = ctx->r5 | 0X12;
    // 0x802275E8: jal         0x8003B840
    // 0x802275EC: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_3;
    // 0x802275EC: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_3:
L_802275F0:
    // 0x802275F0: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x802275F4: sb          $v0, 0x10($s0)
    MEM_B(0X10, ctx->r16) = ctx->r2;
    // 0x802275F8: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x802275FC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80227600: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80227604: jr          $ra
    // 0x80227608: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80227608: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8022760C: nop

;}
RECOMP_FUNC void func_802262B8_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802262B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802262BC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802262C0: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x802262C4: bne         $v0, $zero, L_802262DC
    if (ctx->r2 != 0) {
        // 0x802262C8: nop
    
            goto L_802262DC;
    }
    // 0x802262C8: nop

    // 0x802262CC: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x802262D0: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x802262D4: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x802262D8: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
L_802262DC:
    // 0x802262DC: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x802262E0: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x802262E4: bne         $v1, $v0, L_802262F4
    if (ctx->r3 != ctx->r2) {
        // 0x802262E8: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_802262F4;
    }
    // 0x802262E8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x802262EC: jal         0x80226300
    // 0x802262F0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_80226300_ovl15(rdram, ctx);
        goto after_0;
    // 0x802262F0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
L_802262F4:
    // 0x802262F4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802262F8: jr          $ra
    // 0x802262FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802262FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022C514_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C514: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022C518: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022C51C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C520: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x8022C524: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x8022C528: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8022C52C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022C530: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8022C534: lui         $s3, 0x8020
    ctx->r19 = S32(0X8020 << 16);
    // 0x8022C538: addiu       $s3, $s3, 0x49B0
    ctx->r19 = ADD32(ctx->r19, 0X49B0);
    // 0x8022C53C: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x8022C540: beq         $v0, $zero, L_8022C8C8
    if (ctx->r2 == 0) {
        // 0x8022C544: addu        $s1, $a1, $zero
        ctx->r17 = ADD32(ctx->r5, 0);
            goto L_8022C8C8;
    }
    // 0x8022C544: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x8022C548: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022C54C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022C550: addu        $at, $at, $v0
    gpr jr_addend_8022C558 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022C554: lw          $v0, 0x2BC8($at)
    ctx->r2 = ADD32(ctx->r1, 0X2BC8);
    // 0x8022C558: jr          $v0
    // 0x8022C55C: nop

    switch (jr_addend_8022C558 >> 2) {
        case 0: goto L_8022C560; break;
        case 1: goto L_8022C634; break;
        case 2: goto L_8022C694; break;
        case 3: goto L_8022C770; break;
        case 4: goto L_8022C790; break;
        case 5: goto L_8022C7C8; break;
        default: switch_error(__func__, 0x8022C558, 0x80232BC8);
    }
    // 0x8022C55C: nop

L_8022C560:
    // 0x8022C560: lw          $v0, 0x184($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X184);
    // 0x8022C564: bne         $v0, $s0, L_8022C8C8
    if (ctx->r2 != ctx->r16) {
        // 0x8022C568: addiu       $s1, $s0, 0x14
        ctx->r17 = ADD32(ctx->r16, 0X14);
            goto L_8022C8C8;
    }
    // 0x8022C568: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x8022C56C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022C570: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022C574: addiu       $s2, $s3, 0x14
    ctx->r18 = ADD32(ctx->r19, 0X14);
    // 0x8022C578: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022C57C: jal         0x8004F820
    // 0x8022C580: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022C580: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_0:
    // 0x8022C584: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C588: bgez        $v0, L_8022C5B4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022C58C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022C5B4;
    }
    // 0x8022C58C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022C590: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022C594: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022C598: jal         0x8004F820
    // 0x8022C59C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x8022C59C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_1:
    // 0x8022C5A0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C5A4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022C5A8: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8022C5AC: j           L_8022C5CC
    // 0x8022C5B0: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_8022C5CC;
    // 0x8022C5B0: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_8022C5B4:
    // 0x8022C5B4: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022C5B8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022C5BC: jal         0x8004F820
    // 0x8022C5C0: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x8022C5C0: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x8022C5C4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C5C8: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_8022C5CC:
    // 0x8022C5CC: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x8022C5D0: lbu         $v0, 0x0($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X0);
    // 0x8022C5D4: lbu         $v1, 0xBD($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0XBD);
    // 0x8022C5D8: sw          $zero, 0x184($s3)
    MEM_W(0X184, ctx->r19) = 0;
    // 0x8022C5DC: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8022C5E0: ori         $v1, $v1, 0x80
    ctx->r3 = ctx->r3 | 0X80;
    // 0x8022C5E4: sb          $v0, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r2;
    // 0x8022C5E8: sb          $v1, 0xBD($s3)
    MEM_B(0XBD, ctx->r19) = ctx->r3;
    // 0x8022C5EC: lh          $v0, 0x180($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X180);
    // 0x8022C5F0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022C5F4: lh          $v0, 0x182($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X182);
    // 0x8022C5F8: addiu       $v0, $v0, -0x20
    ctx->r2 = ADD32(ctx->r2, -0X20);
    // 0x8022C5FC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022C600: lh          $v0, 0x184($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X184);
    // 0x8022C604: addiu       $a0, $s3, 0x14
    ctx->r4 = ADD32(ctx->r19, 0X14);
    // 0x8022C608: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022C60C: jal         0x8004EC38
    // 0x8022C610: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_8004EC38_2A038(rdram, ctx);
        goto after_3;
    // 0x8022C610: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_3:
    // 0x8022C614: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8022C618: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x8022C61C: lw          $a3, 0x435C($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X435C);
    // 0x8022C620: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x8022C624: jal         0x80034FCC
    // 0x8022C628: addiu       $a2, $v0, 0x800
    ctx->r6 = ADD32(ctx->r2, 0X800);
    func_80034FCC_103CC(rdram, ctx);
        goto after_4;
    // 0x8022C628: addiu       $a2, $v0, 0x800
    ctx->r6 = ADD32(ctx->r2, 0X800);
    after_4:
    // 0x8022C62C: j           L_8022C7B8
    // 0x8022C630: nop

        goto L_8022C7B8;
    // 0x8022C630: nop

L_8022C634:
    // 0x8022C634: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022C638: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x8022C63C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022C640: jal         0x8004F820
    // 0x8022C644: addiu       $a1, $s3, 0x14
    ctx->r5 = ADD32(ctx->r19, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_5;
    // 0x8022C644: addiu       $a1, $s3, 0x14
    ctx->r5 = ADD32(ctx->r19, 0X14);
    after_5:
    // 0x8022C648: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022C64C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022C650: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022C654: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C658: bne         $v0, $zero, L_8022C8C8
    if (ctx->r2 != 0) {
        // 0x8022C65C: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8022C8C8;
    }
    // 0x8022C65C: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022C660: jal         0x8003516C
    // 0x8022C664: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_6;
    // 0x8022C664: nop

    after_6:
    // 0x8022C668: bne         $v0, $zero, L_8022C8C8
    if (ctx->r2 != 0) {
        // 0x8022C66C: lui         $v0, 0x7FFF
        ctx->r2 = S32(0X7FFF << 16);
            goto L_8022C8C8;
    }
    // 0x8022C66C: lui         $v0, 0x7FFF
    ctx->r2 = S32(0X7FFF << 16);
    // 0x8022C670: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x8022C674: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8022C678: beq         $a1, $v0, L_8022C7B8
    if (ctx->r5 == ctx->r2) {
        // 0x8022C67C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8022C7B8;
    }
    // 0x8022C67C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022C680: jal         0x800616FC
    // 0x8022C684: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    func_800616FC_3CAFC(rdram, ctx);
        goto after_7;
    // 0x8022C684: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    after_7:
    // 0x8022C688: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022C68C: j           L_8022C7B8
    // 0x8022C690: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_8022C7B8;
    // 0x8022C690: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022C694:
    // 0x8022C694: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x8022C698: lui         $a2, 0x7FFF
    ctx->r6 = S32(0X7FFF << 16);
    // 0x8022C69C: ori         $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 | 0XFFFF;
    // 0x8022C6A0: beq         $a1, $a2, L_8022C70C
    if (ctx->r5 == ctx->r6) {
        // 0x8022C6A4: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_8022C70C;
    }
    // 0x8022C6A4: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022C6A8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022C6AC: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022C6B0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022C6B4: bne         $v0, $zero, L_8022C8C8
    if (ctx->r2 != 0) {
        // 0x8022C6B8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022C8C8;
    }
    // 0x8022C6B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C6BC: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x8022C6C0: beq         $v1, $v0, L_8022C748
    if (ctx->r3 == ctx->r2) {
        // 0x8022C6C4: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8022C748;
    }
    // 0x8022C6C4: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022C6C8: beq         $v0, $zero, L_8022C6E0
    if (ctx->r2 == 0) {
        // 0x8022C6CC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022C6E0;
    }
    // 0x8022C6CC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8022C6D0:
    // 0x8022C6D0: beq         $v1, $zero, L_8022C75C
    if (ctx->r3 == 0) {
        // 0x8022C6D4: nop
    
            goto L_8022C75C;
    }
    // 0x8022C6D4: nop

    // 0x8022C6D8: j           L_8022C8C8
    // 0x8022C6DC: nop

        goto L_8022C8C8;
    // 0x8022C6DC: nop

L_8022C6E0:
    // 0x8022C6E0: bne         $v1, $v0, L_8022C8C8
    if (ctx->r3 != ctx->r2) {
        // 0x8022C6E4: nop
    
            goto L_8022C8C8;
    }
    // 0x8022C6E4: nop

    // 0x8022C6E8: lw          $a0, 0x8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X8);
    // 0x8022C6EC: beq         $a0, $a2, L_8022C75C
    if (ctx->r4 == ctx->r6) {
        // 0x8022C6F0: nop
    
            goto L_8022C75C;
    }
    // 0x8022C6F0: nop

    // 0x8022C6F4: jal         0x8006033C
    // 0x8022C6F8: nop

    func_8006033C_3B73C(rdram, ctx);
        goto after_8;
    // 0x8022C6F8: nop

    after_8:
    // 0x8022C6FC: bne         $v0, $zero, L_8022C748
    if (ctx->r2 != 0) {
        // 0x8022C700: nop
    
            goto L_8022C748;
    }
    // 0x8022C700: nop

    // 0x8022C704: j           L_8022C75C
    // 0x8022C708: sw          $zero, 0xC($s1)
    MEM_W(0XC, ctx->r17) = 0;
        goto L_8022C75C;
    // 0x8022C708: sw          $zero, 0xC($s1)
    MEM_W(0XC, ctx->r17) = 0;
L_8022C70C:
    // 0x8022C70C: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x8022C710: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C714: beq         $v1, $v0, L_8022C748
    if (ctx->r3 == ctx->r2) {
        // 0x8022C718: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8022C748;
    }
    // 0x8022C718: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022C71C: bne         $v0, $zero, L_8022C6D0
    if (ctx->r2 != 0) {
        // 0x8022C720: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022C6D0;
    }
    // 0x8022C720: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022C724: bne         $v1, $v0, L_8022C8C8
    if (ctx->r3 != ctx->r2) {
        // 0x8022C728: nop
    
            goto L_8022C8C8;
    }
    // 0x8022C728: nop

    // 0x8022C72C: lw          $a0, 0x8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X8);
    // 0x8022C730: beq         $a0, $a1, L_8022C75C
    if (ctx->r4 == ctx->r5) {
        // 0x8022C734: nop
    
            goto L_8022C75C;
    }
    // 0x8022C734: nop

    // 0x8022C738: jal         0x8006033C
    // 0x8022C73C: nop

    func_8006033C_3B73C(rdram, ctx);
        goto after_9;
    // 0x8022C73C: nop

    after_9:
    // 0x8022C740: beql        $v0, $zero, L_8022C75C
    if (ctx->r2 == 0) {
        // 0x8022C744: sw          $zero, 0xC($s1)
        MEM_W(0XC, ctx->r17) = 0;
            goto L_8022C75C;
    }
    goto skip_0;
    // 0x8022C744: sw          $zero, 0xC($s1)
    MEM_W(0XC, ctx->r17) = 0;
    skip_0:
L_8022C748:
    // 0x8022C748: jal         0x80036E48
    // 0x8022C74C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80036E48_12248(rdram, ctx);
        goto after_10;
    // 0x8022C74C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_10:
    // 0x8022C750: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022C754: j           L_8022C8C8
    // 0x8022C758: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022C8C8;
    // 0x8022C758: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022C75C:
    // 0x8022C75C: jal         0x80034E3C
    // 0x8022C760: nop

    func_80034E3C_1023C(rdram, ctx);
        goto after_11;
    // 0x8022C760: nop

    after_11:
    // 0x8022C764: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022C768: j           L_8022C8C8
    // 0x8022C76C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022C8C8;
    // 0x8022C76C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022C770:
    // 0x8022C770: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022C774: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8022C778: bne         $v0, $zero, L_8022C8C8
    if (ctx->r2 != 0) {
        // 0x8022C77C: nop
    
            goto L_8022C8C8;
    }
    // 0x8022C77C: nop

    // 0x8022C780: jal         0x80034E3C
    // 0x8022C784: nop

    func_80034E3C_1023C(rdram, ctx);
        goto after_12;
    // 0x8022C784: nop

    after_12:
    // 0x8022C788: j           L_8022C7B8
    // 0x8022C78C: nop

        goto L_8022C7B8;
    // 0x8022C78C: nop

L_8022C790:
    // 0x8022C790: jal         0x8003516C
    // 0x8022C794: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_13;
    // 0x8022C794: nop

    after_13:
    // 0x8022C798: bne         $v0, $zero, L_8022C8C8
    if (ctx->r2 != 0) {
        // 0x8022C79C: nop
    
            goto L_8022C8C8;
    }
    // 0x8022C79C: nop

    // 0x8022C7A0: lbu         $v0, 0xBD($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0XBD);
    // 0x8022C7A4: lbu         $v1, 0x0($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X0);
    // 0x8022C7A8: andi        $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 & 0X7F;
    // 0x8022C7AC: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022C7B0: sb          $v0, 0xBD($s3)
    MEM_B(0XBD, ctx->r19) = ctx->r2;
    // 0x8022C7B4: sb          $v1, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r3;
L_8022C7B8:
    // 0x8022C7B8: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022C7BC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022C7C0: j           L_8022C8C8
    // 0x8022C7C4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022C8C8;
    // 0x8022C7C4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022C7C8:
    // 0x8022C7C8: lw          $v1, 0x4($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4);
    // 0x8022C7CC: lui         $v0, 0x7FFF
    ctx->r2 = S32(0X7FFF << 16);
    // 0x8022C7D0: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8022C7D4: beq         $v1, $v0, L_8022C804
    if (ctx->r3 == ctx->r2) {
        // 0x8022C7D8: nop
    
            goto L_8022C804;
    }
    // 0x8022C7D8: nop

    // 0x8022C7DC: lw          $a0, 0x8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X8);
    // 0x8022C7E0: beql        $a0, $v0, L_8022C7FC
    if (ctx->r4 == ctx->r2) {
        // 0x8022C7E4: addu        $a0, $v1, $zero
        ctx->r4 = ADD32(ctx->r3, 0);
            goto L_8022C7FC;
    }
    goto skip_1;
    // 0x8022C7E4: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    skip_1:
    // 0x8022C7E8: jal         0x8006033C
    // 0x8022C7EC: nop

    func_8006033C_3B73C(rdram, ctx);
        goto after_14;
    // 0x8022C7EC: nop

    after_14:
    // 0x8022C7F0: beq         $v0, $zero, L_8022C804
    if (ctx->r2 == 0) {
        // 0x8022C7F4: nop
    
            goto L_8022C804;
    }
    // 0x8022C7F4: nop

    // 0x8022C7F8: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
L_8022C7FC:
    // 0x8022C7FC: jal         0x8006036C
    // 0x8022C800: nop

    func_8006036C_3B76C(rdram, ctx);
        goto after_15;
    // 0x8022C800: nop

    after_15:
L_8022C804:
    // 0x8022C804: lw          $v0, 0xC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XC);
    // 0x8022C808: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022C80C: bnel        $v0, $v1, L_8022C8C4
    if (ctx->r2 != ctx->r3) {
        // 0x8022C810: sw          $v1, 0xC($s1)
        MEM_W(0XC, ctx->r17) = ctx->r3;
            goto L_8022C8C4;
    }
    goto skip_2;
    // 0x8022C810: sw          $v1, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r3;
    skip_2:
    // 0x8022C814: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x8022C818: lui         $v0, 0x7FFF
    ctx->r2 = S32(0X7FFF << 16);
    // 0x8022C81C: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8022C820: beq         $v1, $v0, L_8022C8B4
    if (ctx->r3 == ctx->r2) {
        // 0x8022C824: nop
    
            goto L_8022C8B4;
    }
    // 0x8022C824: nop

    // 0x8022C828: lbu         $v0, 0x8($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X8);
    // 0x8022C82C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022C830: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x8022C834: lw          $v0, 0x10($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X10);
    // 0x8022C838: lbu         $v0, 0x9($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X9);
    // 0x8022C83C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022C840: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x8022C844: lw          $v0, 0x10($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X10);
    // 0x8022C848: lbu         $v0, 0xA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XA);
    // 0x8022C84C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022C850: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x8022C854: lw          $v0, 0x10($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X10);
    // 0x8022C858: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x8022C85C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022C860: sh          $v0, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = ctx->r2;
    // 0x8022C864: lw          $v0, 0x10($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X10);
    // 0x8022C868: lhu         $v0, 0x2($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X2);
    // 0x8022C86C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022C870: sh          $v0, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = ctx->r2;
    // 0x8022C874: lw          $v0, 0x10($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X10);
    // 0x8022C878: lhu         $v0, 0x4($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4);
    // 0x8022C87C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022C880: sh          $v0, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = ctx->r2;
    // 0x8022C884: lw          $v0, 0x10($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X10);
    // 0x8022C888: lhu         $v1, 0x6($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X6);
    // 0x8022C88C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022C890: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022C894: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x8022C898: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022C89C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022C8A0: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x8022C8A4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022C8A8: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x8022C8AC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022C8B0: sh          $v1, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = ctx->r3;
L_8022C8B4:
    // 0x8022C8B4: jal         0x8004F418
    // 0x8022C8B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_16;
    // 0x8022C8B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_16:
    // 0x8022C8BC: j           L_8022C8C8
    // 0x8022C8C0: nop

        goto L_8022C8C8;
    // 0x8022C8C0: nop

L_8022C8C4:
    // 0x8022C8C4: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_8022C8C8:
    // 0x8022C8C8: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8022C8CC: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8022C8D0: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8022C8D4: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022C8D8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022C8DC: jr          $ra
    // 0x8022C8E0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022C8E0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8022C8E4: nop

    // 0x8022C8E8: nop

    // 0x8022C8EC: nop

;}
RECOMP_FUNC void func_802254D0_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802254D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802254D4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802254D8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802254DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802254E0: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x802254E4: bne         $v0, $zero, L_80225534
    if (ctx->r2 != 0) {
        // 0x802254E8: nop
    
            goto L_80225534;
    }
    // 0x802254E8: nop

    // 0x802254EC: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802254F0: jal         0x800607C4
    // 0x802254F4: addiu       $a0, $a0, 0x93C
    ctx->r4 = ADD32(ctx->r4, 0X93C);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x802254F4: addiu       $a0, $a0, 0x93C
    ctx->r4 = ADD32(ctx->r4, 0X93C);
    after_0:
    // 0x802254F8: jal         0x8006033C
    // 0x802254FC: addiu       $a0, $zero, 0x31
    ctx->r4 = ADD32(0, 0X31);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x802254FC: addiu       $a0, $zero, 0x31
    ctx->r4 = ADD32(0, 0X31);
    after_1:
    // 0x80225500: bne         $v0, $zero, L_80225510
    if (ctx->r2 != 0) {
        // 0x80225504: nop
    
            goto L_80225510;
    }
    // 0x80225504: nop

    // 0x80225508: jal         0x8006036C
    // 0x8022550C: addiu       $a0, $zero, 0x7E1
    ctx->r4 = ADD32(0, 0X7E1);
    func_8006036C_3B76C(rdram, ctx);
        goto after_2;
    // 0x8022550C: addiu       $a0, $zero, 0x7E1
    ctx->r4 = ADD32(0, 0X7E1);
    after_2:
L_80225510:
    // 0x80225510: jal         0x8006033C
    // 0x80225514: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    func_8006033C_3B73C(rdram, ctx);
        goto after_3;
    // 0x80225514: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    after_3:
    // 0x80225518: bne         $v0, $zero, L_80225528
    if (ctx->r2 != 0) {
        // 0x8022551C: nop
    
            goto L_80225528;
    }
    // 0x8022551C: nop

    // 0x80225520: jal         0x8006036C
    // 0x80225524: addiu       $a0, $zero, 0x7E3
    ctx->r4 = ADD32(0, 0X7E3);
    func_8006036C_3B76C(rdram, ctx);
        goto after_4;
    // 0x80225524: addiu       $a0, $zero, 0x7E3
    ctx->r4 = ADD32(0, 0X7E3);
    after_4:
L_80225528:
    // 0x80225528: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x8022552C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225530: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_80225534:
    // 0x80225534: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225538: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022553C: jr          $ra
    // 0x80225540: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225540: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E67C_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E67C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E680: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022E684: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x8022E688: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022E68C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022E690: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022E694: lw          $v0, 0x2A08($at)
    ctx->r2 = MEM_W(ctx->r1, 0X2A08);
    // 0x8022E698: jalr        $v0
    // 0x8022E69C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022E69C: nop

    after_0:
    // 0x8022E6A0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022E6A4: jr          $ra
    // 0x8022E6A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E6A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225FF4_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225FF4: jr          $ra
    // 0x80225FF8: nop

    TRACE_RETURN()
    return;
    // 0x80225FF8: nop

;}
RECOMP_FUNC void func_8022F358_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F358: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022F35C: addiu       $v1, $a0, 0x28
    ctx->r3 = ADD32(ctx->r4, 0X28);
    // 0x8022F360: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F364: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
    // 0x8022F368: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    // 0x8022F36C: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    // 0x8022F370: sb          $zero, 0xB($a0)
    MEM_B(0XB, ctx->r4) = 0;
    // 0x8022F374: sb          $zero, 0xF($a0)
    MEM_B(0XF, ctx->r4) = 0;
L_8022F378:
    // 0x8022F378: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
    // 0x8022F37C: sb          $zero, 0x1($v1)
    MEM_B(0X1, ctx->r3) = 0;
    // 0x8022F380: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8022F384: sltiu       $v0, $a1, 0x10
    ctx->r2 = ctx->r5 < 0X10 ? 1 : 0;
    // 0x8022F388: bne         $v0, $zero, L_8022F378
    if (ctx->r2 != 0) {
        // 0x8022F38C: addiu       $v1, $v1, 0x2
        ctx->r3 = ADD32(ctx->r3, 0X2);
            goto L_8022F378;
    }
    // 0x8022F38C: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x8022F390: jr          $ra
    // 0x8022F394: nop

    TRACE_RETURN()
    return;
    // 0x8022F394: nop

;}
RECOMP_FUNC void func_8022CEFC_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CEFC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022CF00: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x8022CF04: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x8022CF08: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8022CF0C: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x8022CF10: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8022CF14: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x8022CF18: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022CF1C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022CF20: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022CF24: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022CF28: lbu         $v0, 0x3($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X3);
    // 0x8022CF2C: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x8022CF30: beq         $v0, $zero, L_8022D080
    if (ctx->r2 == 0) {
        // 0x8022CF34: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_8022D080;
    }
    // 0x8022CF34: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x8022CF38: lui         $s6, 0x8023
    ctx->r22 = S32(0X8023 << 16);
    // 0x8022CF3C: addiu       $s6, $s6, 0x2BF8
    ctx->r22 = ADD32(ctx->r22, 0X2BF8);
    // 0x8022CF40: andi        $v1, $s2, 0xFF
    ctx->r3 = ctx->r18 & 0XFF;
L_8022CF44:
    // 0x8022CF44: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x8022CF48: beq         $v0, $zero, L_8022CFA8
    if (ctx->r2 == 0) {
        // 0x8022CF4C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8022CFA8;
    }
    // 0x8022CF4C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022CF50: addu        $v0, $v0, $s6
    gpr jr_addend_8022CF58 = ctx->r2;
    ctx->r2 = ADD32(ctx->r2, ctx->r22);
    // 0x8022CF54: lw          $v0, 0x0($v0)
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x8022CF58: jr          $v0
    // 0x8022CF5C: nop

    switch (jr_addend_8022CF58 >> 2) {
        case 0: goto L_8022CF60; break;
        case 1: goto L_8022CF6C; break;
        case 2: goto L_8022CF78; break;
        case 3: goto L_8022CF84; break;
        case 4: goto L_8022CF90; break;
        case 5: goto L_8022CF9C; break;
        default: switch_error(__func__, 0x8022CF58, 0x80232BF8);
    }
    // 0x8022CF5C: nop

L_8022CF60:
    // 0x8022CF60: lbu         $v0, 0xC($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0XC);
    // 0x8022CF64: j           L_8022CFA8
    // 0x8022CF68: andi        $s3, $v0, 0x1
    ctx->r19 = ctx->r2 & 0X1;
        goto L_8022CFA8;
    // 0x8022CF68: andi        $s3, $v0, 0x1
    ctx->r19 = ctx->r2 & 0X1;
L_8022CF6C:
    // 0x8022CF6C: lbu         $v0, 0xC($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0XC);
    // 0x8022CF70: j           L_8022CFA4
    // 0x8022CF74: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
        goto L_8022CFA4;
    // 0x8022CF74: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
L_8022CF78:
    // 0x8022CF78: lbu         $v0, 0xC($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0XC);
    // 0x8022CF7C: j           L_8022CFA4
    // 0x8022CF80: srl         $v0, $v0, 2
    ctx->r2 = S32(U32(ctx->r2) >> 2);
        goto L_8022CFA4;
    // 0x8022CF80: srl         $v0, $v0, 2
    ctx->r2 = S32(U32(ctx->r2) >> 2);
L_8022CF84:
    // 0x8022CF84: lbu         $v0, 0xC($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0XC);
    // 0x8022CF88: j           L_8022CFA4
    // 0x8022CF8C: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_8022CFA4;
    // 0x8022CF8C: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_8022CF90:
    // 0x8022CF90: lbu         $v0, 0xC($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0XC);
    // 0x8022CF94: j           L_8022CFA4
    // 0x8022CF98: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
        goto L_8022CFA4;
    // 0x8022CF98: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
L_8022CF9C:
    // 0x8022CF9C: lbu         $v0, 0xC($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0XC);
    // 0x8022CFA0: srl         $v0, $v0, 5
    ctx->r2 = S32(U32(ctx->r2) >> 5);
L_8022CFA4:
    // 0x8022CFA4: andi        $s3, $v0, 0x1
    ctx->r19 = ctx->r2 & 0X1;
L_8022CFA8:
    // 0x8022CFA8: andi        $v0, $s3, 0xFF
    ctx->r2 = ctx->r19 & 0XFF;
    // 0x8022CFAC: beq         $v0, $zero, L_8022D010
    if (ctx->r2 == 0) {
        // 0x8022CFB0: andi        $v0, $s2, 0xFF
        ctx->r2 = ctx->r18 & 0XFF;
            goto L_8022D010;
    }
    // 0x8022CFB0: andi        $v0, $s2, 0xFF
    ctx->r2 = ctx->r18 & 0XFF;
    // 0x8022CFB4: addu        $v0, $s4, $v0
    ctx->r2 = ADD32(ctx->r20, ctx->r2);
    // 0x8022CFB8: lbu         $v0, 0x4($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4);
    // 0x8022CFBC: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
    // 0x8022CFC0: beq         $v0, $zero, L_8022CFF0
    if (ctx->r2 == 0) {
        // 0x8022CFC4: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_8022CFF0;
    }
    // 0x8022CFC4: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x8022CFC8: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8022CFCC: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
L_8022CFD0:
    // 0x8022CFD0: andi        $a1, $s2, 0xFF
    ctx->r5 = ctx->r18 & 0XFF;
    // 0x8022CFD4: jal         0x8022D160
    // 0x8022CFD8: andi        $a2, $s0, 0xFF
    ctx->r6 = ctx->r16 & 0XFF;
    func_8022D160_ovl15(rdram, ctx);
        goto after_0;
    // 0x8022CFD8: andi        $a2, $s0, 0xFF
    ctx->r6 = ctx->r16 & 0XFF;
    after_0:
    // 0x8022CFDC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8022CFE0: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
    // 0x8022CFE4: sltu        $v0, $v0, $s1
    ctx->r2 = ctx->r2 < ctx->r17 ? 1 : 0;
    // 0x8022CFE8: bne         $v0, $zero, L_8022CFD0
    if (ctx->r2 != 0) {
        // 0x8022CFEC: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_8022CFD0;
    }
    // 0x8022CFEC: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
L_8022CFF0:
    // 0x8022CFF0: andi        $v0, $s2, 0xFF
    ctx->r2 = ctx->r18 & 0XFF;
    // 0x8022CFF4: addu        $a0, $s4, $v0
    ctx->r4 = ADD32(ctx->r20, ctx->r2);
    // 0x8022CFF8: lbu         $v1, 0x4($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X4);
    // 0x8022CFFC: sltiu       $v0, $v1, 0x40
    ctx->r2 = ctx->r3 < 0X40 ? 1 : 0;
    // 0x8022D000: beq         $v0, $zero, L_8022D068
    if (ctx->r2 == 0) {
        // 0x8022D004: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_8022D068;
    }
    // 0x8022D004: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022D008: j           L_8022D068
    // 0x8022D00C: sb          $v0, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r2;
        goto L_8022D068;
    // 0x8022D00C: sb          $v0, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r2;
L_8022D010:
    // 0x8022D010: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    // 0x8022D014: addu        $v1, $s4, $a0
    ctx->r3 = ADD32(ctx->r20, ctx->r4);
    // 0x8022D018: lbu         $v0, 0x4($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X4);
    // 0x8022D01C: sltiu       $v0, $v0, 0x8
    ctx->r2 = ctx->r2 < 0X8 ? 1 : 0;
    // 0x8022D020: bne         $v0, $zero, L_8022D068
    if (ctx->r2 != 0) {
        // 0x8022D024: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_8022D068;
    }
    // 0x8022D024: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8022D028: sb          $v0, 0x4($v1)
    MEM_B(0X4, ctx->r3) = ctx->r2;
    // 0x8022D02C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x8022D030: sll         $v0, $a0, 7
    ctx->r2 = S32(ctx->r4 << 7);
    // 0x8022D034: addiu       $v0, $v0, 0x14
    ctx->r2 = ADD32(ctx->r2, 0X14);
    // 0x8022D038: addu        $v1, $s4, $v0
    ctx->r3 = ADD32(ctx->r20, ctx->r2);
    // 0x8022D03C: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
L_8022D040:
    // 0x8022D040: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8022D044: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022D048: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x8022D04C: sb          $zero, 0x4($v0)
    MEM_B(0X4, ctx->r2) = 0;
    // 0x8022D050: sb          $zero, 0x5($v0)
    MEM_B(0X5, ctx->r2) = 0;
    // 0x8022D054: sh          $zero, 0x6($v0)
    MEM_H(0X6, ctx->r2) = 0;
    // 0x8022D058: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
    // 0x8022D05C: sltiu       $v0, $v0, 0x8
    ctx->r2 = ctx->r2 < 0X8 ? 1 : 0;
    // 0x8022D060: bne         $v0, $zero, L_8022D040
    if (ctx->r2 != 0) {
        // 0x8022D064: andi        $v0, $s0, 0xFF
        ctx->r2 = ctx->r16 & 0XFF;
            goto L_8022D040;
    }
    // 0x8022D064: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
L_8022D068:
    // 0x8022D068: lbu         $v1, 0x3($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X3);
    // 0x8022D06C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8022D070: andi        $v0, $s2, 0xFF
    ctx->r2 = ctx->r18 & 0XFF;
    // 0x8022D074: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8022D078: bne         $v0, $zero, L_8022CF44
    if (ctx->r2 != 0) {
        // 0x8022D07C: andi        $v1, $s2, 0xFF
        ctx->r3 = ctx->r18 & 0XFF;
            goto L_8022CF44;
    }
    // 0x8022D07C: andi        $v1, $s2, 0xFF
    ctx->r3 = ctx->r18 & 0XFF;
L_8022D080:
    // 0x8022D080: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8022D084: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x8022D088: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x8022D08C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8022D090: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022D094: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022D098: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022D09C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D0A0: jr          $ra
    // 0x8022D0A4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022D0A4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80229E14_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229E14: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80229E18: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229E1C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229E20: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80229E24: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80229E28: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80229E2C: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x80229E30: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80229E34: lhu         $a2, 0x368($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X368);
    // 0x80229E38: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80229E3C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80229E40: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80229E44: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x80229E48: addiu       $v1, $v1, 0x1E80
    ctx->r3 = ADD32(ctx->r3, 0X1E80);
    // 0x80229E4C: jal         0x8022C264
    // 0x80229E50: addu        $s1, $v0, $v1
    ctx->r17 = ADD32(ctx->r2, ctx->r3);
    func_8022C264_ovl15(rdram, ctx);
        goto after_0;
    // 0x80229E50: addu        $s1, $v0, $v1
    ctx->r17 = ADD32(ctx->r2, ctx->r3);
    after_0:
    // 0x80229E54: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80229E58: beq         $v0, $zero, L_80229F68
    if (ctx->r2 == 0) {
        // 0x80229E5C: addiu       $s2, $s0, 0x348
        ctx->r18 = ADD32(ctx->r16, 0X348);
            goto L_80229F68;
    }
    // 0x80229E5C: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x80229E60: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80229E64: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x80229E68: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80229E6C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80229E70: jal         0x8009A3B4
    // 0x80229E74: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80229E74: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    after_1:
    // 0x80229E78: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80229E7C: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80229E80: jal         0x8009A3B4
    // 0x80229E84: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80229E84: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x80229E88: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80229E8C: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80229E90: jal         0x8009A3B4
    // 0x80229E94: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80229E94: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x80229E98: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x80229E9C: addiu       $v1, $zero, 0x4210
    ctx->r3 = ADD32(0, 0X4210);
    // 0x80229EA0: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80229EA4: beq         $v0, $zero, L_80229EB4
    if (ctx->r2 == 0) {
        // 0x80229EA8: sh          $v1, 0x15E($s0)
        MEM_H(0X15E, ctx->r16) = ctx->r3;
            goto L_80229EB4;
    }
    // 0x80229EA8: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x80229EAC: jal         0x8022C0CC
    // 0x80229EB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022C0CC_ovl15(rdram, ctx);
        goto after_4;
    // 0x80229EB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
L_80229EB4:
    // 0x80229EB4: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80229EB8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80229EBC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80229EC0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80229EC4: lw          $v0, 0x23E8($at)
    ctx->r2 = MEM_W(ctx->r1, 0X23E8);
    // 0x80229EC8: jalr        $v0
    // 0x80229ECC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x80229ECC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80229ED0: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80229ED4: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x80229ED8: bne         $v0, $zero, L_80229EF4
    if (ctx->r2 != 0) {
        // 0x80229EDC: nop
    
            goto L_80229EF4;
    }
    // 0x80229EDC: nop

    // 0x80229EE0: jal         0x8003E934
    // 0x80229EE4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_6;
    // 0x80229EE4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x80229EE8: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80229EEC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229EF0: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_80229EF4:
    // 0x80229EF4: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x80229EF8: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x80229EFC: beq         $v0, $a1, L_80229F14
    if (ctx->r2 == ctx->r5) {
        // 0x80229F00: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80229F14;
    }
    // 0x80229F00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229F04: jal         0x80050294
    // 0x80229F08: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_7;
    // 0x80229F08: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_7:
    // 0x80229F0C: j           L_80229F1C
    // 0x80229F10: nop

        goto L_80229F1C;
    // 0x80229F10: nop

L_80229F14:
    // 0x80229F14: jal         0x8005044C
    // 0x80229F18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_8;
    // 0x80229F18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
L_80229F1C:
    // 0x80229F1C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80229F20: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80229F24: beq         $v0, $zero, L_80229F40
    if (ctx->r2 == 0) {
        // 0x80229F28: nop
    
            goto L_80229F40;
    }
    // 0x80229F28: nop

    // 0x80229F2C: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x80229F30: lw          $a2, 0x4($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X4);
    // 0x80229F34: lw          $a3, 0x8($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X8);
    // 0x80229F38: jal         0x8003B564
    // 0x80229F3C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_9;
    // 0x80229F3C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
L_80229F40:
    // 0x80229F40: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x80229F44: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80229F48: beq         $v0, $zero, L_80229F58
    if (ctx->r2 == 0) {
        // 0x80229F4C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80229F58;
    }
    // 0x80229F4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229F50: j           L_80229F5C
    // 0x80229F54: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_80229F5C;
    // 0x80229F54: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_80229F58:
    // 0x80229F58: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
L_80229F5C:
    // 0x80229F5C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x80229F60: jal         0x80047284
    // 0x80229F64: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_10;
    // 0x80229F64: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_10:
L_80229F68:
    // 0x80229F68: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80229F6C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80229F70: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80229F74: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229F78: jr          $ra
    // 0x80229F7C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80229F7C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022F25C_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F25C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F260: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F264: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F268: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022F26C: lw          $a0, 0x44($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X44);
    // 0x8022F270: beq         $a0, $zero, L_8022F288
    if (ctx->r4 == 0) {
        // 0x8022F274: nop
    
            goto L_8022F288;
    }
    // 0x8022F274: nop

    // 0x8022F278: jal         0x8006033C
    // 0x8022F27C: nop

    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8022F27C: nop

    after_0:
    // 0x8022F280: beq         $v0, $zero, L_8022F2B0
    if (ctx->r2 == 0) {
        // 0x8022F284: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022F2B0;
    }
    // 0x8022F284: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8022F288:
    // 0x8022F288: lb          $a0, 0xC($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XC);
    // 0x8022F28C: jal         0x8006033C
    // 0x8022F290: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x8022F290: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    after_1:
    // 0x8022F294: bne         $v0, $zero, L_8022F2B0
    if (ctx->r2 != 0) {
        // 0x8022F298: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022F2B0;
    }
    // 0x8022F298: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022F29C: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x8022F2A0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022F2A4: bne         $v1, $v0, L_8022F2B0
    if (ctx->r3 != ctx->r2) {
        // 0x8022F2A8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022F2B0;
    }
    // 0x8022F2A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F2AC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8022F2B0:
    // 0x8022F2B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022F2B4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F2B8: jr          $ra
    // 0x8022F2BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F2BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022D724_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D724: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022D728: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022D72C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022D730: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D734: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022D738: jal         0x8003B878
    // 0x8022D73C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    func_8003B878_16C78(rdram, ctx);
        goto after_0;
    // 0x8022D73C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    after_0:
    // 0x8022D740: lbu         $a0, 0x5($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X5);
    // 0x8022D744: lui         $a1, 0x3D48
    ctx->r5 = S32(0X3D48 << 16);
    // 0x8022D748: sll         $v1, $a0, 8
    ctx->r3 = S32(ctx->r4 << 8);
    // 0x8022D74C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8022D750: sll         $v1, $v1, 8
    ctx->r3 = S32(ctx->r3 << 8);
    // 0x8022D754: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8022D758: subu        $s0, $s0, $v1
    ctx->r16 = SUB32(ctx->r16, ctx->r3);
    // 0x8022D75C: sw          $s0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r16;
    // 0x8022D760: lh          $v1, 0xA($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XA);
    // 0x8022D764: lhu         $a0, 0xC($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0XC);
    // 0x8022D768: ori         $a1, $a1, 0x40
    ctx->r5 = ctx->r5 | 0X40;
    // 0x8022D76C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022D770: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x8022D774: sw          $v1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r3;
    // 0x8022D778: lh          $a0, 0xE($s1)
    ctx->r4 = MEM_H(ctx->r17, 0XE);
    // 0x8022D77C: lui         $v1, 0x4E
    ctx->r3 = S32(0X4E << 16);
    // 0x8022D780: ori         $v1, $v1, 0x5F
    ctx->r3 = ctx->r3 | 0X5F;
    // 0x8022D784: sw          $v1, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r3;
    // 0x8022D788: addiu       $v1, $zero, 0x1F40
    ctx->r3 = ADD32(0, 0X1F40);
    // 0x8022D78C: sw          $v1, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r3;
    // 0x8022D790: addiu       $v1, $zero, 0x1F5F
    ctx->r3 = ADD32(0, 0X1F5F);
    // 0x8022D794: sw          $a1, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r5;
    // 0x8022D798: sw          $v1, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r3;
    // 0x8022D79C: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022D7A0: sw          $a0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r4;
    // 0x8022D7A4: lhu         $a0, 0x8($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X8);
    // 0x8022D7A8: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x8022D7AC: sw          $v1, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r3;
    // 0x8022D7B0: sw          $a0, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r4;
    // 0x8022D7B4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022D7B8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022D7BC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D7C0: jr          $ra
    // 0x8022D7C4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022D7C4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022CBE0_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CBE0: andi        $a1, $a1, 0x3F
    ctx->r5 = ctx->r5 & 0X3F;
    // 0x8022CBE4: jr          $ra
    // 0x8022CBE8: sb          $a1, 0x89($a0)
    MEM_B(0X89, ctx->r4) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x8022CBE8: sb          $a1, 0x89($a0)
    MEM_B(0X89, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_802263C0_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802263C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802263C4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802263C8: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x802263CC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802263D0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802263D4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802263D8: lw          $v0, 0x1130($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1130);
    // 0x802263DC: jalr        $v0
    // 0x802263E0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802263E0: nop

    after_0:
    // 0x802263E4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802263E8: jr          $ra
    // 0x802263EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802263EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A5D0_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A5D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A5D4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A5D8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A5DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022A5E0: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x8022A5E4: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022A5E8: jal         0x8004FA7C
    // 0x8022A5EC: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x8022A5EC: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_0:
    // 0x8022A5F0: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022A5F4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022A5F8: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022A5FC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A600: bne         $v0, $zero, L_8022A664
    if (ctx->r2 != 0) {
        // 0x8022A604: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8022A664;
    }
    // 0x8022A604: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022A608: lh          $v1, 0x35C($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X35C);
    // 0x8022A60C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A610: beq         $v1, $zero, L_8022A654
    if (ctx->r3 == 0) {
        // 0x8022A614: sb          $v0, 0xA($s0)
        MEM_B(0XA, ctx->r16) = ctx->r2;
            goto L_8022A654;
    }
    // 0x8022A614: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022A618: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022A61C: addiu       $a1, $s0, 0x354
    ctx->r5 = ADD32(ctx->r16, 0X354);
    // 0x8022A620: jal         0x8009A3B4
    // 0x8022A624: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022A624: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x8022A628: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x8022A62C: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x8022A630: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x8022A634: lhu         $a1, 0x352($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X352);
    // 0x8022A638: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A63C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022A640: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022A644: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8022A648: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x8022A64C: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x8022A650: sh          $a1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r5;
L_8022A654:
    // 0x8022A654: lhu         $v1, 0x35C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X35C);
    // 0x8022A658: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A65C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022A660: sh          $v0, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = ctx->r2;
L_8022A664:
    // 0x8022A664: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022A668: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A66C: jr          $ra
    // 0x8022A670: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A670: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225A08_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225A08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225A0C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225A10: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225A14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225A18: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x80225A1C: bne         $v0, $zero, L_80225A3C
    if (ctx->r2 != 0) {
        // 0x80225A20: nop
    
            goto L_80225A3C;
    }
    // 0x80225A20: nop

    // 0x80225A24: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225A28: jal         0x800607C4
    // 0x80225A2C: addiu       $a0, $a0, 0x994
    ctx->r4 = ADD32(ctx->r4, 0X994);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x80225A2C: addiu       $a0, $a0, 0x994
    ctx->r4 = ADD32(ctx->r4, 0X994);
    after_0:
    // 0x80225A30: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x80225A34: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225A38: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_80225A3C:
    // 0x80225A3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225A40: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225A44: jr          $ra
    // 0x80225A48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225A48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228008_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228008: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022800C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228010: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228014: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80228018: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x8022801C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80228020: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80228024: lbu         $a0, 0x8($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X8);
    // 0x80228028: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022802C: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x80228030: beq         $v1, $v0, L_802280D0
    if (ctx->r3 == ctx->r2) {
        // 0x80228034: addu        $s1, $a2, $zero
        ctx->r17 = ADD32(ctx->r6, 0);
            goto L_802280D0;
    }
    // 0x80228034: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x80228038: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022803C: beql        $v0, $zero, L_80228054
    if (ctx->r2 == 0) {
        // 0x80228040: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80228054;
    }
    goto skip_0;
    // 0x80228040: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80228044: beq         $v1, $zero, L_80228064
    if (ctx->r3 == 0) {
        // 0x80228048: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80228064;
    }
    // 0x80228048: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022804C: j           L_802280FC
    // 0x80228050: nop

        goto L_802280FC;
    // 0x80228050: nop

L_80228054:
    // 0x80228054: beq         $v1, $v0, L_802280E8
    if (ctx->r3 == ctx->r2) {
        // 0x80228058: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802280E8;
    }
    // 0x80228058: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022805C: j           L_802280FC
    // 0x80228060: nop

        goto L_802280FC;
    // 0x80228060: nop

L_80228064:
    // 0x80228064: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80228068: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022806C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80228070: jal         0x8004D5D4
    // 0x80228074: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80228074: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x80228078: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022807C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80228080: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x80228084: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80228088: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022808C: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80228090: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80228094: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80228098: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022809C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802280A0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802280A4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802280A8: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x802280AC: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
    // 0x802280B0: jal         0x80228214
    // 0x802280B4: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    func_80228214_ovl15(rdram, ctx);
        goto after_1;
    // 0x802280B4: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    after_1:
    // 0x802280B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802280BC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802280C0: jal         0x8022823C
    // 0x802280C4: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    func_8022823C_ovl15(rdram, ctx);
        goto after_2;
    // 0x802280C4: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    after_2:
    // 0x802280C8: j           L_802280F0
    // 0x802280CC: nop

        goto L_802280F0;
    // 0x802280CC: nop

L_802280D0:
    // 0x802280D0: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x802280D4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802280D8: bne         $v1, $v0, L_802280FC
    if (ctx->r3 != ctx->r2) {
        // 0x802280DC: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_802280FC;
    }
    // 0x802280DC: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x802280E0: j           L_802280FC
    // 0x802280E4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_802280FC;
    // 0x802280E4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_802280E8:
    // 0x802280E8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802280EC: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
L_802280F0:
    // 0x802280F0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802280F4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802280F8: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_802280FC:
    // 0x802280FC: lw          $a1, 0x10($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X10);
    // 0x80228100: addiu       $v0, $zero, 0x4B
    ctx->r2 = ADD32(0, 0X4B);
    // 0x80228104: beq         $a1, $v0, L_802281A8
    if (ctx->r5 == ctx->r2) {
        // 0x80228108: slti        $v0, $a1, 0x4C
        ctx->r2 = SIGNED(ctx->r5) < 0X4C ? 1 : 0;
            goto L_802281A8;
    }
    // 0x80228108: slti        $v0, $a1, 0x4C
    ctx->r2 = SIGNED(ctx->r5) < 0X4C ? 1 : 0;
    // 0x8022810C: beq         $v0, $zero, L_80228148
    if (ctx->r2 == 0) {
        // 0x80228110: addiu       $v0, $zero, 0x23
        ctx->r2 = ADD32(0, 0X23);
            goto L_80228148;
    }
    // 0x80228110: addiu       $v0, $zero, 0x23
    ctx->r2 = ADD32(0, 0X23);
    // 0x80228114: beq         $a1, $v0, L_8022818C
    if (ctx->r5 == ctx->r2) {
        // 0x80228118: slti        $v0, $a1, 0x24
        ctx->r2 = SIGNED(ctx->r5) < 0X24 ? 1 : 0;
            goto L_8022818C;
    }
    // 0x80228118: slti        $v0, $a1, 0x24
    ctx->r2 = SIGNED(ctx->r5) < 0X24 ? 1 : 0;
    // 0x8022811C: beq         $v0, $zero, L_80228134
    if (ctx->r2 == 0) {
        // 0x80228120: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_80228134;
    }
    // 0x80228120: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x80228124: beq         $a1, $v0, L_80228180
    if (ctx->r5 == ctx->r2) {
        // 0x80228128: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80228180;
    }
    // 0x80228128: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022812C: j           L_802281FC
    // 0x80228130: nop

        goto L_802281FC;
    // 0x80228130: nop

L_80228134:
    // 0x80228134: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    // 0x80228138: beq         $a1, $v0, L_8022819C
    if (ctx->r5 == ctx->r2) {
        // 0x8022813C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022819C;
    }
    // 0x8022813C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228140: j           L_802281FC
    // 0x80228144: nop

        goto L_802281FC;
    // 0x80228144: nop

L_80228148:
    // 0x80228148: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x8022814C: beq         $a1, $v0, L_802281CC
    if (ctx->r5 == ctx->r2) {
        // 0x80228150: slti        $v0, $a1, 0x79
        ctx->r2 = SIGNED(ctx->r5) < 0X79 ? 1 : 0;
            goto L_802281CC;
    }
    // 0x80228150: slti        $v0, $a1, 0x79
    ctx->r2 = SIGNED(ctx->r5) < 0X79 ? 1 : 0;
    // 0x80228154: beq         $v0, $zero, L_8022816C
    if (ctx->r2 == 0) {
        // 0x80228158: addiu       $v0, $zero, 0x4D
        ctx->r2 = ADD32(0, 0X4D);
            goto L_8022816C;
    }
    // 0x80228158: addiu       $v0, $zero, 0x4D
    ctx->r2 = ADD32(0, 0X4D);
    // 0x8022815C: beq         $a1, $v0, L_802281B8
    if (ctx->r5 == ctx->r2) {
        // 0x80228160: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802281B8;
    }
    // 0x80228160: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228164: j           L_802281FC
    // 0x80228168: nop

        goto L_802281FC;
    // 0x80228168: nop

L_8022816C:
    // 0x8022816C: addiu       $v0, $zero, 0x82
    ctx->r2 = ADD32(0, 0X82);
    // 0x80228170: beq         $a1, $v0, L_802281EC
    if (ctx->r5 == ctx->r2) {
        // 0x80228174: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802281EC;
    }
    // 0x80228174: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228178: j           L_802281FC
    // 0x8022817C: nop

        goto L_802281FC;
    // 0x8022817C: nop

L_80228180:
    // 0x80228180: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80228184: j           L_802281F4
    // 0x80228188: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
        goto L_802281F4;
    // 0x80228188: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
L_8022818C:
    // 0x8022818C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228190: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80228194: j           L_802281F4
    // 0x80228198: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
        goto L_802281F4;
    // 0x80228198: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
L_8022819C:
    // 0x8022819C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802281A0: j           L_802281F4
    // 0x802281A4: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
        goto L_802281F4;
    // 0x802281A4: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
L_802281A8:
    // 0x802281A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802281AC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802281B0: j           L_802281F4
    // 0x802281B4: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
        goto L_802281F4;
    // 0x802281B4: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
L_802281B8:
    // 0x802281B8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802281BC: jal         0x80228214
    // 0x802281C0: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    func_80228214_ovl15(rdram, ctx);
        goto after_3;
    // 0x802281C0: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    after_3:
    // 0x802281C4: j           L_802281FC
    // 0x802281C8: nop

        goto L_802281FC;
    // 0x802281C8: nop

L_802281CC:
    // 0x802281CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802281D0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802281D4: jal         0x80228214
    // 0x802281D8: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    func_80228214_ovl15(rdram, ctx);
        goto after_4;
    // 0x802281D8: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_4:
    // 0x802281DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802281E0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802281E4: j           L_802281F4
    // 0x802281E8: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
        goto L_802281F4;
    // 0x802281E8: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
L_802281EC:
    // 0x802281EC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802281F0: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
L_802281F4:
    // 0x802281F4: jal         0x8022823C
    // 0x802281F8: nop

    func_8022823C_ovl15(rdram, ctx);
        goto after_5;
    // 0x802281F8: nop

    after_5:
L_802281FC:
    // 0x802281FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80228200: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80228204: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80228208: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022820C: jr          $ra
    // 0x80228210: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80228210: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022C038_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C038: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022C03C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C040: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C044: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022C048: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022C04C: lh          $a0, 0x34C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X34C);
    // 0x8022C050: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022C054: jal         0x8004FA7C
    // 0x8022C058: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x8022C058: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    after_0:
    // 0x8022C05C: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x8022C060: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8022C064: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x8022C068: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8022C06C: srl         $v1, $v1, 31
    ctx->r3 = S32(U32(ctx->r3) >> 31);
    // 0x8022C070: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8022C074: beq         $v1, $zero, L_8022C0A8
    if (ctx->r3 == 0) {
        // 0x8022C078: nop
    
            goto L_8022C0A8;
    }
    // 0x8022C078: nop

    // 0x8022C07C: jal         0x8022C1C8
    // 0x8022C080: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_8022C1C8_ovl15(rdram, ctx);
        goto after_1;
    // 0x8022C080: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_1:
    // 0x8022C084: lbu         $v1, 0x34A($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34A);
    // 0x8022C088: lhu         $a0, 0x348($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X348);
    // 0x8022C08C: lbu         $a1, 0xD($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XD);
    // 0x8022C090: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022C094: ori         $a0, $a0, 0x2
    ctx->r4 = ctx->r4 | 0X2;
    // 0x8022C098: andi        $a1, $a1, 0x7
    ctx->r5 = ctx->r5 & 0X7;
    // 0x8022C09C: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x8022C0A0: sh          $a0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r4;
    // 0x8022C0A4: sb          $a1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r5;
L_8022C0A8:
    // 0x8022C0A8: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022C0AC: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x8022C0B0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022C0B4: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022C0B8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022C0BC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022C0C0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C0C4: jr          $ra
    // 0x8022C0C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022C0C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022D414_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D414: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D418: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D41C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022D420: jal         0x800A3450
    // 0x8022D424: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022D424: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    after_0:
    // 0x8022D428: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x8022D42C: bne         $v1, $zero, L_8022D4A8
    if (ctx->r3 != 0) {
        // 0x8022D430: addu        $a3, $v0, $zero
        ctx->r7 = ADD32(ctx->r2, 0);
            goto L_8022D4A8;
    }
    // 0x8022D430: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x8022D434: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022D438: andi        $v1, $a3, 0x7
    ctx->r3 = ctx->r7 & 0X7;
    // 0x8022D43C: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    // 0x8022D440: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022D444: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022D448: sll         $a0, $a3, 16
    ctx->r4 = S32(ctx->r7 << 16);
    // 0x8022D44C: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x8022D450: sra         $v1, $a0, 18
    ctx->r3 = S32(SIGNED(ctx->r4) >> 18);
    // 0x8022D454: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x8022D458: sh          $v0, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r2;
    // 0x8022D45C: addiu       $v0, $zero, 0xC4
    ctx->r2 = ADD32(0, 0XC4);
    // 0x8022D460: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022D464: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x8022D468: sra         $v0, $a0, 20
    ctx->r2 = S32(SIGNED(ctx->r4) >> 20);
    // 0x8022D46C: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x8022D470: lhu         $v1, 0x0($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X0);
    // 0x8022D474: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x8022D478: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x8022D47C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022D480: sh          $v1, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r3;
    // 0x8022D484: lhu         $v0, 0x2($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X2);
    // 0x8022D488: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x8022D48C: sh          $v0, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r2;
    // 0x8022D490: lhu         $v0, 0x4($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X4);
    // 0x8022D494: sra         $a0, $a0, 22
    ctx->r4 = S32(SIGNED(ctx->r4) >> 22);
    // 0x8022D498: andi        $a0, $a0, 0x3F
    ctx->r4 = ctx->r4 & 0X3F;
    // 0x8022D49C: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8022D4A0: j           L_8022D520
    // 0x8022D4A4: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
        goto L_8022D520;
    // 0x8022D4A4: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
L_8022D4A8:
    // 0x8022D4A8: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x8022D4AC: lhu         $v1, 0x6($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X6);
    // 0x8022D4B0: lhu         $a0, 0x8($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X8);
    // 0x8022D4B4: lhu         $a2, 0xA($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0XA);
    // 0x8022D4B8: lhu         $a1, 0xC($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0XC);
    // 0x8022D4BC: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8022D4C0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022D4C4: addiu       $a0, $a0, 0x3
    ctx->r4 = ADD32(ctx->r4, 0X3);
    // 0x8022D4C8: addiu       $a2, $a2, 0xC
    ctx->r6 = ADD32(ctx->r6, 0XC);
    // 0x8022D4CC: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
    // 0x8022D4D0: andi        $v0, $a3, 0x7
    ctx->r2 = ctx->r7 & 0X7;
    // 0x8022D4D4: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8022D4D8: addiu       $a1, $a1, -0xC
    ctx->r5 = ADD32(ctx->r5, -0XC);
    // 0x8022D4DC: sh          $v1, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r3;
    // 0x8022D4E0: sll         $v1, $a3, 16
    ctx->r3 = S32(ctx->r7 << 16);
    // 0x8022D4E4: sra         $v0, $v1, 18
    ctx->r2 = S32(SIGNED(ctx->r3) >> 18);
    // 0x8022D4E8: sh          $a0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r4;
    // 0x8022D4EC: lhu         $a0, 0xE($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XE);
    // 0x8022D4F0: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8022D4F4: subu        $a1, $a1, $v0
    ctx->r5 = SUB32(ctx->r5, ctx->r2);
    // 0x8022D4F8: lh          $v0, 0x6($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6);
    // 0x8022D4FC: sra         $v1, $v1, 20
    ctx->r3 = S32(SIGNED(ctx->r3) >> 20);
    // 0x8022D500: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x8022D504: sh          $a2, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r6;
    // 0x8022D508: sh          $a1, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r5;
    // 0x8022D50C: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x8022D510: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x8022D514: bne         $v0, $zero, L_8022D520
    if (ctx->r2 != 0) {
        // 0x8022D518: sh          $a0, 0xE($s0)
        MEM_H(0XE, ctx->r16) = ctx->r4;
            goto L_8022D520;
    }
    // 0x8022D518: sh          $a0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r4;
    // 0x8022D51C: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
L_8022D520:
    // 0x8022D520: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022D524: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D528: jr          $ra
    // 0x8022D52C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022D52C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
