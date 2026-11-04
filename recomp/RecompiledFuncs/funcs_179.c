#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8022BBA4_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BBA4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022BBA8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022BBAC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022BBB0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022BBB4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022BBB8: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022BBBC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022BBC0: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8022BBC4: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8022BBC8: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x8022BBCC: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x8022BBD0: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
    // 0x8022BBD4: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022BBD8: jal         0x8004D5D4
    // 0x8022BBDC: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022BBDC: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022BBE0: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022BBE4: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022BBE8: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x8022BBEC: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022BBF0: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022BBF4: andi        $v1, $v1, 0x20
    ctx->r3 = ctx->r3 & 0X20;
    // 0x8022BBF8: beq         $v1, $zero, L_8022BC08
    if (ctx->r3 == 0) {
        // 0x8022BBFC: sh          $v0, 0x158($s0)
        MEM_H(0X158, ctx->r16) = ctx->r2;
            goto L_8022BC08;
    }
    // 0x8022BBFC: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022BC00: j           L_8022BC10
    // 0x8022BC04: sh          $zero, 0x328($s0)
    MEM_H(0X328, ctx->r16) = 0;
        goto L_8022BC10;
    // 0x8022BC04: sh          $zero, 0x328($s0)
    MEM_H(0X328, ctx->r16) = 0;
L_8022BC08:
    // 0x8022BC08: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x8022BC0C: sh          $v0, 0x328($s0)
    MEM_H(0X328, ctx->r16) = ctx->r2;
L_8022BC10:
    // 0x8022BC10: sw          $zero, 0x4($s1)
    MEM_W(0X4, ctx->r17) = 0;
    // 0x8022BC14: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x8022BC18: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8022BC1C: beq         $v0, $zero, L_8022BC28
    if (ctx->r2 == 0) {
        // 0x8022BC20: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022BC28;
    }
    // 0x8022BC20: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022BC24: sh          $v0, 0x6($s1)
    MEM_H(0X6, ctx->r17) = ctx->r2;
L_8022BC28:
    // 0x8022BC28: sw          $zero, 0x8($s1)
    MEM_W(0X8, ctx->r17) = 0;
    // 0x8022BC2C: sw          $zero, 0x14($s1)
    MEM_W(0X14, ctx->r17) = 0;
    // 0x8022BC30: sw          $zero, 0x18($s1)
    MEM_W(0X18, ctx->r17) = 0;
    // 0x8022BC34: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x8022BC38: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x8022BC3C: lw          $v0, 0x298($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X298);
    // 0x8022BC40: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022BC44: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022BC48: lh          $v0, 0x6($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X6);
    // 0x8022BC4C: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x8022BC50: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022BC54: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022BC58: lbu         $a1, 0xF($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0XF);
    // 0x8022BC5C: addiu       $a0, $s1, 0x24
    ctx->r4 = ADD32(ctx->r17, 0X24);
    // 0x8022BC60: jal         0x800540BC
    // 0x8022BC64: addiu       $a2, $zero, -0x60
    ctx->r6 = ADD32(0, -0X60);
    func_800540BC_2F4BC(rdram, ctx);
        goto after_1;
    // 0x8022BC64: addiu       $a2, $zero, -0x60
    ctx->r6 = ADD32(0, -0X60);
    after_1:
    // 0x8022BC68: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022BC6C: sh          $zero, 0x34($s1)
    MEM_H(0X34, ctx->r17) = 0;
    // 0x8022BC70: sh          $zero, 0x36($s1)
    MEM_H(0X36, ctx->r17) = 0;
    // 0x8022BC74: sh          $v0, 0x38($s1)
    MEM_H(0X38, ctx->r17) = ctx->r2;
    // 0x8022BC78: lhu         $v0, 0x1A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1A);
    // 0x8022BC7C: sw          $zero, 0x40($s1)
    MEM_W(0X40, ctx->r17) = 0;
    // 0x8022BC80: sh          $zero, 0x44($s1)
    MEM_H(0X44, ctx->r17) = 0;
    // 0x8022BC84: sw          $zero, 0x48($s1)
    MEM_W(0X48, ctx->r17) = 0;
    // 0x8022BC88: sh          $v0, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r2;
    // 0x8022BC8C: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x8022BC90: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x8022BC94: lw          $v0, 0x298($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X298);
    // 0x8022BC98: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022BC9C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022BCA0: lh          $v0, 0x6($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X6);
    // 0x8022BCA4: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x8022BCA8: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022BCAC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022BCB0: lbu         $v1, 0x8($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X8);
    // 0x8022BCB4: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x8022BCB8: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x8022BCBC: andi        $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 & 0X7F;
    // 0x8022BCC0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022BCC4: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022BCC8: mflo        $v1
    ctx->r3 = lo;
    // 0x8022BCCC: lbu         $a0, 0x3($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X3);
    // 0x8022BCD0: andi        $a0, $a0, 0x40
    ctx->r4 = ctx->r4 & 0X40;
    // 0x8022BCD4: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x8022BCD8: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8022BCDC: addiu       $v0, $v0, 0x3038
    ctx->r2 = ADD32(ctx->r2, 0X3038);
    // 0x8022BCE0: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x8022BCE4: sh          $v1, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r3;
    // 0x8022BCE8: sh          $v1, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r3;
    // 0x8022BCEC: beq         $a0, $zero, L_8022BD2C
    if (ctx->r4 == 0) {
        // 0x8022BCF0: sh          $v1, 0xB2($s0)
        MEM_H(0XB2, ctx->r16) = ctx->r3;
            goto L_8022BD2C;
    }
    // 0x8022BCF0: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    // 0x8022BCF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BCF8: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x8022BCFC: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x8022BD00: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022BD04: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022BD08: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    // 0x8022BD0C: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x8022BD10: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    // 0x8022BD14: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8022BD18: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    // 0x8022BD1C: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022BD20: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022BD24: j           L_8022BD5C
    // 0x8022BD28: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
        goto L_8022BD5C;
    // 0x8022BD28: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_8022BD2C:
    // 0x8022BD2C: jal         0x8003E934
    // 0x8022BD30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_2;
    // 0x8022BD30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022BD34: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BD38: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022BD3C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022BD40: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022BD44: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022BD48: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022BD4C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022BD50: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022BD54: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022BD58: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8022BD5C:
    // 0x8022BD5C: jal         0x80050294
    // 0x8022BD60: nop

    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x8022BD60: nop

    after_3:
    // 0x8022BD64: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022BD68: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022BD6C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022BD70: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022BD74: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022BD78: jr          $ra
    // 0x8022BD7C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022BD7C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023669C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023669C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802366A0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802366A4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802366A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802366AC: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802366B0: beq         $v1, $zero, L_802366C8
    if (ctx->r3 == 0) {
        // 0x802366B4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802366C8;
    }
    // 0x802366B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802366B8: beq         $v1, $v0, L_802366F4
    if (ctx->r3 == ctx->r2) {
        // 0x802366BC: addiu       $v0, $zero, 0x1A
        ctx->r2 = ADD32(0, 0X1A);
            goto L_802366F4;
    }
    // 0x802366BC: addiu       $v0, $zero, 0x1A
    ctx->r2 = ADD32(0, 0X1A);
    // 0x802366C0: j           L_80236758
    // 0x802366C4: nop

        goto L_80236758;
    // 0x802366C4: nop

L_802366C8:
    // 0x802366C8: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x802366CC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802366D0: bne         $v1, $v0, L_80236758
    if (ctx->r3 != ctx->r2) {
        // 0x802366D4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80236758;
    }
    // 0x802366D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802366D8: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
    // 0x802366DC: jal         0x80236A60
    // 0x802366E0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80236A60_ovl28(rdram, ctx);
        goto after_0;
    // 0x802366E0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_0:
    // 0x802366E4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802366E8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802366EC: j           L_80236758
    // 0x802366F0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_80236758;
    // 0x802366F0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802366F4:
    // 0x802366F4: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x802366F8: bne         $v1, $v0, L_8023672C
    if (ctx->r3 != ctx->r2) {
        // 0x802366FC: addiu       $v0, $zero, 0x1F
        ctx->r2 = ADD32(0, 0X1F);
            goto L_8023672C;
    }
    // 0x802366FC: addiu       $v0, $zero, 0x1F
    ctx->r2 = ADD32(0, 0X1F);
    // 0x80236700: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x80236704: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x80236708: bne         $v1, $v0, L_80236728
    if (ctx->r3 != ctx->r2) {
        // 0x8023670C: addiu       $v0, $zero, 0x1F
        ctx->r2 = ADD32(0, 0X1F);
            goto L_80236728;
    }
    // 0x8023670C: addiu       $v0, $zero, 0x1F
    ctx->r2 = ADD32(0, 0X1F);
    // 0x80236710: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236714: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
    // 0x80236718: jal         0x80236A60
    // 0x8023671C: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    func_80236A60_ovl28(rdram, ctx);
        goto after_1;
    // 0x8023671C: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    after_1:
    // 0x80236720: j           L_80236758
    // 0x80236724: nop

        goto L_80236758;
    // 0x80236724: nop

L_80236728:
    // 0x80236728: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
L_8023672C:
    // 0x8023672C: bne         $v1, $v0, L_80236758
    if (ctx->r3 != ctx->r2) {
        // 0x80236730: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80236758;
    }
    // 0x80236730: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80236734: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x80236738: bne         $v1, $v0, L_80236758
    if (ctx->r3 != ctx->r2) {
        // 0x8023673C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80236758;
    }
    // 0x8023673C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236740: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
    // 0x80236744: jal         0x80236A60
    // 0x80236748: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80236A60_ovl28(rdram, ctx);
        goto after_2;
    // 0x80236748: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_2:
    // 0x8023674C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80236750: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80236754: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_80236758:
    // 0x80236758: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023675C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80236760: jr          $ra
    // 0x80236764: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80236764: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802488A0_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802488A0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802488A4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802488A8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802488AC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802488B0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802488B4: lbu         $a0, 0x9($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X9);
    // 0x802488B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802488BC: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x802488C0: beq         $v1, $v0, L_80248914
    if (ctx->r3 == ctx->r2) {
        // 0x802488C4: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80248914;
    }
    // 0x802488C4: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x802488C8: beql        $v0, $zero, L_802488E0
    if (ctx->r2 == 0) {
        // 0x802488CC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802488E0;
    }
    goto skip_0;
    // 0x802488CC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x802488D0: beq         $v1, $zero, L_802488F8
    if (ctx->r3 == 0) {
        // 0x802488D4: nop
    
            goto L_802488F8;
    }
    // 0x802488D4: nop

    // 0x802488D8: j           L_80248A48
    // 0x802488DC: nop

        goto L_80248A48;
    // 0x802488DC: nop

L_802488E0:
    // 0x802488E0: beq         $v1, $v0, L_80248964
    if (ctx->r3 == ctx->r2) {
        // 0x802488E4: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80248964;
    }
    // 0x802488E4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802488E8: beq         $v1, $v0, L_802489B8
    if (ctx->r3 == ctx->r2) {
        // 0x802488EC: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_802489B8;
    }
    // 0x802488EC: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x802488F0: j           L_80248A48
    // 0x802488F4: nop

        goto L_80248A48;
    // 0x802488F4: nop

L_802488F8:
    // 0x802488F8: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x802488FC: lw          $v0, -0x3AA4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3AA4);
    // 0x80248900: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80248904: beq         $v0, $zero, L_80248A48
    if (ctx->r2 == 0) {
        // 0x80248908: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_80248A48;
    }
    // 0x80248908: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8024890C: j           L_80248A48
    // 0x80248910: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
        goto L_80248A48;
    // 0x80248910: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_80248914:
    // 0x80248914: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80248918: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8024891C: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80248920: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80248924: bne         $v0, $zero, L_80248A48
    if (ctx->r2 != 0) {
        // 0x80248928: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80248A48;
    }
    // 0x80248928: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8024892C: jal         0x800616FC
    // 0x80248930: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_0;
    // 0x80248930: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_0:
    // 0x80248934: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x80248938: addiu       $a1, $a1, -0x3AA4
    ctx->r5 = ADD32(ctx->r5, -0X3AA4);
    // 0x8024893C: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80248940: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x80248944: addiu       $a2, $a2, 0x4A6D
    ctx->r6 = ADD32(ctx->r6, 0X4A6D);
    // 0x80248948: lbu         $a0, 0x0($a2)
    ctx->r4 = MEM_BU(ctx->r6, 0X0);
    // 0x8024894C: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
    // 0x80248950: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80248954: ori         $a0, $a0, 0x40
    ctx->r4 = ctx->r4 | 0X40;
    // 0x80248958: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x8024895C: j           L_8024898C
    // 0x80248960: sb          $a0, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r4;
        goto L_8024898C;
    // 0x80248960: sb          $a0, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r4;
L_80248964:
    // 0x80248964: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80248968: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8024896C: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80248970: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80248974: bne         $v0, $zero, L_80248A48
    if (ctx->r2 != 0) {
        // 0x80248978: nop
    
            goto L_80248A48;
    }
    // 0x80248978: nop

    // 0x8024897C: jal         0x8006033C
    // 0x80248980: addiu       $a0, $zero, 0x5A
    ctx->r4 = ADD32(0, 0X5A);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x80248980: addiu       $a0, $zero, 0x5A
    ctx->r4 = ADD32(0, 0X5A);
    after_1:
    // 0x80248984: beq         $v0, $zero, L_8024899C
    if (ctx->r2 == 0) {
        // 0x80248988: nop
    
            goto L_8024899C;
    }
    // 0x80248988: nop

L_8024898C:
    // 0x8024898C: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x80248990: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80248994: j           L_80248A48
    // 0x80248998: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
        goto L_80248A48;
    // 0x80248998: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_8024899C:
    // 0x8024899C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x802489A0: addiu       $v1, $v1, 0x4A6D
    ctx->r3 = ADD32(ctx->r3, 0X4A6D);
    // 0x802489A4: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x802489A8: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x802489AC: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x802489B0: j           L_80248A48
    // 0x802489B4: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
        goto L_80248A48;
    // 0x802489B4: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
L_802489B8:
    // 0x802489B8: lb          $v1, 0xE($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XE);
    // 0x802489BC: bne         $v1, $v0, L_802489D0
    if (ctx->r3 != ctx->r2) {
        // 0x802489C0: addiu       $a0, $zero, 0x105
        ctx->r4 = ADD32(0, 0X105);
            goto L_802489D0;
    }
    // 0x802489C0: addiu       $a0, $zero, 0x105
    ctx->r4 = ADD32(0, 0X105);
    // 0x802489C4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802489C8: jal         0x8002A2F8
    // 0x802489CC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_2;
    // 0x802489CC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
L_802489D0:
    // 0x802489D0: lbu         $v0, 0xE($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XE);
    // 0x802489D4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802489D8: sb          $v0, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r2;
    // 0x802489DC: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x802489E0: bne         $v0, $zero, L_80248A48
    if (ctx->r2 != 0) {
        // 0x802489E4: addiu       $a0, $zero, 0x185
        ctx->r4 = ADD32(0, 0X185);
            goto L_80248A48;
    }
    // 0x802489E4: addiu       $a0, $zero, 0x185
    ctx->r4 = ADD32(0, 0X185);
    // 0x802489E8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802489EC: jal         0x8002A2F8
    // 0x802489F0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_3;
    // 0x802489F0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x802489F4: lui         $s0, 0x8025
    ctx->r16 = S32(0X8025 << 16);
    // 0x802489F8: addiu       $s0, $s0, 0x514C
    ctx->r16 = ADD32(ctx->r16, 0X514C);
    // 0x802489FC: jal         0x8003E6BC
    // 0x80248A00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_4;
    // 0x80248A00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80248A04: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80248A08: lui         $a1, 0x1006
    ctx->r5 = S32(0X1006 << 16);
    // 0x80248A0C: jal         0x80071ACC
    // 0x80248A10: ori         $a1, $a1, 0x200
    ctx->r5 = ctx->r5 | 0X200;
    func_80071ACC_4CECC(rdram, ctx);
        goto after_5;
    // 0x80248A10: ori         $a1, $a1, 0x200
    ctx->r5 = ctx->r5 | 0X200;
    after_5:
    // 0x80248A14: jal         0x8003E6BC
    // 0x80248A18: addiu       $a0, $s0, 0x28
    ctx->r4 = ADD32(ctx->r16, 0X28);
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_6;
    // 0x80248A18: addiu       $a0, $s0, 0x28
    ctx->r4 = ADD32(ctx->r16, 0X28);
    after_6:
    // 0x80248A1C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80248A20: lui         $a1, 0x1006
    ctx->r5 = S32(0X1006 << 16);
    // 0x80248A24: jal         0x80071ACC
    // 0x80248A28: ori         $a1, $a1, 0x300
    ctx->r5 = ctx->r5 | 0X300;
    func_80071ACC_4CECC(rdram, ctx);
        goto after_7;
    // 0x80248A28: ori         $a1, $a1, 0x300
    ctx->r5 = ctx->r5 | 0X300;
    after_7:
    // 0x80248A2C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80248A30: addiu       $v1, $v1, 0x4A6D
    ctx->r3 = ADD32(ctx->r3, 0X4A6D);
    // 0x80248A34: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80248A38: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x80248A3C: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80248A40: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80248A44: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_80248A48:
    // 0x80248A48: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80248A4C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80248A50: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80248A54: jr          $ra
    // 0x80248A58: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80248A58: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022FFF0_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FFF0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022FFF4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022FFF8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022FFFC: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80230000: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80230004: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80230008: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023000C: jal         0x8009A3B4
    // 0x80230010: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80230010: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x80230014: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80230018: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8023001C: jal         0x8009A3B4
    // 0x80230020: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80230020: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80230024: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80230028: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8023002C: jal         0x8009A3B4
    // 0x80230030: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80230030: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80230034: lbu         $a0, 0x8($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X8);
    // 0x80230038: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x8023003C: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x80230040: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x80230044: beq         $v1, $zero, L_80230060
    if (ctx->r3 == 0) {
        // 0x80230048: sb          $v0, 0xAD($s0)
        MEM_B(0XAD, ctx->r16) = ctx->r2;
            goto L_80230060;
    }
    // 0x80230048: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x8023004C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80230050: beq         $v1, $v0, L_80230074
    if (ctx->r3 == ctx->r2) {
        // 0x80230054: addiu       $v0, $zero, 0xE
        ctx->r2 = ADD32(0, 0XE);
            goto L_80230074;
    }
    // 0x80230054: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x80230058: j           L_802301BC
    // 0x8023005C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_802301BC;
    // 0x8023005C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80230060:
    // 0x80230060: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230064: jal         0x80230224
    // 0x80230068: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_80230224_ovl28(rdram, ctx);
        goto after_3;
    // 0x80230068: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_3:
    // 0x8023006C: j           L_802301BC
    // 0x80230070: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_802301BC;
    // 0x80230070: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80230074:
    // 0x80230074: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80230078: lbu         $v1, -0x3A47($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3A47);
    // 0x8023007C: bne         $v1, $v0, L_802301A8
    if (ctx->r3 != ctx->r2) {
        // 0x80230080: addiu       $v0, $zero, 0xF
        ctx->r2 = ADD32(0, 0XF);
            goto L_802301A8;
    }
    // 0x80230080: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x80230084: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80230088: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x8023008C: addiu       $v0, $zero, 0xB9
    ctx->r2 = ADD32(0, 0XB9);
    // 0x80230090: beq         $v1, $v0, L_8023019C
    if (ctx->r3 == ctx->r2) {
        // 0x80230094: slti        $v0, $v1, 0xBA
        ctx->r2 = SIGNED(ctx->r3) < 0XBA ? 1 : 0;
            goto L_8023019C;
    }
    // 0x80230094: slti        $v0, $v1, 0xBA
    ctx->r2 = SIGNED(ctx->r3) < 0XBA ? 1 : 0;
    // 0x80230098: beq         $v0, $zero, L_8023011C
    if (ctx->r2 == 0) {
        // 0x8023009C: addiu       $v0, $zero, 0x50
        ctx->r2 = ADD32(0, 0X50);
            goto L_8023011C;
    }
    // 0x8023009C: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x802300A0: beq         $v1, $v0, L_8023019C
    if (ctx->r3 == ctx->r2) {
        // 0x802300A4: slti        $v0, $v1, 0x51
        ctx->r2 = SIGNED(ctx->r3) < 0X51 ? 1 : 0;
            goto L_8023019C;
    }
    // 0x802300A4: slti        $v0, $v1, 0x51
    ctx->r2 = SIGNED(ctx->r3) < 0X51 ? 1 : 0;
    // 0x802300A8: beq         $v0, $zero, L_802300E4
    if (ctx->r2 == 0) {
        // 0x802300AC: addiu       $v0, $zero, 0x3C
        ctx->r2 = ADD32(0, 0X3C);
            goto L_802300E4;
    }
    // 0x802300AC: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x802300B0: beq         $v1, $v0, L_8023019C
    if (ctx->r3 == ctx->r2) {
        // 0x802300B4: slti        $v0, $v1, 0x3D
        ctx->r2 = SIGNED(ctx->r3) < 0X3D ? 1 : 0;
            goto L_8023019C;
    }
    // 0x802300B4: slti        $v0, $v1, 0x3D
    ctx->r2 = SIGNED(ctx->r3) < 0X3D ? 1 : 0;
    // 0x802300B8: beq         $v0, $zero, L_802300D0
    if (ctx->r2 == 0) {
        // 0x802300BC: addiu       $v0, $zero, 0x1E
        ctx->r2 = ADD32(0, 0X1E);
            goto L_802300D0;
    }
    // 0x802300BC: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x802300C0: beql        $v1, $v0, L_802301B8
    if (ctx->r3 == ctx->r2) {
        // 0x802300C4: sh          $zero, 0x2($s1)
        MEM_H(0X2, ctx->r17) = 0;
            goto L_802301B8;
    }
    goto skip_0;
    // 0x802300C4: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
    skip_0:
    // 0x802300C8: j           L_802301BC
    // 0x802300CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_802301BC;
    // 0x802300CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_802300D0:
    // 0x802300D0: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
    // 0x802300D4: beql        $v1, $v0, L_802301B8
    if (ctx->r3 == ctx->r2) {
        // 0x802300D8: sh          $zero, 0x2($s1)
        MEM_H(0X2, ctx->r17) = 0;
            goto L_802301B8;
    }
    goto skip_1;
    // 0x802300D8: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
    skip_1:
    // 0x802300DC: j           L_802301BC
    // 0x802300E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_802301BC;
    // 0x802300E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_802300E4:
    // 0x802300E4: addiu       $v0, $zero, 0x7D
    ctx->r2 = ADD32(0, 0X7D);
    // 0x802300E8: beq         $v1, $v0, L_8023019C
    if (ctx->r3 == ctx->r2) {
        // 0x802300EC: slti        $v0, $v1, 0x7E
        ctx->r2 = SIGNED(ctx->r3) < 0X7E ? 1 : 0;
            goto L_8023019C;
    }
    // 0x802300EC: slti        $v0, $v1, 0x7E
    ctx->r2 = SIGNED(ctx->r3) < 0X7E ? 1 : 0;
    // 0x802300F0: beq         $v0, $zero, L_80230108
    if (ctx->r2 == 0) {
        // 0x802300F4: addiu       $v0, $zero, 0x6E
        ctx->r2 = ADD32(0, 0X6E);
            goto L_80230108;
    }
    // 0x802300F4: addiu       $v0, $zero, 0x6E
    ctx->r2 = ADD32(0, 0X6E);
    // 0x802300F8: beql        $v1, $v0, L_802301B8
    if (ctx->r3 == ctx->r2) {
        // 0x802300FC: sh          $zero, 0x2($s1)
        MEM_H(0X2, ctx->r17) = 0;
            goto L_802301B8;
    }
    goto skip_2;
    // 0x802300FC: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
    skip_2:
    // 0x80230100: j           L_802301BC
    // 0x80230104: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_802301BC;
    // 0x80230104: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80230108:
    // 0x80230108: addiu       $v0, $zero, 0xA8
    ctx->r2 = ADD32(0, 0XA8);
    // 0x8023010C: beql        $v1, $v0, L_802301B8
    if (ctx->r3 == ctx->r2) {
        // 0x80230110: sh          $zero, 0x2($s1)
        MEM_H(0X2, ctx->r17) = 0;
            goto L_802301B8;
    }
    goto skip_3;
    // 0x80230110: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
    skip_3:
    // 0x80230114: j           L_802301BC
    // 0x80230118: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_802301BC;
    // 0x80230118: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8023011C:
    // 0x8023011C: addiu       $v0, $zero, 0x2B2
    ctx->r2 = ADD32(0, 0X2B2);
    // 0x80230120: beq         $v1, $v0, L_8023019C
    if (ctx->r3 == ctx->r2) {
        // 0x80230124: slti        $v0, $v1, 0x2B3
        ctx->r2 = SIGNED(ctx->r3) < 0X2B3 ? 1 : 0;
            goto L_8023019C;
    }
    // 0x80230124: slti        $v0, $v1, 0x2B3
    ctx->r2 = SIGNED(ctx->r3) < 0X2B3 ? 1 : 0;
    // 0x80230128: beq         $v0, $zero, L_80230164
    if (ctx->r2 == 0) {
        // 0x8023012C: addiu       $v0, $zero, 0x186
        ctx->r2 = ADD32(0, 0X186);
            goto L_80230164;
    }
    // 0x8023012C: addiu       $v0, $zero, 0x186
    ctx->r2 = ADD32(0, 0X186);
    // 0x80230130: beq         $v1, $v0, L_8023019C
    if (ctx->r3 == ctx->r2) {
        // 0x80230134: slti        $v0, $v1, 0x187
        ctx->r2 = SIGNED(ctx->r3) < 0X187 ? 1 : 0;
            goto L_8023019C;
    }
    // 0x80230134: slti        $v0, $v1, 0x187
    ctx->r2 = SIGNED(ctx->r3) < 0X187 ? 1 : 0;
    // 0x80230138: beq         $v0, $zero, L_80230150
    if (ctx->r2 == 0) {
        // 0x8023013C: addiu       $v0, $zero, 0x163
        ctx->r2 = ADD32(0, 0X163);
            goto L_80230150;
    }
    // 0x8023013C: addiu       $v0, $zero, 0x163
    ctx->r2 = ADD32(0, 0X163);
    // 0x80230140: beql        $v1, $v0, L_802301B8
    if (ctx->r3 == ctx->r2) {
        // 0x80230144: sh          $zero, 0x2($s1)
        MEM_H(0X2, ctx->r17) = 0;
            goto L_802301B8;
    }
    goto skip_4;
    // 0x80230144: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
    skip_4:
    // 0x80230148: j           L_802301BC
    // 0x8023014C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_802301BC;
    // 0x8023014C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80230150:
    // 0x80230150: addiu       $v0, $zero, 0x288
    ctx->r2 = ADD32(0, 0X288);
    // 0x80230154: beql        $v1, $v0, L_802301B8
    if (ctx->r3 == ctx->r2) {
        // 0x80230158: sh          $zero, 0x2($s1)
        MEM_H(0X2, ctx->r17) = 0;
            goto L_802301B8;
    }
    goto skip_5;
    // 0x80230158: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
    skip_5:
    // 0x8023015C: j           L_802301BC
    // 0x80230160: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_802301BC;
    // 0x80230160: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80230164:
    // 0x80230164: addiu       $v0, $zero, 0x334
    ctx->r2 = ADD32(0, 0X334);
    // 0x80230168: beq         $v1, $v0, L_8023019C
    if (ctx->r3 == ctx->r2) {
        // 0x8023016C: slti        $v0, $v1, 0x335
        ctx->r2 = SIGNED(ctx->r3) < 0X335 ? 1 : 0;
            goto L_8023019C;
    }
    // 0x8023016C: slti        $v0, $v1, 0x335
    ctx->r2 = SIGNED(ctx->r3) < 0X335 ? 1 : 0;
    // 0x80230170: beq         $v0, $zero, L_80230188
    if (ctx->r2 == 0) {
        // 0x80230174: addiu       $v0, $zero, 0x320
        ctx->r2 = ADD32(0, 0X320);
            goto L_80230188;
    }
    // 0x80230174: addiu       $v0, $zero, 0x320
    ctx->r2 = ADD32(0, 0X320);
    // 0x80230178: beql        $v1, $v0, L_802301B8
    if (ctx->r3 == ctx->r2) {
        // 0x8023017C: sh          $zero, 0x2($s1)
        MEM_H(0X2, ctx->r17) = 0;
            goto L_802301B8;
    }
    goto skip_6;
    // 0x8023017C: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
    skip_6:
    // 0x80230180: j           L_802301BC
    // 0x80230184: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_802301BC;
    // 0x80230184: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80230188:
    // 0x80230188: addiu       $v0, $zero, 0x382
    ctx->r2 = ADD32(0, 0X382);
    // 0x8023018C: beql        $v1, $v0, L_802301B8
    if (ctx->r3 == ctx->r2) {
        // 0x80230190: sh          $zero, 0x2($s1)
        MEM_H(0X2, ctx->r17) = 0;
            goto L_802301B8;
    }
    goto skip_7;
    // 0x80230190: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
    skip_7:
    // 0x80230194: j           L_802301BC
    // 0x80230198: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_802301BC;
    // 0x80230198: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8023019C:
    // 0x8023019C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802301A0: j           L_802301B8
    // 0x802301A4: sh          $v0, 0x34A($s0)
    MEM_H(0X34A, ctx->r16) = ctx->r2;
        goto L_802301B8;
    // 0x802301A4: sh          $v0, 0x34A($s0)
    MEM_H(0X34A, ctx->r16) = ctx->r2;
L_802301A8:
    // 0x802301A8: bnel        $v1, $v0, L_802301BC
    if (ctx->r3 != ctx->r2) {
        // 0x802301AC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802301BC;
    }
    goto skip_8;
    // 0x802301AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    skip_8:
    // 0x802301B0: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x802301B4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_802301B8:
    // 0x802301B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_802301BC:
    // 0x802301BC: jal         0x802302B4
    // 0x802301C0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_802302B4_ovl28(rdram, ctx);
        goto after_4;
    // 0x802301C0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_4:
    // 0x802301C4: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x802301C8: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x802301CC: beq         $a1, $v0, L_802301E8
    if (ctx->r5 == ctx->r2) {
        // 0x802301D0: nop
    
            goto L_802301E8;
    }
    // 0x802301D0: nop

    // 0x802301D4: lh          $a2, 0x0($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X0);
    // 0x802301D8: jal         0x80050294
    // 0x802301DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x802301DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x802301E0: j           L_802301F0
    // 0x802301E4: nop

        goto L_802301F0;
    // 0x802301E4: nop

L_802301E8:
    // 0x802301E8: jal         0x8005044C
    // 0x802301EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_6;
    // 0x802301EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
L_802301F0:
    // 0x802301F0: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x802301F4: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x802301F8: beq         $v0, $zero, L_80230210
    if (ctx->r2 == 0) {
        // 0x802301FC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80230210;
    }
    // 0x802301FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230200: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    // 0x80230204: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x80230208: jal         0x8003B564
    // 0x8023020C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_7;
    // 0x8023020C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_7:
L_80230210:
    // 0x80230210: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80230214: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80230218: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023021C: jr          $ra
    // 0x80230220: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80230220: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80225FC4_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225FC4: jr          $ra
    // 0x80225FC8: nop

    TRACE_RETURN()
    return;
    // 0x80225FC8: nop

;}
RECOMP_FUNC void func_8023B728_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B728: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023B72C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023B730: jal         0x8005044C
    // 0x8023B734: nop

    func_8005044C_2B84C(rdram, ctx);
        goto after_0;
    // 0x8023B734: nop

    after_0:
    // 0x8023B738: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023B73C: jr          $ra
    // 0x8023B740: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023B740: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8024CDE8_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024CDE8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8024CDEC: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8024CDF0: lw          $s7, 0x50($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X50);
    // 0x8024CDF4: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8024CDF8: lbu         $s5, 0x57($sp)
    ctx->r21 = MEM_BU(ctx->r29, 0X57);
    // 0x8024CDFC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8024CE00: lbu         $s2, 0x5B($sp)
    ctx->r18 = MEM_BU(ctx->r29, 0X5B);
    // 0x8024CE04: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8024CE08: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8024CE0C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8024CE10: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x8024CE14: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8024CE18: addu        $s4, $a2, $zero
    ctx->r20 = ADD32(ctx->r6, 0);
    // 0x8024CE1C: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8024CE20: addu        $s6, $a3, $zero
    ctx->r22 = ADD32(ctx->r7, 0);
    // 0x8024CE24: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x8024CE28: jal         0x8004F144
    // 0x8024CE2C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8024CE2C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    after_0:
    // 0x8024CE30: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8024CE34: beq         $s1, $zero, L_8024CEC8
    if (ctx->r17 == 0) {
        // 0x8024CE38: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8024CEC8;
    }
    // 0x8024CE38: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024CE3C: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x8024CE40: addiu       $v0, $zero, 0x21
    ctx->r2 = ADD32(0, 0X21);
    // 0x8024CE44: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
    // 0x8024CE48: sb          $zero, 0x3($s1)
    MEM_B(0X3, ctx->r17) = 0;
    // 0x8024CE4C: sw          $s2, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r18;
    // 0x8024CE50: sb          $zero, 0xC($s1)
    MEM_B(0XC, ctx->r17) = 0;
    // 0x8024CE54: sb          $zero, 0xD($s1)
    MEM_B(0XD, ctx->r17) = 0;
    // 0x8024CE58: sb          $s3, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r19;
    // 0x8024CE5C: sb          $s4, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r20;
    // 0x8024CE60: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x8024CE64: sh          $v0, 0x1C($s1)
    MEM_H(0X1C, ctx->r17) = ctx->r2;
    // 0x8024CE68: lhu         $v0, 0x2($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2);
    // 0x8024CE6C: sh          $v0, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r2;
    // 0x8024CE70: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x8024CE74: sh          $s6, 0x26($s1)
    MEM_H(0X26, ctx->r17) = ctx->r22;
    // 0x8024CE78: beq         $s5, $zero, L_8024CE8C
    if (ctx->r21 == 0) {
        // 0x8024CE7C: sh          $v0, 0x20($s1)
        MEM_H(0X20, ctx->r17) = ctx->r2;
            goto L_8024CE8C;
    }
    // 0x8024CE7C: sh          $v0, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r2;
    // 0x8024CE80: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x8024CE84: j           L_8024CE94
    // 0x8024CE88: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
        goto L_8024CE94;
    // 0x8024CE88: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
L_8024CE8C:
    // 0x8024CE8C: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x8024CE90: andi        $v0, $v0, 0xDF
    ctx->r2 = ctx->r2 & 0XDF;
L_8024CE94:
    // 0x8024CE94: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
    // 0x8024CE98: sw          $s7, 0x28($s1)
    MEM_W(0X28, ctx->r17) = ctx->r23;
    // 0x8024CE9C: sll         $v0, $s6, 16
    ctx->r2 = S32(ctx->r22 << 16);
    // 0x8024CEA0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8024CEA4: blez        $v0, L_8024CEC8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8024CEA8: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_8024CEC8;
    }
    // 0x8024CEA8: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x8024CEAC: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
L_8024CEB0:
    // 0x8024CEB0: jal         0x8024C87C
    // 0x8024CEB4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8024C87C_ovl28(rdram, ctx);
        goto after_1;
    // 0x8024CEB4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x8024CEB8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8024CEBC: slt         $v0, $s0, $s2
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x8024CEC0: bne         $v0, $zero, L_8024CEB0
    if (ctx->r2 != 0) {
        // 0x8024CEC4: nop
    
            goto L_8024CEB0;
    }
    // 0x8024CEC4: nop

L_8024CEC8:
    // 0x8024CEC8: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x8024CECC: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x8024CED0: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8024CED4: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8024CED8: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8024CEDC: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8024CEE0: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8024CEE4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8024CEE8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8024CEEC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8024CEF0: jr          $ra
    // 0x8024CEF4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8024CEF4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8024AAD0_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024AAD0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8024AAD4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8024AAD8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8024AADC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8024AAE0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024AAE4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8024AAE8: lw          $v0, 0x5260($at)
    ctx->r2 = MEM_W(ctx->r1, 0X5260);
    // 0x8024AAEC: jalr        $v0
    // 0x8024AAF0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8024AAF0: nop

    after_0:
    // 0x8024AAF4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8024AAF8: jr          $ra
    // 0x8024AAFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8024AAFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022571C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022571C: jr          $ra
    // 0x80225720: nop

    TRACE_RETURN()
    return;
    // 0x80225720: nop

;}
RECOMP_FUNC void func_8023AE50_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023AE50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023AE54: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023AE58: jal         0x8004F488
    // 0x8023AE5C: nop

    func_8004F488_2A888(rdram, ctx);
        goto after_0;
    // 0x8023AE5C: nop

    after_0:
    // 0x8023AE60: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023AE64: jr          $ra
    // 0x8023AE68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023AE68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8023AE6C: nop

;}
RECOMP_FUNC void func_8022DDD4_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DDD4: lb          $v0, 0xA7($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XA7);
    // 0x8022DDD8: bltzl       $v0, L_8022DDE0
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022DDDC: sb          $zero, 0xA($a0)
        MEM_B(0XA, ctx->r4) = 0;
            goto L_8022DDE0;
    }
    goto skip_0;
    // 0x8022DDDC: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    skip_0:
L_8022DDE0:
    // 0x8022DDE0: jr          $ra
    // 0x8022DDE4: nop

    TRACE_RETURN()
    return;
    // 0x8022DDE4: nop

;}
RECOMP_FUNC void func_80248DD4_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80248DD4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80248DD8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80248DDC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80248DE0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80248DE4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80248DE8: lbu         $a0, 0x9($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X9);
    // 0x80248DEC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80248DF0: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x80248DF4: beq         $v1, $v0, L_80248E48
    if (ctx->r3 == ctx->r2) {
        // 0x80248DF8: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80248E48;
    }
    // 0x80248DF8: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80248DFC: beql        $v0, $zero, L_80248E14
    if (ctx->r2 == 0) {
        // 0x80248E00: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80248E14;
    }
    goto skip_0;
    // 0x80248E00: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80248E04: beq         $v1, $zero, L_80248E2C
    if (ctx->r3 == 0) {
        // 0x80248E08: nop
    
            goto L_80248E2C;
    }
    // 0x80248E08: nop

    // 0x80248E0C: j           L_80248F8C
    // 0x80248E10: nop

        goto L_80248F8C;
    // 0x80248E10: nop

L_80248E14:
    // 0x80248E14: beq         $v1, $v0, L_80248EC0
    if (ctx->r3 == ctx->r2) {
        // 0x80248E18: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80248EC0;
    }
    // 0x80248E18: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80248E1C: beq         $v1, $v0, L_80248F44
    if (ctx->r3 == ctx->r2) {
        // 0x80248E20: nop
    
            goto L_80248F44;
    }
    // 0x80248E20: nop

    // 0x80248E24: j           L_80248F8C
    // 0x80248E28: nop

        goto L_80248F8C;
    // 0x80248E28: nop

L_80248E2C:
    // 0x80248E2C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80248E30: lw          $v0, -0x3AA4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3AA4);
    // 0x80248E34: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x80248E38: beq         $v0, $zero, L_80248F8C
    if (ctx->r2 == 0) {
        // 0x80248E3C: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_80248F8C;
    }
    // 0x80248E3C: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x80248E40: j           L_80248F8C
    // 0x80248E44: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
        goto L_80248F8C;
    // 0x80248E44: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_80248E48:
    // 0x80248E48: lb          $v1, 0xE($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XE);
    // 0x80248E4C: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80248E50: bne         $v1, $v0, L_80248E64
    if (ctx->r3 != ctx->r2) {
        // 0x80248E54: addiu       $a0, $zero, 0x105
        ctx->r4 = ADD32(0, 0X105);
            goto L_80248E64;
    }
    // 0x80248E54: addiu       $a0, $zero, 0x105
    ctx->r4 = ADD32(0, 0X105);
    // 0x80248E58: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80248E5C: jal         0x8002A2F8
    // 0x80248E60: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_0;
    // 0x80248E60: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
L_80248E64:
    // 0x80248E64: lbu         $v0, 0xE($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XE);
    // 0x80248E68: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80248E6C: sb          $v0, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r2;
    // 0x80248E70: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80248E74: bne         $v0, $zero, L_80248FA4
    if (ctx->r2 != 0) {
        // 0x80248E78: addiu       $a0, $zero, 0x185
        ctx->r4 = ADD32(0, 0X185);
            goto L_80248FA4;
    }
    // 0x80248E78: addiu       $a0, $zero, 0x185
    ctx->r4 = ADD32(0, 0X185);
    // 0x80248E7C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80248E80: jal         0x8002A2F8
    // 0x80248E84: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_1;
    // 0x80248E84: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x80248E88: lui         $s0, 0x8025
    ctx->r16 = S32(0X8025 << 16);
    // 0x80248E8C: addiu       $s0, $s0, 0x5164
    ctx->r16 = ADD32(ctx->r16, 0X5164);
    // 0x80248E90: jal         0x8003E6BC
    // 0x80248E94: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_2;
    // 0x80248E94: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80248E98: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80248E9C: lui         $a1, 0x1006
    ctx->r5 = S32(0X1006 << 16);
    // 0x80248EA0: jal         0x80071ACC
    // 0x80248EA4: ori         $a1, $a1, 0x200
    ctx->r5 = ctx->r5 | 0X200;
    func_80071ACC_4CECC(rdram, ctx);
        goto after_3;
    // 0x80248EA4: ori         $a1, $a1, 0x200
    ctx->r5 = ctx->r5 | 0X200;
    after_3:
    // 0x80248EA8: jal         0x8003E6BC
    // 0x80248EAC: addiu       $a0, $s0, 0x28
    ctx->r4 = ADD32(ctx->r16, 0X28);
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_4;
    // 0x80248EAC: addiu       $a0, $s0, 0x28
    ctx->r4 = ADD32(ctx->r16, 0X28);
    after_4:
    // 0x80248EB0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80248EB4: lui         $a1, 0x1006
    ctx->r5 = S32(0X1006 << 16);
    // 0x80248EB8: j           L_80248F2C
    // 0x80248EBC: ori         $a1, $a1, 0x300
    ctx->r5 = ctx->r5 | 0X300;
        goto L_80248F2C;
    // 0x80248EBC: ori         $a1, $a1, 0x300
    ctx->r5 = ctx->r5 | 0X300;
L_80248EC0:
    // 0x80248EC0: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80248EC4: lh          $v1, 0x49C8($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X49C8);
    // 0x80248EC8: addiu       $v0, $v1, -0x500
    ctx->r2 = ADD32(ctx->r3, -0X500);
    // 0x80248ECC: bltz        $v0, L_80248EE4
    if (SIGNED(ctx->r2) < 0) {
        // 0x80248ED0: slti        $v0, $v0, 0x201
        ctx->r2 = SIGNED(ctx->r2) < 0X201 ? 1 : 0;
            goto L_80248EE4;
    }
    // 0x80248ED0: slti        $v0, $v0, 0x201
    ctx->r2 = SIGNED(ctx->r2) < 0X201 ? 1 : 0;
    // 0x80248ED4: beq         $v0, $zero, L_80248EF8
    if (ctx->r2 == 0) {
        // 0x80248ED8: nop
    
            goto L_80248EF8;
    }
    // 0x80248ED8: nop

    // 0x80248EDC: j           L_80248F8C
    // 0x80248EE0: nop

        goto L_80248F8C;
    // 0x80248EE0: nop

L_80248EE4:
    // 0x80248EE4: addiu       $v0, $zero, 0x500
    ctx->r2 = ADD32(0, 0X500);
    // 0x80248EE8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80248EEC: slti        $v0, $v0, 0x201
    ctx->r2 = SIGNED(ctx->r2) < 0X201 ? 1 : 0;
    // 0x80248EF0: bne         $v0, $zero, L_80248F8C
    if (ctx->r2 != 0) {
        // 0x80248EF4: nop
    
            goto L_80248F8C;
    }
    // 0x80248EF4: nop

L_80248EF8:
    // 0x80248EF8: lui         $s0, 0x8025
    ctx->r16 = S32(0X8025 << 16);
    // 0x80248EFC: addiu       $s0, $s0, 0x5164
    ctx->r16 = ADD32(ctx->r16, 0X5164);
    // 0x80248F00: jal         0x8003E6BC
    // 0x80248F04: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_5;
    // 0x80248F04: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80248F08: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80248F0C: lui         $a1, 0x6
    ctx->r5 = S32(0X6 << 16);
    // 0x80248F10: jal         0x80071ACC
    // 0x80248F14: ori         $a1, $a1, 0x3200
    ctx->r5 = ctx->r5 | 0X3200;
    func_80071ACC_4CECC(rdram, ctx);
        goto after_6;
    // 0x80248F14: ori         $a1, $a1, 0x3200
    ctx->r5 = ctx->r5 | 0X3200;
    after_6:
    // 0x80248F18: jal         0x8003E6BC
    // 0x80248F1C: addiu       $a0, $s0, 0x28
    ctx->r4 = ADD32(ctx->r16, 0X28);
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_7;
    // 0x80248F1C: addiu       $a0, $s0, 0x28
    ctx->r4 = ADD32(ctx->r16, 0X28);
    after_7:
    // 0x80248F20: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80248F24: lui         $a1, 0x6
    ctx->r5 = S32(0X6 << 16);
    // 0x80248F28: ori         $a1, $a1, 0x3300
    ctx->r5 = ctx->r5 | 0X3300;
L_80248F2C:
    // 0x80248F2C: jal         0x80071ACC
    // 0x80248F30: nop

    func_80071ACC_4CECC(rdram, ctx);
        goto after_8;
    // 0x80248F30: nop

    after_8:
    // 0x80248F34: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x80248F38: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80248F3C: j           L_80248F8C
    // 0x80248F40: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
        goto L_80248F8C;
    // 0x80248F40: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_80248F44:
    // 0x80248F44: lb          $v0, 0xE($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XE);
    // 0x80248F48: bne         $v0, $zero, L_80248F5C
    if (ctx->r2 != 0) {
        // 0x80248F4C: addiu       $a0, $zero, 0x106
        ctx->r4 = ADD32(0, 0X106);
            goto L_80248F5C;
    }
    // 0x80248F4C: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    // 0x80248F50: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80248F54: jal         0x8002A2F8
    // 0x80248F58: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_9;
    // 0x80248F58: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_9:
L_80248F5C:
    // 0x80248F5C: lbu         $v0, 0xE($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XE);
    // 0x80248F60: addiu       $v1, $zero, 0x20
    ctx->r3 = ADD32(0, 0X20);
    // 0x80248F64: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80248F68: sb          $v0, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r2;
    // 0x80248F6C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80248F70: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80248F74: bne         $v0, $v1, L_80248F8C
    if (ctx->r2 != ctx->r3) {
        // 0x80248F78: addiu       $a0, $zero, 0x186
        ctx->r4 = ADD32(0, 0X186);
            goto L_80248F8C;
    }
    // 0x80248F78: addiu       $a0, $zero, 0x186
    ctx->r4 = ADD32(0, 0X186);
    // 0x80248F7C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80248F80: jal         0x8002A2F8
    // 0x80248F84: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_10;
    // 0x80248F84: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_10:
    // 0x80248F88: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
L_80248F8C:
    // 0x80248F8C: lb          $v0, 0xE($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XE);
    // 0x80248F90: bne         $v0, $zero, L_80248FA4
    if (ctx->r2 != 0) {
        // 0x80248F94: nop
    
            goto L_80248FA4;
    }
    // 0x80248F94: nop

    // 0x80248F98: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80248F9C: j           L_80248FAC
    // 0x80248FA0: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
        goto L_80248FAC;
    // 0x80248FA0: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
L_80248FA4:
    // 0x80248FA4: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80248FA8: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
L_80248FAC:
    // 0x80248FAC: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x80248FB0: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80248FB4: addiu       $v0, $v0, -0x3AA4
    ctx->r2 = ADD32(ctx->r2, -0X3AA4);
    // 0x80248FB8: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x80248FBC: addiu       $a0, $zero, -0x9
    ctx->r4 = ADD32(0, -0X9);
    // 0x80248FC0: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
    // 0x80248FC4: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x80248FC8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80248FCC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80248FD0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80248FD4: jr          $ra
    // 0x80248FD8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80248FD8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022DCAC_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DCAC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022DCB0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022DCB4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022DCB8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022DCBC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022DCC0: lbu         $s0, 0xE($s1)
    ctx->r16 = MEM_BU(ctx->r17, 0XE);
    // 0x8022DCC4: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    // 0x8022DCC8: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8022DCCC: addiu       $v0, $v0, 0x361C
    ctx->r2 = ADD32(ctx->r2, 0X361C);
    // 0x8022DCD0: andi        $s0, $s0, 0x3
    ctx->r16 = ctx->r16 & 0X3;
    // 0x8022DCD4: sll         $s0, $s0, 4
    ctx->r16 = S32(ctx->r16 << 4);
    // 0x8022DCD8: jal         0x8022FEA8
    // 0x8022DCDC: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    func_8022FEA8_ovl28(rdram, ctx);
        goto after_0;
    // 0x8022DCDC: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    after_0:
    // 0x8022DCE0: jal         0x800A3450
    // 0x8022DCE4: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x8022DCE4: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    after_1:
    // 0x8022DCE8: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022DCEC: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x8022DCF0: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x8022DCF4: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8022DCF8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022DCFC: sh          $v1, 0x350($s1)
    MEM_H(0X350, ctx->r17) = ctx->r3;
    // 0x8022DD00: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x8022DD04: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022DD08: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022DD0C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022DD10: jr          $ra
    // 0x8022DD14: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022DD14: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022FE10_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FE10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022FE14: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x8022FE18: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x8022FE1C: beq         $a0, $v0, L_8022FE84
    if (ctx->r4 == ctx->r2) {
        // 0x8022FE20: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_8022FE84;
    }
    // 0x8022FE20: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022FE24: slti        $v0, $a0, 0x2B
    ctx->r2 = SIGNED(ctx->r4) < 0X2B ? 1 : 0;
    // 0x8022FE28: beql        $v0, $zero, L_8022FE48
    if (ctx->r2 == 0) {
        // 0x8022FE2C: addiu       $v0, $zero, 0x50
        ctx->r2 = ADD32(0, 0X50);
            goto L_8022FE48;
    }
    goto skip_0;
    // 0x8022FE2C: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    skip_0:
    // 0x8022FE30: beq         $a0, $zero, L_8022FE7C
    if (ctx->r4 == 0) {
        // 0x8022FE34: addiu       $v0, $zero, 0x11
        ctx->r2 = ADD32(0, 0X11);
            goto L_8022FE7C;
    }
    // 0x8022FE34: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x8022FE38: beq         $a0, $v0, L_8022FE9C
    if (ctx->r4 == ctx->r2) {
        // 0x8022FE3C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022FE9C;
    }
    // 0x8022FE3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022FE40: j           L_8022FE9C
    // 0x8022FE44: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_8022FE9C;
    // 0x8022FE44: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_8022FE48:
    // 0x8022FE48: beq         $a0, $v0, L_8022FE7C
    if (ctx->r4 == ctx->r2) {
        // 0x8022FE4C: slti        $v0, $a0, 0x51
        ctx->r2 = SIGNED(ctx->r4) < 0X51 ? 1 : 0;
            goto L_8022FE7C;
    }
    // 0x8022FE4C: slti        $v0, $a0, 0x51
    ctx->r2 = SIGNED(ctx->r4) < 0X51 ? 1 : 0;
    // 0x8022FE50: beq         $v0, $zero, L_8022FE68
    if (ctx->r2 == 0) {
        // 0x8022FE54: addiu       $v0, $zero, 0x39
        ctx->r2 = ADD32(0, 0X39);
            goto L_8022FE68;
    }
    // 0x8022FE54: addiu       $v0, $zero, 0x39
    ctx->r2 = ADD32(0, 0X39);
    // 0x8022FE58: beq         $a0, $v0, L_8022FE9C
    if (ctx->r4 == ctx->r2) {
        // 0x8022FE5C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022FE9C;
    }
    // 0x8022FE5C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022FE60: j           L_8022FE9C
    // 0x8022FE64: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_8022FE9C;
    // 0x8022FE64: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_8022FE68:
    // 0x8022FE68: addiu       $v0, $zero, 0x53
    ctx->r2 = ADD32(0, 0X53);
    // 0x8022FE6C: beq         $a0, $v0, L_8022FE8C
    if (ctx->r4 == ctx->r2) {
        // 0x8022FE70: nop
    
            goto L_8022FE8C;
    }
    // 0x8022FE70: nop

    // 0x8022FE74: j           L_8022FE9C
    // 0x8022FE78: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_8022FE9C;
    // 0x8022FE78: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_8022FE7C:
    // 0x8022FE7C: j           L_8022FE9C
    // 0x8022FE80: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8022FE9C;
    // 0x8022FE80: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8022FE84:
    // 0x8022FE84: j           L_8022FE9C
    // 0x8022FE88: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
        goto L_8022FE9C;
    // 0x8022FE88: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_8022FE8C:
    // 0x8022FE8C: jal         0x800A3450
    // 0x8022FE90: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022FE90: nop

    after_0:
    // 0x8022FE94: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022FE98: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
L_8022FE9C:
    // 0x8022FE9C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022FEA0: jr          $ra
    // 0x8022FEA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022FEA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802364B8_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802364B8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802364BC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802364C0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802364C4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802364C8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802364CC: lbu         $a0, 0xA($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0XA);
    // 0x802364D0: beq         $a0, $zero, L_802364E8
    if (ctx->r4 == 0) {
        // 0x802364D4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802364E8;
    }
    // 0x802364D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802364D8: beq         $a0, $v0, L_80236654
    if (ctx->r4 == ctx->r2) {
        // 0x802364DC: addiu       $v0, $zero, 0x1A
        ctx->r2 = ADD32(0, 0X1A);
            goto L_80236654;
    }
    // 0x802364DC: addiu       $v0, $zero, 0x1A
    ctx->r2 = ADD32(0, 0X1A);
    // 0x802364E0: j           L_80236688
    // 0x802364E4: nop

        goto L_80236688;
    // 0x802364E4: nop

L_802364E8:
    // 0x802364E8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802364EC: sb          $v0, 0xAD($s1)
    MEM_B(0XAD, ctx->r17) = ctx->r2;
    // 0x802364F0: lw          $a1, 0x10($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X10);
    // 0x802364F4: addiu       $v0, $zero, 0x110
    ctx->r2 = ADD32(0, 0X110);
    // 0x802364F8: beq         $a1, $v0, L_80236618
    if (ctx->r5 == ctx->r2) {
        // 0x802364FC: slti        $v0, $a1, 0x111
        ctx->r2 = SIGNED(ctx->r5) < 0X111 ? 1 : 0;
            goto L_80236618;
    }
    // 0x802364FC: slti        $v0, $a1, 0x111
    ctx->r2 = SIGNED(ctx->r5) < 0X111 ? 1 : 0;
    // 0x80236500: beq         $v0, $zero, L_80236584
    if (ctx->r2 == 0) {
        // 0x80236504: addiu       $v0, $zero, 0x82
        ctx->r2 = ADD32(0, 0X82);
            goto L_80236584;
    }
    // 0x80236504: addiu       $v0, $zero, 0x82
    ctx->r2 = ADD32(0, 0X82);
    // 0x80236508: beq         $a1, $v0, L_80236618
    if (ctx->r5 == ctx->r2) {
        // 0x8023650C: slti        $v0, $a1, 0x83
        ctx->r2 = SIGNED(ctx->r5) < 0X83 ? 1 : 0;
            goto L_80236618;
    }
    // 0x8023650C: slti        $v0, $a1, 0x83
    ctx->r2 = SIGNED(ctx->r5) < 0X83 ? 1 : 0;
    // 0x80236510: beq         $v0, $zero, L_8023654C
    if (ctx->r2 == 0) {
        // 0x80236514: addiu       $v0, $zero, 0x6E
        ctx->r2 = ADD32(0, 0X6E);
            goto L_8023654C;
    }
    // 0x80236514: addiu       $v0, $zero, 0x6E
    ctx->r2 = ADD32(0, 0X6E);
    // 0x80236518: beq         $a1, $v0, L_80236618
    if (ctx->r5 == ctx->r2) {
        // 0x8023651C: slti        $v0, $a1, 0x6F
        ctx->r2 = SIGNED(ctx->r5) < 0X6F ? 1 : 0;
            goto L_80236618;
    }
    // 0x8023651C: slti        $v0, $a1, 0x6F
    ctx->r2 = SIGNED(ctx->r5) < 0X6F ? 1 : 0;
    // 0x80236520: beq         $v0, $zero, L_80236538
    if (ctx->r2 == 0) {
        // 0x80236524: addiu       $v0, $zero, 0x32
        ctx->r2 = ADD32(0, 0X32);
            goto L_80236538;
    }
    // 0x80236524: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    // 0x80236528: beq         $a1, $v0, L_80236604
    if (ctx->r5 == ctx->r2) {
        // 0x8023652C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80236604;
    }
    // 0x8023652C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80236530: j           L_80236688
    // 0x80236534: nop

        goto L_80236688;
    // 0x80236534: nop

L_80236538:
    // 0x80236538: addiu       $v0, $zero, 0x7D
    ctx->r2 = ADD32(0, 0X7D);
    // 0x8023653C: beq         $a1, $v0, L_80236604
    if (ctx->r5 == ctx->r2) {
        // 0x80236540: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80236604;
    }
    // 0x80236540: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80236544: j           L_80236688
    // 0x80236548: nop

        goto L_80236688;
    // 0x80236548: nop

L_8023654C:
    // 0x8023654C: addiu       $v0, $zero, 0xCA
    ctx->r2 = ADD32(0, 0XCA);
    // 0x80236550: beq         $a1, $v0, L_80236618
    if (ctx->r5 == ctx->r2) {
        // 0x80236554: slti        $v0, $a1, 0xCB
        ctx->r2 = SIGNED(ctx->r5) < 0XCB ? 1 : 0;
            goto L_80236618;
    }
    // 0x80236554: slti        $v0, $a1, 0xCB
    ctx->r2 = SIGNED(ctx->r5) < 0XCB ? 1 : 0;
    // 0x80236558: beq         $v0, $zero, L_80236570
    if (ctx->r2 == 0) {
        // 0x8023655C: addiu       $v0, $zero, 0xA0
        ctx->r2 = ADD32(0, 0XA0);
            goto L_80236570;
    }
    // 0x8023655C: addiu       $v0, $zero, 0xA0
    ctx->r2 = ADD32(0, 0XA0);
    // 0x80236560: beq         $a1, $v0, L_80236604
    if (ctx->r5 == ctx->r2) {
        // 0x80236564: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80236604;
    }
    // 0x80236564: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80236568: j           L_80236688
    // 0x8023656C: nop

        goto L_80236688;
    // 0x8023656C: nop

L_80236570:
    // 0x80236570: addiu       $v0, $zero, 0xE6
    ctx->r2 = ADD32(0, 0XE6);
    // 0x80236574: beq         $a1, $v0, L_80236604
    if (ctx->r5 == ctx->r2) {
        // 0x80236578: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80236604;
    }
    // 0x80236578: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023657C: j           L_80236688
    // 0x80236580: nop

        goto L_80236688;
    // 0x80236580: nop

L_80236584:
    // 0x80236584: addiu       $v0, $zero, 0x186
    ctx->r2 = ADD32(0, 0X186);
    // 0x80236588: beq         $a1, $v0, L_80236618
    if (ctx->r5 == ctx->r2) {
        // 0x8023658C: slti        $v0, $a1, 0x187
        ctx->r2 = SIGNED(ctx->r5) < 0X187 ? 1 : 0;
            goto L_80236618;
    }
    // 0x8023658C: slti        $v0, $a1, 0x187
    ctx->r2 = SIGNED(ctx->r5) < 0X187 ? 1 : 0;
    // 0x80236590: beq         $v0, $zero, L_802365CC
    if (ctx->r2 == 0) {
        // 0x80236594: addiu       $v0, $zero, 0x154
        ctx->r2 = ADD32(0, 0X154);
            goto L_802365CC;
    }
    // 0x80236594: addiu       $v0, $zero, 0x154
    ctx->r2 = ADD32(0, 0X154);
    // 0x80236598: beq         $a1, $v0, L_80236618
    if (ctx->r5 == ctx->r2) {
        // 0x8023659C: slti        $v0, $a1, 0x155
        ctx->r2 = SIGNED(ctx->r5) < 0X155 ? 1 : 0;
            goto L_80236618;
    }
    // 0x8023659C: slti        $v0, $a1, 0x155
    ctx->r2 = SIGNED(ctx->r5) < 0X155 ? 1 : 0;
    // 0x802365A0: beq         $v0, $zero, L_802365B8
    if (ctx->r2 == 0) {
        // 0x802365A4: addiu       $v0, $zero, 0x122
        ctx->r2 = ADD32(0, 0X122);
            goto L_802365B8;
    }
    // 0x802365A4: addiu       $v0, $zero, 0x122
    ctx->r2 = ADD32(0, 0X122);
    // 0x802365A8: beq         $a1, $v0, L_80236604
    if (ctx->r5 == ctx->r2) {
        // 0x802365AC: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80236604;
    }
    // 0x802365AC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802365B0: j           L_80236688
    // 0x802365B4: nop

        goto L_80236688;
    // 0x802365B4: nop

L_802365B8:
    // 0x802365B8: addiu       $v0, $zero, 0x172
    ctx->r2 = ADD32(0, 0X172);
    // 0x802365BC: beq         $a1, $v0, L_80236604
    if (ctx->r5 == ctx->r2) {
        // 0x802365C0: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80236604;
    }
    // 0x802365C0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802365C4: j           L_80236688
    // 0x802365C8: nop

        goto L_80236688;
    // 0x802365C8: nop

L_802365CC:
    // 0x802365CC: addiu       $v0, $zero, 0x1D1
    ctx->r2 = ADD32(0, 0X1D1);
    // 0x802365D0: beq         $a1, $v0, L_80236618
    if (ctx->r5 == ctx->r2) {
        // 0x802365D4: slti        $v0, $a1, 0x1D2
        ctx->r2 = SIGNED(ctx->r5) < 0X1D2 ? 1 : 0;
            goto L_80236618;
    }
    // 0x802365D4: slti        $v0, $a1, 0x1D2
    ctx->r2 = SIGNED(ctx->r5) < 0X1D2 ? 1 : 0;
    // 0x802365D8: beq         $v0, $zero, L_802365F0
    if (ctx->r2 == 0) {
        // 0x802365DC: addiu       $v0, $zero, 0x19F
        ctx->r2 = ADD32(0, 0X19F);
            goto L_802365F0;
    }
    // 0x802365DC: addiu       $v0, $zero, 0x19F
    ctx->r2 = ADD32(0, 0X19F);
    // 0x802365E0: beq         $a1, $v0, L_80236604
    if (ctx->r5 == ctx->r2) {
        // 0x802365E4: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80236604;
    }
    // 0x802365E4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802365E8: j           L_80236688
    // 0x802365EC: nop

        goto L_80236688;
    // 0x802365EC: nop

L_802365F0:
    // 0x802365F0: addiu       $v0, $zero, 0x262
    ctx->r2 = ADD32(0, 0X262);
    // 0x802365F4: beq         $a1, $v0, L_80236630
    if (ctx->r5 == ctx->r2) {
        // 0x802365F8: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80236630;
    }
    // 0x802365F8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802365FC: j           L_80236688
    // 0x80236600: nop

        goto L_80236688;
    // 0x80236600: nop

L_80236604:
    // 0x80236604: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
    // 0x80236608: jal         0x80236A60
    // 0x8023660C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_80236A60_ovl28(rdram, ctx);
        goto after_0;
    // 0x8023660C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80236610: j           L_80236688
    // 0x80236614: nop

        goto L_80236688;
    // 0x80236614: nop

L_80236618:
    // 0x80236618: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023661C: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
    // 0x80236620: jal         0x80236A60
    // 0x80236624: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80236A60_ovl28(rdram, ctx);
        goto after_1;
    // 0x80236624: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x80236628: j           L_80236688
    // 0x8023662C: nop

        goto L_80236688;
    // 0x8023662C: nop

L_80236630:
    // 0x80236630: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
    // 0x80236634: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x80236638: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023663C: jal         0x80236A60
    // 0x80236640: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    func_80236A60_ovl28(rdram, ctx);
        goto after_2;
    // 0x80236640: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    after_2:
    // 0x80236644: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80236648: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023664C: j           L_80236688
    // 0x80236650: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_80236688;
    // 0x80236650: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_80236654:
    // 0x80236654: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x80236658: bne         $v1, $v0, L_80236688
    if (ctx->r3 != ctx->r2) {
        // 0x8023665C: nop
    
            goto L_80236688;
    }
    // 0x8023665C: nop

    // 0x80236660: lw          $v0, 0x10($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X10);
    // 0x80236664: bne         $v0, $a0, L_80236688
    if (ctx->r2 != ctx->r4) {
        // 0x80236668: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80236688;
    }
    // 0x80236668: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023666C: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
    // 0x80236670: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80236674: addiu       $s0, $zero, 0x3
    ctx->r16 = ADD32(0, 0X3);
    // 0x80236678: jal         0x80236A60
    // 0x8023667C: sb          $s0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r16;
    func_80236A60_ovl28(rdram, ctx);
        goto after_3;
    // 0x8023667C: sb          $s0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r16;
    after_3:
    // 0x80236680: sb          $s0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r16;
    // 0x80236684: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
L_80236688:
    // 0x80236688: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023668C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80236690: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80236694: jr          $ra
    // 0x80236698: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80236698: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802440C0_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802440C0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802440C4: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x802440C8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802440CC: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x802440D0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802440D4: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x802440D8: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x802440DC: beql        $v0, $zero, L_80244238
    if (ctx->r2 == 0) {
        // 0x802440E0: addiu       $a0, $s1, 0x34
        ctx->r4 = ADD32(ctx->r17, 0X34);
            goto L_80244238;
    }
    goto skip_0;
    // 0x802440E0: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
    skip_0:
    // 0x802440E4: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x802440E8: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x802440EC: addiu       $a1, $a1, 0x4C04
    ctx->r5 = ADD32(ctx->r5, 0X4C04);
    // 0x802440F0: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x802440F4: addiu       $v0, $v0, 0x4BE0
    ctx->r2 = ADD32(ctx->r2, 0X4BE0);
    // 0x802440F8: sw          $v0, 0x78($s1)
    MEM_W(0X78, ctx->r17) = ctx->r2;
    // 0x802440FC: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80244100: sw          $zero, 0xC0($s1)
    MEM_W(0XC0, ctx->r17) = 0;
    // 0x80244104: sw          $zero, 0xC4($s1)
    MEM_W(0XC4, ctx->r17) = 0;
    // 0x80244108: sw          $zero, 0xC8($s1)
    MEM_W(0XC8, ctx->r17) = 0;
    // 0x8024410C: sw          $zero, 0xCC($s1)
    MEM_W(0XCC, ctx->r17) = 0;
    // 0x80244110: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
    // 0x80244114: ori         $v1, $v1, 0x6
    ctx->r3 = ctx->r3 | 0X6;
    // 0x80244118: jal         0x8004D5D4
    // 0x8024411C: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8024411C: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
    after_0:
    // 0x80244120: lbu         $v1, 0x3($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X3);
    // 0x80244124: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    // 0x80244128: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
    // 0x8024412C: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x80244130: lhu         $t0, 0x14($s1)
    ctx->r8 = MEM_HU(ctx->r17, 0X14);
    // 0x80244134: lhu         $t1, 0x16($s1)
    ctx->r9 = MEM_HU(ctx->r17, 0X16);
    // 0x80244138: lhu         $t2, 0x18($s1)
    ctx->r10 = MEM_HU(ctx->r17, 0X18);
    // 0x8024413C: lh          $a3, 0x18($s1)
    ctx->r7 = MEM_H(ctx->r17, 0X18);
    // 0x80244140: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
    // 0x80244144: sh          $zero, 0x6E($s1)
    MEM_H(0X6E, ctx->r17) = 0;
    // 0x80244148: sh          $zero, 0x44($s1)
    MEM_H(0X44, ctx->r17) = 0;
    // 0x8024414C: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x80244150: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80244154: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80244158: lhu         $v1, 0x4BEC($at)
    ctx->r3 = MEM_HU(ctx->r1, 0X4BEC);
    // 0x8024415C: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x80244160: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80244164: sh          $zero, 0x48($s1)
    MEM_H(0X48, ctx->r17) = 0;
    // 0x80244168: sh          $zero, 0x4C($s1)
    MEM_H(0X4C, ctx->r17) = 0;
    // 0x8024416C: sh          $v1, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r3;
    // 0x80244170: lui         $t3, 0x8025
    ctx->r11 = S32(0X8025 << 16);
    // 0x80244174: addu        $t3, $t3, $v0
    ctx->r11 = ADD32(ctx->r11, ctx->r2);
    // 0x80244178: lhu         $t3, 0x4BF4($t3)
    ctx->r11 = MEM_HU(ctx->r11, 0X4BF4);
    // 0x8024417C: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x80244180: lh          $v1, 0x16($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X16);
    // 0x80244184: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80244188: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x8024418C: sh          $zero, 0x50($s1)
    MEM_H(0X50, ctx->r17) = 0;
    // 0x80244190: sh          $t0, 0xAC($s1)
    MEM_H(0XAC, ctx->r17) = ctx->r8;
    // 0x80244194: sh          $t1, 0xAE($s1)
    MEM_H(0XAE, ctx->r17) = ctx->r9;
    // 0x80244198: sh          $t2, 0xB0($s1)
    MEM_H(0XB0, ctx->r17) = ctx->r10;
    // 0x8024419C: sw          $a3, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r7;
    // 0x802441A0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802441A4: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x802441A8: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x802441AC: sw          $v1, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r3;
    // 0x802441B0: jal         0x8009A3B4
    // 0x802441B4: sh          $t3, 0x4E($s1)
    MEM_H(0X4E, ctx->r17) = ctx->r11;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802441B4: sh          $t3, 0x4E($s1)
    MEM_H(0X4E, ctx->r17) = ctx->r11;
    after_1:
    // 0x802441B8: addiu       $a0, $s1, 0x2C
    ctx->r4 = ADD32(ctx->r17, 0X2C);
    // 0x802441BC: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x802441C0: jal         0x8009A3B4
    // 0x802441C4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x802441C4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x802441C8: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x802441CC: lui         $v1, 0x280
    ctx->r3 = S32(0X280 << 16);
    // 0x802441D0: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x802441D4: sw          $v1, 0xB4($s1)
    MEM_W(0XB4, ctx->r17) = ctx->r3;
    // 0x802441D8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802441DC: jal         0x800A3450
    // 0x802441E0: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x802441E0: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    after_3:
    // 0x802441E4: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x802441E8: addiu       $s0, $s1, 0x88
    ctx->r16 = ADD32(ctx->r17, 0X88);
    // 0x802441EC: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x802441F0: jal         0x8002C69C
    // 0x802441F4: addiu       $a0, $s1, 0x8C
    ctx->r4 = ADD32(ctx->r17, 0X8C);
    func_8002C69C_7A9C(rdram, ctx);
        goto after_4;
    // 0x802441F4: addiu       $a0, $s1, 0x8C
    ctx->r4 = ADD32(ctx->r17, 0X8C);
    after_4:
    // 0x802441F8: lbu         $a0, 0x9($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X9);
    // 0x802441FC: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80244200: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80244204: jal         0x800319B4
    // 0x80244208: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    func_800319B4_CDB4(rdram, ctx);
        goto after_5;
    // 0x80244208: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    after_5:
    // 0x8024420C: lh          $v0, 0x6E($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X6E);
    // 0x80244210: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80244214: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x80244218: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8024421C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80244220: jal         0x80031DA8
    // 0x80244224: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_6;
    // 0x80244224: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_6:
    // 0x80244228: jal         0x80244678
    // 0x8024422C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80244678_ovl28(rdram, ctx);
        goto after_7;
    // 0x8024422C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_7:
    // 0x80244230: j           L_802442FC
    // 0x80244234: nop

        goto L_802442FC;
    // 0x80244234: nop

L_80244238:
    // 0x80244238: lh          $v1, 0x44($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X44);
    // 0x8024423C: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80244240: addiu       $a1, $a1, 0x4BF0
    ctx->r5 = ADD32(ctx->r5, 0X4BF0);
    // 0x80244244: lh          $v0, 0x0($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X0);
    // 0x80244248: lh          $a3, 0x48($s1)
    ctx->r7 = MEM_H(ctx->r17, 0X48);
    // 0x8024424C: lhu         $t3, 0x14($s1)
    ctx->r11 = MEM_HU(ctx->r17, 0X14);
    // 0x80244250: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80244254: mflo        $v1
    ctx->r3 = lo;
    // 0x80244258: lhu         $t4, 0x16($s1)
    ctx->r12 = MEM_HU(ctx->r17, 0X16);
    // 0x8024425C: lhu         $t5, 0x18($s1)
    ctx->r13 = MEM_HU(ctx->r17, 0X18);
    // 0x80244260: lh          $t0, 0x16($s1)
    ctx->r8 = MEM_H(ctx->r17, 0X16);
    // 0x80244264: lh          $t1, 0x18($s1)
    ctx->r9 = MEM_H(ctx->r17, 0X18);
    // 0x80244268: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x8024426C: sh          $zero, 0x46($s1)
    MEM_H(0X46, ctx->r17) = 0;
    // 0x80244270: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80244274: addiu       $v0, $v0, 0x4BE0
    ctx->r2 = ADD32(ctx->r2, 0X4BE0);
    // 0x80244278: sll         $t0, $t0, 16
    ctx->r8 = S32(ctx->r8 << 16);
    // 0x8024427C: sra         $v1, $v1, 8
    ctx->r3 = S32(SIGNED(ctx->r3) >> 8);
    // 0x80244280: sh          $v1, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r3;
    // 0x80244284: lh          $t2, 0x0($a1)
    ctx->r10 = MEM_H(ctx->r5, 0X0);
    // 0x80244288: lh          $v1, 0x14($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X14);
    // 0x8024428C: sll         $t1, $t1, 16
    ctx->r9 = S32(ctx->r9 << 16);
    // 0x80244290: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x80244294: sh          $zero, 0x4C($s1)
    MEM_H(0X4C, ctx->r17) = 0;
    // 0x80244298: sh          $zero, 0x4E($s1)
    MEM_H(0X4E, ctx->r17) = 0;
    // 0x8024429C: sh          $zero, 0x50($s1)
    MEM_H(0X50, ctx->r17) = 0;
    // 0x802442A0: sw          $zero, 0xC0($s1)
    MEM_W(0XC0, ctx->r17) = 0;
    // 0x802442A4: sw          $zero, 0xC4($s1)
    MEM_W(0XC4, ctx->r17) = 0;
    // 0x802442A8: sw          $zero, 0xC8($s1)
    MEM_W(0XC8, ctx->r17) = 0;
    // 0x802442AC: mult        $a3, $t2
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802442B0: mflo        $a3
    ctx->r7 = lo;
    // 0x802442B4: sw          $zero, 0xCC($s1)
    MEM_W(0XCC, ctx->r17) = 0;
    // 0x802442B8: sw          $v0, 0x78($s1)
    MEM_W(0X78, ctx->r17) = ctx->r2;
    // 0x802442BC: sh          $t3, 0xAC($s1)
    MEM_H(0XAC, ctx->r17) = ctx->r11;
    // 0x802442C0: sh          $t4, 0xAE($s1)
    MEM_H(0XAE, ctx->r17) = ctx->r12;
    // 0x802442C4: sh          $t5, 0xB0($s1)
    MEM_H(0XB0, ctx->r17) = ctx->r13;
    // 0x802442C8: sw          $t0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r8;
    // 0x802442CC: sw          $t1, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r9;
    // 0x802442D0: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x802442D4: sw          $v1, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r3;
    // 0x802442D8: sra         $a3, $a3, 8
    ctx->r7 = S32(SIGNED(ctx->r7) >> 8);
    // 0x802442DC: jal         0x8009A3B4
    // 0x802442E0: sh          $a3, 0x48($s1)
    MEM_H(0X48, ctx->r17) = ctx->r7;
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x802442E0: sh          $a3, 0x48($s1)
    MEM_H(0X48, ctx->r17) = ctx->r7;
    after_8:
    // 0x802442E4: addiu       $a0, $s1, 0x2C
    ctx->r4 = ADD32(ctx->r17, 0X2C);
    // 0x802442E8: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x802442EC: jal         0x8009A3B4
    // 0x802442F0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_9;
    // 0x802442F0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_9:
    // 0x802442F4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802442F8: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_802442FC:
    // 0x802442FC: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80244300: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80244304: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80244308: jr          $ra
    // 0x8024430C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8024430C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022BA50_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BA50: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022BA54: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8022BA58: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022BA5C: addiu       $a0, $s1, 0x2C
    ctx->r4 = ADD32(ctx->r17, 0X2C);
    // 0x8022BA60: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8022BA64: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8022BA68: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022BA6C: lbu         $v0, 0xAC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XAC);
    // 0x8022BA70: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x8022BA74: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022BA78: jal         0x8009A3B4
    // 0x8022BA7C: sb          $v0, 0xAD($s1)
    MEM_B(0XAD, ctx->r17) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022BA7C: sb          $v0, 0xAD($s1)
    MEM_B(0XAD, ctx->r17) = ctx->r2;
    after_0:
    // 0x8022BA80: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
    // 0x8022BA84: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x8022BA88: jal         0x8009A3B4
    // 0x8022BA8C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022BA8C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022BA90: addiu       $a0, $s1, 0x5C
    ctx->r4 = ADD32(ctx->r17, 0X5C);
    // 0x8022BA94: addiu       $a1, $s1, 0x54
    ctx->r5 = ADD32(ctx->r17, 0X54);
    // 0x8022BA98: jal         0x8009A3B4
    // 0x8022BA9C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022BA9C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022BAA0: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022BAA4: jal         0x800A3450
    // 0x8022BAA8: sh          $v0, 0x15E($s1)
    MEM_H(0X15E, ctx->r17) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x8022BAA8: sh          $v0, 0x15E($s1)
    MEM_H(0X15E, ctx->r17) = ctx->r2;
    after_3:
    // 0x8022BAAC: lbu         $v1, 0x8($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X8);
    // 0x8022BAB0: sh          $v0, 0x32A($s1)
    MEM_H(0X32A, ctx->r17) = ctx->r2;
    // 0x8022BAB4: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022BAB8: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8022BABC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022BAC0: lw          $v0, 0x3000($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3000);
    // 0x8022BAC4: jalr        $v0
    // 0x8022BAC8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x8022BAC8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x8022BACC: lbu         $v0, 0xAD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XAD);
    // 0x8022BAD0: lbu         $a1, 0xAC($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0XAC);
    // 0x8022BAD4: beq         $v0, $a1, L_8022BAF0
    if (ctx->r2 == ctx->r5) {
        // 0x8022BAD8: addiu       $s2, $s1, 0x328
        ctx->r18 = ADD32(ctx->r17, 0X328);
            goto L_8022BAF0;
    }
    // 0x8022BAD8: addiu       $s2, $s1, 0x328
    ctx->r18 = ADD32(ctx->r17, 0X328);
    // 0x8022BADC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022BAE0: jal         0x80050294
    // 0x8022BAE4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x8022BAE4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x8022BAE8: j           L_8022BAF8
    // 0x8022BAEC: nop

        goto L_8022BAF8;
    // 0x8022BAEC: nop

L_8022BAF0:
    // 0x8022BAF0: jal         0x8005044C
    // 0x8022BAF4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_6;
    // 0x8022BAF4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
L_8022BAF8:
    // 0x8022BAF8: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8022BAFC: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022BB00: beq         $v0, $zero, L_8022BB18
    if (ctx->r2 == 0) {
        // 0x8022BB04: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022BB18;
    }
    // 0x8022BB04: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022BB08: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x8022BB0C: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8022BB10: jal         0x8003B564
    // 0x8022BB14: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_7;
    // 0x8022BB14: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_7:
L_8022BB18:
    // 0x8022BB18: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8022BB1C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022BB20: beql        $v0, $zero, L_8022BB8C
    if (ctx->r2 == 0) {
        // 0x8022BB24: sw          $zero, 0x14($s2)
        MEM_W(0X14, ctx->r18) = 0;
            goto L_8022BB8C;
    }
    goto skip_0;
    // 0x8022BB24: sw          $zero, 0x14($s2)
    MEM_W(0X14, ctx->r18) = 0;
    skip_0:
    // 0x8022BB28: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8022BB2C: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x8022BB30: beq         $v0, $zero, L_8022BB88
    if (ctx->r2 == 0) {
        // 0x8022BB34: addiu       $s0, $s2, 0xC
        ctx->r16 = ADD32(ctx->r18, 0XC);
            goto L_8022BB88;
    }
    // 0x8022BB34: addiu       $s0, $s2, 0xC
    ctx->r16 = ADD32(ctx->r18, 0XC);
    // 0x8022BB38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BB3C: addiu       $a1, $s1, 0x180
    ctx->r5 = ADD32(ctx->r17, 0X180);
    // 0x8022BB40: jal         0x8009A3B4
    // 0x8022BB44: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x8022BB44: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_8:
    // 0x8022BB48: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BB4C: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x8022BB50: lbu         $v1, 0x1($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X1);
    // 0x8022BB54: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022BB58: addiu       $v0, $s2, 0x14
    ctx->r2 = ADD32(ctx->r18, 0X14);
    // 0x8022BB5C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022BB60: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x8022BB64: lhu         $v1, 0x8($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X8);
    // 0x8022BB68: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8022BB6C: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8022BB70: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8022BB74: lui         $v0, 0x488
    ctx->r2 = S32(0X488 << 16);
    // 0x8022BB78: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8022BB7C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8022BB80: jal         0x80051E18
    // 0x8022BB84: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_9;
    // 0x8022BB84: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_9:
L_8022BB88:
    // 0x8022BB88: sw          $zero, 0x14($s2)
    MEM_W(0X14, ctx->r18) = 0;
L_8022BB8C:
    // 0x8022BB8C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8022BB90: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8022BB94: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022BB98: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022BB9C: jr          $ra
    // 0x8022BBA0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022BBA0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80247C5C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80247C5C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80247C60: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80247C64: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80247C68: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80247C6C: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x80247C70: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80247C74: jal         0x8002C678
    // 0x80247C78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C678_7A78(rdram, ctx);
        goto after_0;
    // 0x80247C78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80247C7C: lb          $a0, 0xC($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XC);
    // 0x80247C80: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x80247C84: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80247C88: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    // 0x80247C8C: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80247C90: jal         0x800319B4
    // 0x80247C94: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
    func_800319B4_CDB4(rdram, ctx);
        goto after_1;
    // 0x80247C94: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
    after_1:
    // 0x80247C98: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x80247C9C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80247CA0: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    // 0x80247CA4: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80247CA8: bne         $v0, $zero, L_80247CFC
    if (ctx->r2 != 0) {
        // 0x80247CAC: addiu       $a0, $zero, 0x185
        ctx->r4 = ADD32(0, 0X185);
            goto L_80247CFC;
    }
    // 0x80247CAC: addiu       $a0, $zero, 0x185
    ctx->r4 = ADD32(0, 0X185);
    // 0x80247CB0: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x80247CB4: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x80247CB8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80247CBC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80247CC0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80247CC4: andi        $v1, $v1, 0xFD
    ctx->r3 = ctx->r3 & 0XFD;
    // 0x80247CC8: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x80247CCC: jal         0x8002A2F8
    // 0x80247CD0: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
    func_8002A2F8_56F8(rdram, ctx);
        goto after_2;
    // 0x80247CD0: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
    after_2:
    // 0x80247CD4: jal         0x80060590
    // 0x80247CD8: addiu       $a0, $zero, 0x7B2
    ctx->r4 = ADD32(0, 0X7B2);
    func_80060590_3B990(rdram, ctx);
        goto after_3;
    // 0x80247CD8: addiu       $a0, $zero, 0x7B2
    ctx->r4 = ADD32(0, 0X7B2);
    after_3:
    // 0x80247CDC: lw          $v1, 0x44($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X44);
    // 0x80247CE0: lw          $a0, 0x30($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X30);
    // 0x80247CE4: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80247CE8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80247CEC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80247CF0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80247CF4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80247CF8: sw          $a0, 0x5088($at)
    MEM_W(0X5088, ctx->r1) = ctx->r4;
L_80247CFC:
    // 0x80247CFC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80247D00: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80247D04: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80247D08: jr          $ra
    // 0x80247D0C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80247D0C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802454BC_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802454BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802454C0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802454C4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802454C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802454CC: lbu         $t0, 0xB($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0XB);
    // 0x802454D0: lbu         $t1, 0xA($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XA);
    // 0x802454D4: beq         $t0, $zero, L_80245650
    if (ctx->r8 == 0) {
        // 0x802454D8: subu        $v1, $t0, $t1
        ctx->r3 = SUB32(ctx->r8, ctx->r9);
            goto L_80245650;
    }
    // 0x802454D8: subu        $v1, $t0, $t1
    ctx->r3 = SUB32(ctx->r8, ctx->r9);
    // 0x802454DC: lh          $a0, 0x2C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X2C);
    // 0x802454E0: mult        $a0, $v1
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802454E4: mflo        $a0
    ctx->r4 = lo;
    // 0x802454E8: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x802454EC: nop

    // 0x802454F0: mult        $v0, $t1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802454F4: mflo        $v0
    ctx->r2 = lo;
    // 0x802454F8: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x802454FC: nop

    // 0x80245500: div         $zero, $a0, $t0
    lo = S32(S64(S32(ctx->r4)) / S64(S32(ctx->r8))); hi = S32(S64(S32(ctx->r4)) % S64(S32(ctx->r8)));
    // 0x80245504: bne         $t0, $zero, L_80245510
    if (ctx->r8 != 0) {
        // 0x80245508: nop
    
            goto L_80245510;
    }
    // 0x80245508: nop

    // 0x8024550C: break       7
    do_break(2149864716);
L_80245510:
    // 0x80245510: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80245514: bne         $t0, $at, L_80245528
    if (ctx->r8 != ctx->r1) {
        // 0x80245518: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80245528;
    }
    // 0x80245518: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8024551C: bne         $a0, $at, L_80245528
    if (ctx->r4 != ctx->r1) {
        // 0x80245520: nop
    
            goto L_80245528;
    }
    // 0x80245520: nop

    // 0x80245524: break       6
    do_break(2149864740);
L_80245528:
    // 0x80245528: mflo        $a0
    ctx->r4 = lo;
    // 0x8024552C: lh          $a1, 0x2E($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X2E);
    // 0x80245530: nop

    // 0x80245534: mult        $a1, $v1
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80245538: mflo        $a1
    ctx->r5 = lo;
    // 0x8024553C: lh          $v0, 0x16($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X16);
    // 0x80245540: nop

    // 0x80245544: mult        $v0, $t1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80245548: mflo        $v0
    ctx->r2 = lo;
    // 0x8024554C: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80245550: nop

    // 0x80245554: div         $zero, $a1, $t0
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r8))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r8)));
    // 0x80245558: bne         $t0, $zero, L_80245564
    if (ctx->r8 != 0) {
        // 0x8024555C: nop
    
            goto L_80245564;
    }
    // 0x8024555C: nop

    // 0x80245560: break       7
    do_break(2149864800);
L_80245564:
    // 0x80245564: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80245568: bne         $t0, $at, L_8024557C
    if (ctx->r8 != ctx->r1) {
        // 0x8024556C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8024557C;
    }
    // 0x8024556C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80245570: bne         $a1, $at, L_8024557C
    if (ctx->r5 != ctx->r1) {
        // 0x80245574: nop
    
            goto L_8024557C;
    }
    // 0x80245574: nop

    // 0x80245578: break       6
    do_break(2149864824);
L_8024557C:
    // 0x8024557C: mflo        $a1
    ctx->r5 = lo;
    // 0x80245580: lh          $a2, 0x30($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X30);
    // 0x80245584: nop

    // 0x80245588: mult        $a2, $v1
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8024558C: mflo        $a2
    ctx->r6 = lo;
    // 0x80245590: lh          $v0, 0x18($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X18);
    // 0x80245594: nop

    // 0x80245598: mult        $v0, $t1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8024559C: mflo        $v0
    ctx->r2 = lo;
    // 0x802455A0: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x802455A4: nop

    // 0x802455A8: div         $zero, $a2, $t0
    lo = S32(S64(S32(ctx->r6)) / S64(S32(ctx->r8))); hi = S32(S64(S32(ctx->r6)) % S64(S32(ctx->r8)));
    // 0x802455AC: bne         $t0, $zero, L_802455B8
    if (ctx->r8 != 0) {
        // 0x802455B0: nop
    
            goto L_802455B8;
    }
    // 0x802455B0: nop

    // 0x802455B4: break       7
    do_break(2149864884);
L_802455B8:
    // 0x802455B8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802455BC: bne         $t0, $at, L_802455D0
    if (ctx->r8 != ctx->r1) {
        // 0x802455C0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_802455D0;
    }
    // 0x802455C0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802455C4: bne         $a2, $at, L_802455D0
    if (ctx->r6 != ctx->r1) {
        // 0x802455C8: nop
    
            goto L_802455D0;
    }
    // 0x802455C8: nop

    // 0x802455CC: break       6
    do_break(2149864908);
L_802455D0:
    // 0x802455D0: mflo        $a2
    ctx->r6 = lo;
    // 0x802455D4: lh          $a3, 0x32($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X32);
    // 0x802455D8: nop

    // 0x802455DC: mult        $a3, $v1
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802455E0: mflo        $a3
    ctx->r7 = lo;
    // 0x802455E4: lh          $v0, 0x1A($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X1A);
    // 0x802455E8: nop

    // 0x802455EC: mult        $v0, $t1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802455F0: mflo        $v0
    ctx->r2 = lo;
    // 0x802455F4: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x802455F8: nop

    // 0x802455FC: div         $zero, $a3, $t0
    lo = S32(S64(S32(ctx->r7)) / S64(S32(ctx->r8))); hi = S32(S64(S32(ctx->r7)) % S64(S32(ctx->r8)));
    // 0x80245600: bne         $t0, $zero, L_8024560C
    if (ctx->r8 != 0) {
        // 0x80245604: nop
    
            goto L_8024560C;
    }
    // 0x80245604: nop

    // 0x80245608: break       7
    do_break(2149864968);
L_8024560C:
    // 0x8024560C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80245610: bne         $t0, $at, L_80245624
    if (ctx->r8 != ctx->r1) {
        // 0x80245614: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80245624;
    }
    // 0x80245614: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80245618: bne         $a3, $at, L_80245624
    if (ctx->r7 != ctx->r1) {
        // 0x8024561C: nop
    
            goto L_80245624;
    }
    // 0x8024561C: nop

    // 0x80245620: break       6
    do_break(2149864992);
L_80245624:
    // 0x80245624: mflo        $a3
    ctx->r7 = lo;
    // 0x80245628: jal         0x80054984
    // 0x8024562C: nop

    func_80054984_2FD84(rdram, ctx);
        goto after_0;
    // 0x8024562C: nop

    after_0:
    // 0x80245630: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80245634: lbu         $v1, 0xB($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XB);
    // 0x80245638: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024563C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80245640: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80245644: sltu        $v1, $v1, $v0
    ctx->r3 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x80245648: beq         $v1, $zero, L_80245658
    if (ctx->r3 == 0) {
        // 0x8024564C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80245658;
    }
    // 0x8024564C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80245650:
    // 0x80245650: jal         0x8004F4F8
    // 0x80245654: nop

    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_1;
    // 0x80245654: nop

    after_1:
L_80245658:
    // 0x80245658: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8024565C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80245660: jr          $ra
    // 0x80245664: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80245664: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80245668: nop

    // 0x8024566C: nop

;}
RECOMP_FUNC void func_802337C0_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802337C0: lb          $v0, 0xA7($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XA7);
    // 0x802337C4: bgez        $v0, L_802337E0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802337C8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802337E0;
    }
    // 0x802337C8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802337CC: lhu         $v1, 0x348($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X348);
    // 0x802337D0: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
    // 0x802337D4: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    // 0x802337D8: andi        $v1, $v1, 0xFFFD
    ctx->r3 = ctx->r3 & 0XFFFD;
    // 0x802337DC: sh          $v1, 0x348($a0)
    MEM_H(0X348, ctx->r4) = ctx->r3;
L_802337E0:
    // 0x802337E0: jr          $ra
    // 0x802337E4: nop

    TRACE_RETURN()
    return;
    // 0x802337E4: nop

;}
RECOMP_FUNC void func_8022C640_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C640: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022C644: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C648: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C64C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022C650: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022C654: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022C658: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x8022C65C: beq         $v0, $zero, L_8022C874
    if (ctx->r2 == 0) {
        // 0x8022C660: addiu       $s1, $s0, 0x328
        ctx->r17 = ADD32(ctx->r16, 0X328);
            goto L_8022C874;
    }
    // 0x8022C660: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x8022C664: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022C668: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022C66C: addu        $at, $at, $v0
    gpr jr_addend_8022C674 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022C670: lw          $v0, 0x5CE0($at)
    ctx->r2 = ADD32(ctx->r1, 0X5CE0);
    // 0x8022C674: jr          $v0
    // 0x8022C678: nop

    switch (jr_addend_8022C674 >> 2) {
        case 0: goto L_8022C67C; break;
        case 1: goto L_8022C6A4; break;
        case 2: goto L_8022C728; break;
        case 3: goto L_8022C768; break;
        case 4: goto L_8022C7A4; break;
        default: switch_error(__func__, 0x8022C674, 0x80255CE0);
    }
    // 0x8022C678: nop

L_8022C67C:
    // 0x8022C67C: addiu       $a0, $zero, 0xB1
    ctx->r4 = ADD32(0, 0XB1);
    // 0x8022C680: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022C684: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C688: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022C68C: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
    // 0x8022C690: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022C694: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x8022C698: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022C69C: jal         0x8002A33C
    // 0x8022C6A0: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x8022C6A0: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
    after_0:
L_8022C6A4:
    // 0x8022C6A4: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022C6A8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022C6AC: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022C6B0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C6B4: bgez        $v0, L_8022C6E0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022C6B8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022C6E0;
    }
    // 0x8022C6B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C6BC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022C6C0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022C6C4: lh          $v0, 0x6($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X6);
    // 0x8022C6C8: beq         $v0, $zero, L_8022C6D8
    if (ctx->r2 == 0) {
        // 0x8022C6CC: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_8022C6D8;
    }
    // 0x8022C6CC: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022C6D0: j           L_8022C728
    // 0x8022C6D4: sh          $zero, 0x4($s1)
    MEM_H(0X4, ctx->r17) = 0;
        goto L_8022C728;
    // 0x8022C6D4: sh          $zero, 0x4($s1)
    MEM_H(0X4, ctx->r17) = 0;
L_8022C6D8:
    // 0x8022C6D8: j           L_8022C728
    // 0x8022C6DC: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
        goto L_8022C728;
    // 0x8022C6DC: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_8022C6E0:
    // 0x8022C6E0: addiu       $a1, $zero, -0x70
    ctx->r5 = ADD32(0, -0X70);
L_8022C6E4:
    // 0x8022C6E4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022C6E8: jal         0x8004DA90
    // 0x8022C6EC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x8022C6EC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x8022C6F0: jal         0x80040F30
    // 0x8022C6F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_2;
    // 0x8022C6F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022C6F8: jal         0x8003E934
    // 0x8022C6FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_3;
    // 0x8022C6FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022C700: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022C704: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x8022C708: lh          $v1, 0x2E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2E);
    // 0x8022C70C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C710: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022C714: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x8022C718: bgez        $v0, L_8022C838
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022C71C: slti        $v0, $v0, 0x21
        ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
            goto L_8022C838;
    }
    // 0x8022C71C: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x8022C720: j           L_8022C84C
    // 0x8022C724: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
        goto L_8022C84C;
    // 0x8022C724: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
L_8022C728:
    // 0x8022C728: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022C72C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022C730: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022C734: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C738: bgtz        $v0, L_8022C874
    if (SIGNED(ctx->r2) > 0) {
        // 0x8022C73C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022C874;
    }
    // 0x8022C73C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C740: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022C744: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8022C748: sb          $v1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r3;
    // 0x8022C74C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022C750: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x8022C754: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x8022C758: jal         0x8022D570
    // 0x8022C75C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    func_8022D570_ovl28(rdram, ctx);
        goto after_4;
    // 0x8022C75C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    after_4:
    // 0x8022C760: j           L_8022C874
    // 0x8022C764: nop

        goto L_8022C874;
    // 0x8022C764: nop

L_8022C768:
    // 0x8022C768: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022C76C: addiu       $a1, $v0, -0x1
    ctx->r5 = ADD32(ctx->r2, -0X1);
    // 0x8022C770: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
    // 0x8022C774: bgez        $v0, L_8022C790
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022C778: sh          $a1, 0x4($s1)
        MEM_H(0X4, ctx->r17) = ctx->r5;
            goto L_8022C790;
    }
    // 0x8022C778: sh          $a1, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r5;
    // 0x8022C77C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022C780: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022C784: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022C788: j           L_8022C7A4
    // 0x8022C78C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
        goto L_8022C7A4;
    // 0x8022C78C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_8022C790:
    // 0x8022C790: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C794: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    // 0x8022C798: sll         $a1, $a1, 21
    ctx->r5 = S32(ctx->r5 << 21);
    // 0x8022C79C: j           L_8022C6E4
    // 0x8022C7A0: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
        goto L_8022C6E4;
    // 0x8022C7A0: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
L_8022C7A4:
    // 0x8022C7A4: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022C7A8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022C7AC: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022C7B0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C7B4: bgez        $v0, L_8022C7F8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022C7B8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022C7F8;
    }
    // 0x8022C7B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C7BC: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8022C7C0: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8022C7C4: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x8022C7C8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022C7CC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022C7D0: lh          $v1, 0x6($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X6);
    // 0x8022C7D4: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8022C7D8: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x8022C7DC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022C7E0: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022C7E4: lbu         $v1, 0xC($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0XC);
    // 0x8022C7E8: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022C7EC: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8022C7F0: j           L_8022C874
    // 0x8022C7F4: sh          $v1, 0x34($s1)
    MEM_H(0X34, ctx->r17) = ctx->r3;
        goto L_8022C874;
    // 0x8022C7F4: sh          $v1, 0x34($s1)
    MEM_H(0X34, ctx->r17) = ctx->r3;
L_8022C7F8:
    // 0x8022C7F8: addiu       $a1, $zero, 0xE0
    ctx->r5 = ADD32(0, 0XE0);
    // 0x8022C7FC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022C800: jal         0x8004DA90
    // 0x8022C804: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_5;
    // 0x8022C804: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_5:
    // 0x8022C808: jal         0x80040F30
    // 0x8022C80C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_6;
    // 0x8022C80C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x8022C810: jal         0x8003E934
    // 0x8022C814: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_7;
    // 0x8022C814: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x8022C818: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022C81C: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x8022C820: lh          $v1, 0x2E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2E);
    // 0x8022C824: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C828: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022C82C: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x8022C830: bltz        $v0, L_8022C848
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022C834: slti        $v0, $v0, 0x21
        ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
            goto L_8022C848;
    }
    // 0x8022C834: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
L_8022C838:
    // 0x8022C838: beq         $v0, $zero, L_8022C858
    if (ctx->r2 == 0) {
        // 0x8022C83C: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022C858;
    }
    // 0x8022C83C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022C840: j           L_8022C874
    // 0x8022C844: nop

        goto L_8022C874;
    // 0x8022C844: nop

L_8022C848:
    // 0x8022C848: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
L_8022C84C:
    // 0x8022C84C: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x8022C850: bne         $v0, $zero, L_8022C874
    if (ctx->r2 != 0) {
        // 0x8022C854: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022C874;
    }
    // 0x8022C854: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_8022C858:
    // 0x8022C858: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x8022C85C: jal         0x8009A3B4
    // 0x8022C860: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x8022C860: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_8:
    // 0x8022C864: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8022C868: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x8022C86C: jal         0x8009A3B4
    // 0x8022C870: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_9;
    // 0x8022C870: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_9:
L_8022C874:
    // 0x8022C874: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022C878: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022C87C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C880: jr          $ra
    // 0x8022C884: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022C884: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80229A3C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229A3C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229A40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80229A44: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229A48: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80229A4C: lw          $s0, 0x24($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X24);
    // 0x80229A50: bne         $v0, $zero, L_80229B14
    if (ctx->r2 != 0) {
        // 0x80229A54: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80229B14;
    }
    // 0x80229A54: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80229A58: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80229A5C: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x80229A60: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x80229A64: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80229A68: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x80229A6C: addiu       $v0, $zero, 0x1A
    ctx->r2 = ADD32(0, 0X1A);
    // 0x80229A70: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80229A74: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x80229A78: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x80229A7C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80229A80: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x80229A84: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80229A88: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80229A8C: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x80229A90: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80229A94: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x80229A98: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80229A9C: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x80229AA0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80229AA4: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x80229AA8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80229AAC: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80229AB0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80229AB4: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x80229AB8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80229ABC: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x80229AC0: andi        $v1, $v1, 0xFD
    ctx->r3 = ctx->r3 & 0XFD;
    // 0x80229AC4: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
    // 0x80229AC8: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80229ACC: jal         0x8005FA7C
    // 0x80229AD0: addiu       $a0, $a0, 0x19C8
    ctx->r4 = ADD32(ctx->r4, 0X19C8);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_0;
    // 0x80229AD0: addiu       $a0, $a0, 0x19C8
    ctx->r4 = ADD32(ctx->r4, 0X19C8);
    after_0:
    // 0x80229AD4: sh          $zero, 0x14($s0)
    MEM_H(0X14, ctx->r16) = 0;
    // 0x80229AD8: lh          $v1, 0x14($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X14);
    // 0x80229ADC: addiu       $v0, $zero, -0x64
    ctx->r2 = ADD32(0, -0X64);
    // 0x80229AE0: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80229AE4: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x80229AE8: addiu       $v0, $zero, -0xC8
    ctx->r2 = ADD32(0, -0XC8);
    // 0x80229AEC: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x80229AF0: lh          $a1, 0x18($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X18);
    // 0x80229AF4: addiu       $v0, $zero, -0x18
    ctx->r2 = ADD32(0, -0X18);
    // 0x80229AF8: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x80229AFC: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80229B00: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80229B04: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x80229B08: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
    // 0x80229B0C: sw          $a0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r4;
    // 0x80229B10: sw          $a1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r5;
L_80229B14:
    // 0x80229B14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80229B18: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229B1C: jr          $ra
    // 0x80229B20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229B20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022FCA4_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FCA4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022FCA8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022FCAC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022FCB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022FCB4: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022FCB8: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x8022FCBC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022FCC0: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022FCC4: jal         0x8004F820
    // 0x8022FCC8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022FCC8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x8022FCCC: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022FCD0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022FCD4: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022FCD8: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022FCDC: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022FCE0: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x8022FCE4: bne         $v0, $zero, L_8022FD08
    if (ctx->r2 != 0) {
        // 0x8022FCE8: addiu       $v1, $zero, 0x9
        ctx->r3 = ADD32(0, 0X9);
            goto L_8022FD08;
    }
    // 0x8022FCE8: addiu       $v1, $zero, 0x9
    ctx->r3 = ADD32(0, 0X9);
    // 0x8022FCEC: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022FCF0: lbu         $a0, 0x34B($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022FCF4: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x8022FCF8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8022FCFC: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x8022FD00: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    // 0x8022FD04: sb          $a0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r4;
L_8022FD08:
    // 0x8022FD08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022FD0C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022FD10: jr          $ra
    // 0x8022FD14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022FD14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80249F00_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80249F00: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80249F04: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80249F08: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80249F0C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80249F10: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80249F14: beq         $v1, $zero, L_80249F2C
    if (ctx->r3 == 0) {
        // 0x80249F18: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80249F2C;
    }
    // 0x80249F18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80249F1C: beq         $v1, $v0, L_80249F60
    if (ctx->r3 == ctx->r2) {
        // 0x80249F20: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_80249F60;
    }
    // 0x80249F20: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80249F24: j           L_80249F94
    // 0x80249F28: nop

        goto L_80249F94;
    // 0x80249F28: nop

L_80249F2C:
    // 0x80249F2C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80249F30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80249F34: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    // 0x80249F38: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x80249F3C: jal         0x8004D5D4
    // 0x80249F40: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80249F40: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x80249F44: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80249F48: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x80249F4C: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x80249F50: sw          $v1, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r3;
    // 0x80249F54: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80249F58: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80249F5C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
L_80249F60:
    // 0x80249F60: addiu       $s0, $s0, 0x18
    ctx->r16 = ADD32(ctx->r16, 0X18);
    // 0x80249F64: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80249F68: sh          $zero, 0x10($sp)
    MEM_H(0X10, ctx->r29) = 0;
    // 0x80249F6C: sh          $zero, 0x12($sp)
    MEM_H(0X12, ctx->r29) = 0;
    // 0x80249F70: jal         0x80031600
    // 0x80249F74: sh          $zero, 0x14($sp)
    MEM_H(0X14, ctx->r29) = 0;
    func_80031600_CA00(rdram, ctx);
        goto after_1;
    // 0x80249F74: sh          $zero, 0x14($sp)
    MEM_H(0X14, ctx->r29) = 0;
    after_1:
    // 0x80249F78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80249F7C: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x80249F80: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x80249F84: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80249F88: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80249F8C: jal         0x80031DA8
    // 0x80249F90: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_2;
    // 0x80249F90: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    after_2:
L_80249F94:
    // 0x80249F94: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80249F98: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80249F9C: jr          $ra
    // 0x80249FA0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80249FA0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80249FA4: nop

    // 0x80249FA8: nop

    // 0x80249FAC: nop

;}
RECOMP_FUNC void func_80242860_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80242860: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80242864: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80242868: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8024286C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80242870: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80242874: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80242878: lw          $v0, 0x4B60($at)
    ctx->r2 = MEM_W(ctx->r1, 0X4B60);
    // 0x8024287C: jalr        $v0
    // 0x80242880: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80242880: nop

    after_0:
    // 0x80242884: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80242888: jr          $ra
    // 0x8024288C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8024288C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023A968_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A968: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023A96C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023A970: lb          $v0, 0xA7($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XA7);
    // 0x8023A974: beq         $v0, $zero, L_8023A98C
    if (ctx->r2 == 0) {
        // 0x8023A978: nop
    
            goto L_8023A98C;
    }
    // 0x8023A978: nop

    // 0x8023A97C: jal         0x8023ACE4
    // 0x8023A980: nop

    func_8023ACE4_ovl28(rdram, ctx);
        goto after_0;
    // 0x8023A980: nop

    after_0:
    // 0x8023A984: j           L_8023A994
    // 0x8023A988: nop

        goto L_8023A994;
    // 0x8023A988: nop

L_8023A98C:
    // 0x8023A98C: jal         0x8005044C
    // 0x8023A990: nop

    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x8023A990: nop

    after_1:
L_8023A994:
    // 0x8023A994: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023A998: jr          $ra
    // 0x8023A99C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023A99C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802310B8_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802310B8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802310BC: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802310C0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802310C4: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x802310C8: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x802310CC: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x802310D0: lbu         $a0, 0x8($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X8);
    // 0x802310D4: addiu       $v1, $zero, 0x4210
    ctx->r3 = ADD32(0, 0X4210);
    // 0x802310D8: addiu       $s1, $s0, 0x308
    ctx->r17 = ADD32(ctx->r16, 0X308);
    // 0x802310DC: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x802310E0: beq         $a0, $zero, L_80231114
    if (ctx->r4 == 0) {
        // 0x802310E4: sb          $v0, 0xAD($s0)
        MEM_B(0XAD, ctx->r16) = ctx->r2;
            goto L_80231114;
    }
    // 0x802310E4: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x802310E8: addiu       $a0, $s0, 0x328
    ctx->r4 = ADD32(ctx->r16, 0X328);
    // 0x802310EC: jal         0x800540D0
    // 0x802310F0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_800540D0_2F4D0(rdram, ctx);
        goto after_0;
    // 0x802310F0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x802310F4: beq         $v0, $zero, L_80231108
    if (ctx->r2 == 0) {
        // 0x802310F8: nop
    
            goto L_80231108;
    }
    // 0x802310F8: nop

    // 0x802310FC: lhu         $v0, 0x308($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X308);
    // 0x80231100: j           L_80231110
    // 0x80231104: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
        goto L_80231110;
    // 0x80231104: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
L_80231108:
    // 0x80231108: lhu         $v0, 0x308($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X308);
    // 0x8023110C: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
L_80231110:
    // 0x80231110: sh          $v0, 0x308($s0)
    MEM_H(0X308, ctx->r16) = ctx->r2;
L_80231114:
    // 0x80231114: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80231118: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023111C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80231120: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80231124: lw          $v0, 0x3878($at)
    ctx->r2 = MEM_W(ctx->r1, 0X3878);
    // 0x80231128: jalr        $v0
    // 0x8023112C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x8023112C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80231130: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80231134: bne         $v0, $zero, L_80231158
    if (ctx->r2 != 0) {
        // 0x80231138: addiu       $a0, $s1, 0x8
        ctx->r4 = ADD32(ctx->r17, 0X8);
            goto L_80231158;
    }
    // 0x80231138: addiu       $a0, $s1, 0x8
    ctx->r4 = ADD32(ctx->r17, 0X8);
    // 0x8023113C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80231140: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80231144: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x80231148: jal         0x80047284
    // 0x8023114C: lui         $a3, 0x100
    ctx->r7 = S32(0X100 << 16);
    func_80047284_22684(rdram, ctx);
        goto after_2;
    // 0x8023114C: lui         $a3, 0x100
    ctx->r7 = S32(0X100 << 16);
    after_2:
    // 0x80231150: j           L_80231188
    // 0x80231154: nop

        goto L_80231188;
    // 0x80231154: nop

L_80231158:
    // 0x80231158: lh          $a1, 0x16($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X16);
    // 0x8023115C: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80231160: addiu       $v0, $s1, 0x18
    ctx->r2 = ADD32(ctx->r17, 0X18);
    // 0x80231164: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80231168: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x8023116C: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x80231170: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80231174: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x80231178: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8023117C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80231180: jal         0x80051E18
    // 0x80231184: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80051E18_2D218(rdram, ctx);
        goto after_3;
    // 0x80231184: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_3:
L_80231188:
    // 0x80231188: lbu         $v1, 0xAD($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XAD);
    // 0x8023118C: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x80231190: bnel        $v1, $v0, L_802311A4
    if (ctx->r3 != ctx->r2) {
        // 0x80231194: sw          $zero, 0x18($s1)
        MEM_W(0X18, ctx->r17) = 0;
            goto L_802311A4;
    }
    goto skip_0;
    // 0x80231194: sw          $zero, 0x18($s1)
    MEM_W(0X18, ctx->r17) = 0;
    skip_0:
    // 0x80231198: jal         0x8005044C
    // 0x8023119C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_4;
    // 0x8023119C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x802311A0: sw          $zero, 0x18($s1)
    MEM_W(0X18, ctx->r17) = 0;
L_802311A4:
    // 0x802311A4: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x802311A8: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x802311AC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802311B0: jr          $ra
    // 0x802311B4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x802311B4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_802264D0_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802264D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802264D4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802264D8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802264DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802264E0: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x802264E4: bne         $v0, $zero, L_80226528
    if (ctx->r2 != 0) {
        // 0x802264E8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80226528;
    }
    // 0x802264E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802264EC: jal         0x8004F144
    // 0x802264F0: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x802264F0: nop

    after_0:
    // 0x802264F4: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x802264F8: beq         $a1, $zero, L_80226524
    if (ctx->r5 == 0) {
        // 0x802264FC: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_80226524;
    }
    // 0x802264FC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80226500: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    // 0x80226504: addiu       $v0, $zero, 0x1C
    ctx->r2 = ADD32(0, 0X1C);
    // 0x80226508: sb          $v0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r2;
    // 0x8022650C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80226510: sb          $v1, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r3;
    // 0x80226514: sb          $v0, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r2;
    // 0x80226518: lbu         $v0, 0x1($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X1);
    // 0x8022651C: sb          $v1, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r3;
    // 0x80226520: sb          $v0, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r2;
L_80226524:
    // 0x80226524: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80226528:
    // 0x80226528: jal         0x80226BC4
    // 0x8022652C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_80226BC4_ovl28(rdram, ctx);
        goto after_1;
    // 0x8022652C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_1:
    // 0x80226530: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226534: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226538: jr          $ra
    // 0x8022653C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022653C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802329A8_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802329A8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802329AC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802329B0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802329B4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802329B8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802329BC: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x802329C0: beq         $v0, $zero, L_802329E0
    if (ctx->r2 == 0) {
        // 0x802329C4: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_802329E0;
    }
    // 0x802329C4: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x802329C8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802329CC: jal         0x8004DE68
    // 0x802329D0: addiu       $a1, $s0, 0x398
    ctx->r5 = ADD32(ctx->r16, 0X398);
    func_8004DE68_29268(rdram, ctx);
        goto after_0;
    // 0x802329D0: addiu       $a1, $s0, 0x398
    ctx->r5 = ADD32(ctx->r16, 0X398);
    after_0:
    // 0x802329D4: sltiu       $v0, $v0, 0xB
    ctx->r2 = ctx->r2 < 0XB ? 1 : 0;
    // 0x802329D8: beq         $v0, $zero, L_80232A04
    if (ctx->r2 == 0) {
        // 0x802329DC: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_80232A04;
    }
    // 0x802329DC: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_802329E0:
    // 0x802329E0: jal         0x80233818
    // 0x802329E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80233818_ovl28(rdram, ctx);
        goto after_1;
    // 0x802329E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802329E8: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x802329EC: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x802329F0: beq         $v0, $zero, L_80232A20
    if (ctx->r2 == 0) {
        // 0x802329F4: nop
    
            goto L_80232A20;
    }
    // 0x802329F4: nop

    // 0x802329F8: bgez        $v0, L_80232A10
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802329FC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80232A10;
    }
    // 0x802329FC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80232A00: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_80232A04:
    // 0x80232A04: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80232A08: j           L_80232A6C
    // 0x80232A0C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
        goto L_80232A6C;
    // 0x80232A0C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_80232A10:
    // 0x80232A10: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80232A14: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80232A18: j           L_80232A6C
    // 0x80232A1C: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
        goto L_80232A6C;
    // 0x80232A1C: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
L_80232A20:
    // 0x80232A20: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80232A24: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x80232A28: beq         $v0, $zero, L_80232A6C
    if (ctx->r2 == 0) {
        // 0x80232A2C: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80232A6C;
    }
    // 0x80232A2C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80232A30: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80232A34: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80232A38: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x80232A3C: jal         0x8004F820
    // 0x80232A40: addiu       $a3, $zero, 0x34
    ctx->r7 = ADD32(0, 0X34);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x80232A40: addiu       $a3, $zero, 0x34
    ctx->r7 = ADD32(0, 0X34);
    after_2:
    // 0x80232A44: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80232A48: lb          $a0, 0xA7($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XA7);
    // 0x80232A4C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80232A50: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80232A54: bgez        $a0, L_80232A6C
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80232A58: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_80232A6C;
    }
    // 0x80232A58: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80232A5C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80232A60: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x80232A64: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232A68: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80232A6C:
    // 0x80232A6C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80232A70: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80232A74: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232A78: jr          $ra
    // 0x80232A7C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80232A7C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023C510_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023C510: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023C514: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x8023C518: sb          $zero, 0xE($a1)
    MEM_B(0XE, ctx->r5) = 0;
    // 0x8023C51C: sb          $zero, 0xC($a1)
    MEM_B(0XC, ctx->r5) = 0;
    // 0x8023C520: sb          $v0, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r2;
    // 0x8023C524: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8023C528: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x8023C52C: lw          $v0, 0x47E8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X47E8);
    // 0x8023C530: jr          $ra
    // 0x8023C534: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x8023C534: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_80235178_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235178: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023517C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80235180: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80235184: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80235188: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023518C: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80235190: sltiu       $v0, $v1, 0x7
    ctx->r2 = ctx->r3 < 0X7 ? 1 : 0;
    // 0x80235194: beq         $v0, $zero, L_802356D0
    if (ctx->r2 == 0) {
        // 0x80235198: addu        $s1, $a2, $zero
        ctx->r17 = ADD32(ctx->r6, 0);
            goto L_802356D0;
    }
    // 0x80235198: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x8023519C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802351A0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802351A4: addu        $at, $at, $v0
    gpr jr_addend_802351AC = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802351A8: lw          $v0, 0x5DB0($at)
    ctx->r2 = ADD32(ctx->r1, 0X5DB0);
    // 0x802351AC: jr          $v0
    // 0x802351B0: nop

    switch (jr_addend_802351AC >> 2) {
        case 0: goto L_802351B4; break;
        case 1: goto L_802351DC; break;
        case 2: goto L_802352DC; break;
        case 3: goto L_802353C8; break;
        case 4: goto L_80235540; break;
        case 5: goto L_80235598; break;
        case 6: goto L_80235634; break;
        default: switch_error(__func__, 0x802351AC, 0x80255DB0);
    }
    // 0x802351B0: nop

L_802351B4:
    // 0x802351B4: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x802351B8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802351BC: bne         $v1, $v0, L_802356D0
    if (ctx->r3 != ctx->r2) {
        // 0x802351C0: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_802356D0;
    }
    // 0x802351C0: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x802351C4: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x802351C8: bne         $v1, $v0, L_802356D0
    if (ctx->r3 != ctx->r2) {
        // 0x802351CC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802356D0;
    }
    // 0x802351CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802351D0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802351D4: j           L_80235624
    // 0x802351D8: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
        goto L_80235624;
    // 0x802351D8: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
L_802351DC:
    // 0x802351DC: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x802351E0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802351E4: bne         $v1, $v0, L_802352BC
    if (ctx->r3 != ctx->r2) {
        // 0x802351E8: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_802352BC;
    }
    // 0x802351E8: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x802351EC: lw          $a1, 0x10($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X10);
    // 0x802351F0: addiu       $v0, $zero, 0xF0
    ctx->r2 = ADD32(0, 0XF0);
    // 0x802351F4: beq         $a1, $v0, L_8023528C
    if (ctx->r5 == ctx->r2) {
        // 0x802351F8: slti        $v0, $a1, 0xF1
        ctx->r2 = SIGNED(ctx->r5) < 0XF1 ? 1 : 0;
            goto L_8023528C;
    }
    // 0x802351F8: slti        $v0, $a1, 0xF1
    ctx->r2 = SIGNED(ctx->r5) < 0XF1 ? 1 : 0;
    // 0x802351FC: beq         $v0, $zero, L_80235240
    if (ctx->r2 == 0) {
        // 0x80235200: addiu       $v0, $zero, 0x6E
        ctx->r2 = ADD32(0, 0X6E);
            goto L_80235240;
    }
    // 0x80235200: addiu       $v0, $zero, 0x6E
    ctx->r2 = ADD32(0, 0X6E);
    // 0x80235204: beq         $a1, $v0, L_802352A4
    if (ctx->r5 == ctx->r2) {
        // 0x80235208: slti        $v0, $a1, 0x6F
        ctx->r2 = SIGNED(ctx->r5) < 0X6F ? 1 : 0;
            goto L_802352A4;
    }
    // 0x80235208: slti        $v0, $a1, 0x6F
    ctx->r2 = SIGNED(ctx->r5) < 0X6F ? 1 : 0;
    // 0x8023520C: beq         $v0, $zero, L_80235224
    if (ctx->r2 == 0) {
        // 0x80235210: addiu       $v0, $zero, 0x22
        ctx->r2 = ADD32(0, 0X22);
            goto L_80235224;
    }
    // 0x80235210: addiu       $v0, $zero, 0x22
    ctx->r2 = ADD32(0, 0X22);
    // 0x80235214: beq         $a1, $v0, L_80235290
    if (ctx->r5 == ctx->r2) {
        // 0x80235218: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80235290;
    }
    // 0x80235218: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023521C: j           L_802356D0
    // 0x80235220: nop

        goto L_802356D0;
    // 0x80235220: nop

L_80235224:
    // 0x80235224: addiu       $v0, $zero, 0x7A
    ctx->r2 = ADD32(0, 0X7A);
    // 0x80235228: beq         $a1, $v0, L_8023528C
    if (ctx->r5 == ctx->r2) {
        // 0x8023522C: addiu       $v0, $zero, 0xC8
        ctx->r2 = ADD32(0, 0XC8);
            goto L_8023528C;
    }
    // 0x8023522C: addiu       $v0, $zero, 0xC8
    ctx->r2 = ADD32(0, 0XC8);
    // 0x80235230: beq         $a1, $v0, L_802352A8
    if (ctx->r5 == ctx->r2) {
        // 0x80235234: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802352A8;
    }
    // 0x80235234: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235238: j           L_802356D0
    // 0x8023523C: nop

        goto L_802356D0;
    // 0x8023523C: nop

L_80235240:
    // 0x80235240: addiu       $v0, $zero, 0x127
    ctx->r2 = ADD32(0, 0X127);
    // 0x80235244: beq         $a1, $v0, L_802352A4
    if (ctx->r5 == ctx->r2) {
        // 0x80235248: slti        $v0, $a1, 0x128
        ctx->r2 = SIGNED(ctx->r5) < 0X128 ? 1 : 0;
            goto L_802352A4;
    }
    // 0x80235248: slti        $v0, $a1, 0x128
    ctx->r2 = SIGNED(ctx->r5) < 0X128 ? 1 : 0;
    // 0x8023524C: beq         $v0, $zero, L_80235264
    if (ctx->r2 == 0) {
        // 0x80235250: addiu       $v0, $zero, 0x10E
        ctx->r2 = ADD32(0, 0X10E);
            goto L_80235264;
    }
    // 0x80235250: addiu       $v0, $zero, 0x10E
    ctx->r2 = ADD32(0, 0X10E);
    // 0x80235254: beq         $a1, $v0, L_80235280
    if (ctx->r5 == ctx->r2) {
        // 0x80235258: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80235280;
    }
    // 0x80235258: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023525C: j           L_802356D0
    // 0x80235260: nop

        goto L_802356D0;
    // 0x80235260: nop

L_80235264:
    // 0x80235264: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
    // 0x80235268: beq         $a1, $v0, L_8023528C
    if (ctx->r5 == ctx->r2) {
        // 0x8023526C: addiu       $v0, $zero, 0x181
        ctx->r2 = ADD32(0, 0X181);
            goto L_8023528C;
    }
    // 0x8023526C: addiu       $v0, $zero, 0x181
    ctx->r2 = ADD32(0, 0X181);
    // 0x80235270: beq         $a1, $v0, L_802352A8
    if (ctx->r5 == ctx->r2) {
        // 0x80235274: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802352A8;
    }
    // 0x80235274: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235278: j           L_802356D0
    // 0x8023527C: nop

        goto L_802356D0;
    // 0x8023527C: nop

L_80235280:
    // 0x80235280: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80235284: j           L_802356D0
    // 0x80235288: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
        goto L_802356D0;
    // 0x80235288: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
L_8023528C:
    // 0x8023528C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80235290:
    // 0x80235290: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80235294: jal         0x8023570C
    // 0x80235298: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_8023570C_ovl28(rdram, ctx);
        goto after_0;
    // 0x80235298: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_0:
    // 0x8023529C: j           L_802356D0
    // 0x802352A0: nop

        goto L_802356D0;
    // 0x802352A0: nop

L_802352A4:
    // 0x802352A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_802352A8:
    // 0x802352A8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802352AC: jal         0x8023570C
    // 0x802352B0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8023570C_ovl28(rdram, ctx);
        goto after_1;
    // 0x802352B0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x802352B4: j           L_802356D0
    // 0x802352B8: nop

        goto L_802356D0;
    // 0x802352B8: nop

L_802352BC:
    // 0x802352BC: bne         $v1, $v0, L_802356D0
    if (ctx->r3 != ctx->r2) {
        // 0x802352C0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802356D0;
    }
    // 0x802352C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802352C4: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x802352C8: bne         $v1, $v0, L_802356D0
    if (ctx->r3 != ctx->r2) {
        // 0x802352CC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802356D0;
    }
    // 0x802352CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802352D0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802352D4: j           L_8023561C
    // 0x802352D8: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
        goto L_8023561C;
    // 0x802352D8: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
L_802352DC:
    // 0x802352DC: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x802352E0: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x802352E4: bne         $v1, $v0, L_8023539C
    if (ctx->r3 != ctx->r2) {
        // 0x802352E8: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_8023539C;
    }
    // 0x802352E8: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x802352EC: lw          $a1, 0x10($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X10);
    // 0x802352F0: addiu       $v0, $zero, 0xD5
    ctx->r2 = ADD32(0, 0XD5);
    // 0x802352F4: beq         $a1, $v0, L_80235370
    if (ctx->r5 == ctx->r2) {
        // 0x802352F8: slti        $v0, $a1, 0xD6
        ctx->r2 = SIGNED(ctx->r5) < 0XD6 ? 1 : 0;
            goto L_80235370;
    }
    // 0x802352F8: slti        $v0, $a1, 0xD6
    ctx->r2 = SIGNED(ctx->r5) < 0XD6 ? 1 : 0;
    // 0x802352FC: beq         $v0, $zero, L_80235338
    if (ctx->r2 == 0) {
        // 0x80235300: addiu       $v0, $zero, 0x67
        ctx->r2 = ADD32(0, 0X67);
            goto L_80235338;
    }
    // 0x80235300: addiu       $v0, $zero, 0x67
    ctx->r2 = ADD32(0, 0X67);
    // 0x80235304: beq         $a1, $v0, L_80235370
    if (ctx->r5 == ctx->r2) {
        // 0x80235308: slti        $v0, $a1, 0x68
        ctx->r2 = SIGNED(ctx->r5) < 0X68 ? 1 : 0;
            goto L_80235370;
    }
    // 0x80235308: slti        $v0, $a1, 0x68
    ctx->r2 = SIGNED(ctx->r5) < 0X68 ? 1 : 0;
    // 0x8023530C: beq         $v0, $zero, L_80235324
    if (ctx->r2 == 0) {
        // 0x80235310: addiu       $v0, $zero, 0x4A
        ctx->r2 = ADD32(0, 0X4A);
            goto L_80235324;
    }
    // 0x80235310: addiu       $v0, $zero, 0x4A
    ctx->r2 = ADD32(0, 0X4A);
    // 0x80235314: beq         $a1, $v0, L_80235388
    if (ctx->r5 == ctx->r2) {
        // 0x80235318: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80235388;
    }
    // 0x80235318: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023531C: j           L_802356D0
    // 0x80235320: nop

        goto L_802356D0;
    // 0x80235320: nop

L_80235324:
    // 0x80235324: addiu       $v0, $zero, 0xC3
    ctx->r2 = ADD32(0, 0XC3);
    // 0x80235328: beq         $a1, $v0, L_80235388
    if (ctx->r5 == ctx->r2) {
        // 0x8023532C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80235388;
    }
    // 0x8023532C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235330: j           L_802356D0
    // 0x80235334: nop

        goto L_802356D0;
    // 0x80235334: nop

L_80235338:
    // 0x80235338: addiu       $v0, $zero, 0x125
    ctx->r2 = ADD32(0, 0X125);
    // 0x8023533C: beq         $a1, $v0, L_80235370
    if (ctx->r5 == ctx->r2) {
        // 0x80235340: slti        $v0, $a1, 0x126
        ctx->r2 = SIGNED(ctx->r5) < 0X126 ? 1 : 0;
            goto L_80235370;
    }
    // 0x80235340: slti        $v0, $a1, 0x126
    ctx->r2 = SIGNED(ctx->r5) < 0X126 ? 1 : 0;
    // 0x80235344: beq         $v0, $zero, L_8023535C
    if (ctx->r2 == 0) {
        // 0x80235348: addiu       $v0, $zero, 0x111
        ctx->r2 = ADD32(0, 0X111);
            goto L_8023535C;
    }
    // 0x80235348: addiu       $v0, $zero, 0x111
    ctx->r2 = ADD32(0, 0X111);
    // 0x8023534C: beq         $a1, $v0, L_80235388
    if (ctx->r5 == ctx->r2) {
        // 0x80235350: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80235388;
    }
    // 0x80235350: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235354: j           L_802356D0
    // 0x80235358: nop

        goto L_802356D0;
    // 0x80235358: nop

L_8023535C:
    // 0x8023535C: addiu       $v0, $zero, 0x193
    ctx->r2 = ADD32(0, 0X193);
    // 0x80235360: beq         $a1, $v0, L_80235388
    if (ctx->r5 == ctx->r2) {
        // 0x80235364: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80235388;
    }
    // 0x80235364: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235368: j           L_802356D0
    // 0x8023536C: nop

        goto L_802356D0;
    // 0x8023536C: nop

L_80235370:
    // 0x80235370: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235374: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80235378: jal         0x8023570C
    // 0x8023537C: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    func_8023570C_ovl28(rdram, ctx);
        goto after_2;
    // 0x8023537C: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    after_2:
    // 0x80235380: j           L_802356D0
    // 0x80235384: nop

        goto L_802356D0;
    // 0x80235384: nop

L_80235388:
    // 0x80235388: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023538C: jal         0x8023570C
    // 0x80235390: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    func_8023570C_ovl28(rdram, ctx);
        goto after_3;
    // 0x80235390: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_3:
    // 0x80235394: j           L_802356D0
    // 0x80235398: nop

        goto L_802356D0;
    // 0x80235398: nop

L_8023539C:
    // 0x8023539C: bne         $v1, $v0, L_802356D0
    if (ctx->r3 != ctx->r2) {
        // 0x802353A0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802356D0;
    }
    // 0x802353A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802353A4: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x802353A8: bne         $v1, $v0, L_802356D0
    if (ctx->r3 != ctx->r2) {
        // 0x802353AC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802356D0;
    }
    // 0x802353AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802353B0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802353B4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x802353B8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802353BC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802353C0: j           L_8023561C
    // 0x802353C4: sh          $zero, 0x2($a1)
    MEM_H(0X2, ctx->r5) = 0;
        goto L_8023561C;
    // 0x802353C4: sh          $zero, 0x2($a1)
    MEM_H(0X2, ctx->r5) = 0;
L_802353C8:
    // 0x802353C8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802353CC: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x802353D0: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x802353D4: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x802353D8: bne         $v1, $v0, L_80235520
    if (ctx->r3 != ctx->r2) {
        // 0x802353DC: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_80235520;
    }
    // 0x802353DC: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x802353E0: lw          $a1, 0x10($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X10);
    // 0x802353E4: addiu       $v0, $zero, 0xD2
    ctx->r2 = ADD32(0, 0XD2);
    // 0x802353E8: beq         $a1, $v0, L_802354F0
    if (ctx->r5 == ctx->r2) {
        // 0x802353EC: slti        $v0, $a1, 0xD3
        ctx->r2 = SIGNED(ctx->r5) < 0XD3 ? 1 : 0;
            goto L_802354F0;
    }
    // 0x802353EC: slti        $v0, $a1, 0xD3
    ctx->r2 = SIGNED(ctx->r5) < 0XD3 ? 1 : 0;
    // 0x802353F0: beq         $v0, $zero, L_80235458
    if (ctx->r2 == 0) {
        // 0x802353F4: addiu       $v0, $zero, 0x41
        ctx->r2 = ADD32(0, 0X41);
            goto L_80235458;
    }
    // 0x802353F4: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x802353F8: beq         $a1, $v0, L_802354D8
    if (ctx->r5 == ctx->r2) {
        // 0x802353FC: slti        $v0, $a1, 0x42
        ctx->r2 = SIGNED(ctx->r5) < 0X42 ? 1 : 0;
            goto L_802354D8;
    }
    // 0x802353FC: slti        $v0, $a1, 0x42
    ctx->r2 = SIGNED(ctx->r5) < 0X42 ? 1 : 0;
    // 0x80235400: beq         $v0, $zero, L_80235420
    if (ctx->r2 == 0) {
        // 0x80235404: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_80235420;
    }
    // 0x80235404: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80235408: beq         $a1, $v0, L_802354D8
    if (ctx->r5 == ctx->r2) {
        // 0x8023540C: addiu       $v0, $zero, 0x30
        ctx->r2 = ADD32(0, 0X30);
            goto L_802354D8;
    }
    // 0x8023540C: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80235410: beq         $a1, $v0, L_802355D8
    if (ctx->r5 == ctx->r2) {
        // 0x80235414: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802355D8;
    }
    // 0x80235414: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235418: j           L_802356D0
    // 0x8023541C: nop

        goto L_802356D0;
    // 0x8023541C: nop

L_80235420:
    // 0x80235420: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x80235424: beq         $a1, $v0, L_802354D8
    if (ctx->r5 == ctx->r2) {
        // 0x80235428: slti        $v0, $a1, 0x79
        ctx->r2 = SIGNED(ctx->r5) < 0X79 ? 1 : 0;
            goto L_802354D8;
    }
    // 0x80235428: slti        $v0, $a1, 0x79
    ctx->r2 = SIGNED(ctx->r5) < 0X79 ? 1 : 0;
    // 0x8023542C: beq         $v0, $zero, L_80235444
    if (ctx->r2 == 0) {
        // 0x80235430: addiu       $v0, $zero, 0x5A
        ctx->r2 = ADD32(0, 0X5A);
            goto L_80235444;
    }
    // 0x80235430: addiu       $v0, $zero, 0x5A
    ctx->r2 = ADD32(0, 0X5A);
    // 0x80235434: beq         $a1, $v0, L_802355D8
    if (ctx->r5 == ctx->r2) {
        // 0x80235438: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802355D8;
    }
    // 0x80235438: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023543C: j           L_802356D0
    // 0x80235440: nop

        goto L_802356D0;
    // 0x80235440: nop

L_80235444:
    // 0x80235444: addiu       $v0, $zero, 0xBE
    ctx->r2 = ADD32(0, 0XBE);
    // 0x80235448: beq         $a1, $v0, L_802355D8
    if (ctx->r5 == ctx->r2) {
        // 0x8023544C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802355D8;
    }
    // 0x8023544C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235450: j           L_802356D0
    // 0x80235454: nop

        goto L_802356D0;
    // 0x80235454: nop

L_80235458:
    // 0x80235458: addiu       $v0, $zero, 0x13E
    ctx->r2 = ADD32(0, 0X13E);
    // 0x8023545C: beq         $a1, $v0, L_80235508
    if (ctx->r5 == ctx->r2) {
        // 0x80235460: slti        $v0, $a1, 0x13F
        ctx->r2 = SIGNED(ctx->r5) < 0X13F ? 1 : 0;
            goto L_80235508;
    }
    // 0x80235460: slti        $v0, $a1, 0x13F
    ctx->r2 = SIGNED(ctx->r5) < 0X13F ? 1 : 0;
    // 0x80235464: beq         $v0, $zero, L_802354A0
    if (ctx->r2 == 0) {
        // 0x80235468: addiu       $v0, $zero, 0xFA
        ctx->r2 = ADD32(0, 0XFA);
            goto L_802354A0;
    }
    // 0x80235468: addiu       $v0, $zero, 0xFA
    ctx->r2 = ADD32(0, 0XFA);
    // 0x8023546C: beq         $a1, $v0, L_802354F0
    if (ctx->r5 == ctx->r2) {
        // 0x80235470: slti        $v0, $a1, 0xFB
        ctx->r2 = SIGNED(ctx->r5) < 0XFB ? 1 : 0;
            goto L_802354F0;
    }
    // 0x80235470: slti        $v0, $a1, 0xFB
    ctx->r2 = SIGNED(ctx->r5) < 0XFB ? 1 : 0;
    // 0x80235474: beq         $v0, $zero, L_8023548C
    if (ctx->r2 == 0) {
        // 0x80235478: addiu       $v0, $zero, 0xE1
        ctx->r2 = ADD32(0, 0XE1);
            goto L_8023548C;
    }
    // 0x80235478: addiu       $v0, $zero, 0xE1
    ctx->r2 = ADD32(0, 0XE1);
    // 0x8023547C: beq         $a1, $v0, L_802355D8
    if (ctx->r5 == ctx->r2) {
        // 0x80235480: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802355D8;
    }
    // 0x80235480: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235484: j           L_802356D0
    // 0x80235488: nop

        goto L_802356D0;
    // 0x80235488: nop

L_8023548C:
    // 0x8023548C: addiu       $v0, $zero, 0x131
    ctx->r2 = ADD32(0, 0X131);
    // 0x80235490: beq         $a1, $v0, L_802355D8
    if (ctx->r5 == ctx->r2) {
        // 0x80235494: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802355D8;
    }
    // 0x80235494: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235498: j           L_802356D0
    // 0x8023549C: nop

        goto L_802356D0;
    // 0x8023549C: nop

L_802354A0:
    // 0x802354A0: addiu       $v0, $zero, 0x186
    ctx->r2 = ADD32(0, 0X186);
    // 0x802354A4: beq         $a1, $v0, L_80235508
    if (ctx->r5 == ctx->r2) {
        // 0x802354A8: slti        $v0, $a1, 0x187
        ctx->r2 = SIGNED(ctx->r5) < 0X187 ? 1 : 0;
            goto L_80235508;
    }
    // 0x802354A8: slti        $v0, $a1, 0x187
    ctx->r2 = SIGNED(ctx->r5) < 0X187 ? 1 : 0;
    // 0x802354AC: beq         $v0, $zero, L_802354C4
    if (ctx->r2 == 0) {
        // 0x802354B0: addiu       $v0, $zero, 0x172
        ctx->r2 = ADD32(0, 0X172);
            goto L_802354C4;
    }
    // 0x802354B0: addiu       $v0, $zero, 0x172
    ctx->r2 = ADD32(0, 0X172);
    // 0x802354B4: beq         $a1, $v0, L_802355D8
    if (ctx->r5 == ctx->r2) {
        // 0x802354B8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802355D8;
    }
    // 0x802354B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802354BC: j           L_802356D0
    // 0x802354C0: nop

        goto L_802356D0;
    // 0x802354C0: nop

L_802354C4:
    // 0x802354C4: addiu       $v0, $zero, 0x1AE
    ctx->r2 = ADD32(0, 0X1AE);
    // 0x802354C8: beq         $a1, $v0, L_802355D8
    if (ctx->r5 == ctx->r2) {
        // 0x802354CC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802355D8;
    }
    // 0x802354CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802354D0: j           L_802356D0
    // 0x802354D4: nop

        goto L_802356D0;
    // 0x802354D4: nop

L_802354D8:
    // 0x802354D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802354DC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802354E0: jal         0x8023570C
    // 0x802354E4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_8023570C_ovl28(rdram, ctx);
        goto after_4;
    // 0x802354E4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x802354E8: j           L_802356D0
    // 0x802354EC: nop

        goto L_802356D0;
    // 0x802354EC: nop

L_802354F0:
    // 0x802354F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802354F4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802354F8: jal         0x8023570C
    // 0x802354FC: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    func_8023570C_ovl28(rdram, ctx);
        goto after_5;
    // 0x802354FC: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    after_5:
    // 0x80235500: j           L_802356D0
    // 0x80235504: nop

        goto L_802356D0;
    // 0x80235504: nop

L_80235508:
    // 0x80235508: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023550C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80235510: jal         0x8023570C
    // 0x80235514: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_8023570C_ovl28(rdram, ctx);
        goto after_6;
    // 0x80235514: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_6:
    // 0x80235518: j           L_802356D0
    // 0x8023551C: nop

        goto L_802356D0;
    // 0x8023551C: nop

L_80235520:
    // 0x80235520: bne         $v1, $v0, L_802356D0
    if (ctx->r3 != ctx->r2) {
        // 0x80235524: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802356D0;
    }
    // 0x80235524: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80235528: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x8023552C: bne         $v1, $v0, L_802356D0
    if (ctx->r3 != ctx->r2) {
        // 0x80235530: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802356D0;
    }
    // 0x80235530: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235534: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80235538: j           L_8023561C
    // 0x8023553C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
        goto L_8023561C;
    // 0x8023553C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
L_80235540:
    // 0x80235540: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80235544: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x80235548: lw          $a1, 0x10($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X10);
    // 0x8023554C: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80235550: beq         $a1, $v0, L_802355EC
    if (ctx->r5 == ctx->r2) {
        // 0x80235554: slti        $v0, $a1, 0x3D
        ctx->r2 = SIGNED(ctx->r5) < 0X3D ? 1 : 0;
            goto L_802355EC;
    }
    // 0x80235554: slti        $v0, $a1, 0x3D
    ctx->r2 = SIGNED(ctx->r5) < 0X3D ? 1 : 0;
    // 0x80235558: beq         $v0, $zero, L_80235578
    if (ctx->r2 == 0) {
        // 0x8023555C: addiu       $v0, $zero, 0x11
        ctx->r2 = ADD32(0, 0X11);
            goto L_80235578;
    }
    // 0x8023555C: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x80235560: beq         $a1, $v0, L_802355EC
    if (ctx->r5 == ctx->r2) {
        // 0x80235564: addiu       $v0, $zero, 0x2D
        ctx->r2 = ADD32(0, 0X2D);
            goto L_802355EC;
    }
    // 0x80235564: addiu       $v0, $zero, 0x2D
    ctx->r2 = ADD32(0, 0X2D);
    // 0x80235568: beq         $a1, $v0, L_802355D8
    if (ctx->r5 == ctx->r2) {
        // 0x8023556C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802355D8;
    }
    // 0x8023556C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235570: j           L_802356D0
    // 0x80235574: nop

        goto L_802356D0;
    // 0x80235574: nop

L_80235578:
    // 0x80235578: addiu       $v0, $zero, 0x96
    ctx->r2 = ADD32(0, 0X96);
    // 0x8023557C: beq         $a1, $v0, L_802355D4
    if (ctx->r5 == ctx->r2) {
        // 0x80235580: addiu       $v0, $zero, 0xAA
        ctx->r2 = ADD32(0, 0XAA);
            goto L_802355D4;
    }
    // 0x80235580: addiu       $v0, $zero, 0xAA
    ctx->r2 = ADD32(0, 0XAA);
    // 0x80235584: bne         $a1, $v0, L_802356D0
    if (ctx->r5 != ctx->r2) {
        // 0x80235588: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802356D0;
    }
    // 0x80235588: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023558C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80235590: j           L_8023561C
    // 0x80235594: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
        goto L_8023561C;
    // 0x80235594: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
L_80235598:
    // 0x80235598: lw          $a1, 0x10($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X10);
    // 0x8023559C: addiu       $v0, $zero, 0x118
    ctx->r2 = ADD32(0, 0X118);
    // 0x802355A0: beq         $a1, $v0, L_802355EC
    if (ctx->r5 == ctx->r2) {
        // 0x802355A4: slti        $v0, $a1, 0x119
        ctx->r2 = SIGNED(ctx->r5) < 0X119 ? 1 : 0;
            goto L_802355EC;
    }
    // 0x802355A4: slti        $v0, $a1, 0x119
    ctx->r2 = SIGNED(ctx->r5) < 0X119 ? 1 : 0;
    // 0x802355A8: beq         $v0, $zero, L_802355C0
    if (ctx->r2 == 0) {
        // 0x802355AC: addiu       $v0, $zero, 0xF8
        ctx->r2 = ADD32(0, 0XF8);
            goto L_802355C0;
    }
    // 0x802355AC: addiu       $v0, $zero, 0xF8
    ctx->r2 = ADD32(0, 0XF8);
    // 0x802355B0: beq         $a1, $v0, L_802355D8
    if (ctx->r5 == ctx->r2) {
        // 0x802355B4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802355D8;
    }
    // 0x802355B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802355B8: j           L_802356D0
    // 0x802355BC: nop

        goto L_802356D0;
    // 0x802355BC: nop

L_802355C0:
    // 0x802355C0: addiu       $v0, $zero, 0x121
    ctx->r2 = ADD32(0, 0X121);
    // 0x802355C4: beq         $a1, $v0, L_80235604
    if (ctx->r5 == ctx->r2) {
        // 0x802355C8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80235604;
    }
    // 0x802355C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802355CC: j           L_802356D0
    // 0x802355D0: nop

        goto L_802356D0;
    // 0x802355D0: nop

L_802355D4:
    // 0x802355D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_802355D8:
    // 0x802355D8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802355DC: jal         0x8023570C
    // 0x802355E0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8023570C_ovl28(rdram, ctx);
        goto after_7;
    // 0x802355E0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_7:
    // 0x802355E4: j           L_802356D0
    // 0x802355E8: nop

        goto L_802356D0;
    // 0x802355E8: nop

L_802355EC:
    // 0x802355EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802355F0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802355F4: jal         0x8023570C
    // 0x802355F8: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    func_8023570C_ovl28(rdram, ctx);
        goto after_8;
    // 0x802355F8: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    after_8:
    // 0x802355FC: j           L_802356D0
    // 0x80235600: nop

        goto L_802356D0;
    // 0x80235600: nop

L_80235604:
    // 0x80235604: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80235608: jal         0x802356E4
    // 0x8023560C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_802356E4_ovl28(rdram, ctx);
        goto after_9;
    // 0x8023560C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_9:
    // 0x80235610: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235614: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80235618: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
L_8023561C:
    // 0x8023561C: jal         0x8023570C
    // 0x80235620: nop

    func_8023570C_ovl28(rdram, ctx);
        goto after_10;
    // 0x80235620: nop

    after_10:
L_80235624:
    // 0x80235624: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80235628: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023562C: j           L_802356D0
    // 0x80235630: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_802356D0;
    // 0x80235630: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80235634:
    // 0x80235634: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x80235638: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x8023563C: bne         $v1, $v0, L_802356D0
    if (ctx->r3 != ctx->r2) {
        // 0x80235640: nop
    
            goto L_802356D0;
    }
    // 0x80235640: nop

    // 0x80235644: lw          $v0, 0x10($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X10);
    // 0x80235648: addiu       $v1, $v0, -0x19
    ctx->r3 = ADD32(ctx->r2, -0X19);
    // 0x8023564C: sltiu       $v0, $v1, 0x15
    ctx->r2 = ctx->r3 < 0X15 ? 1 : 0;
    // 0x80235650: beq         $v0, $zero, L_802356D0
    if (ctx->r2 == 0) {
        // 0x80235654: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_802356D0;
    }
    // 0x80235654: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80235658: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8023565C: addu        $at, $at, $v0
    gpr jr_addend_80235664 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80235660: lw          $v0, 0x5DD0($at)
    ctx->r2 = ADD32(ctx->r1, 0X5DD0);
    // 0x80235664: jr          $v0
    // 0x80235668: nop

    switch (jr_addend_80235664 >> 2) {
        case 0: goto L_8023566C; break;
        case 1: goto L_802356D0; break;
        case 2: goto L_802356D0; break;
        case 3: goto L_802356D0; break;
        case 4: goto L_802356D0; break;
        case 5: goto L_80235674; break;
        case 6: goto L_802356D0; break;
        case 7: goto L_802356D0; break;
        case 8: goto L_802356D0; break;
        case 9: goto L_802356D0; break;
        case 10: goto L_8023567C; break;
        case 11: goto L_802356D0; break;
        case 12: goto L_802356D0; break;
        case 13: goto L_802356D0; break;
        case 14: goto L_802356D0; break;
        case 15: goto L_80235684; break;
        case 16: goto L_802356D0; break;
        case 17: goto L_802356D0; break;
        case 18: goto L_802356D0; break;
        case 19: goto L_802356D0; break;
        case 20: goto L_802356B0; break;
        default: switch_error(__func__, 0x80235664, 0x80255DD0);
    }
    // 0x80235668: nop

L_8023566C:
    // 0x8023566C: j           L_80235698
    // 0x80235670: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_80235698;
    // 0x80235670: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80235674:
    // 0x80235674: j           L_80235698
    // 0x80235678: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_80235698;
    // 0x80235678: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8023567C:
    // 0x8023567C: j           L_80235698
    // 0x80235680: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_80235698;
    // 0x80235680: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80235684:
    // 0x80235684: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80235688: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023568C: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80235690: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80235694: sb          $zero, 0x12($s1)
    MEM_B(0X12, ctx->r17) = 0;
L_80235698:
    // 0x80235698: jal         0x80235864
    // 0x8023569C: nop

    func_80235864_ovl28(rdram, ctx);
        goto after_11;
    // 0x8023569C: nop

    after_11:
    // 0x802356A0: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x802356A4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802356A8: j           L_802356D0
    // 0x802356AC: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
        goto L_802356D0;
    // 0x802356AC: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
L_802356B0:
    // 0x802356B0: jal         0x80235864
    // 0x802356B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80235864_ovl28(rdram, ctx);
        goto after_12;
    // 0x802356B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_12:
    // 0x802356B8: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x802356BC: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x802356C0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802356C4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802356C8: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x802356CC: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
L_802356D0:
    // 0x802356D0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802356D4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802356D8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802356DC: jr          $ra
    // 0x802356E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802356E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80225DC8_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225DC8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80225DCC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80225DD0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80225DD4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225DD8: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80225DDC: bne         $v0, $zero, L_80225E34
    if (ctx->r2 != 0) {
        // 0x80225DE0: addiu       $s0, $zero, 0x1
        ctx->r16 = ADD32(0, 0X1);
            goto L_80225E34;
    }
    // 0x80225DE0: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x80225DE4: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80225DE8: lh          $a0, 0x6390($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X6390);
    // 0x80225DEC: lui         $s1, 0x8025
    ctx->r17 = S32(0X8025 << 16);
    // 0x80225DF0: addiu       $s1, $s1, 0x380
    ctx->r17 = ADD32(ctx->r17, 0X380);
    // 0x80225DF4: jal         0x80071ACC
    // 0x80225DF8: lui         $a1, 0x7
    ctx->r5 = S32(0X7 << 16);
    func_80071ACC_4CECC(rdram, ctx);
        goto after_0;
    // 0x80225DF8: lui         $a1, 0x7
    ctx->r5 = S32(0X7 << 16);
    after_0:
    // 0x80225DFC: sll         $v0, $s0, 24
    ctx->r2 = S32(ctx->r16 << 24);
L_80225E00:
    // 0x80225E00: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80225E04: sll         $a0, $v0, 2
    ctx->r4 = S32(ctx->r2 << 2);
    // 0x80225E08: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80225E0C: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x80225E10: jal         0x8005FA7C
    // 0x80225E14: addu        $a0, $a0, $s1
    ctx->r4 = ADD32(ctx->r4, ctx->r17);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_1;
    // 0x80225E14: addu        $a0, $a0, $s1
    ctx->r4 = ADD32(ctx->r4, ctx->r17);
    after_1:
    // 0x80225E18: addiu       $v0, $s0, 0x1
    ctx->r2 = ADD32(ctx->r16, 0X1);
    // 0x80225E1C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80225E20: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80225E24: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80225E28: slti        $v0, $v0, 0xB
    ctx->r2 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x80225E2C: bne         $v0, $zero, L_80225E00
    if (ctx->r2 != 0) {
        // 0x80225E30: sll         $v0, $s0, 24
        ctx->r2 = S32(ctx->r16 << 24);
            goto L_80225E00;
    }
    // 0x80225E30: sll         $v0, $s0, 24
    ctx->r2 = S32(ctx->r16 << 24);
L_80225E34:
    // 0x80225E34: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80225E38: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80225E3C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225E40: jr          $ra
    // 0x80225E44: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80225E44: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022C888_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C888: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022C88C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022C890: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022C894: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022C898: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022C89C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C8A0: lw          $v0, 0x33C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X33C);
    // 0x8022C8A4: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x8022C8A8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022C8AC: beq         $v0, $zero, L_8022C8B8
    if (ctx->r2 == 0) {
        // 0x8022C8B0: addiu       $s2, $s1, 0x328
        ctx->r18 = ADD32(ctx->r17, 0X328);
            goto L_8022C8B8;
    }
    // 0x8022C8B0: addiu       $s2, $s1, 0x328
    ctx->r18 = ADD32(ctx->r17, 0X328);
    // 0x8022C8B4: sh          $zero, 0x330($s1)
    MEM_H(0X330, ctx->r17) = 0;
L_8022C8B8:
    // 0x8022C8B8: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x8022C8BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C8C0: beq         $v1, $v0, L_8022C974
    if (ctx->r3 == ctx->r2) {
        // 0x8022C8C4: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8022C974;
    }
    // 0x8022C8C4: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022C8C8: beql        $v0, $zero, L_8022C8E0
    if (ctx->r2 == 0) {
        // 0x8022C8CC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022C8E0;
    }
    goto skip_0;
    // 0x8022C8CC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022C8D0: beq         $v1, $zero, L_8022C8F0
    if (ctx->r3 == 0) {
        // 0x8022C8D4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022C8F0;
    }
    // 0x8022C8D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C8D8: j           L_8022CB30
    // 0x8022C8DC: nop

        goto L_8022CB30;
    // 0x8022C8DC: nop

L_8022C8E0:
    // 0x8022C8E0: beq         $v1, $v0, L_8022CB04
    if (ctx->r3 == ctx->r2) {
        // 0x8022C8E4: nop
    
            goto L_8022CB04;
    }
    // 0x8022C8E4: nop

    // 0x8022C8E8: j           L_8022CB30
    // 0x8022C8EC: nop

        goto L_8022CB30;
    // 0x8022C8EC: nop

L_8022C8F0:
    // 0x8022C8F0: lh          $a0, 0x56($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X56);
    // 0x8022C8F4: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x8022C8F8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022C8FC: jal         0x800324B4
    // 0x8022C900: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    func_800324B4_D8B4(rdram, ctx);
        goto after_0;
    // 0x8022C900: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    after_0:
    // 0x8022C904: lh          $a0, 0x56($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X56);
    // 0x8022C908: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8022C90C: srl         $v0, $v0, 7
    ctx->r2 = S32(U32(ctx->r2) >> 7);
    // 0x8022C910: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x8022C914: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8022C918: sh          $v0, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r2;
    // 0x8022C91C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022C920: jal         0x80032498
    // 0x8022C924: sh          $v0, 0x4E($s1)
    MEM_H(0X4E, ctx->r17) = ctx->r2;
    func_80032498_D898(rdram, ctx);
        goto after_1;
    // 0x8022C924: sh          $v0, 0x4E($s1)
    MEM_H(0X4E, ctx->r17) = ctx->r2;
    after_1:
    // 0x8022C928: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    // 0x8022C92C: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8022C930: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x8022C934: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8022C938: srl         $v0, $v0, 7
    ctx->r2 = S32(U32(ctx->r2) >> 7);
    // 0x8022C93C: sh          $v0, 0x48($s1)
    MEM_H(0X48, ctx->r17) = ctx->r2;
    // 0x8022C940: addiu       $v0, $zero, 0x73
    ctx->r2 = ADD32(0, 0X73);
    // 0x8022C944: sh          $v0, 0x32C($s1)
    MEM_H(0X32C, ctx->r17) = ctx->r2;
    // 0x8022C948: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x8022C94C: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x8022C950: lh          $v1, 0x32E($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X32E);
    // 0x8022C954: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8022C958: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x8022C95C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022C960: lhu         $v0, 0x328($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X328);
    // 0x8022C964: lbu         $v1, 0xA($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0XA);
    // 0x8022C968: andi        $v0, $v0, 0xFFF7
    ctx->r2 = ctx->r2 & 0XFFF7;
    // 0x8022C96C: sh          $v0, 0x328($s1)
    MEM_H(0X328, ctx->r17) = ctx->r2;
    // 0x8022C970: sh          $v1, 0x330($s1)
    MEM_H(0X330, ctx->r17) = ctx->r3;
L_8022C974:
    // 0x8022C974: lb          $v1, 0xA6($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XA6);
    // 0x8022C978: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C97C: bne         $v1, $v0, L_8022C98C
    if (ctx->r3 != ctx->r2) {
        // 0x8022C980: addiu       $a0, $zero, 0xB5
        ctx->r4 = ADD32(0, 0XB5);
            goto L_8022C98C;
    }
    // 0x8022C980: addiu       $a0, $zero, 0xB5
    ctx->r4 = ADD32(0, 0XB5);
    // 0x8022C984: jal         0x8002A33C
    // 0x8022C988: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x8022C988: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_2:
L_8022C98C:
    // 0x8022C98C: lhu         $v0, 0x4($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X4);
    // 0x8022C990: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022C994: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
    // 0x8022C998: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C99C: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022C9A0: bltz        $a0, L_8022C9B8
    if (SIGNED(ctx->r4) < 0) {
        // 0x8022C9A4: lui         $v1, 0x200
        ctx->r3 = S32(0X200 << 16);
            goto L_8022C9B8;
    }
    // 0x8022C9A4: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x8022C9A8: lw          $v0, 0x14($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X14);
    // 0x8022C9AC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022C9B0: beq         $v0, $zero, L_8022C9D0
    if (ctx->r2 == 0) {
        // 0x8022C9B4: nop
    
            goto L_8022C9D0;
    }
    // 0x8022C9B4: nop

L_8022C9B8:
    // 0x8022C9B8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022C9BC: sh          $zero, 0x8($s2)
    MEM_H(0X8, ctx->r18) = 0;
    // 0x8022C9C0: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x8022C9C4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022C9C8: j           L_8022CB04
    // 0x8022C9CC: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
        goto L_8022CB04;
    // 0x8022C9CC: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
L_8022C9D0:
    // 0x8022C9D0: lh          $v0, 0x6E($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X6E);
    // 0x8022C9D4: bgtzl       $v0, L_8022C9E8
    if (SIGNED(ctx->r2) > 0) {
        // 0x8022C9D8: slti        $v0, $a0, 0x64
        ctx->r2 = SIGNED(ctx->r4) < 0X64 ? 1 : 0;
            goto L_8022C9E8;
    }
    goto skip_1;
    // 0x8022C9D8: slti        $v0, $a0, 0x64
    ctx->r2 = SIGNED(ctx->r4) < 0X64 ? 1 : 0;
    skip_1:
    // 0x8022C9DC: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8022C9E0: j           L_8022CB2C
    // 0x8022C9E4: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
        goto L_8022CB2C;
    // 0x8022C9E4: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
L_8022C9E8:
    // 0x8022C9E8: beq         $v0, $zero, L_8022CA60
    if (ctx->r2 == 0) {
        // 0x8022C9EC: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022CA60;
    }
    // 0x8022C9EC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022C9F0: lh          $v0, 0x44($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X44);
    // 0x8022C9F4: lw          $v1, 0x1C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X1C);
    // 0x8022C9F8: lh          $s0, 0x16($s1)
    ctx->r16 = MEM_H(ctx->r17, 0X16);
    // 0x8022C9FC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022CA00: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022CA04: jal         0x8003E934
    // 0x8022CA08: sw          $v1, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r3;
    func_8003E934_19D34(rdram, ctx);
        goto after_3;
    // 0x8022CA08: sw          $v1, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r3;
    after_3:
    // 0x8022CA0C: beq         $s0, $v0, L_8022CA3C
    if (ctx->r16 == ctx->r2) {
        // 0x8022CA10: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_8022CA3C;
    }
    // 0x8022CA10: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8022CA14: lh          $v0, 0x46($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X46);
    // 0x8022CA18: lw          $v1, 0x20($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X20);
    // 0x8022CA1C: lhu         $a0, 0x46($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X46);
    // 0x8022CA20: lhu         $a1, 0x4E($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X4E);
    // 0x8022CA24: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022CA28: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022CA2C: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x8022CA30: sw          $v1, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r3;
    // 0x8022CA34: j           L_8022CA40
    // 0x8022CA38: sh          $a0, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r4;
        goto L_8022CA40;
    // 0x8022CA38: sh          $a0, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r4;
L_8022CA3C:
    // 0x8022CA3C: sh          $v0, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r2;
L_8022CA40:
    // 0x8022CA40: addiu       $a0, $s1, 0x1C
    ctx->r4 = ADD32(ctx->r17, 0X1C);
    // 0x8022CA44: lh          $v0, 0x48($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X48);
    // 0x8022CA48: lw          $v1, 0x24($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X24);
    // 0x8022CA4C: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x8022CA50: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022CA54: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022CA58: jal         0x8004DD04
    // 0x8022CA5C: sw          $v1, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r3;
    func_8004DD04_29104(rdram, ctx);
        goto after_4;
    // 0x8022CA5C: sw          $v1, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r3;
    after_4:
L_8022CA60:
    // 0x8022CA60: jal         0x80040F30
    // 0x8022CA64: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_5;
    // 0x8022CA64: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_5:
    // 0x8022CA68: beq         $v0, $zero, L_8022CB30
    if (ctx->r2 == 0) {
        // 0x8022CA6C: sw          $v0, 0x48($s2)
        MEM_W(0X48, ctx->r18) = ctx->r2;
            goto L_8022CB30;
    }
    // 0x8022CA6C: sw          $v0, 0x48($s2)
    MEM_W(0X48, ctx->r18) = ctx->r2;
    // 0x8022CA70: andi        $v0, $v0, 0xF00
    ctx->r2 = ctx->r2 & 0XF00;
    // 0x8022CA74: beq         $v0, $zero, L_8022CA84
    if (ctx->r2 == 0) {
        // 0x8022CA78: addiu       $a0, $zero, 0xDE
        ctx->r4 = ADD32(0, 0XDE);
            goto L_8022CA84;
    }
    // 0x8022CA78: addiu       $a0, $zero, 0xDE
    ctx->r4 = ADD32(0, 0XDE);
    // 0x8022CA7C: jal         0x8002A33C
    // 0x8022CA80: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_6;
    // 0x8022CA80: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_6:
L_8022CA84:
    // 0x8022CA84: lw          $v1, 0x48($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X48);
    // 0x8022CA88: andi        $v0, $v1, 0x100
    ctx->r2 = ctx->r3 & 0X100;
    // 0x8022CA8C: beql        $v0, $zero, L_8022CAA8
    if (ctx->r2 == 0) {
        // 0x8022CA90: andi        $v0, $v1, 0x200
        ctx->r2 = ctx->r3 & 0X200;
            goto L_8022CAA8;
    }
    goto skip_2;
    // 0x8022CA90: andi        $v0, $v1, 0x200
    ctx->r2 = ctx->r3 & 0X200;
    skip_2:
    // 0x8022CA94: lh          $v0, 0x44($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X44);
    // 0x8022CA98: bltzl       $v0, L_8022CAA0
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022CA9C: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_8022CAA0;
    }
    goto skip_3;
    // 0x8022CA9C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_3:
L_8022CAA0:
    // 0x8022CAA0: j           L_8022CABC
    // 0x8022CAA4: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
        goto L_8022CABC;
    // 0x8022CAA4: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
L_8022CAA8:
    // 0x8022CAA8: beq         $v0, $zero, L_8022CAC0
    if (ctx->r2 == 0) {
        // 0x8022CAAC: nop
    
            goto L_8022CAC0;
    }
    // 0x8022CAAC: nop

    // 0x8022CAB0: lh          $v0, 0x44($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X44);
    // 0x8022CAB4: bltzl       $v0, L_8022CABC
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022CAB8: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_8022CABC;
    }
    goto skip_4;
    // 0x8022CAB8: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_4:
L_8022CABC:
    // 0x8022CABC: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
L_8022CAC0:
    // 0x8022CAC0: lw          $v1, 0x48($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X48);
    // 0x8022CAC4: andi        $v0, $v1, 0x400
    ctx->r2 = ctx->r3 & 0X400;
    // 0x8022CAC8: beq         $v0, $zero, L_8022CAE8
    if (ctx->r2 == 0) {
        // 0x8022CACC: andi        $v0, $v1, 0x800
        ctx->r2 = ctx->r3 & 0X800;
            goto L_8022CAE8;
    }
    // 0x8022CACC: andi        $v0, $v1, 0x800
    ctx->r2 = ctx->r3 & 0X800;
    // 0x8022CAD0: lh          $v0, 0x48($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X48);
    // 0x8022CAD4: bltzl       $v0, L_8022CADC
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022CAD8: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_8022CADC;
    }
    goto skip_5;
    // 0x8022CAD8: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_5:
L_8022CADC:
    // 0x8022CADC: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8022CAE0: j           L_8022CB30
    // 0x8022CAE4: sh          $v0, 0x48($s1)
    MEM_H(0X48, ctx->r17) = ctx->r2;
        goto L_8022CB30;
    // 0x8022CAE4: sh          $v0, 0x48($s1)
    MEM_H(0X48, ctx->r17) = ctx->r2;
L_8022CAE8:
    // 0x8022CAE8: beq         $v0, $zero, L_8022CB30
    if (ctx->r2 == 0) {
        // 0x8022CAEC: nop
    
            goto L_8022CB30;
    }
    // 0x8022CAEC: nop

    // 0x8022CAF0: lh          $v0, 0x48($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X48);
    // 0x8022CAF4: bltzl       $v0, L_8022CAFC
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022CAF8: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_8022CAFC;
    }
    goto skip_6;
    // 0x8022CAF8: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_6:
L_8022CAFC:
    // 0x8022CAFC: j           L_8022CB30
    // 0x8022CB00: sh          $v0, 0x48($s1)
    MEM_H(0X48, ctx->r17) = ctx->r2;
        goto L_8022CB30;
    // 0x8022CB00: sh          $v0, 0x48($s1)
    MEM_H(0X48, ctx->r17) = ctx->r2;
L_8022CB04:
    // 0x8022CB04: lhu         $v0, 0x4($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X4);
    // 0x8022CB08: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022CB0C: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
    // 0x8022CB10: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022CB14: bgez        $v0, L_8022CB30
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022CB18: nop
    
            goto L_8022CB30;
    }
    // 0x8022CB18: nop

    // 0x8022CB1C: sh          $zero, 0x6E($s1)
    MEM_H(0X6E, ctx->r17) = 0;
    // 0x8022CB20: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8022CB24: sh          $zero, 0x38($s2)
    MEM_H(0X38, ctx->r18) = 0;
    // 0x8022CB28: ori         $v0, $v0, 0x41
    ctx->r2 = ctx->r2 | 0X41;
L_8022CB2C:
    // 0x8022CB2C: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
L_8022CB30:
    // 0x8022CB30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022CB34: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022CB38: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022CB3C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022CB40: jr          $ra
    // 0x8022CB44: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022CB44: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8024882C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024882C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80248830: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80248834: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80248838: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8024883C: jal         0x802492D0
    // 0x80248840: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    func_802492D0_ovl28(rdram, ctx);
        goto after_0;
    // 0x80248840: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    after_0:
    // 0x80248844: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80248848: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x8024884C: sb          $v1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r3;
    // 0x80248850: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    // 0x80248854: xori        $v0, $v0, 0x6
    ctx->r2 = ctx->r2 ^ 0X6;
    // 0x80248858: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x8024885C: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x80248860: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80248864: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80248868: jr          $ra
    // 0x8024886C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8024886C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022EF84_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EF84: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022EF88: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022EF8C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022EF90: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022EF94: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022EF98: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022EF9C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022EFA0: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022EFA4: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022EFA8: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022EFAC: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022EFB0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022EFB4: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
    // 0x8022EFB8: sh          $v1, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r3;
    // 0x8022EFBC: jal         0x8022FEA8
    // 0x8022EFC0: sb          $a1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r5;
    func_8022FEA8_ovl28(rdram, ctx);
        goto after_0;
    // 0x8022EFC0: sb          $a1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r5;
    after_0:
    // 0x8022EFC4: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x8022EFC8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022EFCC: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022EFD0: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8022EFD4: addiu       $s2, $s2, 0x49C4
    ctx->r18 = ADD32(ctx->r18, 0X49C4);
    // 0x8022EFD8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022EFDC: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x8022EFE0: jal         0x8004F820
    // 0x8022EFE4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x8022EFE4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022EFE8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022EFEC: bgez        $v0, L_8022F01C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022EFF0: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_8022F01C;
    }
    // 0x8022EFF0: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x8022EFF4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022EFF8: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022EFFC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022F000: jal         0x8004F820
    // 0x8022F004: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x8022F004: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x8022F008: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022F00C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022F010: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8022F014: j           L_8022F038
    // 0x8022F018: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_8022F038;
    // 0x8022F018: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_8022F01C:
    // 0x8022F01C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022F020: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022F024: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022F028: jal         0x8004F820
    // 0x8022F02C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x8022F02C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_3:
    // 0x8022F030: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022F034: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_8022F038:
    // 0x8022F038: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022F03C: sh          $v0, 0x6($s3)
    MEM_H(0X6, ctx->r19) = ctx->r2;
    // 0x8022F040: lbu         $a3, 0xC($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XC);
    // 0x8022F044: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022F048: jal         0x800610AC
    // 0x8022F04C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_4;
    // 0x8022F04C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x8022F050: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022F054: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022F058: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022F05C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022F060: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F064: jr          $ra
    // 0x8022F068: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022F068: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80225E48_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225E48: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80225E4C: bne         $v0, $zero, L_80225E68
    if (ctx->r2 != 0) {
        // 0x80225E50: nop
    
            goto L_80225E68;
    }
    // 0x80225E50: nop

    // 0x80225E54: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80225E58: addiu       $v1, $v1, 0x49B0
    ctx->r3 = ADD32(ctx->r3, 0X49B0);
    // 0x80225E5C: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80225E60: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80225E64: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
L_80225E68:
    // 0x80225E68: jr          $ra
    // 0x80225E6C: nop

    TRACE_RETURN()
    return;
    // 0x80225E6C: nop

;}
RECOMP_FUNC void func_80233038_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233038: lhu         $v0, 0x348($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X348);
    // 0x8023303C: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x80233040: beq         $v0, $zero, L_80233050
    if (ctx->r2 == 0) {
        // 0x80233044: addiu       $v1, $a0, 0x348
        ctx->r3 = ADD32(ctx->r4, 0X348);
            goto L_80233050;
    }
    // 0x80233044: addiu       $v1, $a0, 0x348
    ctx->r3 = ADD32(ctx->r4, 0X348);
    // 0x80233048: j           L_80233054
    // 0x8023304C: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
        goto L_80233054;
    // 0x8023304C: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
L_80233050:
    // 0x80233050: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_80233054:
    // 0x80233054: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x80233058: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023305C: sb          $v0, 0x74($a0)
    MEM_B(0X74, ctx->r4) = ctx->r2;
    // 0x80233060: sh          $zero, 0x4($v1)
    MEM_H(0X4, ctx->r3) = 0;
    // 0x80233064: sh          $zero, 0x6($v1)
    MEM_H(0X6, ctx->r3) = 0;
    // 0x80233068: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x8023306C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80233070: jr          $ra
    // 0x80233074: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80233074: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_8022A674_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A674: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A678: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022A67C: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x8022A680: bne         $v0, $zero, L_8022A694
    if (ctx->r2 != 0) {
        // 0x8022A684: nop
    
            goto L_8022A694;
    }
    // 0x8022A684: nop

    // 0x8022A688: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022A68C: jal         0x8005FA7C
    // 0x8022A690: addiu       $a0, $a0, 0x204C
    ctx->r4 = ADD32(ctx->r4, 0X204C);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_0;
    // 0x8022A690: addiu       $a0, $a0, 0x204C
    ctx->r4 = ADD32(ctx->r4, 0X204C);
    after_0:
L_8022A694:
    // 0x8022A694: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022A698: jr          $ra
    // 0x8022A69C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A69C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022F730_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F730: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022F734: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x8022F738: bne         $v0, $zero, L_8022F770
    if (ctx->r2 != 0) {
        // 0x8022F73C: addiu       $a1, $a0, 0x348
        ctx->r5 = ADD32(ctx->r4, 0X348);
            goto L_8022F770;
    }
    // 0x8022F73C: addiu       $a1, $a0, 0x348
    ctx->r5 = ADD32(ctx->r4, 0X348);
    // 0x8022F740: lhu         $v0, 0x348($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X348);
    // 0x8022F744: lh          $v1, 0x34E($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X34E);
    // 0x8022F748: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x8022F74C: beq         $v1, $zero, L_8022F75C
    if (ctx->r3 == 0) {
        // 0x8022F750: sh          $v0, 0x348($a0)
        MEM_H(0X348, ctx->r4) = ctx->r2;
            goto L_8022F75C;
    }
    // 0x8022F750: sh          $v0, 0x348($a0)
    MEM_H(0X348, ctx->r4) = ctx->r2;
    // 0x8022F754: j           L_8022F760
    // 0x8022F758: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_8022F760;
    // 0x8022F758: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_8022F75C:
    // 0x8022F75C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_8022F760:
    // 0x8022F760: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x8022F764: lbu         $v0, 0x3($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X3);
    // 0x8022F768: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022F76C: sb          $v0, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r2;
L_8022F770:
    // 0x8022F770: jr          $ra
    // 0x8022F774: nop

    TRACE_RETURN()
    return;
    // 0x8022F774: nop

;}
RECOMP_FUNC void func_80231D0C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231D0C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80231D10: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231D14: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80231D18: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80231D1C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80231D20: jal         0x80040F30
    // 0x80231D24: sw          $zero, 0x35C($s0)
    MEM_W(0X35C, ctx->r16) = 0;
    func_80040F30_1C330(rdram, ctx);
        goto after_0;
    // 0x80231D24: sw          $zero, 0x35C($s0)
    MEM_W(0X35C, ctx->r16) = 0;
    after_0:
    // 0x80231D28: andi        $v0, $v0, 0xF00
    ctx->r2 = ctx->r2 & 0XF00;
    // 0x80231D2C: beq         $v0, $zero, L_80231D40
    if (ctx->r2 == 0) {
        // 0x80231D30: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_80231D40;
    }
    // 0x80231D30: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x80231D34: lw          $v0, 0x35C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X35C);
    // 0x80231D38: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80231D3C: sw          $v0, 0x35C($s0)
    MEM_W(0X35C, ctx->r16) = ctx->r2;
L_80231D40:
    // 0x80231D40: lb          $v0, 0x74($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X74);
    // 0x80231D44: bne         $v0, $zero, L_80231DAC
    if (ctx->r2 != 0) {
        // 0x80231D48: nop
    
            goto L_80231DAC;
    }
    // 0x80231D48: nop

    // 0x80231D4C: jal         0x8003E934
    // 0x80231D50: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x80231D50: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80231D54: lh          $v1, 0x2E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2E);
    // 0x80231D58: beql        $v0, $v1, L_80231D98
    if (ctx->r2 == ctx->r3) {
        // 0x80231D5C: sh          $v0, 0x16($s0)
        MEM_H(0X16, ctx->r16) = ctx->r2;
            goto L_80231D98;
    }
    goto skip_0;
    // 0x80231D5C: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    skip_0:
    // 0x80231D60: lb          $v0, 0x75($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X75);
    // 0x80231D64: bne         $v0, $zero, L_80231DA0
    if (ctx->r2 != 0) {
        // 0x80231D68: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80231DA0;
    }
    // 0x80231D68: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80231D6C: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x80231D70: jal         0x8009A3B4
    // 0x80231D74: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80231D74: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80231D78: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80231D7C: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x80231D80: jal         0x8009A3B4
    // 0x80231D84: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80231D84: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_3:
    // 0x80231D88: lw          $v0, 0x35C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X35C);
    // 0x80231D8C: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x80231D90: j           L_80231DA0
    // 0x80231D94: sw          $v0, 0x35C($s0)
    MEM_W(0X35C, ctx->r16) = ctx->r2;
        goto L_80231DA0;
    // 0x80231D94: sw          $v0, 0x35C($s0)
    MEM_W(0X35C, ctx->r16) = ctx->r2;
L_80231D98:
    // 0x80231D98: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80231D9C: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_80231DA0:
    // 0x80231DA0: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x80231DA4: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80231DA8: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
L_80231DAC:
    // 0x80231DAC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80231DB0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80231DB4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231DB8: jr          $ra
    // 0x80231DBC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80231DBC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80243E98_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80243E98: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80243E9C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80243EA0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80243EA4: sw          $ra, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r31;
    // 0x80243EA8: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x80243EAC: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x80243EB0: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80243EB4: lh          $v0, 0x44($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X44);
    // 0x80243EB8: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80243EBC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80243EC0: lh          $v0, 0x46($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X46);
    // 0x80243EC4: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80243EC8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80243ECC: lh          $v0, 0x48($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X48);
    // 0x80243ED0: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80243ED4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80243ED8: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x80243EDC: blez        $v0, L_80244010
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80243EE0: addu        $t1, $zero, $zero
        ctx->r9 = ADD32(0, 0);
            goto L_80244010;
    }
    // 0x80243EE0: addu        $t1, $zero, $zero
    ctx->r9 = ADD32(0, 0);
    // 0x80243EE4: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
L_80243EE8:
    // 0x80243EE8: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x80243EEC: addiu       $s2, $t1, 0x1
    ctx->r18 = ADD32(ctx->r9, 0X1);
    // 0x80243EF0: andi        $v1, $s2, 0xFF
    ctx->r3 = ctx->r18 & 0XFF;
    // 0x80243EF4: mult        $a1, $v1
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80243EF8: mflo        $a0
    ctx->r4 = lo;
    // 0x80243EFC: lw          $a2, 0x14($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X14);
    // 0x80243F00: nop

    // 0x80243F04: mult        $a2, $v1
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80243F08: mflo        $t0
    ctx->r8 = lo;
    // 0x80243F0C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80243F10: nop

    // 0x80243F14: mult        $a3, $v1
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80243F18: mflo        $v1
    ctx->r3 = lo;
    // 0x80243F1C: andi        $s1, $t1, 0xFF
    ctx->r17 = ctx->r9 & 0XFF;
    // 0x80243F20: nop

    // 0x80243F24: mult        $a1, $s1
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80243F28: mflo        $a1
    ctx->r5 = lo;
    // 0x80243F2C: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x80243F30: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80243F34: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80243F38: sh          $v0, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r2;
    // 0x80243F3C: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x80243F40: mult        $a2, $s1
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80243F44: mflo        $a2
    ctx->r6 = lo;
    // 0x80243F48: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x80243F4C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80243F50: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    // 0x80243F54: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x80243F58: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80243F5C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80243F60: sh          $v0, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r2;
    // 0x80243F64: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x80243F68: mult        $a3, $s1
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80243F6C: mflo        $a3
    ctx->r7 = lo;
    // 0x80243F70: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80243F74: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80243F78: sh          $v0, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r2;
    // 0x80243F7C: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x80243F80: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x80243F84: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80243F88: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80243F8C: sh          $v0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r2;
    // 0x80243F90: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x80243F94: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x80243F98: lui         $a2, 0x8025
    ctx->r6 = S32(0X8025 << 16);
    // 0x80243F9C: addiu       $a2, $a2, 0x4BC0
    ctx->r6 = ADD32(ctx->r6, 0X4BC0);
    // 0x80243FA0: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x80243FA4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80243FA8: ori         $a3, $zero, 0xFFFF
    ctx->r7 = 0 | 0XFFFF;
    // 0x80243FAC: jal         0x8003F780
    // 0x80243FB0: sh          $v0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r2;
    func_8003F780_1AB80(rdram, ctx);
        goto after_0;
    // 0x80243FB0: sh          $v0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r2;
    after_0:
    // 0x80243FB4: beq         $v0, $zero, L_80243FFC
    if (ctx->r2 == 0) {
        // 0x80243FB8: addu        $t1, $s2, $zero
        ctx->r9 = ADD32(ctx->r18, 0);
            goto L_80243FFC;
    }
    // 0x80243FB8: addu        $t1, $s2, $zero
    ctx->r9 = ADD32(ctx->r18, 0);
    // 0x80243FBC: jal         0x8004F144
    // 0x80243FC0: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_1;
    // 0x80243FC0: nop

    after_1:
    // 0x80243FC4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80243FC8: beq         $v1, $zero, L_80243FF4
    if (ctx->r3 == 0) {
        // 0x80243FCC: addiu       $v0, $zero, 0x1E
        ctx->r2 = ADD32(0, 0X1E);
            goto L_80243FF4;
    }
    // 0x80243FCC: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x80243FD0: sb          $s3, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r19;
    // 0x80243FD4: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x80243FD8: sb          $s3, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r19;
    // 0x80243FDC: lhu         $v0, 0x28($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X28);
    // 0x80243FE0: sh          $v0, 0x1C($v1)
    MEM_H(0X1C, ctx->r3) = ctx->r2;
    // 0x80243FE4: lhu         $v0, 0x2A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X2A);
    // 0x80243FE8: sh          $v0, 0x1E($v1)
    MEM_H(0X1E, ctx->r3) = ctx->r2;
    // 0x80243FEC: lhu         $v0, 0x2C($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X2C);
    // 0x80243FF0: sh          $v0, 0x20($v1)
    MEM_H(0X20, ctx->r3) = ctx->r2;
L_80243FF4:
    // 0x80243FF4: j           L_80244014
    // 0x80243FF8: addiu       $v0, $s1, 0x1
    ctx->r2 = ADD32(ctx->r17, 0X1);
        goto L_80244014;
    // 0x80243FF8: addiu       $v0, $s1, 0x1
    ctx->r2 = ADD32(ctx->r17, 0X1);
L_80243FFC:
    // 0x80243FFC: lb          $v1, 0xF($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XF);
    // 0x80244000: andi        $v0, $t1, 0xFF
    ctx->r2 = ctx->r9 & 0XFF;
    // 0x80244004: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80244008: bne         $v0, $zero, L_80243EE8
    if (ctx->r2 != 0) {
        // 0x8024400C: nop
    
            goto L_80243EE8;
    }
    // 0x8024400C: nop

L_80244010:
    // 0x80244010: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80244014:
    // 0x80244014: lw          $ra, 0x40($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X40);
    // 0x80244018: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x8024401C: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x80244020: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80244024: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80244028: jr          $ra
    // 0x8024402C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x8024402C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80225810_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225810: jr          $ra
    // 0x80225814: nop

    TRACE_RETURN()
    return;
    // 0x80225814: nop

    // 0x80225818: nop

    // 0x8022581C: nop

;}
RECOMP_FUNC void func_8024C510_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024C510: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8024C514: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8024C518: jal         0x8004F5C4
    // 0x8024C51C: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x8024C51C: nop

    after_0:
    // 0x8024C520: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8024C524: jr          $ra
    // 0x8024C528: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8024C528: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8024C52C: nop

;}
RECOMP_FUNC void func_80233078_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233078: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8023307C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80233080: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80233084: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80233088: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8023308C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80233090: lh          $v1, 0x34C($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X34C);
    // 0x80233094: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x80233098: slti        $v0, $v1, 0x9
    ctx->r2 = SIGNED(ctx->r3) < 0X9 ? 1 : 0;
    // 0x8023309C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x802330A0: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x802330A4: slti        $v1, $v1, 0x5
    ctx->r3 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
    // 0x802330A8: beq         $v1, $zero, L_802330B4
    if (ctx->r3 == 0) {
        // 0x802330AC: andi        $s0, $v0, 0x18
        ctx->r16 = ctx->r2 & 0X18;
            goto L_802330B4;
    }
    // 0x802330AC: andi        $s0, $v0, 0x18
    ctx->r16 = ctx->r2 & 0X18;
    // 0x802330B0: addiu       $s0, $zero, 0x38
    ctx->r16 = ADD32(0, 0X38);
L_802330B4:
    // 0x802330B4: lh          $v1, 0x34E($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X34E);
    // 0x802330B8: slti        $v0, $v1, 0x9
    ctx->r2 = SIGNED(ctx->r3) < 0X9 ? 1 : 0;
    // 0x802330BC: bnel        $v0, $zero, L_802330C4
    if (ctx->r2 != 0) {
        // 0x802330C0: addiu       $s2, $zero, 0x15
        ctx->r18 = ADD32(0, 0X15);
            goto L_802330C4;
    }
    goto skip_0;
    // 0x802330C0: addiu       $s2, $zero, 0x15
    ctx->r18 = ADD32(0, 0X15);
    skip_0:
L_802330C4:
    // 0x802330C4: slti        $v0, $v1, 0x5
    ctx->r2 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
    // 0x802330C8: bnel        $v0, $zero, L_802330D0
    if (ctx->r2 != 0) {
        // 0x802330CC: addiu       $s2, $zero, -0x15
        ctx->r18 = ADD32(0, -0X15);
            goto L_802330D0;
    }
    goto skip_1;
    // 0x802330CC: addiu       $s2, $zero, -0x15
    ctx->r18 = ADD32(0, -0X15);
    skip_1:
L_802330D0:
    // 0x802330D0: lhu         $v1, 0x34E($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X34E);
    // 0x802330D4: lw          $a0, 0x354($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X354);
    // 0x802330D8: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    // 0x802330DC: sh          $v0, 0x34C($s1)
    MEM_H(0X34C, ctx->r17) = ctx->r2;
    // 0x802330E0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802330E4: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    // 0x802330E8: jal         0x800324B4
    // 0x802330EC: sh          $v1, 0x34E($s1)
    MEM_H(0X34E, ctx->r17) = ctx->r3;
    func_800324B4_D8B4(rdram, ctx);
        goto after_0;
    // 0x802330EC: sh          $v1, 0x34E($s1)
    MEM_H(0X34E, ctx->r17) = ctx->r3;
    after_0:
    // 0x802330F0: nop

    // 0x802330F4: mult        $v0, $s0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802330F8: mflo        $v0
    ctx->r2 = lo;
    // 0x802330FC: lw          $a0, 0x354($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X354);
    // 0x80233100: lhu         $v1, 0x14($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X14);
    // 0x80233104: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    // 0x80233108: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x8023310C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80233110: jal         0x80032498
    // 0x80233114: sh          $v1, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r3;
    func_80032498_D898(rdram, ctx);
        goto after_1;
    // 0x80233114: sh          $v1, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r3;
    after_1:
    // 0x80233118: nop

    // 0x8023311C: mult        $v0, $s0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80233120: mflo        $v0
    ctx->r2 = lo;
    // 0x80233124: lhu         $v1, 0x16($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X16);
    // 0x80233128: addu        $v1, $v1, $s2
    ctx->r3 = ADD32(ctx->r3, ctx->r18);
    // 0x8023312C: sh          $v1, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r3;
    // 0x80233130: lhu         $v1, 0x18($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X18);
    // 0x80233134: lb          $a0, 0xA7($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XA7);
    // 0x80233138: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x8023313C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80233140: bgez        $a0, L_80233170
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80233144: sh          $v1, 0x18($s1)
        MEM_H(0X18, ctx->r17) = ctx->r3;
            goto L_80233170;
    }
    // 0x80233144: sh          $v1, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r3;
    // 0x80233148: lhu         $v0, 0x348($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X348);
    // 0x8023314C: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x80233150: bne         $v0, $zero, L_8023315C
    if (ctx->r2 != 0) {
        // 0x80233154: addiu       $v0, $zero, 0xE
        ctx->r2 = ADD32(0, 0XE);
            goto L_8023315C;
    }
    // 0x80233154: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x80233158: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
L_8023315C:
    // 0x8023315C: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x80233160: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x80233164: sb          $zero, 0x74($s1)
    MEM_B(0X74, ctx->r17) = 0;
    // 0x80233168: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023316C: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_80233170:
    // 0x80233170: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80233174: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80233178: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8023317C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80233180: jr          $ra
    // 0x80233184: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80233184: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80229884_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229884: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229888: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022988C: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80229890: beq         $v1, $zero, L_802298A8
    if (ctx->r3 == 0) {
        // 0x80229894: addiu       $v0, $zero, 0xF
        ctx->r2 = ADD32(0, 0XF);
            goto L_802298A8;
    }
    // 0x80229894: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x80229898: beq         $v1, $v0, L_80229914
    if (ctx->r3 == ctx->r2) {
        // 0x8022989C: nop
    
            goto L_80229914;
    }
    // 0x8022989C: nop

    // 0x802298A0: j           L_8022993C
    // 0x802298A4: nop

        goto L_8022993C;
    // 0x802298A4: nop

L_802298A8:
    // 0x802298A8: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x802298AC: addiu       $v1, $v1, 0x49B0
    ctx->r3 = ADD32(ctx->r3, 0X49B0);
    // 0x802298B0: sb          $zero, 0x6($a0)
    MEM_B(0X6, ctx->r4) = 0;
    // 0x802298B4: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x802298B8: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802298BC: lw          $a0, 0x199C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X199C);
    // 0x802298C0: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x802298C4: lw          $a1, 0x194C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X194C);
    // 0x802298C8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802298CC: sb          $zero, 0x63CD($at)
    MEM_B(0X63CD, ctx->r1) = 0;
    // 0x802298D0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802298D4: sb          $zero, 0x63CC($at)
    MEM_B(0X63CC, ctx->r1) = 0;
    // 0x802298D8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802298DC: sb          $zero, 0x63CB($at)
    MEM_B(0X63CB, ctx->r1) = 0;
    // 0x802298E0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802298E4: sb          $zero, 0x63CA($at)
    MEM_B(0X63CA, ctx->r1) = 0;
    // 0x802298E8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802298EC: sb          $zero, 0x63C9($at)
    MEM_B(0X63C9, ctx->r1) = 0;
    // 0x802298F0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802298F4: sb          $zero, 0x63C8($at)
    MEM_B(0X63C8, ctx->r1) = 0;
    // 0x802298F8: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x802298FC: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80229900: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80229904: sw          $a0, 0x63D4($at)
    MEM_W(0X63D4, ctx->r1) = ctx->r4;
    // 0x80229908: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022990C: j           L_8022993C
    // 0x80229910: sw          $a1, 0x63D0($at)
    MEM_W(0X63D0, ctx->r1) = ctx->r5;
        goto L_8022993C;
    // 0x80229910: sw          $a1, 0x63D0($at)
    MEM_W(0X63D0, ctx->r1) = ctx->r5;
L_80229914:
    // 0x80229914: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80229918: lw          $v0, 0x1990($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1990);
    // 0x8022991C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80229920: sb          $zero, 0x63CD($at)
    MEM_B(0X63CD, ctx->r1) = 0;
    // 0x80229924: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80229928: sb          $zero, 0x63CC($at)
    MEM_B(0X63CC, ctx->r1) = 0;
    // 0x8022992C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80229930: sb          $zero, 0x63CB($at)
    MEM_B(0X63CB, ctx->r1) = 0;
    // 0x80229934: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80229938: sw          $v0, 0x63D4($at)
    MEM_W(0X63D4, ctx->r1) = ctx->r2;
L_8022993C:
    // 0x8022993C: jal         0x80228310
    // 0x80229940: nop

    func_80228310_ovl28(rdram, ctx);
        goto after_0;
    // 0x80229940: nop

    after_0:
    // 0x80229944: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80229948: jr          $ra
    // 0x8022994C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022994C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80242690_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80242690: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80242694: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80242698: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8024269C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802426A0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802426A4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802426A8: lw          $v0, 0x4B50($at)
    ctx->r2 = MEM_W(ctx->r1, 0X4B50);
    // 0x802426AC: jalr        $v0
    // 0x802426B0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802426B0: nop

    after_0:
    // 0x802426B4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802426B8: jr          $ra
    // 0x802426BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802426BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E2B0_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E2B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E2B4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E2B8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E2BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022E2C0: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x8022E2C4: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022E2C8: jal         0x8004FA7C
    // 0x8022E2CC: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x8022E2CC: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_0:
    // 0x8022E2D0: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022E2D4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022E2D8: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022E2DC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022E2E0: bne         $v0, $zero, L_8022E344
    if (ctx->r2 != 0) {
        // 0x8022E2E4: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8022E344;
    }
    // 0x8022E2E4: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022E2E8: lh          $v1, 0x35C($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X35C);
    // 0x8022E2EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E2F0: beq         $v1, $zero, L_8022E334
    if (ctx->r3 == 0) {
        // 0x8022E2F4: sb          $v0, 0xA($s0)
        MEM_B(0XA, ctx->r16) = ctx->r2;
            goto L_8022E334;
    }
    // 0x8022E2F4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022E2F8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022E2FC: addiu       $a1, $s0, 0x354
    ctx->r5 = ADD32(ctx->r16, 0X354);
    // 0x8022E300: jal         0x8009A3B4
    // 0x8022E304: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022E304: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x8022E308: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x8022E30C: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x8022E310: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x8022E314: lhu         $a1, 0x352($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X352);
    // 0x8022E318: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022E31C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022E320: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022E324: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8022E328: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x8022E32C: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x8022E330: sh          $a1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r5;
L_8022E334:
    // 0x8022E334: lhu         $v1, 0x35C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X35C);
    // 0x8022E338: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E33C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022E340: sh          $v0, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = ctx->r2;
L_8022E344:
    // 0x8022E344: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022E348: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E34C: jr          $ra
    // 0x8022E350: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E350: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802446D8_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802446D8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802446DC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802446E0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802446E4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802446E8: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x802446EC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802446F0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802446F4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802446F8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802446FC: jal         0x8003E964
    // 0x80244700: ori         $a3, $zero, 0xFFFF
    ctx->r7 = 0 | 0XFFFF;
    func_8003E964_19D64(rdram, ctx);
        goto after_0;
    // 0x80244700: ori         $a3, $zero, 0xFFFF
    ctx->r7 = 0 | 0XFFFF;
    after_0:
    // 0x80244704: slti        $v0, $v0, -0x11
    ctx->r2 = SIGNED(ctx->r2) < -0X11 ? 1 : 0;
    // 0x80244708: beq         $v0, $zero, L_80244720
    if (ctx->r2 == 0) {
        // 0x8024470C: addiu       $a0, $s0, 0x34
        ctx->r4 = ADD32(ctx->r16, 0X34);
            goto L_80244720;
    }
    // 0x8024470C: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80244710: jal         0x8004F4F8
    // 0x80244714: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_1;
    // 0x80244714: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80244718: j           L_802447F8
    // 0x8024471C: nop

        goto L_802447F8;
    // 0x8024471C: nop

L_80244720:
    // 0x80244720: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80244724: jal         0x8009A3B4
    // 0x80244728: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80244728: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x8024472C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80244730: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80244734: jal         0x8009A3B4
    // 0x80244738: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80244738: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x8024473C: lh          $v0, 0x44($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X44);
    // 0x80244740: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x80244744: lh          $a0, 0x48($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X48);
    // 0x80244748: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    // 0x8024474C: sll         $v0, $v0, 12
    ctx->r2 = S32(ctx->r2 << 12);
    // 0x80244750: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80244754: lh          $v0, 0x46($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X46);
    // 0x80244758: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
    // 0x8024475C: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x80244760: sll         $a0, $a0, 12
    ctx->r4 = S32(ctx->r4 << 12);
    // 0x80244764: addu        $a1, $a1, $a0
    ctx->r5 = ADD32(ctx->r5, ctx->r4);
    // 0x80244768: sw          $a1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r5;
    // 0x8024476C: lhu         $a0, 0x24($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X24);
    // 0x80244770: sll         $v0, $v0, 12
    ctx->r2 = S32(ctx->r2 << 12);
    // 0x80244774: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80244778: lhu         $v0, 0x1C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1C);
    // 0x8024477C: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80244780: lhu         $v1, 0x20($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X20);
    // 0x80244784: sh          $a0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r4;
    // 0x80244788: sh          $a0, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r4;
    // 0x8024478C: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x80244790: sh          $v0, 0xAC($s0)
    MEM_H(0XAC, ctx->r16) = ctx->r2;
    // 0x80244794: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
    // 0x80244798: jal         0x8004F144
    // 0x8024479C: sh          $v1, 0xAE($s0)
    MEM_H(0XAE, ctx->r16) = ctx->r3;
    func_8004F144_2A544(rdram, ctx);
        goto after_4;
    // 0x8024479C: sh          $v1, 0xAE($s0)
    MEM_H(0XAE, ctx->r16) = ctx->r3;
    after_4:
    // 0x802447A0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x802447A4: beq         $a0, $zero, L_802447F8
    if (ctx->r4 == 0) {
        // 0x802447A8: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_802447F8;
    }
    // 0x802447A8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802447AC: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x802447B0: addiu       $v0, $zero, 0x1D
    ctx->r2 = ADD32(0, 0X1D);
    // 0x802447B4: sb          $v0, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r2;
    // 0x802447B8: sb          $zero, 0xD($a0)
    MEM_B(0XD, ctx->r4) = 0;
    // 0x802447BC: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x802447C0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802447C4: bne         $v1, $v0, L_802447D4
    if (ctx->r3 != ctx->r2) {
        // 0x802447C8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802447D4;
    }
    // 0x802447C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802447CC: j           L_802447D8
    // 0x802447D0: sb          $zero, 0xE($a0)
    MEM_B(0XE, ctx->r4) = 0;
        goto L_802447D8;
    // 0x802447D0: sb          $zero, 0xE($a0)
    MEM_B(0XE, ctx->r4) = 0;
L_802447D4:
    // 0x802447D4: sb          $v0, 0xE($a0)
    MEM_B(0XE, ctx->r4) = ctx->r2;
L_802447D8:
    // 0x802447D8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802447DC: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
    // 0x802447E0: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x802447E4: sh          $v0, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r2;
    // 0x802447E8: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x802447EC: sh          $v0, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r2;
    // 0x802447F0: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x802447F4: sh          $v0, 0x3C($a0)
    MEM_H(0X3C, ctx->r4) = ctx->r2;
L_802447F8:
    // 0x802447F8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802447FC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80244800: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80244804: jr          $ra
    // 0x80244808: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80244808: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8024480C: nop

;}
RECOMP_FUNC void func_8022E080_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E080: lhu         $v0, 0x350($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X350);
    // 0x8022E084: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022E088: sh          $v0, 0x350($a0)
    MEM_H(0X350, ctx->r4) = ctx->r2;
    // 0x8022E08C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022E090: bne         $v0, $zero, L_8022E09C
    if (ctx->r2 != 0) {
        // 0x8022E094: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022E09C;
    }
    // 0x8022E094: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E098: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_8022E09C:
    // 0x8022E09C: jr          $ra
    // 0x8022E0A0: nop

    TRACE_RETURN()
    return;
    // 0x8022E0A0: nop

;}
RECOMP_FUNC void func_80247E20_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80247E20: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80247E24: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80247E28: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80247E2C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80247E30: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80247E34: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x80247E38: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80247E3C: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    // 0x80247E40: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80247E44: bne         $v0, $zero, L_80247E74
    if (ctx->r2 != 0) {
        // 0x80247E48: addiu       $s0, $s1, 0x18
        ctx->r16 = ADD32(ctx->r17, 0X18);
            goto L_80247E74;
    }
    // 0x80247E48: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x80247E4C: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x80247E50: addiu       $a0, $zero, 0x186
    ctx->r4 = ADD32(0, 0X186);
    // 0x80247E54: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80247E58: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80247E5C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80247E60: jal         0x8002A2F8
    // 0x80247E64: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    func_8002A2F8_56F8(rdram, ctx);
        goto after_0;
    // 0x80247E64: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    after_0:
    // 0x80247E68: jal         0x80060590
    // 0x80247E6C: addiu       $a0, $zero, 0x7B2
    ctx->r4 = ADD32(0, 0X7B2);
    func_80060590_3B990(rdram, ctx);
        goto after_1;
    // 0x80247E6C: addiu       $a0, $zero, 0x7B2
    ctx->r4 = ADD32(0, 0X7B2);
    after_1:
    // 0x80247E70: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
L_80247E74:
    // 0x80247E74: jal         0x8002C678
    // 0x80247E78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C678_7A78(rdram, ctx);
        goto after_2;
    // 0x80247E78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80247E7C: lb          $a0, 0xC($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XC);
    // 0x80247E80: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80247E84: lbu         $v1, 0xB($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XB);
    // 0x80247E88: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80247E8C: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    // 0x80247E90: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80247E94: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80247E98: jal         0x800319B4
    // 0x80247E9C: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
    func_800319B4_CDB4(rdram, ctx);
        goto after_3;
    // 0x80247E9C: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
    after_3:
    // 0x80247EA0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80247EA4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80247EA8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80247EAC: jr          $ra
    // 0x80247EB0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80247EB0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
