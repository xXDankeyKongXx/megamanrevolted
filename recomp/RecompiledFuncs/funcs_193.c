#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8022C948_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C948: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022C94C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C950: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C954: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022C958: jal         0x8005131C
    // 0x8022C95C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    func_8005131C_2C71C(rdram, ctx);
        goto after_0;
    // 0x8022C95C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x8022C960: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022C964: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C968: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022C96C: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8022C970: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8022C974: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022C978: jal         0x8004D5D4
    // 0x8022C97C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_1;
    // 0x8022C97C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022C980: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x8022C984: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x8022C988: sw          $zero, 0x70($s0)
    MEM_W(0X70, ctx->r16) = 0;
    // 0x8022C98C: sw          $zero, 0x74($s0)
    MEM_W(0X74, ctx->r16) = 0;
    // 0x8022C990: sb          $zero, 0x386($s0)
    MEM_B(0X386, ctx->r16) = 0;
    // 0x8022C994: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x8022C998: lw          $a0, 0x298($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X298);
    // 0x8022C99C: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x8022C9A0: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022C9A4: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022C9A8: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022C9AC: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022C9B0: addiu       $v0, $v0, -0x7C00
    ctx->r2 = ADD32(ctx->r2, -0X7C00);
    // 0x8022C9B4: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x8022C9B8: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022C9BC: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8022C9C0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8022C9C4: lbu         $v0, 0xA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XA);
    // 0x8022C9C8: sb          $v0, 0x73($s0)
    MEM_B(0X73, ctx->r16) = ctx->r2;
    // 0x8022C9CC: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8022C9D0: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8022C9D4: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x8022C9D8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022C9DC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022C9E0: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8022C9E4: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x8022C9E8: addiu       $a2, $zero, -0x60
    ctx->r6 = ADD32(0, -0X60);
    // 0x8022C9EC: lbu         $v1, 0xB($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0XB);
    // 0x8022C9F0: addiu       $a0, $s0, 0x368
    ctx->r4 = ADD32(ctx->r16, 0X368);
    // 0x8022C9F4: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x8022C9F8: sb          $zero, 0x1DC($s0)
    MEM_B(0X1DC, ctx->r16) = 0;
    // 0x8022C9FC: sh          $zero, 0x1D8($s0)
    MEM_H(0X1D8, ctx->r16) = 0;
    // 0x8022CA00: sb          $v0, 0x1DD($s0)
    MEM_B(0X1DD, ctx->r16) = ctx->r2;
    // 0x8022CA04: sb          $zero, 0x67($s0)
    MEM_B(0X67, ctx->r16) = 0;
    // 0x8022CA08: sb          $zero, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = 0;
    // 0x8022CA0C: jal         0x800540BC
    // 0x8022CA10: sh          $v1, 0xC8($s0)
    MEM_H(0XC8, ctx->r16) = ctx->r3;
    func_800540BC_2F4BC(rdram, ctx);
        goto after_2;
    // 0x8022CA10: sh          $v1, 0xC8($s0)
    MEM_H(0XC8, ctx->r16) = ctx->r3;
    after_2:
    // 0x8022CA14: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8022CA18: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8022CA1C: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x8022CA20: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022CA24: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022CA28: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8022CA2C: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022CA30: lbu         $v0, 0x8($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X8);
    // 0x8022CA34: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8022CA38: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022CA3C: sb          $a0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r4;
    // 0x8022CA40: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022CA44: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    // 0x8022CA48: sh          $v0, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r2;
    // 0x8022CA4C: bne         $v1, $zero, L_8022CA74
    if (ctx->r3 != 0) {
        // 0x8022CA50: sh          $v0, 0xB2($s0)
        MEM_H(0XB2, ctx->r16) = ctx->r2;
            goto L_8022CA74;
    }
    // 0x8022CA50: sh          $v0, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r2;
    // 0x8022CA54: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x8022CA58: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022CA5C: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x8022CA60: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022CA64: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022CA68: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    // 0x8022CA6C: j           L_8022CA8C
    // 0x8022CA70: sb          $a0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r4;
        goto L_8022CA8C;
    // 0x8022CA70: sb          $a0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r4;
L_8022CA74:
    // 0x8022CA74: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022CA78: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022CA7C: addiu       $v0, $zero, 0x1E0
    ctx->r2 = ADD32(0, 0X1E0);
    // 0x8022CA80: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022CA84: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x8022CA88: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
L_8022CA8C:
    // 0x8022CA8C: sb          $v0, 0x385($s0)
    MEM_B(0X385, ctx->r16) = ctx->r2;
    // 0x8022CA90: sb          $zero, 0x384($s0)
    MEM_B(0X384, ctx->r16) = 0;
    // 0x8022CA94: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CA98: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022CA9C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022CAA0: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022CAA4: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022CAA8: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x8022CAAC: jal         0x80050294
    // 0x8022CAB0: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x8022CAB0: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
    after_3:
    // 0x8022CAB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CAB8: jal         0x8022CAD4
    // 0x8022CABC: sw          $zero, 0x8($s1)
    MEM_W(0X8, ctx->r17) = 0;
    func_8022CAD4_ovl31(rdram, ctx);
        goto after_4;
    // 0x8022CABC: sw          $zero, 0x8($s1)
    MEM_W(0X8, ctx->r17) = 0;
    after_4:
    // 0x8022CAC0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022CAC4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022CAC8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022CACC: jr          $ra
    // 0x8022CAD0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022CAD0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802366F8_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802366F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802366FC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80236700: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80236704: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80236708: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8023670C: bne         $v0, $zero, L_80236750
    if (ctx->r2 != 0) {
        // 0x80236710: nop
    
            goto L_80236750;
    }
    // 0x80236710: nop

    // 0x80236714: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80236718: lb          $v0, -0x3BC7($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC7);
    // 0x8023671C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80236720: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80236724: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80236728: jal         0x8006033C
    // 0x8023672C: lw          $a0, -0x729C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X729C);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8023672C: lw          $a0, -0x729C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X729C);
    after_0:
    // 0x80236730: beq         $v0, $zero, L_80236764
    if (ctx->r2 == 0) {
        // 0x80236734: nop
    
            goto L_80236764;
    }
    // 0x80236734: nop

    // 0x80236738: jal         0x80036B58
    // 0x8023673C: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_80036B58_11F58(rdram, ctx);
        goto after_1;
    // 0x8023673C: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_1:
    // 0x80236740: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80236744: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80236748: j           L_80236764
    // 0x8023674C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80236764;
    // 0x8023674C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80236750:
    // 0x80236750: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80236754: lbu         $v0, -0x7388($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7388);
    // 0x80236758: bne         $v0, $zero, L_80236764
    if (ctx->r2 != 0) {
        // 0x8023675C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80236764;
    }
    // 0x8023675C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80236760: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80236764:
    // 0x80236764: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80236768: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023676C: jr          $ra
    // 0x80236770: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80236770: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80236774: nop

    // 0x80236778: nop

    // 0x8023677C: nop

;}
RECOMP_FUNC void func_8022B850_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B850: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022B854: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022B858: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B85C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022B860: jal         0x8004EFE4
    // 0x8022B864: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_0;
    // 0x8022B864: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    after_0:
    // 0x8022B868: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022B86C: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x8022B870: beq         $v1, $zero, L_8022B95C
    if (ctx->r3 == 0) {
        // 0x8022B874: sw          $v1, 0x374($s0)
        MEM_W(0X374, ctx->r16) = ctx->r3;
            goto L_8022B95C;
    }
    // 0x8022B874: sw          $v1, 0x374($s0)
    MEM_W(0X374, ctx->r16) = ctx->r3;
    // 0x8022B878: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B87C: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8022B880: lh          $v0, 0x32E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X32E);
    // 0x8022B884: bne         $v0, $zero, L_8022B8E0
    if (ctx->r2 != 0) {
        // 0x8022B888: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_8022B8E0;
    }
    // 0x8022B888: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8022B88C: lw          $v1, 0x374($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X374);
    // 0x8022B890: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022B894: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8022B898: lw          $v0, 0x374($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X374);
    // 0x8022B89C: sb          $zero, 0x3($v0)
    MEM_B(0X3, ctx->r2) = 0;
    // 0x8022B8A0: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x8022B8A4: lw          $a0, 0x374($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X374);
    // 0x8022B8A8: lui         $v1, 0xFFC4
    ctx->r3 = S32(0XFFC4 << 16);
    // 0x8022B8AC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022B8B0: sw          $v0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r2;
    // 0x8022B8B4: lw          $v1, 0x374($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X374);
    // 0x8022B8B8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022B8BC: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8022B8C0: sw          $v0, 0x9C($v1)
    MEM_W(0X9C, ctx->r3) = ctx->r2;
    // 0x8022B8C4: lw          $v1, 0x374($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X374);
    // 0x8022B8C8: addiu       $a0, $zero, 0xB2
    ctx->r4 = ADD32(0, 0XB2);
    // 0x8022B8CC: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022B8D0: jal         0x8002A33C
    // 0x8022B8D4: sw          $v0, 0xA0($v1)
    MEM_W(0XA0, ctx->r3) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x8022B8D4: sw          $v0, 0xA0($v1)
    MEM_W(0XA0, ctx->r3) = ctx->r2;
    after_1:
    // 0x8022B8D8: j           L_8022B908
    // 0x8022B8DC: nop

        goto L_8022B908;
    // 0x8022B8DC: nop

L_8022B8E0:
    // 0x8022B8E0: lw          $v1, 0x374($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X374);
    // 0x8022B8E4: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8022B8E8: lw          $v1, 0x374($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X374);
    // 0x8022B8EC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022B8F0: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    // 0x8022B8F4: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x8022B8F8: lw          $a0, 0x374($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X374);
    // 0x8022B8FC: lui         $v1, 0xFFB0
    ctx->r3 = S32(0XFFB0 << 16);
    // 0x8022B900: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022B904: sw          $v0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r2;
L_8022B908:
    // 0x8022B908: lw          $v1, 0x4C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4C);
    // 0x8022B90C: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x8022B910: sw          $v0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r2;
    // 0x8022B914: lw          $v1, 0x4C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4C);
    // 0x8022B918: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x8022B91C: sw          $v0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r2;
    // 0x8022B920: lw          $v1, 0x4C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4C);
    // 0x8022B924: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022B928: sh          $v0, 0x64($v1)
    MEM_H(0X64, ctx->r3) = ctx->r2;
    // 0x8022B92C: lw          $a1, 0x4C($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X4C);
    // 0x8022B930: addiu       $a0, $a1, 0x1C
    ctx->r4 = ADD32(ctx->r5, 0X1C);
    // 0x8022B934: jal         0x8004DD04
    // 0x8022B938: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_2;
    // 0x8022B938: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_2:
    // 0x8022B93C: lw          $a1, 0x4C($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X4C);
    // 0x8022B940: addiu       $a3, $zero, 0x6E0
    ctx->r7 = ADD32(0, 0X6E0);
    // 0x8022B944: lh          $a2, 0x64($a1)
    ctx->r6 = MEM_H(ctx->r5, 0X64);
    // 0x8022B948: addiu       $a0, $a1, 0x14
    ctx->r4 = ADD32(ctx->r5, 0X14);
    // 0x8022B94C: addiu       $a1, $a1, 0x1C
    ctx->r5 = ADD32(ctx->r5, 0X1C);
    // 0x8022B950: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8022B954: jal         0x8004DBA0
    // 0x8022B958: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_3;
    // 0x8022B958: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_3:
L_8022B95C:
    // 0x8022B95C: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022B960: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022B964: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022B968: jr          $ra
    // 0x8022B96C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022B96C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80227970_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227970: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227974: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227978: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022797C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227980: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80227984: lhu         $v1, 0x426($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X426);
    // 0x80227988: lh          $a0, 0x428($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X428);
    // 0x8022798C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80227990: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80227994: jal         0x800324B4
    // 0x80227998: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    func_800324B4_D8B4(rdram, ctx);
        goto after_0;
    // 0x80227998: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022799C: lh          $v1, 0x42A($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X42A);
    // 0x802279A0: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802279A4: mflo        $v1
    ctx->r3 = lo;
    // 0x802279A8: lhu         $v0, 0x420($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X420);
    // 0x802279AC: lh          $a0, 0x428($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X428);
    // 0x802279B0: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x802279B4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802279B8: jal         0x80032498
    // 0x802279BC: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    func_80032498_D898(rdram, ctx);
        goto after_1;
    // 0x802279BC: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    after_1:
    // 0x802279C0: lh          $v1, 0x42A($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X42A);
    // 0x802279C4: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802279C8: mflo        $v1
    ctx->r3 = lo;
    // 0x802279CC: lhu         $v0, 0x424($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X424);
    // 0x802279D0: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x802279D4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802279D8: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x802279DC: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x802279E0: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x802279E4: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x802279E8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802279EC: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x802279F0: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x802279F4: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x802279F8: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x802279FC: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x80227A00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227A04: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227A08: jr          $ra
    // 0x80227A0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227A0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228A14_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228A14: lbu         $v1, 0xA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA);
    // 0x80228A18: beq         $v1, $zero, L_80228A34
    if (ctx->r3 == 0) {
        // 0x80228A1C: addiu       $a1, $a0, 0x328
        ctx->r5 = ADD32(ctx->r4, 0X328);
            goto L_80228A34;
    }
    // 0x80228A1C: addiu       $a1, $a0, 0x328
    ctx->r5 = ADD32(ctx->r4, 0X328);
    // 0x80228A20: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228A24: beq         $v1, $v0, L_80228A50
    if (ctx->r3 == ctx->r2) {
        // 0x80228A28: nop
    
            goto L_80228A50;
    }
    // 0x80228A28: nop

    // 0x80228A2C: j           L_80228A84
    // 0x80228A30: nop

        goto L_80228A84;
    // 0x80228A30: nop

L_80228A34:
    // 0x80228A34: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228A38: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x80228A3C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80228A40: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x80228A44: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80228A48: sh          $v0, 0x32C($a0)
    MEM_H(0X32C, ctx->r4) = ctx->r2;
    // 0x80228A4C: sh          $zero, 0x330($a0)
    MEM_H(0X330, ctx->r4) = 0;
L_80228A50:
    // 0x80228A50: lhu         $v0, 0x56($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X56);
    // 0x80228A54: addiu       $v0, $v0, 0x80
    ctx->r2 = ADD32(ctx->r2, 0X80);
    // 0x80228A58: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80228A5C: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
    // 0x80228A60: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x80228A64: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80228A68: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x80228A6C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228A70: bgtz        $v0, L_80228A84
    if (SIGNED(ctx->r2) > 0) {
        // 0x80228A74: nop
    
            goto L_80228A84;
    }
    // 0x80228A74: nop

    // 0x80228A78: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x80228A7C: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80228A80: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
L_80228A84:
    // 0x80228A84: jr          $ra
    // 0x80228A88: nop

    TRACE_RETURN()
    return;
    // 0x80228A88: nop

;}
RECOMP_FUNC void func_802275DC_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802275DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802275E0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802275E4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802275E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802275EC: lh          $v0, 0x430($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X430);
    // 0x802275F0: slti        $v0, $v0, 0x5A
    ctx->r2 = SIGNED(ctx->r2) < 0X5A ? 1 : 0;
    // 0x802275F4: bne         $v0, $zero, L_8022761C
    if (ctx->r2 != 0) {
        // 0x802275F8: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8022761C;
    }
    // 0x802275F8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802275FC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80227600: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80227604: jal         0x80050294
    // 0x80227608: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80227608: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022760C: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x80227610: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227614: j           L_80227644
    // 0x80227618: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
        goto L_80227644;
    // 0x80227618: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_8022761C:
    // 0x8022761C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80227620: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227624: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80227628: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022762C: lw          $v0, -0x7F50($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7F50);
    // 0x80227630: jalr        $v0
    // 0x80227634: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x80227634: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80227638: lhu         $v0, 0x430($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X430);
    // 0x8022763C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227640: sh          $v0, 0x430($s0)
    MEM_H(0X430, ctx->r16) = ctx->r2;
L_80227644:
    // 0x80227644: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227648: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022764C: jr          $ra
    // 0x80227650: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227650: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802278C4_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802278C4: lbu         $v1, 0x438($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X438);
    // 0x802278C8: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802278CC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802278D0: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x802278D4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802278D8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802278DC: lhu         $v0, -0x7F48($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X7F48);
    // 0x802278E0: lbu         $v1, 0x438($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X438);
    // 0x802278E4: sh          $v0, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r2;
    // 0x802278E8: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802278EC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802278F0: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x802278F4: lui         $a2, 0x8024
    ctx->r6 = S32(0X8024 << 16);
    // 0x802278F8: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x802278FC: lhu         $a2, -0x7F46($a2)
    ctx->r6 = MEM_HU(ctx->r6, -0X7F46);
    // 0x80227900: lh          $v0, 0x16($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X16);
    // 0x80227904: lh          $v1, 0x14($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X14);
    // 0x80227908: lbu         $a1, 0x438($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X438);
    // 0x8022790C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227910: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80227914: sw          $v0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r2;
    // 0x80227918: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // 0x8022791C: sw          $v1, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r3;
    // 0x80227920: lhu         $v1, 0x14($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X14);
    // 0x80227924: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80227928: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022792C: sh          $a2, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r6;
    // 0x80227930: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80227934: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227938: lhu         $v0, -0x7F44($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X7F44);
    // 0x8022793C: lbu         $a1, 0x438($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X438);
    // 0x80227940: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80227944: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // 0x80227948: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8022794C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80227950: sh          $v1, 0x420($a0)
    MEM_H(0X420, ctx->r4) = ctx->r3;
    // 0x80227954: lhu         $v1, 0x18($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X18);
    // 0x80227958: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022795C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227960: lhu         $v0, -0x7F42($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X7F42);
    // 0x80227964: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80227968: jr          $ra
    // 0x8022796C: sh          $v1, 0x424($a0)
    MEM_H(0X424, ctx->r4) = ctx->r3;
    TRACE_RETURN()
    return;
    // 0x8022796C: sh          $v1, 0x424($a0)
    MEM_H(0X424, ctx->r4) = ctx->r3;
;}
RECOMP_FUNC void func_80230650_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230650: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80230654: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80230658: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023065C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80230660: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80230664: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80230668: lh          $v0, 0x1D8($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X1D8);
    // 0x8023066C: addiu       $s1, $s0, 0x1D8
    ctx->r17 = ADD32(ctx->r16, 0X1D8);
    // 0x80230670: bne         $v0, $zero, L_80230768
    if (ctx->r2 != 0) {
        // 0x80230674: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80230768;
    }
    // 0x80230674: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80230678: lbu         $v1, 0x1DD($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1DD);
    // 0x8023067C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80230680: bne         $v1, $v0, L_802306E8
    if (ctx->r3 != ctx->r2) {
        // 0x80230684: sll         $v0, $v1, 1
        ctx->r2 = S32(ctx->r3 << 1);
            goto L_802306E8;
    }
    // 0x80230684: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80230688: jal         0x8004F144
    // 0x8023068C: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8023068C: nop

    after_0:
    // 0x80230690: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80230694: beq         $a0, $zero, L_802306D0
    if (ctx->r4 == 0) {
        // 0x80230698: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_802306D0;
    }
    // 0x80230698: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8023069C: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x802306A0: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x802306A4: sb          $v0, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r2;
    // 0x802306A8: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x802306AC: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
    // 0x802306B0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802306B4: sb          $v0, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r2;
    // 0x802306B8: lhu         $v0, 0x180($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X180);
    // 0x802306BC: sh          $v0, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r2;
    // 0x802306C0: lhu         $v0, 0x182($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X182);
    // 0x802306C4: sh          $v0, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r2;
    // 0x802306C8: lhu         $v0, 0x184($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X184);
    // 0x802306CC: sh          $v0, 0x3C($a0)
    MEM_H(0X3C, ctx->r4) = ctx->r2;
L_802306D0:
    // 0x802306D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802306D4: jal         0x8007A1B8
    // 0x802306D8: addiu       $a1, $s0, 0x180
    ctx->r5 = ADD32(ctx->r16, 0X180);
    func_8007A1B8_555B8(rdram, ctx);
        goto after_1;
    // 0x802306D8: addiu       $a1, $s0, 0x180
    ctx->r5 = ADD32(ctx->r16, 0X180);
    after_1:
    // 0x802306DC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802306E0: j           L_80230750
    // 0x802306E4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_80230750;
    // 0x802306E4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_802306E8:
    // 0x802306E8: lui         $s2, 0x8024
    ctx->r18 = S32(0X8024 << 16);
    // 0x802306EC: addu        $s2, $s2, $v0
    ctx->r18 = ADD32(ctx->r18, ctx->r2);
    // 0x802306F0: jal         0x8004F144
    // 0x802306F4: lbu         $s2, -0x7AB0($s2)
    ctx->r18 = MEM_BU(ctx->r18, -0X7AB0);
    func_8004F144_2A544(rdram, ctx);
        goto after_2;
    // 0x802306F4: lbu         $s2, -0x7AB0($s2)
    ctx->r18 = MEM_BU(ctx->r18, -0X7AB0);
    after_2:
    // 0x802306F8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x802306FC: beq         $a0, $zero, L_80230750
    if (ctx->r4 == 0) {
        // 0x80230700: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80230750;
    }
    // 0x80230700: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80230704: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x80230708: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8023070C: sb          $v0, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r2;
    // 0x80230710: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80230714: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
    // 0x80230718: lbu         $v0, 0x1DD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1DD);
    // 0x8023071C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80230720: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80230724: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80230728: lbu         $v0, -0x7AAF($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X7AAF);
    // 0x8023072C: sb          $v0, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r2;
    // 0x80230730: sll         $v0, $s2, 3
    ctx->r2 = S32(ctx->r18 << 3);
    // 0x80230734: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x80230738: lhu         $v1, 0x180($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X180);
    // 0x8023073C: sh          $v1, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r3;
    // 0x80230740: lhu         $v1, 0x182($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X182);
    // 0x80230744: sh          $v1, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r3;
    // 0x80230748: lhu         $v0, 0x184($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X184);
    // 0x8023074C: sh          $v0, 0x3C($a0)
    MEM_H(0X3C, ctx->r4) = ctx->r2;
L_80230750:
    // 0x80230750: lbu         $v0, 0x5($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X5);
    // 0x80230754: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x80230758: sh          $v1, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r3;
    // 0x8023075C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230760: j           L_80230770
    // 0x80230764: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
        goto L_80230770;
    // 0x80230764: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
L_80230768:
    // 0x80230768: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8023076C: sh          $v0, 0x1D8($s0)
    MEM_H(0X1D8, ctx->r16) = ctx->r2;
L_80230770:
    // 0x80230770: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80230774: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80230778: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8023077C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80230780: jr          $ra
    // 0x80230784: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80230784: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80237228_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237228: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8023722C: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80237230: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80237234: addiu       $a0, $s1, 0xC4
    ctx->r4 = ADD32(ctx->r17, 0XC4);
    // 0x80237238: addiu       $a1, $s1, 0x180
    ctx->r5 = ADD32(ctx->r17, 0X180);
    // 0x8023723C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80237240: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x80237244: jal         0x8009A3B4
    // 0x80237248: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80237248: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    after_0:
    // 0x8023724C: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80237250: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x80237254: addiu       $a0, $s0, 0xC4
    ctx->r4 = ADD32(ctx->r16, 0XC4);
    // 0x80237258: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8023725C: jal         0x8009A3B4
    // 0x80237260: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80237260: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80237264: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80237268: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8023726C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x80237270: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80237274: sh          $v0, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r2;
    // 0x80237278: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8023727C: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    // 0x80237280: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80237284: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    // 0x80237288: jal         0x8004DF78
    // 0x8023728C: sh          $v0, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r2;
    func_8004DF78_29378(rdram, ctx);
        goto after_2;
    // 0x8023728C: sh          $v0, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r2;
    after_2:
    // 0x80237290: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x80237294: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80237298: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8023729C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x802372A0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802372A4: jr          $ra
    // 0x802372A8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x802372A8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8023265C_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023265C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80232660: addiu       $a2, $a0, 0x348
    ctx->r6 = ADD32(ctx->r4, 0X348);
    // 0x80232664: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80232668: lb          $v1, 0xA7($a0)
    ctx->r3 = MEM_B(ctx->r4, 0XA7);
    // 0x8023266C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80232670: bne         $v1, $v0, L_802326E4
    if (ctx->r3 != ctx->r2) {
        // 0x80232674: addiu       $a1, $a0, 0xC4
        ctx->r5 = ADD32(ctx->r4, 0XC4);
            goto L_802326E4;
    }
    // 0x80232674: addiu       $a1, $a0, 0xC4
    ctx->r5 = ADD32(ctx->r4, 0XC4);
    // 0x80232678: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x8023267C: addiu       $v1, $zero, 0x3C
    ctx->r3 = ADD32(0, 0X3C);
    // 0x80232680: sb          $v1, 0x386($a0)
    MEM_B(0X386, ctx->r4) = ctx->r3;
    // 0x80232684: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80232688: beq         $v0, $v1, L_8023269C
    if (ctx->r2 == ctx->r3) {
        // 0x8023268C: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_8023269C;
    }
    // 0x8023268C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80232690: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    // 0x80232694: j           L_802326A8
    // 0x80232698: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
        goto L_802326A8;
    // 0x80232698: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_8023269C:
    // 0x8023269C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x802326A0: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x802326A4: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
L_802326A8:
    // 0x802326A8: lbu         $v0, 0x6($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X6);
    // 0x802326AC: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x802326B0: beq         $v0, $zero, L_802326CC
    if (ctx->r2 == 0) {
        // 0x802326B4: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_802326CC;
    }
    // 0x802326B4: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x802326B8: lbu         $v0, 0x6($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X6);
    // 0x802326BC: sb          $zero, 0x7($a1)
    MEM_B(0X7, ctx->r5) = 0;
    // 0x802326C0: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x802326C4: sb          $v0, 0x6($a1)
    MEM_B(0X6, ctx->r5) = ctx->r2;
    // 0x802326C8: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
L_802326CC:
    // 0x802326CC: sh          $v0, 0x3A($a2)
    MEM_H(0X3A, ctx->r6) = ctx->r2;
    // 0x802326D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802326D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802326D8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802326DC: jal         0x80050294
    // 0x802326E0: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x802326E0: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    after_0:
L_802326E4:
    // 0x802326E4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802326E8: jr          $ra
    // 0x802326EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802326EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022937C_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022937C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229380: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229384: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229388: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022938C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80229390: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229394: beq         $v1, $v0, L_802293E0
    if (ctx->r3 == ctx->r2) {
        // 0x80229398: addiu       $a0, $s0, 0x328
        ctx->r4 = ADD32(ctx->r16, 0X328);
            goto L_802293E0;
    }
    // 0x80229398: addiu       $a0, $s0, 0x328
    ctx->r4 = ADD32(ctx->r16, 0X328);
    // 0x8022939C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x802293A0: beql        $v0, $zero, L_802293B8
    if (ctx->r2 == 0) {
        // 0x802293A4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802293B8;
    }
    goto skip_0;
    // 0x802293A4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x802293A8: beq         $v1, $zero, L_802293C8
    if (ctx->r3 == 0) {
        // 0x802293AC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802293C8;
    }
    // 0x802293AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802293B0: j           L_802294B4
    // 0x802293B4: nop

        goto L_802294B4;
    // 0x802293B4: nop

L_802293B8:
    // 0x802293B8: beq         $v1, $v0, L_80229490
    if (ctx->r3 == ctx->r2) {
        // 0x802293BC: nop
    
            goto L_80229490;
    }
    // 0x802293BC: nop

    // 0x802293C0: j           L_802294B4
    // 0x802293C4: nop

        goto L_802294B4;
    // 0x802293C4: nop

L_802293C8:
    // 0x802293C8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802293CC: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
    // 0x802293D0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802293D4: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x802293D8: sh          $v0, 0x32C($s0)
    MEM_H(0X32C, ctx->r16) = ctx->r2;
    // 0x802293DC: sh          $zero, 0x330($s0)
    MEM_H(0X330, ctx->r16) = 0;
L_802293E0:
    // 0x802293E0: lhu         $v0, 0x4($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X4);
    // 0x802293E4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802293E8: sh          $v0, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r2;
    // 0x802293EC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802293F0: bgezl       $v0, L_80229410
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802293F4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80229410;
    }
    goto skip_1;
    // 0x802293F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    skip_1:
    // 0x802293F8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802293FC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80229400: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80229404: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x80229408: j           L_80229490
    // 0x8022940C: sh          $v0, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r2;
        goto L_80229490;
    // 0x8022940C: sh          $v0, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r2;
L_80229410:
    // 0x80229410: addiu       $a1, $zero, -0xF0
    ctx->r5 = ADD32(0, -0XF0);
    // 0x80229414: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80229418: jal         0x8004DA90
    // 0x8022941C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8022941C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x80229420: jal         0x80040F30
    // 0x80229424: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_1;
    // 0x80229424: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80229428: jal         0x8003E934
    // 0x8022942C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_2;
    // 0x8022942C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80229430: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80229434: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x80229438: lh          $v1, 0x2E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2E);
    // 0x8022943C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229440: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80229444: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x80229448: bltz        $v0, L_80229460
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022944C: slti        $v0, $v0, 0x21
        ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
            goto L_80229460;
    }
    // 0x8022944C: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x80229450: beq         $v0, $zero, L_80229470
    if (ctx->r2 == 0) {
        // 0x80229454: nop
    
            goto L_80229470;
    }
    // 0x80229454: nop

    // 0x80229458: j           L_802294B4
    // 0x8022945C: nop

        goto L_802294B4;
    // 0x8022945C: nop

L_80229460:
    // 0x80229460: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x80229464: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x80229468: bne         $v0, $zero, L_802294B4
    if (ctx->r2 != 0) {
        // 0x8022946C: nop
    
            goto L_802294B4;
    }
    // 0x8022946C: nop

L_80229470:
    // 0x80229470: lhu         $v0, 0x2E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2E);
    // 0x80229474: lw          $a0, 0x38($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X38);
    // 0x80229478: addiu       $v1, $zero, 0xA
    ctx->r3 = ADD32(0, 0XA);
    // 0x8022947C: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    // 0x80229480: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x80229484: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80229488: j           L_802294B4
    // 0x8022948C: sw          $a0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r4;
        goto L_802294B4;
    // 0x8022948C: sw          $a0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r4;
L_80229490:
    // 0x80229490: lhu         $v0, 0x4($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X4);
    // 0x80229494: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80229498: sh          $v0, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r2;
    // 0x8022949C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802294A0: bgez        $v0, L_802294B4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802294A4: nop
    
            goto L_802294B4;
    }
    // 0x802294A4: nop

    // 0x802294A8: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x802294AC: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x802294B0: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
L_802294B4:
    // 0x802294B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802294B8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802294BC: jr          $ra
    // 0x802294C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802294C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80233C00_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233C00: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80233C04: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80233C08: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80233C0C: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80233C10: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80233C14: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80233C18: jal         0x8009A3B4
    // 0x80233C1C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80233C1C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_0:
    // 0x80233C20: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80233C24: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80233C28: jal         0x8009A3B4
    // 0x80233C2C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80233C2C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80233C30: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x80233C34: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80233C38: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x80233C3C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80233C40: bne         $v0, $zero, L_80233C58
    if (ctx->r2 != 0) {
        // 0x80233C44: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_80233C58;
    }
    // 0x80233C44: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80233C48: jal         0x8004F4F8
    // 0x80233C4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_2;
    // 0x80233C4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80233C50: j           L_80233D80
    // 0x80233C54: nop

        goto L_80233D80;
    // 0x80233C54: nop

L_80233C58:
    // 0x80233C58: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80233C5C: bne         $v1, $v0, L_80233C68
    if (ctx->r3 != ctx->r2) {
        // 0x80233C60: addiu       $v0, $v1, 0x2
        ctx->r2 = ADD32(ctx->r3, 0X2);
            goto L_80233C68;
    }
    // 0x80233C60: addiu       $v0, $v1, 0x2
    ctx->r2 = ADD32(ctx->r3, 0X2);
    // 0x80233C64: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80233C68:
    // 0x80233C68: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80233C6C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80233C70: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80233C74: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80233C78: lbu         $v0, -0x796C($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X796C);
    // 0x80233C7C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80233C80: lh          $a2, 0x4C($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X4C);
    // 0x80233C84: lh          $a3, 0x50($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X50);
    // 0x80233C88: sb          $v0, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r2;
    // 0x80233C8C: lhu         $v0, 0x9A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X9A);
    // 0x80233C90: lui         $t0, 0x8024
    ctx->r8 = S32(0X8024 << 16);
    // 0x80233C94: addu        $t0, $t0, $v1
    ctx->r8 = ADD32(ctx->r8, ctx->r3);
    // 0x80233C98: lbu         $t0, -0x796B($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X796B);
    // 0x80233C9C: lh          $v1, 0x44($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X44);
    // 0x80233CA0: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80233CA4: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80233CA8: sh          $v0, 0x9A($s0)
    MEM_H(0X9A, ctx->r16) = ctx->r2;
    // 0x80233CAC: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x80233CB0: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x80233CB4: lh          $a2, 0x48($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X48);
    // 0x80233CB8: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80233CBC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80233CC0: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80233CC4: lh          $v0, 0x46($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X46);
    // 0x80233CC8: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x80233CCC: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80233CD0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80233CD4: sb          $t0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r8;
    // 0x80233CD8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80233CDC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80233CE0: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x80233CE4: addu        $a2, $a2, $a3
    ctx->r6 = ADD32(ctx->r6, ctx->r7);
    // 0x80233CE8: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x80233CEC: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80233CF0: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80233CF4: jal         0x8004DD04
    // 0x80233CF8: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    func_8004DD04_29104(rdram, ctx);
        goto after_3;
    // 0x80233CF8: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    after_3:
    // 0x80233CFC: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x80233D00: beq         $v0, $zero, L_80233D1C
    if (ctx->r2 == 0) {
        // 0x80233D04: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80233D1C;
    }
    // 0x80233D04: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80233D08: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80233D0C: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x80233D10: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80233D14: bne         $v0, $zero, L_80233D68
    if (ctx->r2 != 0) {
        // 0x80233D18: nop
    
            goto L_80233D68;
    }
    // 0x80233D18: nop

L_80233D1C:
    // 0x80233D1C: jal         0x8004F144
    // 0x80233D20: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_4;
    // 0x80233D20: nop

    after_4:
    // 0x80233D24: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80233D28: beq         $v1, $zero, L_80233D68
    if (ctx->r3 == 0) {
        // 0x80233D2C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80233D68;
    }
    // 0x80233D2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80233D30: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80233D34: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x80233D38: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x80233D3C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80233D40: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    // 0x80233D44: sb          $zero, 0xC($v1)
    MEM_B(0XC, ctx->r3) = 0;
    // 0x80233D48: lhu         $v0, 0x90($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X90);
    // 0x80233D4C: sh          $v0, 0x1C($v1)
    MEM_H(0X1C, ctx->r3) = ctx->r2;
    // 0x80233D50: lhu         $v0, 0x92($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X92);
    // 0x80233D54: sh          $v0, 0x1E($v1)
    MEM_H(0X1E, ctx->r3) = ctx->r2;
    // 0x80233D58: lhu         $v0, 0x94($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X94);
    // 0x80233D5C: sh          $v0, 0x20($v1)
    MEM_H(0X20, ctx->r3) = ctx->r2;
    // 0x80233D60: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80233D64: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
L_80233D68:
    // 0x80233D68: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x80233D6C: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x80233D70: lhu         $a0, 0x18($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X18);
    // 0x80233D74: sh          $v0, 0x90($s0)
    MEM_H(0X90, ctx->r16) = ctx->r2;
    // 0x80233D78: sh          $v1, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r3;
    // 0x80233D7C: sh          $a0, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r4;
L_80233D80:
    // 0x80233D80: jal         0x8003F754
    // 0x80233D84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003F754_1AB54(rdram, ctx);
        goto after_5;
    // 0x80233D84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80233D88: bne         $v0, $zero, L_80233DA4
    if (ctx->r2 != 0) {
        // 0x80233D8C: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80233DA4;
    }
    // 0x80233D8C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80233D90: lw          $v0, 0x9C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X9C);
    // 0x80233D94: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x80233D98: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80233D9C: beq         $v0, $zero, L_80233DB8
    if (ctx->r2 == 0) {
        // 0x80233DA0: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80233DB8;
    }
    // 0x80233DA0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_80233DA4:
    // 0x80233DA4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80233DA8: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80233DAC: sb          $zero, 0x96($s0)
    MEM_B(0X96, ctx->r16) = 0;
    // 0x80233DB0: j           L_80233E08
    // 0x80233DB4: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
        goto L_80233E08;
    // 0x80233DB4: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
L_80233DB8:
    // 0x80233DB8: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80233DBC: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80233DC0: beq         $v0, $zero, L_80233E08
    if (ctx->r2 == 0) {
        // 0x80233DC4: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80233E08;
    }
    // 0x80233DC4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80233DC8: lhu         $a1, 0x98($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X98);
    // 0x80233DCC: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80233DD0: addiu       $v0, $s0, 0x9C
    ctx->r2 = ADD32(ctx->r16, 0X9C);
    // 0x80233DD4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80233DD8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80233DDC: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80233DE0: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x80233DE4: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x80233DE8: ori         $a3, $zero, 0xA000
    ctx->r7 = 0 | 0XA000;
    // 0x80233DEC: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x80233DF0: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80233DF4: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x80233DF8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80233DFC: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80233E00: jal         0x80051E18
    // 0x80233E04: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_6;
    // 0x80233E04: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_6:
L_80233E08:
    // 0x80233E08: sw          $zero, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = 0;
    // 0x80233E0C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80233E10: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80233E14: jr          $ra
    // 0x80233E18: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80233E18: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_802280F4_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802280F4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802280F8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802280FC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228100: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80228104: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80228108: lhu         $v0, 0x328($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X328);
    // 0x8022810C: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80228110: beq         $v0, $zero, L_80228120
    if (ctx->r2 == 0) {
        // 0x80228114: addiu       $s1, $s0, 0x328
        ctx->r17 = ADD32(ctx->r16, 0X328);
            goto L_80228120;
    }
    // 0x80228114: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x80228118: jal         0x80229AE8
    // 0x8022811C: nop

    func_80229AE8_ovl31(rdram, ctx);
        goto after_0;
    // 0x8022811C: nop

    after_0:
L_80228120:
    // 0x80228120: lhu         $v0, 0x364($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X364);
    // 0x80228124: lbu         $a0, 0x32B($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X32B);
    // 0x80228128: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8022812C: addiu       $v0, $v0, -0x80
    ctx->r2 = ADD32(ctx->r2, -0X80);
    // 0x80228130: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80228134: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80228138: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022813C: sh          $v0, 0x364($s0)
    MEM_H(0X364, ctx->r16) = ctx->r2;
    // 0x80228140: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80228144: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80228148: lw          $v0, -0x7E3C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7E3C);
    // 0x8022814C: jalr        $v0
    // 0x80228150: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x80228150: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80228154: lhu         $v0, 0x328($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X328);
    // 0x80228158: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022815C: beq         $v0, $zero, L_80228198
    if (ctx->r2 == 0) {
        // 0x80228160: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_80228198;
    }
    // 0x80228160: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80228164: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80228168: beq         $v1, $v0, L_80228180
    if (ctx->r3 == ctx->r2) {
        // 0x8022816C: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_80228180;
    }
    // 0x8022816C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80228170: beq         $v1, $v0, L_80228184
    if (ctx->r3 == ctx->r2) {
        // 0x80228174: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_80228184;
    }
    // 0x80228174: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80228178: j           L_80228184
    // 0x8022817C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80228184;
    // 0x8022817C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80228180:
    // 0x80228180: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_80228184:
    // 0x80228184: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80228188: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8022818C: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80228190: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
    // 0x80228194: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_80228198:
    // 0x80228198: lh          $v0, 0xA($s1)
    ctx->r2 = MEM_H(ctx->r17, 0XA);
    // 0x8022819C: beq         $v0, $zero, L_802281AC
    if (ctx->r2 == 0) {
        // 0x802281A0: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_802281AC;
    }
    // 0x802281A0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802281A4: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x802281A8: sh          $v0, 0xA($s1)
    MEM_H(0XA, ctx->r17) = ctx->r2;
L_802281AC:
    // 0x802281AC: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x802281B0: andi        $v0, $v0, 0x800
    ctx->r2 = ctx->r2 & 0X800;
    // 0x802281B4: beq         $v0, $zero, L_80228268
    if (ctx->r2 == 0) {
        // 0x802281B8: nop
    
            goto L_80228268;
    }
    // 0x802281B8: nop

    // 0x802281BC: lhu         $v0, 0x36($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X36);
    // 0x802281C0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802281C4: sh          $v0, 0x36($s1)
    MEM_H(0X36, ctx->r17) = ctx->r2;
    // 0x802281C8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802281CC: bgez        $v0, L_80228268
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802281D0: nop
    
            goto L_80228268;
    }
    // 0x802281D0: nop

    // 0x802281D4: jal         0x8004F144
    // 0x802281D8: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_2;
    // 0x802281D8: nop

    after_2:
    // 0x802281DC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802281E0: beq         $v1, $zero, L_8022821C
    if (ctx->r3 == 0) {
        // 0x802281E4: sw          $v1, 0x50($s1)
        MEM_W(0X50, ctx->r17) = ctx->r3;
            goto L_8022821C;
    }
    // 0x802281E4: sw          $v1, 0x50($s1)
    MEM_W(0X50, ctx->r17) = ctx->r3;
    // 0x802281E8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802281EC: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x802281F0: lw          $v1, 0x50($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X50);
    // 0x802281F4: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x802281F8: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x802281FC: lw          $v1, 0x50($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X50);
    // 0x80228200: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x80228204: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    // 0x80228208: lw          $a0, 0x50($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X50);
    // 0x8022820C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80228210: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80228214: jal         0x8009A3B4
    // 0x80228218: addiu       $a0, $a0, 0x38
    ctx->r4 = ADD32(ctx->r4, 0X38);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80228218: addiu       $a0, $a0, 0x38
    ctx->r4 = ADD32(ctx->r4, 0X38);
    after_3:
L_8022821C:
    // 0x8022821C: jal         0x8004F418
    // 0x80228220: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_4;
    // 0x80228220: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80228224: lw          $a0, 0x44($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X44);
    // 0x80228228: jal         0x8004F5C4
    // 0x8022822C: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_5;
    // 0x8022822C: nop

    after_5:
    // 0x80228230: jal         0x8004F5C4
    // 0x80228234: lw          $a0, 0x48($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X48);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_6;
    // 0x80228234: lw          $a0, 0x48($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X48);
    after_6:
    // 0x80228238: lw          $v0, 0x40($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X40);
    // 0x8022823C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228240: addiu       $s0, $a0, 0x180
    ctx->r16 = ADD32(ctx->r4, 0X180);
    // 0x80228244: lbu         $v1, 0xF($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0XF);
    // 0x80228248: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022824C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80228250: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80228254: jal         0x8007A290
    // 0x80228258: sb          $v1, 0xF($v0)
    MEM_B(0XF, ctx->r2) = ctx->r3;
    func_8007A290_55690(rdram, ctx);
        goto after_7;
    // 0x80228258: sb          $v1, 0xF($v0)
    MEM_B(0XF, ctx->r2) = ctx->r3;
    after_7:
    // 0x8022825C: addiu       $a0, $zero, 0xA1
    ctx->r4 = ADD32(0, 0XA1);
    // 0x80228260: jal         0x8002A33C
    // 0x80228264: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_8;
    // 0x80228264: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_8:
L_80228268:
    // 0x80228268: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022826C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80228270: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80228274: jr          $ra
    // 0x80228278: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80228278: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802257B4_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802257B4: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x802257B8: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x802257BC: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x802257C0: sw          $ra, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r31;
    // 0x802257C4: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x802257C8: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x802257CC: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x802257D0: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x802257D4: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x802257D8: lbu         $v0, 0xC($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0XC);
    // 0x802257DC: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x802257E0: bne         $v0, $zero, L_802258A4
    if (ctx->r2 != 0) {
        // 0x802257E4: addiu       $s4, $s3, 0x3E0
        ctx->r20 = ADD32(ctx->r19, 0X3E0);
            goto L_802258A4;
    }
    // 0x802257E4: addiu       $s4, $s3, 0x3E0
    ctx->r20 = ADD32(ctx->r19, 0X3E0);
    // 0x802257E8: lh          $v0, 0x402($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X402);
    // 0x802257EC: lw          $a1, 0x400($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X400);
    // 0x802257F0: beq         $v0, $zero, L_80225898
    if (ctx->r2 == 0) {
        // 0x802257F4: lui         $s0, 0xFF
        ctx->r16 = S32(0XFF << 16);
            goto L_80225898;
    }
    // 0x802257F4: lui         $s0, 0xFF
    ctx->r16 = S32(0XFF << 16);
    // 0x802257F8: lhu         $v0, 0x6E($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X6E);
    // 0x802257FC: lhu         $v1, 0x6E($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0X6E);
    // 0x80225800: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x80225804: sh          $v0, 0x6E($s3)
    MEM_H(0X6E, ctx->r19) = ctx->r2;
    // 0x80225808: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022580C: bgez        $v0, L_8022582C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80225810: sh          $v1, 0xB2($s3)
        MEM_H(0XB2, ctx->r19) = ctx->r3;
            goto L_8022582C;
    }
    // 0x80225810: sh          $v1, 0xB2($s3)
    MEM_H(0XB2, ctx->r19) = ctx->r3;
    // 0x80225814: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80225818: sb          $v0, 0x43B($s3)
    MEM_B(0X43B, ctx->r19) = ctx->r2;
    // 0x8022581C: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80225820: sb          $zero, 0xA($s3)
    MEM_B(0XA, ctx->r19) = 0;
    // 0x80225824: j           L_8022588C
    // 0x80225828: sh          $v0, 0x42C($s3)
    MEM_H(0X42C, ctx->r19) = ctx->r2;
        goto L_8022588C;
    // 0x80225828: sh          $v0, 0x42C($s3)
    MEM_H(0X42C, ctx->r19) = ctx->r2;
L_8022582C:
    // 0x8022582C: lhu         $v0, 0x434($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X434);
    // 0x80225830: lbu         $v1, 0x2($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X2);
    // 0x80225834: lui         $a0, 0x8019
    ctx->r4 = S32(0X8019 << 16);
    // 0x80225838: lw          $a0, 0x3C60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3C60);
    // 0x8022583C: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80225840: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80225844: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80225848: sh          $v0, 0x434($s3)
    MEM_H(0X434, ctx->r19) = ctx->r2;
    // 0x8022584C: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x80225850: lbu         $v1, 0x9($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X9);
    // 0x80225854: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x80225858: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8022585C: bne         $v0, $zero, L_80225880
    if (ctx->r2 != 0) {
        // 0x80225860: addiu       $a0, $zero, 0xA0
        ctx->r4 = ADD32(0, 0XA0);
            goto L_80225880;
    }
    // 0x80225860: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x80225864: lbu         $v0, 0xC($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0XC);
    // 0x80225868: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
    // 0x8022586C: addiu       $a1, $s3, 0x14
    ctx->r5 = ADD32(ctx->r19, 0X14);
    // 0x80225870: sh          $zero, 0x434($s3)
    MEM_H(0X434, ctx->r19) = 0;
    // 0x80225874: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x80225878: j           L_80225884
    // 0x8022587C: sb          $v0, 0xC($s3)
    MEM_B(0XC, ctx->r19) = ctx->r2;
        goto L_80225884;
    // 0x8022587C: sb          $v0, 0xC($s3)
    MEM_B(0XC, ctx->r19) = ctx->r2;
L_80225880:
    // 0x80225880: addiu       $a1, $s3, 0x14
    ctx->r5 = ADD32(ctx->r19, 0X14);
L_80225884:
    // 0x80225884: jal         0x8002A33C
    // 0x80225888: nop

    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x80225888: nop

    after_0:
L_8022588C:
    // 0x8022588C: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x80225890: j           L_8022592C
    // 0x80225894: sh          $v0, 0x15E($s3)
    MEM_H(0X15E, ctx->r19) = ctx->r2;
        goto L_8022592C;
    // 0x80225894: sh          $v0, 0x15E($s3)
    MEM_H(0X15E, ctx->r19) = ctx->r2;
L_80225898:
    // 0x80225898: lw          $v0, 0x3F8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X3F8);
    // 0x8022589C: j           L_802258E8
    // 0x802258A0: ori         $s0, $s0, 0xFFFF
    ctx->r16 = ctx->r16 | 0XFFFF;
        goto L_802258E8;
    // 0x802258A0: ori         $s0, $s0, 0xFFFF
    ctx->r16 = ctx->r16 | 0XFFFF;
L_802258A4:
    // 0x802258A4: lb          $v0, 0xF($s3)
    ctx->r2 = MEM_B(ctx->r19, 0XF);
    // 0x802258A8: beq         $v0, $zero, L_802258C4
    if (ctx->r2 == 0) {
        // 0x802258AC: addiu       $v1, $zero, 0x7FFF
        ctx->r3 = ADD32(0, 0X7FFF);
            goto L_802258C4;
    }
    // 0x802258AC: addiu       $v1, $zero, 0x7FFF
    ctx->r3 = ADD32(0, 0X7FFF);
    // 0x802258B0: lbu         $v0, 0xF($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0XF);
    // 0x802258B4: sh          $v1, 0x15E($s3)
    MEM_H(0X15E, ctx->r19) = ctx->r3;
    // 0x802258B8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802258BC: j           L_8022592C
    // 0x802258C0: sb          $v0, 0xF($s3)
    MEM_B(0XF, ctx->r19) = ctx->r2;
        goto L_8022592C;
    // 0x802258C0: sb          $v0, 0xF($s3)
    MEM_B(0XF, ctx->r19) = ctx->r2;
L_802258C4:
    // 0x802258C4: lw          $v0, 0x400($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X400);
    // 0x802258C8: lui         $s0, 0xFF
    ctx->r16 = S32(0XFF << 16);
    // 0x802258CC: ori         $s0, $s0, 0xFFFF
    ctx->r16 = ctx->r16 | 0XFFFF;
    // 0x802258D0: and         $v0, $v0, $s0
    ctx->r2 = ctx->r2 & ctx->r16;
    // 0x802258D4: beq         $v0, $zero, L_802258E4
    if (ctx->r2 == 0) {
        // 0x802258D8: addiu       $a0, $zero, 0xA3
        ctx->r4 = ADD32(0, 0XA3);
            goto L_802258E4;
    }
    // 0x802258D8: addiu       $a0, $zero, 0xA3
    ctx->r4 = ADD32(0, 0XA3);
    // 0x802258DC: jal         0x8002A33C
    // 0x802258E0: addiu       $a1, $s3, 0x14
    ctx->r5 = ADD32(ctx->r19, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x802258E0: addiu       $a1, $s3, 0x14
    ctx->r5 = ADD32(ctx->r19, 0X14);
    after_1:
L_802258E4:
    // 0x802258E4: lw          $v0, 0x3F8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X3F8);
L_802258E8:
    // 0x802258E8: and         $v0, $v0, $s0
    ctx->r2 = ctx->r2 & ctx->r16;
    // 0x802258EC: beq         $v0, $zero, L_802258FC
    if (ctx->r2 == 0) {
        // 0x802258F0: addiu       $a0, $zero, 0xA3
        ctx->r4 = ADD32(0, 0XA3);
            goto L_802258FC;
    }
    // 0x802258F0: addiu       $a0, $zero, 0xA3
    ctx->r4 = ADD32(0, 0XA3);
    // 0x802258F4: jal         0x8002A33C
    // 0x802258F8: addiu       $a1, $s3, 0x14
    ctx->r5 = ADD32(ctx->r19, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x802258F8: addiu       $a1, $s3, 0x14
    ctx->r5 = ADD32(ctx->r19, 0X14);
    after_2:
L_802258FC:
    // 0x802258FC: lw          $v0, 0x408($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X408);
    // 0x80225900: and         $v0, $v0, $s0
    ctx->r2 = ctx->r2 & ctx->r16;
    // 0x80225904: beq         $v0, $zero, L_80225914
    if (ctx->r2 == 0) {
        // 0x80225908: addiu       $a0, $zero, 0xA3
        ctx->r4 = ADD32(0, 0XA3);
            goto L_80225914;
    }
    // 0x80225908: addiu       $a0, $zero, 0xA3
    ctx->r4 = ADD32(0, 0XA3);
    // 0x8022590C: jal         0x8002A33C
    // 0x80225910: addiu       $a1, $s3, 0x14
    ctx->r5 = ADD32(ctx->r19, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_3;
    // 0x80225910: addiu       $a1, $s3, 0x14
    ctx->r5 = ADD32(ctx->r19, 0X14);
    after_3:
L_80225914:
    // 0x80225914: lw          $v0, 0x410($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X410);
    // 0x80225918: and         $v0, $v0, $s0
    ctx->r2 = ctx->r2 & ctx->r16;
    // 0x8022591C: beq         $v0, $zero, L_8022592C
    if (ctx->r2 == 0) {
        // 0x80225920: addiu       $a0, $zero, 0xA3
        ctx->r4 = ADD32(0, 0XA3);
            goto L_8022592C;
    }
    // 0x80225920: addiu       $a0, $zero, 0xA3
    ctx->r4 = ADD32(0, 0XA3);
    // 0x80225924: jal         0x8002A33C
    // 0x80225928: addiu       $a1, $s3, 0x14
    ctx->r5 = ADD32(ctx->r19, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_4;
    // 0x80225928: addiu       $a1, $s3, 0x14
    ctx->r5 = ADD32(ctx->r19, 0X14);
    after_4:
L_8022592C:
    // 0x8022592C: lbu         $v1, 0x5B($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X5B);
    // 0x80225930: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80225934: beq         $v1, $v0, L_80225950
    if (ctx->r3 == ctx->r2) {
        // 0x80225938: nop
    
            goto L_80225950;
    }
    // 0x80225938: nop

    // 0x8022593C: lbu         $v0, 0xC($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0XC);
    // 0x80225940: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x80225944: beq         $v0, $zero, L_80225950
    if (ctx->r2 == 0) {
        // 0x80225948: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80225950;
    }
    // 0x80225948: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022594C: sb          $v0, 0x5B($s4)
    MEM_B(0X5B, ctx->r20) = ctx->r2;
L_80225950:
    // 0x80225950: lbu         $v0, 0x5B($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X5B);
    // 0x80225954: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80225958: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022595C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80225960: lw          $v0, -0x7F84($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7F84);
    // 0x80225964: jalr        $v0
    // 0x80225968: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x80225968: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_5:
    // 0x8022596C: lbu         $v1, 0x5B($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X5B);
    // 0x80225970: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80225974: beq         $v1, $v0, L_80225C48
    if (ctx->r3 == ctx->r2) {
        // 0x80225978: nop
    
            goto L_80225C48;
    }
    // 0x80225978: nop

    // 0x8022597C: lbu         $a0, 0x59($s4)
    ctx->r4 = MEM_BU(ctx->r20, 0X59);
    // 0x80225980: jal         0x80053ED8
    // 0x80225984: addiu       $s5, $s3, 0x14
    ctx->r21 = ADD32(ctx->r19, 0X14);
    func_80053ED8_2F2D8(rdram, ctx);
        goto after_6;
    // 0x80225984: addiu       $s5, $s3, 0x14
    ctx->r21 = ADD32(ctx->r19, 0X14);
    after_6:
    // 0x80225988: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022598C: addiu       $a0, $s0, 0x54
    ctx->r4 = ADD32(ctx->r16, 0X54);
    // 0x80225990: addiu       $a1, $s3, 0x54
    ctx->r5 = ADD32(ctx->r19, 0X54);
    // 0x80225994: jal         0x8009A3B4
    // 0x80225998: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x80225998: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_7:
    // 0x8022599C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802259A0: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x802259A4: jal         0x8009A3B4
    // 0x802259A8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x802259A8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_8:
    // 0x802259AC: lhu         $v0, 0x180($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X180);
    // 0x802259B0: sh          $v0, 0x10($s4)
    MEM_H(0X10, ctx->r20) = ctx->r2;
    // 0x802259B4: lhu         $v0, 0x182($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X182);
    // 0x802259B8: addiu       $v0, $v0, 0x28
    ctx->r2 = ADD32(ctx->r2, 0X28);
    // 0x802259BC: sh          $v0, 0x12($s4)
    MEM_H(0X12, ctx->r20) = ctx->r2;
    // 0x802259C0: lhu         $v0, 0x184($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X184);
    // 0x802259C4: lh          $v1, 0x12($s4)
    ctx->r3 = MEM_H(ctx->r20, 0X12);
    // 0x802259C8: addiu       $s0, $s4, 0x10
    ctx->r16 = ADD32(ctx->r20, 0X10);
    // 0x802259CC: sh          $v0, 0x14($s4)
    MEM_H(0X14, ctx->r20) = ctx->r2;
    // 0x802259D0: lh          $v0, 0x10($s4)
    ctx->r2 = MEM_H(ctx->r20, 0X10);
    // 0x802259D4: lh          $a1, 0x14($s4)
    ctx->r5 = MEM_H(ctx->r20, 0X14);
    // 0x802259D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802259DC: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x802259E0: sw          $v1, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r3;
    // 0x802259E4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802259E8: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x802259EC: sw          $v0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r2;
    // 0x802259F0: sw          $a1, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r5;
    // 0x802259F4: lhu         $a2, 0x56($s3)
    ctx->r6 = MEM_HU(ctx->r19, 0X56);
    // 0x802259F8: addiu       $a3, $zero, -0x320
    ctx->r7 = ADD32(0, -0X320);
    // 0x802259FC: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x80225A00: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80225A04: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80225A08: jal         0x8004DBA0
    // 0x80225A0C: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_9;
    // 0x80225A0C: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_9:
    // 0x80225A10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80225A14: lbu         $v1, 0x1($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X1);
    // 0x80225A18: addiu       $a1, $zero, 0xC8
    ctx->r5 = ADD32(0, 0XC8);
    // 0x80225A1C: addiu       $v0, $s4, 0x18
    ctx->r2 = ADD32(ctx->r20, 0X18);
    // 0x80225A20: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80225A24: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x80225A28: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80225A2C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x80225A30: lb          $v0, 0x73($s3)
    ctx->r2 = MEM_B(ctx->r19, 0X73);
    // 0x80225A34: addiu       $s1, $zero, 0x80
    ctx->r17 = ADD32(0, 0X80);
    // 0x80225A38: lui         $s2, 0x408
    ctx->r18 = S32(0X408 << 16);
    // 0x80225A3C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80225A40: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80225A44: or          $v0, $v0, $s2
    ctx->r2 = ctx->r2 | ctx->r18;
    // 0x80225A48: jal         0x80051E18
    // 0x80225A4C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80051E18_2D218(rdram, ctx);
        goto after_10;
    // 0x80225A4C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_10:
    // 0x80225A50: lhu         $v0, 0x1E0($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X1E0);
    // 0x80225A54: sh          $v0, 0x10($s4)
    MEM_H(0X10, ctx->r20) = ctx->r2;
    // 0x80225A58: lhu         $v0, 0x1E2($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X1E2);
    // 0x80225A5C: addiu       $v0, $v0, 0x78
    ctx->r2 = ADD32(ctx->r2, 0X78);
    // 0x80225A60: sh          $v0, 0x12($s4)
    MEM_H(0X12, ctx->r20) = ctx->r2;
    // 0x80225A64: lhu         $v0, 0x1E4($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X1E4);
    // 0x80225A68: lh          $v1, 0x12($s4)
    ctx->r3 = MEM_H(ctx->r20, 0X12);
    // 0x80225A6C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80225A70: sh          $v0, 0x14($s4)
    MEM_H(0X14, ctx->r20) = ctx->r2;
    // 0x80225A74: lh          $v0, 0x10($s4)
    ctx->r2 = MEM_H(ctx->r20, 0X10);
    // 0x80225A78: lh          $a1, 0x14($s4)
    ctx->r5 = MEM_H(ctx->r20, 0X14);
    // 0x80225A7C: addiu       $a3, $zero, -0xB40
    ctx->r7 = ADD32(0, -0XB40);
    // 0x80225A80: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80225A84: sw          $v1, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r3;
    // 0x80225A88: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80225A8C: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x80225A90: sw          $v0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r2;
    // 0x80225A94: sw          $a1, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r5;
    // 0x80225A98: lhu         $a2, 0x56($s3)
    ctx->r6 = MEM_HU(ctx->r19, 0X56);
    // 0x80225A9C: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x80225AA0: addiu       $v0, $zero, 0x820
    ctx->r2 = ADD32(0, 0X820);
    // 0x80225AA4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80225AA8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80225AAC: jal         0x8004DBA0
    // 0x80225AB0: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_11;
    // 0x80225AB0: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_11:
    // 0x80225AB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80225AB8: lbu         $v1, 0x1($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X1);
    // 0x80225ABC: addiu       $a1, $zero, 0x46
    ctx->r5 = ADD32(0, 0X46);
    // 0x80225AC0: addiu       $v0, $s4, 0x28
    ctx->r2 = ADD32(ctx->r20, 0X28);
    // 0x80225AC4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80225AC8: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x80225ACC: lb          $v0, 0x73($s3)
    ctx->r2 = MEM_B(ctx->r19, 0X73);
    // 0x80225AD0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80225AD4: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x80225AD8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80225ADC: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80225AE0: or          $v0, $v0, $s2
    ctx->r2 = ctx->r2 | ctx->r18;
    // 0x80225AE4: jal         0x80051E18
    // 0x80225AE8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80051E18_2D218(rdram, ctx);
        goto after_12;
    // 0x80225AE8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_12:
    // 0x80225AEC: lhu         $v0, 0x1E0($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X1E0);
    // 0x80225AF0: sh          $v0, 0x10($s4)
    MEM_H(0X10, ctx->r20) = ctx->r2;
    // 0x80225AF4: lhu         $v0, 0x1E2($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X1E2);
    // 0x80225AF8: addiu       $v0, $v0, 0x78
    ctx->r2 = ADD32(ctx->r2, 0X78);
    // 0x80225AFC: sh          $v0, 0x12($s4)
    MEM_H(0X12, ctx->r20) = ctx->r2;
    // 0x80225B00: lhu         $v0, 0x1E4($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X1E4);
    // 0x80225B04: lh          $v1, 0x12($s4)
    ctx->r3 = MEM_H(ctx->r20, 0X12);
    // 0x80225B08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80225B0C: sh          $v0, 0x14($s4)
    MEM_H(0X14, ctx->r20) = ctx->r2;
    // 0x80225B10: lh          $v0, 0x10($s4)
    ctx->r2 = MEM_H(ctx->r20, 0X10);
    // 0x80225B14: lh          $a1, 0x14($s4)
    ctx->r5 = MEM_H(ctx->r20, 0X14);
    // 0x80225B18: addiu       $a3, $zero, -0xB40
    ctx->r7 = ADD32(0, -0XB40);
    // 0x80225B1C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80225B20: sw          $v1, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r3;
    // 0x80225B24: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80225B28: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x80225B2C: sw          $v0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r2;
    // 0x80225B30: sw          $a1, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r5;
    // 0x80225B34: lhu         $a2, 0x56($s3)
    ctx->r6 = MEM_HU(ctx->r19, 0X56);
    // 0x80225B38: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x80225B3C: addiu       $v0, $zero, -0x820
    ctx->r2 = ADD32(0, -0X820);
    // 0x80225B40: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80225B44: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80225B48: jal         0x8004DBA0
    // 0x80225B4C: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_13;
    // 0x80225B4C: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_13:
    // 0x80225B50: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80225B54: lbu         $v1, 0x1($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X1);
    // 0x80225B58: addiu       $a1, $zero, 0x46
    ctx->r5 = ADD32(0, 0X46);
    // 0x80225B5C: addiu       $v0, $s4, 0x30
    ctx->r2 = ADD32(ctx->r20, 0X30);
    // 0x80225B60: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80225B64: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x80225B68: lb          $v0, 0x73($s3)
    ctx->r2 = MEM_B(ctx->r19, 0X73);
    // 0x80225B6C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80225B70: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x80225B74: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80225B78: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80225B7C: or          $v0, $v0, $s2
    ctx->r2 = ctx->r2 | ctx->r18;
    // 0x80225B80: jal         0x80051E18
    // 0x80225B84: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80051E18_2D218(rdram, ctx);
        goto after_14;
    // 0x80225B84: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_14:
    // 0x80225B88: lhu         $v0, 0x1E0($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X1E0);
    // 0x80225B8C: sh          $v0, 0x10($s4)
    MEM_H(0X10, ctx->r20) = ctx->r2;
    // 0x80225B90: lhu         $v0, 0x1E2($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X1E2);
    // 0x80225B94: addiu       $v0, $v0, 0x78
    ctx->r2 = ADD32(ctx->r2, 0X78);
    // 0x80225B98: sh          $v0, 0x12($s4)
    MEM_H(0X12, ctx->r20) = ctx->r2;
    // 0x80225B9C: lhu         $v0, 0x1E4($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X1E4);
    // 0x80225BA0: lh          $v1, 0x12($s4)
    ctx->r3 = MEM_H(ctx->r20, 0X12);
    // 0x80225BA4: sh          $v0, 0x14($s4)
    MEM_H(0X14, ctx->r20) = ctx->r2;
    // 0x80225BA8: lh          $v0, 0x10($s4)
    ctx->r2 = MEM_H(ctx->r20, 0X10);
    // 0x80225BAC: lh          $a1, 0x14($s4)
    ctx->r5 = MEM_H(ctx->r20, 0X14);
    // 0x80225BB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80225BB4: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80225BB8: sw          $v1, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r3;
    // 0x80225BBC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80225BC0: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x80225BC4: sw          $v0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r2;
    // 0x80225BC8: sw          $a1, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r5;
    // 0x80225BCC: lhu         $a2, 0x56($s3)
    ctx->r6 = MEM_HU(ctx->r19, 0X56);
    // 0x80225BD0: addiu       $a3, $zero, -0xB40
    ctx->r7 = ADD32(0, -0XB40);
    // 0x80225BD4: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x80225BD8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80225BDC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80225BE0: jal         0x8004DBA0
    // 0x80225BE4: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_15;
    // 0x80225BE4: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_15:
    // 0x80225BE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80225BEC: lbu         $v1, 0x1($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X1);
    // 0x80225BF0: addiu       $a1, $zero, 0x46
    ctx->r5 = ADD32(0, 0X46);
    // 0x80225BF4: addiu       $v0, $s4, 0x20
    ctx->r2 = ADD32(ctx->r20, 0X20);
    // 0x80225BF8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80225BFC: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x80225C00: lb          $v0, 0x73($s3)
    ctx->r2 = MEM_B(ctx->r19, 0X73);
    // 0x80225C04: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80225C08: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x80225C0C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80225C10: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80225C14: or          $v0, $v0, $s2
    ctx->r2 = ctx->r2 | ctx->r18;
    // 0x80225C18: jal         0x80051E18
    // 0x80225C1C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80051E18_2D218(rdram, ctx);
        goto after_16;
    // 0x80225C1C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_16:
    // 0x80225C20: lbu         $v0, 0xC($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0XC);
    // 0x80225C24: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80225C28: bne         $v0, $zero, L_80225C48
    if (ctx->r2 != 0) {
        // 0x80225C2C: nop
    
            goto L_80225C48;
    }
    // 0x80225C2C: nop

    // 0x80225C30: lbu         $v0, 0xA6($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0XA6);
    // 0x80225C34: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80225C38: beq         $v0, $zero, L_80225C48
    if (ctx->r2 == 0) {
        // 0x80225C3C: addiu       $a0, $zero, 0x1C3
        ctx->r4 = ADD32(0, 0X1C3);
            goto L_80225C48;
    }
    // 0x80225C3C: addiu       $a0, $zero, 0x1C3
    ctx->r4 = ADD32(0, 0X1C3);
    // 0x80225C40: jal         0x8002A33C
    // 0x80225C44: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_17;
    // 0x80225C44: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    after_17:
L_80225C48:
    // 0x80225C48: jal         0x8005044C
    // 0x80225C4C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_18;
    // 0x80225C4C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_18:
    // 0x80225C50: sw          $zero, 0x18($s4)
    MEM_W(0X18, ctx->r20) = 0;
    // 0x80225C54: sw          $zero, 0x20($s4)
    MEM_W(0X20, ctx->r20) = 0;
    // 0x80225C58: sw          $zero, 0x28($s4)
    MEM_W(0X28, ctx->r20) = 0;
    // 0x80225C5C: sw          $zero, 0x30($s4)
    MEM_W(0X30, ctx->r20) = 0;
    // 0x80225C60: lw          $ra, 0x48($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X48);
    // 0x80225C64: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x80225C68: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x80225C6C: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x80225C70: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x80225C74: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80225C78: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80225C7C: jr          $ra
    // 0x80225C80: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x80225C80: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_8022DAF0_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DAF0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022DAF4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022DAF8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022DAFC: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8022DB00: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022DB04: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022DB08: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8022DB0C: lh          $v1, 0x4A06($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X4A06);
    // 0x8022DB10: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    // 0x8022DB14: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x8022DB18: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x8022DB1C: addiu       $a3, $a3, 0x49CC
    ctx->r7 = ADD32(ctx->r7, 0X49CC);
    // 0x8022DB20: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022DB24: jal         0x8004FAEC
    // 0x8022DB28: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_8004FAEC_2AEEC(rdram, ctx);
        goto after_0;
    // 0x8022DB28: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_0:
    // 0x8022DB2C: beq         $v0, $zero, L_8022DB40
    if (ctx->r2 == 0) {
        // 0x8022DB30: nop
    
            goto L_8022DB40;
    }
    // 0x8022DB30: nop

    // 0x8022DB34: lbu         $v0, 0x1DE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1DE);
    // 0x8022DB38: bne         $v0, $zero, L_8022DBBC
    if (ctx->r2 != 0) {
        // 0x8022DB3C: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_8022DBBC;
    }
    // 0x8022DB3C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_8022DB40:
    // 0x8022DB40: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022DB44: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022DB48: bne         $v1, $v0, L_8022DB8C
    if (ctx->r3 != ctx->r2) {
        // 0x8022DB4C: nop
    
            goto L_8022DB8C;
    }
    // 0x8022DB4C: nop

    // 0x8022DB50: lbu         $v0, 0x1DE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1DE);
    // 0x8022DB54: bne         $v0, $zero, L_8022DB8C
    if (ctx->r2 != 0) {
        // 0x8022DB58: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022DB8C;
    }
    // 0x8022DB58: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022DB5C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x8022DB60: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022DB64: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022DB68: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022DB6C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022DB70: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022DB74: jal         0x80050294
    // 0x8022DB78: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x8022DB78: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022DB7C: lbu         $v0, 0xCA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XCA);
    // 0x8022DB80: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x8022DB84: j           L_8022DC44
    // 0x8022DB88: sb          $v0, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r2;
        goto L_8022DC44;
    // 0x8022DB88: sb          $v0, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r2;
L_8022DB8C:
    // 0x8022DB8C: lbu         $v0, 0xCA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XCA);
    // 0x8022DB90: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022DB94: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8022DB98: sb          $v1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r3;
    // 0x8022DB9C: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
    // 0x8022DBA0: sb          $v1, 0x385($a0)
    MEM_B(0X385, ctx->r4) = ctx->r3;
    // 0x8022DBA4: sb          $zero, 0xCB($a0)
    MEM_B(0XCB, ctx->r4) = 0;
    // 0x8022DBA8: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x8022DBAC: jal         0x8022DC54
    // 0x8022DBB0: sb          $v0, 0xCA($a0)
    MEM_B(0XCA, ctx->r4) = ctx->r2;
    func_8022DC54_ovl31(rdram, ctx);
        goto after_2;
    // 0x8022DBB0: sb          $v0, 0xCA($a0)
    MEM_B(0XCA, ctx->r4) = ctx->r2;
    after_2:
    // 0x8022DBB4: j           L_8022DC44
    // 0x8022DBB8: nop

        goto L_8022DC44;
    // 0x8022DBB8: nop

L_8022DBBC:
    // 0x8022DBBC: lw          $a0, 0x80($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X80);
    // 0x8022DBC0: lui         $v1, 0x1
    ctx->r3 = S32(0X1 << 16);
    // 0x8022DBC4: ori         $v1, $v1, 0x387F
    ctx->r3 = ctx->r3 | 0X387F;
    // 0x8022DBC8: sltu        $v1, $v1, $a0
    ctx->r3 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x8022DBCC: bne         $v1, $zero, L_8022DC3C
    if (ctx->r3 != 0) {
        // 0x8022DBD0: sb          $v0, 0x1DE($s0)
        MEM_B(0X1DE, ctx->r16) = ctx->r2;
            goto L_8022DC3C;
    }
    // 0x8022DBD0: sb          $v0, 0x1DE($s0)
    MEM_B(0X1DE, ctx->r16) = ctx->r2;
    // 0x8022DBD4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022DBD8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022DBDC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022DBE0: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022DBE4: lbu         $v1, 0xCA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XCA);
    // 0x8022DBE8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022DBEC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022DBF0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022DBF4: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022DBF8: jal         0x80050294
    // 0x8022DBFC: sb          $v1, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r3;
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x8022DBFC: sb          $v1, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r3;
    after_3:
    // 0x8022DC00: addiu       $a0, $zero, 0x15B
    ctx->r4 = ADD32(0, 0X15B);
    // 0x8022DC04: jal         0x8002A33C
    // 0x8022DC08: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_4;
    // 0x8022DC08: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_4:
    // 0x8022DC0C: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8022DC10: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8022DC14: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x8022DC18: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022DC1C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022DC20: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8022DC24: lbu         $v0, 0xC($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XC);
    // 0x8022DC28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022DC2C: jal         0x8022DDCC
    // 0x8022DC30: sh          $v0, 0xC8($a0)
    MEM_H(0XC8, ctx->r4) = ctx->r2;
    func_8022DDCC_ovl31(rdram, ctx);
        goto after_5;
    // 0x8022DC30: sh          $v0, 0xC8($a0)
    MEM_H(0XC8, ctx->r4) = ctx->r2;
    after_5:
    // 0x8022DC34: j           L_8022DC44
    // 0x8022DC38: nop

        goto L_8022DC44;
    // 0x8022DC38: nop

L_8022DC3C:
    // 0x8022DC3C: jal         0x8022D7E4
    // 0x8022DC40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022D7E4_ovl31(rdram, ctx);
        goto after_6;
    // 0x8022DC40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
L_8022DC44:
    // 0x8022DC44: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022DC48: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022DC4C: jr          $ra
    // 0x8022DC50: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022DC50: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023501C_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023501C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80235020: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80235024: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80235028: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023502C: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80235030: lbu         $a0, 0x3($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X3);
    // 0x80235034: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80235038: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8023503C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80235040: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80235044: addiu       $v0, $v0, -0x760C
    ctx->r2 = ADD32(ctx->r2, -0X760C);
    // 0x80235048: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x8023504C: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80235050: bne         $a0, $zero, L_802350B0
    if (ctx->r4 != 0) {
        // 0x80235054: sb          $v1, 0x0($s0)
        MEM_B(0X0, ctx->r16) = ctx->r3;
            goto L_802350B0;
    }
    // 0x80235054: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    // 0x80235058: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8023505C: lb          $v1, -0x3BC7($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC7);
    // 0x80235060: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x80235064: beq         $v0, $zero, L_80235094
    if (ctx->r2 == 0) {
        // 0x80235068: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80235094;
    }
    // 0x80235068: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8023506C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80235070: addu        $at, $at, $v0
    gpr jr_addend_80235078 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80235074: lw          $v0, -0x7098($at)
    ctx->r2 = ADD32(ctx->r1, -0X7098);
    // 0x80235078: jr          $v0
    // 0x8023507C: nop

    switch (jr_addend_80235078 >> 2) {
        case 0: goto L_80235080; break;
        case 1: goto L_80235088; break;
        case 2: goto L_80235090; break;
        case 3: goto L_80235080; break;
        case 4: goto L_80235088; break;
        case 5: goto L_80235090; break;
        default: switch_error(__func__, 0x80235078, 0x80238F68);
    }
    // 0x8023507C: nop

L_80235080:
    // 0x80235080: j           L_80235094
    // 0x80235084: addiu       $a1, $zero, 0x66
    ctx->r5 = ADD32(0, 0X66);
        goto L_80235094;
    // 0x80235084: addiu       $a1, $zero, 0x66
    ctx->r5 = ADD32(0, 0X66);
L_80235088:
    // 0x80235088: j           L_80235094
    // 0x8023508C: addiu       $a1, $zero, 0x67
    ctx->r5 = ADD32(0, 0X67);
        goto L_80235094;
    // 0x8023508C: addiu       $a1, $zero, 0x67
    ctx->r5 = ADD32(0, 0X67);
L_80235090:
    // 0x80235090: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
L_80235094:
    // 0x80235094: jal         0x8006033C
    // 0x80235098: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80235098: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    after_0:
    // 0x8023509C: beq         $v0, $zero, L_802350AC
    if (ctx->r2 == 0) {
        // 0x802350A0: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_802350AC;
    }
    // 0x802350A0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x802350A4: j           L_802350B0
    // 0x802350A8: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
        goto L_802350B0;
    // 0x802350A8: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
L_802350AC:
    // 0x802350AC: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
L_802350B0:
    // 0x802350B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802350B4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802350B8: jr          $ra
    // 0x802350BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802350BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802371E0_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802371E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802371E4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802371E8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802371EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802371F0: lb          $a0, 0xC($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XC);
    // 0x802371F4: jal         0x8006033C
    // 0x802371F8: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x802371F8: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    after_0:
    // 0x802371FC: bne         $v0, $zero, L_80237218
    if (ctx->r2 != 0) {
        // 0x80237200: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80237218;
    }
    // 0x80237200: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80237204: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x80237208: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023720C: bne         $v1, $v0, L_80237218
    if (ctx->r3 != ctx->r2) {
        // 0x80237210: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80237218;
    }
    // 0x80237210: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237214: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80237218:
    // 0x80237218: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023721C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80237220: jr          $ra
    // 0x80237224: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80237224: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228A8C_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228A8C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80228A90: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80228A94: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228A98: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80228A9C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80228AA0: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80228AA4: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x80228AA8: beq         $v0, $zero, L_80228C80
    if (ctx->r2 == 0) {
        // 0x80228AAC: addiu       $s1, $s0, 0x328
        ctx->r17 = ADD32(ctx->r16, 0X328);
            goto L_80228C80;
    }
    // 0x80228AAC: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x80228AB0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80228AB4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80228AB8: addu        $at, $at, $v0
    gpr jr_addend_80228AC0 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80228ABC: lw          $v0, -0x7200($at)
    ctx->r2 = ADD32(ctx->r1, -0X7200);
    // 0x80228AC0: jr          $v0
    // 0x80228AC4: nop

    switch (jr_addend_80228AC0 >> 2) {
        case 0: goto L_80228AC8; break;
        case 1: goto L_80228B18; break;
        case 2: goto L_80228B58; break;
        case 3: goto L_80228B7C; break;
        case 4: goto L_80228BE0; break;
        case 5: goto L_80228C5C; break;
        default: switch_error(__func__, 0x80228AC0, 0x80238E00);
    }
    // 0x80228AC4: nop

L_80228AC8:
    // 0x80228AC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228ACC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80228AD0: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80228AD4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80228AD8: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80228ADC: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
    // 0x80228AE0: andi        $v0, $v0, 0xFFDF
    ctx->r2 = ctx->r2 & 0XFFDF;
    // 0x80228AE4: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x80228AE8: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80228AEC: lh          $v1, 0x6E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X6E);
    // 0x80228AF0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80228AF4: bgtz        $v1, L_80228B08
    if (SIGNED(ctx->r3) > 0) {
        // 0x80228AF8: sh          $v0, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r2;
            goto L_80228B08;
    }
    // 0x80228AF8: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80228AFC: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80228B00: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x80228B04: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_80228B08:
    // 0x80228B08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228B0C: addiu       $a1, $zero, -0x460
    ctx->r5 = ADD32(0, -0X460);
    // 0x80228B10: j           L_80228B40
    // 0x80228B14: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
        goto L_80228B40;
    // 0x80228B14: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_80228B18:
    // 0x80228B18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228B1C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80228B20: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80228B24: addiu       $v0, $zero, -0x190
    ctx->r2 = ADD32(0, -0X190);
    // 0x80228B28: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80228B2C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80228B30: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80228B34: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80228B38: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80228B3C: addiu       $a2, $zero, -0x960
    ctx->r6 = ADD32(0, -0X960);
L_80228B40:
    // 0x80228B40: jal         0x8004DA90
    // 0x80228B44: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x80228B44: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x80228B48: jal         0x80040F30
    // 0x80228B4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_1;
    // 0x80228B4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80228B50: j           L_80228C80
    // 0x80228B54: nop

        goto L_80228C80;
    // 0x80228B54: nop

L_80228B58:
    // 0x80228B58: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80228B5C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80228B60: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80228B64: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228B68: bgez        $v0, L_80228B7C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80228B6C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80228B7C;
    }
    // 0x80228B6C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80228B70: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80228B74: addiu       $v0, $zero, 0x158
    ctx->r2 = ADD32(0, 0X158);
    // 0x80228B78: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
L_80228B7C:
    // 0x80228B7C: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80228B80: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x80228B84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228B88: jal         0x8004DA90
    // 0x80228B8C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x80228B8C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x80228B90: jal         0x80040F30
    // 0x80228B94: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_3;
    // 0x80228B94: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80228B98: beq         $v0, $zero, L_80228C80
    if (ctx->r2 == 0) {
        // 0x80228B9C: sw          $v0, 0x5C($s1)
        MEM_W(0X5C, ctx->r17) = ctx->r2;
            goto L_80228C80;
    }
    // 0x80228B9C: sw          $v0, 0x5C($s1)
    MEM_W(0X5C, ctx->r17) = ctx->r2;
    // 0x80228BA0: andi        $v0, $v0, 0xF00
    ctx->r2 = ctx->r2 & 0XF00;
    // 0x80228BA4: bnel        $v0, $zero, L_80228BAC
    if (ctx->r2 != 0) {
        // 0x80228BA8: sh          $zero, 0x44($s0)
        MEM_H(0X44, ctx->r16) = 0;
            goto L_80228BAC;
    }
    goto skip_0;
    // 0x80228BA8: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    skip_0:
L_80228BAC:
    // 0x80228BAC: lw          $v0, 0x5C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X5C);
    // 0x80228BB0: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x80228BB4: beq         $v0, $zero, L_80228C80
    if (ctx->r2 == 0) {
        // 0x80228BB8: addiu       $v0, $zero, 0x21
        ctx->r2 = ADD32(0, 0X21);
            goto L_80228C80;
    }
    // 0x80228BB8: addiu       $v0, $zero, 0x21
    ctx->r2 = ADD32(0, 0X21);
    // 0x80228BBC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80228BC0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80228BC4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80228BC8: addiu       $v0, $zero, -0xA0
    ctx->r2 = ADD32(0, -0XA0);
    // 0x80228BCC: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80228BD0: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80228BD4: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80228BD8: j           L_80228C80
    // 0x80228BDC: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
        goto L_80228C80;
    // 0x80228BDC: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_80228BE0:
    // 0x80228BE0: lh          $v0, 0x4($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4);
    // 0x80228BE4: beq         $v0, $zero, L_80228BF4
    if (ctx->r2 == 0) {
        // 0x80228BE8: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80228BF4;
    }
    // 0x80228BE8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80228BEC: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80228BF0: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_80228BF4:
    // 0x80228BF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228BF8: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80228BFC: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80228C00: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80228C04: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x80228C08: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80228C0C: sll         $a2, $v1, 24
    ctx->r6 = S32(ctx->r3 << 24);
    // 0x80228C10: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80228C14: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x80228C18: jal         0x8004DA90
    // 0x80228C1C: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_4;
    // 0x80228C1C: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
    after_4:
    // 0x80228C20: jal         0x80040F30
    // 0x80228C24: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_5;
    // 0x80228C24: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80228C28: beq         $v0, $zero, L_80228C80
    if (ctx->r2 == 0) {
        // 0x80228C2C: sw          $v0, 0x5C($s1)
        MEM_W(0X5C, ctx->r17) = ctx->r2;
            goto L_80228C80;
    }
    // 0x80228C2C: sw          $v0, 0x5C($s1)
    MEM_W(0X5C, ctx->r17) = ctx->r2;
    // 0x80228C30: andi        $v0, $v0, 0xF00
    ctx->r2 = ctx->r2 & 0XF00;
    // 0x80228C34: bnel        $v0, $zero, L_80228C3C
    if (ctx->r2 != 0) {
        // 0x80228C38: sh          $zero, 0x44($s0)
        MEM_H(0X44, ctx->r16) = 0;
            goto L_80228C3C;
    }
    goto skip_1;
    // 0x80228C38: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    skip_1:
L_80228C3C:
    // 0x80228C3C: lw          $v0, 0x5C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X5C);
    // 0x80228C40: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x80228C44: beq         $v0, $zero, L_80228C80
    if (ctx->r2 == 0) {
        // 0x80228C48: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80228C80;
    }
    // 0x80228C48: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80228C4C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80228C50: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80228C54: j           L_80228C80
    // 0x80228C58: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
        goto L_80228C80;
    // 0x80228C58: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_80228C5C:
    // 0x80228C5C: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80228C60: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80228C64: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80228C68: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228C6C: bgez        $v0, L_80228C80
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80228C70: nop
    
            goto L_80228C80;
    }
    // 0x80228C70: nop

    // 0x80228C74: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80228C78: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80228C7C: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_80228C80:
    // 0x80228C80: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80228C84: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80228C88: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80228C8C: jr          $ra
    // 0x80228C90: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80228C90: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022DF40_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DF40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022DF44: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022DF48: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022DF4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022DF50: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022DF54: lh          $a3, 0x382($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X382);
    // 0x8022DF58: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022DF5C: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022DF60: jal         0x8004F820
    // 0x8022DF64: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022DF64: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x8022DF68: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022DF6C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022DF70: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022DF74: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022DF78: bne         $v0, $zero, L_8022DFCC
    if (ctx->r2 != 0) {
        // 0x8022DF7C: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8022DFCC;
    }
    // 0x8022DF7C: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022DF80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022DF84: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022DF88: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022DF8C: lbu         $v0, 0xCA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XCA);
    // 0x8022DF90: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022DF94: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022DF98: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022DF9C: jal         0x80050294
    // 0x8022DFA0: sb          $v0, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x8022DFA0: sb          $v0, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022DFA4: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8022DFA8: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8022DFAC: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x8022DFB0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022DFB4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022DFB8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8022DFBC: lbu         $v1, 0xB($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0XB);
    // 0x8022DFC0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022DFC4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022DFC8: sh          $v1, 0xC8($s0)
    MEM_H(0XC8, ctx->r16) = ctx->r3;
L_8022DFCC:
    // 0x8022DFCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022DFD0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022DFD4: jr          $ra
    // 0x8022DFD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022DFD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802251BC_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802251BC: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x802251C0: lb          $v0, -0x3BC7($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC7);
    // 0x802251C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802251C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802251CC: slti        $v0, $v0, 0x3
    ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x802251D0: beq         $v0, $zero, L_802251EC
    if (ctx->r2 == 0) {
        // 0x802251D4: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_802251EC;
    }
    // 0x802251D4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802251D8: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x802251DC: lw          $a0, 0x984($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X984);
    // 0x802251E0: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x802251E4: j           L_802251F4
    // 0x802251E8: addiu       $a1, $a1, 0x7FF8
    ctx->r5 = ADD32(ctx->r5, 0X7FF8);
        goto L_802251F4;
    // 0x802251E8: addiu       $a1, $a1, 0x7FF8
    ctx->r5 = ADD32(ctx->r5, 0X7FF8);
L_802251EC:
    // 0x802251EC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802251F0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_802251F4:
    // 0x802251F4: jal         0x80037D80
    // 0x802251F8: nop

    func_80037D80_13180(rdram, ctx);
        goto after_0;
    // 0x802251F8: nop

    after_0:
    // 0x802251FC: lui         $s0, 0x801C
    ctx->r16 = S32(0X801C << 16);
    // 0x80225200: addiu       $s0, $s0, -0x3BC7
    ctx->r16 = ADD32(ctx->r16, -0X3BC7);
    // 0x80225204: lb          $t1, 0x0($s0)
    ctx->r9 = MEM_B(ctx->r16, 0X0);
    // 0x80225208: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022520C: lb          $a1, 0x47CD($a1)
    ctx->r5 = MEM_B(ctx->r5, 0X47CD);
    // 0x80225210: lui         $a3, 0x8021
    ctx->r7 = S32(0X8021 << 16);
    // 0x80225214: addiu       $a3, $a3, 0xCB4
    ctx->r7 = ADD32(ctx->r7, 0XCB4);
    // 0x80225218: sll         $v0, $t1, 3
    ctx->r2 = S32(ctx->r9 << 3);
    // 0x8022521C: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x80225220: lbu         $a2, 0x2($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X2);
    // 0x80225224: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225228: sh          $a2, 0x49AE($at)
    MEM_H(0X49AE, ctx->r1) = ctx->r6;
    // 0x8022522C: lbu         $t0, 0x3($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X3);
    // 0x80225230: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80225234: sh          $t0, -0x7386($at)
    MEM_H(-0X7386, ctx->r1) = ctx->r8;
    // 0x80225238: lbu         $t2, 0x0($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X0);
    // 0x8022523C: lui         $t3, 0x7FE9
    ctx->r11 = S32(0X7FE9 << 16);
    // 0x80225240: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80225244: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225248: sb          $t2, 0x6B40($at)
    MEM_B(0X6B40, ctx->r1) = ctx->r10;
    // 0x8022524C: lbu         $t4, 0x1($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X1);
    // 0x80225250: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x80225254: ori         $t3, $t3, 0xC000
    ctx->r11 = ctx->r11 | 0XC000;
    // 0x80225258: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8022525C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225260: sb          $v1, 0x4DFE($at)
    MEM_B(0X4DFE, ctx->r1) = ctx->r3;
    // 0x80225264: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225268: addu        $a0, $a0, $t1
    ctx->r4 = ADD32(ctx->r4, ctx->r9);
    // 0x8022526C: lw          $a0, 0x7E40($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7E40);
    // 0x80225270: addiu       $a3, $a3, -0x4
    ctx->r7 = ADD32(ctx->r7, -0X4);
    // 0x80225274: addu        $a2, $a2, $t2
    ctx->r6 = ADD32(ctx->r6, ctx->r10);
    // 0x80225278: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8022527C: sb          $a2, -0x35BC($at)
    MEM_B(-0X35BC, ctx->r1) = ctx->r6;
    // 0x80225280: addu        $v0, $v0, $t3
    ctx->r2 = ADD32(ctx->r2, ctx->r11);
    // 0x80225284: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
    // 0x80225288: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022528C: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x80225290: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80225294: sw          $v0, -0x35C0($at)
    MEM_W(-0X35C0, ctx->r1) = ctx->r2;
    // 0x80225298: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022529C: addiu       $v0, $v0, 0x5080
    ctx->r2 = ADD32(ctx->r2, 0X5080);
    // 0x802252A0: addu        $t0, $t0, $t4
    ctx->r8 = ADD32(ctx->r8, ctx->r12);
    // 0x802252A4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x802252A8: sw          $v0, 0xB5C($at)
    MEM_W(0XB5C, ctx->r1) = ctx->r2;
    // 0x802252AC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x802252B0: sb          $t4, -0x39A6($at)
    MEM_B(-0X39A6, ctx->r1) = ctx->r12;
    // 0x802252B4: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x802252B8: sb          $t0, 0x53D4($at)
    MEM_B(0X53D4, ctx->r1) = ctx->r8;
    // 0x802252BC: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802252C0: addu        $v0, $v0, $t1
    ctx->r2 = ADD32(ctx->r2, ctx->r9);
    // 0x802252C4: lw          $v0, 0x7F00($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7F00);
    // 0x802252C8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802252CC: jal         0x8004C790
    // 0x802252D0: sw          $v0, 0x6B44($at)
    MEM_W(0X6B44, ctx->r1) = ctx->r2;
    func_8004C790_27B90(rdram, ctx);
        goto after_1;
    // 0x802252D0: sw          $v0, 0x6B44($at)
    MEM_W(0X6B44, ctx->r1) = ctx->r2;
    after_1:
    // 0x802252D4: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
    // 0x802252D8: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802252DC: addiu       $a0, $a0, 0x7F60
    ctx->r4 = ADD32(ctx->r4, 0X7F60);
    // 0x802252E0: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x802252E4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802252E8: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x802252EC: lw          $v1, 0x7FE0($at)
    ctx->r3 = MEM_W(ctx->r1, 0X7FE0);
    // 0x802252F0: sll         $a1, $v0, 1
    ctx->r5 = S32(ctx->r2 << 1);
    // 0x802252F4: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x802252F8: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x802252FC: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225300: addiu       $v0, $v0, 0x7F18
    ctx->r2 = ADD32(ctx->r2, 0X7F18);
    // 0x80225304: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80225308: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8022530C: jal         0x80054FB8
    // 0x80225310: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    func_80054FB8_303B8(rdram, ctx);
        goto after_2;
    // 0x80225310: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    after_2:
    // 0x80225314: jal         0x8004A614
    // 0x80225318: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_8004A614_25A14(rdram, ctx);
        goto after_3;
    // 0x80225318: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_3:
    // 0x8022531C: jal         0x80225340
    // 0x80225320: nop

    func_80225340_ovl31(rdram, ctx);
        goto after_4;
    // 0x80225320: nop

    after_4:
    // 0x80225324: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225328: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022532C: jr          $ra
    // 0x80225330: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225330: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80225334: nop

    // 0x80225338: nop

    // 0x8022533C: nop

;}
RECOMP_FUNC void func_8023225C_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023225C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80232260: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80232264: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232268: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8023226C: lw          $v0, 0xC4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC4);
    // 0x80232270: andi        $v0, $v0, 0xF00
    ctx->r2 = ctx->r2 & 0XF00;
    // 0x80232274: beq         $v0, $zero, L_80232338
    if (ctx->r2 == 0) {
        // 0x80232278: addiu       $v1, $zero, 0x80
        ctx->r3 = ADD32(0, 0X80);
            goto L_80232338;
    }
    // 0x80232278: addiu       $v1, $zero, 0x80
    ctx->r3 = ADD32(0, 0X80);
    // 0x8023227C: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80232280: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    // 0x80232284: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x80232288: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8023228C: lh          $v1, 0x56($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X56);
    // 0x80232290: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80232294: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80232298: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8023229C: sh          $v0, 0x380($s0)
    MEM_H(0X380, ctx->r16) = ctx->r2;
    // 0x802322A0: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x802322A4: bne         $v0, $zero, L_802322B0
    if (ctx->r2 != 0) {
        // 0x802322A8: addiu       $v0, $zero, 0xE
        ctx->r2 = ADD32(0, 0XE);
            goto L_802322B0;
    }
    // 0x802322A8: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x802322AC: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
L_802322B0:
    // 0x802322B0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802322B4: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x802322B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802322BC: jal         0x80050294
    // 0x802322C0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x802322C0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x802322C4: lh          $a0, 0x56($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X56);
    // 0x802322C8: lh          $v0, 0x380($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X380);
    // 0x802322CC: bne         $a0, $v0, L_80232314
    if (ctx->r4 != ctx->r2) {
        // 0x802322D0: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_80232314;
    }
    // 0x802322D0: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x802322D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802322D8: lbu         $v0, 0xCA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XCA);
    // 0x802322DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802322E0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802322E4: addiu       $v1, $zero, 0x80
    ctx->r3 = ADD32(0, 0X80);
    // 0x802322E8: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    // 0x802322EC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802322F0: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x802322F4: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    // 0x802322F8: sb          $zero, 0x384($s0)
    MEM_B(0X384, ctx->r16) = 0;
    // 0x802322FC: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x80232300: andi        $v0, $v0, 0xFE
    ctx->r2 = ctx->r2 & 0XFE;
    // 0x80232304: jal         0x80050294
    // 0x80232308: sb          $v0, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x80232308: sb          $v0, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r2;
    after_1:
    // 0x8023230C: j           L_80232328
    // 0x80232310: nop

        goto L_80232328;
    // 0x80232310: nop

L_80232314:
    // 0x80232314: slt         $v0, $v0, $a0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80232318: bne         $v0, $zero, L_80232324
    if (ctx->r2 != 0) {
        // 0x8023231C: addiu       $v0, $v1, -0x80
        ctx->r2 = ADD32(ctx->r3, -0X80);
            goto L_80232324;
    }
    // 0x8023231C: addiu       $v0, $v1, -0x80
    ctx->r2 = ADD32(ctx->r3, -0X80);
    // 0x80232320: addiu       $v0, $v1, 0x80
    ctx->r2 = ADD32(ctx->r3, 0X80);
L_80232324:
    // 0x80232324: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_80232328:
    // 0x80232328: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8023232C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80232330: j           L_80232394
    // 0x80232334: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
        goto L_80232394;
    // 0x80232334: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_80232338:
    // 0x80232338: lb          $v0, 0x385($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X385);
    // 0x8023233C: beq         $v0, $zero, L_80232364
    if (ctx->r2 == 0) {
        // 0x80232340: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80232364;
    }
    // 0x80232340: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232344: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80232348: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023234C: jal         0x8004DA90
    // 0x80232350: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x80232350: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x80232354: lbu         $v0, 0x385($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X385);
    // 0x80232358: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023235C: j           L_80232394
    // 0x80232360: sb          $v0, 0x385($s0)
    MEM_B(0X385, ctx->r16) = ctx->r2;
        goto L_80232394;
    // 0x80232360: sb          $v0, 0x385($s0)
    MEM_B(0X385, ctx->r16) = ctx->r2;
L_80232364:
    // 0x80232364: lb          $v1, 0xA6($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA6);
    // 0x80232368: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023236C: beq         $v1, $v0, L_80232388
    if (ctx->r3 == ctx->r2) {
        // 0x80232370: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_80232388;
    }
    // 0x80232370: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80232374: lh          $a1, 0x44($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X44);
    // 0x80232378: jal         0x8004DA90
    // 0x8023237C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x8023237C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_3:
    // 0x80232380: j           L_80232394
    // 0x80232384: nop

        goto L_80232394;
    // 0x80232384: nop

L_80232388:
    // 0x80232388: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8023238C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80232390: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
L_80232394:
    // 0x80232394: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80232398: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023239C: jr          $ra
    // 0x802323A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802323A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80232628_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232628: lbu         $v0, 0x395($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X395);
    // 0x8023262C: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
    // 0x80232630: sb          $v0, 0x395($a0)
    MEM_B(0X395, ctx->r4) = ctx->r2;
    // 0x80232634: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80232638: sltiu       $v0, $v0, 0x21
    ctx->r2 = ctx->r2 < 0X21 ? 1 : 0;
    // 0x8023263C: beq         $v0, $zero, L_80232654
    if (ctx->r2 == 0) {
        // 0x80232640: addiu       $v1, $zero, 0x4
        ctx->r3 = ADD32(0, 0X4);
            goto L_80232654;
    }
    // 0x80232640: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x80232644: lbu         $v0, 0xCA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XCA);
    // 0x80232648: sb          $v1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r3;
    // 0x8023264C: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80232650: sb          $v0, 0xCA($a0)
    MEM_B(0XCA, ctx->r4) = ctx->r2;
L_80232654:
    // 0x80232654: jr          $ra
    // 0x80232658: nop

    TRACE_RETURN()
    return;
    // 0x80232658: nop

;}
RECOMP_FUNC void func_80227468_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227468: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022746C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227470: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227474: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80227478: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022747C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227480: lbu         $v0, 0xA6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA6);
    // 0x80227484: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x80227488: beq         $v0, $zero, L_80227498
    if (ctx->r2 == 0) {
        // 0x8022748C: addiu       $a0, $zero, 0x1C5
        ctx->r4 = ADD32(0, 0X1C5);
            goto L_80227498;
    }
    // 0x8022748C: addiu       $a0, $zero, 0x1C5
    ctx->r4 = ADD32(0, 0X1C5);
    // 0x80227490: jal         0x8002A33C
    // 0x80227494: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x80227494: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_0:
L_80227498:
    // 0x80227498: lb          $s2, 0xA7($s0)
    ctx->r18 = MEM_B(ctx->r16, 0XA7);
    // 0x8022749C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802274A0: bne         $s2, $v0, L_802275C4
    if (ctx->r18 != ctx->r2) {
        // 0x802274A4: nop
    
            goto L_802275C4;
    }
    // 0x802274A4: nop

    // 0x802274A8: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x802274AC: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x802274B0: lbu         $a0, 0x43A($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X43A);
    // 0x802274B4: andi        $v0, $v0, 0xFE
    ctx->r2 = ctx->r2 & 0XFE;
    // 0x802274B8: beq         $v1, $a0, L_802274CC
    if (ctx->r3 == ctx->r4) {
        // 0x802274BC: sb          $v0, 0xC($s0)
        MEM_B(0XC, ctx->r16) = ctx->r2;
            goto L_802274CC;
    }
    // 0x802274BC: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x802274C0: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x802274C4: bnel        $v0, $a0, L_8022757C
    if (ctx->r2 != ctx->r4) {
        // 0x802274C8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022757C;
    }
    goto skip_0;
    // 0x802274C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    skip_0:
L_802274CC:
    // 0x802274CC: jal         0x80053ED8
    // 0x802274D0: nop

    func_80053ED8_2F2D8(rdram, ctx);
        goto after_1;
    // 0x802274D0: nop

    after_1:
    // 0x802274D4: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x802274D8: lbu         $v0, 0xA6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA6);
    // 0x802274DC: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x802274E0: beq         $v0, $zero, L_802274F0
    if (ctx->r2 == 0) {
        // 0x802274E4: addiu       $a0, $zero, 0x1C5
        ctx->r4 = ADD32(0, 0X1C5);
            goto L_802274F0;
    }
    // 0x802274E4: addiu       $a0, $zero, 0x1C5
    ctx->r4 = ADD32(0, 0X1C5);
    // 0x802274E8: jal         0x8002A33C
    // 0x802274EC: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x802274EC: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_2:
L_802274F0:
    // 0x802274F0: lb          $v0, 0xA7($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XA7);
    // 0x802274F4: bne         $v0, $s2, L_802275C4
    if (ctx->r2 != ctx->r18) {
        // 0x802274F8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802275C4;
    }
    // 0x802274F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802274FC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80227500: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80227504: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80227508: jal         0x80050294
    // 0x8022750C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x8022750C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_3:
    // 0x80227510: lhu         $v0, 0x44($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X44);
    // 0x80227514: lhu         $v1, 0x426($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X426);
    // 0x80227518: sh          $zero, 0x430($s0)
    MEM_H(0X430, ctx->r16) = 0;
    // 0x8022751C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80227520: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x80227524: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80227528: sh          $v1, 0x426($s0)
    MEM_H(0X426, ctx->r16) = ctx->r3;
    // 0x8022752C: lbu         $v0, 0xE($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XE);
    // 0x80227530: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x80227534: sb          $v0, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r2;
    // 0x80227538: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8022753C: lbu         $v1, 0xC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XC);
    // 0x80227540: lb          $a1, 0xE($s0)
    ctx->r5 = MEM_B(ctx->r16, 0XE);
    // 0x80227544: lbu         $a0, 0x43A($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X43A);
    // 0x80227548: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022754C: ori         $v1, $v1, 0x80
    ctx->r3 = ctx->r3 | 0X80;
    // 0x80227550: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x80227554: bne         $a1, $a0, L_802275C4
    if (ctx->r5 != ctx->r4) {
        // 0x80227558: sb          $v1, 0xC($s0)
        MEM_B(0XC, ctx->r16) = ctx->r3;
            goto L_802275C4;
    }
    // 0x80227558: sb          $v1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r3;
    // 0x8022755C: lbu         $a0, 0xD($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XD);
    // 0x80227560: jal         0x80053ED8
    // 0x80227564: nop

    func_80053ED8_2F2D8(rdram, ctx);
        goto after_4;
    // 0x80227564: nop

    after_4:
    // 0x80227568: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8022756C: lbu         $v0, 0xE($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XE);
    // 0x80227570: andi        $v0, $v0, 0xFB
    ctx->r2 = ctx->r2 & 0XFB;
    // 0x80227574: j           L_802275C4
    // 0x80227578: sb          $v0, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r2;
        goto L_802275C4;
    // 0x80227578: sb          $v0, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r2;
L_8022757C:
    // 0x8022757C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80227580: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80227584: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80227588: jal         0x80050294
    // 0x8022758C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x8022758C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_5:
    // 0x80227590: lhu         $v0, 0x44($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X44);
    // 0x80227594: lbu         $a0, 0xB($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XB);
    // 0x80227598: lhu         $v1, 0x426($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X426);
    // 0x8022759C: lbu         $a1, 0xC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XC);
    // 0x802275A0: sh          $zero, 0x430($s0)
    MEM_H(0X430, ctx->r16) = 0;
    // 0x802275A4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x802275A8: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x802275AC: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x802275B0: ori         $a1, $a1, 0x80
    ctx->r5 = ctx->r5 | 0X80;
    // 0x802275B4: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x802275B8: sh          $v1, 0x426($s0)
    MEM_H(0X426, ctx->r16) = ctx->r3;
    // 0x802275BC: sb          $a0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r4;
    // 0x802275C0: sb          $a1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r5;
L_802275C4:
    // 0x802275C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802275C8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802275CC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802275D0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802275D4: jr          $ra
    // 0x802275D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802275D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022D3F4_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D3F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D3F8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D3FC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D400: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022D404: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022D408: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D40C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022D410: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022D414: lw          $v0, -0x7BC0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7BC0);
    // 0x8022D418: jalr        $v0
    // 0x8022D41C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022D41C: nop

    after_0:
    // 0x8022D420: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022D424: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022D428: bne         $v1, $v0, L_8022D4B8
    if (ctx->r3 != ctx->r2) {
        // 0x8022D42C: nop
    
            goto L_8022D4B8;
    }
    // 0x8022D42C: nop

    // 0x8022D430: lbu         $v1, 0x64($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X64);
    // 0x8022D434: lbu         $a0, 0x65($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X65);
    // 0x8022D438: lbu         $a1, 0x66($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X66);
    // 0x8022D43C: lbu         $v0, 0x64($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X64);
    // 0x8022D440: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x8022D444: andi        $a0, $a0, 0x1F
    ctx->r4 = ctx->r4 & 0X1F;
    // 0x8022D448: andi        $a1, $a1, 0x1F
    ctx->r5 = ctx->r5 & 0X1F;
    // 0x8022D44C: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x8022D450: sll         $a0, $a0, 5
    ctx->r4 = S32(ctx->r4 << 5);
    // 0x8022D454: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x8022D458: sb          $v0, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r2;
    // 0x8022D45C: lbu         $v0, 0x65($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X65);
    // 0x8022D460: lb          $a0, 0x64($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X64);
    // 0x8022D464: sll         $a1, $a1, 10
    ctx->r5 = S32(ctx->r5 << 10);
    // 0x8022D468: or          $v1, $v1, $a1
    ctx->r3 = ctx->r3 | ctx->r5;
    // 0x8022D46C: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x8022D470: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x8022D474: bgez        $a0, L_8022D490
    if (SIGNED(ctx->r4) >= 0) {
        // 0x8022D478: sb          $v0, 0x65($s0)
        MEM_B(0X65, ctx->r16) = ctx->r2;
            goto L_8022D490;
    }
    // 0x8022D478: sb          $v0, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r2;
    // 0x8022D47C: lhu         $v0, 0x15E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X15E);
    // 0x8022D480: sb          $zero, 0x64($s0)
    MEM_B(0X64, ctx->r16) = 0;
    // 0x8022D484: sb          $zero, 0x65($s0)
    MEM_B(0X65, ctx->r16) = 0;
    // 0x8022D488: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x8022D48C: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
L_8022D490:
    // 0x8022D490: lh          $v0, 0x15E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X15E);
    // 0x8022D494: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x8022D498: beq         $v0, $zero, L_8022D4B8
    if (ctx->r2 == 0) {
        // 0x8022D49C: nop
    
            goto L_8022D4B8;
    }
    // 0x8022D49C: nop

    // 0x8022D4A0: lbu         $v0, 0x66($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X66);
    // 0x8022D4A4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022D4A8: sb          $v0, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r2;
    // 0x8022D4AC: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022D4B0: bltzl       $v0, L_8022D4B8
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022D4B4: sb          $zero, 0x66($s0)
        MEM_B(0X66, ctx->r16) = 0;
            goto L_8022D4B8;
    }
    goto skip_0;
    // 0x8022D4B4: sb          $zero, 0x66($s0)
    MEM_B(0X66, ctx->r16) = 0;
    skip_0:
L_8022D4B8:
    // 0x8022D4B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022D4BC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D4C0: jr          $ra
    // 0x8022D4C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022D4C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80232F24_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232F24: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80232F28: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80232F2C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80232F30: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80232F34: jal         0x8004F144
    // 0x80232F38: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80232F38: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x80232F3C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80232F40: beq         $v1, $zero, L_80232F7C
    if (ctx->r3 == 0) {
        // 0x80232F44: addiu       $a0, $v1, 0x38
        ctx->r4 = ADD32(ctx->r3, 0X38);
            goto L_80232F7C;
    }
    // 0x80232F44: addiu       $a0, $v1, 0x38
    ctx->r4 = ADD32(ctx->r3, 0X38);
    // 0x80232F48: addiu       $s0, $s1, 0x180
    ctx->r16 = ADD32(ctx->r17, 0X180);
    // 0x80232F4C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80232F50: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80232F54: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80232F58: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80232F5C: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x80232F60: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80232F64: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80232F68: jal         0x8009A3B4
    // 0x80232F6C: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80232F6C: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    after_1:
    // 0x80232F70: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80232F74: jal         0x8007A1B8
    // 0x80232F78: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8007A1B8_555B8(rdram, ctx);
        goto after_2;
    // 0x80232F78: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
L_80232F7C:
    // 0x80232F7C: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80232F80: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80232F84: sb          $v1, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r3;
    // 0x80232F88: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80232F8C: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x80232F90: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80232F94: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80232F98: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232F9C: jr          $ra
    // 0x80232FA0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80232FA0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022C2FC_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C2FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022C300: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C304: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022C308: jal         0x8004F418
    // 0x8022C30C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x8022C30C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x8022C310: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x8022C314: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x8022C318: bne         $v0, $zero, L_8022C358
    if (ctx->r2 != 0) {
        // 0x8022C31C: nop
    
            goto L_8022C358;
    }
    // 0x8022C31C: nop

    // 0x8022C320: jal         0x8004F5C4
    // 0x8022C324: lw          $a0, 0x378($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X378);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_1;
    // 0x8022C324: lw          $a0, 0x378($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X378);
    after_1:
    // 0x8022C328: jal         0x8004F5C4
    // 0x8022C32C: lw          $a0, 0x37C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X37C);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_2;
    // 0x8022C32C: lw          $a0, 0x37C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X37C);
    after_2:
    // 0x8022C330: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x8022C334: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022C338: bne         $v0, $zero, L_8022C358
    if (ctx->r2 != 0) {
        // 0x8022C33C: nop
    
            goto L_8022C358;
    }
    // 0x8022C33C: nop

    // 0x8022C340: jal         0x8004F418
    // 0x8022C344: lw          $a0, 0x374($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X374);
    func_8004F418_2A818(rdram, ctx);
        goto after_3;
    // 0x8022C344: lw          $a0, 0x374($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X374);
    after_3:
    // 0x8022C348: jal         0x8004F5C4
    // 0x8022C34C: lw          $a0, 0x380($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X380);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_4;
    // 0x8022C34C: lw          $a0, 0x380($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X380);
    after_4:
    // 0x8022C350: jal         0x8004F5C4
    // 0x8022C354: lw          $a0, 0x384($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X384);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_5;
    // 0x8022C354: lw          $a0, 0x384($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X384);
    after_5:
L_8022C358:
    // 0x8022C358: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022C35C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C360: jr          $ra
    // 0x8022C364: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022C364: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022DFF8_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DFF8: lbu         $v0, 0x395($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X395);
    // 0x8022DFFC: lb          $v1, 0xA6($a0)
    ctx->r3 = MEM_B(ctx->r4, 0XA6);
    // 0x8022E000: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8022E004: sb          $v0, 0x395($a0)
    MEM_B(0X395, ctx->r4) = ctx->r2;
    // 0x8022E008: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E00C: bne         $v1, $v0, L_8022E018
    if (ctx->r3 != ctx->r2) {
        // 0x8022E010: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022E018;
    }
    // 0x8022E010: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022E014: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_8022E018:
    // 0x8022E018: jr          $ra
    // 0x8022E01C: nop

    TRACE_RETURN()
    return;
    // 0x8022E01C: nop

;}
RECOMP_FUNC void func_80235DC0_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235DC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80235DC4: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x80235DC8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80235DCC: lbu         $v0, 0x9($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X9);
    // 0x80235DD0: bne         $v0, $zero, L_80235DE8
    if (ctx->r2 != 0) {
        // 0x80235DD4: lui         $a2, 0xFFF5
        ctx->r6 = S32(0XFFF5 << 16);
            goto L_80235DE8;
    }
    // 0x80235DD4: lui         $a2, 0xFFF5
    ctx->r6 = S32(0XFFF5 << 16);
    // 0x80235DD8: jal         0x8004F5C4
    // 0x80235DDC: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x80235DDC: nop

    after_0:
    // 0x80235DE0: j           L_80235E1C
    // 0x80235DE4: nop

        goto L_80235E1C;
    // 0x80235DE4: nop

L_80235DE8:
    // 0x80235DE8: lbu         $a0, 0xC($a3)
    ctx->r4 = MEM_BU(ctx->r7, 0XC);
    // 0x80235DEC: ori         $a2, $a2, 0xF5F6
    ctx->r6 = ctx->r6 | 0XF5F6;
    // 0x80235DF0: lbu         $a1, 0x9($a3)
    ctx->r5 = MEM_BU(ctx->r7, 0X9);
    // 0x80235DF4: lw          $v0, 0x18($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X18);
    // 0x80235DF8: lhu         $v1, 0x24($a3)
    ctx->r3 = MEM_HU(ctx->r7, 0X24);
    // 0x80235DFC: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x80235E00: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80235E04: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x80235E08: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80235E0C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80235E10: sw          $v0, 0x18($a3)
    MEM_W(0X18, ctx->r7) = ctx->r2;
    // 0x80235E14: sh          $v1, 0x24($a3)
    MEM_H(0X24, ctx->r7) = ctx->r3;
    // 0x80235E18: sb          $a1, 0x9($a3)
    MEM_B(0X9, ctx->r7) = ctx->r5;
L_80235E1C:
    // 0x80235E1C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80235E20: jr          $ra
    // 0x80235E24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80235E24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80235E28: nop

    // 0x80235E2C: nop

;}
RECOMP_FUNC void func_80225398_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225398: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022539C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802253A0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802253A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802253A8: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x802253AC: beq         $v1, $zero, L_802253C4
    if (ctx->r3 == 0) {
        // 0x802253B0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802253C4;
    }
    // 0x802253B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802253B4: beq         $v1, $v0, L_802253F0
    if (ctx->r3 == ctx->r2) {
        // 0x802253B8: nop
    
            goto L_802253F0;
    }
    // 0x802253B8: nop

    // 0x802253BC: j           L_80225414
    // 0x802253C0: nop

        goto L_80225414;
    // 0x802253C0: nop

L_802253C4:
    // 0x802253C4: jal         0x8006033C
    // 0x802253C8: addiu       $a0, $zero, 0x66
    ctx->r4 = ADD32(0, 0X66);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x802253C8: addiu       $a0, $zero, 0x66
    ctx->r4 = ADD32(0, 0X66);
    after_0:
    // 0x802253CC: bnel        $v0, $zero, L_80225410
    if (ctx->r2 != 0) {
        // 0x802253D0: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_80225410;
    }
    goto skip_0;
    // 0x802253D0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    skip_0:
    // 0x802253D4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802253D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802253DC: jal         0x80060DA0
    // 0x802253E0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80060DA0_3C1A0(rdram, ctx);
        goto after_1;
    // 0x802253E0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x802253E4: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802253E8: j           L_80225410
    // 0x802253EC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80225410;
    // 0x802253EC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_802253F0:
    // 0x802253F0: jal         0x8006033C
    // 0x802253F4: addiu       $a0, $zero, 0x616
    ctx->r4 = ADD32(0, 0X616);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x802253F4: addiu       $a0, $zero, 0x616
    ctx->r4 = ADD32(0, 0X616);
    after_2:
    // 0x802253F8: beq         $v0, $zero, L_80225414
    if (ctx->r2 == 0) {
        // 0x802253FC: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80225414;
    }
    // 0x802253FC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80225400: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80225404: jal         0x80060DA0
    // 0x80225408: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80060DA0_3C1A0(rdram, ctx);
        goto after_3;
    // 0x80225408: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x8022540C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_80225410:
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
RECOMP_FUNC void func_80234B50_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234B50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80234B54: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80234B58: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80234B5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80234B60: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80234B64: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80234B68: bne         $v1, $v0, L_80234B88
    if (ctx->r3 != ctx->r2) {
        // 0x80234B6C: nop
    
            goto L_80234B88;
    }
    // 0x80234B6C: nop

    // 0x80234B70: jal         0x80234BE8
    // 0x80234B74: nop

    func_80234BE8_ovl31(rdram, ctx);
        goto after_0;
    // 0x80234B74: nop

    after_0:
    // 0x80234B78: jal         0x8004F684
    // 0x80234B7C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F684_2AA84(rdram, ctx);
        goto after_1;
    // 0x80234B7C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80234B80: j           L_80234BD8
    // 0x80234B84: nop

        goto L_80234BD8;
    // 0x80234B84: nop

L_80234B88:
    // 0x80234B88: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80234B8C: bne         $v0, $zero, L_80234BAC
    if (ctx->r2 != 0) {
        // 0x80234B90: nop
    
            goto L_80234BAC;
    }
    // 0x80234B90: nop

    // 0x80234B94: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80234B98: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80234B9C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80234BA0: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80234BA4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80234BA8: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
L_80234BAC:
    // 0x80234BAC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80234BB0: lhu         $v0, 0x4A06($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4A06);
    // 0x80234BB4: addiu       $v0, $v0, -0x3AC
    ctx->r2 = ADD32(ctx->r2, -0X3AC);
    // 0x80234BB8: sltiu       $v0, $v0, 0x8A9
    ctx->r2 = ctx->r2 < 0X8A9 ? 1 : 0;
    // 0x80234BBC: bnel        $v0, $zero, L_80234BD0
    if (ctx->r2 != 0) {
        // 0x80234BC0: lui         $v0, 0x80
        ctx->r2 = S32(0X80 << 16);
            goto L_80234BD0;
    }
    goto skip_0;
    // 0x80234BC0: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    skip_0:
    // 0x80234BC4: lui         $v0, 0x240
    ctx->r2 = S32(0X240 << 16);
    // 0x80234BC8: j           L_80234BD4
    // 0x80234BCC: ori         $v0, $v0, 0x4040
    ctx->r2 = ctx->r2 | 0X4040;
        goto L_80234BD4;
    // 0x80234BCC: ori         $v0, $v0, 0x4040
    ctx->r2 = ctx->r2 | 0X4040;
L_80234BD0:
    // 0x80234BD0: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
L_80234BD4:
    // 0x80234BD4: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
L_80234BD8:
    // 0x80234BD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80234BDC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80234BE0: jr          $ra
    // 0x80234BE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80234BE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80232FA4_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232FA4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80232FA8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80232FAC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232FB0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80232FB4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80232FB8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80232FBC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80232FC0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80232FC4: lw          $v0, -0x79C8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X79C8);
    // 0x80232FC8: jalr        $v0
    // 0x80232FCC: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80232FCC: nop

    after_0:
    // 0x80232FD0: lb          $v0, 0x387($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X387);
    // 0x80232FD4: bne         $v0, $zero, L_8023306C
    if (ctx->r2 != 0) {
        // 0x80232FD8: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8023306C;
    }
    // 0x80232FD8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80232FDC: lbu         $v1, 0x64($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X64);
    // 0x80232FE0: lbu         $a0, 0x65($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X65);
    // 0x80232FE4: lbu         $a1, 0x66($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X66);
    // 0x80232FE8: lbu         $v0, 0x64($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X64);
    // 0x80232FEC: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x80232FF0: andi        $a0, $a0, 0x1F
    ctx->r4 = ctx->r4 & 0X1F;
    // 0x80232FF4: andi        $a1, $a1, 0x1F
    ctx->r5 = ctx->r5 & 0X1F;
    // 0x80232FF8: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x80232FFC: sll         $a0, $a0, 5
    ctx->r4 = S32(ctx->r4 << 5);
    // 0x80233000: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x80233004: sb          $v0, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r2;
    // 0x80233008: lbu         $v0, 0x65($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X65);
    // 0x8023300C: lb          $a0, 0x64($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X64);
    // 0x80233010: sll         $a1, $a1, 10
    ctx->r5 = S32(ctx->r5 << 10);
    // 0x80233014: or          $v1, $v1, $a1
    ctx->r3 = ctx->r3 | ctx->r5;
    // 0x80233018: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x8023301C: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x80233020: bgez        $a0, L_8023303C
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80233024: sb          $v0, 0x65($s0)
        MEM_B(0X65, ctx->r16) = ctx->r2;
            goto L_8023303C;
    }
    // 0x80233024: sb          $v0, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r2;
    // 0x80233028: lhu         $v0, 0x15E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X15E);
    // 0x8023302C: sb          $zero, 0x64($s0)
    MEM_B(0X64, ctx->r16) = 0;
    // 0x80233030: sb          $zero, 0x65($s0)
    MEM_B(0X65, ctx->r16) = 0;
    // 0x80233034: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x80233038: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
L_8023303C:
    // 0x8023303C: lh          $v0, 0x15E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X15E);
    // 0x80233040: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x80233044: beq         $v0, $zero, L_8023307C
    if (ctx->r2 == 0) {
        // 0x80233048: nop
    
            goto L_8023307C;
    }
    // 0x80233048: nop

    // 0x8023304C: lbu         $v0, 0x66($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X66);
    // 0x80233050: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80233054: sb          $v0, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r2;
    // 0x80233058: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8023305C: bltzl       $v0, L_8023307C
    if (SIGNED(ctx->r2) < 0) {
        // 0x80233060: sb          $zero, 0x66($s0)
        MEM_B(0X66, ctx->r16) = 0;
            goto L_8023307C;
    }
    goto skip_0;
    // 0x80233060: sb          $zero, 0x66($s0)
    MEM_B(0X66, ctx->r16) = 0;
    skip_0:
    // 0x80233064: j           L_8023307C
    // 0x80233068: nop

        goto L_8023307C;
    // 0x80233068: nop

L_8023306C:
    // 0x8023306C: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80233070: sb          $v0, 0x387($s0)
    MEM_B(0X387, ctx->r16) = ctx->r2;
    // 0x80233074: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80233078: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
L_8023307C:
    // 0x8023307C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80233080: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80233084: jr          $ra
    // 0x80233088: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80233088: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80230B10_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230B10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80230B14: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80230B18: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80230B1C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80230B20: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80230B24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80230B28: jal         0x8009A3B4
    // 0x80230B2C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80230B2C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80230B30: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80230B34: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80230B38: jal         0x8009A3B4
    // 0x80230B3C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80230B3C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80230B40: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80230B44: addiu       $v1, $zero, 0x4210
    ctx->r3 = ADD32(0, 0X4210);
    // 0x80230B48: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x80230B4C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80230B50: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80230B54: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80230B58: lw          $v0, -0x7A70($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7A70);
    // 0x80230B5C: jalr        $v0
    // 0x80230B60: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x80230B60: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80230B64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80230B68: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80230B6C: jr          $ra
    // 0x80230B70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80230B70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802327B4_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802327B4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802327B8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802327BC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802327C0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802327C4: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802327C8: lh          $a3, 0x382($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X382);
    // 0x802327CC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x802327D0: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x802327D4: jal         0x8004F820
    // 0x802327D8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x802327D8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x802327DC: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x802327E0: lb          $a0, 0xA7($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XA7);
    // 0x802327E4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802327E8: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x802327EC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802327F0: bne         $a0, $v0, L_802327FC
    if (ctx->r4 != ctx->r2) {
        // 0x802327F4: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_802327FC;
    }
    // 0x802327F4: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x802327F8: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_802327FC:
    // 0x802327FC: lbu         $v0, 0x64($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X64);
    // 0x80232800: lbu         $v1, 0x65($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X65);
    // 0x80232804: lbu         $a0, 0x66($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X66);
    // 0x80232808: lbu         $a1, 0x66($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X66);
    // 0x8023280C: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x80232810: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x80232814: andi        $a0, $a0, 0x1F
    ctx->r4 = ctx->r4 & 0X1F;
    // 0x80232818: sll         $v1, $v1, 5
    ctx->r3 = S32(ctx->r3 << 5);
    // 0x8023281C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80232820: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    // 0x80232824: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x80232828: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8023282C: lhu         $a0, 0x15E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X15E);
    // 0x80232830: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80232834: sb          $a1, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r5;
    // 0x80232838: lb          $v1, 0x66($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X66);
    // 0x8023283C: addiu       $v0, $zero, -0x8000
    ctx->r2 = ADD32(0, -0X8000);
    // 0x80232840: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x80232844: slti        $v1, $v1, 0x10
    ctx->r3 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
    // 0x80232848: bne         $v1, $zero, L_80232884
    if (ctx->r3 != 0) {
        // 0x8023284C: sh          $v0, 0x15E($s0)
        MEM_H(0X15E, ctx->r16) = ctx->r2;
            goto L_80232884;
    }
    // 0x8023284C: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80232850: lb          $v1, 0x64($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X64);
    // 0x80232854: andi        $v0, $v0, 0x7FFF
    ctx->r2 = ctx->r2 & 0X7FFF;
    // 0x80232858: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8023285C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80232860: sb          $v0, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r2;
    // 0x80232864: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80232868: beq         $v1, $v0, L_80232884
    if (ctx->r3 == ctx->r2) {
        // 0x8023286C: addu        $a0, $v1, $zero
        ctx->r4 = ADD32(ctx->r3, 0);
            goto L_80232884;
    }
    // 0x8023286C: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x80232870: lbu         $v0, 0x65($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X65);
    // 0x80232874: addiu       $v1, $a0, 0x4
    ctx->r3 = ADD32(ctx->r4, 0X4);
    // 0x80232878: sb          $v1, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r3;
    // 0x8023287C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80232880: sb          $v0, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r2;
L_80232884:
    // 0x80232884: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80232888: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023288C: jr          $ra
    // 0x80232890: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80232890: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022F890_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F890: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022F894: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F898: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F89C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022F8A0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022F8A4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022F8A8: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022F8AC: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022F8B0: addiu       $a1, $s0, 0xF
    ctx->r5 = ADD32(ctx->r16, 0XF);
    // 0x8022F8B4: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8022F8B8: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8022F8BC: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022F8C0: andi        $v1, $v1, 0xF
    ctx->r3 = ctx->r3 & 0XF;
    // 0x8022F8C4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8022F8C8: jal         0x8004D5D4
    // 0x8022F8CC: sb          $v1, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022F8CC: sb          $v1, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r3;
    after_0:
    // 0x8022F8D0: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022F8D4: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022F8D8: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022F8DC: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022F8E0: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8022F8E4: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x8022F8E8: addiu       $s1, $s0, 0x1D8
    ctx->r17 = ADD32(ctx->r16, 0X1D8);
    // 0x8022F8EC: sh          $zero, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = 0;
    // 0x8022F8F0: sw          $zero, 0x350($s0)
    MEM_W(0X350, ctx->r16) = 0;
    // 0x8022F8F4: andi        $v0, $v0, 0xF0
    ctx->r2 = ctx->r2 & 0XF0;
    // 0x8022F8F8: bne         $v0, $zero, L_8022F908
    if (ctx->r2 != 0) {
        // 0x8022F8FC: sw          $zero, 0x354($s0)
        MEM_W(0X354, ctx->r16) = 0;
            goto L_8022F908;
    }
    // 0x8022F8FC: sw          $zero, 0x354($s0)
    MEM_W(0X354, ctx->r16) = 0;
    // 0x8022F900: j           L_8022F90C
    // 0x8022F904: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
        goto L_8022F90C;
    // 0x8022F904: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
L_8022F908:
    // 0x8022F908: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_8022F90C:
    // 0x8022F90C: sb          $v0, 0x3B4($s0)
    MEM_B(0X3B4, ctx->r16) = ctx->r2;
    // 0x8022F910: sh          $zero, 0x66($s2)
    MEM_H(0X66, ctx->r18) = 0;
    // 0x8022F914: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
    // 0x8022F918: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8022F91C: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8022F920: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x8022F924: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022F928: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022F92C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8022F930: addiu       $a0, $s2, 0x18
    ctx->r4 = ADD32(ctx->r18, 0X18);
    // 0x8022F934: lbu         $v0, 0xA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XA);
    // 0x8022F938: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x8022F93C: addiu       $a2, $zero, -0x60
    ctx->r6 = ADD32(0, -0X60);
    // 0x8022F940: jal         0x800540BC
    // 0x8022F944: sb          $v0, 0x73($s0)
    MEM_B(0X73, ctx->r16) = ctx->r2;
    func_800540BC_2F4BC(rdram, ctx);
        goto after_1;
    // 0x8022F944: sb          $v0, 0x73($s0)
    MEM_B(0X73, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022F948: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8022F94C: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8022F950: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x8022F954: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022F958: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022F95C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8022F960: lbu         $v1, 0x8($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X8);
    // 0x8022F964: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F968: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x8022F96C: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022F970: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022F974: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F978: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022F97C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022F980: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022F984: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022F988: addiu       $v0, $v0, -0x7A80
    ctx->r2 = ADD32(ctx->r2, -0X7A80);
    // 0x8022F98C: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x8022F990: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
    // 0x8022F994: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022F998: sb          $zero, 0x74($s0)
    MEM_B(0X74, ctx->r16) = 0;
    // 0x8022F99C: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022F9A0: sb          $zero, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = 0;
    // 0x8022F9A4: sll         $v1, $v1, 5
    ctx->r3 = S32(ctx->r3 << 5);
    // 0x8022F9A8: sh          $v1, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r3;
    // 0x8022F9AC: sh          $v1, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r3;
    // 0x8022F9B0: jal         0x80050294
    // 0x8022F9B4: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x8022F9B4: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    after_2:
    // 0x8022F9B8: jal         0x80040F30
    // 0x8022F9BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_3;
    // 0x8022F9BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022F9C0: sw          $v0, 0x60($s2)
    MEM_W(0X60, ctx->r18) = ctx->r2;
    // 0x8022F9C4: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022F9C8: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022F9CC: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022F9D0: sh          $v0, 0x64($s2)
    MEM_H(0X64, ctx->r18) = ctx->r2;
    // 0x8022F9D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022F9D8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022F9DC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022F9E0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F9E4: jr          $ra
    // 0x8022F9E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022F9E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022B61C_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B61C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022B620: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B624: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B628: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022B62C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022B630: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022B634: beq         $v1, $zero, L_8022B650
    if (ctx->r3 == 0) {
        // 0x8022B638: addiu       $s1, $s0, 0x328
        ctx->r17 = ADD32(ctx->r16, 0X328);
            goto L_8022B650;
    }
    // 0x8022B638: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x8022B63C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B640: beq         $v1, $v0, L_8022B694
    if (ctx->r3 == ctx->r2) {
        // 0x8022B644: nop
    
            goto L_8022B694;
    }
    // 0x8022B644: nop

    // 0x8022B648: j           L_8022B784
    // 0x8022B64C: nop

        goto L_8022B784;
    // 0x8022B64C: nop

L_8022B650:
    // 0x8022B650: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x8022B654: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B658: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022B65C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022B660: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022B664: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x8022B668: lw          $a0, 0x298($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X298);
    // 0x8022B66C: addiu       $v0, $zero, 0x2D
    ctx->r2 = ADD32(0, 0X2D);
    // 0x8022B670: sh          $v0, 0x32C($s0)
    MEM_H(0X32C, ctx->r16) = ctx->r2;
    // 0x8022B674: lh          $v0, 0x32E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X32E);
    // 0x8022B678: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022B67C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8022B680: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x8022B684: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022B688: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022B68C: lbu         $v0, 0xA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XA);
    // 0x8022B690: sh          $v0, 0x330($s0)
    MEM_H(0X330, ctx->r16) = ctx->r2;
L_8022B694:
    // 0x8022B694: lb          $v1, 0xA6($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA6);
    // 0x8022B698: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B69C: bne         $v1, $v0, L_8022B6AC
    if (ctx->r3 != ctx->r2) {
        // 0x8022B6A0: addiu       $a0, $zero, 0xB5
        ctx->r4 = ADD32(0, 0XB5);
            goto L_8022B6AC;
    }
    // 0x8022B6A0: addiu       $a0, $zero, 0xB5
    ctx->r4 = ADD32(0, 0XB5);
    // 0x8022B6A4: jal         0x8002A33C
    // 0x8022B6A8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x8022B6A8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_0:
L_8022B6AC:
    // 0x8022B6AC: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022B6B0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022B6B4: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022B6B8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B6BC: bgtz        $v0, L_8022B6D8
    if (SIGNED(ctx->r2) > 0) {
        // 0x8022B6C0: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022B6D8;
    }
    // 0x8022B6C0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022B6C4: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022B6C8: addiu       $v1, $zero, 0x2D
    ctx->r3 = ADD32(0, 0X2D);
    // 0x8022B6CC: sh          $v1, 0x36($s1)
    MEM_H(0X36, ctx->r17) = ctx->r3;
    // 0x8022B6D0: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022B6D4: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8022B6D8:
    // 0x8022B6D8: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022B6DC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022B6E0: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022B6E4: jal         0x8004F820
    // 0x8022B6E8: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x8022B6E8: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_1:
    // 0x8022B6EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B6F0: addiu       $a1, $zero, 0x34
    ctx->r5 = ADD32(0, 0X34);
    // 0x8022B6F4: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x8022B6F8: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022B6FC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022B700: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022B704: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022B708: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022B70C: jal         0x8004DA90
    // 0x8022B710: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x8022B710: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    after_2:
    // 0x8022B714: jal         0x80040F30
    // 0x8022B718: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_3;
    // 0x8022B718: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022B71C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B720: jal         0x8003E934
    // 0x8022B724: sw          $v0, 0x48($s1)
    MEM_W(0X48, ctx->r17) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_4;
    // 0x8022B724: sw          $v0, 0x48($s1)
    MEM_W(0X48, ctx->r17) = ctx->r2;
    after_4:
    // 0x8022B728: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022B72C: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x8022B730: lh          $v1, 0x2E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2E);
    // 0x8022B734: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B738: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022B73C: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x8022B740: bltz        $v0, L_8022B758
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022B744: slti        $v0, $v0, 0x21
        ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
            goto L_8022B758;
    }
    // 0x8022B744: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x8022B748: beq         $v0, $zero, L_8022B768
    if (ctx->r2 == 0) {
        // 0x8022B74C: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022B768;
    }
    // 0x8022B74C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022B750: j           L_8022B784
    // 0x8022B754: nop

        goto L_8022B784;
    // 0x8022B754: nop

L_8022B758:
    // 0x8022B758: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x8022B75C: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x8022B760: bne         $v0, $zero, L_8022B784
    if (ctx->r2 != 0) {
        // 0x8022B764: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022B784;
    }
    // 0x8022B764: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_8022B768:
    // 0x8022B768: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x8022B76C: jal         0x8009A3B4
    // 0x8022B770: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8022B770: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x8022B774: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8022B778: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x8022B77C: jal         0x8009A3B4
    // 0x8022B780: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x8022B780: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_6:
L_8022B784:
    // 0x8022B784: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022B788: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022B78C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B790: jr          $ra
    // 0x8022B794: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022B794: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80233230_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233230: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80233234: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80233238: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023323C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80233240: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80233244: lw          $v0, 0xC4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC4);
    // 0x80233248: andi        $v0, $v0, 0xF00
    ctx->r2 = ctx->r2 & 0XF00;
    // 0x8023324C: bne         $v0, $zero, L_80233268
    if (ctx->r2 != 0) {
        // 0x80233250: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_80233268;
    }
    // 0x80233250: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x80233254: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x80233258: lui         $v0, 0x48
    ctx->r2 = S32(0X48 << 16);
    // 0x8023325C: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80233260: beq         $v0, $zero, L_802332BC
    if (ctx->r2 == 0) {
        // 0x80233264: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802332BC;
    }
    // 0x80233264: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80233268:
    // 0x80233268: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8023326C: lh          $v1, 0x56($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X56);
    // 0x80233270: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80233274: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80233278: sh          $v0, 0x380($s0)
    MEM_H(0X380, ctx->r16) = ctx->r2;
    // 0x8023327C: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80233280: bne         $v0, $zero, L_8023328C
    if (ctx->r2 != 0) {
        // 0x80233284: addiu       $v0, $zero, 0xE
        ctx->r2 = ADD32(0, 0XE);
            goto L_8023328C;
    }
    // 0x80233284: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x80233288: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
L_8023328C:
    // 0x8023328C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80233290: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x80233294: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80233298: jal         0x80050294
    // 0x8023329C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8023329C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x802332A0: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x802332A4: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x802332A8: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x802332AC: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x802332B0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x802332B4: j           L_802332CC
    // 0x802332B8: sh          $v0, 0x38($s1)
    MEM_H(0X38, ctx->r17) = ctx->r2;
        goto L_802332CC;
    // 0x802332B8: sh          $v0, 0x38($s1)
    MEM_H(0X38, ctx->r17) = ctx->r2;
L_802332BC:
    // 0x802332BC: lh          $a1, 0x44($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X44);
    // 0x802332C0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802332C4: jal         0x8004DA90
    // 0x802332C8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x802332C8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
L_802332CC:
    // 0x802332CC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802332D0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802332D4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802332D8: jr          $ra
    // 0x802332DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802332DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80230DB4_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230DB4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80230DB8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80230DBC: jal         0x8004F418
    // 0x80230DC0: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x80230DC0: nop

    after_0:
    // 0x80230DC4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80230DC8: jr          $ra
    // 0x80230DCC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80230DCC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802341CC_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802341CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802341D0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802341D4: jal         0x8004F4F8
    // 0x802341D8: nop

    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_0;
    // 0x802341D8: nop

    after_0:
    // 0x802341DC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802341E0: jr          $ra
    // 0x802341E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802341E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802341E8: nop

    // 0x802341EC: nop

;}
RECOMP_FUNC void func_802354FC_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802354FC: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x80235500: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x80235504: addu        $s6, $zero, $zero
    ctx->r22 = ADD32(0, 0);
    // 0x80235508: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8023550C: lbu         $v1, -0x7680($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X7680);
    // 0x80235510: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80235514: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80235518: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x8023551C: sw          $fp, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r30;
    // 0x80235520: sw          $s7, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r23;
    // 0x80235524: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x80235528: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x8023552C: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x80235530: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x80235534: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x80235538: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x8023553C: sb          $zero, 0x3F($sp)
    MEM_B(0X3F, ctx->r29) = 0;
    // 0x80235540: beq         $v1, $v0, L_802355A8
    if (ctx->r3 == ctx->r2) {
        // 0x80235544: sb          $zero, 0x47($sp)
        MEM_B(0X47, ctx->r29) = 0;
            goto L_802355A8;
    }
    // 0x80235544: sb          $zero, 0x47($sp)
    MEM_B(0X47, ctx->r29) = 0;
    // 0x80235548: lui         $a3, 0x801C
    ctx->r7 = S32(0X801C << 16);
    // 0x8023554C: addiu       $a3, $a3, -0x3BC8
    ctx->r7 = ADD32(ctx->r7, -0X3BC8);
    // 0x80235550: lb          $t0, 0x0($a3)
    ctx->r8 = MEM_B(ctx->r7, 0X0);
    // 0x80235554: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x80235558: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8023555C: addiu       $a0, $a0, -0x7680
    ctx->r4 = ADD32(ctx->r4, -0X7680);
    // 0x80235560: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80235564: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
L_80235568:
    // 0x80235568: bnel        $t0, $v0, L_8023559C
    if (ctx->r8 != ctx->r2) {
        // 0x8023556C: addiu       $a0, $a0, 0x8
        ctx->r4 = ADD32(ctx->r4, 0X8);
            goto L_8023559C;
    }
    goto skip_0;
    // 0x8023556C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    skip_0:
    // 0x80235570: lb          $v1, 0x1($a3)
    ctx->r3 = MEM_B(ctx->r7, 0X1);
    // 0x80235574: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80235578: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8023557C: lbu         $v0, -0x767F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X767F);
    // 0x80235580: bnel        $v1, $v0, L_8023559C
    if (ctx->r3 != ctx->r2) {
        // 0x80235584: addiu       $a0, $a0, 0x8
        ctx->r4 = ADD32(ctx->r4, 0X8);
            goto L_8023559C;
    }
    goto skip_1;
    // 0x80235584: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    skip_1:
    // 0x80235588: lui         $s6, 0x8024
    ctx->r22 = S32(0X8024 << 16);
    // 0x8023558C: addu        $s6, $s6, $a1
    ctx->r22 = ADD32(ctx->r22, ctx->r5);
    // 0x80235590: lw          $s6, -0x767C($s6)
    ctx->r22 = MEM_W(ctx->r22, -0X767C);
    // 0x80235594: j           L_802355A8
    // 0x80235598: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
        goto L_802355A8;
    // 0x80235598: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_8023559C:
    // 0x8023559C: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x802355A0: bne         $v0, $t1, L_80235568
    if (ctx->r2 != ctx->r9) {
        // 0x802355A4: addiu       $a1, $a1, 0x8
        ctx->r5 = ADD32(ctx->r5, 0X8);
            goto L_80235568;
    }
    // 0x802355A4: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
L_802355A8:
    // 0x802355A8: beq         $a2, $zero, L_80235948
    if (ctx->r6 == 0) {
        // 0x802355AC: addiu       $a0, $zero, 0x5F
        ctx->r4 = ADD32(0, 0X5F);
            goto L_80235948;
    }
    // 0x802355AC: addiu       $a0, $zero, 0x5F
    ctx->r4 = ADD32(0, 0X5F);
    // 0x802355B0: lui         $t2, 0x8020
    ctx->r10 = S32(0X8020 << 16);
    // 0x802355B4: lbu         $t2, 0x6B40($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X6B40);
    // 0x802355B8: lui         $t3, 0x801B
    ctx->r11 = S32(0X801B << 16);
    // 0x802355BC: lbu         $t3, -0x35BC($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X35BC);
    // 0x802355C0: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x802355C4: lui         $t2, 0x801C
    ctx->r10 = S32(0X801C << 16);
    // 0x802355C8: lbu         $t2, -0x39A6($t2)
    ctx->r10 = MEM_BU(ctx->r10, -0X39A6);
    // 0x802355CC: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x802355D0: lui         $t3, 0x801A
    ctx->r11 = S32(0X801A << 16);
    // 0x802355D4: lbu         $t3, 0x53D4($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X53D4);
    // 0x802355D8: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x802355DC: jal         0x80060590
    // 0x802355E0: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
    func_80060590_3B990(rdram, ctx);
        goto after_0;
    // 0x802355E0: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
    after_0:
    // 0x802355E4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x802355E8: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x802355EC: slt         $v0, $t2, $t3
    ctx->r2 = SIGNED(ctx->r10) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x802355F0: beq         $v0, $zero, L_80235948
    if (ctx->r2 == 0) {
        // 0x802355F4: sw          $t2, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r10;
            goto L_80235948;
    }
    // 0x802355F4: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
L_802355F8:
    // 0x802355F8: lw          $s7, 0x14($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X14);
    // 0x802355FC: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80235600: slt         $v0, $s7, $t2
    ctx->r2 = SIGNED(ctx->r23) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x80235604: beq         $v0, $zero, L_80235930
    if (ctx->r2 == 0) {
        // 0x80235608: nop
    
            goto L_80235930;
    }
    // 0x80235608: nop

L_8023560C:
    // 0x8023560C: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80235610: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80235614: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80235618: lhu         $v0, 0x49AE($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X49AE);
    // 0x8023561C: subu        $v1, $t3, $t2
    ctx->r3 = SUB32(ctx->r11, ctx->r10);
    // 0x80235620: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80235624: mflo        $v1
    ctx->r3 = lo;
    // 0x80235628: lw          $t3, 0x14($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X14);
    // 0x8023562C: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80235630: lw          $a0, -0x35C0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X35C0);
    // 0x80235634: subu        $v0, $s7, $t3
    ctx->r2 = SUB32(ctx->r23, ctx->r11);
    // 0x80235638: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8023563C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80235640: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x80235644: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80235648: lh          $s5, 0x0($v1)
    ctx->r21 = MEM_H(ctx->r3, 0X0);
    // 0x8023564C: blez        $s5, L_8023591C
    if (SIGNED(ctx->r21) <= 0) {
        // 0x80235650: sll         $v0, $s5, 1
        ctx->r2 = S32(ctx->r21 << 1);
            goto L_8023591C;
    }
    // 0x80235650: sll         $v0, $s5, 1
    ctx->r2 = S32(ctx->r21 << 1);
    // 0x80235654: addu        $v0, $v0, $s5
    ctx->r2 = ADD32(ctx->r2, ctx->r21);
    // 0x80235658: sll         $a1, $v0, 2
    ctx->r5 = S32(ctx->r2 << 2);
    // 0x8023565C: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80235660: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80235664: lw          $v0, 0x5088($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X5088);
    // 0x80235668: lbu         $t2, 0x3F($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X3F);
    // 0x8023566C: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x80235670: addu        $v0, $t2, $zero
    ctx->r2 = ADD32(ctx->r10, 0);
    // 0x80235674: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80235678: bne         $v0, $zero, L_802357BC
    if (ctx->r2 != 0) {
        // 0x8023567C: sw          $v1, -0x6EE0($at)
        MEM_W(-0X6EE0, ctx->r1) = ctx->r3;
            goto L_802357BC;
    }
    // 0x8023567C: sw          $v1, -0x6EE0($at)
    MEM_W(-0X6EE0, ctx->r1) = ctx->r3;
    // 0x80235680: lw          $a0, 0x0($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X0);
    // 0x80235684: beq         $a0, $v1, L_80235698
    if (ctx->r4 == ctx->r3) {
        // 0x80235688: addu        $s4, $zero, $zero
        ctx->r20 = ADD32(0, 0);
            goto L_80235698;
    }
    // 0x80235688: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    // 0x8023568C: lw          $v0, 0x4($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X4);
    // 0x80235690: bne         $v0, $v1, L_802357BC
    if (ctx->r2 != ctx->r3) {
        // 0x80235694: nop
    
            goto L_802357BC;
    }
    // 0x80235694: nop

L_80235698:
    // 0x80235698: xor         $v0, $a0, $v1
    ctx->r2 = ctx->r4 ^ ctx->r3;
    // 0x8023569C: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x802356A0: addu        $fp, $v0, $zero
    ctx->r30 = ADD32(ctx->r2, 0);
    // 0x802356A4: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x802356A8: addu        $s2, $s6, $zero
    ctx->r18 = ADD32(ctx->r22, 0);
L_802356AC:
    // 0x802356AC: andi        $v0, $fp, 0xFF
    ctx->r2 = ctx->r30 & 0XFF;
    // 0x802356B0: beq         $v0, $zero, L_802356D8
    if (ctx->r2 == 0) {
        // 0x802356B4: nop
    
            goto L_802356D8;
    }
    // 0x802356B4: nop

    // 0x802356B8: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x802356BC: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x802356C0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802356C4: jal         0x80071A70
    // 0x802356C8: sw          $v0, -0x6EE0($at)
    MEM_W(-0X6EE0, ctx->r1) = ctx->r2;
    func_80071A70_4CE70(rdram, ctx);
        goto after_1;
    // 0x802356C8: sw          $v0, -0x6EE0($at)
    MEM_W(-0X6EE0, ctx->r1) = ctx->r2;
    after_1:
    // 0x802356CC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x802356D0: addu        $at, $at, $s3
    ctx->r1 = ADD32(ctx->r1, ctx->r19);
    // 0x802356D4: sw          $v0, 0x5088($at)
    MEM_W(0X5088, ctx->r1) = ctx->r2;
L_802356D8:
    // 0x802356D8: jal         0x8004F2C4
    // 0x802356DC: nop

    func_8004F2C4_2A6C4(rdram, ctx);
        goto after_2;
    // 0x802356DC: nop

    after_2:
    // 0x802356E0: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x802356E4: beq         $s1, $zero, L_802357AC
    if (ctx->r17 == 0) {
        // 0x802356E8: addiu       $t3, $zero, 0x1
        ctx->r11 = ADD32(0, 0X1);
            goto L_802357AC;
    }
    // 0x802356E8: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x802356EC: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x802356F0: sb          $t3, 0x3F($sp)
    MEM_B(0X3F, ctx->r29) = ctx->r11;
    // 0x802356F4: addiu       $t3, $zero, 0x35
    ctx->r11 = ADD32(0, 0X35);
    // 0x802356F8: sb          $t2, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r10;
    // 0x802356FC: bne         $s4, $zero, L_8023570C
    if (ctx->r20 != 0) {
        // 0x80235700: sb          $t3, 0x2($s1)
        MEM_B(0X2, ctx->r17) = ctx->r11;
            goto L_8023570C;
    }
    // 0x80235700: sb          $t3, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r11;
    // 0x80235704: j           L_80235714
    // 0x80235708: sb          $zero, 0x3($s1)
    MEM_B(0X3, ctx->r17) = 0;
        goto L_80235714;
    // 0x80235708: sb          $zero, 0x3($s1)
    MEM_B(0X3, ctx->r17) = 0;
L_8023570C:
    // 0x8023570C: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x80235710: sb          $t2, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r10;
L_80235714:
    // 0x80235714: lbu         $v0, 0xF($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XF);
    // 0x80235718: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023571C: addiu       $a1, $s1, 0xD
    ctx->r5 = ADD32(ctx->r17, 0XD);
    // 0x80235720: jal         0x8004D5D4
    // 0x80235724: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_3;
    // 0x80235724: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
    after_3:
    // 0x80235728: lbu         $v0, 0xE($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XE);
    // 0x8023572C: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x80235730: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235734: jal         0x8002C678
    // 0x80235738: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
    func_8002C678_7A78(rdram, ctx);
        goto after_4;
    // 0x80235738: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
    after_4:
    // 0x8023573C: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80235740: addu        $v1, $v1, $s3
    ctx->r3 = ADD32(ctx->r3, ctx->r19);
    // 0x80235744: lhu         $v1, 0x5080($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X5080);
    // 0x80235748: lhu         $v0, 0x8($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X8);
    // 0x8023574C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80235750: sh          $v1, 0x38($s1)
    MEM_H(0X38, ctx->r17) = ctx->r3;
    // 0x80235754: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80235758: addu        $v1, $v1, $s3
    ctx->r3 = ADD32(ctx->r3, ctx->r19);
    // 0x8023575C: lhu         $v1, 0x5084($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X5084);
    // 0x80235760: lhu         $v0, 0xC($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XC);
    // 0x80235764: lb          $a0, 0xC($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XC);
    // 0x80235768: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023576C: sh          $v1, 0x3C($s1)
    MEM_H(0X3C, ctx->r17) = ctx->r3;
    // 0x80235770: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80235774: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x80235778: lhu         $v0, 0x5082($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X5082);
    // 0x8023577C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80235780: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    // 0x80235784: jal         0x800319B4
    // 0x80235788: sh          $v0, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r2;
    func_800319B4_CDB4(rdram, ctx);
        goto after_5;
    // 0x80235788: sh          $v0, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r2;
    after_5:
    // 0x8023578C: sw          $s5, 0x44($s1)
    MEM_W(0X44, ctx->r17) = ctx->r21;
    // 0x80235790: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80235794: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x80235798: lw          $v0, 0x5088($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X5088);
    // 0x8023579C: sw          $v0, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r2;
    // 0x802357A0: jal         0x80071A70
    // 0x802357A4: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    func_80071A70_4CE70(rdram, ctx);
        goto after_6;
    // 0x802357A4: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    after_6:
    // 0x802357A8: sw          $v0, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r2;
L_802357AC:
    // 0x802357AC: addiu       $s4, $s4, 0x2
    ctx->r20 = ADD32(ctx->r20, 0X2);
    // 0x802357B0: slti        $v0, $s4, 0x4
    ctx->r2 = SIGNED(ctx->r20) < 0X4 ? 1 : 0;
    // 0x802357B4: bne         $v0, $zero, L_802356AC
    if (ctx->r2 != 0) {
        // 0x802357B8: addiu       $s2, $s2, 0x20
        ctx->r18 = ADD32(ctx->r18, 0X20);
            goto L_802356AC;
    }
    // 0x802357B8: addiu       $s2, $s2, 0x20
    ctx->r18 = ADD32(ctx->r18, 0X20);
L_802357BC:
    // 0x802357BC: lbu         $t3, 0x47($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X47);
    // 0x802357C0: addu        $v0, $t3, $zero
    ctx->r2 = ADD32(ctx->r11, 0);
    // 0x802357C4: bne         $v0, $zero, L_8023591C
    if (ctx->r2 != 0) {
        // 0x802357C8: nop
    
            goto L_8023591C;
    }
    // 0x802357C8: nop

    // 0x802357CC: lw          $a0, 0x10($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X10);
    // 0x802357D0: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x802357D4: lw          $v1, -0x6EE0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6EE0);
    // 0x802357D8: beq         $a0, $v1, L_802357EC
    if (ctx->r4 == ctx->r3) {
        // 0x802357DC: addiu       $s4, $zero, 0x1
        ctx->r20 = ADD32(0, 0X1);
            goto L_802357EC;
    }
    // 0x802357DC: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    // 0x802357E0: lw          $v0, 0x14($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X14);
    // 0x802357E4: bne         $v0, $v1, L_8023591C
    if (ctx->r2 != ctx->r3) {
        // 0x802357E8: nop
    
            goto L_8023591C;
    }
    // 0x802357E8: nop

L_802357EC:
    // 0x802357EC: xor         $v0, $a0, $v1
    ctx->r2 = ctx->r4 ^ ctx->r3;
    // 0x802357F0: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x802357F4: addu        $fp, $v0, $zero
    ctx->r30 = ADD32(ctx->r2, 0);
    // 0x802357F8: sll         $v0, $s5, 1
    ctx->r2 = S32(ctx->r21 << 1);
    // 0x802357FC: addu        $v0, $v0, $s5
    ctx->r2 = ADD32(ctx->r2, ctx->r21);
    // 0x80235800: sll         $s3, $v0, 2
    ctx->r19 = S32(ctx->r2 << 2);
    // 0x80235804: addiu       $s2, $s6, 0x10
    ctx->r18 = ADD32(ctx->r22, 0X10);
L_80235808:
    // 0x80235808: andi        $v0, $fp, 0xFF
    ctx->r2 = ctx->r30 & 0XFF;
    // 0x8023580C: beq         $v0, $zero, L_80235834
    if (ctx->r2 == 0) {
        // 0x80235810: nop
    
            goto L_80235834;
    }
    // 0x80235810: nop

    // 0x80235814: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x80235818: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x8023581C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80235820: jal         0x80071A70
    // 0x80235824: sw          $v0, -0x6EE0($at)
    MEM_W(-0X6EE0, ctx->r1) = ctx->r2;
    func_80071A70_4CE70(rdram, ctx);
        goto after_7;
    // 0x80235824: sw          $v0, -0x6EE0($at)
    MEM_W(-0X6EE0, ctx->r1) = ctx->r2;
    after_7:
    // 0x80235828: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8023582C: addu        $at, $at, $s3
    ctx->r1 = ADD32(ctx->r1, ctx->r19);
    // 0x80235830: sw          $v0, 0x5088($at)
    MEM_W(0X5088, ctx->r1) = ctx->r2;
L_80235834:
    // 0x80235834: jal         0x8004F2C4
    // 0x80235838: nop

    func_8004F2C4_2A6C4(rdram, ctx);
        goto after_8;
    // 0x80235838: nop

    after_8:
    // 0x8023583C: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80235840: beq         $s1, $zero, L_8023590C
    if (ctx->r17 == 0) {
        // 0x80235844: addiu       $t2, $zero, 0x1
        ctx->r10 = ADD32(0, 0X1);
            goto L_8023590C;
    }
    // 0x80235844: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80235848: addiu       $t3, $zero, 0x5
    ctx->r11 = ADD32(0, 0X5);
    // 0x8023584C: sb          $t2, 0x47($sp)
    MEM_B(0X47, ctx->r29) = ctx->r10;
    // 0x80235850: addiu       $t2, $zero, 0x35
    ctx->r10 = ADD32(0, 0X35);
    // 0x80235854: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80235858: sb          $t3, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r11;
    // 0x8023585C: bne         $s4, $v0, L_8023586C
    if (ctx->r20 != ctx->r2) {
        // 0x80235860: sb          $t2, 0x2($s1)
        MEM_B(0X2, ctx->r17) = ctx->r10;
            goto L_8023586C;
    }
    // 0x80235860: sb          $t2, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r10;
    // 0x80235864: j           L_80235874
    // 0x80235868: sb          $zero, 0x3($s1)
    MEM_B(0X3, ctx->r17) = 0;
        goto L_80235874;
    // 0x80235868: sb          $zero, 0x3($s1)
    MEM_B(0X3, ctx->r17) = 0;
L_8023586C:
    // 0x8023586C: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x80235870: sb          $t3, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r11;
L_80235874:
    // 0x80235874: lbu         $v0, 0xF($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XF);
    // 0x80235878: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023587C: addiu       $a1, $s1, 0xD
    ctx->r5 = ADD32(ctx->r17, 0XD);
    // 0x80235880: jal         0x8004D5D4
    // 0x80235884: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_9;
    // 0x80235884: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
    after_9:
    // 0x80235888: lbu         $v0, 0xE($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XE);
    // 0x8023588C: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x80235890: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235894: jal         0x8002C678
    // 0x80235898: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
    func_8002C678_7A78(rdram, ctx);
        goto after_10;
    // 0x80235898: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
    after_10:
    // 0x8023589C: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x802358A0: addu        $v1, $v1, $s3
    ctx->r3 = ADD32(ctx->r3, ctx->r19);
    // 0x802358A4: lhu         $v1, 0x5080($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X5080);
    // 0x802358A8: lhu         $v0, 0x8($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X8);
    // 0x802358AC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802358B0: sh          $v1, 0x38($s1)
    MEM_H(0X38, ctx->r17) = ctx->r3;
    // 0x802358B4: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x802358B8: addu        $v1, $v1, $s3
    ctx->r3 = ADD32(ctx->r3, ctx->r19);
    // 0x802358BC: lhu         $v1, 0x5084($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X5084);
    // 0x802358C0: lhu         $v0, 0xC($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XC);
    // 0x802358C4: lb          $a0, 0xC($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XC);
    // 0x802358C8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802358CC: sh          $v1, 0x3C($s1)
    MEM_H(0X3C, ctx->r17) = ctx->r3;
    // 0x802358D0: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x802358D4: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x802358D8: lhu         $v0, 0x5082($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X5082);
    // 0x802358DC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x802358E0: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    // 0x802358E4: jal         0x800319B4
    // 0x802358E8: sh          $v0, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r2;
    func_800319B4_CDB4(rdram, ctx);
        goto after_11;
    // 0x802358E8: sh          $v0, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r2;
    after_11:
    // 0x802358EC: sw          $s5, 0x44($s1)
    MEM_W(0X44, ctx->r17) = ctx->r21;
    // 0x802358F0: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x802358F4: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x802358F8: lw          $v0, 0x5088($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X5088);
    // 0x802358FC: sw          $v0, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r2;
    // 0x80235900: jal         0x80071A70
    // 0x80235904: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    func_80071A70_4CE70(rdram, ctx);
        goto after_12;
    // 0x80235904: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    after_12:
    // 0x80235908: sw          $v0, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r2;
L_8023590C:
    // 0x8023590C: addiu       $s4, $s4, 0x2
    ctx->r20 = ADD32(ctx->r20, 0X2);
    // 0x80235910: slti        $v0, $s4, 0x4
    ctx->r2 = SIGNED(ctx->r20) < 0X4 ? 1 : 0;
    // 0x80235914: bne         $v0, $zero, L_80235808
    if (ctx->r2 != 0) {
        // 0x80235918: addiu       $s2, $s2, 0x20
        ctx->r18 = ADD32(ctx->r18, 0X20);
            goto L_80235808;
    }
    // 0x80235918: addiu       $s2, $s2, 0x20
    ctx->r18 = ADD32(ctx->r18, 0X20);
L_8023591C:
    // 0x8023591C: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80235920: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x80235924: slt         $v0, $s7, $t2
    ctx->r2 = SIGNED(ctx->r23) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x80235928: bne         $v0, $zero, L_8023560C
    if (ctx->r2 != 0) {
        // 0x8023592C: nop
    
            goto L_8023560C;
    }
    // 0x8023592C: nop

L_80235930:
    // 0x80235930: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80235934: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80235938: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
    // 0x8023593C: slt         $v0, $t3, $t2
    ctx->r2 = SIGNED(ctx->r11) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x80235940: bne         $v0, $zero, L_802355F8
    if (ctx->r2 != 0) {
        // 0x80235944: sw          $t3, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r11;
            goto L_802355F8;
    }
    // 0x80235944: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
L_80235948:
    // 0x80235948: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x8023594C: lw          $fp, 0x68($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X68);
    // 0x80235950: lw          $s7, 0x64($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X64);
    // 0x80235954: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x80235958: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x8023595C: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x80235960: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x80235964: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x80235968: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x8023596C: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x80235970: jr          $ra
    // 0x80235974: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    TRACE_RETURN()
    return;
    // 0x80235974: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x80235978: nop

    // 0x8023597C: nop

;}
RECOMP_FUNC void func_80225424_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225424: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225428: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022542C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225430: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225434: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x80225438: beq         $v1, $zero, L_80225450
    if (ctx->r3 == 0) {
        // 0x8022543C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80225450;
    }
    // 0x8022543C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225440: beq         $v1, $v0, L_8022547C
    if (ctx->r3 == ctx->r2) {
        // 0x80225444: nop
    
            goto L_8022547C;
    }
    // 0x80225444: nop

    // 0x80225448: j           L_802254A0
    // 0x8022544C: nop

        goto L_802254A0;
    // 0x8022544C: nop

L_80225450:
    // 0x80225450: jal         0x8006033C
    // 0x80225454: addiu       $a0, $zero, 0x67
    ctx->r4 = ADD32(0, 0X67);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80225454: addiu       $a0, $zero, 0x67
    ctx->r4 = ADD32(0, 0X67);
    after_0:
    // 0x80225458: bnel        $v0, $zero, L_8022549C
    if (ctx->r2 != 0) {
        // 0x8022545C: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_8022549C;
    }
    goto skip_0;
    // 0x8022545C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    skip_0:
    // 0x80225460: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80225464: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80225468: jal         0x80060DA0
    // 0x8022546C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80060DA0_3C1A0(rdram, ctx);
        goto after_1;
    // 0x8022546C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x80225470: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225474: j           L_8022549C
    // 0x80225478: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022549C;
    // 0x80225478: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022547C:
    // 0x8022547C: jal         0x8006033C
    // 0x80225480: addiu       $a0, $zero, 0x617
    ctx->r4 = ADD32(0, 0X617);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x80225480: addiu       $a0, $zero, 0x617
    ctx->r4 = ADD32(0, 0X617);
    after_2:
    // 0x80225484: beq         $v0, $zero, L_802254A0
    if (ctx->r2 == 0) {
        // 0x80225488: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_802254A0;
    }
    // 0x80225488: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022548C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80225490: jal         0x80060DA0
    // 0x80225494: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80060DA0_3C1A0(rdram, ctx);
        goto after_3;
    // 0x80225494: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x80225498: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_8022549C:
    // 0x8022549C: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_802254A0:
    // 0x802254A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802254A4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802254A8: jr          $ra
    // 0x802254AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802254AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022DA30_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DA30: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022DA34: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022DA38: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022DA3C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022DA40: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022DA44: lb          $v1, 0x385($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X385);
    // 0x8022DA48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022DA4C: sb          $v0, 0x387($s0)
    MEM_B(0X387, ctx->r16) = ctx->r2;
    // 0x8022DA50: beq         $v1, $zero, L_8022DA8C
    if (ctx->r3 == 0) {
        // 0x8022DA54: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_8022DA8C;
    }
    // 0x8022DA54: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x8022DA58: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022DA5C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022DA60: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022DA64: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022DA68: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022DA6C: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    // 0x8022DA70: jal         0x8004F820
    // 0x8022DA74: sb          $v0, 0x385($s0)
    MEM_B(0X385, ctx->r16) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022DA74: sb          $v0, 0x385($s0)
    MEM_B(0X385, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022DA78: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022DA7C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022DA80: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022DA84: j           L_8022DADC
    // 0x8022DA88: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
        goto L_8022DADC;
    // 0x8022DA88: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_8022DA8C:
    // 0x8022DA8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022DA90: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022DA94: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022DA98: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
    // 0x8022DA9C: jal         0x80050294
    // 0x8022DAA0: sb          $s1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r17;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x8022DAA0: sb          $s1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r17;
    after_1:
    // 0x8022DAA4: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022DAA8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022DAAC: bne         $v1, $v0, L_8022DACC
    if (ctx->r3 != ctx->r2) {
        // 0x8022DAB0: addiu       $v0, $zero, 0x1E0
        ctx->r2 = ADD32(0, 0X1E0);
            goto L_8022DACC;
    }
    // 0x8022DAB0: addiu       $v0, $zero, 0x1E0
    ctx->r2 = ADD32(0, 0X1E0);
    // 0x8022DAB4: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8022DAB8: sb          $v0, 0x387($s0)
    MEM_B(0X387, ctx->r16) = ctx->r2;
    // 0x8022DABC: sb          $zero, 0x64($s0)
    MEM_B(0X64, ctx->r16) = 0;
    // 0x8022DAC0: sb          $zero, 0x65($s0)
    MEM_B(0X65, ctx->r16) = 0;
    // 0x8022DAC4: sb          $zero, 0x66($s0)
    MEM_B(0X66, ctx->r16) = 0;
    // 0x8022DAC8: addiu       $v0, $zero, 0x1E0
    ctx->r2 = ADD32(0, 0X1E0);
L_8022DACC:
    // 0x8022DACC: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022DAD0: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022DAD4: sb          $s1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r17;
    // 0x8022DAD8: sh          $v0, 0x382($s0)
    MEM_H(0X382, ctx->r16) = ctx->r2;
L_8022DADC:
    // 0x8022DADC: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022DAE0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022DAE4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022DAE8: jr          $ra
    // 0x8022DAEC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022DAEC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022724C_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022724C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80227250: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80227254: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80227258: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022725C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80227260: lbu         $a0, 0x43A($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X43A);
    // 0x80227264: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80227268: bne         $a0, $v0, L_802272C8
    if (ctx->r4 != ctx->r2) {
        // 0x8022726C: nop
    
            goto L_802272C8;
    }
    // 0x8022726C: nop

    // 0x80227270: lbu         $v0, 0xA6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA6);
    // 0x80227274: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x80227278: beq         $v0, $zero, L_80227288
    if (ctx->r2 == 0) {
        // 0x8022727C: addiu       $a0, $zero, 0x1C5
        ctx->r4 = ADD32(0, 0X1C5);
            goto L_80227288;
    }
    // 0x8022727C: addiu       $a0, $zero, 0x1C5
    ctx->r4 = ADD32(0, 0X1C5);
    // 0x80227280: jal         0x8002A33C
    // 0x80227284: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x80227284: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_0:
L_80227288:
    // 0x80227288: lb          $v1, 0xA7($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XA7);
    // 0x8022728C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80227290: bne         $v1, $v0, L_802273AC
    if (ctx->r3 != ctx->r2) {
        // 0x80227294: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_802273AC;
    }
    // 0x80227294: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80227298: lbu         $v1, 0xC($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XC);
    // 0x8022729C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802272A0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802272A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802272A8: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    // 0x802272AC: sh          $zero, 0x42E($a0)
    MEM_H(0X42E, ctx->r4) = 0;
    // 0x802272B0: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x802272B4: andi        $v1, $v1, 0xFE
    ctx->r3 = ctx->r3 & 0XFE;
    // 0x802272B8: jal         0x80050294
    // 0x802272BC: sb          $v1, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r3;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x802272BC: sb          $v1, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r3;
    after_1:
    // 0x802272C0: j           L_802273AC
    // 0x802272C4: nop

        goto L_802273AC;
    // 0x802272C4: nop

L_802272C8:
    // 0x802272C8: lb          $v0, 0xE($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XE);
    // 0x802272CC: beq         $v0, $a0, L_802272E0
    if (ctx->r2 == ctx->r4) {
        // 0x802272D0: nop
    
            goto L_802272E0;
    }
    // 0x802272D0: nop

    // 0x802272D4: lb          $v1, 0xD($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XD);
    // 0x802272D8: bne         $v1, $a0, L_80227374
    if (ctx->r3 != ctx->r4) {
        // 0x802272DC: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_80227374;
    }
    // 0x802272DC: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_802272E0:
    // 0x802272E0: jal         0x80053ED8
    // 0x802272E4: nop

    func_80053ED8_2F2D8(rdram, ctx);
        goto after_2;
    // 0x802272E4: nop

    after_2:
    // 0x802272E8: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x802272EC: lbu         $v0, 0xA6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA6);
    // 0x802272F0: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x802272F4: beq         $v0, $zero, L_80227304
    if (ctx->r2 == 0) {
        // 0x802272F8: addiu       $a0, $zero, 0x1C5
        ctx->r4 = ADD32(0, 0X1C5);
            goto L_80227304;
    }
    // 0x802272F8: addiu       $a0, $zero, 0x1C5
    ctx->r4 = ADD32(0, 0X1C5);
    // 0x802272FC: jal         0x8002A33C
    // 0x80227300: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_3;
    // 0x80227300: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_3:
L_80227304:
    // 0x80227304: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x80227308: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022730C: bne         $v1, $v0, L_802273AC
    if (ctx->r3 != ctx->r2) {
        // 0x80227310: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_802273AC;
    }
    // 0x80227310: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80227314: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x80227318: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022731C: andi        $v0, $v0, 0xDF
    ctx->r2 = ctx->r2 & 0XDF;
    // 0x80227320: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x80227324: lbu         $v1, 0xC($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XC);
    // 0x80227328: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022732C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227330: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    // 0x80227334: sh          $zero, 0x42E($s1)
    MEM_H(0X42E, ctx->r17) = 0;
    // 0x80227338: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x8022733C: andi        $v1, $v1, 0xFE
    ctx->r3 = ctx->r3 & 0XFE;
    // 0x80227340: jal         0x80050294
    // 0x80227344: sb          $v1, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r3;
    func_80050294_2B694(rdram, ctx);
        goto after_4;
    // 0x80227344: sb          $v1, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r3;
    after_4:
    // 0x80227348: lb          $v1, 0xE($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XE);
    // 0x8022734C: lbu         $v0, 0x43A($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X43A);
    // 0x80227350: bne         $v1, $v0, L_802273AC
    if (ctx->r3 != ctx->r2) {
        // 0x80227354: nop
    
            goto L_802273AC;
    }
    // 0x80227354: nop

    // 0x80227358: jal         0x80053ED8
    // 0x8022735C: lbu         $a0, 0xD($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0XD);
    func_80053ED8_2F2D8(rdram, ctx);
        goto after_5;
    // 0x8022735C: lbu         $a0, 0xD($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0XD);
    after_5:
    // 0x80227360: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80227364: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x80227368: andi        $v0, $v0, 0xFB
    ctx->r2 = ctx->r2 & 0XFB;
    // 0x8022736C: j           L_802273AC
    // 0x80227370: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
        goto L_802273AC;
    // 0x80227370: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
L_80227374:
    // 0x80227374: blez        $v1, L_80227394
    if (SIGNED(ctx->r3) <= 0) {
        // 0x80227378: nop
    
            goto L_80227394;
    }
    // 0x80227378: nop

    // 0x8022737C: jal         0x80053ED8
    // 0x80227380: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    func_80053ED8_2F2D8(rdram, ctx);
        goto after_6;
    // 0x80227380: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    after_6:
    // 0x80227384: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80227388: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x8022738C: andi        $v0, $v0, 0xFB
    ctx->r2 = ctx->r2 & 0XFB;
    // 0x80227390: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
L_80227394:
    // 0x80227394: lbu         $v0, 0xC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XC);
    // 0x80227398: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    // 0x8022739C: sh          $zero, 0x42E($s1)
    MEM_H(0X42E, ctx->r17) = 0;
    // 0x802273A0: andi        $v0, $v0, 0xFE
    ctx->r2 = ctx->r2 & 0XFE;
    // 0x802273A4: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x802273A8: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
L_802273AC:
    // 0x802273AC: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x802273B0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802273B4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802273B8: jr          $ra
    // 0x802273BC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802273BC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80230498_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230498: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023049C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802304A0: lbu         $v0, 0xB($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XB);
    // 0x802304A4: bne         $v0, $zero, L_8023051C
    if (ctx->r2 != 0) {
        // 0x802304A8: nop
    
            goto L_8023051C;
    }
    // 0x802304A8: nop

    // 0x802304AC: lhu         $v0, 0x3B2($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X3B2);
    // 0x802304B0: sb          $zero, 0x1DC($a0)
    MEM_B(0X1DC, ctx->r4) = 0;
    // 0x802304B4: andi        $v1, $v0, 0x7
    ctx->r3 = ctx->r2 & 0X7;
    // 0x802304B8: sltiu       $v0, $v1, 0x4
    ctx->r2 = ctx->r3 < 0X4 ? 1 : 0;
    // 0x802304BC: beq         $v0, $zero, L_802304DC
    if (ctx->r2 == 0) {
        // 0x802304C0: sb          $zero, 0xE($a0)
        MEM_B(0XE, ctx->r4) = 0;
            goto L_802304DC;
    }
    // 0x802304C0: sb          $zero, 0xE($a0)
    MEM_B(0XE, ctx->r4) = 0;
    // 0x802304C4: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x802304C8: sb          $v1, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r3;
    // 0x802304CC: lbu         $a1, 0xAC($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0XAC);
    // 0x802304D0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802304D4: j           L_80230510
    // 0x802304D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80230510;
    // 0x802304D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802304DC:
    // 0x802304DC: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x802304E0: beq         $v0, $zero, L_802304FC
    if (ctx->r2 == 0) {
        // 0x802304E4: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_802304FC;
    }
    // 0x802304E4: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x802304E8: sb          $v1, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r3;
    // 0x802304EC: lbu         $a1, 0xAC($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0XAC);
    // 0x802304F0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802304F4: j           L_80230510
    // 0x802304F8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80230510;
    // 0x802304F8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_802304FC:
    // 0x802304FC: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x80230500: sb          $v1, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r3;
    // 0x80230504: lbu         $a1, 0xAC($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0XAC);
    // 0x80230508: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023050C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80230510:
    // 0x80230510: sb          $v0, 0xB($a0)
    MEM_B(0XB, ctx->r4) = ctx->r2;
    // 0x80230514: jal         0x80050294
    // 0x80230518: sb          $v1, 0xAD($a0)
    MEM_B(0XAD, ctx->r4) = ctx->r3;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80230518: sb          $v1, 0xAD($a0)
    MEM_B(0XAD, ctx->r4) = ctx->r3;
    after_0:
L_8023051C:
    // 0x8023051C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80230520: jr          $ra
    // 0x80230524: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80230524: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80236780_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236780: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80236784: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80236788: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8023678C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80236790: addiu       $s0, $zero, 0x1F
    ctx->r16 = ADD32(0, 0X1F);
    // 0x80236794: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80236798: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x8023679C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
L_802367A0:
    // 0x802367A0: jal         0x8004F374
    // 0x802367A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F374_2A774(rdram, ctx);
        goto after_0;
    // 0x802367A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x802367A8: beql        $v0, $zero, L_802367BC
    if (ctx->r2 == 0) {
        // 0x802367AC: addiu       $s0, $s0, -0x1
        ctx->r16 = ADD32(ctx->r16, -0X1);
            goto L_802367BC;
    }
    goto skip_0;
    // 0x802367AC: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    skip_0:
    // 0x802367B0: sb          $s1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r17;
    // 0x802367B4: j           L_802367C4
    // 0x802367B8: sb          $zero, 0x2($v0)
    MEM_B(0X2, ctx->r2) = 0;
        goto L_802367C4;
    // 0x802367B8: sb          $zero, 0x2($v0)
    MEM_B(0X2, ctx->r2) = 0;
L_802367BC:
    // 0x802367BC: bgez        $s0, L_802367A0
    if (SIGNED(ctx->r16) >= 0) {
        // 0x802367C0: nop
    
            goto L_802367A0;
    }
    // 0x802367C0: nop

L_802367C4:
    // 0x802367C4: jal         0x8004F62C
    // 0x802367C8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8004F62C_2AA2C(rdram, ctx);
        goto after_1;
    // 0x802367C8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_1:
    // 0x802367CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802367D0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802367D4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802367D8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802367DC: jr          $ra
    // 0x802367E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802367E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802367E4: nop

    // 0x802367E8: nop

    // 0x802367EC: nop

;}
RECOMP_FUNC void func_80235E30_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235E30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80235E34: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80235E38: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80235E3C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80235E40: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80235E44: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80235E48: lw          $v0, -0x72D8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X72D8);
    // 0x80235E4C: jalr        $v0
    // 0x80235E50: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80235E50: nop

    after_0:
    // 0x80235E54: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80235E58: jr          $ra
    // 0x80235E5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80235E5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E53C_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E53C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E540: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8022E544: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022E548: lb          $v1, 0xA6($a1)
    ctx->r3 = MEM_B(ctx->r5, 0XA6);
    // 0x8022E54C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E550: bne         $v1, $v0, L_8022E574
    if (ctx->r3 != ctx->r2) {
        // 0x8022E554: addiu       $v0, $zero, -0x200
        ctx->r2 = ADD32(0, -0X200);
            goto L_8022E574;
    }
    // 0x8022E554: addiu       $v0, $zero, -0x200
    ctx->r2 = ADD32(0, -0X200);
    // 0x8022E558: sh          $v0, 0x46($a1)
    MEM_H(0X46, ctx->r5) = ctx->r2;
    // 0x8022E55C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E560: addiu       $a0, $zero, 0x15F
    ctx->r4 = ADD32(0, 0X15F);
    // 0x8022E564: sb          $v0, 0xA($a1)
    MEM_B(0XA, ctx->r5) = ctx->r2;
    // 0x8022E568: sb          $v0, 0x74($a1)
    MEM_B(0X74, ctx->r5) = ctx->r2;
    // 0x8022E56C: jal         0x8002A33C
    // 0x8022E570: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x8022E570: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_0:
L_8022E574:
    // 0x8022E574: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022E578: jr          $ra
    // 0x8022E57C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E57C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022C368_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C368: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022C36C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C370: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C374: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022C378: lhu         $v0, 0x36E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X36E);
    // 0x8022C37C: sh          $zero, 0x330($s0)
    MEM_H(0X330, ctx->r16) = 0;
    // 0x8022C380: addiu       $v0, $v0, 0x40
    ctx->r2 = ADD32(ctx->r2, 0X40);
    // 0x8022C384: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022C388: jal         0x8003E934
    // 0x8022C38C: sh          $v0, 0x36E($s0)
    MEM_H(0X36E, ctx->r16) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_0;
    // 0x8022C38C: sh          $v0, 0x36E($s0)
    MEM_H(0X36E, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022C390: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022C394: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C398: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022C39C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022C3A0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C3A4: jr          $ra
    // 0x8022C3A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022C3A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80236DF8_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236DF8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80236DFC: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80236E00: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80236E04: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x80236E08: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80236E0C: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x80236E10: lbu         $a0, 0x8($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X8);
    // 0x80236E14: addiu       $v1, $zero, 0x4210
    ctx->r3 = ADD32(0, 0X4210);
    // 0x80236E18: addiu       $s1, $s0, 0x308
    ctx->r17 = ADD32(ctx->r16, 0X308);
    // 0x80236E1C: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x80236E20: beq         $a0, $zero, L_80236E54
    if (ctx->r4 == 0) {
        // 0x80236E24: sb          $v0, 0xAD($s0)
        MEM_B(0XAD, ctx->r16) = ctx->r2;
            goto L_80236E54;
    }
    // 0x80236E24: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x80236E28: addiu       $a0, $s0, 0x328
    ctx->r4 = ADD32(ctx->r16, 0X328);
    // 0x80236E2C: jal         0x800540D0
    // 0x80236E30: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_800540D0_2F4D0(rdram, ctx);
        goto after_0;
    // 0x80236E30: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80236E34: beq         $v0, $zero, L_80236E48
    if (ctx->r2 == 0) {
        // 0x80236E38: nop
    
            goto L_80236E48;
    }
    // 0x80236E38: nop

    // 0x80236E3C: lhu         $v0, 0x308($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X308);
    // 0x80236E40: j           L_80236E50
    // 0x80236E44: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
        goto L_80236E50;
    // 0x80236E44: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
L_80236E48:
    // 0x80236E48: lhu         $v0, 0x308($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X308);
    // 0x80236E4C: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
L_80236E50:
    // 0x80236E50: sh          $v0, 0x308($s0)
    MEM_H(0X308, ctx->r16) = ctx->r2;
L_80236E54:
    // 0x80236E54: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80236E58: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80236E5C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80236E60: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80236E64: lw          $v0, -0x7288($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7288);
    // 0x80236E68: jalr        $v0
    // 0x80236E6C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x80236E6C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80236E70: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80236E74: bne         $v0, $zero, L_80236E98
    if (ctx->r2 != 0) {
        // 0x80236E78: addiu       $a0, $s1, 0x8
        ctx->r4 = ADD32(ctx->r17, 0X8);
            goto L_80236E98;
    }
    // 0x80236E78: addiu       $a0, $s1, 0x8
    ctx->r4 = ADD32(ctx->r17, 0X8);
    // 0x80236E7C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236E80: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80236E84: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x80236E88: jal         0x80047284
    // 0x80236E8C: lui         $a3, 0x100
    ctx->r7 = S32(0X100 << 16);
    func_80047284_22684(rdram, ctx);
        goto after_2;
    // 0x80236E8C: lui         $a3, 0x100
    ctx->r7 = S32(0X100 << 16);
    after_2:
    // 0x80236E90: j           L_80236EC8
    // 0x80236E94: nop

        goto L_80236EC8;
    // 0x80236E94: nop

L_80236E98:
    // 0x80236E98: lh          $a1, 0x16($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X16);
    // 0x80236E9C: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80236EA0: addiu       $v0, $s1, 0x18
    ctx->r2 = ADD32(ctx->r17, 0X18);
    // 0x80236EA4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80236EA8: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x80236EAC: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x80236EB0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80236EB4: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x80236EB8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80236EBC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80236EC0: jal         0x80051E18
    // 0x80236EC4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80051E18_2D218(rdram, ctx);
        goto after_3;
    // 0x80236EC4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_3:
L_80236EC8:
    // 0x80236EC8: lbu         $v1, 0xAD($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XAD);
    // 0x80236ECC: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x80236ED0: bnel        $v1, $v0, L_80236EE4
    if (ctx->r3 != ctx->r2) {
        // 0x80236ED4: sw          $zero, 0x18($s1)
        MEM_W(0X18, ctx->r17) = 0;
            goto L_80236EE4;
    }
    goto skip_0;
    // 0x80236ED4: sw          $zero, 0x18($s1)
    MEM_W(0X18, ctx->r17) = 0;
    skip_0:
    // 0x80236ED8: jal         0x8005044C
    // 0x80236EDC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_4;
    // 0x80236EDC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80236EE0: sw          $zero, 0x18($s1)
    MEM_W(0X18, ctx->r17) = 0;
L_80236EE4:
    // 0x80236EE4: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x80236EE8: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80236EEC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80236EF0: jr          $ra
    // 0x80236EF4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80236EF4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80235E60_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235E60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80235E64: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80235E68: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80235E6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80235E70: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80235E74: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80235E78: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80235E7C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80235E80: lw          $v0, -0x7408($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7408);
    // 0x80235E84: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80235E88: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x80235E8C: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80235E90: lbu         $v0, 0x2($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X2);
    // 0x80235E94: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x80235E98: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x80235E9C: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x80235EA0: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80235EA4: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x80235EA8: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x80235EAC: lbu         $v0, 0x1($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X1);
    // 0x80235EB0: jal         0x80236304
    // 0x80235EB4: sh          $v0, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r2;
    func_80236304_ovl31(rdram, ctx);
        goto after_0;
    // 0x80235EB4: sh          $v0, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r2;
    after_0:
    // 0x80235EB8: beq         $v0, $zero, L_80235ECC
    if (ctx->r2 == 0) {
        // 0x80235EBC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80235ECC;
    }
    // 0x80235EBC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80235EC0: jal         0x8004F62C
    // 0x80235EC4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F62C_2AA2C(rdram, ctx);
        goto after_1;
    // 0x80235EC4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80235EC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80235ECC:
    // 0x80235ECC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80235ED0: jal         0x80235F4C
    // 0x80235ED4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80235F4C_ovl31(rdram, ctx);
        goto after_2;
    // 0x80235ED4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80235ED8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80235EDC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80235EE0: jr          $ra
    // 0x80235EE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80235EE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802341F0_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802341F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802341F4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802341F8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x802341FC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80234200: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234204: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80234208: lw          $v0, -0x78E0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X78E0);
    // 0x8023420C: jalr        $v0
    // 0x80234210: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80234210: nop

    after_0:
    // 0x80234214: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80234218: jr          $ra
    // 0x8023421C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023421C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
