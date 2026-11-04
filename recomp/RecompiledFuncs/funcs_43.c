#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8023544C_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023544C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80235450: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80235454: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80235458: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023545C: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x80235460: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80235464: jal         0x8002C678
    // 0x80235468: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C678_7A78(rdram, ctx);
        goto after_0;
    // 0x80235468: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8023546C: lb          $a0, 0xC($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XC);
    // 0x80235470: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x80235474: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80235478: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    // 0x8023547C: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80235480: jal         0x800319B4
    // 0x80235484: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
    func_800319B4_CDB4(rdram, ctx);
        goto after_1;
    // 0x80235484: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
    after_1:
    // 0x80235488: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x8023548C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80235490: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    // 0x80235494: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80235498: bne         $v0, $zero, L_802354EC
    if (ctx->r2 != 0) {
        // 0x8023549C: addiu       $a0, $zero, 0x185
        ctx->r4 = ADD32(0, 0X185);
            goto L_802354EC;
    }
    // 0x8023549C: addiu       $a0, $zero, 0x185
    ctx->r4 = ADD32(0, 0X185);
    // 0x802354A0: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x802354A4: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x802354A8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802354AC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802354B0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802354B4: andi        $v1, $v1, 0xFD
    ctx->r3 = ctx->r3 & 0XFD;
    // 0x802354B8: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x802354BC: jal         0x8002A2F8
    // 0x802354C0: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
    func_8002A2F8_56F8(rdram, ctx);
        goto after_2;
    // 0x802354C0: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
    after_2:
    // 0x802354C4: jal         0x80060590
    // 0x802354C8: addiu       $a0, $zero, 0x7B2
    ctx->r4 = ADD32(0, 0X7B2);
    func_80060590_3B990(rdram, ctx);
        goto after_3;
    // 0x802354C8: addiu       $a0, $zero, 0x7B2
    ctx->r4 = ADD32(0, 0X7B2);
    after_3:
    // 0x802354CC: lw          $v1, 0x44($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X44);
    // 0x802354D0: lw          $a0, 0x30($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X30);
    // 0x802354D4: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x802354D8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802354DC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802354E0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x802354E4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802354E8: sw          $a0, 0x5088($at)
    MEM_W(0X5088, ctx->r1) = ctx->r4;
L_802354EC:
    // 0x802354EC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802354F0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802354F4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802354F8: jr          $ra
    // 0x802354FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802354FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80238408_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238408: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8023840C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80238410: jr          $ra
    // 0x80238414: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80238414: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_80238684_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238684: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80238688: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023868C: jal         0x8004F5C4
    // 0x80238690: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x80238690: nop

    after_0:
    // 0x80238694: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80238698: jr          $ra
    // 0x8023869C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023869C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E990_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E990: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E994: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E998: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022E99C: jal         0x800A3450
    // 0x8022E9A0: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022E9A0: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    after_0:
    // 0x8022E9A4: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x8022E9A8: bne         $v1, $zero, L_8022EA20
    if (ctx->r3 != 0) {
        // 0x8022E9AC: addu        $a2, $v0, $zero
        ctx->r6 = ADD32(ctx->r2, 0);
            goto L_8022EA20;
    }
    // 0x8022E9AC: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x8022E9B0: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022E9B4: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    // 0x8022E9B8: andi        $v0, $a2, 0x7
    ctx->r2 = ctx->r6 & 0X7;
    // 0x8022E9BC: addiu       $v1, $zero, 0x40
    ctx->r3 = ADD32(0, 0X40);
    // 0x8022E9C0: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
    // 0x8022E9C4: sll         $a0, $a2, 16
    ctx->r4 = S32(ctx->r6 << 16);
    // 0x8022E9C8: sh          $v0, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r2;
    // 0x8022E9CC: sra         $v0, $a0, 18
    ctx->r2 = S32(SIGNED(ctx->r4) >> 18);
    // 0x8022E9D0: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x8022E9D4: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8022E9D8: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8022E9DC: sra         $v0, $a0, 20
    ctx->r2 = S32(SIGNED(ctx->r4) >> 20);
    // 0x8022E9E0: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x8022E9E4: sh          $v1, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r3;
    // 0x8022E9E8: lhu         $v1, 0x0($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X0);
    // 0x8022E9EC: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x8022E9F0: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x8022E9F4: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8022E9F8: sh          $v1, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r3;
    // 0x8022E9FC: lhu         $v0, 0x2($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X2);
    // 0x8022EA00: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x8022EA04: sh          $v0, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r2;
    // 0x8022EA08: lhu         $v0, 0x4($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X4);
    // 0x8022EA0C: sra         $a0, $a0, 22
    ctx->r4 = S32(SIGNED(ctx->r4) >> 22);
    // 0x8022EA10: andi        $a0, $a0, 0x1F
    ctx->r4 = ctx->r4 & 0X1F;
    // 0x8022EA14: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8022EA18: j           L_8022EA64
    // 0x8022EA1C: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
        goto L_8022EA64;
    // 0x8022EA1C: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
L_8022EA20:
    // 0x8022EA20: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x8022EA24: lhu         $v1, 0x6($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X6);
    // 0x8022EA28: lhu         $a0, 0x8($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X8);
    // 0x8022EA2C: lhu         $a1, 0xC($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0XC);
    // 0x8022EA30: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8022EA34: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x8022EA38: sh          $v1, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r3;
    // 0x8022EA3C: lh          $v1, 0x6($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X6);
    // 0x8022EA40: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x8022EA44: addiu       $a1, $a1, -0x8
    ctx->r5 = ADD32(ctx->r5, -0X8);
    // 0x8022EA48: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
    // 0x8022EA4C: andi        $v0, $a2, 0x7
    ctx->r2 = ctx->r6 & 0X7;
    // 0x8022EA50: subu        $a1, $a1, $v0
    ctx->r5 = SUB32(ctx->r5, ctx->r2);
    // 0x8022EA54: sh          $a0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r4;
    // 0x8022EA58: bne         $v1, $zero, L_8022EA64
    if (ctx->r3 != 0) {
        // 0x8022EA5C: sh          $a1, 0xC($s0)
        MEM_H(0XC, ctx->r16) = ctx->r5;
            goto L_8022EA64;
    }
    // 0x8022EA5C: sh          $a1, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r5;
    // 0x8022EA60: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
L_8022EA64:
    // 0x8022EA64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022EA68: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022EA6C: jr          $ra
    // 0x8022EA70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022EA70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023644C_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023644C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80236450: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80236454: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80236458: jal         0x8004F144
    // 0x8023645C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8023645C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x80236460: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80236464: beq         $v1, $zero, L_80236490
    if (ctx->r3 == 0) {
        // 0x80236468: addiu       $a0, $v1, 0x38
        ctx->r4 = ADD32(ctx->r3, 0X38);
            goto L_80236490;
    }
    // 0x80236468: addiu       $a0, $v1, 0x38
    ctx->r4 = ADD32(ctx->r3, 0X38);
    // 0x8023646C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80236470: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80236474: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80236478: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8023647C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80236480: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x80236484: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    // 0x80236488: jal         0x8009A3B4
    // 0x8023648C: sb          $zero, 0xC($v1)
    MEM_B(0XC, ctx->r3) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8023648C: sb          $zero, 0xC($v1)
    MEM_B(0XC, ctx->r3) = 0;
    after_1:
L_80236490:
    // 0x80236490: jal         0x8004F144
    // 0x80236494: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_2;
    // 0x80236494: nop

    after_2:
    // 0x80236498: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023649C: beq         $v1, $zero, L_802364CC
    if (ctx->r3 == 0) {
        // 0x802364A0: addiu       $a0, $v1, 0x38
        ctx->r4 = ADD32(ctx->r3, 0X38);
            goto L_802364CC;
    }
    // 0x802364A0: addiu       $a0, $v1, 0x38
    ctx->r4 = ADD32(ctx->r3, 0X38);
    // 0x802364A4: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x802364A8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802364AC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802364B0: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x802364B4: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x802364B8: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x802364BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802364C0: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    // 0x802364C4: jal         0x8009A3B4
    // 0x802364C8: sb          $zero, 0xC($v1)
    MEM_B(0XC, ctx->r3) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x802364C8: sb          $zero, 0xC($v1)
    MEM_B(0XC, ctx->r3) = 0;
    after_3:
L_802364CC:
    // 0x802364CC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x802364D0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802364D4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802364D8: jal         0x80238028
    // 0x802364DC: addiu       $a3, $s0, 0x14
    ctx->r7 = ADD32(ctx->r16, 0X14);
    func_80238028_ovl3(rdram, ctx);
        goto after_4;
    // 0x802364DC: addiu       $a3, $s0, 0x14
    ctx->r7 = ADD32(ctx->r16, 0X14);
    after_4:
    // 0x802364E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802364E4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802364E8: jr          $ra
    // 0x802364EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802364EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225478_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225478: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022547C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225480: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225484: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225488: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x8022548C: bne         $v0, $zero, L_802254B4
    if (ctx->r2 != 0) {
        // 0x80225490: nop
    
            goto L_802254B4;
    }
    // 0x80225490: nop

    // 0x80225494: jal         0x8006033C
    // 0x80225498: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80225498: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    after_0:
    // 0x8022549C: beq         $v0, $zero, L_802254B4
    if (ctx->r2 == 0) {
        // 0x802254A0: nop
    
            goto L_802254B4;
    }
    // 0x802254A0: nop

    // 0x802254A4: jal         0x80060690
    // 0x802254A8: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    func_80060690_3BA90(rdram, ctx);
        goto after_1;
    // 0x802254A8: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    after_1:
    // 0x802254AC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802254B0: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_802254B4:
    // 0x802254B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802254B8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802254BC: jr          $ra
    // 0x802254C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802254C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022DB0C_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DB0C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022DB10: lw          $a1, 0x4B34($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4B34);
    // 0x8022DB14: bne         $a1, $a0, L_8022DB68
    if (ctx->r5 != ctx->r4) {
        // 0x8022DB18: addiu       $a2, $a0, 0x348
        ctx->r6 = ADD32(ctx->r4, 0X348);
            goto L_8022DB68;
    }
    // 0x8022DB18: addiu       $a2, $a0, 0x348
    ctx->r6 = ADD32(ctx->r4, 0X348);
    // 0x8022DB1C: lbu         $v1, 0x2($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X2);
    // 0x8022DB20: addiu       $v0, $zero, 0x34
    ctx->r2 = ADD32(0, 0X34);
    // 0x8022DB24: bne         $v1, $v0, L_8022DB34
    if (ctx->r3 != ctx->r2) {
        // 0x8022DB28: addiu       $v0, $zero, 0x11
        ctx->r2 = ADD32(0, 0X11);
            goto L_8022DB34;
    }
    // 0x8022DB28: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x8022DB2C: j           L_8022DB50
    // 0x8022DB30: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
        goto L_8022DB50;
    // 0x8022DB30: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_8022DB34:
    // 0x8022DB34: bne         $v1, $v0, L_8022DB44
    if (ctx->r3 != ctx->r2) {
        // 0x8022DB38: addiu       $v0, $zero, 0x49
        ctx->r2 = ADD32(0, 0X49);
            goto L_8022DB44;
    }
    // 0x8022DB38: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x8022DB3C: j           L_8022DB50
    // 0x8022DB40: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
        goto L_8022DB50;
    // 0x8022DB40: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_8022DB44:
    // 0x8022DB44: bne         $v1, $v0, L_8022DB50
    if (ctx->r3 != ctx->r2) {
        // 0x8022DB48: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8022DB50;
    }
    // 0x8022DB48: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022DB4C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_8022DB50:
    // 0x8022DB50: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x8022DB54: lhu         $v0, 0x0($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X0);
    // 0x8022DB58: sb          $zero, 0x3($a2)
    MEM_B(0X3, ctx->r6) = 0;
    // 0x8022DB5C: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x8022DB60: andi        $v0, $v0, 0xFFFD
    ctx->r2 = ctx->r2 & 0XFFFD;
    // 0x8022DB64: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
L_8022DB68:
    // 0x8022DB68: jr          $ra
    // 0x8022DB6C: nop

    TRACE_RETURN()
    return;
    // 0x8022DB6C: nop

;}
RECOMP_FUNC void func_8023A720_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A720: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023A724: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023A728: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023A72C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023A730: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8023A734: beq         $v1, $zero, L_8023A74C
    if (ctx->r3 == 0) {
        // 0x8023A738: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023A74C;
    }
    // 0x8023A738: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023A73C: beq         $v1, $v0, L_8023A7C0
    if (ctx->r3 == ctx->r2) {
        // 0x8023A740: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_8023A7C0;
    }
    // 0x8023A740: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8023A744: j           L_8023A804
    // 0x8023A748: nop

        goto L_8023A804;
    // 0x8023A748: nop

L_8023A74C:
    // 0x8023A74C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8023A750: jal         0x800700D8
    // 0x8023A754: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_800700D8_4B4D8(rdram, ctx);
        goto after_0;
    // 0x8023A754: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_0:
    // 0x8023A758: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023A75C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023A760: sb          $v0, 0x4DF9($at)
    MEM_B(0X4DF9, ctx->r1) = ctx->r2;
    // 0x8023A764: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023A768: sb          $zero, 0x4B25($at)
    MEM_B(0X4B25, ctx->r1) = 0;
    // 0x8023A76C: jal         0x80036B58
    // 0x8023A770: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_80036B58_11F58(rdram, ctx);
        goto after_1;
    // 0x8023A770: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_1:
    // 0x8023A774: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8023A778: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8023A77C: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8023A780: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8023A784: beq         $v0, $zero, L_8023A7A8
    if (ctx->r2 == 0) {
        // 0x8023A788: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8023A7A8;
    }
    // 0x8023A788: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8023A78C: jal         0x80061798
    // 0x8023A790: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80061798_3CB98(rdram, ctx);
        goto after_2;
    // 0x8023A790: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_2:
    // 0x8023A794: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8023A798: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8023A79C: jal         0x80036B00
    // 0x8023A7A0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80036B00_11F00(rdram, ctx);
        goto after_3;
    // 0x8023A7A0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x8023A7A4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_8023A7A8:
    // 0x8023A7A8: jal         0x800616FC
    // 0x8023A7AC: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_4;
    // 0x8023A7AC: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    after_4:
    // 0x8023A7B0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023A7B4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023A7B8: j           L_8023A804
    // 0x8023A7BC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8023A804;
    // 0x8023A7BC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8023A7C0:
    // 0x8023A7C0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8023A7C4: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8023A7C8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8023A7CC: bne         $v0, $zero, L_8023A804
    if (ctx->r2 != 0) {
        // 0x8023A7D0: addiu       $a0, $zero, 0x101
        ctx->r4 = ADD32(0, 0X101);
            goto L_8023A804;
    }
    // 0x8023A7D0: addiu       $a0, $zero, 0x101
    ctx->r4 = ADD32(0, 0X101);
    // 0x8023A7D4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023A7D8: jal         0x8002A2F8
    // 0x8023A7DC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_5;
    // 0x8023A7DC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x8023A7E0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8023A7E4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8023A7E8: sb          $v0, -0x3C18($at)
    MEM_B(-0X3C18, ctx->r1) = ctx->r2;
    // 0x8023A7EC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023A7F0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8023A7F4: sb          $zero, -0x3C17($at)
    MEM_B(-0X3C17, ctx->r1) = 0;
    // 0x8023A7F8: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8023A7FC: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8023A800: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_8023A804:
    // 0x8023A804: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023A808: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023A80C: jr          $ra
    // 0x8023A810: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023A810: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80230474_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230474: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80230478: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8023047C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80230480: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80230484: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80230488: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8023048C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80230490: beq         $v1, $v0, L_802304F4
    if (ctx->r3 == ctx->r2) {
        // 0x80230494: addu        $s1, $a1, $zero
        ctx->r17 = ADD32(ctx->r5, 0);
            goto L_802304F4;
    }
    // 0x80230494: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x80230498: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8023049C: beql        $v0, $zero, L_802304B4
    if (ctx->r2 == 0) {
        // 0x802304A0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802304B4;
    }
    goto skip_0;
    // 0x802304A0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x802304A4: beql        $v1, $zero, L_802304CC
    if (ctx->r3 == 0) {
        // 0x802304A8: sh          $zero, 0x44($s0)
        MEM_H(0X44, ctx->r16) = 0;
            goto L_802304CC;
    }
    goto skip_1;
    // 0x802304A8: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    skip_1:
    // 0x802304AC: j           L_802305A0
    // 0x802304B0: nop

        goto L_802305A0;
    // 0x802304B0: nop

L_802304B4:
    // 0x802304B4: beq         $v1, $v0, L_8023052C
    if (ctx->r3 == ctx->r2) {
        // 0x802304B8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8023052C;
    }
    // 0x802304B8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802304BC: beq         $v1, $v0, L_80230584
    if (ctx->r3 == ctx->r2) {
        // 0x802304C0: nop
    
            goto L_80230584;
    }
    // 0x802304C0: nop

    // 0x802304C4: j           L_802305A0
    // 0x802304C8: nop

        goto L_802305A0;
    // 0x802304C8: nop

L_802304CC:
    // 0x802304CC: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x802304D0: lh          $v0, 0x28($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X28);
    // 0x802304D4: blez        $v0, L_802304E8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x802304D8: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_802304E8;
    }
    // 0x802304D8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802304DC: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x802304E0: j           L_802305A0
    // 0x802304E4: sh          $v0, 0x28($s1)
    MEM_H(0X28, ctx->r17) = ctx->r2;
        goto L_802305A0;
    // 0x802304E4: sh          $v0, 0x28($s1)
    MEM_H(0X28, ctx->r17) = ctx->r2;
L_802304E8:
    // 0x802304E8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802304EC: j           L_80230524
    // 0x802304F0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80230524;
    // 0x802304F0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_802304F4:
    // 0x802304F4: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x802304F8: lui         $v0, 0x24
    ctx->r2 = S32(0X24 << 16);
    // 0x802304FC: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80230500: beq         $v0, $zero, L_802305A0
    if (ctx->r2 == 0) {
        // 0x80230504: addiu       $v1, $zero, 0x12
        ctx->r3 = ADD32(0, 0X12);
            goto L_802305A0;
    }
    // 0x80230504: addiu       $v1, $zero, 0x12
    ctx->r3 = ADD32(0, 0X12);
    // 0x80230508: lhu         $v0, 0x14($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X14);
    // 0x8023050C: ori         $v0, $v0, 0x400
    ctx->r2 = ctx->r2 | 0X400;
    // 0x80230510: andi        $v0, $v0, 0xFFFD
    ctx->r2 = ctx->r2 & 0XFFFD;
    // 0x80230514: sh          $v0, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r2;
    // 0x80230518: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023051C: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
    // 0x80230520: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80230524:
    // 0x80230524: j           L_802305A0
    // 0x80230528: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_802305A0;
    // 0x80230528: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8023052C:
    // 0x8023052C: jal         0x8004F144
    // 0x80230530: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80230530: nop

    after_0:
    // 0x80230534: beq         $v0, $zero, L_80230578
    if (ctx->r2 == 0) {
        // 0x80230538: sw          $v0, 0x4($s1)
        MEM_W(0X4, ctx->r17) = ctx->r2;
            goto L_80230578;
    }
    // 0x80230538: sw          $v0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r2;
    // 0x8023053C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x80230540: sb          $a0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r4;
    // 0x80230544: lw          $v1, 0x4($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4);
    // 0x80230548: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8023054C: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x80230550: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x80230554: sb          $a0, 0x3($v0)
    MEM_B(0X3, ctx->r2) = ctx->r4;
    // 0x80230558: lw          $v1, 0x4($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4);
    // 0x8023055C: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x80230560: sh          $v0, 0x38($v1)
    MEM_H(0X38, ctx->r3) = ctx->r2;
    // 0x80230564: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x80230568: sh          $zero, 0x3A($v0)
    MEM_H(0X3A, ctx->r2) = 0;
    // 0x8023056C: lw          $v1, 0x4($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4);
    // 0x80230570: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x80230574: sh          $v0, 0x3C($v1)
    MEM_H(0X3C, ctx->r3) = ctx->r2;
L_80230578:
    // 0x80230578: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023057C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230580: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80230584:
    // 0x80230584: lh          $v0, 0x16($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X16);
    // 0x80230588: slti        $v0, $v0, 0x259
    ctx->r2 = SIGNED(ctx->r2) < 0X259 ? 1 : 0;
    // 0x8023058C: bne         $v0, $zero, L_802305A0
    if (ctx->r2 != 0) {
        // 0x80230590: nop
    
            goto L_802305A0;
    }
    // 0x80230590: nop

    // 0x80230594: lhu         $v0, 0x14($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X14);
    // 0x80230598: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8023059C: sh          $v0, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r2;
L_802305A0:
    // 0x802305A0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802305A4: beq         $v0, $zero, L_80230648
    if (ctx->r2 == 0) {
        // 0x802305A8: addu        $a3, $zero, $zero
        ctx->r7 = ADD32(0, 0);
            goto L_80230648;
    }
    // 0x802305A8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x802305AC: sh          $zero, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = 0;
    // 0x802305B0: addiu       $t2, $zero, 0x4210
    ctx->r10 = ADD32(0, 0X4210);
    // 0x802305B4: addiu       $t1, $zero, 0x1F
    ctx->r9 = ADD32(0, 0X1F);
    // 0x802305B8: addiu       $t0, $zero, -0x8000
    ctx->r8 = ADD32(0, -0X8000);
    // 0x802305BC: lui         $a2, 0x8024
    ctx->r6 = S32(0X8024 << 16);
    // 0x802305C0: addiu       $a2, $a2, -0x2000
    ctx->r6 = ADD32(ctx->r6, -0X2000);
    // 0x802305C4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
L_802305C8:
    // 0x802305C8: lh          $a0, 0x182($a1)
    ctx->r4 = MEM_H(ctx->r5, 0X182);
    // 0x802305CC: sh          $t2, 0x186($a1)
    MEM_H(0X186, ctx->r5) = ctx->r10;
    // 0x802305D0: lh          $v0, 0x0($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X0);
    // 0x802305D4: slt         $v0, $v0, $a0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x802305D8: beql        $v0, $zero, L_80230620
    if (ctx->r2 == 0) {
        // 0x802305DC: addiu       $a2, $a2, 0x2
        ctx->r6 = ADD32(ctx->r6, 0X2);
            goto L_80230620;
    }
    goto skip_2;
    // 0x802305DC: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
    skip_2:
    // 0x802305E0: addiu       $v1, $a0, -0x6A
    ctx->r3 = ADD32(ctx->r4, -0X6A);
    // 0x802305E4: bltzl       $v1, L_802305EC
    if (SIGNED(ctx->r3) < 0) {
        // 0x802305E8: addiu       $v1, $a0, -0x5B
        ctx->r3 = ADD32(ctx->r4, -0X5B);
            goto L_802305EC;
    }
    goto skip_3;
    // 0x802305E8: addiu       $v1, $a0, -0x5B
    ctx->r3 = ADD32(ctx->r4, -0X5B);
    skip_3:
L_802305EC:
    // 0x802305EC: sra         $v1, $v1, 4
    ctx->r3 = S32(SIGNED(ctx->r3) >> 4);
    // 0x802305F0: subu        $v1, $t1, $v1
    ctx->r3 = SUB32(ctx->r9, ctx->r3);
    // 0x802305F4: nor         $v0, $zero, $v1
    ctx->r2 = ~(0 | ctx->r3);
    // 0x802305F8: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x802305FC: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80230600: sra         $a0, $v1, 1
    ctx->r4 = S32(SIGNED(ctx->r3) >> 1);
    // 0x80230604: sll         $v1, $v1, 10
    ctx->r3 = S32(ctx->r3 << 10);
    // 0x80230608: sll         $v0, $a0, 5
    ctx->r2 = S32(ctx->r4 << 5);
    // 0x8023060C: or          $v0, $v0, $t0
    ctx->r2 = ctx->r2 | ctx->r8;
    // 0x80230610: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80230614: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x80230618: sh          $v1, 0x186($a1)
    MEM_H(0X186, ctx->r5) = ctx->r3;
    // 0x8023061C: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
L_80230620:
    // 0x80230620: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x80230624: slti        $v0, $a3, 0x4
    ctx->r2 = SIGNED(ctx->r7) < 0X4 ? 1 : 0;
    // 0x80230628: bne         $v0, $zero, L_802305C8
    if (ctx->r2 != 0) {
        // 0x8023062C: addiu       $a1, $a1, 0x8
        ctx->r5 = ADD32(ctx->r5, 0X8);
            goto L_802305C8;
    }
    // 0x8023062C: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x80230630: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x80230634: lhu         $v1, 0x46($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X46);
    // 0x80230638: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023063C: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80230640: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80230644: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_80230648:
    // 0x80230648: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8023064C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80230650: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80230654: jr          $ra
    // 0x80230658: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80230658: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022ECF0_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022ECF0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022ECF4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022ECF8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022ECFC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022ED00: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022ED04: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022ED08: lbu         $v0, 0x4($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X4);
    // 0x8022ED0C: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x8022ED10: beq         $v0, $zero, L_8022EDAC
    if (ctx->r2 == 0) {
        // 0x8022ED14: addu        $s2, $a1, $zero
        ctx->r18 = ADD32(ctx->r5, 0);
            goto L_8022EDAC;
    }
    // 0x8022ED14: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x8022ED18: lhu         $v0, 0x6($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X6);
    // 0x8022ED1C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022ED20: sra         $v0, $v0, 18
    ctx->r2 = S32(SIGNED(ctx->r2) >> 18);
    // 0x8022ED24: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x8022ED28: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x8022ED2C: jal         0x8003B878
    // 0x8022ED30: lbu         $s0, -0x2060($s0)
    ctx->r16 = MEM_BU(ctx->r16, -0X2060);
    func_8003B878_16C78(rdram, ctx);
        goto after_0;
    // 0x8022ED30: lbu         $s0, -0x2060($s0)
    ctx->r16 = MEM_BU(ctx->r16, -0X2060);
    after_0:
    // 0x8022ED34: lbu         $a0, 0x5($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X5);
    // 0x8022ED38: sll         $v1, $a0, 8
    ctx->r3 = S32(ctx->r4 << 8);
    // 0x8022ED3C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8022ED40: sll         $v1, $v1, 8
    ctx->r3 = S32(ctx->r3 << 8);
    // 0x8022ED44: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8022ED48: subu        $v1, $s2, $v1
    ctx->r3 = SUB32(ctx->r18, ctx->r3);
    // 0x8022ED4C: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
    // 0x8022ED50: lh          $v1, 0xA($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XA);
    // 0x8022ED54: lhu         $a0, 0xC($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0XC);
    // 0x8022ED58: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022ED5C: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x8022ED60: sw          $v1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r3;
    // 0x8022ED64: lh          $a1, 0xE($s1)
    ctx->r5 = MEM_H(ctx->r17, 0XE);
    // 0x8022ED68: lui         $v1, 0x3D48
    ctx->r3 = S32(0X3D48 << 16);
    // 0x8022ED6C: or          $v1, $s0, $v1
    ctx->r3 = ctx->r16 | ctx->r3;
    // 0x8022ED70: addiu       $a0, $s0, 0x1F
    ctx->r4 = ADD32(ctx->r16, 0X1F);
    // 0x8022ED74: sw          $v1, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r3;
    // 0x8022ED78: lui         $v1, 0x2E
    ctx->r3 = S32(0X2E << 16);
    // 0x8022ED7C: or          $v1, $a0, $v1
    ctx->r3 = ctx->r4 | ctx->r3;
    // 0x8022ED80: ori         $s0, $s0, 0x1F00
    ctx->r16 = ctx->r16 | 0X1F00;
    // 0x8022ED84: ori         $a0, $a0, 0x1F00
    ctx->r4 = ctx->r4 | 0X1F00;
    // 0x8022ED88: sw          $v1, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r3;
    // 0x8022ED8C: sw          $s0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r16;
    // 0x8022ED90: sw          $a0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r4;
    // 0x8022ED94: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8022ED98: sw          $a1, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r5;
    // 0x8022ED9C: lhu         $a0, 0x8($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X8);
    // 0x8022EDA0: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x8022EDA4: sw          $v1, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r3;
    // 0x8022EDA8: sw          $a0, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r4;
L_8022EDAC:
    // 0x8022EDAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022EDB0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022EDB4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022EDB8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022EDBC: jr          $ra
    // 0x8022EDC0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022EDC0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8022EDC4: nop

    // 0x8022EDC8: nop

    // 0x8022EDCC: nop

;}
RECOMP_FUNC void func_80228640_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228640: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80228644: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228648: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022864C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80228650: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80228654: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80228658: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022865C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80228660: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80228664: lw          $v0, -0x2B20($at)
    ctx->r2 = MEM_W(ctx->r1, -0X2B20);
    // 0x80228668: jalr        $v0
    // 0x8022866C: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022866C: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    after_0:
    // 0x80228670: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x80228674: bne         $v0, $zero, L_80228684
    if (ctx->r2 != 0) {
        // 0x80228678: nop
    
            goto L_80228684;
    }
    // 0x80228678: nop

    // 0x8022867C: jal         0x8005044C
    // 0x80228680: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x80228680: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_80228684:
    // 0x80228684: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80228688: lbu         $v0, -0x3A49($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3A49);
    // 0x8022868C: bne         $v0, $zero, L_8022869C
    if (ctx->r2 != 0) {
        // 0x80228690: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022869C;
    }
    // 0x80228690: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228694: jal         0x80228CC8
    // 0x80228698: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_80228CC8_ovl3(rdram, ctx);
        goto after_2;
    // 0x80228698: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
L_8022869C:
    // 0x8022869C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802286A0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802286A4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802286A8: jr          $ra
    // 0x802286AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802286AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022CB50_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CB50: lhu         $v0, 0x350($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X350);
    // 0x8022CB54: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022CB58: sh          $v0, 0x350($a0)
    MEM_H(0X350, ctx->r4) = ctx->r2;
    // 0x8022CB5C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022CB60: bne         $v0, $zero, L_8022CB6C
    if (ctx->r2 != 0) {
        // 0x8022CB64: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022CB6C;
    }
    // 0x8022CB64: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CB68: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_8022CB6C:
    // 0x8022CB6C: jr          $ra
    // 0x8022CB70: nop

    TRACE_RETURN()
    return;
    // 0x8022CB70: nop

;}
RECOMP_FUNC void func_80226880_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226880: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226884: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226888: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022688C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226890: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x80226894: bne         $v0, $zero, L_802268D4
    if (ctx->r2 != 0) {
        // 0x80226898: nop
    
            goto L_802268D4;
    }
    // 0x80226898: nop

    // 0x8022689C: jal         0x8004F418
    // 0x802268A0: lw          $a0, 0x3C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X3C);
    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x802268A0: lw          $a0, 0x3C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X3C);
    after_0:
    // 0x802268A4: jal         0x8004F4F8
    // 0x802268A8: lw          $a0, 0x38($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X38);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_1;
    // 0x802268A8: lw          $a0, 0x38($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X38);
    after_1:
    // 0x802268AC: jal         0x8004F418
    // 0x802268B0: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    func_8004F418_2A818(rdram, ctx);
        goto after_2;
    // 0x802268B0: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    after_2:
    // 0x802268B4: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x802268B8: addiu       $s0, $s0, -0x3764
    ctx->r16 = ADD32(ctx->r16, -0X3764);
    // 0x802268BC: jal         0x8005FA7C
    // 0x802268C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_3;
    // 0x802268C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x802268C4: jal         0x8005FA7C
    // 0x802268C8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_4;
    // 0x802268C8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_4:
    // 0x802268CC: jal         0x802269B4
    // 0x802268D0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_802269B4_ovl3(rdram, ctx);
        goto after_5;
    // 0x802268D0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_5:
L_802268D4:
    // 0x802268D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802268D8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802268DC: jr          $ra
    // 0x802268E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802268E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023B3D0_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B3D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023B3D4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023B3D8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023B3DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023B3E0: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x8023B3E4: bne         $v0, $zero, L_8023B464
    if (ctx->r2 != 0) {
        // 0x8023B3E8: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_8023B464;
    }
    // 0x8023B3E8: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x8023B3EC: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8023B3F0: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x8023B3F4: bne         $v1, $v0, L_8023B414
    if (ctx->r3 != ctx->r2) {
        // 0x8023B3F8: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_8023B414;
    }
    // 0x8023B3F8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023B3FC: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8023B400: lbu         $v1, -0x3BC8($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3BC8);
    // 0x8023B404: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B408: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x8023B40C: j           L_8023B428
    // 0x8023B410: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
        goto L_8023B428;
    // 0x8023B410: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_8023B414:
    // 0x8023B414: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8023B418: lbu         $v1, -0x3BC8($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3BC8);
    // 0x8023B41C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B420: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x8023B424: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8023B428:
    // 0x8023B428: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B42C: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x8023B430: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8023B434: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B438: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x8023B43C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B440: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x8023B444: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B448: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x8023B44C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B450: sb          $v1, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r3;
    // 0x8023B454: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x8023B458: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8023B45C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8023B460: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
L_8023B464:
    // 0x8023B464: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x8023B468: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8023B46C: bne         $v1, $v0, L_8023B4C4
    if (ctx->r3 != ctx->r2) {
        // 0x8023B470: addiu       $v0, $zero, 0x72
        ctx->r2 = ADD32(0, 0X72);
            goto L_8023B4C4;
    }
    // 0x8023B470: addiu       $v0, $zero, 0x72
    ctx->r2 = ADD32(0, 0X72);
    // 0x8023B474: jal         0x8004F144
    // 0x8023B478: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8023B478: nop

    after_0:
    // 0x8023B47C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023B480: beq         $v1, $zero, L_8023B4BC
    if (ctx->r3 == 0) {
        // 0x8023B484: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023B4BC;
    }
    // 0x8023B484: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023B488: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8023B48C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8023B490: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8023B494: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
    // 0x8023B498: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023B49C: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
    // 0x8023B4A0: addiu       $v0, $zero, 0x85
    ctx->r2 = ADD32(0, 0X85);
    // 0x8023B4A4: sh          $v0, 0x1C($v1)
    MEM_H(0X1C, ctx->r3) = ctx->r2;
    // 0x8023B4A8: addiu       $v0, $zero, -0x16E
    ctx->r2 = ADD32(0, -0X16E);
    // 0x8023B4AC: sh          $v0, 0x1E($v1)
    MEM_H(0X1E, ctx->r3) = ctx->r2;
    // 0x8023B4B0: addiu       $v0, $zero, -0xC8
    ctx->r2 = ADD32(0, -0XC8);
    // 0x8023B4B4: sb          $zero, 0xD($v1)
    MEM_B(0XD, ctx->r3) = 0;
    // 0x8023B4B8: sh          $v0, 0x20($v1)
    MEM_H(0X20, ctx->r3) = ctx->r2;
L_8023B4BC:
    // 0x8023B4BC: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x8023B4C0: addiu       $v0, $zero, 0x72
    ctx->r2 = ADD32(0, 0X72);
L_8023B4C4:
    // 0x8023B4C4: bne         $v1, $v0, L_8023B4D4
    if (ctx->r3 != ctx->r2) {
        // 0x8023B4C8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023B4D4;
    }
    // 0x8023B4C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023B4CC: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x8023B4D0: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
L_8023B4D4:
    // 0x8023B4D4: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x8023B4D8: addiu       $v0, $zero, 0xAC
    ctx->r2 = ADD32(0, 0XAC);
    // 0x8023B4DC: bne         $v1, $v0, L_8023B4EC
    if (ctx->r3 != ctx->r2) {
        // 0x8023B4E0: nop
    
            goto L_8023B4EC;
    }
    // 0x8023B4E0: nop

    // 0x8023B4E4: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x8023B4E8: sb          $zero, 0x9($v1)
    MEM_B(0X9, ctx->r3) = 0;
L_8023B4EC:
    // 0x8023B4EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023B4F0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023B4F4: jr          $ra
    // 0x8023B4F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023B4F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80234E10_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234E10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80234E14: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80234E18: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x80234E1C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80234E20: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234E24: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80234E28: lw          $v0, -0x1864($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1864);
    // 0x80234E2C: jalr        $v0
    // 0x80234E30: addiu       $a1, $a0, 0xD0
    ctx->r5 = ADD32(ctx->r4, 0XD0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80234E30: addiu       $a1, $a0, 0xD0
    ctx->r5 = ADD32(ctx->r4, 0XD0);
    after_0:
    // 0x80234E34: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80234E38: jr          $ra
    // 0x80234E3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80234E3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022832C_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022832C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80228330: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228334: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228338: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022833C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80228340: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80228344: bne         $v0, $zero, L_80228374
    if (ctx->r2 != 0) {
        // 0x80228348: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_80228374;
    }
    // 0x80228348: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x8022834C: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x80228350: jal         0x80050294
    // 0x80228354: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80228354: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80228358: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022835C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80228360: jal         0x802284C0
    // 0x80228364: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_802284C0_ovl3(rdram, ctx);
        goto after_1;
    // 0x80228364: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80228368: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022836C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228370: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80228374:
    // 0x80228374: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80228378: lbu         $v0, -0x3A47($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3A47);
    // 0x8022837C: bne         $v0, $zero, L_802284A4
    if (ctx->r2 != 0) {
        // 0x80228380: addiu       $v0, $zero, 0x50
        ctx->r2 = ADD32(0, 0X50);
            goto L_802284A4;
    }
    // 0x80228380: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x80228384: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80228388: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x8022838C: beq         $v1, $v0, L_80228444
    if (ctx->r3 == ctx->r2) {
        // 0x80228390: slti        $v0, $v1, 0x51
        ctx->r2 = SIGNED(ctx->r3) < 0X51 ? 1 : 0;
            goto L_80228444;
    }
    // 0x80228390: slti        $v0, $v1, 0x51
    ctx->r2 = SIGNED(ctx->r3) < 0X51 ? 1 : 0;
    // 0x80228394: beq         $v0, $zero, L_802283D8
    if (ctx->r2 == 0) {
        // 0x80228398: addiu       $v0, $zero, 0x32
        ctx->r2 = ADD32(0, 0X32);
            goto L_802283D8;
    }
    // 0x80228398: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    // 0x8022839C: beq         $v1, $v0, L_80228434
    if (ctx->r3 == ctx->r2) {
        // 0x802283A0: slti        $v0, $v1, 0x33
        ctx->r2 = SIGNED(ctx->r3) < 0X33 ? 1 : 0;
            goto L_80228434;
    }
    // 0x802283A0: slti        $v0, $v1, 0x33
    ctx->r2 = SIGNED(ctx->r3) < 0X33 ? 1 : 0;
    // 0x802283A4: beq         $v0, $zero, L_802283BC
    if (ctx->r2 == 0) {
        // 0x802283A8: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_802283BC;
    }
    // 0x802283A8: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x802283AC: beq         $v1, $v0, L_80228420
    if (ctx->r3 == ctx->r2) {
        // 0x802283B0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80228420;
    }
    // 0x802283B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802283B4: j           L_802284A4
    // 0x802283B8: nop

        goto L_802284A4;
    // 0x802283B8: nop

L_802283BC:
    // 0x802283BC: addiu       $v0, $zero, 0x39
    ctx->r2 = ADD32(0, 0X39);
    // 0x802283C0: beq         $v1, $v0, L_80228468
    if (ctx->r3 == ctx->r2) {
        // 0x802283C4: addiu       $v0, $zero, 0x46
        ctx->r2 = ADD32(0, 0X46);
            goto L_80228468;
    }
    // 0x802283C4: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
    // 0x802283C8: beq         $v1, $v0, L_80228420
    if (ctx->r3 == ctx->r2) {
        // 0x802283CC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80228420;
    }
    // 0x802283CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802283D0: j           L_802284A4
    // 0x802283D4: nop

        goto L_802284A4;
    // 0x802283D4: nop

L_802283D8:
    // 0x802283D8: addiu       $v0, $zero, 0x11D
    ctx->r2 = ADD32(0, 0X11D);
    // 0x802283DC: beq         $v1, $v0, L_80228468
    if (ctx->r3 == ctx->r2) {
        // 0x802283E0: slti        $v0, $v1, 0x11E
        ctx->r2 = SIGNED(ctx->r3) < 0X11E ? 1 : 0;
            goto L_80228468;
    }
    // 0x802283E0: slti        $v0, $v1, 0x11E
    ctx->r2 = SIGNED(ctx->r3) < 0X11E ? 1 : 0;
    // 0x802283E4: beq         $v0, $zero, L_80228404
    if (ctx->r2 == 0) {
        // 0x802283E8: addiu       $v0, $zero, 0xF0
        ctx->r2 = ADD32(0, 0XF0);
            goto L_80228404;
    }
    // 0x802283E8: addiu       $v0, $zero, 0xF0
    ctx->r2 = ADD32(0, 0XF0);
    // 0x802283EC: beq         $v1, $v0, L_80228478
    if (ctx->r3 == ctx->r2) {
        // 0x802283F0: addiu       $v0, $zero, 0x10E
        ctx->r2 = ADD32(0, 0X10E);
            goto L_80228478;
    }
    // 0x802283F0: addiu       $v0, $zero, 0x10E
    ctx->r2 = ADD32(0, 0X10E);
    // 0x802283F4: beq         $v1, $v0, L_8022845C
    if (ctx->r3 == ctx->r2) {
        // 0x802283F8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022845C;
    }
    // 0x802283F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802283FC: j           L_802284A4
    // 0x80228400: nop

        goto L_802284A4;
    // 0x80228400: nop

L_80228404:
    // 0x80228404: addiu       $v0, $zero, 0x172
    ctx->r2 = ADD32(0, 0X172);
    // 0x80228408: beq         $v1, $v0, L_80228478
    if (ctx->r3 == ctx->r2) {
        // 0x8022840C: addiu       $v0, $zero, 0x190
        ctx->r2 = ADD32(0, 0X190);
            goto L_80228478;
    }
    // 0x8022840C: addiu       $v0, $zero, 0x190
    ctx->r2 = ADD32(0, 0X190);
    // 0x80228410: beq         $v1, $v0, L_80228490
    if (ctx->r3 == ctx->r2) {
        // 0x80228414: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80228490;
    }
    // 0x80228414: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228418: j           L_802284A4
    // 0x8022841C: nop

        goto L_802284A4;
    // 0x8022841C: nop

L_80228420:
    // 0x80228420: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80228424: jal         0x802284C0
    // 0x80228428: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    func_802284C0_ovl3(rdram, ctx);
        goto after_2;
    // 0x80228428: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    after_2:
    // 0x8022842C: j           L_802284A4
    // 0x80228430: nop

        goto L_802284A4;
    // 0x80228430: nop

L_80228434:
    // 0x80228434: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228438: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022843C: j           L_80228498
    // 0x80228440: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
        goto L_80228498;
    // 0x80228440: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
L_80228444:
    // 0x80228444: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228448: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022844C: jal         0x802284C0
    // 0x80228450: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    func_802284C0_ovl3(rdram, ctx);
        goto after_3;
    // 0x80228450: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    after_3:
    // 0x80228454: j           L_802284A4
    // 0x80228458: nop

        goto L_802284A4;
    // 0x80228458: nop

L_8022845C:
    // 0x8022845C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80228460: j           L_80228498
    // 0x80228464: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
        goto L_80228498;
    // 0x80228464: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
L_80228468:
    // 0x80228468: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022846C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228470: j           L_802284A4
    // 0x80228474: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
        goto L_802284A4;
    // 0x80228474: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
L_80228478:
    // 0x80228478: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022847C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80228480: jal         0x802284C0
    // 0x80228484: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    func_802284C0_ovl3(rdram, ctx);
        goto after_4;
    // 0x80228484: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_4:
    // 0x80228488: j           L_802284A4
    // 0x8022848C: nop

        goto L_802284A4;
    // 0x8022848C: nop

L_80228490:
    // 0x80228490: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80228494: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
L_80228498:
    // 0x80228498: jal         0x802284C0
    // 0x8022849C: nop

    func_802284C0_ovl3(rdram, ctx);
        goto after_5;
    // 0x8022849C: nop

    after_5:
    // 0x802284A0: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
L_802284A4:
    // 0x802284A4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802284A8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802284AC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802284B0: jr          $ra
    // 0x802284B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802284B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80236F10_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236F10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80236F14: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80236F18: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80236F1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80236F20: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x80236F24: sll         $v1, $v0, 24
    ctx->r3 = S32(ctx->r2 << 24);
    // 0x80236F28: sra         $a0, $v1, 24
    ctx->r4 = S32(SIGNED(ctx->r3) >> 24);
    // 0x80236F2C: blez        $a0, L_80237024
    if (SIGNED(ctx->r4) <= 0) {
        // 0x80236F30: lui         $v0, 0x2AAA
        ctx->r2 = S32(0X2AAA << 16);
            goto L_80237024;
    }
    // 0x80236F30: lui         $v0, 0x2AAA
    ctx->r2 = S32(0X2AAA << 16);
    // 0x80236F34: ori         $v0, $v0, 0xAAAB
    ctx->r2 = ctx->r2 | 0XAAAB;
    // 0x80236F38: mult        $a0, $v0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80236F3C: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x80236F40: mfhi        $a1
    ctx->r5 = hi;
    // 0x80236F44: subu        $v1, $a1, $v1
    ctx->r3 = SUB32(ctx->r5, ctx->r3);
    // 0x80236F48: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80236F4C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80236F50: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80236F54: subu        $v0, $a0, $v0
    ctx->r2 = SUB32(ctx->r4, ctx->r2);
    // 0x80236F58: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80236F5C: bne         $v0, $zero, L_80236F7C
    if (ctx->r2 != 0) {
        // 0x80236F60: nop
    
            goto L_80236F7C;
    }
    // 0x80236F60: nop

    // 0x80236F64: lbu         $v1, 0x22($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X22);
    // 0x80236F68: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x80236F6C: sltiu       $v0, $v0, 0x80
    ctx->r2 = ctx->r2 < 0X80 ? 1 : 0;
    // 0x80236F70: beq         $v0, $zero, L_80236F7C
    if (ctx->r2 == 0) {
        // 0x80236F74: addiu       $v0, $v1, 0x20
        ctx->r2 = ADD32(ctx->r3, 0X20);
            goto L_80236F7C;
    }
    // 0x80236F74: addiu       $v0, $v1, 0x20
    ctx->r2 = ADD32(ctx->r3, 0X20);
    // 0x80236F78: sb          $v0, 0x22($s0)
    MEM_B(0X22, ctx->r16) = ctx->r2;
L_80236F7C:
    // 0x80236F7C: jal         0x800A3450
    // 0x80236F80: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80236F80: nop

    after_0:
    // 0x80236F84: lhu         $v1, 0x1C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1C);
    // 0x80236F88: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80236F8C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80236F90: jal         0x800A3450
    // 0x80236F94: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x80236F94: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    after_1:
    // 0x80236F98: lhu         $v1, 0x20($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X20);
    // 0x80236F9C: lbu         $a0, 0xE($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XE);
    // 0x80236FA0: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80236FA4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80236FA8: andi        $a0, $a0, 0x1
    ctx->r4 = ctx->r4 & 0X1;
    // 0x80236FAC: bne         $a0, $zero, L_80236FCC
    if (ctx->r4 != 0) {
        // 0x80236FB0: sh          $v1, 0x20($s0)
        MEM_H(0X20, ctx->r16) = ctx->r3;
            goto L_80236FCC;
    }
    // 0x80236FB0: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    // 0x80236FB4: jal         0x800A3450
    // 0x80236FB8: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x80236FB8: nop

    after_2:
    // 0x80236FBC: lhu         $v1, 0x1E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1E);
    // 0x80236FC0: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80236FC4: j           L_80236FE0
    // 0x80236FC8: addiu       $v1, $v1, -0x2
    ctx->r3 = ADD32(ctx->r3, -0X2);
        goto L_80236FE0;
    // 0x80236FC8: addiu       $v1, $v1, -0x2
    ctx->r3 = ADD32(ctx->r3, -0X2);
L_80236FCC:
    // 0x80236FCC: jal         0x800A3450
    // 0x80236FD0: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80236FD0: nop

    after_3:
    // 0x80236FD4: lhu         $v1, 0x1E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1E);
    // 0x80236FD8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80236FDC: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
L_80236FE0:
    // 0x80236FE0: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80236FE4: sh          $v1, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r3;
    // 0x80236FE8: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x80236FEC: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80236FF0: bne         $v0, $zero, L_80237004
    if (ctx->r2 != 0) {
        // 0x80236FF4: lui         $a0, 0xFFFD
        ctx->r4 = S32(0XFFFD << 16);
            goto L_80237004;
    }
    // 0x80236FF4: lui         $a0, 0xFFFD
    ctx->r4 = S32(0XFFFD << 16);
    // 0x80236FF8: lhu         $v0, 0x24($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X24);
    // 0x80236FFC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80237000: sh          $v0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r2;
L_80237004:
    // 0x80237004: lbu         $v1, 0xE($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XE);
    // 0x80237008: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x8023700C: ori         $a0, $a0, 0xFDFE
    ctx->r4 = ctx->r4 | 0XFDFE;
    // 0x80237010: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80237014: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80237018: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x8023701C: j           L_8023702C
    // 0x80237020: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
        goto L_8023702C;
    // 0x80237020: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
L_80237024:
    // 0x80237024: jal         0x8004F5C4
    // 0x80237028: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_4;
    // 0x80237028: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
L_8023702C:
    // 0x8023702C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80237030: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80237034: jr          $ra
    // 0x80237038: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80237038: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022AEFC_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AEFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022AF00: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022AF04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022AF08: jal         0x8004F144
    // 0x8022AF0C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8022AF0C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x8022AF10: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022AF14: beq         $a0, $zero, L_8022AF54
    if (ctx->r4 == 0) {
        // 0x8022AF18: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_8022AF54;
    }
    // 0x8022AF18: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022AF1C: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x8022AF20: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022AF24: sb          $v0, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r2;
    // 0x8022AF28: addiu       $v0, $zero, 0x42
    ctx->r2 = ADD32(0, 0X42);
    // 0x8022AF2C: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
    // 0x8022AF30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022AF34: sb          $v0, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r2;
    // 0x8022AF38: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022AF3C: sb          $v0, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r2;
    // 0x8022AF40: lw          $a1, 0x450($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X450);
    // 0x8022AF44: addiu       $a0, $a0, 0x38
    ctx->r4 = ADD32(ctx->r4, 0X38);
    // 0x8022AF48: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022AF4C: jal         0x8009A3B4
    // 0x8022AF50: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022AF50: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_1:
L_8022AF54:
    // 0x8022AF54: lw          $v1, 0x450($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X450);
    // 0x8022AF58: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8022AF5C: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8022AF60: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8022AF64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022AF68: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022AF6C: jr          $ra
    // 0x8022AF70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022AF70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228A48_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228A48: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80228A4C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228A50: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228A54: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80228A58: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80228A5C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80228A60: bne         $v0, $zero, L_80228A94
    if (ctx->r2 != 0) {
        // 0x80228A64: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_80228A94;
    }
    // 0x80228A64: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x80228A68: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80228A6C: jal         0x80050294
    // 0x80228A70: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80228A70: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80228A74: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228A78: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80228A7C: jal         0x80228C84
    // 0x80228A80: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_80228C84_ovl3(rdram, ctx);
        goto after_1;
    // 0x80228A80: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80228A84: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80228A88: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x80228A8C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228A90: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80228A94:
    // 0x80228A94: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80228A98: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x80228A9C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80228AA0: beq         $v1, $v0, L_80228AB8
    if (ctx->r3 == ctx->r2) {
        // 0x80228AA4: addiu       $v0, $zero, 0x4B
        ctx->r2 = ADD32(0, 0X4B);
            goto L_80228AB8;
    }
    // 0x80228AA4: addiu       $v0, $zero, 0x4B
    ctx->r2 = ADD32(0, 0X4B);
    // 0x80228AA8: beq         $v1, $v0, L_80228AC8
    if (ctx->r3 == ctx->r2) {
        // 0x80228AAC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80228AC8;
    }
    // 0x80228AAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228AB0: j           L_80228AD8
    // 0x80228AB4: nop

        goto L_80228AD8;
    // 0x80228AB4: nop

L_80228AB8:
    // 0x80228AB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228ABC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80228AC0: j           L_80228AD0
    // 0x80228AC4: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
        goto L_80228AD0;
    // 0x80228AC4: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
L_80228AC8:
    // 0x80228AC8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80228ACC: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
L_80228AD0:
    // 0x80228AD0: jal         0x80228C84
    // 0x80228AD4: nop

    func_80228C84_ovl3(rdram, ctx);
        goto after_2;
    // 0x80228AD4: nop

    after_2:
L_80228AD8:
    // 0x80228AD8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80228ADC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80228AE0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228AE4: jr          $ra
    // 0x80228AE8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80228AE8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022B9C0_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B9C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B9C4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022B9C8: jal         0x8004F418
    // 0x8022B9CC: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x8022B9CC: nop

    after_0:
    // 0x8022B9D0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022B9D4: jr          $ra
    // 0x8022B9D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B9D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802378B0_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802378B0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802378B4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802378B8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802378BC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802378C0: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x802378C4: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x802378C8: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x802378CC: sltiu       $v1, $v1, 0x2
    ctx->r3 = ctx->r3 < 0X2 ? 1 : 0;
    // 0x802378D0: bne         $v1, $zero, L_80237960
    if (ctx->r3 != 0) {
        // 0x802378D4: sb          $v0, 0x0($s0)
        MEM_B(0X0, ctx->r16) = ctx->r2;
            goto L_80237960;
    }
    // 0x802378D4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x802378D8: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x802378DC: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x802378E0: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    // 0x802378E4: addiu       $v1, $v0, -0x2
    ctx->r3 = ADD32(ctx->r2, -0X2);
    // 0x802378E8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802378EC: beq         $v1, $v0, L_8023791C
    if (ctx->r3 == ctx->r2) {
        // 0x802378F0: slti        $v0, $v1, 0x3
        ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
            goto L_8023791C;
    }
    // 0x802378F0: slti        $v0, $v1, 0x3
    ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x802378F4: bne         $v0, $zero, L_8023790C
    if (ctx->r2 != 0) {
        // 0x802378F8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8023790C;
    }
    // 0x802378F8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802378FC: beq         $v1, $v0, L_80237928
    if (ctx->r3 == ctx->r2) {
        // 0x80237900: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80237928;
    }
    // 0x80237900: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80237904: j           L_80237934
    // 0x80237908: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_80237934;
    // 0x80237908: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8023790C:
    // 0x8023790C: bgezl       $v1, L_80237930
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80237910: sb          $zero, 0x10($sp)
        MEM_B(0X10, ctx->r29) = 0;
            goto L_80237930;
    }
    goto skip_0;
    // 0x80237910: sb          $zero, 0x10($sp)
    MEM_B(0X10, ctx->r29) = 0;
    skip_0:
    // 0x80237914: j           L_80237934
    // 0x80237918: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_80237934;
    // 0x80237918: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8023791C:
    // 0x8023791C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237920: j           L_80237930
    // 0x80237924: sb          $v0, 0x10($sp)
    MEM_B(0X10, ctx->r29) = ctx->r2;
        goto L_80237930;
    // 0x80237924: sb          $v0, 0x10($sp)
    MEM_B(0X10, ctx->r29) = ctx->r2;
L_80237928:
    // 0x80237928: sb          $zero, 0x10($sp)
    MEM_B(0X10, ctx->r29) = 0;
    // 0x8023792C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80237930:
    // 0x80237930: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80237934:
    // 0x80237934: jal         0x8004D5D4
    // 0x80237938: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80237938: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_0:
    // 0x8023793C: jal         0x8002C678
    // 0x80237940: addiu       $a0, $s0, 0x18
    ctx->r4 = ADD32(ctx->r16, 0X18);
    func_8002C678_7A78(rdram, ctx);
        goto after_1;
    // 0x80237940: addiu       $a0, $s0, 0x18
    ctx->r4 = ADD32(ctx->r16, 0X18);
    after_1:
    // 0x80237944: lui         $v0, 0x280
    ctx->r2 = S32(0X280 << 16);
    // 0x80237948: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x8023794C: sh          $zero, 0x28($s0)
    MEM_H(0X28, ctx->r16) = 0;
    // 0x80237950: sh          $zero, 0x20($s0)
    MEM_H(0X20, ctx->r16) = 0;
    // 0x80237954: sh          $zero, 0x18($s0)
    MEM_H(0X18, ctx->r16) = 0;
    // 0x80237958: j           L_80237A54
    // 0x8023795C: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
        goto L_80237A54;
    // 0x8023795C: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
L_80237960:
    // 0x80237960: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80237964: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x80237968: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8023796C: addiu       $a0, $a0, -0x1700
    ctx->r4 = ADD32(ctx->r4, -0X1700);
    // 0x80237970: sh          $zero, 0x30($s0)
    MEM_H(0X30, ctx->r16) = 0;
    // 0x80237974: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80237978: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8023797C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80237980: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80237984: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x80237988: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8023798C: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80237990: addiu       $a0, $a0, -0x16E8
    ctx->r4 = ADD32(ctx->r4, -0X16E8);
    // 0x80237994: sh          $v0, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = ctx->r2;
    // 0x80237998: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x8023799C: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x802379A0: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x802379A4: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x802379A8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802379AC: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x802379B0: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x802379B4: bne         $v1, $zero, L_80237A0C
    if (ctx->r3 != 0) {
        // 0x802379B8: sh          $v0, 0x2E($s0)
        MEM_H(0X2E, ctx->r16) = ctx->r2;
            goto L_80237A0C;
    }
    // 0x802379B8: sh          $v0, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r2;
    // 0x802379BC: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x802379C0: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x802379C4: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x802379C8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802379CC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802379D0: lhu         $v0, -0x16D0($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X16D0);
    // 0x802379D4: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x802379D8: addiu       $a0, $a0, -0x16B8
    ctx->r4 = ADD32(ctx->r4, -0X16B8);
    // 0x802379DC: sh          $v0, 0x32($s0)
    MEM_H(0X32, ctx->r16) = ctx->r2;
    // 0x802379E0: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x802379E4: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x802379E8: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x802379EC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x802379F0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802379F4: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x802379F8: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    // 0x802379FC: addiu       $a0, $zero, 0x14F
    ctx->r4 = ADD32(0, 0X14F);
    // 0x80237A00: sh          $zero, 0x36($s0)
    MEM_H(0X36, ctx->r16) = 0;
    // 0x80237A04: jal         0x8002A33C
    // 0x80237A08: sh          $v0, 0x34($s0)
    MEM_H(0X34, ctx->r16) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x80237A08: sh          $v0, 0x34($s0)
    MEM_H(0X34, ctx->r16) = ctx->r2;
    after_2:
L_80237A0C:
    // 0x80237A0C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237A10: jal         0x8004D5D4
    // 0x80237A14: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_3;
    // 0x80237A14: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    after_3:
    // 0x80237A18: jal         0x8002C678
    // 0x80237A1C: addiu       $a0, $s0, 0x18
    ctx->r4 = ADD32(ctx->r16, 0X18);
    func_8002C678_7A78(rdram, ctx);
        goto after_4;
    // 0x80237A1C: addiu       $a0, $s0, 0x18
    ctx->r4 = ADD32(ctx->r16, 0X18);
    after_4:
    // 0x80237A20: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80237A24: lui         $v1, 0x280
    ctx->r3 = S32(0X280 << 16);
    // 0x80237A28: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x80237A2C: sw          $v1, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r3;
    // 0x80237A30: addiu       $v1, $zero, 0x20
    ctx->r3 = ADD32(0, 0X20);
    // 0x80237A34: sh          $zero, 0x28($s0)
    MEM_H(0X28, ctx->r16) = 0;
    // 0x80237A38: sh          $zero, 0x20($s0)
    MEM_H(0X20, ctx->r16) = 0;
    // 0x80237A3C: sh          $zero, 0x18($s0)
    MEM_H(0X18, ctx->r16) = 0;
    // 0x80237A40: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80237A44: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80237A48: sb          $v1, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r3;
    // 0x80237A4C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80237A50: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80237A54:
    // 0x80237A54: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80237A58: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80237A5C: jr          $ra
    // 0x80237A60: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80237A60: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022A368_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A368: lbu         $v0, 0x38E($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X38E);
    // 0x8022A36C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022A370: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8022A374: addiu       $a0, $a0, 0x424
    ctx->r4 = ADD32(ctx->r4, 0X424);
    // 0x8022A378: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x8022A37C: sh          $zero, 0x4($a0)
    MEM_H(0X4, ctx->r4) = 0;
    // 0x8022A380: sh          $zero, 0x6($a0)
    MEM_H(0X6, ctx->r4) = 0;
    // 0x8022A384: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022A388: jr          $ra
    // 0x8022A38C: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x8022A38C: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_80225F00_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225F00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225F04: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225F08: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x80225F0C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80225F10: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80225F14: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80225F18: lw          $v0, -0x3770($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3770);
    // 0x80225F1C: jalr        $v0
    // 0x80225F20: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80225F20: nop

    after_0:
    // 0x80225F24: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80225F28: jr          $ra
    // 0x80225F2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225F2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80239710_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239710: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80239714: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80239718: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8023971C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80239720: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80239724: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80239728: lw          $v0, -0x1220($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1220);
    // 0x8023972C: jalr        $v0
    // 0x80239730: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80239730: nop

    after_0:
    // 0x80239734: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80239738: jr          $ra
    // 0x8023973C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023973C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022DC58_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DC58: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x8022DC5C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022DC60: beq         $a1, $v0, L_8022DC8C
    if (ctx->r5 == ctx->r2) {
        // 0x8022DC64: addiu       $v0, $zero, 0x2A
        ctx->r2 = ADD32(0, 0X2A);
            goto L_8022DC8C;
    }
    // 0x8022DC64: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x8022DC68: lbu         $a0, 0x2($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X2);
    // 0x8022DC6C: bne         $a0, $v0, L_8022DC7C
    if (ctx->r4 != ctx->r2) {
        // 0x8022DC70: addiu       $v1, $zero, 0x5
        ctx->r3 = ADD32(0, 0X5);
            goto L_8022DC7C;
    }
    // 0x8022DC70: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x8022DC74: j           L_8022DC9C
    // 0x8022DC78: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
        goto L_8022DC9C;
    // 0x8022DC78: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
L_8022DC7C:
    // 0x8022DC7C: bne         $a0, $v1, L_8022DC9C
    if (ctx->r4 != ctx->r3) {
        // 0x8022DC80: addiu       $v0, $zero, 0x180
        ctx->r2 = ADD32(0, 0X180);
            goto L_8022DC9C;
    }
    // 0x8022DC80: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
    // 0x8022DC84: j           L_8022DC9C
    // 0x8022DC88: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
        goto L_8022DC9C;
    // 0x8022DC88: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
L_8022DC8C:
    // 0x8022DC8C: lbu         $v0, 0x2($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X2);
    // 0x8022DC90: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022DC94: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022DC98: lbu         $v0, -0x2350($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X2350);
L_8022DC9C:
    // 0x8022DC9C: jr          $ra
    // 0x8022DCA0: nop

    TRACE_RETURN()
    return;
    // 0x8022DCA0: nop

;}
RECOMP_FUNC void func_8022774C_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022774C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80227750: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x80227754: sh          $zero, 0x4($a1)
    MEM_H(0X4, ctx->r5) = 0;
    // 0x80227758: sh          $zero, 0x0($a1)
    MEM_H(0X0, ctx->r5) = 0;
    // 0x8022775C: sh          $zero, 0xA($a1)
    MEM_H(0XA, ctx->r5) = 0;
    // 0x80227760: sh          $zero, 0x6($a1)
    MEM_H(0X6, ctx->r5) = 0;
    // 0x80227764: sh          $v0, 0x8($a1)
    MEM_H(0X8, ctx->r5) = ctx->r2;
    // 0x80227768: sh          $v0, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r2;
    // 0x8022776C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80227770: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80227774: lw          $v0, -0x2F40($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2F40);
    // 0x80227778: sw          $v0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r2;
    // 0x8022777C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80227780: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80227784: lw          $v0, -0x2F18($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2F18);
    // 0x80227788: jr          $ra
    // 0x8022778C: sw          $v0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x8022778C: sw          $v0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_80225D80_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225D80: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80225D84: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225D88: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x80225D8C: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x80225D90: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225D94: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x80225D98: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225D9C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225DA0: sb          $a1, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r5;
    // 0x80225DA4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225DA8: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80225DAC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225DB0: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x80225DB4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225DB8: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x80225DBC: beq         $a0, $zero, L_80225DF4
    if (ctx->r4 == 0) {
        // 0x80225DC0: addiu       $v0, $zero, 0xA00
        ctx->r2 = ADD32(0, 0XA00);
            goto L_80225DF4;
    }
    // 0x80225DC0: addiu       $v0, $zero, 0xA00
    ctx->r2 = ADD32(0, 0XA00);
    // 0x80225DC4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225DC8: sh          $v0, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = ctx->r2;
    // 0x80225DCC: addiu       $v0, $zero, -0x262
    ctx->r2 = ADD32(0, -0X262);
    // 0x80225DD0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225DD4: sh          $v0, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = ctx->r2;
    // 0x80225DD8: addiu       $v0, $zero, -0x2000
    ctx->r2 = ADD32(0, -0X2000);
    // 0x80225DDC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225DE0: sh          $v0, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = ctx->r2;
    // 0x80225DE4: addiu       $v0, $zero, 0x600
    ctx->r2 = ADD32(0, 0X600);
    // 0x80225DE8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225DEC: j           L_80225E14
    // 0x80225DF0: sh          $v0, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = ctx->r2;
        goto L_80225E14;
    // 0x80225DF0: sh          $v0, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = ctx->r2;
L_80225DF4:
    // 0x80225DF4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225DF8: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x80225DFC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225E00: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x80225E04: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225E08: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x80225E0C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225E10: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
L_80225E14:
    // 0x80225E14: jr          $ra
    // 0x80225E18: nop

    TRACE_RETURN()
    return;
    // 0x80225E18: nop

;}
RECOMP_FUNC void func_8023598C_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023598C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80235990: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80235994: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80235998: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8023599C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x802359A0: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x802359A4: addiu       $s4, $sp, 0x10
    ctx->r20 = ADD32(ctx->r29, 0X10);
    // 0x802359A8: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x802359AC: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x802359B0: addiu       $a1, $a1, -0xA30
    ctx->r5 = ADD32(ctx->r5, -0XA30);
    // 0x802359B4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x802359B8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x802359BC: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x802359C0: jal         0x8009A3B4
    // 0x802359C4: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x802359C4: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    after_0:
    // 0x802359C8: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x802359CC: addiu       $s3, $s0, 0x14
    ctx->r19 = ADD32(ctx->r16, 0X14);
    // 0x802359D0: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x802359D4: jal         0x8009A3B4
    // 0x802359D8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802359D8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x802359DC: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x802359E0: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x802359E4: jal         0x8009A3B4
    // 0x802359E8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x802359E8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x802359EC: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x802359F0: addiu       $s2, $s0, 0x54
    ctx->r18 = ADD32(ctx->r16, 0X54);
    // 0x802359F4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802359F8: jal         0x8009A3B4
    // 0x802359FC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x802359FC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x80235A00: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80235A04: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80235A08: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80235A0C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80235A10: lw          $v0, -0x1840($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1840);
    // 0x80235A14: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235A18: jalr        $v0
    // 0x80235A1C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x80235A1C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_4:
    // 0x80235A20: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80235A24: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80235A28: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80235A2C: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80235A30: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80235A34: lh          $a0, -0x2400($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X2400);
    // 0x80235A38: lhu         $v1, 0x2($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X2);
    // 0x80235A3C: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x80235A40: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80235A44: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80235A48: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80235A4C: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
    // 0x80235A50: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80235A54: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80235A58: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80235A5C: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x80235A60: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x80235A64: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x80235A68: lh          $a2, 0x18($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X18);
    // 0x80235A6C: addiu       $s1, $s0, 0x8C
    ctx->r17 = ADD32(ctx->r16, 0X8C);
    // 0x80235A70: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80235A74: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80235A78: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80235A7C: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x80235A80: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80235A84: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80235A88: jal         0x80031600
    // 0x80235A8C: sw          $a2, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r6;
    func_80031600_CA00(rdram, ctx);
        goto after_5;
    // 0x80235A8C: sw          $a2, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r6;
    after_5:
    // 0x80235A90: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80235A94: jal         0x80031DA8
    // 0x80235A98: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_80031DA8_D1A8(rdram, ctx);
        goto after_6;
    // 0x80235A98: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_6:
    // 0x80235A9C: addiu       $a0, $s0, 0xAC
    ctx->r4 = ADD32(ctx->r16, 0XAC);
    // 0x80235AA0: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x80235AA4: jal         0x8009A3B4
    // 0x80235AA8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x80235AA8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_7:
    // 0x80235AAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235AB0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80235AB4: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x80235AB8: jal         0x80047284
    // 0x80235ABC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_8;
    // 0x80235ABC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_8:
    // 0x80235AC0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80235AC4: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80235AC8: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80235ACC: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80235AD0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80235AD4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80235AD8: jr          $ra
    // 0x80235ADC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80235ADC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8022C5E8_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C5E8: lhu         $v0, 0x350($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X350);
    // 0x8022C5EC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022C5F0: sh          $v0, 0x350($a0)
    MEM_H(0X350, ctx->r4) = ctx->r2;
    // 0x8022C5F4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C5F8: bne         $v0, $zero, L_8022C604
    if (ctx->r2 != 0) {
        // 0x8022C5FC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022C604;
    }
    // 0x8022C5FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C600: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_8022C604:
    // 0x8022C604: jr          $ra
    // 0x8022C608: nop

    TRACE_RETURN()
    return;
    // 0x8022C608: nop

;}
RECOMP_FUNC void func_802284B8_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802284B8: jr          $ra
    // 0x802284BC: nop

    TRACE_RETURN()
    return;
    // 0x802284BC: nop

;}
RECOMP_FUNC void func_80237880_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237880: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80237884: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80237888: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8023788C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80237890: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80237894: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80237898: lw          $v0, -0x1680($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1680);
    // 0x8023789C: jalr        $v0
    // 0x802378A0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802378A0: nop

    after_0:
    // 0x802378A4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802378A8: jr          $ra
    // 0x802378AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802378AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022C724_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C724: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022C728: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022C72C: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8022C730: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022C734: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022C738: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022C73C: lw          $v0, -0x215C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X215C);
    // 0x8022C740: jalr        $v0
    // 0x8022C744: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022C744: nop

    after_0:
    // 0x8022C748: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022C74C: jr          $ra
    // 0x8022C750: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022C750: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023BA50_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023BA50: lb          $v1, 0xD($a0)
    ctx->r3 = MEM_B(ctx->r4, 0XD);
    // 0x8023BA54: beq         $v1, $zero, L_8023BA6C
    if (ctx->r3 == 0) {
        // 0x8023BA58: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023BA6C;
    }
    // 0x8023BA58: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023BA5C: beq         $v1, $v0, L_8023BA84
    if (ctx->r3 == ctx->r2) {
        // 0x8023BA60: lui         $v1, 0x5
        ctx->r3 = S32(0X5 << 16);
            goto L_8023BA84;
    }
    // 0x8023BA60: lui         $v1, 0x5
    ctx->r3 = S32(0X5 << 16);
    // 0x8023BA64: j           L_8023BA90
    // 0x8023BA68: nop

        goto L_8023BA90;
    // 0x8023BA68: nop

L_8023BA6C:
    // 0x8023BA6C: lbu         $v0, 0xD($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD);
    // 0x8023BA70: addiu       $v1, $zero, 0xC
    ctx->r3 = ADD32(0, 0XC);
    // 0x8023BA74: sb          $v1, 0x448($a0)
    MEM_B(0X448, ctx->r4) = ctx->r3;
    // 0x8023BA78: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023BA7C: j           L_8023BA90
    // 0x8023BA80: sb          $v0, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r2;
        goto L_8023BA90;
    // 0x8023BA80: sb          $v0, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r2;
L_8023BA84:
    // 0x8023BA84: lw          $v0, 0x430($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X430);
    // 0x8023BA88: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023BA8C: sw          $v0, 0x430($a0)
    MEM_W(0X430, ctx->r4) = ctx->r2;
L_8023BA90:
    // 0x8023BA90: jr          $ra
    // 0x8023BA94: nop

    TRACE_RETURN()
    return;
    // 0x8023BA94: nop

;}
RECOMP_FUNC void func_8023B9DC_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B9DC: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8023B9E0: lb          $v1, 0xD($a1)
    ctx->r3 = MEM_B(ctx->r5, 0XD);
    // 0x8023B9E4: beq         $v1, $zero, L_8023B9FC
    if (ctx->r3 == 0) {
        // 0x8023B9E8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023B9FC;
    }
    // 0x8023B9E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023B9EC: beq         $v1, $v0, L_8023BA18
    if (ctx->r3 == ctx->r2) {
        // 0x8023B9F0: lui         $v1, 0xFFFB
        ctx->r3 = S32(0XFFFB << 16);
            goto L_8023BA18;
    }
    // 0x8023B9F0: lui         $v1, 0xFFFB
    ctx->r3 = S32(0XFFFB << 16);
    // 0x8023B9F4: j           L_8023BA48
    // 0x8023B9F8: nop

        goto L_8023BA48;
    // 0x8023B9F8: nop

L_8023B9FC:
    // 0x8023B9FC: lbu         $v1, 0xD($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0XD);
    // 0x8023BA00: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x8023BA04: sb          $v0, 0x448($a1)
    MEM_B(0X448, ctx->r5) = ctx->r2;
    // 0x8023BA08: sb          $zero, 0xE($a1)
    MEM_B(0XE, ctx->r5) = 0;
    // 0x8023BA0C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8023BA10: j           L_8023BA48
    // 0x8023BA14: sb          $v1, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r3;
        goto L_8023BA48;
    // 0x8023BA14: sb          $v1, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r3;
L_8023BA18:
    // 0x8023BA18: lbu         $v0, 0xE($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XE);
    // 0x8023BA1C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023BA20: sb          $v0, 0xE($a1)
    MEM_B(0XE, ctx->r5) = ctx->r2;
    // 0x8023BA24: lw          $v0, 0x430($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X430);
    // 0x8023BA28: lb          $a0, 0xE($a1)
    ctx->r4 = MEM_B(ctx->r5, 0XE);
    // 0x8023BA2C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023BA30: sw          $v0, 0x430($a1)
    MEM_W(0X430, ctx->r5) = ctx->r2;
    // 0x8023BA34: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x8023BA38: bne         $a0, $v0, L_8023BA48
    if (ctx->r4 != ctx->r2) {
        // 0x8023BA3C: nop
    
            goto L_8023BA48;
    }
    // 0x8023BA3C: nop

    // 0x8023BA40: sb          $zero, 0xC($a1)
    MEM_B(0XC, ctx->r5) = 0;
    // 0x8023BA44: sb          $zero, 0xD($a1)
    MEM_B(0XD, ctx->r5) = 0;
L_8023BA48:
    // 0x8023BA48: jr          $ra
    // 0x8023BA4C: nop

    TRACE_RETURN()
    return;
    // 0x8023BA4C: nop

;}
RECOMP_FUNC void func_80232D7C_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232D7C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80232D80: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80232D84: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232D88: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80232D8C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80232D90: lbu         $v1, 0xF($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XF);
    // 0x80232D94: sh          $zero, 0x9A($s0)
    MEM_H(0X9A, ctx->r16) = 0;
    // 0x80232D98: ori         $v0, $v0, 0x22
    ctx->r2 = ctx->r2 | 0X22;
    // 0x80232D9C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80232DA0: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x80232DA4: bne         $v0, $zero, L_80232DEC
    if (ctx->r2 != 0) {
        // 0x80232DA8: andi        $v0, $v1, 0x8
        ctx->r2 = ctx->r3 & 0X8;
            goto L_80232DEC;
    }
    // 0x80232DA8: andi        $v0, $v1, 0x8
    ctx->r2 = ctx->r3 & 0X8;
    // 0x80232DAC: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x80232DB0: addiu       $v1, $zero, 0x40
    ctx->r3 = ADD32(0, 0X40);
    // 0x80232DB4: sb          $v1, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r3;
    // 0x80232DB8: addiu       $v1, $zero, 0x80
    ctx->r3 = ADD32(0, 0X80);
    // 0x80232DBC: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x80232DC0: bne         $v0, $zero, L_80232DD4
    if (ctx->r2 != 0) {
        // 0x80232DC4: sb          $v1, 0x97($s0)
        MEM_B(0X97, ctx->r16) = ctx->r3;
            goto L_80232DD4;
    }
    // 0x80232DC4: sb          $v1, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r3;
    // 0x80232DC8: lui         $v0, 0x2C80
    ctx->r2 = S32(0X2C80 << 16);
    // 0x80232DCC: j           L_80232DDC
    // 0x80232DD0: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
        goto L_80232DDC;
    // 0x80232DD0: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
L_80232DD4:
    // 0x80232DD4: lui         $v0, 0x2C60
    ctx->r2 = S32(0X2C60 << 16);
    // 0x80232DD8: ori         $v0, $v0, 0x60C0
    ctx->r2 = ctx->r2 | 0X60C0;
L_80232DDC:
    // 0x80232DDC: sw          $v0, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r2;
    // 0x80232DE0: lui         $v0, 0x3D08
    ctx->r2 = S32(0X3D08 << 16);
    // 0x80232DE4: j           L_80232E3C
    // 0x80232DE8: ori         $v0, $v0, 0xE
    ctx->r2 = ctx->r2 | 0XE;
        goto L_80232E3C;
    // 0x80232DE8: ori         $v0, $v0, 0xE
    ctx->r2 = ctx->r2 | 0XE;
L_80232DEC:
    // 0x80232DEC: bne         $v0, $zero, L_80232E10
    if (ctx->r2 != 0) {
        // 0x80232DF0: nop
    
            goto L_80232E10;
    }
    // 0x80232DF0: nop

    // 0x80232DF4: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80232DF8: lbu         $v0, -0x1DF0($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X1DF0);
    // 0x80232DFC: sb          $v0, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r2;
    // 0x80232E00: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80232E04: lbu         $v0, -0x1DEF($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X1DEF);
    // 0x80232E08: j           L_80232E28
    // 0x80232E0C: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
        goto L_80232E28;
    // 0x80232E0C: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
L_80232E10:
    // 0x80232E10: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80232E14: lbu         $v0, -0x1DE4($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X1DE4);
    // 0x80232E18: sb          $v0, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r2;
    // 0x80232E1C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80232E20: lbu         $v0, -0x1DE3($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X1DE3);
    // 0x80232E24: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
L_80232E28:
    // 0x80232E28: lui         $v1, 0x2C80
    ctx->r3 = S32(0X2C80 << 16);
    // 0x80232E2C: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x80232E30: lui         $v0, 0x3D48
    ctx->r2 = S32(0X3D48 << 16);
    // 0x80232E34: ori         $v0, $v0, 0xE
    ctx->r2 = ctx->r2 | 0XE;
    // 0x80232E38: sw          $v1, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r3;
L_80232E3C:
    // 0x80232E3C: sw          $v0, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->r2;
    // 0x80232E40: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x80232E44: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    // 0x80232E48: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x80232E4C: lhu         $a1, 0x18($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X18);
    // 0x80232E50: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80232E54: sh          $v1, 0x90($s0)
    MEM_H(0X90, ctx->r16) = ctx->r3;
    // 0x80232E58: sh          $a0, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r4;
    // 0x80232E5C: bne         $v0, $zero, L_80232E88
    if (ctx->r2 != 0) {
        // 0x80232E60: sh          $a1, 0x94($s0)
        MEM_H(0X94, ctx->r16) = ctx->r5;
            goto L_80232E88;
    }
    // 0x80232E60: sh          $a1, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r5;
    // 0x80232E64: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x80232E68: addiu       $v1, $zero, 0x20
    ctx->r3 = ADD32(0, 0X20);
    // 0x80232E6C: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x80232E70: bne         $v0, $zero, L_80232E80
    if (ctx->r2 != 0) {
        // 0x80232E74: sh          $v1, 0x98($s0)
        MEM_H(0X98, ctx->r16) = ctx->r3;
            goto L_80232E80;
    }
    // 0x80232E74: sh          $v1, 0x98($s0)
    MEM_H(0X98, ctx->r16) = ctx->r3;
    // 0x80232E78: j           L_80232E94
    // 0x80232E7C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_80232E94;
    // 0x80232E7C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_80232E80:
    // 0x80232E80: j           L_80232E94
    // 0x80232E84: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
        goto L_80232E94;
    // 0x80232E84: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
L_80232E88:
    // 0x80232E88: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80232E8C: sh          $v0, 0x98($s0)
    MEM_H(0X98, ctx->r16) = ctx->r2;
    // 0x80232E90: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_80232E94:
    // 0x80232E94: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x80232E98: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x80232E9C: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x80232EA0: bne         $v0, $zero, L_80232EAC
    if (ctx->r2 != 0) {
        // 0x80232EA4: addiu       $v0, $zero, 0x4B
        ctx->r2 = ADD32(0, 0X4B);
            goto L_80232EAC;
    }
    // 0x80232EA4: addiu       $v0, $zero, 0x4B
    ctx->r2 = ADD32(0, 0X4B);
    // 0x80232EA8: addiu       $v0, $zero, 0xF0
    ctx->r2 = ADD32(0, 0XF0);
L_80232EAC:
    // 0x80232EAC: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x80232EB0: lhu         $a1, 0x98($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X98);
    // 0x80232EB4: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80232EB8: addiu       $v0, $s0, 0xC0
    ctx->r2 = ADD32(ctx->r16, 0XC0);
    // 0x80232EBC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80232EC0: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x80232EC4: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x80232EC8: sw          $zero, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = 0;
    // 0x80232ECC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80232ED0: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80232ED4: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x80232ED8: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x80232EDC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80232EE0: ori         $a3, $zero, 0xA000
    ctx->r7 = 0 | 0XA000;
    // 0x80232EE4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80232EE8: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x80232EEC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80232EF0: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80232EF4: jal         0x80051E18
    // 0x80232EF8: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_0;
    // 0x80232EF8: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_0:
    // 0x80232EFC: jal         0x8003F754
    // 0x80232F00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003F754_1AB54(rdram, ctx);
        goto after_1;
    // 0x80232F00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80232F04: bne         $v0, $zero, L_80232F14
    if (ctx->r2 != 0) {
        // 0x80232F08: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80232F14;
    }
    // 0x80232F08: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80232F0C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80232F10: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80232F14:
    // 0x80232F14: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80232F18: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80232F1C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80232F20: jr          $ra
    // 0x80232F24: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80232F24: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80234BCC_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234BCC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80234BD0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80234BD4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80234BD8: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x80234BDC: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
    // 0x80234BE0: sb          $v0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r2;
    // 0x80234BE4: addiu       $v0, $a0, 0x14
    ctx->r2 = ADD32(ctx->r4, 0X14);
    // 0x80234BE8: addiu       $a0, $a1, 0x38
    ctx->r4 = ADD32(ctx->r5, 0X38);
    // 0x80234BEC: sb          $zero, 0x3($a1)
    MEM_B(0X3, ctx->r5) = 0;
    // 0x80234BF0: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x80234BF4: jal         0x8009A3B4
    // 0x80234BF8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80234BF8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80234BFC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80234C00: jr          $ra
    // 0x80234C04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80234C04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80234C08: nop

    // 0x80234C0C: nop

;}
RECOMP_FUNC void func_8022BEEC_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BEEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022BEF0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022BEF4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022BEF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022BEFC: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x8022BF00: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022BF04: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x8022BF08: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022BF0C: bne         $v0, $zero, L_8022BF34
    if (ctx->r2 != 0) {
        // 0x8022BF10: nop
    
            goto L_8022BF34;
    }
    // 0x8022BF10: nop

    // 0x8022BF14: jal         0x8022DB70
    // 0x8022BF18: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_8022DB70_ovl3(rdram, ctx);
        goto after_0;
    // 0x8022BF18: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_0:
    // 0x8022BF1C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022BF20: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022BF24: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
    // 0x8022BF28: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x8022BF2C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022BF30: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_8022BF34:
    // 0x8022BF34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022BF38: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022BF3C: jr          $ra
    // 0x8022BF40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022BF40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226F3C_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226F3C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226F40: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226F44: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226F48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226F4C: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80226F50: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226F54: beq         $v1, $v0, L_80226F6C
    if (ctx->r3 == ctx->r2) {
        // 0x80226F58: nop
    
            goto L_80226F6C;
    }
    // 0x80226F58: nop

    // 0x80226F5C: lw          $v0, 0xA4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA4);
    // 0x80226F60: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x80226F64: jalr        $v0
    // 0x80226F68: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80226F68: nop

    after_0:
L_80226F6C:
    // 0x80226F6C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80226F70: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80226F74: bne         $v0, $zero, L_80226F88
    if (ctx->r2 != 0) {
        // 0x80226F78: nop
    
            goto L_80226F88;
    }
    // 0x80226F78: nop

    // 0x80226F7C: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80226F80: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226F84: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80226F88:
    // 0x80226F88: jal         0x8005FB90
    // 0x80226F8C: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_1;
    // 0x80226F8C: nop

    after_1:
    // 0x80226F90: jal         0x80060018
    // 0x80226F94: nop

    func_80060018_3B418(rdram, ctx);
        goto after_2;
    // 0x80226F94: nop

    after_2:
    // 0x80226F98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226F9C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226FA0: jr          $ra
    // 0x80226FA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226FA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80237A64_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237A64: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80237A68: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80237A6C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80237A70: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80237A74: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80237A78: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80237A7C: lhu         $v0, 0x2C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X2C);
    // 0x80237A80: lhu         $a0, 0x2E($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X2E);
    // 0x80237A84: lhu         $v1, 0x30($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X30);
    // 0x80237A88: lbu         $a1, 0x3($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X3);
    // 0x80237A8C: addiu       $s2, $s1, 0x2C
    ctx->r18 = ADD32(ctx->r17, 0X2C);
    // 0x80237A90: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80237A94: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80237A98: sh          $v0, 0x2C($s1)
    MEM_H(0X2C, ctx->r17) = ctx->r2;
    // 0x80237A9C: bne         $a1, $zero, L_80237AC4
    if (ctx->r5 != 0) {
        // 0x80237AA0: sh          $v1, 0x30($s1)
        MEM_H(0X30, ctx->r17) = ctx->r3;
            goto L_80237AC4;
    }
    // 0x80237AA0: sh          $v1, 0x30($s1)
    MEM_H(0X30, ctx->r17) = ctx->r3;
    // 0x80237AA4: lhu         $v0, 0x32($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X32);
    // 0x80237AA8: lhu         $a0, 0x34($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X34);
    // 0x80237AAC: lhu         $v1, 0x36($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X36);
    // 0x80237AB0: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80237AB4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80237AB8: sh          $v0, 0x32($s1)
    MEM_H(0X32, ctx->r17) = ctx->r2;
    // 0x80237ABC: j           L_80237AF8
    // 0x80237AC0: sh          $v1, 0x36($s1)
    MEM_H(0X36, ctx->r17) = ctx->r3;
        goto L_80237AF8;
    // 0x80237AC0: sh          $v1, 0x36($s1)
    MEM_H(0X36, ctx->r17) = ctx->r3;
L_80237AC4:
    // 0x80237AC4: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x80237AC8: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x80237ACC: beq         $v1, $zero, L_80237ADC
    if (ctx->r3 == 0) {
        // 0x80237AD0: sll         $a1, $v1, 2
        ctx->r5 = S32(ctx->r3 << 2);
            goto L_80237ADC;
    }
    // 0x80237AD0: sll         $a1, $v1, 2
    ctx->r5 = S32(ctx->r3 << 2);
    // 0x80237AD4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80237AD8: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
L_80237ADC:
    // 0x80237ADC: sll         $v0, $v1, 18
    ctx->r2 = S32(ctx->r3 << 18);
    // 0x80237AE0: sll         $v1, $v1, 10
    ctx->r3 = S32(ctx->r3 << 10);
    // 0x80237AE4: lui         $a0, 0x200
    ctx->r4 = S32(0X200 << 16);
    // 0x80237AE8: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x80237AEC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80237AF0: or          $v0, $v0, $a1
    ctx->r2 = ctx->r2 | ctx->r5;
    // 0x80237AF4: sw          $v0, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->r2;
L_80237AF8:
    // 0x80237AF8: lh          $v0, 0xA($s2)
    ctx->r2 = MEM_H(ctx->r18, 0XA);
    // 0x80237AFC: bltz        $v0, L_80237B10
    if (SIGNED(ctx->r2) < 0) {
        // 0x80237B00: nop
    
            goto L_80237B10;
    }
    // 0x80237B00: nop

    // 0x80237B04: lh          $v0, 0x0($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X0);
    // 0x80237B08: bgez        $v0, L_80237B20
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80237B0C: addiu       $s0, $s1, 0x18
        ctx->r16 = ADD32(ctx->r17, 0X18);
            goto L_80237B20;
    }
    // 0x80237B0C: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
L_80237B10:
    // 0x80237B10: jal         0x8004F5C4
    // 0x80237B14: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x80237B14: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x80237B18: j           L_80237B58
    // 0x80237B1C: nop

        goto L_80237B58;
    // 0x80237B1C: nop

L_80237B20:
    // 0x80237B20: jal         0x8002C678
    // 0x80237B24: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C678_7A78(rdram, ctx);
        goto after_1;
    // 0x80237B24: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80237B28: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x80237B2C: lhu         $v1, 0x4($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X4);
    // 0x80237B30: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80237B34: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80237B38: sh          $v1, 0x28($s1)
    MEM_H(0X28, ctx->r17) = ctx->r3;
    // 0x80237B3C: sh          $v1, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r3;
    // 0x80237B40: lhu         $v1, 0xA($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0XA);
    // 0x80237B44: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    // 0x80237B48: sll         $a0, $a0, 7
    ctx->r4 = S32(ctx->r4 << 7);
    // 0x80237B4C: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x80237B50: jal         0x800319B4
    // 0x80237B54: sh          $v1, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r3;
    func_800319B4_CDB4(rdram, ctx);
        goto after_2;
    // 0x80237B54: sh          $v1, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r3;
    after_2:
L_80237B58:
    // 0x80237B58: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80237B5C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80237B60: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80237B64: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80237B68: jr          $ra
    // 0x80237B6C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80237B6C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022D530_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D530: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D534: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022D538: lbu         $v0, 0x34B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34B);
    // 0x8022D53C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D540: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022D544: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022D548: lw          $v0, -0x20BC($at)
    ctx->r2 = MEM_W(ctx->r1, -0X20BC);
    // 0x8022D54C: jalr        $v0
    // 0x8022D550: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022D550: nop

    after_0:
    // 0x8022D554: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022D558: jr          $ra
    // 0x8022D55C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022D55C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022DA78_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DA78: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022DA7C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022DA80: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022DA84: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022DA88: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022DA8C: lh          $a0, 0x34C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X34C);
    // 0x8022DA90: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022DA94: jal         0x8004FA7C
    // 0x8022DA98: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x8022DA98: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    after_0:
    // 0x8022DA9C: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x8022DAA0: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8022DAA4: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x8022DAA8: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8022DAAC: srl         $v1, $v1, 31
    ctx->r3 = S32(U32(ctx->r3) >> 31);
    // 0x8022DAB0: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8022DAB4: beq         $v1, $zero, L_8022DAE8
    if (ctx->r3 == 0) {
        // 0x8022DAB8: nop
    
            goto L_8022DAE8;
    }
    // 0x8022DAB8: nop

    // 0x8022DABC: jal         0x8022DC08
    // 0x8022DAC0: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_8022DC08_ovl3(rdram, ctx);
        goto after_1;
    // 0x8022DAC0: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_1:
    // 0x8022DAC4: lbu         $v1, 0x34A($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34A);
    // 0x8022DAC8: lhu         $a0, 0x348($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X348);
    // 0x8022DACC: lbu         $a1, 0xD($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XD);
    // 0x8022DAD0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022DAD4: ori         $a0, $a0, 0x2
    ctx->r4 = ctx->r4 | 0X2;
    // 0x8022DAD8: andi        $a1, $a1, 0x7
    ctx->r5 = ctx->r5 & 0X7;
    // 0x8022DADC: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x8022DAE0: sh          $a0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r4;
    // 0x8022DAE4: sb          $a1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r5;
L_8022DAE8:
    // 0x8022DAE8: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022DAEC: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x8022DAF0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022DAF4: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022DAF8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022DAFC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022DB00: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022DB04: jr          $ra
    // 0x8022DB08: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022DB08: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022F7D4_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F7D4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022F7D8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022F7DC: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x8022F7E0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022F7E4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F7E8: lhu         $v1, 0x14($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X14);
    // 0x8022F7EC: andi        $v0, $v1, 0x2
    ctx->r2 = ctx->r3 & 0X2;
    // 0x8022F7F0: beq         $v0, $zero, L_8022F818
    if (ctx->r2 == 0) {
        // 0x8022F7F4: addu        $s0, $a0, $zero
        ctx->r16 = ADD32(ctx->r4, 0);
            goto L_8022F818;
    }
    // 0x8022F7F4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F7F8: andi        $v0, $v1, 0x40
    ctx->r2 = ctx->r3 & 0X40;
    // 0x8022F7FC: beql        $v0, $zero, L_8022F810
    if (ctx->r2 == 0) {
        // 0x8022F800: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022F810;
    }
    goto skip_0;
    // 0x8022F800: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    skip_0:
    // 0x8022F804: jal         0x8022FA4C
    // 0x8022F808: nop

    func_8022FA4C_ovl3(rdram, ctx);
        goto after_0;
    // 0x8022F808: nop

    after_0:
    // 0x8022F80C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022F810:
    // 0x8022F810: jal         0x8022F98C
    // 0x8022F814: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8022F98C_ovl3(rdram, ctx);
        goto after_1;
    // 0x8022F814: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
L_8022F818:
    // 0x8022F818: lbu         $v1, 0xAC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022F81C: bne         $v1, $zero, L_8022F848
    if (ctx->r3 != 0) {
        // 0x8022F820: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022F848;
    }
    // 0x8022F820: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F824: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022F828: bne         $v1, $v0, L_8022F85C
    if (ctx->r3 != ctx->r2) {
        // 0x8022F82C: nop
    
            goto L_8022F85C;
    }
    // 0x8022F82C: nop

    // 0x8022F830: lhu         $v0, 0x14($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X14);
    // 0x8022F834: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x8022F838: beq         $v0, $zero, L_8022F85C
    if (ctx->r2 == 0) {
        // 0x8022F83C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022F85C;
    }
    // 0x8022F83C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F840: j           L_8022F85C
    // 0x8022F844: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_8022F85C;
    // 0x8022F844: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022F848:
    // 0x8022F848: bne         $v1, $v0, L_8022F870
    if (ctx->r3 != ctx->r2) {
        // 0x8022F84C: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_8022F870;
    }
    // 0x8022F84C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022F850: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x8022F854: beql        $v1, $v0, L_8022F85C
    if (ctx->r3 == ctx->r2) {
        // 0x8022F858: sb          $zero, 0xAC($s0)
        MEM_B(0XAC, ctx->r16) = 0;
            goto L_8022F85C;
    }
    goto skip_1;
    // 0x8022F858: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    skip_1:
L_8022F85C:
    // 0x8022F85C: lhu         $v0, 0x14($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X14);
    // 0x8022F860: andi        $v0, $v0, 0x800
    ctx->r2 = ctx->r2 & 0X800;
    // 0x8022F864: beq         $v0, $zero, L_8022F870
    if (ctx->r2 == 0) {
        // 0x8022F868: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022F870;
    }
    // 0x8022F868: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022F86C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022F870:
    // 0x8022F870: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022F874: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022F878: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022F87C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022F880: lw          $v0, -0x2014($at)
    ctx->r2 = MEM_W(ctx->r1, -0X2014);
    // 0x8022F884: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F888: jalr        $v0
    // 0x8022F88C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x8022F88C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
    // 0x8022F890: lhu         $v1, 0x14($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X14);
    // 0x8022F894: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x8022F898: beq         $v0, $zero, L_8022F978
    if (ctx->r2 == 0) {
        // 0x8022F89C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022F978;
    }
    // 0x8022F89C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022F8A0: lbu         $a0, 0x9($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X9);
    // 0x8022F8A4: beq         $a0, $v0, L_8022F908
    if (ctx->r4 == ctx->r2) {
        // 0x8022F8A8: slti        $v0, $a0, 0x3
        ctx->r2 = SIGNED(ctx->r4) < 0X3 ? 1 : 0;
            goto L_8022F908;
    }
    // 0x8022F8A8: slti        $v0, $a0, 0x3
    ctx->r2 = SIGNED(ctx->r4) < 0X3 ? 1 : 0;
    // 0x8022F8AC: beq         $v0, $zero, L_8022F8C4
    if (ctx->r2 == 0) {
        // 0x8022F8B0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022F8C4;
    }
    // 0x8022F8B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F8B4: beq         $a0, $v0, L_8022F8E0
    if (ctx->r4 == ctx->r2) {
        // 0x8022F8B8: andi        $v0, $v1, 0x800
        ctx->r2 = ctx->r3 & 0X800;
            goto L_8022F8E0;
    }
    // 0x8022F8B8: andi        $v0, $v1, 0x800
    ctx->r2 = ctx->r3 & 0X800;
    // 0x8022F8BC: j           L_8022F96C
    // 0x8022F8C0: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
        goto L_8022F96C;
    // 0x8022F8C0: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_8022F8C4:
    // 0x8022F8C4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022F8C8: beq         $a0, $v0, L_8022F948
    if (ctx->r4 == ctx->r2) {
        // 0x8022F8CC: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8022F948;
    }
    // 0x8022F8CC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022F8D0: beq         $a0, $v0, L_8022F960
    if (ctx->r4 == ctx->r2) {
        // 0x8022F8D4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022F960;
    }
    // 0x8022F8D4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022F8D8: j           L_8022F96C
    // 0x8022F8DC: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
        goto L_8022F96C;
    // 0x8022F8DC: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_8022F8E0:
    // 0x8022F8E0: bne         $v0, $zero, L_8022F958
    if (ctx->r2 != 0) {
        // 0x8022F8E4: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8022F958;
    }
    // 0x8022F8E4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022F8E8: andi        $v0, $v1, 0x200
    ctx->r2 = ctx->r3 & 0X200;
    // 0x8022F8EC: bne         $v0, $zero, L_8022F920
    if (ctx->r2 != 0) {
        // 0x8022F8F0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022F920;
    }
    // 0x8022F8F0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022F8F4: andi        $v0, $v1, 0x4
    ctx->r2 = ctx->r3 & 0X4;
    // 0x8022F8F8: beq         $v0, $zero, L_8022F968
    if (ctx->r2 == 0) {
        // 0x8022F8FC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022F968;
    }
    // 0x8022F8FC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022F900: j           L_8022F968
    // 0x8022F904: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022F968;
    // 0x8022F904: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022F908:
    // 0x8022F908: andi        $v0, $v1, 0x800
    ctx->r2 = ctx->r3 & 0X800;
    // 0x8022F90C: bne         $v0, $zero, L_8022F958
    if (ctx->r2 != 0) {
        // 0x8022F910: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8022F958;
    }
    // 0x8022F910: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022F914: andi        $v0, $v1, 0x200
    ctx->r2 = ctx->r3 & 0X200;
    // 0x8022F918: beq         $v0, $zero, L_8022F928
    if (ctx->r2 == 0) {
        // 0x8022F91C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022F928;
    }
    // 0x8022F91C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_8022F920:
    // 0x8022F920: j           L_8022F968
    // 0x8022F924: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022F968;
    // 0x8022F924: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022F928:
    // 0x8022F928: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F92C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022F930: lhu         $v0, 0x14($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X14);
    // 0x8022F934: addiu       $v1, $zero, 0x2D
    ctx->r3 = ADD32(0, 0X2D);
    // 0x8022F938: sh          $v1, 0x24($s1)
    MEM_H(0X24, ctx->r17) = ctx->r3;
    // 0x8022F93C: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
    // 0x8022F940: j           L_8022F968
    // 0x8022F944: sh          $v0, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r2;
        goto L_8022F968;
    // 0x8022F944: sh          $v0, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r2;
L_8022F948:
    // 0x8022F948: andi        $v0, $v1, 0x400
    ctx->r2 = ctx->r3 & 0X400;
    // 0x8022F94C: bne         $v0, $zero, L_8022F960
    if (ctx->r2 != 0) {
        // 0x8022F950: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022F960;
    }
    // 0x8022F950: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022F954: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_8022F958:
    // 0x8022F958: j           L_8022F968
    // 0x8022F95C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022F968;
    // 0x8022F95C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022F960:
    // 0x8022F960: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022F964: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_8022F968:
    // 0x8022F968: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_8022F96C:
    // 0x8022F96C: lhu         $v0, 0x14($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X14);
    // 0x8022F970: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
    // 0x8022F974: sh          $v0, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r2;
L_8022F978:
    // 0x8022F978: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022F97C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022F980: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F984: jr          $ra
    // 0x8022F988: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022F988: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022DC08_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DC08: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    // 0x8022DC0C: xori        $v0, $v0, 0x11
    ctx->r2 = ctx->r2 ^ 0X11;
    // 0x8022DC10: jr          $ra
    // 0x8022DC14: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    TRACE_RETURN()
    return;
    // 0x8022DC14: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
;}
RECOMP_FUNC void func_802329A8_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802329A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802329AC: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x802329B0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x802329B4: addiu       $a0, $zero, 0x141
    ctx->r4 = ADD32(0, 0X141);
    // 0x802329B8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802329BC: sb          $v0, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r2;
    // 0x802329C0: jal         0x8002A33C
    // 0x802329C4: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x802329C4: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_0:
    // 0x802329C8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802329CC: jr          $ra
    // 0x802329D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802329D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E874_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E874: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E878: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E87C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022E880: jal         0x800A3450
    // 0x8022E884: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022E884: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    after_0:
    // 0x8022E888: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x8022E88C: bne         $v1, $zero, L_8022E908
    if (ctx->r3 != 0) {
        // 0x8022E890: addu        $a3, $v0, $zero
        ctx->r7 = ADD32(ctx->r2, 0);
            goto L_8022E908;
    }
    // 0x8022E890: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x8022E894: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022E898: andi        $v1, $a3, 0x7
    ctx->r3 = ctx->r7 & 0X7;
    // 0x8022E89C: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    // 0x8022E8A0: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022E8A4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022E8A8: sll         $a0, $a3, 16
    ctx->r4 = S32(ctx->r7 << 16);
    // 0x8022E8AC: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x8022E8B0: sra         $v1, $a0, 18
    ctx->r3 = S32(SIGNED(ctx->r4) >> 18);
    // 0x8022E8B4: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x8022E8B8: sh          $v0, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r2;
    // 0x8022E8BC: addiu       $v0, $zero, 0xC4
    ctx->r2 = ADD32(0, 0XC4);
    // 0x8022E8C0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022E8C4: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x8022E8C8: sra         $v0, $a0, 20
    ctx->r2 = S32(SIGNED(ctx->r4) >> 20);
    // 0x8022E8CC: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x8022E8D0: lhu         $v1, 0x0($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X0);
    // 0x8022E8D4: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x8022E8D8: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x8022E8DC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022E8E0: sh          $v1, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r3;
    // 0x8022E8E4: lhu         $v0, 0x2($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X2);
    // 0x8022E8E8: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x8022E8EC: sh          $v0, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r2;
    // 0x8022E8F0: lhu         $v0, 0x4($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X4);
    // 0x8022E8F4: sra         $a0, $a0, 22
    ctx->r4 = S32(SIGNED(ctx->r4) >> 22);
    // 0x8022E8F8: andi        $a0, $a0, 0x3F
    ctx->r4 = ctx->r4 & 0X3F;
    // 0x8022E8FC: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8022E900: j           L_8022E980
    // 0x8022E904: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
        goto L_8022E980;
    // 0x8022E904: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
L_8022E908:
    // 0x8022E908: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x8022E90C: lhu         $v1, 0x6($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X6);
    // 0x8022E910: lhu         $a0, 0x8($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X8);
    // 0x8022E914: lhu         $a2, 0xA($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0XA);
    // 0x8022E918: lhu         $a1, 0xC($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0XC);
    // 0x8022E91C: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8022E920: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022E924: addiu       $a0, $a0, 0x3
    ctx->r4 = ADD32(ctx->r4, 0X3);
    // 0x8022E928: addiu       $a2, $a2, 0xC
    ctx->r6 = ADD32(ctx->r6, 0XC);
    // 0x8022E92C: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
    // 0x8022E930: andi        $v0, $a3, 0x7
    ctx->r2 = ctx->r7 & 0X7;
    // 0x8022E934: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8022E938: addiu       $a1, $a1, -0xC
    ctx->r5 = ADD32(ctx->r5, -0XC);
    // 0x8022E93C: sh          $v1, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r3;
    // 0x8022E940: sll         $v1, $a3, 16
    ctx->r3 = S32(ctx->r7 << 16);
    // 0x8022E944: sra         $v0, $v1, 18
    ctx->r2 = S32(SIGNED(ctx->r3) >> 18);
    // 0x8022E948: sh          $a0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r4;
    // 0x8022E94C: lhu         $a0, 0xE($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XE);
    // 0x8022E950: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8022E954: subu        $a1, $a1, $v0
    ctx->r5 = SUB32(ctx->r5, ctx->r2);
    // 0x8022E958: lh          $v0, 0x6($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6);
    // 0x8022E95C: sra         $v1, $v1, 20
    ctx->r3 = S32(SIGNED(ctx->r3) >> 20);
    // 0x8022E960: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x8022E964: sh          $a2, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r6;
    // 0x8022E968: sh          $a1, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r5;
    // 0x8022E96C: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x8022E970: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x8022E974: bne         $v0, $zero, L_8022E980
    if (ctx->r2 != 0) {
        // 0x8022E978: sh          $a0, 0xE($s0)
        MEM_H(0XE, ctx->r16) = ctx->r4;
            goto L_8022E980;
    }
    // 0x8022E978: sh          $a0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r4;
    // 0x8022E97C: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
L_8022E980:
    // 0x8022E980: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022E984: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E988: jr          $ra
    // 0x8022E98C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E98C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B290_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B290: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022B294: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022B298: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8022B29C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8022B2A0: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8022B2A4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8022B2A8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022B2AC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022B2B0: lh          $v0, 0x45C($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X45C);
    // 0x8022B2B4: bne         $v0, $zero, L_8022B35C
    if (ctx->r2 != 0) {
        // 0x8022B2B8: addiu       $s4, $s2, 0x380
        ctx->r20 = ADD32(ctx->r18, 0X380);
            goto L_8022B35C;
    }
    // 0x8022B2B8: addiu       $s4, $s2, 0x380
    ctx->r20 = ADD32(ctx->r18, 0X380);
    // 0x8022B2BC: jal         0x8004F144
    // 0x8022B2C0: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8022B2C0: nop

    after_0:
    // 0x8022B2C4: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x8022B2C8: beq         $s3, $zero, L_8022B35C
    if (ctx->r19 == 0) {
        // 0x8022B2CC: addiu       $s1, $s2, 0x3C8
        ctx->r17 = ADD32(ctx->r18, 0X3C8);
            goto L_8022B35C;
    }
    // 0x8022B2CC: addiu       $s1, $s2, 0x3C8
    ctx->r17 = ADD32(ctx->r18, 0X3C8);
    // 0x8022B2D0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022B2D4: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x8022B2D8: jal         0x8009A3B4
    // 0x8022B2DC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022B2DC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x8022B2E0: addiu       $s0, $s2, 0x3D0
    ctx->r16 = ADD32(ctx->r18, 0X3D0);
    // 0x8022B2E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B2E8: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    // 0x8022B2EC: jal         0x8009A3B4
    // 0x8022B2F0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022B2F0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x8022B2F4: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x8022B2F8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022B2FC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022B300: addiu       $a3, $zero, 0x1000
    ctx->r7 = ADD32(0, 0X1000);
    // 0x8022B304: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8022B308: jal         0x8004DBA0
    // 0x8022B30C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_3;
    // 0x8022B30C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_3:
    // 0x8022B310: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022B314: sb          $v0, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r2;
    // 0x8022B318: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022B31C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8022B320: sb          $v0, 0x2($s3)
    MEM_B(0X2, ctx->r19) = ctx->r2;
    // 0x8022B324: sb          $a0, 0x3($s3)
    MEM_B(0X3, ctx->r19) = ctx->r4;
    // 0x8022B328: lh          $v1, 0x45A($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X45A);
    // 0x8022B32C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022B330: beq         $v1, $v0, L_8022B340
    if (ctx->r3 == ctx->r2) {
        // 0x8022B334: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022B340;
    }
    // 0x8022B334: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022B338: j           L_8022B344
    // 0x8022B33C: sb          $a0, 0xC($s3)
    MEM_B(0XC, ctx->r19) = ctx->r4;
        goto L_8022B344;
    // 0x8022B33C: sb          $a0, 0xC($s3)
    MEM_B(0XC, ctx->r19) = ctx->r4;
L_8022B340:
    // 0x8022B340: sb          $v0, 0xC($s3)
    MEM_B(0XC, ctx->r19) = ctx->r2;
L_8022B344:
    // 0x8022B344: addiu       $a0, $s3, 0x38
    ctx->r4 = ADD32(ctx->r19, 0X38);
    // 0x8022B348: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x8022B34C: jal         0x8009A3B4
    // 0x8022B350: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8022B350: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x8022B354: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022B358: sh          $v0, 0x3A($s3)
    MEM_H(0X3A, ctx->r19) = ctx->r2;
L_8022B35C:
    // 0x8022B35C: lhu         $v0, 0xDC($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0XDC);
    // 0x8022B360: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022B364: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022B368: sh          $v0, 0xDC($s4)
    MEM_H(0XDC, ctx->r20) = ctx->r2;
    // 0x8022B36C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8022B370: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8022B374: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8022B378: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022B37C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022B380: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022B384: jr          $ra
    // 0x8022B388: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022B388: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80231888_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231888: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023188C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80231890: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80231894: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80231898: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8023189C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802318A0: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x802318A4: bne         $v0, $zero, L_802318D8
    if (ctx->r2 != 0) {
        // 0x802318A8: addu        $s2, $a1, $zero
        ctx->r18 = ADD32(ctx->r5, 0);
            goto L_802318D8;
    }
    // 0x802318A8: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x802318AC: lb          $v1, 0xC($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XC);
    // 0x802318B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802318B4: beq         $v1, $v0, L_802318C8
    if (ctx->r3 == ctx->r2) {
        // 0x802318B8: addiu       $v0, $zero, 0x40
        ctx->r2 = ADD32(0, 0X40);
            goto L_802318C8;
    }
    // 0x802318B8: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x802318BC: lhu         $v0, 0x16($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X16);
    // 0x802318C0: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x802318C4: addiu       $v0, $v0, 0x40
    ctx->r2 = ADD32(ctx->r2, 0X40);
L_802318C8:
    // 0x802318C8: sh          $v0, 0x18($s2)
    MEM_H(0X18, ctx->r18) = ctx->r2;
    // 0x802318CC: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x802318D0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802318D4: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_802318D8:
    // 0x802318D8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802318DC: addiu       $a1, $zero, 0x120
    ctx->r5 = ADD32(0, 0X120);
    // 0x802318E0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802318E4: jal         0x8004DA90
    // 0x802318E8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x802318E8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x802318EC: lb          $v1, 0xC($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XC);
    // 0x802318F0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x802318F4: beq         $v1, $a0, L_80231908
    if (ctx->r3 == ctx->r4) {
        // 0x802318F8: nop
    
            goto L_80231908;
    }
    // 0x802318F8: nop

    // 0x802318FC: lb          $v0, 0xF($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XF);
    // 0x80231900: bne         $v0, $a0, L_80231924
    if (ctx->r2 != ctx->r4) {
        // 0x80231904: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80231924;
    }
    // 0x80231904: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80231908:
    // 0x80231908: jal         0x800540B4
    // 0x8023190C: addiu       $a0, $s2, 0x40
    ctx->r4 = ADD32(ctx->r18, 0X40);
    func_800540B4_2F4B4(rdram, ctx);
        goto after_1;
    // 0x8023190C: addiu       $a0, $s2, 0x40
    ctx->r4 = ADD32(ctx->r18, 0X40);
    after_1:
    // 0x80231910: lh          $v0, 0x18($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X18);
    // 0x80231914: bne         $v0, $zero, L_802319D0
    if (ctx->r2 != 0) {
        // 0x80231918: nop
    
            goto L_802319D0;
    }
    // 0x80231918: nop

    // 0x8023191C: j           L_802319C0
    // 0x80231920: sb          $zero, 0xC($s1)
    MEM_B(0XC, ctx->r17) = 0;
        goto L_802319C0;
    // 0x80231920: sb          $zero, 0xC($s1)
    MEM_B(0XC, ctx->r17) = 0;
L_80231924:
    // 0x80231924: bne         $v1, $v0, L_802319D0
    if (ctx->r3 != ctx->r2) {
        // 0x80231928: addiu       $a0, $s2, 0x40
        ctx->r4 = ADD32(ctx->r18, 0X40);
            goto L_802319D0;
    }
    // 0x80231928: addiu       $a0, $s2, 0x40
    ctx->r4 = ADD32(ctx->r18, 0X40);
    // 0x8023192C: jal         0x800540D0
    // 0x80231930: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_800540D0_2F4D0(rdram, ctx);
        goto after_2;
    // 0x80231930: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
    // 0x80231934: addiu       $s0, $s1, 0x1C
    ctx->r16 = ADD32(ctx->r17, 0X1C);
    // 0x80231938: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8023193C: addiu       $a1, $a1, 0x49CC
    ctx->r5 = ADD32(ctx->r5, 0X49CC);
    // 0x80231940: jal         0x8004EB6C
    // 0x80231944: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004EB6C_29F6C(rdram, ctx);
        goto after_3;
    // 0x80231944: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80231948: lh          $v1, 0x56($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X56);
    // 0x8023194C: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80231950: bgez        $v1, L_80231984
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80231954: nop
    
            goto L_80231984;
    }
    // 0x80231954: nop

    // 0x80231958: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8023195C: addiu       $a1, $a1, 0x49CC
    ctx->r5 = ADD32(ctx->r5, 0X49CC);
    // 0x80231960: jal         0x8004EB6C
    // 0x80231964: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004EB6C_29F6C(rdram, ctx);
        goto after_4;
    // 0x80231964: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80231968: lh          $v1, 0x56($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X56);
    // 0x8023196C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80231970: slti        $v0, $v0, 0x50
    ctx->r2 = SIGNED(ctx->r2) < 0X50 ? 1 : 0;
    // 0x80231974: bne         $v0, $zero, L_802319AC
    if (ctx->r2 != 0) {
        // 0x80231978: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802319AC;
    }
    // 0x80231978: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023197C: j           L_802319AC
    // 0x80231980: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_802319AC;
    // 0x80231980: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80231984:
    // 0x80231984: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80231988: addiu       $a1, $a1, 0x49CC
    ctx->r5 = ADD32(ctx->r5, 0X49CC);
    // 0x8023198C: jal         0x8004EB6C
    // 0x80231990: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004EB6C_29F6C(rdram, ctx);
        goto after_5;
    // 0x80231990: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80231994: lh          $v1, 0x56($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X56);
    // 0x80231998: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8023199C: slti        $v1, $v1, 0x50
    ctx->r3 = SIGNED(ctx->r3) < 0X50 ? 1 : 0;
    // 0x802319A0: bne         $v1, $zero, L_802319AC
    if (ctx->r3 != 0) {
        // 0x802319A4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802319AC;
    }
    // 0x802319A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802319A8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_802319AC:
    // 0x802319AC: bne         $v0, $zero, L_802319C0
    if (ctx->r2 != 0) {
        // 0x802319B0: nop
    
            goto L_802319C0;
    }
    // 0x802319B0: nop

    // 0x802319B4: lh          $v0, 0x18($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X18);
    // 0x802319B8: bne         $v0, $zero, L_802319D0
    if (ctx->r2 != 0) {
        // 0x802319BC: nop
    
            goto L_802319D0;
    }
    // 0x802319BC: nop

L_802319C0:
    // 0x802319C0: lhu         $v0, 0x14($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X14);
    // 0x802319C4: andi        $v0, $v0, 0xFFE7
    ctx->r2 = ctx->r2 & 0XFFE7;
    // 0x802319C8: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x802319CC: sh          $v0, 0x14($s2)
    MEM_H(0X14, ctx->r18) = ctx->r2;
L_802319D0:
    // 0x802319D0: lhu         $v0, 0x18($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X18);
    // 0x802319D4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802319D8: sh          $v0, 0x18($s2)
    MEM_H(0X18, ctx->r18) = ctx->r2;
    // 0x802319DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802319E0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802319E4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802319E8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802319EC: jr          $ra
    // 0x802319F0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802319F0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80231DE0_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231DE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231DE4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80231DE8: jal         0x8004F418
    // 0x80231DEC: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x80231DEC: nop

    after_0:
    // 0x80231DF0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80231DF4: jr          $ra
    // 0x80231DF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80231DF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80231DFC: nop

;}
RECOMP_FUNC void func_80237CB8_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237CB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80237CBC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80237CC0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80237CC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80237CC8: jal         0x8002C678
    // 0x80237CCC: addiu       $a0, $s0, 0x18
    ctx->r4 = ADD32(ctx->r16, 0X18);
    func_8002C678_7A78(rdram, ctx);
        goto after_0;
    // 0x80237CCC: addiu       $a0, $s0, 0x18
    ctx->r4 = ADD32(ctx->r16, 0X18);
    after_0:
    // 0x80237CD0: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80237CD4: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80237CD8: lbu         $a0, 0xA($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA);
    // 0x80237CDC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80237CE0: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    // 0x80237CE4: addiu       $v1, $v1, -0x2
    ctx->r3 = ADD32(ctx->r3, -0X2);
    // 0x80237CE8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80237CEC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237CF0: beq         $v1, $v0, L_80237D44
    if (ctx->r3 == ctx->r2) {
        // 0x80237CF4: addiu       $v0, $zero, 0x200
        ctx->r2 = ADD32(0, 0X200);
            goto L_80237D44;
    }
    // 0x80237CF4: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80237CF8: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80237CFC: beql        $v0, $zero, L_80237D14
    if (ctx->r2 == 0) {
        // 0x80237D00: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80237D14;
    }
    goto skip_0;
    // 0x80237D00: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80237D04: beq         $v1, $zero, L_80237D2C
    if (ctx->r3 == 0) {
        // 0x80237D08: addiu       $v0, $zero, 0x300
        ctx->r2 = ADD32(0, 0X300);
            goto L_80237D2C;
    }
    // 0x80237D08: addiu       $v0, $zero, 0x300
    ctx->r2 = ADD32(0, 0X300);
    // 0x80237D0C: j           L_80237D9C
    // 0x80237D10: nop

        goto L_80237D9C;
    // 0x80237D10: nop

L_80237D14:
    // 0x80237D14: beq         $v1, $v0, L_80237D54
    if (ctx->r3 == ctx->r2) {
        // 0x80237D18: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80237D54;
    }
    // 0x80237D18: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80237D1C: beq         $v1, $v0, L_80237D64
    if (ctx->r3 == ctx->r2) {
        // 0x80237D20: sltiu       $v0, $a1, 0x20
        ctx->r2 = ctx->r5 < 0X20 ? 1 : 0;
            goto L_80237D64;
    }
    // 0x80237D20: sltiu       $v0, $a1, 0x20
    ctx->r2 = ctx->r5 < 0X20 ? 1 : 0;
    // 0x80237D24: j           L_80237D9C
    // 0x80237D28: nop

        goto L_80237D9C;
    // 0x80237D28: nop

L_80237D2C:
    // 0x80237D2C: sh          $v0, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r2;
    // 0x80237D30: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x80237D34: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80237D38: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80237D3C: j           L_80237D98
    // 0x80237D40: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
        goto L_80237D98;
    // 0x80237D40: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_80237D44:
    // 0x80237D44: sh          $v0, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r2;
    // 0x80237D48: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x80237D4C: j           L_80237D98
    // 0x80237D50: sll         $v0, $a0, 4
    ctx->r2 = S32(ctx->r4 << 4);
        goto L_80237D98;
    // 0x80237D50: sll         $v0, $a0, 4
    ctx->r2 = S32(ctx->r4 << 4);
L_80237D54:
    // 0x80237D54: addiu       $v0, $zero, 0x300
    ctx->r2 = ADD32(0, 0X300);
    // 0x80237D58: sh          $v0, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r2;
    // 0x80237D5C: j           L_80237D9C
    // 0x80237D60: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
        goto L_80237D9C;
    // 0x80237D60: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
L_80237D64:
    // 0x80237D64: bne         $v0, $zero, L_80237D7C
    if (ctx->r2 != 0) {
        // 0x80237D68: addiu       $v0, $zero, 0x300
        ctx->r2 = ADD32(0, 0X300);
            goto L_80237D7C;
    }
    // 0x80237D68: addiu       $v0, $zero, 0x300
    ctx->r2 = ADD32(0, 0X300);
    // 0x80237D6C: jal         0x8004F5C4
    // 0x80237D70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_1;
    // 0x80237D70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80237D74: j           L_80237DAC
    // 0x80237D78: nop

        goto L_80237DAC;
    // 0x80237D78: nop

L_80237D7C:
    // 0x80237D7C: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80237D80: sh          $v0, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r2;
    // 0x80237D84: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x80237D88: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80237D8C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80237D90: lbu         $v0, -0x16A0($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X16A0);
    // 0x80237D94: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
L_80237D98:
    // 0x80237D98: sh          $v0, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r2;
L_80237D9C:
    // 0x80237D9C: lbu         $a0, 0x9($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X9);
    // 0x80237DA0: addiu       $a1, $s0, 0x18
    ctx->r5 = ADD32(ctx->r16, 0X18);
    // 0x80237DA4: jal         0x800319B4
    // 0x80237DA8: sll         $a0, $a0, 7
    ctx->r4 = S32(ctx->r4 << 7);
    func_800319B4_CDB4(rdram, ctx);
        goto after_2;
    // 0x80237DA8: sll         $a0, $a0, 7
    ctx->r4 = S32(ctx->r4 << 7);
    after_2:
L_80237DAC:
    // 0x80237DAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80237DB0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80237DB4: jr          $ra
    // 0x80237DB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80237DB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80238028_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238028: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8023802C: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x80238030: addu        $s7, $a0, $zero
    ctx->r23 = ADD32(ctx->r4, 0);
    // 0x80238034: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x80238038: addu        $s5, $a1, $zero
    ctx->r21 = ADD32(ctx->r5, 0);
    // 0x8023803C: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x80238040: addu        $s6, $a2, $zero
    ctx->r22 = ADD32(ctx->r6, 0);
    // 0x80238044: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x80238048: addu        $s4, $a3, $zero
    ctx->r20 = ADD32(ctx->r7, 0);
    // 0x8023804C: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x80238050: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x80238054: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x80238058: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8023805C: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80238060: jal         0x800A3450
    // 0x80238064: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80238064: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    after_0:
    // 0x80238068: andi        $s2, $v0, 0xFFF
    ctx->r18 = ctx->r2 & 0XFFF;
    // 0x8023806C: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x80238070: div         $zero, $v0, $s6
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r22))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r22)));
    // 0x80238074: bne         $s6, $zero, L_80238080
    if (ctx->r22 != 0) {
        // 0x80238078: nop
    
            goto L_80238080;
    }
    // 0x80238078: nop

    // 0x8023807C: break       7
    do_break(2149810300);
L_80238080:
    // 0x80238080: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80238084: bne         $s6, $at, L_80238098
    if (ctx->r22 != ctx->r1) {
        // 0x80238088: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80238098;
    }
    // 0x80238088: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8023808C: bne         $v0, $at, L_80238098
    if (ctx->r2 != ctx->r1) {
        // 0x80238090: nop
    
            goto L_80238098;
    }
    // 0x80238090: nop

    // 0x80238094: break       6
    do_break(2149810324);
L_80238098:
    // 0x80238098: mflo        $t0
    ctx->r8 = lo;
    // 0x8023809C: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x802380A0: nop

    // 0x802380A4: blez        $s6, L_802381D4
    if (SIGNED(ctx->r22) <= 0) {
        // 0x802380A8: sw          $t0, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r8;
            goto L_802381D4;
    }
    // 0x802380A8: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x802380AC: sll         $v0, $s5, 2
    ctx->r2 = S32(ctx->r21 << 2);
    // 0x802380B0: addu        $v0, $v0, $s5
    ctx->r2 = ADD32(ctx->r2, ctx->r21);
    // 0x802380B4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802380B8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x802380BC: sll         $fp, $s5, 4
    ctx->r30 = S32(ctx->r21 << 4);
L_802380C0:
    // 0x802380C0: jal         0x8004F144
    // 0x802380C4: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_1;
    // 0x802380C4: nop

    after_1:
    // 0x802380C8: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x802380CC: beq         $s0, $zero, L_802381B0
    if (ctx->r16 == 0) {
        // 0x802380D0: lui         $v1, 0x2E80
        ctx->r3 = S32(0X2E80 << 16);
            goto L_802381B0;
    }
    // 0x802380D0: lui         $v1, 0x2E80
    ctx->r3 = S32(0X2E80 << 16);
    // 0x802380D4: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x802380D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802380DC: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x802380E0: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x802380E4: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x802380E8: sb          $s7, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r23;
    // 0x802380EC: sb          $s5, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r21;
    // 0x802380F0: sw          $v1, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r3;
    // 0x802380F4: lhu         $v0, 0x0($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X0);
    // 0x802380F8: sh          $v0, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r2;
    // 0x802380FC: lhu         $v0, 0x2($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X2);
    // 0x80238100: sh          $v0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r2;
    // 0x80238104: lhu         $v0, 0x4($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X4);
    // 0x80238108: beq         $s7, $zero, L_8023813C
    if (ctx->r23 == 0) {
        // 0x8023810C: sh          $v0, 0x20($s0)
        MEM_H(0X20, ctx->r16) = ctx->r2;
            goto L_8023813C;
    }
    // 0x8023810C: sh          $v0, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r2;
    // 0x80238110: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80238114: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80238118: addiu       $v0, $v0, -0x15C0
    ctx->r2 = ADD32(ctx->r2, -0X15C0);
    // 0x8023811C: addu        $s1, $t0, $v0
    ctx->r17 = ADD32(ctx->r8, ctx->r2);
    // 0x80238120: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x80238124: sw          $v0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r2;
    // 0x80238128: lw          $v0, 0xC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XC);
    // 0x8023812C: sw          $v0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r2;
    // 0x80238130: lw          $v0, 0x10($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X10);
    // 0x80238134: j           L_80238160
    // 0x80238138: sw          $v0, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r2;
        goto L_80238160;
    // 0x80238138: sw          $v0, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r2;
L_8023813C:
    // 0x8023813C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80238140: addiu       $v0, $v0, -0x1660
    ctx->r2 = ADD32(ctx->r2, -0X1660);
    // 0x80238144: addu        $s1, $fp, $v0
    ctx->r17 = ADD32(ctx->r30, ctx->r2);
    // 0x80238148: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x8023814C: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x80238150: lbu         $v0, 0xC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XC);
    // 0x80238154: sb          $v0, 0x22($s0)
    MEM_B(0X22, ctx->r16) = ctx->r2;
    // 0x80238158: lbu         $v0, 0xD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XD);
    // 0x8023815C: sb          $v0, 0x23($s0)
    MEM_B(0X23, ctx->r16) = ctx->r2;
L_80238160:
    // 0x80238160: jal         0x800324B4
    // 0x80238164: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_800324B4_D8B4(rdram, ctx);
        goto after_2;
    // 0x80238164: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_2:
    // 0x80238168: lh          $v1, 0x0($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X0);
    // 0x8023816C: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80238170: mflo        $v0
    ctx->r2 = lo;
    // 0x80238174: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80238178: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x8023817C: jal         0x80032498
    // 0x80238180: sh          $v0, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r2;
    func_80032498_D898(rdram, ctx);
        goto after_3;
    // 0x80238180: sh          $v0, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r2;
    after_3:
    // 0x80238184: lh          $v1, 0x0($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X0);
    // 0x80238188: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023818C: mflo        $v0
    ctx->r2 = lo;
    // 0x80238190: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80238194: sh          $v0, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = ctx->r2;
    // 0x80238198: lhu         $v0, 0x2($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X2);
    // 0x8023819C: sh          $v0, 0x2A($s0)
    MEM_H(0X2A, ctx->r16) = ctx->r2;
    // 0x802381A0: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x802381A4: sh          $v0, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r2;
    // 0x802381A8: lhu         $v0, 0x6($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X6);
    // 0x802381AC: sh          $v0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r2;
L_802381B0:
    // 0x802381B0: jal         0x800A3450
    // 0x802381B4: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    func_800A3450_7E850(rdram, ctx);
        goto after_4;
    // 0x802381B4: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    after_4:
    // 0x802381B8: lw          $t0, 0x14($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X14);
    // 0x802381BC: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x802381C0: addu        $v0, $t0, $v0
    ctx->r2 = ADD32(ctx->r8, ctx->r2);
    // 0x802381C4: addu        $s2, $s2, $v0
    ctx->r18 = ADD32(ctx->r18, ctx->r2);
    // 0x802381C8: slt         $v0, $s3, $s6
    ctx->r2 = SIGNED(ctx->r19) < SIGNED(ctx->r22) ? 1 : 0;
    // 0x802381CC: bne         $v0, $zero, L_802380C0
    if (ctx->r2 != 0) {
        // 0x802381D0: nop
    
            goto L_802380C0;
    }
    // 0x802381D0: nop

L_802381D4:
    // 0x802381D4: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x802381D8: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x802381DC: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x802381E0: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x802381E4: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x802381E8: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x802381EC: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x802381F0: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x802381F4: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x802381F8: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802381FC: jr          $ra
    // 0x80238200: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x80238200: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
