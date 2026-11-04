#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8022C550_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C550: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022C554: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C558: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C55C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022C560: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022C564: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022C568: jal         0x8009A3B4
    // 0x8022C56C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022C56C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022C570: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022C574: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022C578: jal         0x8009A3B4
    // 0x8022C57C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022C57C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022C580: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8022C584: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022C588: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022C58C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022C590: lw          $v0, 0x42C0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X42C0);
    // 0x8022C594: jalr        $v0
    // 0x8022C598: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x8022C598: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022C59C: sw          $zero, 0xD8($s0)
    MEM_W(0XD8, ctx->r16) = 0;
    // 0x8022C5A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022C5A4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C5A8: jr          $ra
    // 0x8022C5AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022C5AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226C1C_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226C1C: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80226C20: lw          $v1, 0x320($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X320);
    // 0x80226C24: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x80226C28: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x80226C2C: and         $a2, $v1, $v0
    ctx->r6 = ctx->r3 & ctx->r2;
    // 0x80226C30: beq         $a2, $zero, L_80226C7C
    if (ctx->r6 == 0) {
        // 0x80226C34: lui         $v0, 0x3800
        ctx->r2 = S32(0X3800 << 16);
            goto L_80226C7C;
    }
    // 0x80226C34: lui         $v0, 0x3800
    ctx->r2 = S32(0X3800 << 16);
    // 0x80226C38: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x80226C3C: beq         $v0, $zero, L_80226C7C
    if (ctx->r2 == 0) {
        // 0x80226C40: nop
    
            goto L_80226C7C;
    }
    // 0x80226C40: nop

    // 0x80226C44: lhu         $v0, 0x6E($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X6E);
    // 0x80226C48: lhu         $a0, 0x6E($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X6E);
    // 0x80226C4C: subu        $v0, $v0, $a2
    ctx->r2 = SUB32(ctx->r2, ctx->r6);
    // 0x80226C50: sh          $v0, 0x6E($a1)
    MEM_H(0X6E, ctx->r5) = ctx->r2;
    // 0x80226C54: lh          $v1, 0x6E($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X6E);
    // 0x80226C58: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80226C5C: sh          $v0, 0x30A($a1)
    MEM_H(0X30A, ctx->r5) = ctx->r2;
    // 0x80226C60: bgtz        $v1, L_80226C74
    if (SIGNED(ctx->r3) > 0) {
        // 0x80226C64: sh          $a0, 0xB2($a1)
        MEM_H(0XB2, ctx->r5) = ctx->r4;
            goto L_80226C74;
    }
    // 0x80226C64: sh          $a0, 0xB2($a1)
    MEM_H(0XB2, ctx->r5) = ctx->r4;
    // 0x80226C68: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80226C6C: sb          $v0, 0x8($a1)
    MEM_B(0X8, ctx->r5) = ctx->r2;
    // 0x80226C70: sb          $zero, 0x9($a1)
    MEM_B(0X9, ctx->r5) = 0;
L_80226C74:
    // 0x80226C74: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x80226C78: sh          $v0, 0x15E($a1)
    MEM_H(0X15E, ctx->r5) = ctx->r2;
L_80226C7C:
    // 0x80226C7C: jr          $ra
    // 0x80226C80: nop

    TRACE_RETURN()
    return;
    // 0x80226C80: nop

;}
RECOMP_FUNC void func_80231744_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231744: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x80231748: bne         $v0, $zero, L_8023175C
    if (ctx->r2 != 0) {
        // 0x8023174C: nop
    
            goto L_8023175C;
    }
    // 0x8023174C: nop

    // 0x80231750: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x80231754: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80231758: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
L_8023175C:
    // 0x8023175C: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80231760: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    // 0x80231764: sh          $v1, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r3;
    // 0x80231768: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023176C: jr          $ra
    // 0x80231770: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80231770: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_8022FD3C_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FD3C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022FD40: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022FD44: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022FD48: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022FD4C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022FD50: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022FD54: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022FD58: addiu       $a0, $s0, 0x18
    ctx->r4 = ADD32(ctx->r16, 0X18);
    // 0x8022FD5C: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x8022FD60: jal         0x8002C654
    // 0x8022FD64: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8002C654_7A54(rdram, ctx);
        goto after_0;
    // 0x8022FD64: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022FD68: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022FD6C: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x8022FD70: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x8022FD74: bne         $v1, $v0, L_8022FD88
    if (ctx->r3 != ctx->r2) {
        // 0x8022FD78: addiu       $s2, $s0, 0x2C
        ctx->r18 = ADD32(ctx->r16, 0X2C);
            goto L_8022FD88;
    }
    // 0x8022FD78: addiu       $s2, $s0, 0x2C
    ctx->r18 = ADD32(ctx->r16, 0X2C);
    // 0x8022FD7C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FD80: j           L_8022FD90
    // 0x8022FD84: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
        goto L_8022FD90;
    // 0x8022FD84: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
L_8022FD88:
    // 0x8022FD88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FD8C: addiu       $a1, $s0, 0xC
    ctx->r5 = ADD32(ctx->r16, 0XC);
L_8022FD90:
    // 0x8022FD90: jal         0x8004D5D4
    // 0x8022FD94: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_1;
    // 0x8022FD94: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    after_1:
    // 0x8022FD98: lui         $v0, 0x2E80
    ctx->r2 = S32(0X2E80 << 16);
    // 0x8022FD9C: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x8022FDA0: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
    // 0x8022FDA4: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x8022FDA8: sb          $s1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r17;
    // 0x8022FDAC: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022FDB0: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022FDB4: jal         0x8004F2C4
    // 0x8022FDB8: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
    func_8004F2C4_2A6C4(rdram, ctx);
        goto after_2;
    // 0x8022FDB8: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
    after_2:
    // 0x8022FDBC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022FDC0: beq         $a0, $zero, L_8022FE34
    if (ctx->r4 == 0) {
        // 0x8022FDC4: addiu       $v0, $zero, 0x16
        ctx->r2 = ADD32(0, 0X16);
            goto L_8022FE34;
    }
    // 0x8022FDC4: addiu       $v0, $zero, 0x16
    ctx->r2 = ADD32(0, 0X16);
    // 0x8022FDC8: sb          $s1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r17;
    // 0x8022FDCC: sb          $v0, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r2;
    // 0x8022FDD0: sb          $zero, 0x3($a0)
    MEM_B(0X3, ctx->r4) = 0;
    // 0x8022FDD4: sb          $zero, 0xC($a0)
    MEM_B(0XC, ctx->r4) = 0;
    // 0x8022FDD8: sb          $zero, 0xD($a0)
    MEM_B(0XD, ctx->r4) = 0;
    // 0x8022FDDC: sb          $zero, 0xE($a0)
    MEM_B(0XE, ctx->r4) = 0;
    // 0x8022FDE0: sb          $zero, 0xF($a0)
    MEM_B(0XF, ctx->r4) = 0;
    // 0x8022FDE4: sb          $zero, 0x8($a0)
    MEM_B(0X8, ctx->r4) = 0;
    // 0x8022FDE8: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    // 0x8022FDEC: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    // 0x8022FDF0: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022FDF4: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x8022FDF8: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x8022FDFC: bnel        $v1, $v0, L_8022FE1C
    if (ctx->r3 != ctx->r2) {
        // 0x8022FE00: addiu       $v0, $zero, -0x100
        ctx->r2 = ADD32(0, -0X100);
            goto L_8022FE1C;
    }
    goto skip_0;
    // 0x8022FE00: addiu       $v0, $zero, -0x100
    ctx->r2 = ADD32(0, -0X100);
    skip_0:
    // 0x8022FE04: addiu       $v0, $zero, 0x4FE
    ctx->r2 = ADD32(0, 0X4FE);
    // 0x8022FE08: sh          $v0, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r2;
    // 0x8022FE0C: addiu       $v0, $zero, -0x256
    ctx->r2 = ADD32(0, -0X256);
    // 0x8022FE10: sh          $v0, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r2;
    // 0x8022FE14: j           L_8022FE2C
    // 0x8022FE18: addiu       $v0, $zero, 0xB00
    ctx->r2 = ADD32(0, 0XB00);
        goto L_8022FE2C;
    // 0x8022FE18: addiu       $v0, $zero, 0xB00
    ctx->r2 = ADD32(0, 0XB00);
L_8022FE1C:
    // 0x8022FE1C: sh          $v0, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r2;
    // 0x8022FE20: addiu       $v0, $zero, -0xDC
    ctx->r2 = ADD32(0, -0XDC);
    // 0x8022FE24: sh          $v0, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r2;
    // 0x8022FE28: addiu       $v0, $zero, 0x300
    ctx->r2 = ADD32(0, 0X300);
L_8022FE2C:
    // 0x8022FE2C: sh          $v0, 0x3C($a0)
    MEM_H(0X3C, ctx->r4) = ctx->r2;
    // 0x8022FE30: sw          $a0, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->r4;
L_8022FE34:
    // 0x8022FE34: jal         0x8022FE54
    // 0x8022FE38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022FE54_ovl16(rdram, ctx);
        goto after_3;
    // 0x8022FE38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022FE3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022FE40: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022FE44: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022FE48: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022FE4C: jr          $ra
    // 0x8022FE50: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022FE50: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022B788_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B788: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B78C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B790: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B794: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022B798: lw          $v0, 0xF0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XF0);
    // 0x8022B79C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022B7A0: bnel        $v0, $zero, L_8022B7A8
    if (ctx->r2 != 0) {
        // 0x8022B7A4: sh          $zero, 0x44($s0)
        MEM_H(0X44, ctx->r16) = 0;
            goto L_8022B7A8;
    }
    goto skip_0;
    // 0x8022B7A4: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    skip_0:
L_8022B7A8:
    // 0x8022B7A8: lb          $v0, 0x74($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X74);
    // 0x8022B7AC: bne         $v0, $zero, L_8022B7D0
    if (ctx->r2 != 0) {
        // 0x8022B7B0: lui         $v1, 0x200
        ctx->r3 = S32(0X200 << 16);
            goto L_8022B7D0;
    }
    // 0x8022B7B0: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x8022B7B4: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x8022B7B8: sh          $v0, 0xD4($s0)
    MEM_H(0XD4, ctx->r16) = ctx->r2;
    // 0x8022B7BC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022B7C0: sh          $zero, 0x10C($s0)
    MEM_H(0X10C, ctx->r16) = 0;
    // 0x8022B7C4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022B7C8: j           L_8022B828
    // 0x8022B7CC: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
        goto L_8022B828;
    // 0x8022B7CC: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_8022B7D0:
    // 0x8022B7D0: lw          $v0, 0xFC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XFC);
    // 0x8022B7D4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022B7D8: beq         $v0, $zero, L_8022B804
    if (ctx->r2 == 0) {
        // 0x8022B7DC: nop
    
            goto L_8022B804;
    }
    // 0x8022B7DC: nop

    // 0x8022B7E0: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022B7E4: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022B7E8: sh          $zero, 0x10C($s0)
    MEM_H(0X10C, ctx->r16) = 0;
    // 0x8022B7EC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022B7F0: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022B7F4: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022B7F8: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022B7FC: j           L_8022B828
    // 0x8022B800: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
        goto L_8022B828;
    // 0x8022B800: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_8022B804:
    // 0x8022B804: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022B808: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x8022B80C: lh          $a3, 0x48($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X48);
    // 0x8022B810: jal         0x8004DA90
    // 0x8022B814: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8022B814: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8022B818: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x8022B81C: lhu         $v1, 0x4E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X4E);
    // 0x8022B820: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022B824: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
L_8022B828:
    // 0x8022B828: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022B82C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B830: jr          $ra
    // 0x8022B834: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B834: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802255B0_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802255B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802255B4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802255B8: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x802255BC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802255C0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802255C4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802255C8: lw          $v0, 0x3CF0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X3CF0);
    // 0x802255CC: jalr        $v0
    // 0x802255D0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802255D0: nop

    after_0:
    // 0x802255D4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802255D8: jr          $ra
    // 0x802255DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802255DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B9B0_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B9B0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022B9B4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022B9B8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B9BC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022B9C0: addiu       $s1, $s0, 0xD0
    ctx->r17 = ADD32(ctx->r16, 0XD0);
    // 0x8022B9C4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022B9C8: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022B9CC: jal         0x800540D0
    // 0x8022B9D0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_800540D0_2F4D0(rdram, ctx);
        goto after_0;
    // 0x8022B9D0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8022B9D4: beq         $v0, $zero, L_8022B9EC
    if (ctx->r2 == 0) {
        // 0x8022B9D8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022B9EC;
    }
    // 0x8022B9D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B9DC: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022B9E0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022B9E4: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8022B9E8: sh          $v1, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r3;
L_8022B9EC:
    // 0x8022B9EC: lhu         $v0, 0xE0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XE0);
    // 0x8022B9F0: addiu       $v0, $v0, 0x22
    ctx->r2 = ADD32(ctx->r2, 0X22);
    // 0x8022B9F4: sll         $a0, $v0, 16
    ctx->r4 = S32(ctx->r2 << 16);
    // 0x8022B9F8: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8022B9FC: jal         0x800324B4
    // 0x8022BA00: sh          $v0, 0xE0($s0)
    MEM_H(0XE0, ctx->r16) = ctx->r2;
    func_800324B4_D8B4(rdram, ctx);
        goto after_1;
    // 0x8022BA00: sh          $v0, 0xE0($s0)
    MEM_H(0XE0, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022BA04: lh          $a0, 0xE2($s0)
    ctx->r4 = MEM_H(ctx->r16, 0XE2);
    // 0x8022BA08: lh          $v1, 0xE4($s0)
    ctx->r3 = MEM_H(ctx->r16, 0XE4);
    // 0x8022BA0C: lhu         $a1, 0x56($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X56);
    // 0x8022BA10: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x8022BA14: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022BA18: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x8022BA1C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022BA20: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8022BA24: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022BA28: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x8022BA2C: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x8022BA30: lhu         $v0, 0x44($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X44);
    // 0x8022BA34: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    // 0x8022BA38: andi        $a1, $a1, 0xFFF
    ctx->r5 = ctx->r5 & 0XFFF;
    // 0x8022BA3C: sw          $a0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r4;
    // 0x8022BA40: sh          $a1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r5;
    // 0x8022BA44: addiu       $v0, $v0, -0x5
    ctx->r2 = ADD32(ctx->r2, -0X5);
    // 0x8022BA48: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022BA4C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022BA50: bltzl       $v0, L_8022BA58
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022BA54: sh          $zero, 0x44($s0)
        MEM_H(0X44, ctx->r16) = 0;
            goto L_8022BA58;
    }
    goto skip_0;
    // 0x8022BA54: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    skip_0:
L_8022BA58:
    // 0x8022BA58: lh          $a2, 0x66($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X66);
    // 0x8022BA5C: lh          $a3, 0x44($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X44);
    // 0x8022BA60: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022BA64: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022BA68: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8022BA6C: jal         0x8004DBA0
    // 0x8022BA70: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_2;
    // 0x8022BA70: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_2:
    // 0x8022BA74: jal         0x80040F30
    // 0x8022BA78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_3;
    // 0x8022BA78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022BA7C: bne         $v0, $zero, L_8022BB34
    if (ctx->r2 != 0) {
        // 0x8022BA80: nop
    
            goto L_8022BB34;
    }
    // 0x8022BA80: nop

    // 0x8022BA84: jal         0x8003E934
    // 0x8022BA88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_4;
    // 0x8022BA88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8022BA8C: lhu         $v1, 0xE2($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XE2);
    // 0x8022BA90: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022BA94: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022BA98: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022BA9C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022BAA0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022BAA4: bltzl       $v0, L_8022BAC0
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022BAA8: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_8022BAC0;
    }
    goto skip_1;
    // 0x8022BAA8: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_1:
    // 0x8022BAAC: slti        $v0, $v0, 0xB
    ctx->r2 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x8022BAB0: beq         $v0, $zero, L_8022BAD0
    if (ctx->r2 == 0) {
        // 0x8022BAB4: sll         $v0, $v1, 16
        ctx->r2 = S32(ctx->r3 << 16);
            goto L_8022BAD0;
    }
    // 0x8022BAB4: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x8022BAB8: j           L_8022BAF4
    // 0x8022BABC: sh          $a0, 0x12($s1)
    MEM_H(0X12, ctx->r17) = ctx->r4;
        goto L_8022BAF4;
    // 0x8022BABC: sh          $a0, 0x12($s1)
    MEM_H(0X12, ctx->r17) = ctx->r4;
L_8022BAC0:
    // 0x8022BAC0: slti        $v0, $v0, 0xB
    ctx->r2 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x8022BAC4: bnel        $v0, $zero, L_8022BAF4
    if (ctx->r2 != 0) {
        // 0x8022BAC8: sh          $a0, 0x12($s1)
        MEM_H(0X12, ctx->r17) = ctx->r4;
            goto L_8022BAF4;
    }
    goto skip_2;
    // 0x8022BAC8: sh          $a0, 0x12($s1)
    MEM_H(0X12, ctx->r17) = ctx->r4;
    skip_2:
    // 0x8022BACC: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
L_8022BAD0:
    // 0x8022BAD0: bltz        $v0, L_8022BAE8
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022BAD4: nop
    
            goto L_8022BAE8;
    }
    // 0x8022BAD4: nop

    // 0x8022BAD8: lhu         $v0, 0x12($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X12);
    // 0x8022BADC: addiu       $v0, $v0, 0xA
    ctx->r2 = ADD32(ctx->r2, 0XA);
    // 0x8022BAE0: j           L_8022BAF4
    // 0x8022BAE4: sh          $v0, 0x12($s1)
    MEM_H(0X12, ctx->r17) = ctx->r2;
        goto L_8022BAF4;
    // 0x8022BAE4: sh          $v0, 0x12($s1)
    MEM_H(0X12, ctx->r17) = ctx->r2;
L_8022BAE8:
    // 0x8022BAE8: lhu         $v0, 0x12($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X12);
    // 0x8022BAEC: addiu       $v0, $v0, -0xA
    ctx->r2 = ADD32(ctx->r2, -0XA);
    // 0x8022BAF0: sh          $v0, 0x12($s1)
    MEM_H(0X12, ctx->r17) = ctx->r2;
L_8022BAF4:
    // 0x8022BAF4: jal         0x800324B4
    // 0x8022BAF8: lh          $a0, 0x10($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X10);
    func_800324B4_D8B4(rdram, ctx);
        goto after_5;
    // 0x8022BAF8: lh          $a0, 0x10($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X10);
    after_5:
    // 0x8022BAFC: lh          $a2, 0x12($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X12);
    // 0x8022BB00: lh          $v1, 0x14($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X14);
    // 0x8022BB04: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8022BB08: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022BB0C: addu        $a2, $a2, $v1
    ctx->r6 = ADD32(ctx->r6, ctx->r3);
    // 0x8022BB10: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8022BB14: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x8022BB18: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022BB1C: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8022BB20: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022BB24: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x8022BB28: addu        $a2, $a2, $v1
    ctx->r6 = ADD32(ctx->r6, ctx->r3);
    // 0x8022BB2C: jal         0x8004DD04
    // 0x8022BB30: sw          $a2, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r6;
    func_8004DD04_29104(rdram, ctx);
        goto after_6;
    // 0x8022BB30: sw          $a2, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r6;
    after_6:
L_8022BB34:
    // 0x8022BB34: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022BB38: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022BB3C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022BB40: jr          $ra
    // 0x8022BB44: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022BB44: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80228AC8_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228AC8: lbu         $v0, 0x395($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X395);
    // 0x80228ACC: lb          $v1, 0xA6($a0)
    ctx->r3 = MEM_B(ctx->r4, 0XA6);
    // 0x80228AD0: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80228AD4: sb          $v0, 0x395($a0)
    MEM_B(0X395, ctx->r4) = ctx->r2;
    // 0x80228AD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228ADC: bne         $v1, $v0, L_80228AE8
    if (ctx->r3 != ctx->r2) {
        // 0x80228AE0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80228AE8;
    }
    // 0x80228AE0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80228AE4: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_80228AE8:
    // 0x80228AE8: jr          $ra
    // 0x80228AEC: nop

    TRACE_RETURN()
    return;
    // 0x80228AEC: nop

;}
RECOMP_FUNC void func_8022F808_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F808: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F80C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022F810: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x8022F814: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022F818: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022F81C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022F820: lw          $v0, 0x4498($at)
    ctx->r2 = MEM_W(ctx->r1, 0X4498);
    // 0x8022F824: jalr        $v0
    // 0x8022F828: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022F828: nop

    after_0:
    // 0x8022F82C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022F830: jr          $ra
    // 0x8022F834: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F834: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022C210_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C210: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022C214: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C218: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C21C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022C220: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022C224: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022C228: jal         0x8009A3B4
    // 0x8022C22C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022C22C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022C230: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022C234: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022C238: jal         0x8009A3B4
    // 0x8022C23C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022C23C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022C240: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022C244: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022C248: jal         0x8009A3B4
    // 0x8022C24C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022C24C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022C250: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x8022C254: lh          $a0, 0x54($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X54);
    // 0x8022C258: lh          $v1, 0x5C($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X5C);
    // 0x8022C25C: beq         $a0, $v1, L_8022C26C
    if (ctx->r4 == ctx->r3) {
        // 0x8022C260: sb          $v0, 0xD($s0)
        MEM_B(0XD, ctx->r16) = ctx->r2;
            goto L_8022C26C;
    }
    // 0x8022C260: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x8022C264: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C268: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
L_8022C26C:
    // 0x8022C26C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022C270: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022C274: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022C278: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022C27C: lw          $v0, 0x42B0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X42B0);
    // 0x8022C280: jalr        $v0
    // 0x8022C284: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x8022C284: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022C288: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022C28C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C290: jr          $ra
    // 0x8022C294: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022C294: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A7D4_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A7D4: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x8022A7D8: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8022A7DC: jr          $ra
    // 0x8022A7E0: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x8022A7E0: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_8022F6BC_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F6BC: jr          $ra
    // 0x8022F6C0: nop

    TRACE_RETURN()
    return;
    // 0x8022F6C0: nop

;}
RECOMP_FUNC void func_8022F214_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F214: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022F218: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F21C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F220: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022F224: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022F228: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022F22C: addiu       $s1, $s0, 0x18
    ctx->r17 = ADD32(ctx->r16, 0X18);
    // 0x8022F230: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022F234: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x8022F238: jal         0x8002C654
    // 0x8022F23C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8002C654_7A54(rdram, ctx);
        goto after_0;
    // 0x8022F23C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022F240: addiu       $a0, $s0, 0x30
    ctx->r4 = ADD32(ctx->r16, 0X30);
    // 0x8022F244: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022F248: sh          $zero, 0x30($s0)
    MEM_H(0X30, ctx->r16) = 0;
    // 0x8022F24C: sh          $zero, 0x32($s0)
    MEM_H(0X32, ctx->r16) = 0;
    // 0x8022F250: jal         0x80031600
    // 0x8022F254: sh          $zero, 0x34($s0)
    MEM_H(0X34, ctx->r16) = 0;
    func_80031600_CA00(rdram, ctx);
        goto after_1;
    // 0x8022F254: sh          $zero, 0x34($s0)
    MEM_H(0X34, ctx->r16) = 0;
    after_1:
    // 0x8022F258: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F25C: jal         0x8004D5D4
    // 0x8022F260: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_2;
    // 0x8022F260: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    after_2:
    // 0x8022F264: lui         $v1, 0x2C80
    ctx->r3 = S32(0X2C80 << 16);
    // 0x8022F268: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x8022F26C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F270: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F274: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
    // 0x8022F278: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    // 0x8022F27C: jal         0x8022F298
    // 0x8022F280: sw          $v1, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->r3;
    func_8022F298_ovl16(rdram, ctx);
        goto after_3;
    // 0x8022F280: sw          $v1, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->r3;
    after_3:
    // 0x8022F284: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022F288: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022F28C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F290: jr          $ra
    // 0x8022F294: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022F294: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022F9BC_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F9BC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022F9C0: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022F9C4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F9C8: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x8022F9CC: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8022F9D0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022F9D4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022F9D8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022F9DC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022F9E0: lw          $v0, 0x44A4($at)
    ctx->r2 = MEM_W(ctx->r1, 0X44A4);
    // 0x8022F9E4: jalr        $v0
    // 0x8022F9E8: addiu       $s1, $s0, 0x18
    ctx->r17 = ADD32(ctx->r16, 0X18);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022F9E8: addiu       $s1, $s0, 0x18
    ctx->r17 = ADD32(ctx->r16, 0X18);
    after_0:
    // 0x8022F9EC: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8022F9F0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022F9F4: sh          $zero, 0x10($sp)
    MEM_H(0X10, ctx->r29) = 0;
    // 0x8022F9F8: sh          $zero, 0x12($sp)
    MEM_H(0X12, ctx->r29) = 0;
    // 0x8022F9FC: jal         0x80031600
    // 0x8022FA00: sh          $zero, 0x14($sp)
    MEM_H(0X14, ctx->r29) = 0;
    func_80031600_CA00(rdram, ctx);
        goto after_1;
    // 0x8022FA00: sh          $zero, 0x14($sp)
    MEM_H(0X14, ctx->r29) = 0;
    after_1:
    // 0x8022FA04: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x8022FA08: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8022FA0C: lw          $v1, 0x2C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X2C);
    // 0x8022FA10: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022FA14: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x8022FA18: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8022FA1C: jal         0x80031DA8
    // 0x8022FA20: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_2;
    // 0x8022FA20: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_2:
    // 0x8022FA24: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8022FA28: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022FA2C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022FA30: jr          $ra
    // 0x8022FA34: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022FA34: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80228E54_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228E54: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80228E58: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80228E5C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228E60: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80228E64: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80228E68: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80228E6C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80228E70: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80228E74: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80228E78: lw          $v0, 0x414C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X414C);
    // 0x80228E7C: jalr        $v0
    // 0x80228E80: addiu       $s1, $s0, 0xC4
    ctx->r17 = ADD32(ctx->r16, 0XC4);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80228E80: addiu       $s1, $s0, 0xC4
    ctx->r17 = ADD32(ctx->r16, 0XC4);
    after_0:
    // 0x80228E84: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80228E88: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80228E8C: bne         $v1, $v0, L_80228F3C
    if (ctx->r3 != ctx->r2) {
        // 0x80228E90: nop
    
            goto L_80228F3C;
    }
    // 0x80228E90: nop

    // 0x80228E94: lb          $v0, 0x66($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X66);
    // 0x80228E98: bne         $v0, $zero, L_80228EB8
    if (ctx->r2 != 0) {
        // 0x80228E9C: addu        $a1, $v0, $zero
        ctx->r5 = ADD32(ctx->r2, 0);
            goto L_80228EB8;
    }
    // 0x80228E9C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x80228EA0: addiu       $v0, $zero, -0x8000
    ctx->r2 = ADD32(0, -0X8000);
    // 0x80228EA4: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80228EA8: sb          $zero, 0x66($s0)
    MEM_B(0X66, ctx->r16) = 0;
    // 0x80228EAC: sb          $zero, 0x65($s0)
    MEM_B(0X65, ctx->r16) = 0;
    // 0x80228EB0: j           L_80228F3C
    // 0x80228EB4: sb          $zero, 0x64($s0)
    MEM_B(0X64, ctx->r16) = 0;
        goto L_80228F3C;
    // 0x80228EB4: sb          $zero, 0x64($s0)
    MEM_B(0X64, ctx->r16) = 0;
L_80228EB8:
    // 0x80228EB8: andi        $a1, $a1, 0x1F
    ctx->r5 = ctx->r5 & 0X1F;
    // 0x80228EBC: lbu         $v1, 0x64($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X64);
    // 0x80228EC0: lbu         $a0, 0x65($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X65);
    // 0x80228EC4: lbu         $v0, 0x64($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X64);
    // 0x80228EC8: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x80228ECC: andi        $a0, $a0, 0x1F
    ctx->r4 = ctx->r4 & 0X1F;
    // 0x80228ED0: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x80228ED4: sll         $a0, $a0, 5
    ctx->r4 = S32(ctx->r4 << 5);
    // 0x80228ED8: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x80228EDC: sb          $v0, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r2;
    // 0x80228EE0: lbu         $v0, 0x65($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X65);
    // 0x80228EE4: lb          $a0, 0x64($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X64);
    // 0x80228EE8: sll         $a1, $a1, 10
    ctx->r5 = S32(ctx->r5 << 10);
    // 0x80228EEC: or          $v1, $v1, $a1
    ctx->r3 = ctx->r3 | ctx->r5;
    // 0x80228EF0: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x80228EF4: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x80228EF8: bgez        $a0, L_80228F14
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80228EFC: sb          $v0, 0x65($s0)
        MEM_B(0X65, ctx->r16) = ctx->r2;
            goto L_80228F14;
    }
    // 0x80228EFC: sb          $v0, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r2;
    // 0x80228F00: lhu         $v0, 0x15E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X15E);
    // 0x80228F04: sb          $zero, 0x64($s0)
    MEM_B(0X64, ctx->r16) = 0;
    // 0x80228F08: sb          $zero, 0x65($s0)
    MEM_B(0X65, ctx->r16) = 0;
    // 0x80228F0C: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x80228F10: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
L_80228F14:
    // 0x80228F14: lh          $v0, 0x15E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X15E);
    // 0x80228F18: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x80228F1C: beq         $v0, $zero, L_80228F3C
    if (ctx->r2 == 0) {
        // 0x80228F20: nop
    
            goto L_80228F3C;
    }
    // 0x80228F20: nop

    // 0x80228F24: lbu         $v0, 0x66($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X66);
    // 0x80228F28: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80228F2C: sb          $v0, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r2;
    // 0x80228F30: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80228F34: bltzl       $v0, L_80228F3C
    if (SIGNED(ctx->r2) < 0) {
        // 0x80228F38: sb          $zero, 0x66($s0)
        MEM_B(0X66, ctx->r16) = 0;
            goto L_80228F3C;
    }
    goto skip_0;
    // 0x80228F38: sb          $zero, 0x66($s0)
    MEM_B(0X66, ctx->r16) = 0;
    skip_0:
L_80228F3C:
    // 0x80228F3C: jal         0x8005044C
    // 0x80228F40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x80228F40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80228F44: jal         0x80040F30
    // 0x80228F48: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_2;
    // 0x80228F48: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80228F4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228F50: jal         0x8003E934
    // 0x80228F54: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_3;
    // 0x80228F54: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    after_3:
    // 0x80228F58: lbu         $v1, 0x6($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X6);
    // 0x80228F5C: andi        $v1, $v1, 0x40
    ctx->r3 = ctx->r3 & 0X40;
    // 0x80228F60: bne         $v1, $zero, L_80228FF8
    if (ctx->r3 != 0) {
        // 0x80228F64: addu        $s1, $v0, $zero
        ctx->r17 = ADD32(ctx->r2, 0);
            goto L_80228FF8;
    }
    // 0x80228F64: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80228F68: lh          $v0, 0x2E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X2E);
    // 0x80228F6C: subu        $v0, $s1, $v0
    ctx->r2 = SUB32(ctx->r17, ctx->r2);
    // 0x80228F70: slti        $v0, $v0, 0x10
    ctx->r2 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x80228F74: bne         $v0, $zero, L_80228FB0
    if (ctx->r2 != 0) {
        // 0x80228F78: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80228FB0;
    }
    // 0x80228F78: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80228F7C: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80228F80: beq         $v1, $v0, L_80228FF8
    if (ctx->r3 == ctx->r2) {
        // 0x80228F84: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80228FF8;
    }
    // 0x80228F84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228F88: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x80228F8C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80228F90: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80228F94: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x80228F98: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80228F9C: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    // 0x80228FA0: jal         0x80050294
    // 0x80228FA4: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_4;
    // 0x80228FA4: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    after_4:
    // 0x80228FA8: j           L_80228FF8
    // 0x80228FAC: nop

        goto L_80228FF8;
    // 0x80228FAC: nop

L_80228FB0:
    // 0x80228FB0: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80228FB4: bne         $v1, $v0, L_80228FF0
    if (ctx->r3 != ctx->r2) {
        // 0x80228FB8: sll         $v0, $s1, 16
        ctx->r2 = S32(ctx->r17 << 16);
            goto L_80228FF0;
    }
    // 0x80228FB8: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x80228FBC: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80228FC0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80228FC4: beq         $v1, $v0, L_80228FEC
    if (ctx->r3 == ctx->r2) {
        // 0x80228FC8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80228FEC;
    }
    // 0x80228FC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228FCC: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x80228FD0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80228FD4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80228FD8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80228FDC: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80228FE0: jal         0x80050294
    // 0x80228FE4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x80228FE4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_5:
    // 0x80228FE8: sb          $zero, 0x74($s0)
    MEM_B(0X74, ctx->r16) = 0;
L_80228FEC:
    // 0x80228FEC: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
L_80228FF0:
    // 0x80228FF0: sh          $s1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r17;
    // 0x80228FF4: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_80228FF8:
    // 0x80228FF8: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80228FFC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80229000: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80229004: jr          $ra
    // 0x80229008: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80229008: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022F2C8_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F2C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F2CC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022F2D0: jal         0x8004F684
    // 0x8022F2D4: nop

    func_8004F684_2AA84(rdram, ctx);
        goto after_0;
    // 0x8022F2D4: nop

    after_0:
    // 0x8022F2D8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022F2DC: jr          $ra
    // 0x8022F2E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F2E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802282B4_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802282B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802282B8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802282BC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802282C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802282C4: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x802282C8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802282CC: bne         $v1, $v0, L_80228368
    if (ctx->r3 != ctx->r2) {
        // 0x802282D0: addiu       $a0, $s0, 0x348
        ctx->r4 = ADD32(ctx->r16, 0X348);
            goto L_80228368;
    }
    // 0x802282D0: addiu       $a0, $s0, 0x348
    ctx->r4 = ADD32(ctx->r16, 0X348);
    // 0x802282D4: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x802282D8: lui         $v1, 0xFF
    ctx->r3 = S32(0XFF << 16);
    // 0x802282DC: ori         $v1, $v1, 0xFF00
    ctx->r3 = ctx->r3 | 0XFF00;
    // 0x802282E0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802282E4: addiu       $v1, $zero, 0x600
    ctx->r3 = ADD32(0, 0X600);
    // 0x802282E8: bne         $v0, $v1, L_80228368
    if (ctx->r2 != ctx->r3) {
        // 0x802282EC: nop
    
            goto L_80228368;
    }
    // 0x802282EC: nop

    // 0x802282F0: lbu         $v0, 0xCB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XCB);
    // 0x802282F4: sltiu       $v0, $v0, 0xB4
    ctx->r2 = ctx->r2 < 0XB4 ? 1 : 0;
    // 0x802282F8: beq         $v0, $zero, L_8022834C
    if (ctx->r2 == 0) {
        // 0x802282FC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022834C;
    }
    // 0x802282FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228300: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80228304: lh          $a3, 0x382($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X382);
    // 0x80228308: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022830C: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x80228310: jal         0x8004F820
    // 0x80228314: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80228314: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x80228318: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022831C: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80228320: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80228324: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80228328: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022832C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80228330: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80228334: jal         0x8004DA90
    // 0x80228338: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x80228338: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    after_1:
    // 0x8022833C: lbu         $v0, 0xCB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XCB);
    // 0x80228340: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228344: j           L_802283A4
    // 0x80228348: sb          $v0, 0xCB($s0)
    MEM_B(0XCB, ctx->r16) = ctx->r2;
        goto L_802283A4;
    // 0x80228348: sb          $v0, 0xCB($s0)
    MEM_B(0XCB, ctx->r16) = ctx->r2;
L_8022834C:
    // 0x8022834C: lbu         $v1, 0xCA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XCA);
    // 0x80228350: sb          $zero, 0xCB($s0)
    MEM_B(0XCB, ctx->r16) = 0;
    // 0x80228354: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80228358: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022835C: andi        $v1, $v1, 0x7F
    ctx->r3 = ctx->r3 & 0X7F;
    // 0x80228360: j           L_802283A4
    // 0x80228364: sb          $v1, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r3;
        goto L_802283A4;
    // 0x80228364: sb          $v1, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r3;
L_80228368:
    // 0x80228368: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022836C: lh          $a3, 0x3A($a0)
    ctx->r7 = MEM_H(ctx->r4, 0X3A);
    // 0x80228370: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80228374: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x80228378: jal         0x8004F820
    // 0x8022837C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x8022837C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_2:
    // 0x80228380: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228384: lh          $a1, 0x44($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X44);
    // 0x80228388: lhu         $v1, 0x56($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X56);
    // 0x8022838C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80228390: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80228394: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80228398: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022839C: jal         0x8004DA90
    // 0x802283A0: sh          $v1, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x802283A0: sh          $v1, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r3;
    after_3:
L_802283A4:
    // 0x802283A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802283A8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802283AC: jr          $ra
    // 0x802283B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802283B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229FD0_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229FD0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229FD4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229FD8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229FDC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80229FE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80229FE4: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80229FE8: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80229FEC: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x80229FF0: jal         0x8004F820
    // 0x80229FF4: addiu       $a3, $zero, 0x60
    ctx->r7 = ADD32(0, 0X60);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80229FF4: addiu       $a3, $zero, 0x60
    ctx->r7 = ADD32(0, 0X60);
    after_0:
    // 0x80229FF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229FFC: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022A000: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022A004: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x8022A008: lh          $a3, 0x48($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X48);
    // 0x8022A00C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022A010: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022A014: jal         0x8004DA90
    // 0x8022A018: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x8022A018: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    after_1:
    // 0x8022A01C: jal         0x8022A298
    // 0x8022A020: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022A298_ovl16(rdram, ctx);
        goto after_2;
    // 0x8022A020: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022A024: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022A028: bne         $v0, $zero, L_8022A09C
    if (ctx->r2 != 0) {
        // 0x8022A02C: nop
    
            goto L_8022A09C;
    }
    // 0x8022A02C: nop

    // 0x8022A030: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x8022A034: beq         $v0, $zero, L_8022A084
    if (ctx->r2 == 0) {
        // 0x8022A038: addiu       $v1, $zero, 0x2
        ctx->r3 = ADD32(0, 0X2);
            goto L_8022A084;
    }
    // 0x8022A038: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x8022A03C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022A040: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x8022A044: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8022A048: bne         $v0, $v1, L_8022A070
    if (ctx->r2 != ctx->r3) {
        // 0x8022A04C: nop
    
            goto L_8022A070;
    }
    // 0x8022A04C: nop

    // 0x8022A050: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8022A054: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8022A058: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x8022A05C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022A060: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022A064: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8022A068: lbu         $v0, 0xA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XA);
    // 0x8022A06C: sw          $v0, 0x370($s0)
    MEM_W(0X370, ctx->r16) = ctx->r2;
L_8022A070:
    // 0x8022A070: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022A074: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8022A078: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022A07C: j           L_8022A0A4
    // 0x8022A080: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8022A0A4;
    // 0x8022A080: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022A084:
    // 0x8022A084: lbu         $v1, 0xA4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA4);
    // 0x8022A088: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8022A08C: bne         $v1, $v0, L_8022A0A4
    if (ctx->r3 != ctx->r2) {
        // 0x8022A090: addiu       $v0, $zero, 0xF0
        ctx->r2 = ADD32(0, 0XF0);
            goto L_8022A0A4;
    }
    // 0x8022A090: addiu       $v0, $zero, 0xF0
    ctx->r2 = ADD32(0, 0XF0);
    // 0x8022A094: j           L_8022A0A4
    // 0x8022A098: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
        goto L_8022A0A4;
    // 0x8022A098: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
L_8022A09C:
    // 0x8022A09C: jal         0x8022A0B4
    // 0x8022A0A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022A0B4_ovl16(rdram, ctx);
        goto after_3;
    // 0x8022A0A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
L_8022A0A4:
    // 0x8022A0A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022A0A8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A0AC: jr          $ra
    // 0x8022A0B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A0B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022BE1C_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BE1C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8022BE20: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x8022BE24: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8022BE28: addiu       $a0, $s2, 0x2C
    ctx->r4 = ADD32(ctx->r18, 0X2C);
    // 0x8022BE2C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8022BE30: addiu       $s0, $s2, 0x14
    ctx->r16 = ADD32(ctx->r18, 0X14);
    // 0x8022BE34: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022BE38: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022BE3C: sw          $ra, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r31;
    // 0x8022BE40: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x8022BE44: jal         0x8009A3B4
    // 0x8022BE48: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022BE48: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    after_0:
    // 0x8022BE4C: addiu       $a0, $s2, 0x34
    ctx->r4 = ADD32(ctx->r18, 0X34);
    // 0x8022BE50: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    // 0x8022BE54: jal         0x8009A3B4
    // 0x8022BE58: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022BE58: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022BE5C: addiu       $a0, $s2, 0x5C
    ctx->r4 = ADD32(ctx->r18, 0X5C);
    // 0x8022BE60: addiu       $s1, $s2, 0x54
    ctx->r17 = ADD32(ctx->r18, 0X54);
    // 0x8022BE64: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022BE68: jal         0x8009A3B4
    // 0x8022BE6C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022BE6C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022BE70: lbu         $v0, 0x8($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X8);
    // 0x8022BE74: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022BE78: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022BE7C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022BE80: lw          $v0, 0x42A0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X42A0);
    // 0x8022BE84: jalr        $v0
    // 0x8022BE88: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x8022BE88: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_3:
    // 0x8022BE8C: addiu       $s3, $s2, 0xAC
    ctx->r19 = ADD32(ctx->r18, 0XAC);
    // 0x8022BE90: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8022BE94: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022BE98: jal         0x8009A3B4
    // 0x8022BE9C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8022BE9C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x8022BEA0: addiu       $s0, $s2, 0x8C
    ctx->r16 = ADD32(ctx->r18, 0X8C);
    // 0x8022BEA4: jal         0x8002C654
    // 0x8022BEA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_5;
    // 0x8022BEA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8022BEAC: lh          $v0, 0xE8($s2)
    ctx->r2 = MEM_H(ctx->r18, 0XE8);
    // 0x8022BEB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BEB4: addiu       $a1, $s2, 0xFC
    ctx->r5 = ADD32(ctx->r18, 0XFC);
    // 0x8022BEB8: sw          $v0, 0x104($s2)
    MEM_W(0X104, ctx->r18) = ctx->r2;
    // 0x8022BEBC: sw          $v0, 0x100($s2)
    MEM_W(0X100, ctx->r18) = ctx->r2;
    // 0x8022BEC0: jal         0x80031DA8
    // 0x8022BEC4: sw          $v0, 0xFC($s2)
    MEM_W(0XFC, ctx->r18) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_6;
    // 0x8022BEC4: sw          $v0, 0xFC($s2)
    MEM_W(0XFC, ctx->r18) = ctx->r2;
    after_6:
    // 0x8022BEC8: jal         0x8002C654
    // 0x8022BECC: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_8002C654_7A54(rdram, ctx);
        goto after_7;
    // 0x8022BECC: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_7:
    // 0x8022BED0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022BED4: jal         0x80031428
    // 0x8022BED8: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_80031428_C828(rdram, ctx);
        goto after_8;
    // 0x8022BED8: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_8:
    // 0x8022BEDC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BEE0: jal         0x8003077C
    // 0x8022BEE4: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_8003077C_BB7C(rdram, ctx);
        goto after_9;
    // 0x8022BEE4: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_9:
    // 0x8022BEE8: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x8022BEEC: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022BEF0: beq         $v0, $zero, L_8022BF08
    if (ctx->r2 == 0) {
        // 0x8022BEF4: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_8022BF08;
    }
    // 0x8022BEF4: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8022BEF8: lh          $a3, 0x56($s2)
    ctx->r7 = MEM_H(ctx->r18, 0X56);
    // 0x8022BEFC: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x8022BF00: jal         0x8003B6B8
    // 0x8022BF04: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    func_8003B6B8_16AB8(rdram, ctx);
        goto after_10;
    // 0x8022BF04: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    after_10:
L_8022BF08:
    // 0x8022BF08: lw          $ra, 0x40($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X40);
    // 0x8022BF0C: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x8022BF10: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x8022BF14: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8022BF18: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8022BF1C: jr          $ra
    // 0x8022BF20: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x8022BF20: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80232220_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232220: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80232224: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80232228: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8023222C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80232230: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80232234: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80232238: lw          $v0, 0x4ABC($at)
    ctx->r2 = MEM_W(ctx->r1, 0X4ABC);
    // 0x8023223C: jalr        $v0
    // 0x80232240: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80232240: nop

    after_0:
    // 0x80232244: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80232248: jr          $ra
    // 0x8023224C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023224C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227EC4_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227EC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227EC8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227ECC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227ED0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227ED4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80227ED8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227EDC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227EE0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227EE4: lw          $v0, 0x4100($at)
    ctx->r2 = MEM_W(ctx->r1, 0X4100);
    // 0x80227EE8: jalr        $v0
    // 0x80227EEC: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80227EEC: nop

    after_0:
    // 0x80227EF0: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80227EF4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80227EF8: bne         $v1, $v0, L_80227F88
    if (ctx->r3 != ctx->r2) {
        // 0x80227EFC: nop
    
            goto L_80227F88;
    }
    // 0x80227EFC: nop

    // 0x80227F00: lbu         $v1, 0x64($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X64);
    // 0x80227F04: lbu         $a0, 0x65($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X65);
    // 0x80227F08: lbu         $a1, 0x66($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X66);
    // 0x80227F0C: lbu         $v0, 0x64($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X64);
    // 0x80227F10: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x80227F14: andi        $a0, $a0, 0x1F
    ctx->r4 = ctx->r4 & 0X1F;
    // 0x80227F18: andi        $a1, $a1, 0x1F
    ctx->r5 = ctx->r5 & 0X1F;
    // 0x80227F1C: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x80227F20: sll         $a0, $a0, 5
    ctx->r4 = S32(ctx->r4 << 5);
    // 0x80227F24: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x80227F28: sb          $v0, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r2;
    // 0x80227F2C: lbu         $v0, 0x65($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X65);
    // 0x80227F30: lb          $a0, 0x64($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X64);
    // 0x80227F34: sll         $a1, $a1, 10
    ctx->r5 = S32(ctx->r5 << 10);
    // 0x80227F38: or          $v1, $v1, $a1
    ctx->r3 = ctx->r3 | ctx->r5;
    // 0x80227F3C: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x80227F40: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x80227F44: bgez        $a0, L_80227F60
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80227F48: sb          $v0, 0x65($s0)
        MEM_B(0X65, ctx->r16) = ctx->r2;
            goto L_80227F60;
    }
    // 0x80227F48: sb          $v0, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r2;
    // 0x80227F4C: lhu         $v0, 0x15E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X15E);
    // 0x80227F50: sb          $zero, 0x64($s0)
    MEM_B(0X64, ctx->r16) = 0;
    // 0x80227F54: sb          $zero, 0x65($s0)
    MEM_B(0X65, ctx->r16) = 0;
    // 0x80227F58: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x80227F5C: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
L_80227F60:
    // 0x80227F60: lh          $v0, 0x15E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X15E);
    // 0x80227F64: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x80227F68: beq         $v0, $zero, L_80227F88
    if (ctx->r2 == 0) {
        // 0x80227F6C: nop
    
            goto L_80227F88;
    }
    // 0x80227F6C: nop

    // 0x80227F70: lbu         $v0, 0x66($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X66);
    // 0x80227F74: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80227F78: sb          $v0, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r2;
    // 0x80227F7C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80227F80: bltzl       $v0, L_80227F88
    if (SIGNED(ctx->r2) < 0) {
        // 0x80227F84: sb          $zero, 0x66($s0)
        MEM_B(0X66, ctx->r16) = 0;
            goto L_80227F88;
    }
    goto skip_0;
    // 0x80227F84: sb          $zero, 0x66($s0)
    MEM_B(0X66, ctx->r16) = 0;
    skip_0:
L_80227F88:
    // 0x80227F88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227F8C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227F90: jr          $ra
    // 0x80227F94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227F94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802290D8_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802290D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802290DC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802290E0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802290E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802290E8: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x802290EC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802290F0: bne         $v1, $v0, L_80229134
    if (ctx->r3 != ctx->r2) {
        // 0x802290F4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80229134;
    }
    // 0x802290F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802290F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802290FC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80229100: jal         0x80050294
    // 0x80229104: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80229104: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_0:
    // 0x80229108: lbu         $v1, 0xCA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XCA);
    // 0x8022910C: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x80229110: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80229114: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x80229118: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022911C: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80229120: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    // 0x80229124: sb          $v0, 0x385($s0)
    MEM_B(0X385, ctx->r16) = ctx->r2;
    // 0x80229128: sb          $zero, 0x384($s0)
    MEM_B(0X384, ctx->r16) = 0;
    // 0x8022912C: andi        $v1, $v1, 0xFC
    ctx->r3 = ctx->r3 & 0XFC;
    // 0x80229130: sb          $v1, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r3;
L_80229134:
    // 0x80229134: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80229138: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022913C: jr          $ra
    // 0x80229140: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229140: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802324E0_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802324E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802324E4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802324E8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x802324EC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802324F0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802324F4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802324F8: lw          $v0, 0x4AD0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X4AD0);
    // 0x802324FC: jalr        $v0
    // 0x80232500: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80232500: nop

    after_0:
    // 0x80232504: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80232508: jr          $ra
    // 0x8023250C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023250C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022F190_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F190: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F194: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022F198: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022F19C: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x8022F1A0: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022F1A4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022F1A8: bne         $v0, $zero, L_8022F1D8
    if (ctx->r2 != 0) {
        // 0x8022F1AC: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_8022F1D8;
    }
    // 0x8022F1AC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022F1B0: addiu       $a0, $zero, 0x176
    ctx->r4 = ADD32(0, 0X176);
    // 0x8022F1B4: addiu       $a1, $a2, 0x38
    ctx->r5 = ADD32(ctx->r6, 0X38);
    // 0x8022F1B8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022F1BC: sb          $v0, 0xE($a2)
    MEM_B(0XE, ctx->r6) = ctx->r2;
    // 0x8022F1C0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022F1C4: jal         0x8002A33C
    // 0x8022F1C8: sb          $v0, 0x9($a2)
    MEM_B(0X9, ctx->r6) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x8022F1C8: sb          $v0, 0x9($a2)
    MEM_B(0X9, ctx->r6) = ctx->r2;
    after_0:
    // 0x8022F1CC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022F1D0: jal         0x800616FC
    // 0x8022F1D4: addiu       $a1, $zero, 0x1B
    ctx->r5 = ADD32(0, 0X1B);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_1;
    // 0x8022F1D4: addiu       $a1, $zero, 0x1B
    ctx->r5 = ADD32(0, 0X1B);
    after_1:
L_8022F1D8:
    // 0x8022F1D8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022F1DC: jr          $ra
    // 0x8022F1E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F1E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022BF24_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BF24: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022BF28: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022BF2C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022BF30: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x8022BF34: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8022BF38: lw          $v1, 0xEC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XEC);
    // 0x8022BF3C: beq         $v1, $zero, L_8022BFB8
    if (ctx->r3 == 0) {
        // 0x8022BF40: addiu       $s1, $s0, 0xD0
        ctx->r17 = ADD32(ctx->r16, 0XD0);
            goto L_8022BFB8;
    }
    // 0x8022BF40: addiu       $s1, $s0, 0xD0
    ctx->r17 = ADD32(ctx->r16, 0XD0);
    // 0x8022BF44: lui         $v0, 0x2000
    ctx->r2 = S32(0X2000 << 16);
    // 0x8022BF48: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8022BF4C: beq         $v0, $zero, L_8022BF78
    if (ctx->r2 == 0) {
        // 0x8022BF50: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8022BF78;
    }
    // 0x8022BF50: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022BF54: lh          $a2, 0xF4($s0)
    ctx->r6 = MEM_H(ctx->r16, 0XF4);
    // 0x8022BF58: lh          $a3, 0xF8($s0)
    ctx->r7 = MEM_H(ctx->r16, 0XF8);
    // 0x8022BF5C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022BF60: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022BF64: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x8022BF68: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022BF6C: jal         0x8005F7D4
    // 0x8022BF70: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    func_8005F7D4_3ABD4(rdram, ctx);
        goto after_0;
    // 0x8022BF70: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022BF74: sh          $v0, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r2;
L_8022BF78:
    // 0x8022BF78: lw          $v0, 0xEC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XEC);
    // 0x8022BF7C: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x8022BF80: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022BF84: beq         $v0, $zero, L_8022BF90
    if (ctx->r2 == 0) {
        // 0x8022BF88: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022BF90;
    }
    // 0x8022BF88: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022BF8C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022BF90:
    // 0x8022BF90: lw          $v1, 0xEC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XEC);
    // 0x8022BF94: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x8022BF98: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8022BF9C: beq         $v0, $zero, L_8022BFB8
    if (ctx->r2 == 0) {
        // 0x8022BFA0: lui         $v0, 0xFF
        ctx->r2 = S32(0XFF << 16);
            goto L_8022BFB8;
    }
    // 0x8022BFA0: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x8022BFA4: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8022BFA8: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8022BFAC: beq         $v0, $zero, L_8022BFB8
    if (ctx->r2 == 0) {
        // 0x8022BFB0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022BFB8;
    }
    // 0x8022BFB0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022BFB4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022BFB8:
    // 0x8022BFB8: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022BFBC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022BFC0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022BFC4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022BFC8: lw          $v0, 0x4294($at)
    ctx->r2 = MEM_W(ctx->r1, 0X4294);
    // 0x8022BFCC: jalr        $v0
    // 0x8022BFD0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x8022BFD0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022BFD4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022BFD8: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x8022BFDC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022BFE0: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x8022BFE4: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8022BFE8: addiu       $v0, $s1, 0x1C
    ctx->r2 = ADD32(ctx->r17, 0X1C);
    // 0x8022BFEC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022BFF0: lui         $v0, 0x408
    ctx->r2 = S32(0X408 << 16);
    // 0x8022BFF4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8022BFF8: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8022BFFC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8022C000: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8022C004: jal         0x80051E18
    // 0x8022C008: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_2;
    // 0x8022C008: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_2:
    // 0x8022C00C: sw          $zero, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = 0;
    // 0x8022C010: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8022C014: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022C018: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022C01C: jr          $ra
    // 0x8022C020: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022C020: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80229ED0_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229ED0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80229ED4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229ED8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229EDC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80229EE0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80229EE4: lw          $v0, 0x35C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X35C);
    // 0x80229EE8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80229EEC: beq         $v0, $zero, L_80229F04
    if (ctx->r2 == 0) {
        // 0x80229EF0: addiu       $v1, $s0, 0x348
        ctx->r3 = ADD32(ctx->r16, 0X348);
            goto L_80229F04;
    }
    // 0x80229EF0: addiu       $v1, $s0, 0x348
    ctx->r3 = ADD32(ctx->r16, 0X348);
    // 0x80229EF4: jal         0x8022A1C0
    // 0x80229EF8: nop

    func_8022A1C0_ovl16(rdram, ctx);
        goto after_0;
    // 0x80229EF8: nop

    after_0:
    // 0x80229EFC: j           L_80229FBC
    // 0x80229F00: nop

        goto L_80229FBC;
    // 0x80229F00: nop

L_80229F04:
    // 0x80229F04: lhu         $v0, 0x378($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X378);
    // 0x80229F08: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80229F0C: sh          $v0, 0x378($s0)
    MEM_H(0X378, ctx->r16) = ctx->r2;
    // 0x80229F10: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x80229F14: bne         $v0, $zero, L_80229F2C
    if (ctx->r2 != 0) {
        // 0x80229F18: nop
    
            goto L_80229F2C;
    }
    // 0x80229F18: nop

    // 0x80229F1C: jal         0x8022A1C0
    // 0x80229F20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022A1C0_ovl16(rdram, ctx);
        goto after_1;
    // 0x80229F20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80229F24: j           L_80229FBC
    // 0x80229F28: nop

        goto L_80229FBC;
    // 0x80229F28: nop

L_80229F2C:
    // 0x80229F2C: lw          $v0, 0x358($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X358);
    // 0x80229F30: beq         $v0, $zero, L_80229FBC
    if (ctx->r2 == 0) {
        // 0x80229F34: addu        $s1, $v1, $zero
        ctx->r17 = ADD32(ctx->r3, 0);
            goto L_80229FBC;
    }
    // 0x80229F34: addu        $s1, $v1, $zero
    ctx->r17 = ADD32(ctx->r3, 0);
    // 0x80229F38: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80229F3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229F40: bne         $v1, $v0, L_80229F78
    if (ctx->r3 != ctx->r2) {
        // 0x80229F44: addiu       $v0, $zero, 0x180
        ctx->r2 = ADD32(0, 0X180);
            goto L_80229F78;
    }
    // 0x80229F44: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
    // 0x80229F48: addiu       $a0, $zero, 0x158
    ctx->r4 = ADD32(0, 0X158);
    // 0x80229F4C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229F50: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80229F54: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
    // 0x80229F58: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80229F5C: addiu       $v0, $zero, -0xF0
    ctx->r2 = ADD32(0, -0XF0);
    // 0x80229F60: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80229F64: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x80229F68: jal         0x8002A33C
    // 0x80229F6C: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x80229F6C: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    after_2:
    // 0x80229F70: j           L_80229FAC
    // 0x80229F74: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
        goto L_80229FAC;
    // 0x80229F74: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_80229F78:
    // 0x80229F78: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x80229F7C: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80229F80: lw          $a0, 0x298($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X298);
    // 0x80229F84: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80229F88: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80229F8C: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    // 0x80229F90: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80229F94: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80229F98: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80229F9C: lbu         $v1, 0xA($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0XA);
    // 0x80229FA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229FA4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80229FA8: sw          $v1, 0x370($s0)
    MEM_W(0X370, ctx->r16) = ctx->r3;
L_80229FAC:
    // 0x80229FAC: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80229FB0: sh          $v0, 0x30($s1)
    MEM_H(0X30, ctx->r17) = ctx->r2;
    // 0x80229FB4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80229FB8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80229FBC:
    // 0x80229FBC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80229FC0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80229FC4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229FC8: jr          $ra
    // 0x80229FCC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80229FCC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022AC84_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AC84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022AC88: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022AC8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022AC90: jal         0x800A3450
    // 0x8022AC94: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022AC94: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x8022AC98: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022AC9C: slti        $v0, $v0, 0xE
    ctx->r2 = SIGNED(ctx->r2) < 0XE ? 1 : 0;
    // 0x8022ACA0: beq         $v0, $zero, L_8022ACEC
    if (ctx->r2 == 0) {
        // 0x8022ACA4: nop
    
            goto L_8022ACEC;
    }
    // 0x8022ACA4: nop

    // 0x8022ACA8: jal         0x800A3450
    // 0x8022ACAC: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x8022ACAC: nop

    after_1:
    // 0x8022ACB0: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022ACB4: sb          $v0, 0xD1($s0)
    MEM_B(0XD1, ctx->r16) = ctx->r2;
    // 0x8022ACB8: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x8022ACBC: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022ACC0: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8022ACC4: jal         0x800A3450
    // 0x8022ACC8: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x8022ACC8: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    after_2:
    // 0x8022ACCC: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8022ACD0: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022ACD4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022ACD8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022ACDC: lhu         $v0, 0x4254($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X4254);
    // 0x8022ACE0: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022ACE4: j           L_8022AD14
    // 0x8022ACE8: sh          $v0, 0xD2($s0)
    MEM_H(0XD2, ctx->r16) = ctx->r2;
        goto L_8022AD14;
    // 0x8022ACE8: sh          $v0, 0xD2($s0)
    MEM_H(0XD2, ctx->r16) = ctx->r2;
L_8022ACEC:
    // 0x8022ACEC: jal         0x800A3450
    // 0x8022ACF0: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x8022ACF0: nop

    after_3:
    // 0x8022ACF4: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8022ACF8: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022ACFC: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8022AD00: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022AD04: lhu         $v1, 0x4254($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X4254);
    // 0x8022AD08: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022AD0C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022AD10: sh          $v1, 0xD4($s0)
    MEM_H(0XD4, ctx->r16) = ctx->r3;
L_8022AD14:
    // 0x8022AD14: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022AD18: jal         0x8022AB18
    // 0x8022AD1C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022AB18_ovl16(rdram, ctx);
        goto after_4;
    // 0x8022AD1C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8022AD20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022AD24: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022AD28: jr          $ra
    // 0x8022AD2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022AD2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023044C_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023044C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80230450: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80230454: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80230458: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8023045C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80230460: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80230464: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80230468: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8023046C: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x80230470: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80230474: bne         $v1, $v0, L_802304B4
    if (ctx->r3 != ctx->r2) {
        // 0x80230478: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802304B4;
    }
    // 0x80230478: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023047C: jal         0x8006033C
    // 0x80230480: addiu       $a0, $zero, 0x604
    ctx->r4 = ADD32(0, 0X604);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80230480: addiu       $a0, $zero, 0x604
    ctx->r4 = ADD32(0, 0X604);
    after_0:
    // 0x80230484: beq         $v0, $zero, L_80230494
    if (ctx->r2 == 0) {
        // 0x80230488: addiu       $v1, $zero, 0x18
        ctx->r3 = ADD32(0, 0X18);
            goto L_80230494;
    }
    // 0x80230488: addiu       $v1, $zero, 0x18
    ctx->r3 = ADD32(0, 0X18);
    // 0x8023048C: j           L_802305A0
    // 0x80230490: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
        goto L_802305A0;
    // 0x80230490: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_80230494:
    // 0x80230494: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x80230498: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023049C: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x802304A0: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x802304A4: bne         $v0, $v1, L_802305A4
    if (ctx->r2 != ctx->r3) {
        // 0x802304A8: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_802305A4;
    }
    // 0x802304A8: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x802304AC: j           L_80230598
    // 0x802304B0: addiu       $a0, $zero, 0x11D
    ctx->r4 = ADD32(0, 0X11D);
        goto L_80230598;
    // 0x802304B0: addiu       $a0, $zero, 0x11D
    ctx->r4 = ADD32(0, 0X11D);
L_802304B4:
    // 0x802304B4: bne         $v1, $v0, L_80230564
    if (ctx->r3 != ctx->r2) {
        // 0x802304B8: nop
    
            goto L_80230564;
    }
    // 0x802304B8: nop

    // 0x802304BC: jal         0x8006033C
    // 0x802304C0: addiu       $a0, $zero, 0x604
    ctx->r4 = ADD32(0, 0X604);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x802304C0: addiu       $a0, $zero, 0x604
    ctx->r4 = ADD32(0, 0X604);
    after_1:
    // 0x802304C4: beq         $v0, $zero, L_802304EC
    if (ctx->r2 == 0) {
        // 0x802304C8: nop
    
            goto L_802304EC;
    }
    // 0x802304C8: nop

    // 0x802304CC: jal         0x8006033C
    // 0x802304D0: addiu       $a0, $zero, 0x605
    ctx->r4 = ADD32(0, 0X605);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x802304D0: addiu       $a0, $zero, 0x605
    ctx->r4 = ADD32(0, 0X605);
    after_2:
    // 0x802304D4: beq         $v0, $zero, L_802304EC
    if (ctx->r2 == 0) {
        // 0x802304D8: nop
    
            goto L_802304EC;
    }
    // 0x802304D8: nop

    // 0x802304DC: jal         0x8006033C
    // 0x802304E0: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
    func_8006033C_3B73C(rdram, ctx);
        goto after_3;
    // 0x802304E0: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
    after_3:
    // 0x802304E4: bne         $v0, $zero, L_8023052C
    if (ctx->r2 != 0) {
        // 0x802304E8: nop
    
            goto L_8023052C;
    }
    // 0x802304E8: nop

L_802304EC:
    // 0x802304EC: lw          $v0, 0x34($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X34);
    // 0x802304F0: beq         $v0, $zero, L_8023052C
    if (ctx->r2 == 0) {
        // 0x802304F4: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8023052C;
    }
    // 0x802304F4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802304F8: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x802304FC: addiu       $v0, $zero, -0x2100
    ctx->r2 = ADD32(0, -0X2100);
    // 0x80230500: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x80230504: addiu       $v0, $zero, -0xC81
    ctx->r2 = ADD32(0, -0XC81);
    // 0x80230508: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x8023050C: addiu       $v0, $zero, 0x1500
    ctx->r2 = ADD32(0, 0X1500);
    // 0x80230510: jal         0x8003E768
    // 0x80230514: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    func_8003E768_19B68(rdram, ctx);
        goto after_4;
    // 0x80230514: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    after_4:
    // 0x80230518: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8023051C: lui         $a1, 0x7
    ctx->r5 = S32(0X7 << 16);
    // 0x80230520: jal         0x80071ACC
    // 0x80230524: ori         $a1, $a1, 0x1202
    ctx->r5 = ctx->r5 | 0X1202;
    func_80071ACC_4CECC(rdram, ctx);
        goto after_5;
    // 0x80230524: ori         $a1, $a1, 0x1202
    ctx->r5 = ctx->r5 | 0X1202;
    after_5:
    // 0x80230528: sw          $zero, 0x34($s0)
    MEM_W(0X34, ctx->r16) = 0;
L_8023052C:
    // 0x8023052C: jal         0x8006033C
    // 0x80230530: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
    func_8006033C_3B73C(rdram, ctx);
        goto after_6;
    // 0x80230530: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
    after_6:
    // 0x80230534: beq         $v0, $zero, L_80230544
    if (ctx->r2 == 0) {
        // 0x80230538: addiu       $v1, $zero, 0x18
        ctx->r3 = ADD32(0, 0X18);
            goto L_80230544;
    }
    // 0x80230538: addiu       $v1, $zero, 0x18
    ctx->r3 = ADD32(0, 0X18);
    // 0x8023053C: j           L_802305A0
    // 0x80230540: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
        goto L_802305A0;
    // 0x80230540: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_80230544:
    // 0x80230544: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x80230548: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023054C: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x80230550: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80230554: bne         $v0, $v1, L_802305A4
    if (ctx->r2 != ctx->r3) {
        // 0x80230558: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_802305A4;
    }
    // 0x80230558: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x8023055C: j           L_80230598
    // 0x80230560: addiu       $a0, $zero, 0x11B
    ctx->r4 = ADD32(0, 0X11B);
        goto L_80230598;
    // 0x80230560: addiu       $a0, $zero, 0x11B
    ctx->r4 = ADD32(0, 0X11B);
L_80230564:
    // 0x80230564: jal         0x8006033C
    // 0x80230568: addiu       $a0, $zero, 0x605
    ctx->r4 = ADD32(0, 0X605);
    func_8006033C_3B73C(rdram, ctx);
        goto after_7;
    // 0x80230568: addiu       $a0, $zero, 0x605
    ctx->r4 = ADD32(0, 0X605);
    after_7:
    // 0x8023056C: beq         $v0, $zero, L_8023057C
    if (ctx->r2 == 0) {
        // 0x80230570: addiu       $v1, $zero, 0x18
        ctx->r3 = ADD32(0, 0X18);
            goto L_8023057C;
    }
    // 0x80230570: addiu       $v1, $zero, 0x18
    ctx->r3 = ADD32(0, 0X18);
    // 0x80230574: j           L_802305A0
    // 0x80230578: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
        goto L_802305A0;
    // 0x80230578: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_8023057C:
    // 0x8023057C: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x80230580: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230584: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x80230588: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8023058C: bne         $v0, $v1, L_802305A4
    if (ctx->r2 != ctx->r3) {
        // 0x80230590: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_802305A4;
    }
    // 0x80230590: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x80230594: addiu       $a0, $zero, 0x11A
    ctx->r4 = ADD32(0, 0X11A);
L_80230598:
    // 0x80230598: jal         0x8002A33C
    // 0x8023059C: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    func_8002A33C_573C(rdram, ctx);
        goto after_8;
    // 0x8023059C: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    after_8:
L_802305A0:
    // 0x802305A0: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
L_802305A4:
    // 0x802305A4: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x802305A8: bne         $v0, $zero, L_802305E8
    if (ctx->r2 != 0) {
        // 0x802305AC: lui         $v0, 0x200
        ctx->r2 = S32(0X200 << 16);
            goto L_802305E8;
    }
    // 0x802305AC: lui         $v0, 0x200
    ctx->r2 = S32(0X200 << 16);
    // 0x802305B0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802305B4: lui         $v1, 0x280
    ctx->r3 = S32(0X280 << 16);
    // 0x802305B8: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x802305BC: sw          $v1, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r3;
    // 0x802305C0: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x802305C4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802305C8: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x802305CC: sltiu       $v0, $v0, 0x40
    ctx->r2 = ctx->r2 < 0X40 ? 1 : 0;
    // 0x802305D0: beql        $v0, $zero, L_802305D8
    if (ctx->r2 == 0) {
        // 0x802305D4: sb          $zero, 0xA($s0)
        MEM_B(0XA, ctx->r16) = 0;
            goto L_802305D8;
    }
    goto skip_0;
    // 0x802305D4: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    skip_0:
L_802305D8:
    // 0x802305D8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802305DC: sb          $zero, 0x49($s0)
    MEM_B(0X49, ctx->r16) = 0;
    // 0x802305E0: j           L_8023067C
    // 0x802305E4: sb          $v0, 0x48($s0)
    MEM_B(0X48, ctx->r16) = ctx->r2;
        goto L_8023067C;
    // 0x802305E4: sb          $v0, 0x48($s0)
    MEM_B(0X48, ctx->r16) = ctx->r2;
L_802305E8:
    // 0x802305E8: lbu         $s1, 0x3($s0)
    ctx->r17 = MEM_BU(ctx->r16, 0X3);
    // 0x802305EC: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
    // 0x802305F0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802305F4: bne         $s1, $v0, L_8023067C
    if (ctx->r17 != ctx->r2) {
        // 0x802305F8: nop
    
            goto L_8023067C;
    }
    // 0x802305F8: nop

    // 0x802305FC: jal         0x8006033C
    // 0x80230600: addiu       $a0, $zero, 0x604
    ctx->r4 = ADD32(0, 0X604);
    func_8006033C_3B73C(rdram, ctx);
        goto after_9;
    // 0x80230600: addiu       $a0, $zero, 0x604
    ctx->r4 = ADD32(0, 0X604);
    after_9:
    // 0x80230604: beq         $v0, $zero, L_8023067C
    if (ctx->r2 == 0) {
        // 0x80230608: nop
    
            goto L_8023067C;
    }
    // 0x80230608: nop

    // 0x8023060C: jal         0x8006033C
    // 0x80230610: addiu       $a0, $zero, 0x605
    ctx->r4 = ADD32(0, 0X605);
    func_8006033C_3B73C(rdram, ctx);
        goto after_10;
    // 0x80230610: addiu       $a0, $zero, 0x605
    ctx->r4 = ADD32(0, 0X605);
    after_10:
    // 0x80230614: beq         $v0, $zero, L_8023067C
    if (ctx->r2 == 0) {
        // 0x80230618: nop
    
            goto L_8023067C;
    }
    // 0x80230618: nop

    // 0x8023061C: jal         0x8006033C
    // 0x80230620: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
    func_8006033C_3B73C(rdram, ctx);
        goto after_11;
    // 0x80230620: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
    after_11:
    // 0x80230624: beq         $v0, $zero, L_8023067C
    if (ctx->r2 == 0) {
        // 0x80230628: nop
    
            goto L_8023067C;
    }
    // 0x80230628: nop

    // 0x8023062C: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80230630: bne         $v0, $s1, L_8023067C
    if (ctx->r2 != ctx->r17) {
        // 0x80230634: nop
    
            goto L_8023067C;
    }
    // 0x80230634: nop

    // 0x80230638: lw          $v0, 0x34($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X34);
    // 0x8023063C: bne         $v0, $zero, L_8023067C
    if (ctx->r2 != 0) {
        // 0x80230640: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8023067C;
    }
    // 0x80230640: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80230644: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x80230648: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023064C: sw          $v0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r2;
    // 0x80230650: addiu       $v0, $zero, -0x2100
    ctx->r2 = ADD32(0, -0X2100);
    // 0x80230654: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x80230658: addiu       $v0, $zero, -0xC81
    ctx->r2 = ADD32(0, -0XC81);
    // 0x8023065C: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x80230660: addiu       $v0, $zero, 0x1500
    ctx->r2 = ADD32(0, 0X1500);
    // 0x80230664: jal         0x8003E768
    // 0x80230668: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    func_8003E768_19B68(rdram, ctx);
        goto after_12;
    // 0x80230668: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    after_12:
    // 0x8023066C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80230670: lui         $a1, 0x7
    ctx->r5 = S32(0X7 << 16);
    // 0x80230674: jal         0x80071ACC
    // 0x80230678: ori         $a1, $a1, 0x202
    ctx->r5 = ctx->r5 | 0X202;
    func_80071ACC_4CECC(rdram, ctx);
        goto after_13;
    // 0x80230678: ori         $a1, $a1, 0x202
    ctx->r5 = ctx->r5 | 0X202;
    after_13:
L_8023067C:
    // 0x8023067C: lh          $v0, 0x14($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X14);
    // 0x80230680: slti        $v0, $v0, -0x211F
    ctx->r2 = SIGNED(ctx->r2) < -0X211F ? 1 : 0;
    // 0x80230684: bne         $v0, $zero, L_80230698
    if (ctx->r2 != 0) {
        // 0x80230688: sh          $zero, 0x10($sp)
        MEM_H(0X10, ctx->r29) = 0;
            goto L_80230698;
    }
    // 0x80230688: sh          $zero, 0x10($sp)
    MEM_H(0X10, ctx->r29) = 0;
    // 0x8023068C: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80230690: j           L_8023069C
    // 0x80230694: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
        goto L_8023069C;
    // 0x80230694: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
L_80230698:
    // 0x80230698: sh          $zero, 0x12($sp)
    MEM_H(0X12, ctx->r29) = 0;
L_8023069C:
    // 0x8023069C: sh          $zero, 0x14($sp)
    MEM_H(0X14, ctx->r29) = 0;
    // 0x802306A0: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x802306A4: jal         0x80031600
    // 0x802306A8: addiu       $a1, $s0, 0x18
    ctx->r5 = ADD32(ctx->r16, 0X18);
    func_80031600_CA00(rdram, ctx);
        goto after_14;
    // 0x802306A8: addiu       $a1, $s0, 0x18
    ctx->r5 = ADD32(ctx->r16, 0X18);
    after_14:
    // 0x802306AC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802306B0: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x802306B4: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x802306B8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802306BC: jr          $ra
    // 0x802306C0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x802306C0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80225B74_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225B74: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80225B78: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225B7C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225B80: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80225B84: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80225B88: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80225B8C: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80225B90: addiu       $s1, $s0, 0x500
    ctx->r17 = ADD32(ctx->r16, 0X500);
    // 0x80225B94: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80225B98: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80225B9C: bne         $v1, $zero, L_80225BAC
    if (ctx->r3 != 0) {
        // 0x80225BA0: sb          $v0, 0x0($s0)
        MEM_B(0X0, ctx->r16) = ctx->r2;
            goto L_80225BAC;
    }
    // 0x80225BA0: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80225BA4: j           L_80225BB0
    // 0x80225BA8: addiu       $v0, $zero, 0xC00
    ctx->r2 = ADD32(0, 0XC00);
        goto L_80225BB0;
    // 0x80225BA8: addiu       $v0, $zero, 0xC00
    ctx->r2 = ADD32(0, 0XC00);
L_80225BAC:
    // 0x80225BAC: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
L_80225BB0:
    // 0x80225BB0: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80225BB4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80225BB8: addiu       $a1, $zero, 0x4210
    ctx->r5 = ADD32(0, 0X4210);
    // 0x80225BBC: addu        $v1, $s0, $zero
    ctx->r3 = ADD32(ctx->r16, 0);
    // 0x80225BC0: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80225BC4: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80225BC8: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80225BCC: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80225BD0: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80225BD4: sh          $zero, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = 0;
L_80225BD8:
    // 0x80225BD8: sh          $a1, 0x186($v1)
    MEM_H(0X186, ctx->r3) = ctx->r5;
    // 0x80225BDC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80225BE0: sltiu       $v0, $a0, 0x18
    ctx->r2 = ctx->r4 < 0X18 ? 1 : 0;
    // 0x80225BE4: bne         $v0, $zero, L_80225BD8
    if (ctx->r2 != 0) {
        // 0x80225BE8: addiu       $v1, $v1, 0x8
        ctx->r3 = ADD32(ctx->r3, 0X8);
            goto L_80225BD8;
    }
    // 0x80225BE8: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x80225BEC: lhu         $v0, 0x22E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X22E);
    // 0x80225BF0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80225BF4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80225BF8: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x80225BFC: jal         0x8004D5D4
    // 0x80225C00: sh          $v0, 0x22E($s0)
    MEM_H(0X22E, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80225C00: sh          $v0, 0x22E($s0)
    MEM_H(0X22E, ctx->r16) = ctx->r2;
    after_0:
    // 0x80225C04: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80225C08: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80225C0C: jal         0x80050294
    // 0x80225C10: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x80225C10: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x80225C14: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80225C18: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80225C1C: jal         0x80225FD8
    // 0x80225C20: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80225FD8_ovl16(rdram, ctx);
        goto after_2;
    // 0x80225C20: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x80225C24: lbu         $v1, 0xD($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XD);
    // 0x80225C28: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80225C2C: sb          $zero, 0x10B($s0)
    MEM_B(0X10B, ctx->r16) = 0;
    // 0x80225C30: sb          $zero, 0x117($s0)
    MEM_B(0X117, ctx->r16) = 0;
    // 0x80225C34: sb          $v0, 0x143($s0)
    MEM_B(0X143, ctx->r16) = ctx->r2;
    // 0x80225C38: sb          $v0, 0x147($s0)
    MEM_B(0X147, ctx->r16) = ctx->r2;
    // 0x80225C3C: sb          $v0, 0x14B($s0)
    MEM_B(0X14B, ctx->r16) = ctx->r2;
    // 0x80225C40: sb          $v0, 0x14F($s0)
    MEM_B(0X14F, ctx->r16) = ctx->r2;
    // 0x80225C44: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80225C48: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80225C4C: sb          $v1, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r3;
    // 0x80225C50: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80225C54: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80225C58: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225C5C: jr          $ra
    // 0x80225C60: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80225C60: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022C5C8_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C5C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022C5CC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022C5D0: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8022C5D4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022C5D8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022C5DC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022C5E0: lw          $v0, 0x42E4($at)
    ctx->r2 = MEM_W(ctx->r1, 0X42E4);
    // 0x8022C5E4: jalr        $v0
    // 0x8022C5E8: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022C5E8: nop

    after_0:
    // 0x8022C5EC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022C5F0: jr          $ra
    // 0x8022C5F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022C5F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226868_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226868: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022686C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226870: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226874: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80226878: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022687C: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80226880: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80226884: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x80226888: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x8022688C: beq         $v0, $zero, L_80226994
    if (ctx->r2 == 0) {
        // 0x80226890: addiu       $a0, $s0, 0x308
        ctx->r4 = ADD32(ctx->r16, 0X308);
            goto L_80226994;
    }
    // 0x80226890: addiu       $a0, $s0, 0x308
    ctx->r4 = ADD32(ctx->r16, 0X308);
    // 0x80226894: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80226898: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022689C: addu        $at, $at, $v0
    gpr jr_addend_802268A4 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802268A0: lw          $v0, 0x4B88($at)
    ctx->r2 = ADD32(ctx->r1, 0X4B88);
    // 0x802268A4: jr          $v0
    // 0x802268A8: nop

    switch (jr_addend_802268A4 >> 2) {
        case 0: goto L_802268AC; break;
        case 1: goto L_802268D0; break;
        case 2: goto L_802268FC; break;
        case 3: goto L_80226908; break;
        case 4: goto L_80226944; break;
        case 5: goto L_80226960; break;
        default: switch_error(__func__, 0x802268A4, 0x80234B88);
    }
    // 0x802268A8: nop

L_802268AC:
    // 0x802268AC: jal         0x802261EC
    // 0x802268B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802261EC_ovl16(rdram, ctx);
        goto after_0;
    // 0x802268B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x802268B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802268B8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802268BC: jal         0x80050294
    // 0x802268C0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x802268C0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x802268C4: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802268C8: j           L_80226958
    // 0x802268CC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80226958;
    // 0x802268CC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_802268D0:
    // 0x802268D0: lw          $v0, 0x184($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X184);
    // 0x802268D4: bne         $v0, $s0, L_80226994
    if (ctx->r2 != ctx->r16) {
        // 0x802268D8: nop
    
            goto L_80226994;
    }
    // 0x802268D8: nop

    // 0x802268DC: jal         0x80226B98
    // 0x802268E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80226B98_ovl16(rdram, ctx);
        goto after_2;
    // 0x802268E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x802268E4: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x802268E8: beql        $v0, $zero, L_80226994
    if (ctx->r2 == 0) {
        // 0x802268EC: sw          $zero, 0x184($s1)
        MEM_W(0X184, ctx->r17) = 0;
            goto L_80226994;
    }
    goto skip_0;
    // 0x802268EC: sw          $zero, 0x184($s1)
    MEM_W(0X184, ctx->r17) = 0;
    skip_0:
    // 0x802268F0: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802268F4: j           L_80226958
    // 0x802268F8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80226958;
    // 0x802268F8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_802268FC:
    // 0x802268FC: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80226900: j           L_80226958
    // 0x80226904: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80226958;
    // 0x80226904: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80226908:
    // 0x80226908: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8022690C: lw          $a1, 0x2B94($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2B94);
    // 0x80226910: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x80226914: jal         0x80061510
    // 0x80226918: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_80061510_3C910(rdram, ctx);
        goto after_3;
    // 0x80226918: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_3:
    // 0x8022691C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226920: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80226924: jal         0x80050294
    // 0x80226928: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_4;
    // 0x80226928: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x8022692C: addiu       $a0, $zero, 0x103
    ctx->r4 = ADD32(0, 0X103);
    // 0x80226930: jal         0x8002A33C
    // 0x80226934: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_5;
    // 0x80226934: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_5:
    // 0x80226938: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022693C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226940: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80226944:
    // 0x80226944: sw          $zero, 0x184($s1)
    MEM_W(0X184, ctx->r17) = 0;
    // 0x80226948: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022694C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80226950: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x80226954: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80226958:
    // 0x80226958: j           L_80226994
    // 0x8022695C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80226994;
    // 0x8022695C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80226960:
    // 0x80226960: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80226964: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80226968: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022696C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80226970: bne         $v0, $zero, L_80226994
    if (ctx->r2 != 0) {
        // 0x80226974: lui         $v0, 0x48C
        ctx->r2 = S32(0X48C << 16);
            goto L_80226994;
    }
    // 0x80226974: lui         $v0, 0x48C
    ctx->r2 = S32(0X48C << 16);
    // 0x80226978: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022697C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80226980: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    // 0x80226984: addiu       $v1, $zero, 0x2D
    ctx->r3 = ADD32(0, 0X2D);
    // 0x80226988: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022698C: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x80226990: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
L_80226994:
    // 0x80226994: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80226998: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022699C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802269A0: jr          $ra
    // 0x802269A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802269A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80228D5C_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228D5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228D60: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228D64: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228D68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228D6C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80228D70: lh          $a3, 0x382($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X382);
    // 0x80228D74: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80228D78: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x80228D7C: jal         0x8004F820
    // 0x80228D80: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80228D80: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x80228D84: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80228D88: lb          $a0, 0xA7($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XA7);
    // 0x80228D8C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80228D90: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80228D94: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80228D98: bne         $a0, $v0, L_80228DAC
    if (ctx->r4 != ctx->r2) {
        // 0x80228D9C: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_80228DAC;
    }
    // 0x80228D9C: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80228DA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228DA4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80228DA8: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_80228DAC:
    // 0x80228DAC: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80228DB0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80228DB4: bne         $v1, $v0, L_80228E44
    if (ctx->r3 != ctx->r2) {
        // 0x80228DB8: nop
    
            goto L_80228E44;
    }
    // 0x80228DB8: nop

    // 0x80228DBC: lbu         $v1, 0x64($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X64);
    // 0x80228DC0: lbu         $a0, 0x65($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X65);
    // 0x80228DC4: lbu         $a1, 0x66($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X66);
    // 0x80228DC8: lbu         $v0, 0x64($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X64);
    // 0x80228DCC: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x80228DD0: andi        $a0, $a0, 0x1F
    ctx->r4 = ctx->r4 & 0X1F;
    // 0x80228DD4: andi        $a1, $a1, 0x1F
    ctx->r5 = ctx->r5 & 0X1F;
    // 0x80228DD8: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x80228DDC: sll         $a0, $a0, 5
    ctx->r4 = S32(ctx->r4 << 5);
    // 0x80228DE0: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x80228DE4: sb          $v0, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r2;
    // 0x80228DE8: lbu         $v0, 0x65($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X65);
    // 0x80228DEC: lb          $a0, 0x64($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X64);
    // 0x80228DF0: sll         $a1, $a1, 10
    ctx->r5 = S32(ctx->r5 << 10);
    // 0x80228DF4: or          $v1, $v1, $a1
    ctx->r3 = ctx->r3 | ctx->r5;
    // 0x80228DF8: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x80228DFC: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x80228E00: bgez        $a0, L_80228E1C
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80228E04: sb          $v0, 0x65($s0)
        MEM_B(0X65, ctx->r16) = ctx->r2;
            goto L_80228E1C;
    }
    // 0x80228E04: sb          $v0, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r2;
    // 0x80228E08: lhu         $v0, 0x15E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X15E);
    // 0x80228E0C: sb          $zero, 0x64($s0)
    MEM_B(0X64, ctx->r16) = 0;
    // 0x80228E10: sb          $zero, 0x65($s0)
    MEM_B(0X65, ctx->r16) = 0;
    // 0x80228E14: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x80228E18: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
L_80228E1C:
    // 0x80228E1C: lh          $v0, 0x15E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X15E);
    // 0x80228E20: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x80228E24: beq         $v0, $zero, L_80228E44
    if (ctx->r2 == 0) {
        // 0x80228E28: nop
    
            goto L_80228E44;
    }
    // 0x80228E28: nop

    // 0x80228E2C: lbu         $v0, 0x66($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X66);
    // 0x80228E30: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80228E34: sb          $v0, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r2;
    // 0x80228E38: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80228E3C: bltzl       $v0, L_80228E44
    if (SIGNED(ctx->r2) < 0) {
        // 0x80228E40: sb          $zero, 0x66($s0)
        MEM_B(0X66, ctx->r16) = 0;
            goto L_80228E44;
    }
    goto skip_0;
    // 0x80228E40: sb          $zero, 0x66($s0)
    MEM_B(0X66, ctx->r16) = 0;
    skip_0:
L_80228E44:
    // 0x80228E44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80228E48: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228E4C: jr          $ra
    // 0x80228E50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228E50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022FA9C_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FA9C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8022FAA0: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8022FAA4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022FAA8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8022FAAC: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x8022FAB0: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8022FAB4: lw          $v0, 0x4C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4C);
    // 0x8022FAB8: beq         $v0, $zero, L_8022FAC8
    if (ctx->r2 == 0) {
        // 0x8022FABC: addiu       $s2, $s1, 0x4C
        ctx->r18 = ADD32(ctx->r17, 0X4C);
            goto L_8022FAC8;
    }
    // 0x8022FABC: addiu       $s2, $s1, 0x4C
    ctx->r18 = ADD32(ctx->r17, 0X4C);
    // 0x8022FAC0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022FAC4: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_8022FAC8:
    // 0x8022FAC8: addiu       $s0, $sp, 0x28
    ctx->r16 = ADD32(ctx->r29, 0X28);
    // 0x8022FACC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FAD0: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    // 0x8022FAD4: jal         0x8009A3B4
    // 0x8022FAD8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022FAD8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022FADC: lhu         $v0, 0x2A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X2A);
    // 0x8022FAE0: lhu         $v1, 0x2C($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X2C);
    // 0x8022FAE4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FAE8: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    // 0x8022FAEC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022FAF0: addiu       $v0, $v0, -0x28
    ctx->r2 = ADD32(ctx->r2, -0X28);
    // 0x8022FAF4: addiu       $v1, $v1, -0x80
    ctx->r3 = ADD32(ctx->r3, -0X80);
    // 0x8022FAF8: sh          $v0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r2;
    // 0x8022FAFC: sh          $v1, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r3;
    // 0x8022FB00: lbu         $v1, 0x1($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X1);
    // 0x8022FB04: ori         $a3, $zero, 0xC000
    ctx->r7 = 0 | 0XC000;
    // 0x8022FB08: lui         $v0, 0x400
    ctx->r2 = S32(0X400 << 16);
    // 0x8022FB0C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8022FB10: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022FB14: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    // 0x8022FB18: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8022FB1C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8022FB20: jal         0x80051E18
    // 0x8022FB24: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_1;
    // 0x8022FB24: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_1:
    // 0x8022FB28: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x8022FB2C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022FB30: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022FB34: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022FB38: lw          $v0, 0x44B0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X44B0);
    // 0x8022FB3C: jalr        $v0
    // 0x8022FB40: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x8022FB40: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x8022FB44: sw          $zero, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = 0;
    // 0x8022FB48: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8022FB4C: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x8022FB50: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8022FB54: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8022FB58: jr          $ra
    // 0x8022FB5C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8022FB5C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8022A11C_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A11C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A120: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A124: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A128: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022A12C: lw          $v0, 0x35C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X35C);
    // 0x8022A130: beq         $v0, $zero, L_8022A18C
    if (ctx->r2 == 0) {
        // 0x8022A134: nop
    
            goto L_8022A18C;
    }
    // 0x8022A134: nop

    // 0x8022A138: jal         0x8004F144
    // 0x8022A13C: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8022A13C: nop

    after_0:
    // 0x8022A140: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022A144: beq         $v1, $zero, L_8022A16C
    if (ctx->r3 == 0) {
        // 0x8022A148: addiu       $a0, $v1, 0x38
        ctx->r4 = ADD32(ctx->r3, 0X38);
            goto L_8022A16C;
    }
    // 0x8022A148: addiu       $a0, $v1, 0x38
    ctx->r4 = ADD32(ctx->r3, 0X38);
    // 0x8022A14C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022A150: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022A154: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022A158: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8022A15C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022A160: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8022A164: jal         0x8009A3B4
    // 0x8022A168: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022A168: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    after_1:
L_8022A16C:
    // 0x8022A16C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A170: jal         0x8007A1B8
    // 0x8022A174: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8007A1B8_555B8(rdram, ctx);
        goto after_2;
    // 0x8022A174: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_2:
    // 0x8022A178: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022A17C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022A180: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022A184: j           L_8022A1B0
    // 0x8022A188: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
        goto L_8022A1B0;
    // 0x8022A188: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_8022A18C:
    // 0x8022A18C: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022A190: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x8022A194: lh          $a3, 0x48($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X48);
    // 0x8022A198: jal         0x8004DA90
    // 0x8022A19C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x8022A19C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022A1A0: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x8022A1A4: lhu         $v1, 0x4E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X4E);
    // 0x8022A1A8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022A1AC: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
L_8022A1B0:
    // 0x8022A1B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022A1B4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A1B8: jr          $ra
    // 0x8022A1BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A1BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225528_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225528: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022552C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225530: jal         0x8006033C
    // 0x80225534: addiu       $a0, $zero, 0x7B0
    ctx->r4 = ADD32(0, 0X7B0);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80225534: addiu       $a0, $zero, 0x7B0
    ctx->r4 = ADD32(0, 0X7B0);
    after_0:
    // 0x80225538: beq         $v0, $zero, L_80225548
    if (ctx->r2 == 0) {
        // 0x8022553C: nop
    
            goto L_80225548;
    }
    // 0x8022553C: nop

    // 0x80225540: jal         0x80060690
    // 0x80225544: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80060690_3BA90(rdram, ctx);
        goto after_1;
    // 0x80225544: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_1:
L_80225548:
    // 0x80225548: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022554C: jr          $ra
    // 0x80225550: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225550: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B13C_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B13C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B140: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022B144: lw          $v1, 0xF0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XF0);
    // 0x8022B148: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x8022B14C: beq         $v0, $zero, L_8022B164
    if (ctx->r2 == 0) {
        // 0x8022B150: andi        $v0, $v1, 0x4
        ctx->r2 = ctx->r3 & 0X4;
            goto L_8022B164;
    }
    // 0x8022B150: andi        $v0, $v1, 0x4
    ctx->r2 = ctx->r3 & 0X4;
    // 0x8022B154: jal         0x8022B184
    // 0x8022B158: nop

    func_8022B184_ovl16(rdram, ctx);
        goto after_0;
    // 0x8022B158: nop

    after_0:
    // 0x8022B15C: j           L_8022B178
    // 0x8022B160: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022B178;
    // 0x8022B160: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022B164:
    // 0x8022B164: beq         $v0, $zero, L_8022B178
    if (ctx->r2 == 0) {
        // 0x8022B168: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022B178;
    }
    // 0x8022B168: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022B16C: jal         0x8022B1E0
    // 0x8022B170: nop

    func_8022B1E0_ovl16(rdram, ctx);
        goto after_1;
    // 0x8022B170: nop

    after_1:
    // 0x8022B174: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8022B178:
    // 0x8022B178: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022B17C: jr          $ra
    // 0x8022B180: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B180: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80230968_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230968: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8023096C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80230970: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x80230974: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80230978: addiu       $s3, $a0, 0x2C
    ctx->r19 = ADD32(ctx->r4, 0X2C);
    // 0x8023097C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80230980: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x80230984: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80230988: addiu       $s0, $s1, 0x10
    ctx->r16 = ADD32(ctx->r17, 0X10);
    // 0x8023098C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
L_80230990:
    // 0x80230990: lbu         $v1, -0xF($s0)
    ctx->r3 = MEM_BU(ctx->r16, -0XF);
    // 0x80230994: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80230998: bne         $v1, $v0, L_802309F8
    if (ctx->r3 != ctx->r2) {
        // 0x8023099C: addiu       $v0, $zero, 0x60
        ctx->r2 = ADD32(0, 0X60);
            goto L_802309F8;
    }
    // 0x8023099C: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x802309A0: lbu         $v1, -0xE($s0)
    ctx->r3 = MEM_BU(ctx->r16, -0XE);
    // 0x802309A4: addiu       $v0, $zero, 0x35
    ctx->r2 = ADD32(0, 0X35);
    // 0x802309A8: bne         $v1, $v0, L_802309C8
    if (ctx->r3 != ctx->r2) {
        // 0x802309AC: addu        $v0, $s2, $zero
        ctx->r2 = ADD32(ctx->r18, 0);
            goto L_802309C8;
    }
    // 0x802309AC: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x802309B0: lw          $a0, 0x8($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X8);
    // 0x802309B4: jal         0x8006033C
    // 0x802309B8: nop

    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x802309B8: nop

    after_0:
    // 0x802309BC: bnel        $v0, $zero, L_802309C4
    if (ctx->r2 != 0) {
        // 0x802309C0: addiu       $s2, $zero, 0x1
        ctx->r18 = ADD32(0, 0X1);
            goto L_802309C4;
    }
    goto skip_0;
    // 0x802309C0: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    skip_0:
L_802309C4:
    // 0x802309C4: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
L_802309C8:
    // 0x802309C8: bnel        $v0, $zero, L_80230B8C
    if (ctx->r2 != 0) {
        // 0x802309CC: addiu       $s1, $s1, 0x14
        ctx->r17 = ADD32(ctx->r17, 0X14);
            goto L_80230B8C;
    }
    goto skip_1;
    // 0x802309CC: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
    skip_1:
    // 0x802309D0: jal         0x8006033C
    // 0x802309D4: addiu       $a0, $zero, 0x60C
    ctx->r4 = ADD32(0, 0X60C);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x802309D4: addiu       $a0, $zero, 0x60C
    ctx->r4 = ADD32(0, 0X60C);
    after_1:
    // 0x802309D8: beq         $v0, $zero, L_802309E8
    if (ctx->r2 == 0) {
        // 0x802309DC: nop
    
            goto L_802309E8;
    }
    // 0x802309DC: nop

    // 0x802309E0: jal         0x80060590
    // 0x802309E4: addiu       $a0, $zero, 0x60C
    ctx->r4 = ADD32(0, 0X60C);
    func_80060590_3B990(rdram, ctx);
        goto after_2;
    // 0x802309E4: addiu       $a0, $zero, 0x60C
    ctx->r4 = ADD32(0, 0X60C);
    after_2:
L_802309E8:
    // 0x802309E8: jal         0x8004EEAC
    // 0x802309EC: nop

    func_8004EEAC_2A2AC(rdram, ctx);
        goto after_3;
    // 0x802309EC: nop

    after_3:
    // 0x802309F0: j           L_80230A6C
    // 0x802309F4: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
        goto L_80230A6C;
    // 0x802309F4: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
L_802309F8:
    // 0x802309F8: bne         $v1, $v0, L_80230B08
    if (ctx->r3 != ctx->r2) {
        // 0x802309FC: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_80230B08;
    }
    // 0x802309FC: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x80230A00: lbu         $v1, -0xE($s0)
    ctx->r3 = MEM_BU(ctx->r16, -0XE);
    // 0x80230A04: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x80230A08: bne         $v1, $v0, L_80230A58
    if (ctx->r3 != ctx->r2) {
        // 0x80230A0C: addu        $v0, $s2, $zero
        ctx->r2 = ADD32(ctx->r18, 0);
            goto L_80230A58;
    }
    // 0x80230A0C: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x80230A10: lb          $v1, -0x8($s0)
    ctx->r3 = MEM_B(ctx->r16, -0X8);
    // 0x80230A14: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80230A18: bne         $v1, $v0, L_80230A38
    if (ctx->r3 != ctx->r2) {
        // 0x80230A1C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80230A38;
    }
    // 0x80230A1C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80230A20: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x80230A24: jal         0x8006033C
    // 0x80230A28: nop

    func_8006033C_3B73C(rdram, ctx);
        goto after_4;
    // 0x80230A28: nop

    after_4:
    // 0x80230A2C: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x80230A30: j           L_80230A54
    // 0x80230A34: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
        goto L_80230A54;
    // 0x80230A34: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
L_80230A38:
    // 0x80230A38: bne         $v1, $v0, L_80230A58
    if (ctx->r3 != ctx->r2) {
        // 0x80230A3C: addu        $v0, $s2, $zero
        ctx->r2 = ADD32(ctx->r18, 0);
            goto L_80230A58;
    }
    // 0x80230A3C: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x80230A40: lw          $a0, 0x4($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X4);
    // 0x80230A44: jal         0x8006033C
    // 0x80230A48: nop

    func_8006033C_3B73C(rdram, ctx);
        goto after_5;
    // 0x80230A48: nop

    after_5:
    // 0x80230A4C: bnel        $v0, $zero, L_80230A54
    if (ctx->r2 != 0) {
        // 0x80230A50: addiu       $s2, $zero, 0x1
        ctx->r18 = ADD32(0, 0X1);
            goto L_80230A54;
    }
    goto skip_2;
    // 0x80230A50: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    skip_2:
L_80230A54:
    // 0x80230A54: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
L_80230A58:
    // 0x80230A58: bnel        $v0, $zero, L_80230B8C
    if (ctx->r2 != 0) {
        // 0x80230A5C: addiu       $s1, $s1, 0x14
        ctx->r17 = ADD32(ctx->r17, 0X14);
            goto L_80230B8C;
    }
    goto skip_3;
    // 0x80230A5C: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
    skip_3:
    // 0x80230A60: jal         0x8004EFE4
    // 0x80230A64: nop

    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_6;
    // 0x80230A64: nop

    after_6:
    // 0x80230A68: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
L_80230A6C:
    // 0x80230A6C: beql        $a1, $zero, L_80230B8C
    if (ctx->r5 == 0) {
        // 0x80230A70: addiu       $s1, $s1, 0x14
        ctx->r17 = ADD32(ctx->r17, 0X14);
            goto L_80230B8C;
    }
    goto skip_4;
    // 0x80230A70: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
    skip_4:
    // 0x80230A74: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80230A78: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x80230A7C: lbu         $v0, -0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0XE);
    // 0x80230A80: sb          $v0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r2;
    // 0x80230A84: lbu         $v0, -0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0XD);
    // 0x80230A88: sb          $v0, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r2;
    // 0x80230A8C: lbu         $v0, -0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0XC);
    // 0x80230A90: sb          $v0, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r2;
    // 0x80230A94: lbu         $v0, -0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0XB);
    // 0x80230A98: sb          $v0, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r2;
    // 0x80230A9C: lbu         $v0, -0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0X9);
    // 0x80230AA0: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80230AA4: sh          $v0, 0x56($a1)
    MEM_H(0X56, ctx->r5) = ctx->r2;
    // 0x80230AA8: lbu         $v0, -0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0X8);
    // 0x80230AAC: sb          $v0, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r2;
    // 0x80230AB0: lbu         $v0, -0x7($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0X7);
    // 0x80230AB4: sb          $v0, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r2;
    // 0x80230AB8: lbu         $v0, -0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0X6);
    // 0x80230ABC: sb          $v0, 0xE($a1)
    MEM_B(0XE, ctx->r5) = ctx->r2;
    // 0x80230AC0: lbu         $v0, -0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0X5);
    // 0x80230AC4: sb          $v0, 0xF($a1)
    MEM_B(0XF, ctx->r5) = ctx->r2;
    // 0x80230AC8: lhu         $v0, -0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, -0X4);
    // 0x80230ACC: sh          $v0, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r2;
    // 0x80230AD0: lhu         $v0, -0x2($s0)
    ctx->r2 = MEM_HU(ctx->r16, -0X2);
    // 0x80230AD4: sh          $v0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r2;
    // 0x80230AD8: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x80230ADC: lh          $v1, 0x16($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X16);
    // 0x80230AE0: sh          $v0, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r2;
    // 0x80230AE4: lh          $v0, 0x14($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X14);
    // 0x80230AE8: lh          $a0, 0x18($a1)
    ctx->r4 = MEM_H(ctx->r5, 0X18);
    // 0x80230AEC: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80230AF0: sw          $v1, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->r3;
    // 0x80230AF4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80230AF8: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80230AFC: sw          $v0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->r2;
    // 0x80230B00: j           L_80230B88
    // 0x80230B04: sw          $a0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->r4;
        goto L_80230B88;
    // 0x80230B04: sw          $a0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->r4;
L_80230B08:
    // 0x80230B08: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
    // 0x80230B0C: bnel        $v1, $v0, L_80230B8C
    if (ctx->r3 != ctx->r2) {
        // 0x80230B10: addiu       $s1, $s1, 0x14
        ctx->r17 = ADD32(ctx->r17, 0X14);
            goto L_80230B8C;
    }
    goto skip_5;
    // 0x80230B10: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
    skip_5:
    // 0x80230B14: jal         0x8004F2C4
    // 0x80230B18: nop

    func_8004F2C4_2A6C4(rdram, ctx);
        goto after_7;
    // 0x80230B18: nop

    after_7:
    // 0x80230B1C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80230B20: beql        $v1, $zero, L_80230B8C
    if (ctx->r3 == 0) {
        // 0x80230B24: addiu       $s1, $s1, 0x14
        ctx->r17 = ADD32(ctx->r17, 0X14);
            goto L_80230B8C;
    }
    goto skip_6;
    // 0x80230B24: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
    skip_6:
    // 0x80230B28: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80230B2C: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80230B30: lbu         $v0, -0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0XE);
    // 0x80230B34: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x80230B38: lbu         $v0, -0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0XD);
    // 0x80230B3C: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    // 0x80230B40: lbu         $v0, -0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0XC);
    // 0x80230B44: sb          $v0, 0x4($v1)
    MEM_B(0X4, ctx->r3) = ctx->r2;
    // 0x80230B48: lbu         $v0, -0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0XB);
    // 0x80230B4C: sb          $v0, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r2;
    // 0x80230B50: lbu         $v0, -0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0X8);
    // 0x80230B54: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
    // 0x80230B58: lbu         $v0, -0x7($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0X7);
    // 0x80230B5C: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
    // 0x80230B60: lbu         $v0, -0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0X6);
    // 0x80230B64: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
    // 0x80230B68: lbu         $v0, -0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0X5);
    // 0x80230B6C: sb          $v0, 0xF($v1)
    MEM_B(0XF, ctx->r3) = ctx->r2;
    // 0x80230B70: lhu         $v0, -0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, -0X4);
    // 0x80230B74: sh          $v0, 0x38($v1)
    MEM_H(0X38, ctx->r3) = ctx->r2;
    // 0x80230B78: lhu         $v0, -0x2($s0)
    ctx->r2 = MEM_HU(ctx->r16, -0X2);
    // 0x80230B7C: sh          $v0, 0x3A($v1)
    MEM_H(0X3A, ctx->r3) = ctx->r2;
    // 0x80230B80: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x80230B84: sh          $v0, 0x3C($v1)
    MEM_H(0X3C, ctx->r3) = ctx->r2;
L_80230B88:
    // 0x80230B88: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
L_80230B8C:
    // 0x80230B8C: lb          $v1, 0x0($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X0);
    // 0x80230B90: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80230B94: bne         $v1, $v0, L_80230990
    if (ctx->r3 != ctx->r2) {
        // 0x80230B98: addiu       $s0, $s0, 0x14
        ctx->r16 = ADD32(ctx->r16, 0X14);
            goto L_80230990;
    }
    // 0x80230B98: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    // 0x80230B9C: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80230BA0: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80230BA4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80230BA8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80230BAC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80230BB0: jr          $ra
    // 0x80230BB4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80230BB4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80225E4C_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225E4C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80225E50: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225E54: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225E58: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80225E5C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80225E60: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80225E64: bne         $v0, $zero, L_80225E94
    if (ctx->r2 != 0) {
        // 0x80225E68: addiu       $s1, $s0, 0x500
        ctx->r17 = ADD32(ctx->r16, 0X500);
            goto L_80225E94;
    }
    // 0x80225E68: addiu       $s1, $s0, 0x500
    ctx->r17 = ADD32(ctx->r16, 0X500);
    // 0x80225E6C: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    // 0x80225E70: jal         0x80050294
    // 0x80225E74: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80225E74: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80225E78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80225E7C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80225E80: jal         0x80225FD8
    // 0x80225E84: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    func_80225FD8_ovl16(rdram, ctx);
        goto after_1;
    // 0x80225E84: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_1:
    // 0x80225E88: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80225E8C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225E90: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80225E94:
    // 0x80225E94: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80225E98: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80225E9C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225EA0: jr          $ra
    // 0x80225EA4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80225EA4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022D304_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D304: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022D308: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022D30C: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x8022D310: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022D314: addiu       $s1, $sp, 0x10
    ctx->r17 = ADD32(ctx->r29, 0X10);
    // 0x8022D318: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8022D31C: addiu       $s3, $a0, 0x14
    ctx->r19 = ADD32(ctx->r4, 0X14);
    // 0x8022D320: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8022D324: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022D328: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_8022D32C:
    // 0x8022D32C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x8022D330: jal         0x8009A3B4
    // 0x8022D334: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022D334: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022D338: jal         0x800A3450
    // 0x8022D33C: addiu       $s0, $s2, 0x7
    ctx->r16 = ADD32(ctx->r18, 0X7);
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x8022D33C: addiu       $s0, $s2, 0x7
    ctx->r16 = ADD32(ctx->r18, 0X7);
    after_1:
    // 0x8022D340: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8022D344: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022D348: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022D34C: lbu         $v0, 0x4340($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X4340);
    // 0x8022D350: lhu         $v1, 0x10($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X10);
    // 0x8022D354: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022D358: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8022D35C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022D360: jal         0x800A3450
    // 0x8022D364: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x8022D364: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    after_2:
    // 0x8022D368: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8022D36C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022D370: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022D374: lbu         $v0, 0x4340($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X4340);
    // 0x8022D378: lhu         $v1, 0x12($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X12);
    // 0x8022D37C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022D380: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8022D384: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022D388: jal         0x800A3450
    // 0x8022D38C: sh          $v1, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x8022D38C: sh          $v1, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r3;
    after_3:
    // 0x8022D390: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022D394: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022D398: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8022D39C: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8022D3A0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022D3A4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022D3A8: lbu         $v0, 0x4340($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X4340);
    // 0x8022D3AC: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    // 0x8022D3B0: lhu         $v1, 0x14($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X14);
    // 0x8022D3B4: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022D3B8: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8022D3BC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022D3C0: jal         0x80231878
    // 0x8022D3C4: sh          $v1, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r3;
    func_80231878_ovl16(rdram, ctx);
        goto after_4;
    // 0x8022D3C4: sh          $v1, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r3;
    after_4:
    // 0x8022D3C8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022D3CC: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x8022D3D0: jal         0x8009A3B4
    // 0x8022D3D4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8022D3D4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x8022D3D8: jal         0x800A3450
    // 0x8022D3DC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    func_800A3450_7E850(rdram, ctx);
        goto after_6;
    // 0x8022D3DC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    after_6:
    // 0x8022D3E0: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8022D3E4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022D3E8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022D3EC: lbu         $v0, 0x4340($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X4340);
    // 0x8022D3F0: lhu         $v1, 0x10($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X10);
    // 0x8022D3F4: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022D3F8: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8022D3FC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022D400: jal         0x800A3450
    // 0x8022D404: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_7;
    // 0x8022D404: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    after_7:
    // 0x8022D408: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8022D40C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022D410: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022D414: lbu         $v0, 0x4340($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X4340);
    // 0x8022D418: lhu         $v1, 0x12($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X12);
    // 0x8022D41C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022D420: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8022D424: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022D428: jal         0x800A3450
    // 0x8022D42C: sh          $v1, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_8;
    // 0x8022D42C: sh          $v1, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r3;
    after_8:
    // 0x8022D430: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022D434: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022D438: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8022D43C: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8022D440: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022D444: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022D448: lbu         $v0, 0x4340($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X4340);
    // 0x8022D44C: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    // 0x8022D450: lhu         $v1, 0x14($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X14);
    // 0x8022D454: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022D458: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8022D45C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022D460: jal         0x80231878
    // 0x8022D464: sh          $v1, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r3;
    func_80231878_ovl16(rdram, ctx);
        goto after_9;
    // 0x8022D464: sh          $v1, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r3;
    after_9:
    // 0x8022D468: sltiu       $v0, $s2, 0x3
    ctx->r2 = ctx->r18 < 0X3 ? 1 : 0;
    // 0x8022D46C: bne         $v0, $zero, L_8022D32C
    if (ctx->r2 != 0) {
        // 0x8022D470: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022D32C;
    }
    // 0x8022D470: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022D474: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8022D478: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8022D47C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022D480: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022D484: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022D488: jr          $ra
    // 0x8022D48C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022D48C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80231D64_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231D64: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80231D68: sw          $s7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r23;
    // 0x80231D6C: addu        $s7, $a0, $zero
    ctx->r23 = ADD32(ctx->r4, 0);
    // 0x80231D70: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x80231D74: sw          $fp, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r30;
    // 0x80231D78: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x80231D7C: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x80231D80: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x80231D84: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x80231D88: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x80231D8C: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x80231D90: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x80231D94: lb          $a0, 0xC($s7)
    ctx->r4 = MEM_B(ctx->r23, 0XC);
    // 0x80231D98: addiu       $fp, $s7, 0x28
    ctx->r30 = ADD32(ctx->r23, 0X28);
    // 0x80231D9C: jal         0x80053ED8
    // 0x80231DA0: addu        $s6, $zero, $zero
    ctx->r22 = ADD32(0, 0);
    func_80053ED8_2F2D8(rdram, ctx);
        goto after_0;
    // 0x80231DA0: addu        $s6, $zero, $zero
    ctx->r22 = ADD32(0, 0);
    after_0:
    // 0x80231DA4: addu        $s5, $v0, $zero
    ctx->r21 = ADD32(ctx->r2, 0);
    // 0x80231DA8: andi        $v0, $s6, 0xFF
    ctx->r2 = ctx->r22 & 0XFF;
L_80231DAC:
    // 0x80231DAC: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80231DB0: addu        $s4, $v0, $fp
    ctx->r20 = ADD32(ctx->r2, ctx->r30);
    // 0x80231DB4: lb          $v0, 0x2($s4)
    ctx->r2 = MEM_B(ctx->r20, 0X2);
    // 0x80231DB8: bne         $v0, $zero, L_8023208C
    if (ctx->r2 != 0) {
        // 0x80231DBC: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8023208C;
    }
    // 0x80231DBC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80231DC0: lbu         $s1, 0x1($s4)
    ctx->r17 = MEM_BU(ctx->r20, 0X1);
    // 0x80231DC4: lbu         $s3, 0x0($s4)
    ctx->r19 = MEM_BU(ctx->r20, 0X0);
    // 0x80231DC8: sll         $s1, $s1, 24
    ctx->r17 = S32(ctx->r17 << 24);
    // 0x80231DCC: sra         $s1, $s1, 16
    ctx->r17 = S32(SIGNED(ctx->r17) >> 16);
    // 0x80231DD0: jal         0x800324B4
    // 0x80231DD4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_800324B4_D8B4(rdram, ctx);
        goto after_1;
    // 0x80231DD4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x80231DD8: lh          $v1, 0x6($s4)
    ctx->r3 = MEM_H(ctx->r20, 0X6);
    // 0x80231DDC: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80231DE0: mflo        $s0
    ctx->r16 = lo;
    // 0x80231DE4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80231DE8: nop

    // 0x80231DEC: jal         0x80032498
    // 0x80231DF0: sra         $s0, $s0, 12
    ctx->r16 = S32(SIGNED(ctx->r16) >> 12);
    func_80032498_D898(rdram, ctx);
        goto after_2;
    // 0x80231DF0: sra         $s0, $s0, 12
    ctx->r16 = S32(SIGNED(ctx->r16) >> 12);
    after_2:
    // 0x80231DF4: lh          $v1, 0x6($s4)
    ctx->r3 = MEM_H(ctx->r20, 0X6);
    // 0x80231DF8: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80231DFC: mflo        $s2
    ctx->r18 = lo;
    // 0x80231E00: sll         $s3, $s3, 7
    ctx->r19 = S32(ctx->r19 << 7);
    // 0x80231E04: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80231E08: jal         0x800324B4
    // 0x80231E0C: sra         $s2, $s2, 12
    ctx->r18 = S32(SIGNED(ctx->r18) >> 12);
    func_800324B4_D8B4(rdram, ctx);
        goto after_3;
    // 0x80231E0C: sra         $s2, $s2, 12
    ctx->r18 = S32(SIGNED(ctx->r18) >> 12);
    after_3:
    // 0x80231E10: sll         $s0, $s0, 16
    ctx->r16 = S32(ctx->r16 << 16);
    // 0x80231E14: sra         $s0, $s0, 16
    ctx->r16 = S32(SIGNED(ctx->r16) >> 16);
    // 0x80231E18: mult        $v0, $s0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80231E1C: mflo        $v0
    ctx->r2 = lo;
    // 0x80231E20: lhu         $v1, 0x38($s5)
    ctx->r3 = MEM_HU(ctx->r21, 0X38);
    // 0x80231E24: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80231E28: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80231E2C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80231E30: jal         0x80032498
    // 0x80231E34: sh          $v1, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r3;
    func_80032498_D898(rdram, ctx);
        goto after_4;
    // 0x80231E34: sh          $v1, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r3;
    after_4:
    // 0x80231E38: nop

    // 0x80231E3C: mult        $v0, $s0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80231E40: mflo        $v0
    ctx->r2 = lo;
    // 0x80231E44: lhu         $v1, 0x3C($s5)
    ctx->r3 = MEM_HU(ctx->r21, 0X3C);
    // 0x80231E48: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80231E4C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80231E50: sh          $v1, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r3;
    // 0x80231E54: lhu         $v0, 0x3A($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X3A);
    // 0x80231E58: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80231E5C: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x80231E60: jal         0x800324B4
    // 0x80231E64: sh          $v0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r2;
    func_800324B4_D8B4(rdram, ctx);
        goto after_5;
    // 0x80231E64: sh          $v0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r2;
    after_5:
    // 0x80231E68: lh          $v1, 0x6($s4)
    ctx->r3 = MEM_H(ctx->r20, 0X6);
    // 0x80231E6C: lbu         $a0, 0x3($s4)
    ctx->r4 = MEM_BU(ctx->r20, 0X3);
    // 0x80231E70: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80231E74: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80231E78: mflo        $s0
    ctx->r16 = lo;
    // 0x80231E7C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80231E80: nop

    // 0x80231E84: jal         0x80032498
    // 0x80231E88: sra         $s0, $s0, 12
    ctx->r16 = S32(SIGNED(ctx->r16) >> 12);
    func_80032498_D898(rdram, ctx);
        goto after_6;
    // 0x80231E88: sra         $s0, $s0, 12
    ctx->r16 = S32(SIGNED(ctx->r16) >> 12);
    after_6:
    // 0x80231E8C: lh          $v1, 0x6($s4)
    ctx->r3 = MEM_H(ctx->r20, 0X6);
    // 0x80231E90: lbu         $a0, 0x3($s4)
    ctx->r4 = MEM_BU(ctx->r20, 0X3);
    // 0x80231E94: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80231E98: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80231E9C: mflo        $s1
    ctx->r17 = lo;
    // 0x80231EA0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80231EA4: nop

    // 0x80231EA8: jal         0x800324B4
    // 0x80231EAC: sra         $s1, $s1, 12
    ctx->r17 = S32(SIGNED(ctx->r17) >> 12);
    func_800324B4_D8B4(rdram, ctx);
        goto after_7;
    // 0x80231EAC: sra         $s1, $s1, 12
    ctx->r17 = S32(SIGNED(ctx->r17) >> 12);
    after_7:
    // 0x80231EB0: sll         $s0, $s0, 16
    ctx->r16 = S32(ctx->r16 << 16);
    // 0x80231EB4: sra         $s0, $s0, 16
    ctx->r16 = S32(SIGNED(ctx->r16) >> 16);
    // 0x80231EB8: mult        $v0, $s0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80231EBC: mflo        $v0
    ctx->r2 = lo;
    // 0x80231EC0: lhu         $v1, 0x38($s5)
    ctx->r3 = MEM_HU(ctx->r21, 0X38);
    // 0x80231EC4: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80231EC8: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80231ECC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80231ED0: jal         0x80032498
    // 0x80231ED4: sh          $v1, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r3;
    func_80032498_D898(rdram, ctx);
        goto after_8;
    // 0x80231ED4: sh          $v1, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r3;
    after_8:
    // 0x80231ED8: nop

    // 0x80231EDC: mult        $v0, $s0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80231EE0: mflo        $v0
    ctx->r2 = lo;
    // 0x80231EE4: lhu         $v1, 0x3C($s5)
    ctx->r3 = MEM_HU(ctx->r21, 0X3C);
    // 0x80231EE8: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80231EEC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80231EF0: sh          $v1, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r3;
    // 0x80231EF4: lhu         $v0, 0x3A($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X3A);
    // 0x80231EF8: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x80231EFC: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    // 0x80231F00: lh          $v0, 0x6($s4)
    ctx->r2 = MEM_H(ctx->r20, 0X6);
    // 0x80231F04: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80231F08: slti        $v0, $v0, 0x18
    ctx->r2 = SIGNED(ctx->r2) < 0X18 ? 1 : 0;
    // 0x80231F0C: bne         $v0, $zero, L_80231F18
    if (ctx->r2 != 0) {
        // 0x80231F10: addiu       $v0, $v1, -0x8
        ctx->r2 = ADD32(ctx->r3, -0X8);
            goto L_80231F18;
    }
    // 0x80231F10: addiu       $v0, $v1, -0x8
    ctx->r2 = ADD32(ctx->r3, -0X8);
    // 0x80231F14: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
L_80231F18:
    // 0x80231F18: andi        $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 & 0XFFFF;
    // 0x80231F1C: andi        $a1, $a1, 0xFFFF
    ctx->r5 = ctx->r5 & 0XFFFF;
    // 0x80231F20: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    // 0x80231F24: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80231F28: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80231F2C: lhu         $v0, 0x18($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X18);
    // 0x80231F30: andi        $a3, $a3, 0xFFFF
    ctx->r7 = ctx->r7 & 0XFFFF;
    // 0x80231F34: lhu         $v1, 0x1C($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X1C);
    // 0x80231F38: lui         $t1, 0xFFFF
    ctx->r9 = S32(0XFFFF << 16);
    // 0x80231F3C: lhu         $t0, 0x26($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X26);
    // 0x80231F40: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80231F44: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x80231F48: and         $a0, $a0, $t1
    ctx->r4 = ctx->r4 & ctx->r9;
    // 0x80231F4C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80231F50: lhu         $v0, 0x20($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X20);
    // 0x80231F54: or          $a1, $a1, $v1
    ctx->r5 = ctx->r5 | ctx->r3;
    // 0x80231F58: and         $a1, $a1, $t1
    ctx->r5 = ctx->r5 & ctx->r9;
    // 0x80231F5C: lhu         $v1, 0x1A($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X1A);
    // 0x80231F60: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80231F64: or          $a2, $a2, $v0
    ctx->r6 = ctx->r6 | ctx->r2;
    // 0x80231F68: lhu         $v0, 0x24($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X24);
    // 0x80231F6C: and         $a2, $a2, $t1
    ctx->r6 = ctx->r6 & ctx->r9;
    // 0x80231F70: or          $a0, $a0, $v1
    ctx->r4 = ctx->r4 | ctx->r3;
    // 0x80231F74: lhu         $v1, 0x22($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X22);
    // 0x80231F78: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80231F7C: or          $a3, $a3, $v0
    ctx->r7 = ctx->r7 | ctx->r2;
    // 0x80231F80: and         $a3, $a3, $t1
    ctx->r7 = ctx->r7 & ctx->r9;
    // 0x80231F84: lhu         $v0, 0x1E($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X1E);
    // 0x80231F88: or          $a2, $a2, $v1
    ctx->r6 = ctx->r6 | ctx->r3;
    // 0x80231F8C: or          $a3, $a3, $t0
    ctx->r7 = ctx->r7 | ctx->r8;
    // 0x80231F90: jal         0x802320F4
    // 0x80231F94: or          $a1, $a1, $v0
    ctx->r5 = ctx->r5 | ctx->r2;
    func_802320F4_ovl16(rdram, ctx);
        goto after_9;
    // 0x80231F94: or          $a1, $a1, $v0
    ctx->r5 = ctx->r5 | ctx->r2;
    after_9:
    // 0x80231F98: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80231F9C: lhu         $v0, -0x730C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X730C);
    // 0x80231FA0: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80231FA4: beq         $v0, $zero, L_80231FCC
    if (ctx->r2 == 0) {
        // 0x80231FA8: andi        $v0, $s6, 0xFF
        ctx->r2 = ctx->r22 & 0XFF;
            goto L_80231FCC;
    }
    // 0x80231FA8: andi        $v0, $s6, 0xFF
    ctx->r2 = ctx->r22 & 0XFF;
    // 0x80231FAC: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80231FB0: addu        $a1, $v0, $fp
    ctx->r5 = ADD32(ctx->r2, ctx->r30);
    // 0x80231FB4: lbu         $a0, 0x4($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X4);
    // 0x80231FB8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80231FBC: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x80231FC0: beq         $v1, $v0, L_80231FCC
    if (ctx->r3 == ctx->r2) {
        // 0x80231FC4: addiu       $v0, $a0, -0x1
        ctx->r2 = ADD32(ctx->r4, -0X1);
            goto L_80231FCC;
    }
    // 0x80231FC4: addiu       $v0, $a0, -0x1
    ctx->r2 = ADD32(ctx->r4, -0X1);
    // 0x80231FC8: sb          $v0, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r2;
L_80231FCC:
    // 0x80231FCC: andi        $v0, $s6, 0xFF
    ctx->r2 = ctx->r22 & 0XFF;
    // 0x80231FD0: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80231FD4: addu        $s0, $v0, $fp
    ctx->r16 = ADD32(ctx->r2, ctx->r30);
    // 0x80231FD8: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x80231FDC: lhu         $v0, 0x6($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6);
    // 0x80231FE0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80231FE4: sh          $v0, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r2;
    // 0x80231FE8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80231FEC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80231FF0: slti        $v0, $v0, 0x8
    ctx->r2 = SIGNED(ctx->r2) < 0X8 ? 1 : 0;
    // 0x80231FF4: beq         $v0, $zero, L_80232098
    if (ctx->r2 == 0) {
        // 0x80231FF8: addiu       $s6, $s6, 0x1
        ctx->r22 = ADD32(ctx->r22, 0X1);
            goto L_80232098;
    }
    // 0x80231FF8: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x80231FFC: jal         0x800A3450
    // 0x80232000: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_10;
    // 0x80232000: nop

    after_10:
    // 0x80232004: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x80232008: jal         0x800A3450
    // 0x8023200C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_11;
    // 0x8023200C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_11:
    // 0x80232010: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80232014: jal         0x800A3450
    // 0x80232018: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_12;
    // 0x80232018: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
    after_12:
    // 0x8023201C: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80232020: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232024: jal         0x800A3450
    // 0x80232028: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_13;
    // 0x80232028: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    after_13:
    // 0x8023202C: lbu         $v1, 0x3($s7)
    ctx->r3 = MEM_BU(ctx->r23, 0X3);
    // 0x80232030: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80232034: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80232038: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8023203C: lbu         $v1, 0x4A61($at)
    ctx->r3 = MEM_BU(ctx->r1, 0X4A61);
    // 0x80232040: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x80232044: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80232048: sb          $v1, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r3;
    // 0x8023204C: lbu         $v0, 0x3($s7)
    ctx->r2 = MEM_BU(ctx->r23, 0X3);
    // 0x80232050: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80232054: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80232058: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023205C: lhu         $v0, 0x4A62($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X4A62);
    // 0x80232060: jal         0x800A3450
    // 0x80232064: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_14;
    // 0x80232064: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    after_14:
    // 0x80232068: lbu         $v1, 0x3($s7)
    ctx->r3 = MEM_BU(ctx->r23, 0X3);
    // 0x8023206C: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80232070: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80232074: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80232078: lhu         $v1, 0x4A64($at)
    ctx->r3 = MEM_HU(ctx->r1, 0X4A64);
    // 0x8023207C: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80232080: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80232084: j           L_80232098
    // 0x80232088: sh          $v1, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r3;
        goto L_80232098;
    // 0x80232088: sh          $v1, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r3;
L_8023208C:
    // 0x8023208C: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80232090: sb          $v0, 0x2($s4)
    MEM_B(0X2, ctx->r20) = ctx->r2;
    // 0x80232094: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
L_80232098:
    // 0x80232098: andi        $v0, $s6, 0xFF
    ctx->r2 = ctx->r22 & 0XFF;
    // 0x8023209C: sltiu       $v0, $v0, 0x4
    ctx->r2 = ctx->r2 < 0X4 ? 1 : 0;
    // 0x802320A0: bne         $v0, $zero, L_80231DAC
    if (ctx->r2 != 0) {
        // 0x802320A4: andi        $v0, $s6, 0xFF
        ctx->r2 = ctx->r22 & 0XFF;
            goto L_80231DAC;
    }
    // 0x802320A4: andi        $v0, $s6, 0xFF
    ctx->r2 = ctx->r22 & 0XFF;
    // 0x802320A8: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x802320AC: lw          $fp, 0x58($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X58);
    // 0x802320B0: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x802320B4: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x802320B8: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x802320BC: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x802320C0: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x802320C4: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x802320C8: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x802320CC: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x802320D0: jr          $ra
    // 0x802320D4: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x802320D4: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_8022D930_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D930: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022D934: sw          $fp, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r30;
    // 0x8022D938: addu        $fp, $a0, $zero
    ctx->r30 = ADD32(ctx->r4, 0);
    // 0x8022D93C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8022D940: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x8022D944: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x8022D948: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x8022D94C: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8022D950: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022D954: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022D958: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022D95C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D960: lw          $s4, 0x14($fp)
    ctx->r20 = MEM_W(ctx->r30, 0X14);
    // 0x8022D964: lh          $v1, 0x0($s4)
    ctx->r3 = MEM_H(ctx->r20, 0X0);
    // 0x8022D968: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022D96C: beq         $v1, $v0, L_8022DD40
    if (ctx->r3 == ctx->r2) {
        // 0x8022D970: addiu       $s7, $fp, 0x14
        ctx->r23 = ADD32(ctx->r30, 0X14);
            goto L_8022DD40;
    }
    // 0x8022D970: addiu       $s7, $fp, 0x14
    ctx->r23 = ADD32(ctx->r30, 0X14);
    // 0x8022D974: addiu       $s6, $zero, 0xFF
    ctx->r22 = ADD32(0, 0XFF);
    // 0x8022D978: lui         $s3, 0x8000
    ctx->r19 = S32(0X8000 << 16);
    // 0x8022D97C: addiu       $s5, $zero, 0x2
    ctx->r21 = ADD32(0, 0X2);
    // 0x8022D980: addiu       $s2, $s4, 0x8
    ctx->r18 = ADD32(ctx->r20, 0X8);
L_8022D984:
    // 0x8022D984: lbu         $v0, 0x8($s7)
    ctx->r2 = MEM_BU(ctx->r23, 0X8);
    // 0x8022D988: lh          $v1, -0x6($s2)
    ctx->r3 = MEM_H(ctx->r18, -0X6);
    // 0x8022D98C: sll         $a2, $v0, 24
    ctx->r6 = S32(ctx->r2 << 24);
    // 0x8022D990: sra         $v0, $a2, 24
    ctx->r2 = S32(SIGNED(ctx->r6) >> 24);
    // 0x8022D994: beq         $v1, $v0, L_8022DC2C
    if (ctx->r3 == ctx->r2) {
        // 0x8022D998: nop
    
            goto L_8022DC2C;
    }
    // 0x8022D998: nop

    // 0x8022D99C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022D9A0: lhu         $v0, 0x49C4($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X49C4);
    // 0x8022D9A4: lb          $a0, -0x4($s2)
    ctx->r4 = MEM_B(ctx->r18, -0X4);
    // 0x8022D9A8: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8022D9AC: lhu         $v1, 0x49C8($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X49C8);
    // 0x8022D9B0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D9B4: sra         $v0, $v0, 25
    ctx->r2 = S32(SIGNED(ctx->r2) >> 25);
    // 0x8022D9B8: subu        $a1, $v0, $a0
    ctx->r5 = SUB32(ctx->r2, ctx->r4);
    // 0x8022D9BC: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022D9C0: lb          $a0, -0x3($s2)
    ctx->r4 = MEM_B(ctx->r18, -0X3);
    // 0x8022D9C4: lbu         $v0, -0x2($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0X2);
    // 0x8022D9C8: sra         $v1, $v1, 25
    ctx->r3 = S32(SIGNED(ctx->r3) >> 25);
    // 0x8022D9CC: sltu        $v0, $a1, $v0
    ctx->r2 = ctx->r5 < ctx->r2 ? 1 : 0;
    // 0x8022D9D0: beq         $v0, $zero, L_8022DD2C
    if (ctx->r2 == 0) {
        // 0x8022D9D4: subu        $v1, $v1, $a0
        ctx->r3 = SUB32(ctx->r3, ctx->r4);
            goto L_8022DD2C;
    }
    // 0x8022D9D4: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x8022D9D8: lbu         $v0, -0x1($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0X1);
    // 0x8022D9DC: sltu        $v0, $v1, $v0
    ctx->r2 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x8022D9E0: beq         $v0, $zero, L_8022DD2C
    if (ctx->r2 == 0) {
        // 0x8022D9E4: sra         $v1, $a2, 24
        ctx->r3 = S32(SIGNED(ctx->r6) >> 24);
            goto L_8022DD2C;
    }
    // 0x8022D9E4: sra         $v1, $a2, 24
    ctx->r3 = S32(SIGNED(ctx->r6) >> 24);
    // 0x8022D9E8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022D9EC: beql        $v1, $v0, L_8022DC24
    if (ctx->r3 == ctx->r2) {
        // 0x8022D9F0: sw          $s4, 0x4($s7)
        MEM_W(0X4, ctx->r23) = ctx->r20;
            goto L_8022DC24;
    }
    goto skip_0;
    // 0x8022D9F0: sw          $s4, 0x4($s7)
    MEM_W(0X4, ctx->r23) = ctx->r20;
    skip_0:
    // 0x8022D9F4: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022D9F8: lbu         $v0, 0x4C61($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4C61);
    // 0x8022D9FC: lui         $s1, 0x8023
    ctx->r17 = S32(0X8023 << 16);
    // 0x8022DA00: addiu       $s1, $s1, 0x4C60
    ctx->r17 = ADD32(ctx->r17, 0X4C60);
    // 0x8022DA04: beql        $v0, $s6, L_8022DC24
    if (ctx->r2 == ctx->r22) {
        // 0x8022DA08: sw          $s4, 0x4($s7)
        MEM_W(0X4, ctx->r23) = ctx->r20;
            goto L_8022DC24;
    }
    goto skip_1;
    // 0x8022DA08: sw          $s4, 0x4($s7)
    MEM_W(0X4, ctx->r23) = ctx->r20;
    skip_1:
    // 0x8022DA0C: addiu       $s0, $s1, 0x1
    ctx->r16 = ADD32(ctx->r17, 0X1);
L_8022DA10:
    // 0x8022DA10: jal         0x8004DA68
    // 0x8022DA14: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    func_8004DA68_28E68(rdram, ctx);
        goto after_0;
    // 0x8022DA14: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    after_0:
    // 0x8022DA18: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022DA1C: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022DA20: beq         $v1, $v0, L_8022DAC4
    if (ctx->r3 == ctx->r2) {
        // 0x8022DA24: sltiu       $v0, $v1, 0x41
        ctx->r2 = ctx->r3 < 0X41 ? 1 : 0;
            goto L_8022DAC4;
    }
    // 0x8022DA24: sltiu       $v0, $v1, 0x41
    ctx->r2 = ctx->r3 < 0X41 ? 1 : 0;
    // 0x8022DA28: beq         $v0, $zero, L_8022DA40
    if (ctx->r2 == 0) {
        // 0x8022DA2C: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_8022DA40;
    }
    // 0x8022DA2C: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8022DA30: beq         $v1, $v0, L_8022DA5C
    if (ctx->r3 == ctx->r2) {
        // 0x8022DA34: nop
    
            goto L_8022DA5C;
    }
    // 0x8022DA34: nop

    // 0x8022DA38: j           L_8022DC14
    // 0x8022DA3C: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
        goto L_8022DC14;
    // 0x8022DA3C: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
L_8022DA40:
    // 0x8022DA40: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x8022DA44: beq         $v1, $v0, L_8022DB2C
    if (ctx->r3 == ctx->r2) {
        // 0x8022DA48: addiu       $v0, $zero, 0xE0
        ctx->r2 = ADD32(0, 0XE0);
            goto L_8022DB2C;
    }
    // 0x8022DA48: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
    // 0x8022DA4C: beq         $v1, $v0, L_8022DB84
    if (ctx->r3 == ctx->r2) {
        // 0x8022DA50: nop
    
            goto L_8022DB84;
    }
    // 0x8022DA50: nop

    // 0x8022DA54: j           L_8022DC14
    // 0x8022DA58: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
        goto L_8022DC14;
    // 0x8022DA58: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
L_8022DA5C:
    // 0x8022DA5C: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x8022DA60: jal         0x80053ED8
    // 0x8022DA64: nop

    func_80053ED8_2F2D8(rdram, ctx);
        goto after_1;
    // 0x8022DA64: nop

    after_1:
    // 0x8022DA68: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8022DA6C: lw          $v1, -0x714C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X714C);
    // 0x8022DA70: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8022DA74: lw          $a0, 0x4C54($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4C54);
    // 0x8022DA78: lbu         $a1, 0x0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X0);
    // 0x8022DA7C: xor         $v1, $v1, $a0
    ctx->r3 = ctx->r3 ^ ctx->r4;
    // 0x8022DA80: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
    // 0x8022DA84: andi        $a1, $a1, 0x1F
    ctx->r5 = ctx->r5 & 0X1F;
    // 0x8022DA88: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022DA8C: srlv        $v0, $s3, $a1
    ctx->r2 = S32(U32(ctx->r19) >> (ctx->r5 & 31));
    // 0x8022DA90: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8022DA94: bne         $v0, $zero, L_8022DBC4
    if (ctx->r2 != 0) {
        // 0x8022DA98: nop
    
            goto L_8022DBC4;
    }
    // 0x8022DA98: nop

    // 0x8022DA9C: lbu         $v1, 0x2($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X2);
    // 0x8022DAA0: sb          $s5, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r21;
    // 0x8022DAA4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022DAA8: lw          $v0, 0x4020($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4020);
    // 0x8022DAAC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022DAB0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022DAB4: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x8022DAB8: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x8022DABC: j           L_8022DC04
    // 0x8022DAC0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
        goto L_8022DC04;
    // 0x8022DAC0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_8022DAC4:
    // 0x8022DAC4: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x8022DAC8: jal         0x80053ED8
    // 0x8022DACC: nop

    func_80053ED8_2F2D8(rdram, ctx);
        goto after_2;
    // 0x8022DACC: nop

    after_2:
    // 0x8022DAD0: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8022DAD4: lw          $v1, -0x7798($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7798);
    // 0x8022DAD8: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8022DADC: lw          $a0, 0x4C50($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4C50);
    // 0x8022DAE0: lbu         $a1, 0x0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X0);
    // 0x8022DAE4: xor         $v1, $v1, $a0
    ctx->r3 = ctx->r3 ^ ctx->r4;
    // 0x8022DAE8: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
    // 0x8022DAEC: andi        $a1, $a1, 0x1F
    ctx->r5 = ctx->r5 & 0X1F;
    // 0x8022DAF0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022DAF4: srlv        $v0, $s3, $a1
    ctx->r2 = S32(U32(ctx->r19) >> (ctx->r5 & 31));
    // 0x8022DAF8: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8022DAFC: bne         $v0, $zero, L_8022DBC4
    if (ctx->r2 != 0) {
        // 0x8022DB00: nop
    
            goto L_8022DBC4;
    }
    // 0x8022DB00: nop

    // 0x8022DB04: lbu         $v1, 0x2($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X2);
    // 0x8022DB08: sb          $s5, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r21;
    // 0x8022DB0C: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022DB10: lw          $v0, -0x22A0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X22A0);
    // 0x8022DB14: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022DB18: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022DB1C: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x8022DB20: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x8022DB24: j           L_8022DC04
    // 0x8022DB28: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
        goto L_8022DC04;
    // 0x8022DB28: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_8022DB2C:
    // 0x8022DB2C: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x8022DB30: jal         0x80053ED8
    // 0x8022DB34: nop

    func_80053ED8_2F2D8(rdram, ctx);
        goto after_3;
    // 0x8022DB34: nop

    after_3:
    // 0x8022DB38: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8022DB3C: lw          $v1, -0x781C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X781C);
    // 0x8022DB40: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8022DB44: lw          $a0, 0x4C58($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4C58);
    // 0x8022DB48: lbu         $a1, 0x0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X0);
    // 0x8022DB4C: xor         $v1, $v1, $a0
    ctx->r3 = ctx->r3 ^ ctx->r4;
    // 0x8022DB50: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
    // 0x8022DB54: andi        $a1, $a1, 0x1F
    ctx->r5 = ctx->r5 & 0X1F;
    // 0x8022DB58: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022DB5C: srlv        $v0, $s3, $a1
    ctx->r2 = S32(U32(ctx->r19) >> (ctx->r5 & 31));
    // 0x8022DB60: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8022DB64: bne         $v0, $zero, L_8022DBC4
    if (ctx->r2 != 0) {
        // 0x8022DB68: nop
    
            goto L_8022DBC4;
    }
    // 0x8022DB68: nop

    // 0x8022DB6C: lbu         $v0, 0x2($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X2);
    // 0x8022DB70: sb          $s5, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r21;
    // 0x8022DB74: lui         $v1, 0x8022
    ctx->r3 = S32(0X8022 << 16);
    // 0x8022DB78: lw          $v1, -0x26A8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X26A8);
    // 0x8022DB7C: j           L_8022DC04
    // 0x8022DB80: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
        goto L_8022DC04;
    // 0x8022DB80: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_8022DB84:
    // 0x8022DB84: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x8022DB88: jal         0x80053ED8
    // 0x8022DB8C: nop

    func_80053ED8_2F2D8(rdram, ctx);
        goto after_4;
    // 0x8022DB8C: nop

    after_4:
    // 0x8022DB90: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8022DB94: lw          $v1, -0x72C8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X72C8);
    // 0x8022DB98: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8022DB9C: lw          $a0, 0x4C5C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4C5C);
    // 0x8022DBA0: lbu         $a1, 0x0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X0);
    // 0x8022DBA4: xor         $v1, $v1, $a0
    ctx->r3 = ctx->r3 ^ ctx->r4;
    // 0x8022DBA8: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
    // 0x8022DBAC: andi        $a1, $a1, 0x1F
    ctx->r5 = ctx->r5 & 0X1F;
    // 0x8022DBB0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022DBB4: srlv        $v0, $s3, $a1
    ctx->r2 = S32(U32(ctx->r19) >> (ctx->r5 & 31));
    // 0x8022DBB8: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8022DBBC: beq         $v0, $zero, L_8022DBF0
    if (ctx->r2 == 0) {
        // 0x8022DBC0: nop
    
            goto L_8022DBF0;
    }
    // 0x8022DBC0: nop

L_8022DBC4:
    // 0x8022DBC4: lb          $v0, 0x0($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X0);
    // 0x8022DBC8: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x8022DBCC: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x8022DBD0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022DBD4: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8022DBD8: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8022DBDC: lw          $a0, 0x14($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X14);
    // 0x8022DBE0: jal         0x8006036C
    // 0x8022DBE4: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    func_8006036C_3B76C(rdram, ctx);
        goto after_5;
    // 0x8022DBE4: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    after_5:
    // 0x8022DBE8: j           L_8022DC14
    // 0x8022DBEC: nop

        goto L_8022DC14;
    // 0x8022DBEC: nop

L_8022DBF0:
    // 0x8022DBF0: lbu         $v0, 0x2($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X2);
    // 0x8022DBF4: sb          $s5, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r21;
    // 0x8022DBF8: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8022DBFC: lw          $v1, -0x2344($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X2344);
    // 0x8022DC00: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_8022DC04:
    // 0x8022DC04: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022DC08: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8022DC0C: jalr        $v0
    // 0x8022DC10: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_6;
    // 0x8022DC10: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    after_6:
L_8022DC14:
    // 0x8022DC14: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022DC18: bne         $v0, $s6, L_8022DA10
    if (ctx->r2 != ctx->r22) {
        // 0x8022DC1C: addiu       $s1, $s1, 0x2
        ctx->r17 = ADD32(ctx->r17, 0X2);
            goto L_8022DA10;
    }
    // 0x8022DC1C: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x8022DC20: sw          $s4, 0x4($s7)
    MEM_W(0X4, ctx->r23) = ctx->r20;
L_8022DC24:
    // 0x8022DC24: j           L_8022DD2C
    // 0x8022DC28: sb          $s5, 0x8($fp)
    MEM_B(0X8, ctx->r30) = ctx->r21;
        goto L_8022DD2C;
    // 0x8022DC28: sb          $s5, 0x8($fp)
    MEM_B(0X8, ctx->r30) = ctx->r21;
L_8022DC2C:
    // 0x8022DC2C: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022DC30: lbu         $v0, 0x4C61($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4C61);
    // 0x8022DC34: lui         $s1, 0x8023
    ctx->r17 = S32(0X8023 << 16);
    // 0x8022DC38: addiu       $s1, $s1, 0x4C60
    ctx->r17 = ADD32(ctx->r17, 0X4C60);
    // 0x8022DC3C: beql        $v0, $s6, L_8022DD30
    if (ctx->r2 == ctx->r22) {
        // 0x8022DC40: addiu       $s4, $s4, 0xC
        ctx->r20 = ADD32(ctx->r20, 0XC);
            goto L_8022DD30;
    }
    goto skip_2;
    // 0x8022DC40: addiu       $s4, $s4, 0xC
    ctx->r20 = ADD32(ctx->r20, 0XC);
    skip_2:
    // 0x8022DC44: addiu       $s0, $s1, 0x1
    ctx->r16 = ADD32(ctx->r17, 0X1);
L_8022DC48:
    // 0x8022DC48: jal         0x8004DA68
    // 0x8022DC4C: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    func_8004DA68_28E68(rdram, ctx);
        goto after_7;
    // 0x8022DC4C: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    after_7:
    // 0x8022DC50: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022DC54: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022DC58: beq         $v1, $v0, L_8022DCA8
    if (ctx->r3 == ctx->r2) {
        // 0x8022DC5C: sltiu       $v0, $v1, 0x41
        ctx->r2 = ctx->r3 < 0X41 ? 1 : 0;
            goto L_8022DCA8;
    }
    // 0x8022DC5C: sltiu       $v0, $v1, 0x41
    ctx->r2 = ctx->r3 < 0X41 ? 1 : 0;
    // 0x8022DC60: beq         $v0, $zero, L_8022DC78
    if (ctx->r2 == 0) {
        // 0x8022DC64: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_8022DC78;
    }
    // 0x8022DC64: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8022DC68: beq         $v1, $v0, L_8022DC94
    if (ctx->r3 == ctx->r2) {
        // 0x8022DC6C: nop
    
            goto L_8022DC94;
    }
    // 0x8022DC6C: nop

    // 0x8022DC70: j           L_8022DD20
    // 0x8022DC74: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
        goto L_8022DD20;
    // 0x8022DC74: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
L_8022DC78:
    // 0x8022DC78: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x8022DC7C: beq         $v1, $v0, L_8022DCBC
    if (ctx->r3 == ctx->r2) {
        // 0x8022DC80: addiu       $v0, $zero, 0xE0
        ctx->r2 = ADD32(0, 0XE0);
            goto L_8022DCBC;
    }
    // 0x8022DC80: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
    // 0x8022DC84: beq         $v1, $v0, L_8022DCD0
    if (ctx->r3 == ctx->r2) {
        // 0x8022DC88: nop
    
            goto L_8022DCD0;
    }
    // 0x8022DC88: nop

    // 0x8022DC8C: j           L_8022DD20
    // 0x8022DC90: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
        goto L_8022DD20;
    // 0x8022DC90: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
L_8022DC94:
    // 0x8022DC94: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8022DC98: lw          $v0, -0x714C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X714C);
    // 0x8022DC9C: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8022DCA0: j           L_8022DCE0
    // 0x8022DCA4: lw          $v1, 0x4C54($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4C54);
        goto L_8022DCE0;
    // 0x8022DCA4: lw          $v1, 0x4C54($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4C54);
L_8022DCA8:
    // 0x8022DCA8: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8022DCAC: lw          $v0, -0x7798($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7798);
    // 0x8022DCB0: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8022DCB4: j           L_8022DCE0
    // 0x8022DCB8: lw          $v1, 0x4C50($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4C50);
        goto L_8022DCE0;
    // 0x8022DCB8: lw          $v1, 0x4C50($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4C50);
L_8022DCBC:
    // 0x8022DCBC: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8022DCC0: lw          $v0, -0x781C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X781C);
    // 0x8022DCC4: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8022DCC8: j           L_8022DCE0
    // 0x8022DCCC: lw          $v1, 0x4C58($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4C58);
        goto L_8022DCE0;
    // 0x8022DCCC: lw          $v1, 0x4C58($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4C58);
L_8022DCD0:
    // 0x8022DCD0: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8022DCD4: lw          $v0, -0x72C8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X72C8);
    // 0x8022DCD8: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8022DCDC: lw          $v1, 0x4C5C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4C5C);
L_8022DCE0:
    // 0x8022DCE0: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x8022DCE4: xor         $v0, $v0, $v1
    ctx->r2 = ctx->r2 ^ ctx->r3;
    // 0x8022DCE8: and         $v1, $v0, $v1
    ctx->r3 = ctx->r2 & ctx->r3;
    // 0x8022DCEC: andi        $a1, $a0, 0x1F
    ctx->r5 = ctx->r4 & 0X1F;
    // 0x8022DCF0: srlv        $v0, $s3, $a1
    ctx->r2 = S32(U32(ctx->r19) >> (ctx->r5 & 31));
    // 0x8022DCF4: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8022DCF8: beq         $v0, $zero, L_8022DD20
    if (ctx->r2 == 0) {
        // 0x8022DCFC: addiu       $s0, $s0, 0x2
        ctx->r16 = ADD32(ctx->r16, 0X2);
            goto L_8022DD20;
    }
    // 0x8022DCFC: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x8022DD00: lb          $v0, 0x0($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X0);
    // 0x8022DD04: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x8022DD08: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x8022DD0C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022DD10: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8022DD14: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8022DD18: jal         0x8006036C
    // 0x8022DD1C: lw          $a0, 0x14($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X14);
    func_8006036C_3B76C(rdram, ctx);
        goto after_8;
    // 0x8022DD1C: lw          $a0, 0x14($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X14);
    after_8:
L_8022DD20:
    // 0x8022DD20: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022DD24: bne         $v0, $s6, L_8022DC48
    if (ctx->r2 != ctx->r22) {
        // 0x8022DD28: addiu       $s1, $s1, 0x2
        ctx->r17 = ADD32(ctx->r17, 0X2);
            goto L_8022DC48;
    }
    // 0x8022DD28: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
L_8022DD2C:
    // 0x8022DD2C: addiu       $s4, $s4, 0xC
    ctx->r20 = ADD32(ctx->r20, 0XC);
L_8022DD30:
    // 0x8022DD30: lh          $v1, 0x0($s4)
    ctx->r3 = MEM_H(ctx->r20, 0X0);
    // 0x8022DD34: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022DD38: bne         $v1, $v0, L_8022D984
    if (ctx->r3 != ctx->r2) {
        // 0x8022DD3C: addiu       $s2, $s2, 0xC
        ctx->r18 = ADD32(ctx->r18, 0XC);
            goto L_8022D984;
    }
    // 0x8022DD3C: addiu       $s2, $s2, 0xC
    ctx->r18 = ADD32(ctx->r18, 0XC);
L_8022DD40:
    // 0x8022DD40: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8022DD44: lw          $v0, -0x714C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X714C);
    // 0x8022DD48: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8022DD4C: lw          $v1, -0x7798($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7798);
    // 0x8022DD50: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x8022DD54: lw          $a0, -0x781C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X781C);
    // 0x8022DD58: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x8022DD5C: lw          $a1, -0x72C8($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X72C8);
    // 0x8022DD60: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022DD64: sw          $v0, 0x4C54($at)
    MEM_W(0X4C54, ctx->r1) = ctx->r2;
    // 0x8022DD68: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022DD6C: sw          $v1, 0x4C50($at)
    MEM_W(0X4C50, ctx->r1) = ctx->r3;
    // 0x8022DD70: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022DD74: sw          $a0, 0x4C58($at)
    MEM_W(0X4C58, ctx->r1) = ctx->r4;
    // 0x8022DD78: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022DD7C: sw          $a1, 0x4C5C($at)
    MEM_W(0X4C5C, ctx->r1) = ctx->r5;
    // 0x8022DD80: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8022DD84: lw          $fp, 0x30($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X30);
    // 0x8022DD88: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x8022DD8C: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x8022DD90: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x8022DD94: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8022DD98: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022DD9C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022DDA0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022DDA4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022DDA8: jr          $ra
    // 0x8022DDAC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022DDAC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8022538C_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022538C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80225390: lb          $v1, -0x3BC6($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC6);
    // 0x80225394: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80225398: lb          $v0, -0x3BC7($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC7);
    // 0x8022539C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802253A0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802253A4: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x802253A8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802253AC: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x802253B0: lw          $v1, 0x3CA4($at)
    ctx->r3 = MEM_W(ctx->r1, 0X3CA4);
    // 0x802253B4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802253B8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802253BC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x802253C0: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x802253C4: jalr        $v0
    // 0x802253C8: addiu       $a0, $a0, -0x35A0
    ctx->r4 = ADD32(ctx->r4, -0X35A0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802253C8: addiu       $a0, $a0, -0x35A0
    ctx->r4 = ADD32(ctx->r4, -0X35A0);
    after_0:
    // 0x802253CC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802253D0: jr          $ra
    // 0x802253D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802253D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80230BB8_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230BB8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80230BBC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80230BC0: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x80230BC4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80230BC8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80230BCC: lb          $v1, 0x0($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X0);
    // 0x80230BD0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80230BD4: beq         $v1, $v0, L_80230D24
    if (ctx->r3 == ctx->r2) {
        // 0x80230BD8: addiu       $s0, $a1, 0x10
        ctx->r16 = ADD32(ctx->r5, 0X10);
            goto L_80230D24;
    }
    // 0x80230BD8: addiu       $s0, $a1, 0x10
    ctx->r16 = ADD32(ctx->r5, 0X10);
L_80230BDC:
    // 0x80230BDC: lbu         $v1, -0xF($s0)
    ctx->r3 = MEM_BU(ctx->r16, -0XF);
    // 0x80230BE0: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80230BE4: bne         $v1, $v0, L_80230C94
    if (ctx->r3 != ctx->r2) {
        // 0x80230BE8: addiu       $v0, $zero, 0xE0
        ctx->r2 = ADD32(0, 0XE0);
            goto L_80230C94;
    }
    // 0x80230BE8: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
    // 0x80230BEC: jal         0x8004EEAC
    // 0x80230BF0: nop

    func_8004EEAC_2A2AC(rdram, ctx);
        goto after_0;
    // 0x80230BF0: nop

    after_0:
    // 0x80230BF4: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x80230BF8: beql        $a1, $zero, L_80230D14
    if (ctx->r5 == 0) {
        // 0x80230BFC: addiu       $s1, $s1, 0x14
        ctx->r17 = ADD32(ctx->r17, 0X14);
            goto L_80230D14;
    }
    goto skip_0;
    // 0x80230BFC: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
    skip_0:
    // 0x80230C00: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80230C04: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x80230C08: lbu         $v0, -0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0XE);
    // 0x80230C0C: sb          $v0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r2;
    // 0x80230C10: lbu         $v0, -0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0XD);
    // 0x80230C14: sb          $v0, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r2;
    // 0x80230C18: lbu         $v0, -0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0XC);
    // 0x80230C1C: sb          $v0, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r2;
    // 0x80230C20: lbu         $v0, -0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0XB);
    // 0x80230C24: sb          $v0, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r2;
    // 0x80230C28: lbu         $v0, -0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0X9);
    // 0x80230C2C: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80230C30: sh          $v0, 0x56($a1)
    MEM_H(0X56, ctx->r5) = ctx->r2;
    // 0x80230C34: lbu         $v0, -0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0X8);
    // 0x80230C38: sb          $v0, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r2;
    // 0x80230C3C: lbu         $v0, -0x7($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0X7);
    // 0x80230C40: sb          $v0, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r2;
    // 0x80230C44: lbu         $v0, -0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0X6);
    // 0x80230C48: sb          $v0, 0xE($a1)
    MEM_B(0XE, ctx->r5) = ctx->r2;
    // 0x80230C4C: lbu         $v0, -0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0X5);
    // 0x80230C50: sb          $v0, 0xF($a1)
    MEM_B(0XF, ctx->r5) = ctx->r2;
    // 0x80230C54: lhu         $v0, -0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, -0X4);
    // 0x80230C58: sh          $v0, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r2;
    // 0x80230C5C: lhu         $v0, -0x2($s0)
    ctx->r2 = MEM_HU(ctx->r16, -0X2);
    // 0x80230C60: sh          $v0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r2;
    // 0x80230C64: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x80230C68: lh          $v1, 0x16($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X16);
    // 0x80230C6C: sh          $v0, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r2;
    // 0x80230C70: lh          $v0, 0x14($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X14);
    // 0x80230C74: lh          $a0, 0x18($a1)
    ctx->r4 = MEM_H(ctx->r5, 0X18);
    // 0x80230C78: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80230C7C: sw          $v1, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->r3;
    // 0x80230C80: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80230C84: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80230C88: sw          $v0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->r2;
    // 0x80230C8C: j           L_80230D10
    // 0x80230C90: sw          $a0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->r4;
        goto L_80230D10;
    // 0x80230C90: sw          $a0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->r4;
L_80230C94:
    // 0x80230C94: bnel        $v1, $v0, L_80230D14
    if (ctx->r3 != ctx->r2) {
        // 0x80230C98: addiu       $s1, $s1, 0x14
        ctx->r17 = ADD32(ctx->r17, 0X14);
            goto L_80230D14;
    }
    goto skip_1;
    // 0x80230C98: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
    skip_1:
    // 0x80230C9C: jal         0x8004F2C4
    // 0x80230CA0: nop

    func_8004F2C4_2A6C4(rdram, ctx);
        goto after_1;
    // 0x80230CA0: nop

    after_1:
    // 0x80230CA4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80230CA8: beql        $v1, $zero, L_80230D14
    if (ctx->r3 == 0) {
        // 0x80230CAC: addiu       $s1, $s1, 0x14
        ctx->r17 = ADD32(ctx->r17, 0X14);
            goto L_80230D14;
    }
    goto skip_2;
    // 0x80230CAC: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
    skip_2:
    // 0x80230CB0: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80230CB4: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80230CB8: lbu         $v0, -0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0XE);
    // 0x80230CBC: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x80230CC0: lbu         $v0, -0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0XD);
    // 0x80230CC4: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    // 0x80230CC8: lbu         $v0, -0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0XC);
    // 0x80230CCC: sb          $v0, 0x4($v1)
    MEM_B(0X4, ctx->r3) = ctx->r2;
    // 0x80230CD0: lbu         $v0, -0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0XB);
    // 0x80230CD4: sb          $v0, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r2;
    // 0x80230CD8: lbu         $v0, -0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0X8);
    // 0x80230CDC: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
    // 0x80230CE0: lbu         $v0, -0x7($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0X7);
    // 0x80230CE4: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
    // 0x80230CE8: lbu         $v0, -0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0X6);
    // 0x80230CEC: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
    // 0x80230CF0: lbu         $v0, -0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0X5);
    // 0x80230CF4: sb          $v0, 0xF($v1)
    MEM_B(0XF, ctx->r3) = ctx->r2;
    // 0x80230CF8: lhu         $v0, -0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, -0X4);
    // 0x80230CFC: sh          $v0, 0x38($v1)
    MEM_H(0X38, ctx->r3) = ctx->r2;
    // 0x80230D00: lhu         $v0, -0x2($s0)
    ctx->r2 = MEM_HU(ctx->r16, -0X2);
    // 0x80230D04: sh          $v0, 0x3A($v1)
    MEM_H(0X3A, ctx->r3) = ctx->r2;
    // 0x80230D08: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x80230D0C: sh          $v0, 0x3C($v1)
    MEM_H(0X3C, ctx->r3) = ctx->r2;
L_80230D10:
    // 0x80230D10: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
L_80230D14:
    // 0x80230D14: lb          $v1, 0x0($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X0);
    // 0x80230D18: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80230D1C: bne         $v1, $v0, L_80230BDC
    if (ctx->r3 != ctx->r2) {
        // 0x80230D20: addiu       $s0, $s0, 0x14
        ctx->r16 = ADD32(ctx->r16, 0X14);
            goto L_80230BDC;
    }
    // 0x80230D20: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
L_80230D24:
    // 0x80230D24: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80230D28: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80230D2C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80230D30: jr          $ra
    // 0x80230D34: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80230D34: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80230D38: nop

    // 0x80230D3C: nop

;}
RECOMP_FUNC void func_8022886C_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022886C: lb          $v0, 0x385($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X385);
    // 0x80228870: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80228874: beq         $v0, $zero, L_80228888
    if (ctx->r2 == 0) {
        // 0x80228878: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80228888;
    }
    // 0x80228878: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022887C: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80228880: j           L_80228894
    // 0x80228884: sb          $v0, 0x385($a0)
    MEM_B(0X385, ctx->r4) = ctx->r2;
        goto L_80228894;
    // 0x80228884: sb          $v0, 0x385($a0)
    MEM_B(0X385, ctx->r4) = ctx->r2;
L_80228888:
    // 0x80228888: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x8022888C: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    // 0x80228890: sh          $v0, 0x44($a0)
    MEM_H(0X44, ctx->r4) = ctx->r2;
L_80228894:
    // 0x80228894: jr          $ra
    // 0x80228898: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x80228898: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8022CC24_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CC24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022CC28: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022CC2C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022CC30: addiu       $a0, $s0, 0xAC
    ctx->r4 = ADD32(ctx->r16, 0XAC);
    // 0x8022CC34: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022CC38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022CC3C: jal         0x8009A3B4
    // 0x8022CC40: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022CC40: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022CC44: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022CC48: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CC4C: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    // 0x8022CC50: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8022CC54: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8022CC58: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x8022CC5C: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
    // 0x8022CC60: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x8022CC64: sw          $zero, 0x70($s0)
    MEM_W(0X70, ctx->r16) = 0;
    // 0x8022CC68: sw          $zero, 0x74($s0)
    MEM_W(0X74, ctx->r16) = 0;
    // 0x8022CC6C: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x8022CC70: jal         0x8004D5D4
    // 0x8022CC74: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_1;
    // 0x8022CC74: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022CC78: lui         $v1, 0x2C80
    ctx->r3 = S32(0X2C80 << 16);
    // 0x8022CC7C: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x8022CC80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CC84: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022CC88: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x8022CC8C: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x8022CC90: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x8022CC94: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022CC98: sw          $v1, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r3;
    // 0x8022CC9C: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x8022CCA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022CCA4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022CCA8: jr          $ra
    // 0x8022CCAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022CCAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022F298_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F298: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F29C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022F2A0: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x8022F2A4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022F2A8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022F2AC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022F2B0: lw          $v0, 0x4484($at)
    ctx->r2 = MEM_W(ctx->r1, 0X4484);
    // 0x8022F2B4: jalr        $v0
    // 0x8022F2B8: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022F2B8: nop

    after_0:
    // 0x8022F2BC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022F2C0: jr          $ra
    // 0x8022F2C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F2C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022D490_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D490: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D494: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022D498: jal         0x8004F4F8
    // 0x8022D49C: nop

    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_0;
    // 0x8022D49C: nop

    after_0:
    // 0x8022D4A0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022D4A4: jr          $ra
    // 0x8022D4A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022D4A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022D4AC: nop

;}
RECOMP_FUNC void func_80225554_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225554: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225558: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022555C: jal         0x8006033C
    // 0x80225560: addiu       $a0, $zero, 0x7B0
    ctx->r4 = ADD32(0, 0X7B0);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80225560: addiu       $a0, $zero, 0x7B0
    ctx->r4 = ADD32(0, 0X7B0);
    after_0:
    // 0x80225564: beq         $v0, $zero, L_80225574
    if (ctx->r2 == 0) {
        // 0x80225568: nop
    
            goto L_80225574;
    }
    // 0x80225568: nop

    // 0x8022556C: jal         0x80060690
    // 0x80225570: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80060690_3BA90(rdram, ctx);
        goto after_1;
    // 0x80225570: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_1:
L_80225574:
    // 0x80225574: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80225578: jr          $ra
    // 0x8022557C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022557C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022C730_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C730: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8022C734: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x8022C738: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x8022C73C: sw          $ra, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r31;
    // 0x8022C740: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x8022C744: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x8022C748: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x8022C74C: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x8022C750: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x8022C754: lw          $v1, 0xD8($s4)
    ctx->r3 = MEM_W(ctx->r20, 0XD8);
    // 0x8022C758: lui         $v0, 0x2000
    ctx->r2 = S32(0X2000 << 16);
    // 0x8022C75C: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8022C760: bne         $v0, $zero, L_8022C848
    if (ctx->r2 != 0) {
        // 0x8022C764: addiu       $s5, $s4, 0xD0
        ctx->r21 = ADD32(ctx->r20, 0XD0);
            goto L_8022C848;
    }
    // 0x8022C764: addiu       $s5, $s4, 0xD0
    ctx->r21 = ADD32(ctx->r20, 0XD0);
    // 0x8022C768: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x8022C76C: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8022C770: and         $s1, $v1, $v0
    ctx->r17 = ctx->r3 & ctx->r2;
    // 0x8022C774: beq         $s1, $zero, L_8022C86C
    if (ctx->r17 == 0) {
        // 0x8022C778: addiu       $a0, $zero, 0xA0
        ctx->r4 = ADD32(0, 0XA0);
            goto L_8022C86C;
    }
    // 0x8022C778: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x8022C77C: addiu       $s0, $s4, 0x14
    ctx->r16 = ADD32(ctx->r20, 0X14);
    // 0x8022C780: jal         0x8002A33C
    // 0x8022C784: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x8022C784: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8022C788: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C78C: lh          $a2, 0x56($s4)
    ctx->r6 = MEM_H(ctx->r20, 0X56);
    // 0x8022C790: addiu       $a1, $s4, 0xE0
    ctx->r5 = ADD32(ctx->r20, 0XE0);
    // 0x8022C794: jal         0x8004FEA0
    // 0x8022C798: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004FEA0_2B2A0(rdram, ctx);
        goto after_1;
    // 0x8022C798: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x8022C79C: srl         $v0, $v0, 16
    ctx->r2 = S32(U32(ctx->r2) >> 16);
    // 0x8022C7A0: bne         $v0, $zero, L_8022C86C
    if (ctx->r2 != 0) {
        // 0x8022C7A4: nop
    
            goto L_8022C86C;
    }
    // 0x8022C7A4: nop

    // 0x8022C7A8: lhu         $v0, 0x6E($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X6E);
    // 0x8022C7AC: subu        $v0, $v0, $s1
    ctx->r2 = SUB32(ctx->r2, ctx->r17);
    // 0x8022C7B0: sh          $v0, 0x6E($s4)
    MEM_H(0X6E, ctx->r20) = ctx->r2;
    // 0x8022C7B4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C7B8: bgtz        $v0, L_8022C7D0
    if (SIGNED(ctx->r2) > 0) {
        // 0x8022C7BC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022C7D0;
    }
    // 0x8022C7BC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022C7C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C7C4: sb          $v0, 0x9($s4)
    MEM_B(0X9, ctx->r20) = ctx->r2;
    // 0x8022C7C8: j           L_8022C86C
    // 0x8022C7CC: sh          $zero, 0x4C($s4)
    MEM_H(0X4C, ctx->r20) = 0;
        goto L_8022C86C;
    // 0x8022C7CC: sh          $zero, 0x4C($s4)
    MEM_H(0X4C, ctx->r20) = 0;
L_8022C7D0:
    // 0x8022C7D0: lbu         $v1, 0x9($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X9);
    // 0x8022C7D4: bne         $v1, $v0, L_8022C828
    if (ctx->r3 != ctx->r2) {
        // 0x8022C7D8: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_8022C828;
    }
    // 0x8022C7D8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022C7DC: lh          $v0, 0x54($s4)
    ctx->r2 = MEM_H(ctx->r20, 0X54);
    // 0x8022C7E0: lh          $v1, 0x5C($s4)
    ctx->r3 = MEM_H(ctx->r20, 0X5C);
    // 0x8022C7E4: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022C7E8: beq         $v0, $zero, L_8022C814
    if (ctx->r2 == 0) {
        // 0x8022C7EC: slti        $v0, $v1, 0x1000
        ctx->r2 = SIGNED(ctx->r3) < 0X1000 ? 1 : 0;
            goto L_8022C814;
    }
    // 0x8022C7EC: slti        $v0, $v1, 0x1000
    ctx->r2 = SIGNED(ctx->r3) < 0X1000 ? 1 : 0;
    // 0x8022C7F0: bne         $v0, $zero, L_8022C818
    if (ctx->r2 != 0) {
        // 0x8022C7F4: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_8022C818;
    }
    // 0x8022C7F4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022C7F8: lhu         $v1, 0x4C($s4)
    ctx->r3 = MEM_HU(ctx->r20, 0X4C);
    // 0x8022C7FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C800: sh          $zero, 0xF8($s4)
    MEM_H(0XF8, ctx->r20) = 0;
    // 0x8022C804: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
    // 0x8022C808: addiu       $v1, $v1, 0x5
    ctx->r3 = ADD32(ctx->r3, 0X5);
    // 0x8022C80C: j           L_8022C840
    // 0x8022C810: sh          $v1, 0x4C($s4)
    MEM_H(0X4C, ctx->r20) = ctx->r3;
        goto L_8022C840;
    // 0x8022C810: sh          $v1, 0x4C($s4)
    MEM_H(0X4C, ctx->r20) = ctx->r3;
L_8022C814:
    // 0x8022C814: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_8022C818:
    // 0x8022C818: sb          $zero, 0x2E($s5)
    MEM_B(0X2E, ctx->r21) = 0;
    // 0x8022C81C: sh          $v0, 0x4C($s4)
    MEM_H(0X4C, ctx->r20) = ctx->r2;
    // 0x8022C820: j           L_8022C834
    // 0x8022C824: sh          $zero, 0x28($s5)
    MEM_H(0X28, ctx->r21) = 0;
        goto L_8022C834;
    // 0x8022C824: sh          $zero, 0x28($s5)
    MEM_H(0X28, ctx->r21) = 0;
L_8022C828:
    // 0x8022C828: sb          $zero, 0xFE($s4)
    MEM_B(0XFE, ctx->r20) = 0;
    // 0x8022C82C: sh          $v0, 0x4C($s4)
    MEM_H(0X4C, ctx->r20) = ctx->r2;
    // 0x8022C830: sh          $zero, 0xF8($s4)
    MEM_H(0XF8, ctx->r20) = 0;
L_8022C834:
    // 0x8022C834: sh          $zero, 0x54($s4)
    MEM_H(0X54, ctx->r20) = 0;
    // 0x8022C838: sh          $zero, 0x5C($s4)
    MEM_H(0X5C, ctx->r20) = 0;
    // 0x8022C83C: sb          $zero, 0xA($s4)
    MEM_B(0XA, ctx->r20) = 0;
L_8022C840:
    // 0x8022C840: j           L_8022C868
    // 0x8022C844: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_8022C868;
    // 0x8022C844: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8022C848:
    // 0x8022C848: addiu       $a0, $s4, 0x14
    ctx->r4 = ADD32(ctx->r20, 0X14);
    // 0x8022C84C: lh          $a2, 0x56($s4)
    ctx->r6 = MEM_H(ctx->r20, 0X56);
    // 0x8022C850: addiu       $a1, $s4, 0xE0
    ctx->r5 = ADD32(ctx->r20, 0XE0);
    // 0x8022C854: jal         0x8004FEA0
    // 0x8022C858: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004FEA0_2B2A0(rdram, ctx);
        goto after_2;
    // 0x8022C858: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x8022C85C: srl         $v0, $v0, 16
    ctx->r2 = S32(U32(ctx->r2) >> 16);
    // 0x8022C860: bne         $v0, $zero, L_8022C86C
    if (ctx->r2 != 0) {
        // 0x8022C864: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022C86C;
    }
    // 0x8022C864: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022C868:
    // 0x8022C868: sb          $v0, 0x9($s4)
    MEM_B(0X9, ctx->r20) = ctx->r2;
L_8022C86C:
    // 0x8022C86C: lbu         $v0, 0x9($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X9);
    // 0x8022C870: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022C874: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022C878: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022C87C: lw          $v0, 0x42F0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X42F0);
    // 0x8022C880: jalr        $v0
    // 0x8022C884: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x8022C884: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_3:
    // 0x8022C888: addiu       $a0, $s4, 0x54
    ctx->r4 = ADD32(ctx->r20, 0X54);
    // 0x8022C88C: addiu       $s0, $s4, 0x8C
    ctx->r16 = ADD32(ctx->r20, 0X8C);
    // 0x8022C890: jal         0x80031600
    // 0x8022C894: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80031600_CA00(rdram, ctx);
        goto after_4;
    // 0x8022C894: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8022C898: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C89C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x8022C8A0: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x8022C8A4: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x8022C8A8: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x8022C8AC: jal         0x80031DA8
    // 0x8022C8B0: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_5;
    // 0x8022C8B0: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    after_5:
    // 0x8022C8B4: addiu       $a0, $s4, 0xAC
    ctx->r4 = ADD32(ctx->r20, 0XAC);
    // 0x8022C8B8: addiu       $a1, $s4, 0x14
    ctx->r5 = ADD32(ctx->r20, 0X14);
    // 0x8022C8BC: jal         0x8009A3B4
    // 0x8022C8C0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x8022C8C0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x8022C8C4: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x8022C8C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022C8CC: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x8022C8D0: jal         0x80047284
    // 0x8022C8D4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_7;
    // 0x8022C8D4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_7:
    // 0x8022C8D8: lbu         $v0, 0x2F($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0X2F);
    // 0x8022C8DC: beq         $v0, $zero, L_8022C980
    if (ctx->r2 == 0) {
        // 0x8022C8E0: addu        $a0, $s5, $zero
        ctx->r4 = ADD32(ctx->r21, 0);
            goto L_8022C980;
    }
    // 0x8022C8E0: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x8022C8E4: lhu         $v0, 0x14($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X14);
    // 0x8022C8E8: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
    // 0x8022C8EC: sh          $v0, 0x0($s5)
    MEM_H(0X0, ctx->r21) = ctx->r2;
    // 0x8022C8F0: lhu         $v0, 0x16($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X16);
    // 0x8022C8F4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022C8F8: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8022C8FC: addiu       $v0, $v0, -0x78
    ctx->r2 = ADD32(ctx->r2, -0X78);
    // 0x8022C900: sh          $v0, 0x2($s5)
    MEM_H(0X2, ctx->r21) = ctx->r2;
    // 0x8022C904: lhu         $v0, 0x18($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X18);
    // 0x8022C908: addiu       $s3, $s5, 0x8
    ctx->r19 = ADD32(ctx->r21, 0X8);
    // 0x8022C90C: lui         $s2, 0x408
    ctx->r18 = S32(0X408 << 16);
    // 0x8022C910: sh          $v0, 0x4($s5)
    MEM_H(0X4, ctx->r21) = ctx->r2;
    // 0x8022C914: lbu         $v0, 0x1($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X1);
    // 0x8022C918: lui         $s1, 0x80
    ctx->r17 = S32(0X80 << 16);
    // 0x8022C91C: addiu       $s0, $zero, 0x80
    ctx->r16 = ADD32(0, 0X80);
    // 0x8022C920: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    // 0x8022C924: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022C928: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022C92C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022C930: jal         0x80051E18
    // 0x8022C934: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_80051E18_2D218(rdram, ctx);
        goto after_8;
    // 0x8022C934: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_8:
    // 0x8022C938: lhu         $v0, 0x14($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X14);
    // 0x8022C93C: sh          $v0, 0x0($s5)
    MEM_H(0X0, ctx->r21) = ctx->r2;
    // 0x8022C940: lhu         $v0, 0x16($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X16);
    // 0x8022C944: addiu       $v0, $v0, -0x168
    ctx->r2 = ADD32(ctx->r2, -0X168);
    // 0x8022C948: sh          $v0, 0x2($s5)
    MEM_H(0X2, ctx->r21) = ctx->r2;
    // 0x8022C94C: lhu         $v0, 0x18($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X18);
    // 0x8022C950: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x8022C954: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
    // 0x8022C958: sh          $v0, 0x4($s5)
    MEM_H(0X4, ctx->r21) = ctx->r2;
    // 0x8022C95C: lbu         $v0, 0x1($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X1);
    // 0x8022C960: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022C964: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8022C968: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    // 0x8022C96C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022C970: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022C974: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022C978: jal         0x80051E18
    // 0x8022C97C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_80051E18_2D218(rdram, ctx);
        goto after_9;
    // 0x8022C97C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_9:
L_8022C980:
    // 0x8022C980: sw          $zero, 0x8($s5)
    MEM_W(0X8, ctx->r21) = 0;
    // 0x8022C984: lw          $ra, 0x50($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X50);
    // 0x8022C988: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x8022C98C: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x8022C990: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x8022C994: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x8022C998: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x8022C99C: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x8022C9A0: jr          $ra
    // 0x8022C9A4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x8022C9A4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_8022B58C_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B58C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022B590: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022B594: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B598: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8022B59C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022B5A0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022B5A4: lw          $v1, 0xF0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XF0);
    // 0x8022B5A8: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8022B5AC: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x8022B5B0: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x8022B5B4: beq         $v0, $zero, L_8022B5CC
    if (ctx->r2 == 0) {
        // 0x8022B5B8: addiu       $s1, $s0, 0xD0
        ctx->r17 = ADD32(ctx->r16, 0XD0);
            goto L_8022B5CC;
    }
    // 0x8022B5B8: addiu       $s1, $s0, 0xD0
    ctx->r17 = ADD32(ctx->r16, 0XD0);
    // 0x8022B5BC: jal         0x8022B184
    // 0x8022B5C0: nop

    func_8022B184_ovl16(rdram, ctx);
        goto after_0;
    // 0x8022B5C0: nop

    after_0:
    // 0x8022B5C4: j           L_8022B5E4
    // 0x8022B5C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022B5E4;
    // 0x8022B5C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022B5CC:
    // 0x8022B5CC: andi        $v0, $v1, 0x4
    ctx->r2 = ctx->r3 & 0X4;
    // 0x8022B5D0: beq         $v0, $zero, L_8022B5E4
    if (ctx->r2 == 0) {
        // 0x8022B5D4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022B5E4;
    }
    // 0x8022B5D4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022B5D8: jal         0x8022B1E0
    // 0x8022B5DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022B1E0_ovl16(rdram, ctx);
        goto after_1;
    // 0x8022B5DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022B5E0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8022B5E4:
    // 0x8022B5E4: bne         $v0, $zero, L_8022B738
    if (ctx->r2 != 0) {
        // 0x8022B5E8: nop
    
            goto L_8022B738;
    }
    // 0x8022B5E8: nop

    // 0x8022B5EC: lhu         $v0, 0x54($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X54);
    // 0x8022B5F0: lhu         $v1, 0x3E($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X3E);
    // 0x8022B5F4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022B5F8: sh          $v0, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r2;
    // 0x8022B5FC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B600: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022B604: addiu       $v1, $zero, 0x40
    ctx->r3 = ADD32(0, 0X40);
    // 0x8022B608: bne         $v0, $v1, L_8022B614
    if (ctx->r2 != ctx->r3) {
        // 0x8022B60C: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_8022B614;
    }
    // 0x8022B60C: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8022B610: sh          $v0, 0x3E($s1)
    MEM_H(0X3E, ctx->r17) = ctx->r2;
L_8022B614:
    // 0x8022B614: lh          $v1, 0x54($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X54);
    // 0x8022B618: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
    // 0x8022B61C: bne         $v1, $v0, L_8022B628
    if (ctx->r3 != ctx->r2) {
        // 0x8022B620: addiu       $v0, $zero, -0x20
        ctx->r2 = ADD32(0, -0X20);
            goto L_8022B628;
    }
    // 0x8022B620: addiu       $v0, $zero, -0x20
    ctx->r2 = ADD32(0, -0X20);
    // 0x8022B624: sh          $v0, 0x3E($s1)
    MEM_H(0X3E, ctx->r17) = ctx->r2;
L_8022B628:
    // 0x8022B628: lhu         $v0, 0x6($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X6);
    // 0x8022B62C: beq         $v0, $zero, L_8022B724
    if (ctx->r2 == 0) {
        // 0x8022B630: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_8022B724;
    }
    // 0x8022B630: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022B634: sh          $v0, 0x6($s1)
    MEM_H(0X6, ctx->r17) = ctx->r2;
    // 0x8022B638: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022B63C: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x8022B640: lh          $a3, 0x48($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X48);
    // 0x8022B644: jal         0x8004DA90
    // 0x8022B648: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x8022B648: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022B64C: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8022B650: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    // 0x8022B654: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022B658: lh          $v1, 0x56($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X56);
    // 0x8022B65C: addiu       $a3, $s2, 0x1C
    ctx->r7 = ADD32(ctx->r18, 0X1C);
    // 0x8022B660: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x8022B664: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022B668: jal         0x8004FAEC
    // 0x8022B66C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_8004FAEC_2AEEC(rdram, ctx);
        goto after_3;
    // 0x8022B66C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_3:
    // 0x8022B670: beq         $v0, $zero, L_8022B70C
    if (ctx->r2 == 0) {
        // 0x8022B674: ori         $v0, $zero, 0x9C40
        ctx->r2 = 0 | 0X9C40;
            goto L_8022B70C;
    }
    // 0x8022B674: ori         $v0, $zero, 0x9C40
    ctx->r2 = 0 | 0X9C40;
    // 0x8022B678: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x8022B67C: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8022B680: bne         $v0, $zero, L_8022B738
    if (ctx->r2 != 0) {
        // 0x8022B684: addiu       $a0, $zero, 0x15C
        ctx->r4 = ADD32(0, 0X15C);
            goto L_8022B738;
    }
    // 0x8022B684: addiu       $a0, $zero, 0x15C
    ctx->r4 = ADD32(0, 0X15C);
    // 0x8022B688: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022B68C: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
    // 0x8022B690: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022B694: addiu       $v0, $zero, -0x200
    ctx->r2 = ADD32(0, -0X200);
    // 0x8022B698: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8022B69C: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x8022B6A0: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
    // 0x8022B6A4: addiu       $v0, $zero, 0xE80
    ctx->r2 = ADD32(0, 0XE80);
    // 0x8022B6A8: jal         0x8002A33C
    // 0x8022B6AC: sh          $v0, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_4;
    // 0x8022B6AC: sh          $v0, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r2;
    after_4:
    // 0x8022B6B0: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022B6B4: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x8022B6B8: lh          $a3, 0x48($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X48);
    // 0x8022B6BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B6C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B6C4: jal         0x8004DA90
    // 0x8022B6C8: sb          $v0, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_5;
    // 0x8022B6C8: sb          $v0, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r2;
    after_5:
    // 0x8022B6CC: lhu         $v1, 0x46($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X46);
    // 0x8022B6D0: lhu         $a0, 0x4E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X4E);
    // 0x8022B6D4: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8022B6D8: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x8022B6DC: lw          $a1, -0x14F0($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X14F0);
    // 0x8022B6E0: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8022B6E4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022B6E8: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8022B6EC: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
    // 0x8022B6F0: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8022B6F4: lbu         $v1, 0xA($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0XA);
    // 0x8022B6F8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022B6FC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022B700: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022B704: j           L_8022B738
    // 0x8022B708: sh          $v1, 0x10C($s0)
    MEM_H(0X10C, ctx->r16) = ctx->r3;
        goto L_8022B738;
    // 0x8022B708: sh          $v1, 0x10C($s0)
    MEM_H(0X10C, ctx->r16) = ctx->r3;
L_8022B70C:
    // 0x8022B70C: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x8022B710: lui         $v0, 0x3
    ctx->r2 = S32(0X3 << 16);
    // 0x8022B714: ori         $v0, $v0, 0xD08F
    ctx->r2 = ctx->r2 | 0XD08F;
    // 0x8022B718: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8022B71C: beq         $v0, $zero, L_8022B738
    if (ctx->r2 == 0) {
        // 0x8022B720: nop
    
            goto L_8022B738;
    }
    // 0x8022B720: nop

L_8022B724:
    // 0x8022B724: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x8022B728: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022B72C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022B730: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022B734: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_8022B738:
    // 0x8022B738: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8022B73C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022B740: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022B744: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022B748: jr          $ra
    // 0x8022B74C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022B74C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
